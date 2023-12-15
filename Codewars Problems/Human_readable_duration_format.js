function formatDuration(seconds) {
    if (!seconds) {
        return "now";
    }

    let second = seconds % 60;
    // console.log(second);

    seconds -= second;
    seconds /= 60;

    let minutes = seconds % 60;
    // console.log(minutes);

    seconds -= minutes;
    seconds /= 60;

    let hours = seconds % 60;
    // console.log(hours);

    let ans = "";
    if (hours) {
        if (hours > 1) {
            ans += `${hours} hours`;
        } else {
            ans += `${hours} hour`;
        }
    }

    if (minutes) {
        if (ans) {
            ans += `, `;
        }

        if (minutes > 1) {
            ans += `${minutes} minutes`;
        } else {
            ans += `${minutes} minute`;
        }
    }

    if (second) {
        if (ans) {
            if (second > 1) {
                ans += ` and ${second} seconds`;
            } else {
                ans += ` and ${second} second`;
            }
        } else {
            if (second > 1) {
                ans += `${second} seconds`;
            } else {
                ans += `${second} second`;
            }
        }
    }

    return ans;
}

formatDuration(1);
formatDuration(62);
formatDuration(120);
formatDuration(3600);
formatDuration(3662);
