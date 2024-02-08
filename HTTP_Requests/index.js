import axios from "axios";
import needle from "needle";
import XMLHttpRequest from "xhr2";

// based promise-based, allows timeout limit and more configuration
const fetchDataAxios = async () => {
  try {
    // Making a GET request with Axios
    const axiosResponse = await axios.get(
      "https://api.weatherapi.com/v1/current.json?key=1f8382b33541493dacf173454240802&q=Cairo&aqi=no"
    );
    console.log("Axios GET response:", axiosResponse.data.current.temp_f);
  } catch (error) {
    console.error("Axios error:", error);
  }
};

// based callback-based API
const fetchDataNeedle = async () => {
  // Making a GET request with Needle

  // callback-based
  needle.get(
    "https://api.weatherapi.com/v1/current.json?key=1f8382b33541493dacf173454240802&q=Cairo&aqi=no",
    (error, response) => {
      if (!error && response.statusCode === 200) {
        console.log("Needle GET response:", response.body.current.temp_f);
      } else {
        console.error("Needle error:", error || response.statusCode);
      }
    }
  );

  // promise approach
  const res = await needle(
    "get",
    "https://api.weatherapi.com/v1/current.json?key=1f8382b33541493dacf173454240802&q=Cairo&aqi=no"
  );

  console.log("Needle GET response:", res.body.current.temp_f);
};

// Unlike XMLHttpRequest that is a callback-based API, Fetch is promise-based

// based promise-based
const fetchDataFetch = async () => {
  try {
    // Making a GET request with Fetch API
    const fetchResponse = await fetch(
      "https://api.weatherapi.com/v1/current.json?key=1f8382b33541493dacf173454240802&q=Cairo&aqi=no"
    );
    console.log(fetchResponse.headers.get("content-type"));
    const fetchJson = await fetchResponse.json();
    console.log("Fetch GET response:", fetchJson.current.temp_f);
  } catch (error) {
    console.error("Fetch API error:", error);
  }
};

// based callback-based API
const fetchDataXMLHttpRequest = () => {
  const xhr = new XMLHttpRequest();

  // Making a GET request with XMLHttpRequest
  xhr.open(
    "GET",
    "https://api.weatherapi.com/v1/current.json?key=1f8382b33541493dacf173454240802&q=Cairo&aqi=no"
  );

  xhr.send();

  xhr.onload = () => {
    if (xhr.status === 200) {
      console.log(
        "XMLHttpRequest GET response:",
        JSON.parse(xhr.responseText).current.temp_f
      );
    } else {
      console.error("XMLHttpRequest error:", xhr.statusText);
    }
  };

  xhr.onerror = () => {
    console.error("XMLHttpRequest request failed");
  };
};

// Call each function to execute the requests
fetchDataAxios();
fetchDataNeedle();
fetchDataFetch();
fetchDataXMLHttpRequest();
