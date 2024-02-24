Action()
{

	/* Search Dogs */

	lr_think_time(27);

	web_submit_form("Catalog.action;jsessionid=592E11B4C8A2562F495B70E8D496E2D7", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=keyword", "Value={Tommy}", ENDITEM, 
		"Name=searchProducts", "Value=Search", ENDITEM, 
		LAST);

	lr_think_time(4);

	web_link("Return to Main Menu", 
		"Text=Return to Main Menu", 
		"Snapshot=t3.inf", 
		LAST);

	/* click dogs
	*/

	lr_think_time(14);

	web_image("sm_dogs.gif", 
		"Src=../images/sm_dogs.gif", 
		"Snapshot=t4.inf", 
		LAST);

	lr_think_time(4);

	web_link("K9-RT-02", 
		"Text=K9-RT-02", 
		"Snapshot=t5.inf", 
		LAST);

	lr_think_time(6);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:nCbp9jvGk612Pk2qN_upkqFkWMFLeoIv6iOYsoKtrl4&cup2hreq=469043b2ad709cece058f866adc92bd2e93401e3fa4f7139ecd7dbe807e1385d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{8ffb5773-c7ad-46d1-9e6e-a28fd1600ccd}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{cc91996a-1e4b-4b26-af71-43e607cc2212}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"4.10.2710.0 to Windows (x86/x64)\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{14561c5a-3a0a-48be-a815-c30a7c262780}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{148fdb84-8b8f-4f64-90d7-7264f101a939}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol/20or:\",\"cohortname\":\"Control\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{b0424048-fd38-4360-bafc-a1c966298d1c}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\""
		":{\"ping_freshness\":\"{909ea34d-db06-4622-b5ec-0a8931ee30a2}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{37dbc5fc-3cdb-4582-a600-3dd0c3e9f08a}\",\"rd\":6262},\"updatecheck"
		"\":{},\"version\":\"434\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.630414f6b053d4455bba45e07513742a8bfc72e591f3a010f0e636a83df4eed7\"}]},\"ping\":{\"ping_freshness\":\"{2855417b-812d-4275-afe4-3ab5451b966a}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2024.2.21.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{6024f6ac-ecb0-4758-bcc2-f18c8dbaef61}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{79dd62c2-c301-4388-a0c8-65ffe80768f6}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.93bad6a3d7ac28485190495b33735420f459ac0a31f8a958f46f52cdfe1dbd7a\"}]},\"ping\":{\"ping_freshness\":\"{dceaa967-b6c1-4f43-8b47-eb9c708ca3a4}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"8562\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{4a7baf31-d5ab-4991-9653-ab5fe38d1690}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{8c9c9990-6de4-414f-9918-d643ceb25019}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{00ad48f2-4cb4-4b91-97af-aff68adc232d}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\","
		"\"packages\":{\"package\":[{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{9d7b2971-cf6a-45d7-97da-54b30aec7e6f}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\"ping_freshness\":\"{7beb369c-0c17-4285-8898-04ebb1175d65}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{0050c73d-40bb-4008-923f-b42e9c38909e}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{918d0a0e-3ef2-4cad-8aaf-70ef4ede2c10}\",\"rd\":6262},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{98a92a3c-d7d3-4bf3-88e3-bda5e6d5e696}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6259,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.94b8a51eb078298283bcc90c1930d2207f263431522df89385d05d4271dc11fa\"}]},\"ping\":{\"ping_freshness\":\"{8dc9d9ee-1728-4f19-a3bc-8875ee51a985}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2024.2.20.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{3cc82cb7-a716-4f61-a1c9-437312cbaf59}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x/28tx:28u3@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\""
		"fp\":\"1.5eb999428f0762c5d05ef5b922c551c2dc27c134c4d10fb57e27c24c28d00c5a\"}]},\"ping\":{\"ping_freshness\":\"{a58a3037-62ea-4127-bcf6-f2259f173c7c}\",\"rd\":6262},\"updatecheck\":{},\"version\":\"2024.2.21.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"122.0.6261.69\",\"protocol\":\"3.1\",\"requestid\":\"{d4bfde0e-865b-4028-8130-e5a52b37fad8}\",\"sessionid\":\"{c43f0403-9d9b-4816-8175-7e1bba03b276}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"124.0.6315.0\"},\"updaterversion\":\"122.0.6261.69\"}}", 
		LAST);

	/* add to cart */

	lr_think_time(6);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-24", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-RT-02", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("Cart.action_2", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=EST-24", "Value=1", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_2", 
		"Text=Return to Main Menu", 
		"Snapshot=t9.inf", 
		LAST);

	/* search cats */

	lr_think_time(25);

	web_submit_form("Catalog.action_2", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=keyword", "Value={Puppy}", ENDITEM, 
		"Name=searchProducts", "Value=Search", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_3", 
		"Text=Return to Main Menu", 
		"Snapshot=t11.inf", 
		LAST);

	/* click cats
	*/

	lr_think_time(12);

	web_image("sm_cats.gif", 
		"Src=../images/sm_cats.gif", 
		"Snapshot=t12.inf", 
		LAST);

	lr_think_time(6);

	web_link("FL-DLH-02", 
		"Text=FL-DLH-02", 
		"Snapshot=t13.inf", 
		LAST);

	lr_think_time(6);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=2", 
		"Snapshot=t14.inf", 
		LAST);

	web_submit_form("Cart.action_3", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=EST-24", "Value=1", ENDITEM, 
		"Name=EST-17", "Value=1", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_4", 
		"Text=Return to Main Menu", 
		"Snapshot=t16.inf", 
		LAST);

	return 0;
}