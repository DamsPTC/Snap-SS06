/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afa2150; end: 10afa2183; -[SCMusicPill initWithViewModel:componentContext:runtime:] */

void FUN_10afa2150(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703650;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa2184; end: 10afa21cf; -[SCMusicPill setViewModel:] */

void FUN_10afa2184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x00010afa22e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10afa21d0; end: 10afa220b; -[SCMusicPill viewModel] */

void FUN_10afa21d0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa22c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa220c; end: 10afa2297;  */

void FUN_10afa220c(void)

{
  func_0x00010afa233c();
  return;
}



/* Entry: 10afa2298; end: 10afa2353;  */

void FUN_10afa2298(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa2354; end: 10afa2377; +[SCComposerMusicTopicPagePresenting valdiMarshallableObjectDescriptor] */

void FUN_10afa2354(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6640;
  param_1[1] = &PTR_DAT_110ca6688;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa2378; end: 10afa23d7;  */

undefined8 FUN_10afa2378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df220;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10afa23d8; end: 10afa23e3; +[SCComposerPlaceSearchServiceFactory modulePath] */

undefined ** FUN_10afa23d8(void)

{
  return &PTR____CFConstantStringClassReference_110f409d8;
}



/* Entry: 10afa23e4; end: 10afa23eb; +[SCComposerPlaceSearchServiceFactory asyncStrictMode] */

undefined8 FUN_10afa23e4(void)

{
  return 0;
}



/* Entry: 10afa23ec; end: 10afa244b; -[SCComposerPlaceSearchServiceFactory makeSearchServiceWithGrpcService:] */

void FUN_10afa23ec(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x00010afa26a4();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa269c();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10afa244c; end: 10afa25b7; +[SCComposerPlaceSearchServiceFactory invokeWithJSRuntimeProvider:grpcService:completionHandler:] */

void FUN_10afa244c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10afa252c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  FUN_10afa269c();
  _objc_release(param_3);
  return;
}



/* Entry: 10afa25b8; end: 10afa25db; +[SCComposerPlaceSearchServiceFactory valdiMarshallableObjectDescriptor] */

void FUN_10afa25b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca66a0;
  param_1[1] = &PTR_DAT_110ca66d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa25dc; end: 10afa25e7; +[SCPlacePickerView componentPath] */

undefined ** FUN_10afa25dc(void)

{
  return &PTR____CFConstantStringClassReference_110f409f8;
}



/* Entry: 10afa25e8; end: 10afa261b; -[SCPlacePickerView initWithViewModel:componentContext:runtime:] */

void FUN_10afa25e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703658;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa261c; end: 10afa265b; -[SCPlacePickerView setViewModel:] */

void FUN_10afa261c(void)

{
  undefined8 unaff_x20;
  
  func_0x00010afa26a4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x00010afa269c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10afa265c; end: 10afa269b; -[SCPlacePickerView viewModel] */

void FUN_10afa265c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10afa269c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa269c; end: 10afa26b3;  */

void FUN_10afa269c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa26b4; end: 10afa26bf; +[SCCPollCreationView componentPath] */

undefined ** FUN_10afa26b4(void)

{
  return &PTR____CFConstantStringClassReference_110f40a18;
}



/* Entry: 10afa26c0; end: 10afa26e3; -[SCCPollCreationView initWithViewModel:componentContext:runtime:] */

void FUN_10afa26c0(void)

{
  FUN_10afa2804(PTR_PTR_112703660);
  return;
}



/* Entry: 10afa26e4; end: 10afa271b; -[SCCPollCreationView setViewModel:] */

void FUN_10afa26e4(void)

{
  func_0x00010afa2820();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa2830();
  func_0x00010afa2818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa271c; end: 10afa275b; -[SCCPollCreationView viewModel] */

void FUN_10afa271c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa2818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa275c; end: 10afa2767; +[SCCPollView componentPath] */

undefined ** FUN_10afa275c(void)

{
  return &PTR____CFConstantStringClassReference_110f40a38;
}



/* Entry: 10afa2768; end: 10afa278b; -[SCCPollView initWithViewModel:componentContext:runtime:] */

void FUN_10afa2768(void)

{
  FUN_10afa2804(PTR_PTR_112703668);
  return;
}



/* Entry: 10afa278c; end: 10afa27c3; -[SCCPollView setViewModel:] */

void FUN_10afa278c(void)

{
  func_0x00010afa2820();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa2830();
  func_0x00010afa2818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa27c4; end: 10afa2803; -[SCCPollView viewModel] */

void FUN_10afa27c4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa2818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa2804; end: 10afa283b;  */

void FUN_10afa2804(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afa283c; end: 10afa283f; +[SCPlaceEditRequestMaker modulePath] */

undefined ** FUN_10afa283c(void)

{
  return &PTR____CFConstantStringClassReference_110f40a58;
}



/* Entry: 10afa2840; end: 10afa2843; +[SCPlaceEditRequestMaker asyncStrictMode] */

undefined8 FUN_10afa2840(void)

{
  return 0;
}



/* Entry: 10afa2844; end: 10afa2903; -[SCPlaceEditRequestMaker editPlaceWithNetworkingClient:request:venuePhotoData:hitStaging:onComplete:requestHeaders:] */

void FUN_10afa2844(long param_1)

{
  undefined8 in_x7;
  
  _objc_retain(in_x7);
  func_0x00010afa3614();
  func_0x00010afa363c();
  func_0x00010afa362c();
  func_0x00010afa3664();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa35e4();
  func_0x00010afa366c();
  func_0x00010afa3644();
  func_0x00010afa3694();
  func_0x00010afa36c8();
  func_0x00010afa36c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa2904; end: 10afa2a17; +[SCPlaceEditRequestMaker invokeWithJSRuntimeProvider:networkingClient:request:venuePhotoData:hitStaging:onComplete:requestHeaders:completionHandler:] */

void FUN_10afa2904(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x00010afa3704();
  func_0x00010afa3614();
  func_0x00010afa361c();
  func_0x00010afa363c();
  func_0x00010afa362c();
  func_0x00010afa3664();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10afa2a18;
  puStack_98 = &UNK_110849950;
  uStack_70 = param_9;
  uStack_60 = param_10;
  lStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_68 = param_8;
  uStack_58 = param_7;
  func_0x00010afa3664();
  func_0x00010afa362c();
  func_0x00010afa363c();
  func_0x00010afa361c();
  func_0x00010afa3614();
  func_0x00010afa360c();
  func_0x00010afa3718();
  func_0x00010bf85140(param_3,param_2,&puStack_b0);
  func_0x00010afa36e8();
  func_0x00010afa36e0();
  func_0x00010afa3748();
  func_0x00010afa3740();
  func_0x00010afa3730();
  func_0x00010afa3634();
  _objc_release(lStack_90);
  func_0x00010afa36c8();
  func_0x00010afa3694();
  func_0x00010afa3644();
  func_0x00010afa3624();
  func_0x00010afa366c();
  func_0x00010afa35e4();
  func_0x00010afa36c0();
  return;
}



/* Entry: 10afa2a18; end: 10afa2a97;  */

void FUN_10afa2a18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf190;
  func_0x00010bfbc0e0(PTR_PTR_1126bf190,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa370c(*(undefined8 *)(param_1 + 0x50));
  func_0x00010afa3644();
  func_0x00010afa3624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afa2a98; end: 10afa2ab7; +[SCPlaceEditRequestMaker valdiMarshallableObjectDescriptor] */

void FUN_10afa2a98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6730;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110ca6760;
  param_1[2] = &PTR_s_ob_v_110ca66e8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa2ab8; end: 10afa2adf;  */

undefined8 FUN_10afa2ab8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10afa2ae0; end: 10afa2b2f;  */

void FUN_10afa2ae0(void)

{
  func_0x00010afa368c();
  func_0x00010afa359c();
  func_0x00010afa358c(FUN_10afa3488);
  func_0x00010afa36b0();
  func_0x00010afa35cc();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa2b30; end: 10afa2b4f;  */

void FUN_10afa2b30(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010afa2b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_2,param_2[1],param_2[2],param_2[3],*(uint *)(param_2 + 4) & 1,param_2[5],
             param_2[6]);
  return;
}



/* Entry: 10afa2b50; end: 10afa2b9f;  */

void FUN_10afa2b50(void)

{
  func_0x00010afa368c();
  func_0x00010afa359c();
  func_0x00010afa358c(0x10afa34b4);
  func_0x00010afa36b0();
  func_0x00010afa35cc();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa2ba0; end: 10afa2ba3; +[SCReportPlace modulePath] */

undefined ** FUN_10afa2ba0(void)

{
  return &PTR____CFConstantStringClassReference_110f40a58;
}



/* Entry: 10afa2ba4; end: 10afa2ba7; +[SCReportPlace asyncStrictMode] */

undefined8 FUN_10afa2ba4(void)

{
  return 0;
}



/* Entry: 10afa2ba8; end: 10afa2c97; -[SCReportPlace sendWithNetworkingClient:placeId:userId:reportType:hitPlacesStagingEndpoint:onComplete:moderationSource:requestHeaders:] */

void FUN_10afa2ba8(long param_1)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  func_0x00010afa363c();
  func_0x00010afa361c();
  func_0x00010afa3614();
  func_0x00010afa360c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  func_0x00010afa3644();
  func_0x00010afa3624();
  func_0x00010afa366c();
  func_0x00010afa35e4();
  func_0x00010afa36c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa2c98; end: 10afa2de3; +[SCReportPlace invokeWithJSRuntimeProvider:networkingClient:placeId:userId:reportType:hitPlacesStagingEndpoint:onComplete:moderationSource:requestHeaders:completionHandler:] */

void FUN_10afa2c98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  func_0x00010afa3704();
  func_0x00010afa3614();
  func_0x00010afa361c();
  func_0x00010afa363c();
  func_0x00010afa362c();
  func_0x00010afa3664();
  func_0x00010afa3718();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afa359c();
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10afa2de4;
  puStack_b0 = &UNK_110ca6780;
  uStack_88 = param_10;
  uStack_80 = param_11;
  uStack_78 = param_9;
  uStack_70 = param_12;
  lStack_a8 = lVar1;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_68 = param_7;
  uStack_64 = param_8;
  func_0x00010afa3718();
  func_0x00010afa3664();
  func_0x00010afa362c();
  func_0x00010afa363c();
  func_0x00010afa361c();
  func_0x00010afa3614();
  func_0x00010afa360c();
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_c8);
  _objc_release(uStack_70);
  func_0x00010afa36e8();
  func_0x00010afa3748();
  _objc_release(uStack_78);
  func_0x00010afa36e0();
  func_0x00010afa3740();
  func_0x00010afa3730();
  func_0x00010afa3634();
  func_0x00010afa36c0();
  func_0x00010afa36c8();
  func_0x00010afa3694();
  func_0x00010afa3644();
  func_0x00010afa3624();
  func_0x00010afa366c();
  func_0x00010afa35e4();
  _objc_release(param_3);
  return;
}



/* Entry: 10afa2de4; end: 10afa2e7b;  */

void FUN_10afa2de4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b21d0;
  func_0x00010bfbc0e0(PTR_PTR_1126b21d0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa370c(*(undefined8 *)(param_1 + 0x58));
  func_0x00010afa3644();
  func_0x00010afa3624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afa2e7c; end: 10afa2e9b; +[SCReportPlace valdiMarshallableObjectDescriptor] */

void FUN_10afa2e7c(undefined8 *param_1)

{
  *param_1 = &PTR_s_send_110ca67f8;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110ca6828;
  param_1[2] = &PTR_s_ob_v_110ca67b0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa2e9c; end: 10afa2edb;  */

void FUN_10afa2e9c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],param_2[3],*(undefined4 *)(param_2 + 4),
             *(uint *)(param_2 + 5) & 1,param_2[6],param_2[7],param_2[8]);
  return;
}



/* Entry: 10afa2edc; end: 10afa2f2b;  */

void FUN_10afa2edc(void)

{
  func_0x00010afa368c();
  func_0x00010afa359c();
  func_0x00010afa358c(0x10afa34e8);
  func_0x00010afa36b0();
  func_0x00010afa35cc();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa2f2c; end: 10afa2f2f; +[SCReportPlaceMetrics modulePath] */

undefined ** FUN_10afa2f2c(void)

{
  return &PTR____CFConstantStringClassReference_110f40a58;
}



/* Entry: 10afa2f30; end: 10afa2f33; +[SCReportPlaceMetrics asyncStrictMode] */

undefined8 FUN_10afa2f30(void)

{
  return 0;
}



/* Entry: 10afa2f34; end: 10afa2fcb; -[SCReportPlaceMetrics logWithBlizzardLogger:action:placeId:mapSessionId:placeSessionId:] */

void FUN_10afa2f34(long param_1)

{
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  func_0x00010afa3614();
  func_0x00010afa361c();
  func_0x00010afa362c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  func_0x00010afa35e4();
  func_0x00010afa366c();
  func_0x00010afa3624();
  func_0x00010afa3694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10afa2fcc; end: 10afa30bf; +[SCReportPlaceMetrics invokeWithJSRuntimeProvider:blizzardLogger:action:placeId:mapSessionId:placeSessionId:completionHandler:] */

void FUN_10afa2fcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x00010afa3704();
  func_0x00010afa3614();
  func_0x00010afa361c();
  func_0x00010afa363c();
  func_0x00010afa362c();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afa359c();
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10afa30c0;
  puStack_90 = &UNK_110976d68;
  uStack_60 = param_9;
  lStack_88 = lVar1;
  uStack_80 = param_4;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_58 = param_5;
  func_0x00010afa362c();
  func_0x00010afa363c();
  func_0x00010afa361c();
  func_0x00010afa3614();
  func_0x00010afa360c();
  func_0x00010afa3664();
  func_0x00010bf85140(param_3,param_2,auStack_a8);
  func_0x00010afa36e8();
  func_0x00010afa3748();
  func_0x00010afa36e0();
  func_0x00010afa3740();
  func_0x00010afa3730();
  func_0x00010afa3634();
  func_0x00010afa3694();
  func_0x00010afa3644();
  func_0x00010afa3624();
  func_0x00010afa366c();
  func_0x00010afa35e4();
  func_0x00010afa36c8();
  return;
}



/* Entry: 10afa30c0; end: 10afa312f;  */

void FUN_10afa30c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b21d8;
  func_0x00010bfbc0e0(PTR_PTR_1126b21d8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  func_0x00010afa3624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10afa3130; end: 10afa314f; +[SCReportPlaceMetrics valdiMarshallableObjectDescriptor] */

void FUN_10afa3130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6880;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110ca68b0;
  param_1[2] = &PTR_DAT_110ca6850;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa3150; end: 10afa317f;  */

undefined8 FUN_10afa3150(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3],param_2[4],param_2[5]);
  return 0;
}



/* Entry: 10afa3180; end: 10afa31cf;  */

void FUN_10afa3180(void)

{
  func_0x00010afa368c();
  func_0x00010afa359c();
  func_0x00010afa358c(0x10afa352c);
  func_0x00010afa36b0();
  func_0x00010afa35cc();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa31d0; end: 10afa31db; +[SCVenueEditorAsyncRequestCallback valdiMarshallableObjectDescriptor] */

void FUN_10afa31d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca68c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa31dc; end: 10afa3217;  */

undefined8 FUN_10afa31dc(undefined8 param_1)

{
  func_0x00010afa3720();
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_1;
}



/* Entry: 10afa3218; end: 10afa323b; +[SCVenueEditorDismissCallback valdiMarshallableObjectDescriptor] */

void FUN_10afa3218(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6928;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_110ca68f8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa323c; end: 10afa3267;  */

undefined8 FUN_10afa323c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10afa3268; end: 10afa32b7;  */

void FUN_10afa3268(void)

{
  func_0x00010afa368c();
  func_0x00010afa359c();
  func_0x00010afa358c(0x10afa3560);
  func_0x00010afa36b0();
  func_0x00010afa35cc();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa32b8; end: 10afa32f3;  */

undefined8 FUN_10afa32b8(undefined8 param_1)

{
  func_0x00010afa3720();
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_1;
}



/* Entry: 10afa32f4; end: 10afa32ff; +[SCVenueLocationPickerCallback valdiMarshallableObjectDescriptor] */

void FUN_10afa32f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca6958;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa3300; end: 10afa330b; +[SCVenuePhotoUpload valdiMarshallableObjectDescriptor] */

void FUN_10afa3300(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca69a0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa330c; end: 10afa3347;  */

undefined8 FUN_10afa330c(undefined8 param_1)

{
  func_0x00010afa3720();
  func_0x00010afa36fc();
  func_0x00010afa35fc();
  func_0x00010afa35c0();
  return param_1;
}



/* Entry: 10afa3348; end: 10afa3353; +[SCAddAPlaceView componentPath] */

undefined ** FUN_10afa3348(void)

{
  return &PTR____CFConstantStringClassReference_110f40a78;
}



/* Entry: 10afa3354; end: 10afa3373; -[SCAddAPlaceView initWithViewModel:componentContext:runtime:] */

void FUN_10afa3354(void)

{
  func_0x00010afa369c(PTR_PTR_112703670);
  return;
}



/* Entry: 10afa3374; end: 10afa33ab; -[SCAddAPlaceView setViewModel:] */

void FUN_10afa3374(void)

{
  func_0x00010afa36d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa36f0();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa33ac; end: 10afa33e7; -[SCAddAPlaceView viewModel] */

void FUN_10afa33ac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa35c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa33e8; end: 10afa33f3; +[SCVenueEditorView componentPath] */

undefined ** FUN_10afa33e8(void)

{
  return &PTR____CFConstantStringClassReference_110f40a98;
}



/* Entry: 10afa33f4; end: 10afa3413; -[SCVenueEditorView initWithViewModel:componentContext:runtime:] */

void FUN_10afa33f4(void)

{
  func_0x00010afa369c(PTR_PTR_112703678);
  return;
}



/* Entry: 10afa3414; end: 10afa344b; -[SCVenueEditorView setViewModel:] */

void FUN_10afa3414(void)

{
  func_0x00010afa36d0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa36f0();
  func_0x00010afa35e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa344c; end: 10afa3487; -[SCVenueEditorView viewModel] */

void FUN_10afa344c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa35c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa3488; end: 10afa358b;  */

void FUN_10afa3488(void)

{
  func_0x00010afa36b8();
  return;
}



/* Entry: 10afa358c; end: 10afa375b;  */

void FUN_10afa358c(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10afa375c; end: 10afa3797; +[SCCMapNativeVenueStoryPlayer valdiMarshallableObjectDescriptor] */

void FUN_10afa375c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6aa8;
  param_1[1] = &PTR_DAT_110ca6af0;
  param_1[2] = &PTR_DAT_110ca6a60;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa3798; end: 10afa37f7;  */

void FUN_10afa3798(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010afa3b5c(FUN_10afa3ab0);
  _objc_retainBlock(&puStack_48);
  func_0x00010afa3b6c();
  func_0x00010afa3b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa37f8; end: 10afa3813;  */

void FUN_10afa37f8(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010afa3810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6]);
  return;
}



/* Entry: 10afa3814; end: 10afa3873;  */

void FUN_10afa3814(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010afa3b5c(0x10afa3ae4);
  _objc_retainBlock(&puStack_48);
  func_0x00010afa3b6c();
  func_0x00010afa3b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa3874; end: 10afa38cb;  */

undefined8 FUN_10afa3874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df248;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010afa3b2c();
  return param_1;
}



/* Entry: 10afa38cc; end: 10afa38e7; +[SCCVenueStoryHandler valdiMarshallableObjectDescriptor] */

void FUN_10afa38cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6b18;
  param_1[1] = &PTR_DAT_110ca6b78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa38e8; end: 10afa38f3; +[SCCVenueApiVisitedByCardComponent componentPath] */

undefined ** FUN_10afa38e8(void)

{
  return &PTR____CFConstantStringClassReference_110f40ab8;
}



/* Entry: 10afa38f4; end: 10afa3913; -[SCCVenueApiVisitedByCardComponent initWithViewModel:componentContext:runtime:] */

void FUN_10afa38f4(void)

{
  FUN_10afa3b18(PTR_PTR_112703680);
  return;
}



/* Entry: 10afa3914; end: 10afa3947; -[SCCVenueApiVisitedByCardComponent setViewModel:] */

void FUN_10afa3914(void)

{
  func_0x00010afa3b38();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b50();
  func_0x00010afa3b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa3948; end: 10afa397f; -[SCCVenueApiVisitedByCardComponent viewModel] */

void FUN_10afa3948(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa3980; end: 10afa398b; +[SCCVisitedByPreviewCard componentPath] */

undefined ** FUN_10afa3980(void)

{
  return &PTR____CFConstantStringClassReference_110f40ad8;
}



/* Entry: 10afa398c; end: 10afa39ab; -[SCCVisitedByPreviewCard initWithViewModel:componentContext:runtime:] */

void FUN_10afa398c(void)

{
  FUN_10afa3b18(PTR_PTR_112703688);
  return;
}



/* Entry: 10afa39ac; end: 10afa39df; -[SCCVisitedByPreviewCard setViewModel:] */

void FUN_10afa39ac(void)

{
  func_0x00010afa3b38();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b50();
  func_0x00010afa3b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa39e0; end: 10afa3a17; -[SCCVisitedByPreviewCard viewModel] */

void FUN_10afa39e0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa3a18; end: 10afa3a23; +[SCPlaceCardComponent componentPath] */

undefined ** FUN_10afa3a18(void)

{
  return &PTR____CFConstantStringClassReference_110f40af8;
}



/* Entry: 10afa3a24; end: 10afa3a43; -[SCPlaceCardComponent initWithViewModel:componentContext:runtime:] */

void FUN_10afa3a24(void)

{
  FUN_10afa3b18(PTR_PTR_112703690);
  return;
}



/* Entry: 10afa3a44; end: 10afa3a77; -[SCPlaceCardComponent setViewModel:] */

void FUN_10afa3a44(void)

{
  func_0x00010afa3b38();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b50();
  func_0x00010afa3b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa3a78; end: 10afa3aaf; -[SCPlaceCardComponent viewModel] */

void FUN_10afa3a78(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa3b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa3ab0; end: 10afa3b17;  */

void FUN_10afa3ab0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa3b18; end: 10afa3ba7;  */

void FUN_10afa3b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afa3ba8; end: 10afa3bcb; +[SCCMapItemsListTakeoverActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10afa3ba8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca6bc0;
  param_1[1] = &PTR_DAT_110ca6c08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa3bcc; end: 10afa3bd7; +[SCCMapItemsListTakeoverView componentPath] */

undefined ** FUN_10afa3bcc(void)

{
  return &PTR____CFConstantStringClassReference_110f40b18;
}



/* Entry: 10afa3bd8; end: 10afa3c0b; -[SCCMapItemsListTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_10afa3bd8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703698;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa3c0c; end: 10afa3c5b; -[SCCMapItemsListTakeoverView setViewModel:] */

void FUN_10afa3c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10afa3c5c; end: 10afa3c9f; -[SCCMapItemsListTakeoverView viewModel] */

void FUN_10afa3c5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afa3ca0; end: 10afa3cab; +[SCComposerVenueFavoritesManagerFactory modulePath] */

undefined ** FUN_10afa3ca0(void)

{
  return &PTR____CFConstantStringClassReference_110f40b38;
}



/* Entry: 10afa3cac; end: 10afa3cb3; +[SCComposerVenueFavoritesManagerFactory asyncStrictMode] */

undefined8 FUN_10afa3cac(void)

{
  return 0;
}



/* Entry: 10afa3cb4; end: 10afa3d4b; -[SCComposerVenueFavoritesManagerFactory makeVenueFavoritesManagerWithNetworkingClient:hitStaging:authHeader:] */

void FUN_10afa3cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010afa3f54();
  func_0x00010afa3f44();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010afa3f4c();
  func_0x00010afa3f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa3d4c; end: 10afa3e6b; +[SCComposerVenueFavoritesManagerFactory invokeWithJSRuntimeProvider:networkingClient:hitStaging:authHeader:completionHandler:] */

void FUN_10afa3d4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010afa3f54();
  func_0x00010afa3f44();
  _objc_retain(param_7);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10afa3e6c;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010afa3f44();
  func_0x00010afa3f54();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  func_0x00010afa3f3c();
  func_0x00010afa3f4c();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


