const char * wifi_icon(float wifi_strength) {
    if (isnan(wifi_strength))
			return "󰤮"; // No-wifi
	else if (wifi_strength < 10)
			return "󰤯";  // low-wifi
	else if (wifi_strength < 30)
			return "󰤟"; // wifi-1
	else if (wifi_strength < 50)
			return "󰤢"; // wifi-2
	else if (wifi_strength < 75)
			return "󰤥"; // wifi-3
	else
			return "󰤨"; // wifi-4
}
