const char *data_test[] = {
	"e868c6b0e717e8d6dc7ebcb2c9162f580e0e3a5d8850a26a1a5ef4d05164c29400000000000000000000000000000000000000006ba1051a0659e950e42966ce",
	"e48dba3c220111af34db57883c6cb2e19f1eced707487ae612a843d63bc2fff700000000000000000000000000000000000000006ba1051a1459e95082196d90",
	"e6476364c8bf9f6daf58d2a8d410e38c0cf2f55e5b7faa73faf7652bfb5b990d00000000000000000000000000000000000000006ba1051a1459e950fa3e1682",
	"2a015a8dce8a64f6b464e2c4d84a03d3ff577d9cdc913d7c552348a53aadb90500000000000000000000000000000000000000006ba1051a1459e9508b7c7003",
	"9dc9a669dfb352f7b02ecfd89337aeb8d28dcfe8fc002ff2d6d69ffaef09e4ff00000000000000000000000000000000000000006ba1051a1459e95058409d50",
	"68ee82b1394fa81068b9e434c5c0ff8bbfbe73670fc25ae8744c558e6322ecc900000000000000000000000000000000000000006ba1051a2c59e950c807e9b6",
	"4e692f97a862e87864ebf872636cddf9219d8387ce39b5accec1fff6b995b82f00000000000000000000000000000000000000006ba1051a2c59e950f45df430",
	"d7a654fcd6fed77d149c507a82c9a4319e640bb74007ed1cc2ab51eb437fa9d600000000000000000000000000000000000000006ba1051a4a59e950b2cbf25c",
	"cee32780a00c8b74434950dd6acae96e7c3aef48c71e43be107289241f8b4dfd00000000000000000000000000000000000000006ba1051a6859e950fb1a0f8d",
	"7889171f89b90ed61f999e6d9ab01e79b87cf1c6ac92ed562979ddff3ff46b5d00000000000000000000000000000000000000006ba1051a8659e9505aa55cdf",
	"e5b8228449a4c72c27b782ffefbbc175a710ef02099e3db390c22c5b88193ae400000000000000000000000000000000000000006ba1051aa459e95099f854be",
	"472db6402ff0e185825cdce0f995ffb700b215b45a4ac09c6d2fbcafd4bc181900000000000000000000000000000000000000006ba1051aa459e95047aa853f",
	"f3d914314f88d4fb448af9c78bf3a72c1304fbf59f54e406e9b8e5e183b6fad300000000000000000000000000000000000000006ba1051aa459e9508131f7fb",
	"7c255fd26e5e24babb61d45af9af73f23621853629f763e39509b1bf749b412200000000000000000000000000000000000000006ba1051aa459e950da1934a8",
	"d5c150e3265876f2c6488efc0ebff1d8d750ffd33888053c28fb8ce5ed2eaa3a00000000000000000000000000000000000000006ba1051afe59e950a878d2d3",
	"88eb258530557cb0bd62c01b97be8e5fc65312e9999cc801acac2c87f333880100000000000000000000000000000000000000006ba1051afe59e950cc87e6cd",
	"971ec86e026114051da069829f6f2917dc46a8a76990a457241eaedb886151cd00000000000000000000000000000000000000006ba1051afe59e950508a5e6f",
	"2df8ed62ace61003500c3c645df7e2633892c5ae5d803e7e7a9c55c602679cbd00000000000000000000000000000000000000006ba1051afe59e9503d3e5fe5",
	"25c9920bbe5c5920c5f7be376f9fb2137e8fa0edd93d08df847809538246720d00000000000000000000000000000000000000006ba1051afe59e9502b0c840f",
	"85bf34c7f2096a6247edf1bf327eacff49cc67326718302bb33510d07f08b09300000000000000000000000000000000000000006ba1051afe59e95024fbd732",
	"25684909d044091fca86f68bf0d8d4401f6b7abc645b76c43a66022cc769930800000000000000000000000000000000000000006ba1051afe59e95053e29ccc",
	"832c1604d823019be198e8fa264cb45fd89d3ee7d9f3f89c0c0f633c431879f300000000000000000000000000000000000000006ba1051a1c5ae950a8839b1c",
	"52e3980d99aed3e3c61b4cad83843dc9af02b975b894988636c5f42b06e341c200000000000000000000000000000000000000006ba1051a1c5ae950ae5c964e",
	"4f70554aa977f151bded0d68342e1e9600ffeff7ea7575bcc0f4ac0bde72c22100000000000000000000000000000000000000006ba1051a3b5ae95049411c01",
	"9e8d378bbac6c5352c65ae39215dbe5684e6bc1872983e54cb14b7a4103e647f00000000000000000000000000000000000000006ba1051a3b5ae950565eb903",
	"34b001ecb7437f60fcd803b38d82b29155b9beecb0b8cdb0dd577ce5330f712900000000000000000000000000000000000000006ba1051a3b5ae950fb5c0f0b",
	"5cc34b502e6030cb783f4a6e0db161c801b98f33c74e0b7152491ef0d2e1a76a00000000000000000000000000000000000000006ba1051a3b5ae950be6581e8",
	"e22517509da34c836a7749cbf8d619c5c4526be694fef1eba5f485db9f49ba9c00000000000000000000000000000000000000006ba1051a3b5ae950c2621a91",
	"68bd03edfa39af63889c341babbb60792b36633f5a06f1731a2bc935c4a8ebbd00000000000000000000000000000000000000006ba1051a3b5ae950764ec2a1",
	"0e21dcc351114d8fc5f23e2bf2fb46c36149486b3d366ab45f5b1a981e65f49a00000000000000000000000000000000000000006ba1051a5a5ae950ddf78bc4",
	"654e9187c2f3eb947df892b7b8130fef666d53a05d61c3aaf7d95d5ba6d8286900000000000000000000000000000000000000006ba1051a5a5ae9501aa44079",
	"d6d262230cc5eeb0c0a71f35975e2189f48c4c2be0ed148f70c4d3479723a21900000000000000000000000000000000000000006ba1051a5a5ae95013499077",
	"c057b9666d729012530f707b30b0c83b58ef9a2d569f48fbc43ef7463ab696ba00000000000000000000000000000000000000006ba1051a965ae950eace12c5",
	"9edb843cded2ba736260a18a08241422f1d5348c4044439022a7b691ab4ef92d00000000000000000000000000000000000000006ba1051a965ae950881743c6",
	"b76975d6da65bd72badb9fbddb9a56493af1e602e92743af9cd06d712979d25a00000000000000000000000000000000000000006ba1051ab45ae9509c60a0b9",
	"cfa9c4f600811974cde914695e8c5a628230d24e7c4f0d6672db73c987093f8c00000000000000000000000000000000000000006ba1051ab45ae9504736275b",
	"3e088ac0bcbf3e8df17914ea046c6f4c23213cb4614bee899d5d00bc0475127200000000000000000000000000000000000000006ba1051ab45ae9502bf82bb2",
	"1689c33647ce96d40511462dc9da32b063af30cc686023c062b84dabb9bd4f2e00000000000000000000000000000000000000006ba1051ad25ae9509f819ff0",
	"a2dffe2fd1398efa6c5d8e7a9884ee88b50b06264b9a1983ed635a80ea14231900000000000000000000000000000000000000006ba1051ad25ae9509d4de6f2",
	"c3c694d659d612125daebcb4bfb884557626650c06831a976d444803b76eb5e700000000000000000000000000000000000000006ba1051ad25ae9508fd220cc",
	"779f391f6ffce70e714438f407cf275a790c62ae9f58c23c6a07cb9a3ea8fac800000000000000000000000000000000000000006ba1051ad25ae950ea3234dc",
	"f8b495fdc7da846700f812cf1ce886bf1298e047dd0e4cbf3ca9f6a827b6be0c00000000000000000000000000000000000000006ba1051a0e5be9500583be28",
	"71e17b491e47b8aa894739c0b4909bdf53fbde440b58a79063b8c90414073d7b00000000000000000000000000000000000000006ba1051a0e5be950cf892148",
	"19774f18ee4b95d055a6ea9154b90085c829a74923d9fd890b073b533c12e4ea00000000000000000000000000000000000000006ba1051a2c5be950ac61b54e",
	"2d528649a57cd5b8367188bd7a86f9b33e25090f36bf8f836e5e8e52145627f300000000000000000000000000000000000000006ba1051a2c5be9505d7947bb",
	"927ae9997275ac422267c24f063e347c7e63798ff5cd2c1982a1a12d4d5514cf00000000000000000000000000000000000000006ba1051a445be9501749d457",
	"0a52faed463cc0415fca7c598441fac2e709dffb08ccb6b1363fe6f52c1b0c3a00000000000000000000000000000000000000006ba1051a445be9501b4aebc3",
	"27ab9b343cf1907ecfe23fabba60fbdbcf30247ccd723e6b2197d21a9fd40d7200000000000000000000000000000000000000006ba1051a445be950f09b9ab6",
	"9fa784c105a3849e157e8e66e4b2168b8de04b29e54b83600c9c3286c022482000000000000000000000000000000000000000006ba1051a625be950644e53ce",
	"ad7312b074183555d10007a415b82fd485d1f34025c57acc42155e207b71b77100000000000000000000000000000000000000006ba1051a625be9503be373bf",
	"ceeb7c158868319b0f1f9fb1e0cac53aa38c75d58e1178cba36328e7fe0a0f9a00000000000000000000000000000000000000006ba1051a625be950549c840c",
	"8b30b3570206999785292e44960f917218c10beb8187bb8acb2392479e97769900000000000000000000000000000000000000006ba1051a805be95043b426d7",
	"0a87ecbb893a8bed8b14b730cb22662387b66f1ead1b5f972b6c3c4978e8d92e00000000000000000000000000000000000000006ba1051a805be9502327608f",
	"df9b762d1c60ac867084d14f685db323a46f76267aed6570fa3cc24367fc6b3b00000000000000000000000000000000000000006ba1051aa55be9507cb40c1e",
	"68ba725524b18902166edfcf7ff4e42b7fe2bbda16bdc0287c58adad4c27c21800000000000000000000000000000000000000006ba1051aa55be950357da959",
	"3ff889f9551db7c24a6aa67c87ee2cfb6badb5b4b3ef68ed22e2b1ebc0a1382e00000000000000000000000000000000000000006ba1051ac35be950c9f7d13c",
	"8d55866b5809577e6820f36ac89f08e4db5d9c9a72a8faa45f10c4a73296699100000000000000000000000000000000000000006ba1051ac35be9502fed25d5",
	"f53e741d138e449a110811f5436c06434b282cff5d6a0bb6eed6716799f95a2c00000000000000000000000000000000000000006ba1051ac35be950c195dbf9",
	"98393da7cdb9986ded4cfaf0fcfc5bcb8a815c8cb135c6229e226f7f6edecf6c00000000000000000000000000000000000000006ba1051ae15be950af9bf1b8",
	"95e3f78aef78e9a29cb7d2bf84546a7d361c0ca30ecbec311031faff5c032bef00000000000000000000000000000000000000006ba1051ae15be950568e332c",
	"c0ff7d6b807e976630bb2838d5b96939ffd6ad3c8dbdd75d73c1d7a1540880c800000000000000000000000000000000000000006ba1051ae15be95087447290",
	"1683a65b506bf56c41c032906eae896d7c63555cb1a78c63642dae386f5b001c00000000000000000000000000000000000000006ba1051aff5be950c2c681b6",
	"4e4116920f7ce3ad4e1dca99c716d474ae9a8c0b3e1b6615ceb911345cc271b200000000000000000000000000000000000000006ba1051aff5be950b4bf70bc",
	"cb497dccc750b143c40fb1a1d44e116b5d8b9af2715ffec893e8eba697159d6800000000000000000000000000000000000000006ba1051aff5be950e2161164",
	"adf53727e6f3ad1af2b03ef43a7ea03131be4f587575d8c7af3f9df17a0217c800000000000000000000000000000000000000006ba1051aff5be950aad3f42c",
	"3197ece8c8ca965499f44498a172c733475a53a2c9b0fefd737a641735f9c07600000000000000000000000000000000000000006ba1051a1d5ce950d91e2a14",
	"8a53d638b0fdb1f92238fa0ad96d5171500cb3e8bd968d0597b14b4ddf8cedd100000000000000000000000000000000000000006ba1051a3b5ce950843fcb54",
	"5bc09c4ea1647c90c0f316fdaf7d78c223296de552a8f9099726bfa6e8247cc900000000000000000000000000000000000000006ba1051a595ce950021aef38",
	"a1e9ebcec2dfff8a6c9f643f10b53c2952b6cf1404924ebb63115fcc4c73c9da00000000000000000000000000000000000000006ba1051a595ce9502bfcdd56",
	"330f98389381e02b50b999750803b9f1cf63afb184442a411c515f4ed19be34500000000000000000000000000000000000000006ba1051a775ce9506593657c",
	"f987bfeb7ab5032f5903aaba7d7d7d9611f4b5ff9eec89e94a827c584360c30100000000000000000000000000000000000000006ba1051a775ce9503cfcb430",
	"b82997e26adf90f9aca6a29b2a50f92d999ff0acc44812e891da1e723c498fe700000000000000000000000000000000000000006ba1051a955ce950b8e3407b",
	"0123a1c9f2bc7ea82b4eb868da78aa16464e7e0fb9a49947eb3c135dabed1b8e00000000000000000000000000000000000000006ba1051a955ce9501e1f42f7",
	"5f01c8090c364c4bd405e7ef05c95cfbbffbdf20bef5eefee2bd01f339478cb800000000000000000000000000000000000000006ba1051a955ce95063d17b34",
	"48ac8dd9898188ad28dc866275727eba03ed9955000ed086fefb5d72c5d9a53700000000000000000000000000000000000000006ba1051a955ce950d6842efe",
	"57db2d110618c06870283606190df62e3b21d043be76c3fefbb91ad5d76647b500000000000000000000000000000000000000006ba1051a955ce95079e93306",
	"70428b22631cdfedd54421f914fc3ef1c5d483eaac272e3d83a21e43793976ff00000000000000000000000000000000000000006ba1051ab35ce950fbf13005",
	"120eca562b334e9c49912228b7955828d6d07a9c5d6e3cbd0382c45ccb27f56d00000000000000000000000000000000000000006ba1051ab35ce95030fdf0ec",
	"f4169b018d7a8e8556d718353e1450b2166aac212624ca7fdcb4b38c57d9359b00000000000000000000000000000000000000006ba1051a0659e9507c136ef4",
	"5d7b8a2bb408c792bdbb4a2435a24f0b06429ef1df7adf8a5caf4c27d04e739600000000000000000000000000000000000000006ba1051a0659e950869e4c6b",
	"2948596e6791c33ce51bdd2c65ac42c92681dbe649001c5f50b09d0c313ffea700000000000000000000000000000000000000006ba1051a1459e95083741da5",
	"b732c329e2969b51bfd65819ff86a00ecfb9a9ad23f8fc19fcfb200c96a158a300000000000000000000000000000000000000006ba1051a2c59e9506326d38a",
	"631be2b9fd369d229798c35c9f41cc463bf59ac093425b35f9e840ad49faa93a00000000000000000000000000000000000000006ba1051a4a59e950f5ba9adf",
	"042e78dcf6f13a57b2be1a1e846d4c169825eeea19ce6727d6ddd27e7bb3046000000000000000000000000000000000000000006ba1051a4a59e950e27c503d",
	"a30ba944b9ed7e02a136e2f3eea6830f30cdfb855d8f11dcc09c88a5c6070c3e00000000000000000000000000000000000000006ba1051a8659e9503b0e9557",
	"c05a7fbc7714ec8054f5c5ec65b3924d3eac397b4c04f777d8c0d2ed7dbe6ac000000000000000000000000000000000000000006ba1051a8659e9504de28442",
	"a5afe7a80dc2f1079530ae0b84b4cc23bd3c18ed8582145f39acaa085f8b202f00000000000000000000000000000000000000006ba1051a8659e95014bc2a84",
	"037c26f44eb772de443a7d88cf8d32b22d210b339c3b27a2e409107a2882b19800000000000000000000000000000000000000006ba1051aa459e9509b87bba1",
	"661a417afdb1d7c46f712418434b802779d71e8a194bf6abb680dbb2b5faf61700000000000000000000000000000000000000006ba1051aa459e950d044877f",
	"8064cc2c0298473537d2a6cd78d771ae4e0530a5043baf47242a7f54fe4dbfa800000000000000000000000000000000000000006ba1051aa459e950956fbd35",
	"02abc919ea00f8568815f1aa2ee5304ff1890a1460a36771bbe9e3cd6543e7cc00000000000000000000000000000000000000006ba1051aa459e950c516ad7d",
	"a8414124a59ca5870456eb2c61e60f55bee3be1128e77463368a9001cace0b8400000000000000000000000000000000000000006ba1051ac259e950adc2bf38",
	"93bd6c9fbe18e81e7b4a1e5f1ce70e4ff46240b8f12a723d2d9388902a8f21ac00000000000000000000000000000000000000006ba1051ac259e9508aceacd8",
	"7f477b43f1ebb9d44e81dbd454ab3c152b8ad35bbbc42d430058782587c9a14d00000000000000000000000000000000000000006ba1051ac259e95098855918",
	"3799047957bf4bb58727b9768a0d7837379cd578d26a017a9c21aefa1f539c7e00000000000000000000000000000000000000006ba1051ae059e950a9f01dd0",
	"c418d3186ddbc140448eacad112947ea1d3a9881d78769cc0325a6c8880235d800000000000000000000000000000000000000006ba1051ae059e950e6155c78",
	"cecf8d3c7278fc8160ba4f6aec44acf29cc945c3e06208afc26810051b9cd7b400000000000000000000000000000000000000006ba1051ae059e950dff33b65",
	"cdd5ca9b9a6ae6b4db6b4b7fc47519acd4953e7f1768866435ab3effc2a9954b00000000000000000000000000000000000000006ba1051ae059e950b01f1ddc",
	"2a70aefe71530351abafbcaa4d01814e2dcebf8379dcc383d21d176aa9d1f18800000000000000000000000000000000000000006ba1051afe59e9506aa72dd0",
	"20af40dda2350027ffa887c3d7f3c2da0def713606f7370fabffcf2c69efe68500000000000000000000000000000000000000006ba1051afe59e950ab6a6d38",
	"c146d26ebdbf109fce8a66de6b3bf28cc3e9068185403f98c5a96519dced065500000000000000000000000000000000000000006ba1051afe59e950fff4006e",
	"adb469f3bd7e1ed09b4b0a37e5a140ee9080c6a0edf302c69f889980feddadb500000000000000000000000000000000000000006ba1051a1c5ae950a7cb956c",
	"2489a4423e32635e7c8b2171462e86ccb99c702e3fbc1f5cc34fb6850538973500000000000000000000000000000000000000006ba1051a3b5ae95061cbf924",
	"5d5f73dd28b61b0e9f5f310f5dd7d04cbf3fb5d2fd092a838fde7e05cece79e900000000000000000000000000000000000000006ba1051a3b5ae9507520fba8",
	"d1fb2f2f88f5bb8cdff2431e5408986d28af6b889554673206e9aa9ed9b05e6200000000000000000000000000000000000000006ba1051a3b5ae950a5fb879a",
	"b36d579ac1f28fadca5443ff4ce64b72685436b1fe963904872c6d07a8a3268700000000000000000000000000000000000000006ba1051a3b5ae9504a7a6eb7",
	"164d4ce704261ec8e70ce5a9a3892329628c13631d410d485c08148c749b038500000000000000000000000000000000000000006ba1051a3b5ae950e53d2be4",
	"9dbd9cc0def4a10890159aea6797bd61ffddd5b413c92a76eedf928bb061debd00000000000000000000000000000000000000006ba1051a5a5ae950175c7385",
	"822cfb7e263d065aa51c6ae95b64acbcdca8c7181c5195dc8263adce3fcbbddb00000000000000000000000000000000000000006ba1051a5a5ae95026ac0bf2",
	"fa382d1d728f0cb514b2ba700d86039798ae47b6df4dcf65066b53315369a3ef00000000000000000000000000000000000000006ba1051a5a5ae9503bef8c4f",
	"e00e271ed0dfec6d5366d0ddf0a179cb1097b124797c50f8e12be86735dbd7a700000000000000000000000000000000000000006ba1051a5a5ae950f3a8ece6",
	"f3f87be8407161440936d40e4014ffe98566f192c9d460a9cc79a231dd50d4c100000000000000000000000000000000000000006ba1051a785ae950afb8fdd0",
	"e0c67d8679346fec39622a49b4e3f7913d731e46b0e9d356d0d09fcca34055bc00000000000000000000000000000000000000006ba1051a785ae9503804c48f",
	"b3649e057d1dfaa525031dfee510ef44e64b5e00d70aad21e9b7e39c9b03fd7f00000000000000000000000000000000000000006ba1051a785ae9503ce95028",
	"c21f86620eaa2cce14b449bba539873e85ad8d5664cec520eceffcce4e53f29000000000000000000000000000000000000000006ba1051a965ae950111308e3",
	"a4292e1109aadf650068dfc0ff37d26d2c3c3fbead3e5dfed531694fe1c0baeb00000000000000000000000000000000000000006ba1051a965ae95054caee60",
	"79ea0ac6e671f77980b6fb18b060b3df9ead43e7f2cb0292fc700e83bf6e653d00000000000000000000000000000000000000006ba1051ab45ae950b16c2c76",
	"96c940fcab5208b2ad55d92e460deb2f529858a75ceb8182f3a14d2af063859d00000000000000000000000000000000000000006ba1051ad25ae950155b18c6",
	"530bc04c906e060fb6ce75f7a33068282f84611709459fc81a137cbf5b353cbd00000000000000000000000000000000000000006ba1051ad25ae950481fa760",
	"1d416627e0184dcc1ed6ec7244002c9531135150404de34d19ee1fcca7bba52800000000000000000000000000000000000000006ba1051ad25ae95023edd34a",
	"e036fbadaffa33bb439324761a8bec7ad6818a950d373102de252979d0c923be00000000000000000000000000000000000000006ba1051af05ae950c9ef1cdf",
	"e5102720279f7b340f63151aa9a80e5ceeca686040f18a510a01bea5b302eed900000000000000000000000000000000000000006ba1051af05ae950c8c3ec78",
	"872a8b692576cc3d5008dd6473d20646fff5763469cd2bd5123f734367e3979800000000000000000000000000000000000000006ba1051af05ae9509554dcb9",
	"3733b2db94aa191a6b5501035b0f809e6db546394e761ee2dc6ad5c0614c023500000000000000000000000000000000000000006ba1051a0e5be9504e9e1129",
	"793c63b4163c166808a8ce55601aede10a99ea052566f84ae6b0a1bbe98a011600000000000000000000000000000000000000006ba1051a0e5be9502a8e1858",
	"935f7ac81aff1dbfdb63cc3a5fbebe580bab38813e6ddfe3ce53185b5e6de71900000000000000000000000000000000000000006ba1051a0e5be950deef30e9",
	"dfa0e9c0ffbce704144570bca8624dae7c7f6568027fb051ef8a04845d3d5c8600000000000000000000000000000000000000006ba1051a445be9505b8ff595",
	"83200132fe957f68bfa26234a4fd8b5c642fdb230b3389ce48180fe1efd5020100000000000000000000000000000000000000006ba1051a445be9500c66fc0d",
	"15ef69ca948ead23fb863038eadd71cbaa11f79959eb1bd069dfd6b449a3b5bf00000000000000000000000000000000000000006ba1051a445be9502c34d453",
	"c15421410fabfa802babc5597f285b4e4a6fd8fd21d317f00a420d3b19fa3e8200000000000000000000000000000000000000006ba1051a445be95021827dcc",
	"6e9ed1a439238426aa6b1248d2bbc4cdac55a6a3d721d66a414a336ca3ded92c00000000000000000000000000000000000000006ba1051a445be950e0932caa",
	"43c5b744fa022716922d503fc18dcc66c5bff5efeb62862cc0bf74064296138700000000000000000000000000000000000000006ba1051a445be95038af637f",
	"a8c0ff7f837bbf33cd78d6acc97ec2296774647ecc72a247d91cc387dd9bae9400000000000000000000000000000000000000006ba1051a445be9509ba5a4cb",
	"becf8bdd05082dab2b36847a784c8d5d86cde60b68f63a996b8d42abcdc5f15300000000000000000000000000000000000000006ba1051a445be950f83cbb20",
	"b0ffd51bb8606dddff5291cea0f88eac2e06378388737bb395a6e088b4f108d400000000000000000000000000000000000000006ba1051a625be9502365159e",
	"65c9b36a4cdf1f517b2ef54856d62422dbd31f307472deb4ea6e83f4ac59853e00000000000000000000000000000000000000006ba1051a625be9503726d312",
	"125e2e39fa7687f60f612038e1a9b0bad34b2d202414da1494eaeef068ec3e6700000000000000000000000000000000000000006ba1051a625be9506177be29",
	"0e61fa84b22398cf0e772ef780bfd0f02833a6606801334ec5ca411113dcad2d00000000000000000000000000000000000000006ba1051a625be9505f3630f1",
	"53eb95cd62bded4dfdbd48aec6a1e3949c368de104c2b10d6991e91bc727c9a100000000000000000000000000000000000000006ba1051a625be95003c7cb22",
	"d99fecd022d5c819a32af98134a08c32c957fc3f7db6fdf7baf2fca740627f5600000000000000000000000000000000000000006ba1051a805be950ff40eeeb",
	"65a27868c4deb7ca7131d5c9dbe7351be0944847294c6231cc0402f36dd4101900000000000000000000000000000000000000006ba1051aa55be950d30a96f0",
	"2d1cd2e0cc84cdf6565b9fe6da9946d4c1b12bc94228dae4032cdd2650b937ee00000000000000000000000000000000000000006ba1051ac35be95022ebc72d",
	"b64bedbd931a11471d33d65fb09232afebcd394523bfb068798d3d6fdcd0450200000000000000000000000000000000000000006ba1051ac35be950da2bcb5f",
	"f94542d446e72030fd2223f31163b71a553dbbec3d69438c89ff4178014b6e7200000000000000000000000000000000000000006ba1051ac35be95048dd841e",
	"3d9dca7a7eba17aaa3659251d6076c873f3685116bedf54b19687fd584a96cdd00000000000000000000000000000000000000006ba1051ac35be950b8334ebf",
	"723f269478139982b60280aa8693a37c70d9a00ac15894dab2fcdc90da9a25dd00000000000000000000000000000000000000006ba1051ae15be950191264ff",
	"feb67edcd703ec52ae93dd64208df141c65e4f22a7af67656c6f7e73cf84058800000000000000000000000000000000000000006ba1051ae15be95045144013",
	"3fd0e9462ba142ac77c7c18bbdd1a79d3eb79da6e25753cfbb2577bee9f0b37500000000000000000000000000000000000000006ba1051aff5be9506e679b2d",
	"3632f766605737f4db84693f494dfa659118c35912d616d69affb406436aec0400000000000000000000000000000000000000006ba1051aff5be95035cc702e",
	"4068eef69054c190e4d452582af01465f36de7e18140642626d6a061e6ae30e600000000000000000000000000000000000000006ba1051aff5be950f0494de1",
	"3be612c126eb11d2e7ef9ba6fa39d79686db74f2e3338202c9d143bc2e57952b00000000000000000000000000000000000000006ba1051aff5be950b4b17650",
	"7242301af60ada577966dd45e21822c08f55e269c4ab4891509f79781aa9459c00000000000000000000000000000000000000006ba1051a1d5ce950081df14c",
	"00cd219bb156edfa17160f950b001ec210222f5711e9a29f9dd3ab6dfcfc6cdd00000000000000000000000000000000000000006ba1051a3b5ce950aa285ff0",
	"1149d3f2c1f4288e48f0aca2d909a9b3707ccec6f46d5631fc759293a2f46c6b00000000000000000000000000000000000000006ba1051a595ce950b02a0567",
	"d0dc88f86aa37c57b03f95f93a74dc419f9514e44b2f0911c728e7d83cee14d800000000000000000000000000000000000000006ba1051a595ce950ccf71ccd",
	"7c13aa14b1d0e4465b972119b3f59719f90e104134fac84a0b394eaa3505547400000000000000000000000000000000000000006ba1051a595ce9509d2dc4a5",
	"08883ad66018ae65d5e027e456611b3c7d28611a3a1ada66cbc95735f99d734500000000000000000000000000000000000000006ba1051a595ce9505cd80a1d",
	"a8c5cbcb9b7d3d17c8e1a6aa87b6568e9a0c98b1f006ea5a7c773a72e306093000000000000000000000000000000000000000006ba1051a595ce9503a16deab",
	"aec43bebc68a53b164dcaa490de15590693eda1a3464ed6a0190a52cf351eefc00000000000000000000000000000000000000006ba1051a775ce950ba9a015e",
	"8fdeb187b9039690de240885675f40156b338f88efec5629d93eb875e407e67400000000000000000000000000000000000000006ba1051a775ce950c4a07067",
	"281ddf78b394c55012a6f0f6a7b659424aea2779dcd8da124eb551771f81826d00000000000000000000000000000000000000006ba1051a775ce9505ef8e95a",
	"ca98b12cd12e6916a888996db54e562fb4604b1bebc906776c57d6874f2518a000000000000000000000000000000000000000006ba1051a775ce95053904903",
	"9be6b5ace649aeb607200ffdf03135907cb4e03551ff69935f4b53b20df02c9900000000000000000000000000000000000000006ba1051a775ce950ab529569",
	"ac43cbb94bf31a68af19d10dbcb948c667c735ea1c78e1101a2bacf87bdddbd600000000000000000000000000000000000000006ba1051a775ce950ef95f093",
	"c52e9e5bfd997ab3a5480ee34d3785da3beba62bed538d636ddbacc8f10d1c6c00000000000000000000000000000000000000006ba1051a955ce950f108fa32",
	"ee593a40ca527c477e0ef3a1816bf1248bbb8a484e90df46546ccd3e22dc880000000000000000000000000000000000000000006ba1051a955ce950821cfde9",
	"0e04dee724d6a17deafc525536119411821ed0baf8b6a8ea6f94dc83535528e600000000000000000000000000000000000000006ba1051a955ce950ce239c8c",
	"c673042a3f0a0679e0417e3803bbecbc0863d22e48a031f06091490f86d4dfd900000000000000000000000000000000000000006ba1051ab35ce950e3a205ce",
	"7c52008f4af50e9fe694290c6899412b5c5a22dde41b19b764fa2abbea210d2d00000000000000000000000000000000000000006ba1051ab35ce9505c3104d3",
	"39abd647d8ca2c2e9559e82678092312d915fabdd066c2d8533885a33db40f0200000000000000000000000000000000000000006ba1051ab35ce950d1690100",
	"030e86849dd43bf7fa71e9ba92614be25f2eb9d0a2ccafb9b69d74a361e8df1a00000000000000000000000000000000000000006ba1051ab35ce950440c1172",
	"4dd9c9f82fd6731114ea2c60109d877fc0e8ca9917dd581b5439303bcd6f736d00000000000000000000000000000000000000006ba1051ab35ce9508eb61b2b",
	"57b9701949601b873744627430d1ccc30fc501c1184c6e1789fe2d4e6637cdf000000000000000000000000000000000000000006ba1051ab35ce950bb69138c",
	"3e354ad18aaecf8756f344b4e341ac7dafe296577ccfad7ae20a6d254b32bd1100000000000000000000000000000000000000006ba1051ab35ce950c2a65ce2"
};

struct work *work[174];
struct work *t;
int j;
for (j = 0; j < 174; j++) {
	t = (struct work*)malloc(sizeof(struct work));
	if (!t)
		quit(1, "ERROR ON MALLOC");

	work[j] = t;
	hex2bin(t->midstate, data_test[j], 32);
	rev(t->midstate, 32);
	hex2bin(t->data + 64, data_test[j] + 104, 12);
	rev(t->data, 12);
}
