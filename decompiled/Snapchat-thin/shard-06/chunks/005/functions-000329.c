/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104962a58; end: 104962a5f; -[FBSDKGraphRequest setParameters:] */

void FUN_104962a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104962a60; end: 104962a67; -[FBSDKGraphRequest tokenString] */

undefined8 FUN_104962a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104962a68; end: 104962a6f; -[FBSDKGraphRequest graphPath] */

undefined8 FUN_104962a68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104962a70; end: 104962a77; -[FBSDKGraphRequest version] */

undefined8 FUN_104962a70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104962a78; end: 104962a7f; -[FBSDKGraphRequest forAppEvents] */

undefined1 FUN_104962a78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104962a80; end: 104962a87; -[FBSDKGraphRequest useAlternativeDefaultDomainPrefix] */

undefined1 FUN_104962a80(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104962a88; end: 104962a8f; -[FBSDKGraphRequest graphRequestConnectionFactory] */

undefined8 FUN_104962a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104962a90; end: 104962a9b; -[FBSDKGraphRequest setGraphRequestConnectionFactory:] */

void FUN_104962a90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104962a9c; end: 104962afb; -[FBSDKGraphRequest .cxx_destruct] */

void FUN_104962a9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104962afc; end: 104962ba7; -[FBSDKGraphRequestBody init] */

undefined1 * FUN_104962afc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0x20;
    FUN_10497c58c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010c0d8420();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104962ba8; end: 104962c03; -[FBSDKGraphRequestBody mimeContentType] */

void FUN_104962ba8(int param_1,undefined8 param_2)

{
  func_0x00010c137960();
  if (param_1 != 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f76838);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104962c04; end: 104962cd7; -[FBSDKGraphRequestBody appendUTF8:] */

void FUN_104962c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f768b8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  uVar4 = param_3;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x10),param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104962cd8; end: 104962ddb; -[FBSDKGraphRequestBody appendWithKey:formValue:logger:] */

void FUN_104962cd8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104962ddc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  _objc_retain();
  lStack_38 = param_4;
  func_0x00010bdcd680(param_1,param_2,param_3,0,0,&puStack_60);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x18),param_4,param_3);
  }
  func_0x00010bf06ba0(param_5,param_2,&PTR____CFConstantStringClassReference_110da3e78);
  _objc_release(lStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104962ddc; end: 104962de7;  */

void FUN_104962ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_appendUTF8__11259f630,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104962de8; end: 104962f2f; -[FBSDKGraphRequestBody appendWithKey:imageValue:logger:] */

void FUN_104962de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ade50;
  _objc_retain(param_5);
  _objc_retain();
  _objc_retain();
  func_0x00010c22bfc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1840();
  uVar2 = param_4;
  _UIImageJPEGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104962f30;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  _objc_retain();
  func_0x00010bdcd680(param_1,param_2,param_3,param_3,
                      &PTR____CFConstantStringClassReference_110dbfcd8,&puStack_70);
  func_0x00010c1ec600(param_1,param_2,1);
  func_0x00010c08fa60();
  func_0x00010bf06ba0(param_5,param_2,&PTR____CFConstantStringClassReference_110da3e98);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 104962f30; end: 104962f3b;  */

void FUN_104962f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_appendData__11259f460,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104962f3c; end: 10496302f; -[FBSDKGraphRequestBody appendWithKey:dataValue:logger:] */

void FUN_104962f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104963030;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain();
  func_0x00010bdcd680(param_1,param_2,param_3,param_3,
                      &PTR____CFConstantStringClassReference_110da3eb8,&puStack_60);
  func_0x00010c1ec600(param_1,param_2,1);
  func_0x00010c08fa60();
  func_0x00010bf06ba0(param_5,param_2,&PTR____CFConstantStringClassReference_110da3ed8);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104963030; end: 10496303b;  */

void FUN_104963030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_appendData__11259f460,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10496303c; end: 1049631cf; -[FBSDKGraphRequestBody appendWithKey:dataAttachmentValue:logger:] */

void FUN_10496303c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_5);
  _objc_retain();
  _objc_retain();
  ppuVar1 = param_4;
  func_0x00010bfad400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar3 = param_4;
  func_0x00010bf4dac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110da3eb8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = param_4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1049631d0;
  puStack_68 = &UNK_110841f80;
  uStack_60 = param_1;
  ppuStack_58 = ppuVar3;
  _objc_retain();
  func_0x00010bdcd680(param_1,param_2,param_3,ppuVar2,ppuVar1,&puStack_80);
  _objc_release(ppuVar1);
  func_0x00010c1ec600(param_1,param_2,1);
  func_0x00010c08fa60();
  func_0x00010bf06ba0(param_5,param_2,&PTR____CFConstantStringClassReference_110da3ed8);
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(ppuStack_58);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1049631d0; end: 1049631db;  */

void FUN_1049631d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_appendData__11259f460,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1049631dc; end: 104963273; -[FBSDKGraphRequestBody data] */

void FUN_1049631dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c137960();
  if ((int)lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf64b60(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x18),0,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104963274; end: 1049634af; -[FBSDKGraphRequestBody _appendWithKey:filename:contentType:contentBlock:] */

void FUN_104963274(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110da3ef8);
  puVar3 = PTR_PTR_1126add78;
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    func_0x00010bf09f20(puVar3,param_2,puVar1,puVar2);
    _objc_release(puVar2);
  }
  puVar3 = PTR_PTR_1126add78;
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    func_0x00010bf09f20(puVar3,param_2,puVar1,puVar2);
    _objc_release(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013ce0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae518);
  func_0x00010bf07220(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    func_0x00010bf07220(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010bf07220(param_1,param_2,&PTR____CFConstantStringClassReference_110f767b8);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  func_0x00010bf07220(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049634b0; end: 104963573; -[FBSDKGraphRequestBody compressedData] */

void FUN_1049634b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0cd4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126add58;
    if ((int)lVar3 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_104963560;
    }
    func_0x00010bf63640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcfce0(puVar4,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
  _objc_release(lVar1);
LAB_104963560:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104963574; end: 10496357f; -[FBSDKGraphRequestBody setData:] */

void FUN_104963574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104963580; end: 104963587; -[FBSDKGraphRequestBody requiresMultipartDataFormat] */

undefined1 FUN_104963580(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104963588; end: 10496358f; -[FBSDKGraphRequestBody setRequiresMultipartDataFormat:] */

void FUN_104963588(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104963590; end: 104963597; -[FBSDKGraphRequestBody json] */

undefined8 FUN_104963590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104963598; end: 1049635a3; -[FBSDKGraphRequestBody setJson:] */

void FUN_104963598(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1049635a4; end: 1049635ab; -[FBSDKGraphRequestBody stringBoundary] */

undefined8 FUN_1049635a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049635ac; end: 1049635b7; -[FBSDKGraphRequestBody setStringBoundary:] */

void FUN_1049635ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049635b8; end: 1049635f3; -[FBSDKGraphRequestBody .cxx_destruct] */

void FUN_1049635b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1049635f4; end: 1049635ff; +[FBSDKGraphRequestConnection hasBeenConfigured] */

undefined1 FUN_1049635f4(void)

{
  return uRam000000011369d328;
}



/* Entry: 104963600; end: 10496360b; +[FBSDKGraphRequestConnection setHasBeenConfigured:] */

void FUN_104963600(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam000000011369d328 = param_3;
  return;
}



/* Entry: 10496360c; end: 104963617; +[FBSDKGraphRequestConnection sessionProxyFactory] */

void FUN_10496360c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d330);
  return;
}



/* Entry: 104963618; end: 104963627; +[FBSDKGraphRequestConnection setSessionProxyFactory:] */

void FUN_104963618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d330,param_3);
  return;
}



/* Entry: 104963628; end: 104963633; +[FBSDKGraphRequestConnection errorConfigurationProvider] */

void FUN_104963628(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d338);
  return;
}



/* Entry: 104963634; end: 104963643; +[FBSDKGraphRequestConnection setErrorConfigurationProvider:] */

void FUN_104963634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d338,param_3);
  return;
}



/* Entry: 104963644; end: 10496364f; +[FBSDKGraphRequestConnection piggybackManager] */

void FUN_104963644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d340);
  return;
}



/* Entry: 104963650; end: 10496365b; +[FBSDKGraphRequestConnection setPiggybackManager:] */

void FUN_104963650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369d340 = param_3;
  return;
}



/* Entry: 10496365c; end: 104963667; +[FBSDKGraphRequestConnection settings] */

void FUN_10496365c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d348);
  return;
}



/* Entry: 104963668; end: 104963677; +[FBSDKGraphRequestConnection setSettings:] */

void FUN_104963668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d348,param_3);
  return;
}



/* Entry: 104963678; end: 104963683; +[FBSDKGraphRequestConnection graphRequestConnectionFactory] */

void FUN_104963678(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d350);
  return;
}



/* Entry: 104963684; end: 104963693; +[FBSDKGraphRequestConnection setGraphRequestConnectionFactory:] */

void FUN_104963684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d350,param_3);
  return;
}



/* Entry: 104963694; end: 10496369f; +[FBSDKGraphRequestConnection eventLogger] */

void FUN_104963694(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d358);
  return;
}



/* Entry: 1049636a0; end: 1049636af; +[FBSDKGraphRequestConnection setEventLogger:] */

void FUN_1049636a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d358,param_3);
  return;
}



/* Entry: 1049636b0; end: 1049636bb; +[FBSDKGraphRequestConnection operatingSystemVersionComparer] */

void FUN_1049636b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d360);
  return;
}



/* Entry: 1049636bc; end: 1049636cb; +[FBSDKGraphRequestConnection setOperatingSystemVersionComparer:] */

void FUN_1049636bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d360,param_3);
  return;
}



/* Entry: 1049636cc; end: 1049636d7; +[FBSDKGraphRequestConnection macCatalystDeterminator] */

void FUN_1049636cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d368);
  return;
}



/* Entry: 1049636d8; end: 1049636e7; +[FBSDKGraphRequestConnection setMacCatalystDeterminator:] */

void FUN_1049636d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d368,param_3);
  return;
}



/* Entry: 1049636e8; end: 1049636f3; +[FBSDKGraphRequestConnection accessTokenProvider] */

void FUN_1049636e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d370);
  return;
}



/* Entry: 1049636f4; end: 1049636ff; +[FBSDKGraphRequestConnection setAccessTokenProvider:] */

void FUN_1049636f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369d370 = param_3;
  return;
}



/* Entry: 104963700; end: 10496370b; +[FBSDKGraphRequestConnection errorFactory] */

void FUN_104963700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d378);
  return;
}



/* Entry: 10496370c; end: 10496371b; +[FBSDKGraphRequestConnection setErrorFactory:] */

void FUN_10496370c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d378,param_3);
  return;
}



/* Entry: 10496371c; end: 104963727; +[FBSDKGraphRequestConnection authenticationTokenProvider] */

void FUN_10496371c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d380);
  return;
}



/* Entry: 104963728; end: 104963733; +[FBSDKGraphRequestConnection setAuthenticationTokenProvider:] */

void FUN_104963728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369d380 = param_3;
  return;
}



/* Entry: 104963734; end: 1049638f3; +[FBSDKGraphRequestConnection configureWithURLSessionProxyFactory:errorConfigurationProvider:piggybackManager:settings:graphRequestConnectionFactory:eventLogger:operatingSystemVersionComparer:macCatalystDeterminator:accessTokenProvider:errorFactory:authenticationTokenProvider:] */

void FUN_104963734(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  uVar1 = param_1;
  func_0x00010bfd49c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1fdc40(param_1,param_2,param_3);
    func_0x00010c197000(param_1,param_2,param_4);
    func_0x00010c1db860(param_1,param_2,param_5);
    func_0x00010c1fe440(param_1,param_2,param_6);
    func_0x00010c1a42c0(param_1,param_2,param_7);
    func_0x00010c1978e0(param_1,param_2,param_8);
    func_0x00010c1d5900(param_1,param_2,param_9);
    func_0x00010c1c1560(param_1,param_2,param_10);
    func_0x00010c160e00(param_1,param_2,param_11);
    func_0x00010c1970c0(param_1,param_2,param_12);
    func_0x00010c16c960(param_1,param_2,param_13);
    func_0x00010c1a5a20(param_1,param_2,1);
  }
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049638f4; end: 1049639d7; -[FBSDKGraphRequestConnection init] */

undefined1 * FUN_1049638f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = uRam000000011309ef50;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf39c40();
    func_0x00010c1602e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf58d20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined1 **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0d8420();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126add38;
    _objc_alloc();
    func_0x00010c0277c0();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1049639d8; end: 104963a33; -[FBSDKGraphRequestConnection dealloc] */

void FUN_1049639d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d40();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e3398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104963a34; end: 104963a47; +[FBSDKGraphRequestConnection setDefaultConnectionTimeout:] */

void FUN_104963a34(double param_1)

{
  if (0.0 <= param_1) {
    dRam000000011309ef50 = param_1;
  }
  return;
}



/* Entry: 104963a48; end: 104963a53; +[FBSDKGraphRequestConnection defaultConnectionTimeout] */

undefined8 FUN_104963a48(void)

{
  return uRam000000011309ef50;
}



/* Entry: 104963a54; end: 104963a63; -[FBSDKGraphRequestConnection addRequest:completion:] */

void FUN_104963a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addRequest_name_completion__11259c5a0,param_3,
             &PTR____CFConstantStringClassReference_110daafd8,param_4);
  return;
}



/* Entry: 104963a64; end: 104963b67; -[FBSDKGraphRequestConnection addRequest:name:completion:] */

undefined *
FUN_104963a64(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_3;
  puVar4 = puVar9;
  uVar5 = param_5;
  func_0x00010befb000(param_1);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar9 = param_3;
  func_0x00010c252440();
  if (puVar9 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    iVar1 = 2;
    func_0x000100029b9c(2,0xe,5,0);
    if (iVar1 != 0) {
      puVar3 = puVar9;
      func_0x00010c1373a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar4 < (undefined *)0x2) {
        func_0x00010c1373a0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar9);
        puVar9 = PTR_PTR_1126ade80;
        func_0x00010c0733c0();
        if (((ulong)puVar9 & 1) == 0) {
          puVar9 = PTR_PTR_1126add50;
          func_0x00010bfc39e0(PTR_PTR_1126add50);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126add50;
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c070ce0();
          if ((int)puVar8 == 0) {
            puVar8 = (undefined *)0x1;
          }
          else {
            puVar6 = PTR_PTR_1126add50;
            func_0x00010c22ba80(PTR_PTR_1126add50);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010bfc1dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined *)(ulong)(puVar8 == (undefined *)0x0);
            _objc_release();
            _objc_release(puVar6);
          }
          _objc_release(puVar3);
          _objc_release(puVar9);
        }
        else {
          puVar8 = (undefined *)0x0;
        }
        _objc_release(puVar4);
        return puVar8;
      }
    }
    return (undefined *)0x1;
  }
  puVar8 = PTR_PTR_1126adee0;
  _objc_alloc(PTR_PTR_1126adee0);
  func_0x00010c03eba0();
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,5,0);
  puVar9 = PTR_PTR_1126ade80;
  if (iVar1 != 0) {
    puVar6 = puVar8;
    func_0x00010c134680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0733c0();
    if (((ulong)puVar9 & 1) == 0) {
      puVar9 = param_3;
      func_0x00010bf39c40();
      func_0x00010bf765a0();
      _objc_release(puVar6);
      if (((ulong)puVar9 & 1) == 0) {
        param_3 = PTR_PTR_1126adee8;
        func_0x00010c22ba80(PTR_PTR_1126adee8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf96380();
        goto LAB_104963c74;
      }
    }
    else {
      _objc_release(puVar6);
    }
  }
  puVar9 = PTR_PTR_1126add78;
  func_0x00010c1373a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f20(puVar9);
LAB_104963c74:
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 104963b68; end: 104963d07; -[FBSDKGraphRequestConnection addRequest:parameters:completion:] */

ulong FUN_104963b68(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar2 = param_1;
  func_0x00010c252440();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    iVar1 = 2;
    func_0x000100029b9c(2,0xe,5,0);
    if (iVar1 != 0) {
      puVar3 = puVar2;
      func_0x00010c1373a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar4 < (undefined *)0x2) {
        func_0x00010c1373a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126ade80;
        func_0x00010c0733c0();
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR_PTR_1126add50;
          func_0x00010bfc39e0(PTR_PTR_1126add50);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126add50;
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c070ce0();
          if ((int)puVar5 == 0) {
            uVar7 = 1;
          }
          else {
            puVar5 = PTR_PTR_1126add50;
            func_0x00010c22ba80(PTR_PTR_1126add50);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bfc1dc0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = (ulong)(puVar6 == (undefined *)0x0);
            _objc_release();
            _objc_release(puVar5);
          }
          _objc_release(puVar3);
          _objc_release(puVar2);
        }
        else {
          uVar7 = 0;
        }
        _objc_release(puVar4);
        return uVar7;
      }
    }
    return 1;
  }
  puVar3 = PTR_PTR_1126adee0;
  _objc_alloc(PTR_PTR_1126adee0);
  func_0x00010c03eba0();
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,5,0);
  puVar2 = PTR_PTR_1126ade80;
  if (iVar1 != 0) {
    puVar4 = puVar3;
    func_0x00010c134680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0733c0();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = param_1;
      func_0x00010bf39c40();
      func_0x00010bf765a0();
      _objc_release(puVar4);
      if (((ulong)puVar2 & 1) == 0) {
        param_1 = PTR_PTR_1126adee8;
        func_0x00010c22ba80(PTR_PTR_1126adee8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf96380();
        goto LAB_104963c74;
      }
    }
    else {
      _objc_release(puVar4);
    }
  }
  puVar2 = PTR_PTR_1126add78;
  func_0x00010c1373a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f20(puVar2);
LAB_104963c74:
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 104963d08; end: 104963e73; -[FBSDKGraphRequestConnection shouldPiggyBackRequests] */

bool FUN_104963d08(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,5,0);
  if (iVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c1373a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar4 < 2) {
      func_0x00010c1373a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(param_1);
      puVar5 = PTR_PTR_1126ade80;
      func_0x00010c0733c0();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR_PTR_1126add50;
        func_0x00010bfc39e0(PTR_PTR_1126add50);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126add50;
        func_0x00010c22ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c070ce0();
        if ((int)puVar7 == 0) {
          bVar1 = true;
        }
        else {
          puVar7 = PTR_PTR_1126add50;
          func_0x00010c22ba80(PTR_PTR_1126add50);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfc1dc0();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = puVar8 == (undefined *)0x0;
          _objc_release();
          _objc_release(puVar7);
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      else {
        bVar1 = false;
      }
      _objc_release(uVar4);
      return bVar1;
    }
  }
  return true;
}



/* Entry: 104963e74; end: 104963eb3; -[FBSDKGraphRequestConnection cancel] */

void FUN_104963e74(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c209fc0(param_1,param_2,4);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104963eb4; end: 104963eeb; -[FBSDKGraphRequestConnection overrideGraphAPIVersion:] */

void FUN_104963eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c1d7880(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104963eec; end: 1049642ab; -[FBSDKGraphRequestConnection start] */

void FUN_104963eec(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf2ce40();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010bf39c40(param_1);
    func_0x00010bf98ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c280900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40();
    func_0x00010c23cd40();
    _objc_release(puVar1);
    func_0x00010c209fc0(param_1,param_2,4);
    func_0x00010bf43920(param_1,param_2,0,0,puVar5);
LAB_10496414c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  puVar1 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar5 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c252440();
    if ((puVar1 != (undefined *)0x0) &&
       (puVar1 = param_1, func_0x00010c252440(), puVar1 != (undefined *)0x1)) {
      func_0x00010c0b3760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39c40();
      func_0x00010c23cd40();
      puVar5 = param_1;
      goto LAB_10496414c;
    }
    puVar1 = param_1;
    func_0x00010c231cc0();
    if ((int)puVar1 != 0) {
      puVar1 = param_1;
      func_0x00010bf39c40(param_1);
      func_0x00010c0fbca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa8a0();
      _objc_release(puVar1);
    }
    puVar1 = param_1;
    func_0x00010c1373a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c270480(param_1);
    puVar5 = param_1;
    func_0x00010c137040(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c209fc0(param_1,param_2,2);
    func_0x00010c0ae1a0(param_1,param_2,puVar5,0,0,0);
    puVar1 = PTR_PTR_1126add20;
    func_0x00010c22c4c0(PTR_PTR_1126add20);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf604c0();
    func_0x00010c1ec0a0(param_1,param_2,puVar2);
    _objc_release(puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1049642ac;
    puStack_70 = &UNK_110a1ae20;
    ppuVar3 = &puStack_88;
    puStack_68 = param_1;
    _objc_retainBlock(ppuVar3);
    puVar2 = PTR_PTR_1126adef0;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c231440();
    _objc_release(puVar2);
    if ((int)puVar4 == 0) {
      puVar2 = param_1;
      func_0x00010c15fac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b040();
    }
    else {
      puVar2 = PTR_PTR_1126adef0;
      func_0x00010c22b6a0(PTR_PTR_1126adef0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b140();
    }
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c13b700();
    if ((int)puVar4 != 0) {
      puVar4 = param_1;
      func_0x00010bf6b120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x00010c135000(puVar2,param_2,param_1);
      }
      else {
        puVar4 = param_1;
        func_0x00010bf6b120(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_b8 = puVar1;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x1049643b8;
        puStack_a0 = &UNK_110841f80;
        puVar1 = puVar2;
        _objc_retain();
        puStack_98 = puVar1;
        puStack_90 = param_1;
        func_0x00010befa3a0(puVar4,param_2,&puStack_b8);
        _objc_release(puVar4);
        _objc_release(puStack_98);
      }
    }
    _objc_release(puVar2);
    _objc_release(ppuVar3);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 1049642ac; end: 1049643a7;  */

void FUN_1049642ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1049643a8;
  puStack_50 = &UNK_110a1ae20;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_4 == 0) {
    func_0x00010c136780(uVar2);
    func_0x00010c26a5e0(uVar2);
  }
  else {
    func_0x00010becac20(uVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1049643a8; end: 1049643c3;  */

void FUN_1049643a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeFBSDKURLSessionWithRespo_1125ae7f0,
             param_3,param_2,param_4);
  return;
}



/* Entry: 1049643c4; end: 10496441f; -[FBSDKGraphRequestConnection setDelegateQueue:] */

void FUN_1049643c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b6c0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104964420; end: 10496442f; +[FBSDKGraphRequestConnection setCanMakeRequests] */

void FUN_104964420(void)

{
  uRam000000011369d388 = 1;
  return;
}



/* Entry: 104964430; end: 10496443b; +[FBSDKGraphRequestConnection canMakeRequests] */

undefined1 FUN_104964430(void)

{
  return uRam000000011369d388;
}



/* Entry: 10496443c; end: 10496444b; +[FBSDKGraphRequestConnection setDidFetchDomainConfiguration] */

void FUN_10496443c(void)

{
  uRam000000011369d389 = 1;
  return;
}



/* Entry: 10496444c; end: 104964457; +[FBSDKGraphRequestConnection didFetchDomainConfiguration] */

undefined1 FUN_10496444c(void)

{
  return uRam000000011369d389;
}



/* Entry: 104964458; end: 1049647bf; -[FBSDKGraphRequestConnection addRequest:toBatch:attachments:batchToken:] */

void FUN_104964458(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_3;
  func_0x00010bf17040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf17040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_6 != 0) {
    lVar2 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar4,param_6,
                        &PTR____CFConstantStringClassReference_110e18ef8);
    lVar2 = param_3;
    func_0x00010c134680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8f40();
    _objc_release(lVar2);
    func_0x00010c127320(param_1,param_2,param_6);
    _objc_release(puVar4);
  }
  lVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28f9c0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,param_1,
                      &PTR____CFConstantStringClassReference_110da3f98);
  puVar4 = PTR_PTR_1126add78;
  lVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,lVar3,&PTR____CFConstantStringClassReference_110dc1798);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126add78;
  lVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1049647c0;
  puStack_78 = &UNK_110921748;
  _objc_retain();
  uStack_70 = param_5;
  _objc_retain();
  puStack_68 = puVar5;
  func_0x00010bf71e40(puVar4,param_2,lVar3,&puStack_90);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126add78;
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar1,puVar6,
                        &PTR____CFConstantStringClassReference_110da3fb8);
    _objc_release(puVar6);
  }
  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,param_4,puVar1);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049647c0; end: 104964877;  */

void FUN_1049647c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ade80;
  func_0x00010c06c800(PTR_PTR_1126ade80,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar1 != 0) {
    func_0x00010bf529e0();
    func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd6b38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f20(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x28),puVar2);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x20),param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104964878; end: 104964aaf; -[FBSDKGraphRequestConnection appendAttachments:toBody:addFormData:logger:] */

void FUN_104964878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126add78;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10496493c;
  puStack_50 = &UNK_1107b9998;
  uStack_48 = param_4;
  uStack_40 = param_6;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010bf71e40(puVar1,param_2,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104964ab0; end: 104964d9b; -[FBSDKGraphRequestConnection appendJSONRequests:toBody:andNameAttachments:logger:] */

ulong FUN_104964ab0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  uStack_138 = param_3;
  func_0x00010bf52a60();
  uVar14 = 0;
  if (uStack_138 != 0) {
    lVar12 = *plStack_120;
    do {
      uVar15 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar16 = *(undefined8 *)(lStack_128 + uVar15 * 8);
        uVar2 = uVar16;
        func_0x00010c134680(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010beecda0(param_1,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar4 = param_1;
        func_0x00010bf39c40();
        func_0x00010c227f80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf3d5c0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          uVar13 = 0;
        }
        else {
          uVar6 = param_1;
          func_0x00010bf39c40(param_1);
          func_0x00010c227f80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf3d5c0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar3;
          func_0x00010bfdcf80(uVar3,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        if ((uVar14 == 0) && ((uVar13 & 1) == 0)) {
          uVar14 = uVar3;
          _objc_retain();
        }
        uVar5 = uVar14;
        func_0x00010c0720c0(uVar14,param_2,uVar3);
        uVar4 = 0;
        if ((int)uVar5 == 0) {
          uVar4 = uVar3;
        }
        func_0x00010befb020(param_1,param_2,uVar16,puVar1,param_5,uVar4);
        _objc_release(uVar3);
        uVar15 = uVar15 + 1;
      } while (uStack_138 != uVar15);
      uStack_138 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (uStack_138 != 0);
  }
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126add58;
  func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e643b8;
  func_0x00010bf07300(param_4,param_2,&PTR____CFConstantStringClassReference_110e643b8,puVar8,
                      param_6);
  if (uVar14 != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e18ef8;
    func_0x00010bf07300(param_4,param_2,&PTR____CFConstantStringClassReference_110e18ef8,uVar14,
                        param_6);
  }
  _objc_release(puVar8);
  _objc_release(uVar14);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c298be0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar9 == (undefined **)0x0) {
    uVar14 = 1;
  }
  else {
    ppuVar10 = ppuVar9;
    func_0x00010bfda7c0();
    ppuVar11 = ppuVar9;
    if ((int)ppuVar10 != 0) {
      func_0x00010c260c00(ppuVar9,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
    }
    ppuVar9 = ppuVar11;
    func_0x00010bf433c0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110da4078,0x40);
    uVar14 = (ulong)(ppuVar9 < (undefined **)0x2);
    _objc_release(ppuVar11);
  }
  return uVar14;
}



/* Entry: 104964d9c; end: 104964e2f; -[FBSDKGraphRequestConnection _shouldWarnOnMissingFieldsParam:] */

bool FUN_104964d9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c298be0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = param_3;
    func_0x00010bfda7c0();
    uVar3 = param_3;
    if ((int)uVar2 != 0) {
      func_0x00010c260c00(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    uVar2 = uVar3;
    func_0x00010bf433c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110da4078,0x40);
    bVar1 = uVar2 < 2;
    _objc_release(uVar3);
  }
  return bVar1;
}



/* Entry: 104964e30; end: 1049650c3; -[FBSDKGraphRequestConnection _validateFieldsParamForGetRequests:] */

void FUN_104964e30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar15 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar13 = &uStack_130;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined8 *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = *(undefined **)(lStack_128 + (long)puVar13 * 8);
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bdc16c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c28ed80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0720c0();
        if ((int)puVar5 == 0) {
LAB_104964f78:
          _objc_release(puVar4);
LAB_104964f80:
          _objc_release(puVar3);
        }
        else {
          uVar14 = param_1;
          func_0x00010beb7580(param_1,param_2,puVar2);
          if ((int)uVar14 == 0) goto LAB_104964f78;
          puVar5 = puVar2;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
            goto LAB_104964f80;
          }
          puVar6 = puVar2;
          func_0x00010bfcdd40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c11f420();
          _objc_release(puVar6);
          _objc_release(0);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (puVar7 == (undefined *)0x7fffffffffffffff) {
            puVar4 = puVar2;
            func_0x00010bfcdd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da40b8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            func_0x00010c23cd40(PTR_PTR_1126add38,param_2,
                                &PTR____CFConstantStringClassReference_110da4eb8,puVar3);
            goto LAB_104964f80;
          }
        }
        _objc_release(puVar2);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar1 != puVar13);
      puVar13 = &uStack_130;
      puVar1 = param_3;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = PTR_PTR_1126adef8;
  func_0x00010c0d8420(PTR_PTR_1126adef8);
  puVar4 = PTR_PTR_1126add38;
  _objc_alloc();
  puVar1 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c0b3960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0277c0(puVar4,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126add38;
  _objc_alloc();
  puVar1 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c0b3960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0277c0(puVar5,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar1 = puVar13;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110da40d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f000();
    _objc_release(puVar2);
  }
  func_0x00010bee7940(param_3,param_2,puVar13);
  puVar1 = puVar13;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x1) {
    puVar8 = puVar13;
    func_0x00010bfb1920(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar1 = puVar8;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c28f9e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
    func_0x00010c137180(uVar15,PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    func_0x00010c134680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bdc16c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar1);
    func_0x00010c1a4fc0(puVar6,param_2,puVar11);
    puVar10 = puVar8;
    func_0x00010c134680(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar11;
    func_0x00010c0720c0(puVar11,param_2,&PTR____CFConstantStringClassReference_110dada18);
    func_0x00010bf069c0(param_3,param_2,puVar1,puVar3,puVar9,puVar5);
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if ((puVar8 == (undefined8 *)0x0) ||
       (puVar1 = puVar8, func_0x00010c08fa60(), puVar1 == (undefined8 *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                          *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                          &PTR____CFConstantStringClassReference_110da40f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f000();
      _objc_release(puVar2);
    }
    func_0x00010bf07300(puVar3,param_2,&PTR____CFConstantStringClassReference_110da4118,puVar8,
                        puVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bf06cc0(param_3,param_2,puVar13,puVar3,puVar2,puVar4);
    func_0x00010bf069c0(param_3,param_2,puVar2,puVar3,0,puVar5);
    puVar1 = (undefined8 *)PTR_PTR_1126add50;
    func_0x00010c22ba80(PTR_PTR_1126add50);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010bf39c40(param_3);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c06bb20();
    puVar11 = puVar1;
    func_0x00010bfcb8e0(puVar1,param_2,puVar13,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar1 = (undefined8 *)PTR_PTR_1126add20;
    func_0x00010c22c4c0(PTR_PTR_1126add20);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
    puVar9 = param_3;
    func_0x00010c0eff80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf9f380(puVar1,param_2,puVar11,&PTR____CFConstantStringClassReference_110daafd8,
                        uVar14,puVar9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
    func_0x00010c137180(uVar15,PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_2,puVar10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4fc0();
  }
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar8);
  puVar2 = puVar6;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar7 == 0) {
    puVar2 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4f00(puVar6,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010bef7240(param_3,param_2,puVar3,puVar6);
  }
  puVar1 = param_3;
  func_0x00010c291200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(puVar6,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2d8f8);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00010c0cd4c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(puVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_110dbea38);
  _objc_release(puVar2);
  func_0x00010c1a4fe0(puVar6,param_2,0);
  puVar2 = puVar6;
  func_0x00010bdc1620(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c08fa60();
  func_0x00010c0ae1a0(param_3,param_2,puVar6,(ulong)puVar7 >> 10,puVar4,puVar5);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1049650c4; end: 1049656a7; -[FBSDKGraphRequestConnection requestWithBatch:timeout:] */

void FUN_1049650c4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126adef8;
  func_0x00010c0d8420(PTR_PTR_1126adef8);
  puVar2 = PTR_PTR_1126add38;
  _objc_alloc();
  puVar3 = param_2;
  func_0x00010c0b3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b3960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0277c0(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126add38;
  _objc_alloc();
  puVar4 = param_2;
  func_0x00010c0b3760(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b3960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0277c0(puVar3,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                        *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
                        &PTR____CFConstantStringClassReference_110da40d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f000();
    _objc_release(puVar4);
  }
  func_0x00010bee7940(param_2,param_3,param_4);
  puVar4 = param_4;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x1) {
    puVar5 = param_4;
    func_0x00010bfb1920(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar7 = puVar5;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010c28f9e0(param_2,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_3,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
    func_0x00010c137180(param_1,PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_3,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c134680(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bdc16c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c1a4fc0(puVar7,param_3,puVar10);
    puVar9 = puVar5;
    func_0x00010c134680(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c0720c0(puVar10,param_3,&PTR____CFConstantStringClassReference_110dada18);
    func_0x00010bf069c0(param_2,param_3,puVar8,puVar1,puVar6,puVar3);
    _objc_release(puVar8);
  }
  else {
    puVar4 = param_2;
    func_0x00010bf39c40();
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if ((puVar5 == (undefined *)0x0) ||
       (puVar4 = puVar5, func_0x00010c08fa60(), puVar4 == (undefined *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_3,
                          *(undefined8 *)PTR__NSInternalInconsistencyException_11034aa48,
                          &PTR____CFConstantStringClassReference_110da40f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f000();
      _objc_release(puVar4);
    }
    func_0x00010bf07300(puVar1,param_3,&PTR____CFConstantStringClassReference_110da4118,puVar5,
                        puVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010bf06cc0(param_2,param_3,param_4,puVar1,puVar4,puVar2);
    func_0x00010bf069c0(param_2,param_3,puVar4,puVar1,0,puVar3);
    puVar7 = PTR_PTR_1126add50;
    func_0x00010c22ba80(PTR_PTR_1126add50);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010bf39c40(param_2);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c06bb20();
    puVar10 = puVar7;
    func_0x00010bfcb8e0(puVar7,param_3,param_4,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126add20;
    func_0x00010c22c4c0(PTR_PTR_1126add20);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
    puVar8 = param_2;
    func_0x00010c0eff80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf9f380(puVar7,param_3,puVar10,&PTR____CFConstantStringClassReference_110daafd8,
                        uVar11,puVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
    func_0x00010c137180(param_1,PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_3,puVar9,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4fc0();
  }
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = puVar7;
  func_0x00010bdc16c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)puVar5 == 0) {
    puVar4 = puVar1;
    func_0x00010bf63640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4f00(puVar7,param_3,puVar4);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bef7240(param_2,param_3,puVar1,puVar7);
  }
  puVar4 = param_2;
  func_0x00010c291200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(puVar7,param_3,puVar4,&PTR____CFConstantStringClassReference_110e2d8f8);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c0cd4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(puVar7,param_3,puVar4,&PTR____CFConstantStringClassReference_110dbea38);
  _objc_release(puVar4);
  func_0x00010c1a4fe0(puVar7,param_3,0);
  puVar4 = puVar7;
  func_0x00010bdc1620(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  func_0x00010c0ae1a0(param_2,param_3,puVar7,(ulong)puVar5 >> 10,puVar2,puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1049656a8; end: 104965763; -[FBSDKGraphRequestConnection addBody:toPostRequest:] */

void FUN_1049656a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf45700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4f00(param_4,param_2,lVar2);
    _objc_release(param_4);
  }
  else {
    func_0x00010c1a4f00(param_4,param_2,lVar1);
    func_0x00010c2201e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e04538,
                        &PTR____CFConstantStringClassReference_110ebf758);
    lVar2 = param_4;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104965764; end: 104965813; -[FBSDKGraphRequestConnection getURLParamsForRequest:] */

void FUN_104965764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0f3840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72020(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e69858,
                      &PTR____CFConstantStringClassReference_110f22bf8);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110e17ad8,
                      &PTR____CFConstantStringClassReference_110da4138);
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110dad398,
                      &PTR____CFConstantStringClassReference_110da4158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104965814; end: 104965913; -[FBSDKGraphRequestConnection urlStringForRequestInBatch:] */

void FUN_104965814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010bfcb8c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  func_0x00010c1d8f40(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ade80;
  uVar1 = param_3;
  func_0x00010bfcdd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f3840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bdc16c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c15e920(puVar4,param_2,uVar1,uVar2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104965914; end: 104965b63; -[FBSDKGraphRequestConnection urlStringForSingleRequest:] */

void FUN_104965914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfcb8c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beecda0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c220220(lVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110e18ef8);
    func_0x00010c127320(param_1,param_2,lVar2);
  }
  puVar3 = PTR_PTR_1126add50;
  func_0x00010c22ba80(PTR_PTR_1126add50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(param_1);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c06bb20();
  puVar5 = puVar3;
  func_0x00010bfcb900(puVar3,param_2,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126add20;
  func_0x00010c22c4c0(PTR_PTR_1126add20);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfcdd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)PTR____NSDictionary0___11034ab50;
  uVar7 = param_3;
  func_0x00010c298be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf9f380(puVar3,param_2,puVar5,uVar6,uVar10,uVar7,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar3);
  lVar4 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010c1d8f40(param_3,param_2,lVar4);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126ade80;
  uVar6 = param_3;
  func_0x00010c0f3840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bdc16c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e920(puVar3,param_2,puVar9,uVar6,uVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104965b64; end: 104965f2b; -[FBSDKGraphRequestConnection completeFBSDKURLSessionWithResponse:data:networkError:] */

void FUN_104965b64(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar9 = param_1;
  func_0x00010c252440();
  if (puVar9 != (undefined *)0x4) {
    func_0x00010c209fc0(param_1);
  }
  _objc_storeStrong(param_1 + 0x18,param_3);
  puVar9 = param_1;
  puVar7 = param_1;
  puVar8 = param_1;
  if (lVar1 == 0) {
    if (param_5 == (undefined *)0x0) {
      func_0x00010bf39c40();
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar9;
      func_0x00010c280900();
      _objc_retainAutoreleasedReturnValue();
LAB_104965cf8:
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
      if (param_5 == (undefined *)0x0) goto LAB_104965d0c;
    }
    else {
      puVar9 = (undefined *)0x0;
    }
LAB_104965e0c:
    func_0x00010c0b3760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b38a0();
    puVar2 = param_5;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar7);
    _objc_release(puVar5);
  }
  else {
    puVar2 = param_1;
    func_0x00010c28f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252ee0();
    _objc_release(puVar2);
    if (param_5 == (undefined *)0x0) {
      lVar3 = lVar1;
      func_0x00010bdc1c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfda7c0();
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        func_0x00010bf39c40();
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        param_5 = puVar9;
        func_0x00010bf99200();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104965cf8;
      }
    }
    func_0x00010c0f41c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    _objc_retain();
    _objc_release(param_5);
    param_5 = puVar2;
    if (puVar2 != (undefined *)0x0) goto LAB_104965e0c;
LAB_104965d0c:
    puVar2 = param_1;
    func_0x00010c1373a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf529e0();
    puVar6 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar5 != puVar6) {
      puVar2 = param_1;
      func_0x00010bf39c40();
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar2;
      func_0x00010bf99200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (param_5 == (undefined *)0x0) goto LAB_104965e9c;
      goto LAB_104965e0c;
    }
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b38a0();
    puVar2 = PTR_PTR_1126add20;
    func_0x00010c22c4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0();
    func_0x00010c136780();
    func_0x00010c08fa60();
    func_0x00010bf06ba0(puVar7);
    param_5 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_104965e9c:
  puVar7 = param_1;
  func_0x00010c0b3760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e120();
  _objc_release(puVar7);
  func_0x00010bde37e0(param_1);
  func_0x00010c15fac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d40();
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
  return;
}



/* Entry: 104965f2c; end: 104966637; -[FBSDKGraphRequestConnection parseJSONResponse:error:statusCode:] */

void FUN_104965f2c(undefined **param_1,undefined8 param_2,undefined ***param_3,undefined ***param_4,
                  undefined ***param_5)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined **unaff_x20;
  undefined ***pppuVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  bool bVar23;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined ***pppuStack_228;
  undefined ***pppuStack_220;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  undefined ***pppuStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined ***pppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined ***pppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined ***pppuStack_128;
  undefined **appuStack_120 [16];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  pppuVar1 = (undefined ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  pppuVar2 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010c0d8420();
  pppuVar18 = (undefined ***)param_1;
  ppuVar12 = (undefined **)pppuVar1;
  pppuVar13 = param_4;
  pppuStack_1b8 = (undefined ***)param_1;
  func_0x00010c0f41a0();
  _objc_retainAutoreleasedReturnValue();
  if (pppuVar1 == (undefined ***)0x0) {
    pppuVar3 = param_3;
    func_0x00010c08fa60();
    if (pppuVar3 == (undefined ***)0x0) {
      param_1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar12 = (undefined **)0x0;
      param_1 = (undefined **)param_3;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      if ((undefined ***)param_1 == (undefined ***)0x0) goto LAB_104966030;
    }
    pppuVar3 = pppuStack_1b8;
    func_0x00010bf39c40(pppuStack_1b8);
    func_0x00010bf99fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110da4218;
    pppuVar13 = (undefined ***)0x1;
    func_0x00010c0a8d40();
    _objc_release(pppuVar3);
    _objc_release(param_1);
  }
LAB_104966030:
  pppuVar3 = param_4;
  if (pppuVar18 == (undefined ***)0x0) {
    if ((param_4 != (undefined ***)0x0) && (*param_4 == (undefined **)0x0)) {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110da2a18;
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar22;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      pppuVar3 = pppuStack_1b8;
      func_0x00010bf39c40();
      func_0x00010bf98ac0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110da4238;
      pppuVar7 = pppuVar3;
      pppuVar13 = (undefined ***)unaff_x20;
      pppuStack_1c0 = (undefined ***)unaff_x20;
      func_0x00010c280900();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar22 = (undefined *)0x0;
LAB_1049665b4:
      *param_4 = (undefined **)pppuVar7;
      param_1 = (undefined **)param_4;
      goto LAB_1049665b8;
    }
    puVar22 = (undefined *)0x0;
  }
  else {
    param_1 = (undefined **)pppuStack_1b8;
    func_0x00010c1373a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = (undefined ***)param_1;
    func_0x00010bf529e0();
    _objc_release(param_1);
    puVar5 = PTR_PTR_1126add78;
    if (pppuVar7 == (undefined ***)0x1) {
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110db9558;
      pppuVar13 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110dc6858;
      pppuVar3 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      pppuStack_1c0 = pppuVar13;
      pppuStack_90 = pppuVar13;
      pppuStack_88 = pppuVar18;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = (undefined **)pppuVar2;
      pppuVar13 = pppuVar3;
      func_0x00010bf09f20(puVar5);
      puVar22 = (undefined *)0x0;
      param_1 = (undefined **)puVar5;
LAB_1049665b8:
      _objc_release(pppuVar3);
      param_4 = pppuVar3;
    }
    else {
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
      pppuVar7 = pppuVar18;
      func_0x00010c075f00();
      pppuStack_1c8 = param_4;
      if ((int)pppuVar7 == 0) {
        unaff_x20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf39c40();
        pppuVar7 = pppuVar18;
        func_0x00010c075f00();
        puVar22 = PTR_PTR_1126add78;
        if ((int)pppuVar7 == 0) {
          puVar22 = (undefined *)0x0;
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        else {
          param_1 = (undefined **)pppuVar18;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_1;
          func_0x00010bf71fc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar22 == (undefined *)0x0) {
            _objc_release(param_1);
          }
          else {
            puVar5 = puVar22;
            pppuStack_1b0 = pppuVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = &PTR____CFConstantStringClassReference_110da4258;
            puVar19 = puVar5;
            func_0x00010c0720c0();
            _objc_release(puVar5);
            _objc_release(param_1);
            pppuVar2 = pppuStack_1b0;
            if ((int)puVar19 != 0) {
              ppuStack_140 = &PTR____CFConstantStringClassReference_110db9558;
              ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_138 = &PTR____CFConstantStringClassReference_110dc6858;
              ppuVar12 = (undefined **)&ppuStack_130;
              pppuVar13 = &ppuStack_140;
              pppuVar2 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              ppuStack_130 = ppuVar6;
              pppuStack_128 = pppuVar18;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              pppuStack_1c0 = pppuVar2;
              _objc_release(ppuVar6);
              pppuVar2 = pppuStack_1b8;
              func_0x00010c1373a0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar3 = pppuVar2;
              func_0x00010bf529e0();
              _objc_release(pppuVar2);
              pppuVar2 = pppuStack_1b0;
              pppuVar7 = pppuStack_1c0;
              for (; pppuVar3 != (undefined ***)0x0; pppuVar3 = (undefined ***)((long)pppuVar3 + -1)
                  ) {
                ppuVar12 = (undefined **)pppuVar2;
                pppuVar13 = pppuVar7;
                func_0x00010bf09f20(PTR_PTR_1126add78);
                unaff_x20 = (undefined **)pppuVar7;
              }
              param_1 = (undefined **)0x0;
              param_4 = pppuVar18;
              goto LAB_1049665c0;
            }
          }
          pppuVar3 = (undefined ***)0x0;
          param_4 = pppuStack_1c8;
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        }
        PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar5;
        if (param_4 != (undefined ***)0x0) {
          ppuStack_160 = &PTR____CFConstantStringClassReference_110da2a18;
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_158 = &PTR____CFConstantStringClassReference_110da2a38;
          unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_150 = puVar5;
          pppuStack_148 = pppuVar2;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          pppuVar3 = pppuStack_1b8;
          func_0x00010bf39c40();
          func_0x00010bf98ac0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = (undefined **)0x7;
          pppuVar7 = pppuVar3;
          pppuVar13 = (undefined ***)unaff_x20;
          pppuStack_1c0 = (undefined ***)unaff_x20;
          func_0x00010bf99200();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          goto LAB_1049665b4;
        }
        goto LAB_1049665c8;
      }
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      lStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
      uStack_188 = 0;
      plStack_190 = (long *)0x0;
      pppuVar3 = pppuVar18;
      pppuStack_1d0 = param_3;
      _objc_retain();
      ppuVar12 = (undefined **)&ppuStack_1a0;
      pppuVar13 = appuStack_120;
      pppuStack_1c0 = pppuVar3;
      func_0x00010bf52a60();
      if (pppuVar3 == (undefined ***)0x0) {
        puVar22 = (undefined *)0x0;
        param_3 = pppuStack_1d0;
      }
      else {
        lVar20 = *plStack_190;
        unaff_x20 = &PTR____CFConstantStringClassReference_110dc6858;
        pppuVar7 = pppuStack_1c0;
        pppuStack_1e0 = pppuVar18;
        pppuStack_1d8 = pppuVar1;
        do {
          param_5 = (undefined ***)0x0;
          pppuStack_1b0 = pppuVar3;
          do {
            if (*plStack_190 != lVar20) {
              _objc_enumerationMutation(pppuVar7);
            }
            uVar17 = *(ulong *)(lStack_198 + (long)param_5 * 8);
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            uVar4 = uVar17;
            func_0x00010c075f00();
            if ((uVar4 & 1) == 0) {
              func_0x00010bf09f20(PTR_PTR_1126add78);
              param_1 = (undefined **)0x0;
            }
            else {
              func_0x00010c0d3c80();
              uVar4 = uVar17;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar22 = PTR_PTR_1126add78;
              param_1 = (undefined **)0x0;
              if (uVar4 != 0) {
                uVar4 = uVar17;
                func_0x00010c0e00e0(uVar17);
                _objc_retainAutoreleasedReturnValue();
                pppuStack_1a8 = (undefined ***)0x0;
                pppuVar13 = pppuStack_1b8;
                func_0x00010c0f41a0(pppuStack_1b8);
                _objc_retainAutoreleasedReturnValue();
                param_1 = (undefined **)pppuStack_1a8;
                _objc_retain();
                pppuVar7 = pppuStack_1c0;
                func_0x00010bf71e80(puVar22);
                param_4 = pppuStack_1c8;
                _objc_release(pppuVar13);
                _objc_release(uVar4);
              }
              func_0x00010bf09f20(PTR_PTR_1126add78);
              _objc_release(uVar17);
              pppuVar3 = pppuStack_1b0;
              if (((undefined ***)param_1 != (undefined ***)0x0) && (*param_4 == (undefined **)0x0))
              {
                _objc_retainAutorelease(param_1);
                *param_4 = param_1;
              }
            }
            _objc_release(param_1);
            param_5 = (undefined ***)((long)param_5 + 1);
          } while (pppuVar3 != param_5);
          ppuVar12 = (undefined **)&ppuStack_1a0;
          pppuVar13 = appuStack_120;
          pppuVar3 = pppuVar7;
          func_0x00010bf52a60();
        } while (pppuVar3 != (undefined ***)0x0);
        puVar22 = (undefined *)0x0;
        pppuVar1 = pppuStack_1d8;
        pppuVar18 = pppuStack_1e0;
        param_3 = pppuStack_1d0;
      }
    }
LAB_1049665c0:
    _objc_release(pppuStack_1c0);
    pppuVar3 = param_4;
  }
LAB_1049665c8:
  _objc_release(puVar22);
  _objc_release(pppuVar18);
  _objc_release(pppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar2);
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  pppuVar14 = &ppuStack_250;
  pcStack_1e8 = FUN_104966638;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = (undefined ***)ppuVar12;
  pppuVar8 = pppuVar13;
  puStack_230 = puVar22;
  pppuStack_228 = param_5;
  pppuStack_220 = pppuVar3;
  pppuStack_218 = pppuVar18;
  pppuStack_210 = pppuVar2;
  pppuStack_208 = pppuVar1;
  pppuStack_200 = (undefined ***)unaff_x20;
  pppuStack_1f8 = (undefined ***)param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010bf39c40();
  pppuVar1 = (undefined ***)ppuVar12;
  FUN_104984150();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  if (*pppuVar13 == (undefined **)0x0 && pppuVar1 != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)PTR_PTR_1126add58;
    pppuVar7 = pppuVar1;
    pppuVar8 = pppuVar13;
    func_0x00010c0dff00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar18 = (undefined ***)PTR_PTR_1126add58;
    if (*pppuVar13 != (undefined **)0x0) {
      ppuStack_248 = &PTR____CFConstantStringClassReference_110da3f78;
      puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      pppuStack_240 = pppuVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = pppuVar18;
      func_0x00010bdc19c0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_250 = (undefined **)0x0;
      pppuVar7 = pppuVar3;
      func_0x00010c0dff00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuStack_250;
      _objc_release(pppuVar2);
      _objc_release(pppuVar3);
      _objc_release(puVar22);
      pppuVar8 = pppuVar14;
      pppuVar2 = pppuVar18;
      if (ppuVar12 == (undefined **)0x0) {
        *pppuVar13 = (undefined **)0x0;
      }
    }
  }
  else {
    pppuVar2 = (undefined ***)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  pppuVar13 = pppuVar1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(pppuVar13);
  func_0x00010c198a20(pppuVar1);
  pppuVar2 = pppuVar1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar13 = pppuVar2;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (pppuVar13 != (undefined ***)0x0) {
    pppuVar18 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(pppuVar2);
      }
      uVar9 = *(undefined8 *)((long)pppuVar18 * 8);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0747c0();
      _objc_release(uVar9);
      pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
    } while (pppuVar13 != pppuVar18);
    pppuVar13 = pppuVar2;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar2);
  pppuVar13 = pppuVar1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain();
  func_0x00010bf97e80(pppuVar13);
  _objc_release(pppuVar13);
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar13 = pppuVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    pppuVar2 = pppuVar13;
    func_0x00010c13b700();
    _objc_release(pppuVar13);
    if ((int)pppuVar2 != 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c134fa0();
      _objc_release(pppuVar1);
    }
  }
  _objc_release(pppuVar7);
  _objc_release(pppuVar8);
  _objc_release(pppuVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  puVar22 = puVar5;
  _objc_retain();
  if (pppuVar7[4] == (undefined **)0x0) {
    puVar19 = PTR_PTR_1126add78;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar19 = (undefined *)0x0;
  }
  ppuVar12 = pppuVar7[4];
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar12 = pppuVar7[6];
    puVar21 = puVar22;
    func_0x00010c134680(puVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    if (ppuVar12 != (undefined **)0x0) goto LAB_104966b00;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar21 = puVar19;
    func_0x00010c075f00();
    if ((int)puVar21 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126add78;
      func_0x00010bf71fc0(PTR_PTR_1126add78);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126add78;
      puVar11 = puVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71fc0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar16);
    }
    ppuVar12 = (undefined **)0x0;
    bVar23 = true;
  }
  else {
    _objc_retain();
LAB_104966b00:
    bVar23 = false;
    puVar21 = (undefined *)0x0;
  }
  puVar16 = puVar22;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar16;
  func_0x00010c0747c0();
  _objc_release(puVar16);
  if (((!bVar23) && (((ulong)puVar11 & 1) == 0)) && (*(char *)(pppuVar7 + 7) == '\x01')) {
    _objc_storeStrong(pppuVar7[6] + 0xc,puVar5);
    puVar5 = PTR_PTR_1126aded0;
    _objc_alloc();
    ppuVar10 = pppuVar7[6];
    func_0x00010bf39c40(ppuVar10);
    func_0x00010beecd60();
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar10;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefce0();
    puVar16 = pppuVar7[6][0xd];
    pppuVar7[6][0xd] = puVar5;
    _objc_release(puVar16);
    _objc_release(ppuVar6);
    _objc_release(ppuVar10);
    puVar16 = pppuVar7[6][0xd];
    puVar5 = puVar22;
    func_0x00010c134680(puVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114960();
    _objc_release(puVar5);
    if (((ulong)puVar16 & 1) != 0) goto LAB_104966c1c;
  }
  func_0x00010c1152a0(pppuVar7[6]);
LAB_104966c1c:
  _objc_release(puVar21);
  _objc_release(ppuVar12);
  _objc_release(puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar22);
  return;
}



/* Entry: 104966638; end: 1049667c7; -[FBSDKGraphRequestConnection parseJSONOrOtherwise:error:] */

void FUN_104966638(undefined8 param_1,undefined8 param_2,undefined *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  bool bVar16;
  long lStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  plVar9 = &lStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  plVar5 = param_4;
  _objc_retain();
  func_0x00010bf39c40();
  puVar2 = param_3;
  FUN_104984150();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (*param_4 == 0 && puVar2 != (undefined *)0x0) {
    puVar15 = PTR_PTR_1126add58;
    puVar4 = puVar2;
    plVar5 = param_4;
    func_0x00010c0dff00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126add58;
    if (*param_4 != 0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110da3f78;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar2;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010bdc19c0();
      _objc_retainAutoreleasedReturnValue();
      lStack_70 = 0;
      puVar4 = puVar3;
      func_0x00010c0dff00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lStack_70;
      _objc_release(puVar15);
      _objc_release(puVar3);
      _objc_release(puVar12);
      plVar5 = plVar9;
      puVar15 = puVar13;
      if (lVar7 == 0) {
        *param_4 = 0;
      }
    }
  }
  else {
    puVar15 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar13 = puVar2;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(puVar13);
  func_0x00010c198a20(puVar2);
  puVar15 = puVar2;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar15;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar13 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar15);
      }
      uVar6 = *(undefined8 *)((long)puVar12 * 8);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0747c0();
      _objc_release(uVar6);
      puVar12 = puVar12 + 1;
    } while (puVar13 != puVar12);
    puVar13 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  puVar13 = puVar2;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain();
  func_0x00010bf97e80(puVar13);
  _objc_release(puVar13);
  if (plVar5 != (long *)0x0) {
    puVar13 = puVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010c13b700();
    _objc_release(puVar13);
    if ((int)puVar15 != 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c134fa0();
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar4);
  _objc_release(plVar5);
  _objc_release(plVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  _objc_retain();
  if (*(long *)(puVar4 + 0x20) == 0) {
    puVar13 = PTR_PTR_1126add78;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  lVar7 = *(long *)(puVar4 + 0x20);
  if (lVar7 == 0) {
    lVar7 = *(long *)(puVar4 + 0x30);
    puVar15 = puVar2;
    func_0x00010c134680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    if (lVar7 != 0) goto LAB_104966b00;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar15 = puVar13;
    func_0x00010c075f00();
    if ((int)puVar15 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126add78;
      func_0x00010bf71fc0(PTR_PTR_1126add78);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126add78;
      puVar3 = puVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71fc0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar12);
    }
    lVar7 = 0;
    bVar16 = true;
  }
  else {
    _objc_retain();
LAB_104966b00:
    bVar16 = false;
    puVar15 = (undefined *)0x0;
  }
  puVar12 = puVar2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010c0747c0();
  _objc_release(puVar12);
  if (((!bVar16) && (((ulong)puVar3 & 1) == 0)) && (puVar4[0x38] == '\x01')) {
    _objc_storeStrong(*(long *)(puVar4 + 0x30) + 0x60,puVar1);
    puVar1 = PTR_PTR_1126aded0;
    _objc_alloc();
    uVar8 = *(undefined8 *)(puVar4 + 0x30);
    func_0x00010bf39c40(uVar8);
    func_0x00010beecd60();
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefce0();
    uVar11 = *(undefined8 *)(*(long *)(puVar4 + 0x30) + 0x68);
    *(undefined **)(*(long *)(puVar4 + 0x30) + 0x68) = puVar1;
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar8);
    uVar14 = *(ulong *)(*(long *)(puVar4 + 0x30) + 0x68);
    puVar1 = puVar2;
    func_0x00010c134680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114960();
    _objc_release(puVar1);
    if ((uVar14 & 1) != 0) goto LAB_104966c1c;
  }
  func_0x00010c1152a0(*(undefined8 *)(puVar4 + 0x30));
LAB_104966c1c:
  _objc_release(puVar15);
  _objc_release(lVar7);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1049667c8; end: 104966ce7; -[FBSDKGraphRequestConnection _completeWithResults:networkError:] */

void FUN_1049667c8(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  bool bVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lVar5 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(lVar5);
  func_0x00010c198a20(param_1);
  lVar1 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      uVar2 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0747c0();
      _objc_release(uVar2);
      lVar12 = lVar12 + 1;
    } while (lVar5 != lVar12);
    lVar5 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  lVar5 = param_1;
  func_0x00010c1373a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain();
  func_0x00010bf97e80(lVar5);
  _objc_release(lVar5);
  if (param_4 != 0) {
    lVar5 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c13b700();
    _objc_release(lVar5);
    if ((int)lVar3 != 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c134fa0();
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = param_2;
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    puVar13 = PTR_PTR_1126add78;
    func_0x00010bf09f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_3 + 0x30);
    uVar6 = uVar4;
    func_0x00010c134680(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar5 != 0) goto LAB_104966b00;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar15 = puVar13;
    func_0x00010c075f00();
    if ((int)puVar15 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126add78;
      func_0x00010bf71fc0(PTR_PTR_1126add78);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126add78;
      puVar9 = puVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71fc0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    lVar5 = 0;
    bVar16 = true;
  }
  else {
    _objc_retain();
LAB_104966b00:
    bVar16 = false;
    puVar15 = (undefined *)0x0;
  }
  uVar6 = uVar4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c0747c0();
  _objc_release(uVar6);
  if (((!bVar16) && ((uVar14 & 1) == 0)) && (*(char *)(param_3 + 0x38) == '\x01')) {
    _objc_storeStrong(*(long *)(param_3 + 0x30) + 0x60,param_2);
    puVar8 = PTR_PTR_1126aded0;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf39c40(uVar7);
    func_0x00010beecd60();
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefce0();
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x68);
    *(undefined **)(*(long *)(param_3 + 0x30) + 0x68) = puVar8;
    _objc_release(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar14 = *(ulong *)(*(long *)(param_3 + 0x30) + 0x68);
    uVar6 = uVar4;
    func_0x00010c134680(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114960();
    _objc_release(uVar6);
    if ((uVar14 & 1) != 0) goto LAB_104966c1c;
  }
  func_0x00010c1152a0(*(undefined8 *)(param_3 + 0x30));
LAB_104966c1c:
  _objc_release(puVar15);
  _objc_release(lVar5);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104966ce8; end: 104966f9b; -[FBSDKGraphRequestConnection processResultBody:error:metadata:canNotifyDelegate:] */

void FUN_104966ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104966f9c;
  puStack_a0 = &UNK_110878f70;
  uStack_98 = param_3;
  uStack_90 = param_1;
  _objc_retain();
  uStack_88 = param_5;
  _objc_retain();
  lStack_80 = param_4;
  uStack_78 = param_6;
  _objc_retain(param_3);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104967080;
  puStack_d0 = &UNK_1108529c0;
  _objc_retain();
  ppuVar3 = &puStack_e8;
  uStack_c8 = param_5;
  uStack_c0 = param_1;
  _objc_retainBlock();
  uVar4 = param_5;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bf39c40(param_1);
  func_0x00010beecd60();
  func_0x00010bf5df00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar5;
  func_0x00010c0720c0();
  if ((int)uVar6 != 0) {
    lVar7 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c067fc0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c067fc0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    if ((lVar9 == 0xbe) || (lVar9 == 0x66)) {
      (*(code *)ppuVar3[2])(ppuVar3,lVar10);
    }
  }
  (*(code *)ppuVar2[2])(ppuVar2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(ppuVar3);
  _objc_release(uStack_c8);
  _objc_release(ppuVar2);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104966f9c; end: 10496707f;  */

void FUN_104966f9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110da4278);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar1;
  func_0x00010c075f00(uVar1,param_2,puVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c1152c0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  }
  func_0x00010c06ac40(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x58) + -1;
  *(long *)(*(long *)(param_1 + 0x28) + 0x58) = lVar4;
  if ((lVar4 == 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
    lVar4 = *(long *)(param_1 + 0x28) + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c13b700();
    _objc_release(lVar4);
    if ((int)lVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0x28) + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c134fe0();
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104967080; end: 10496730b;  */

/* WARNING: Possible PIC construction at 0x0001049672dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049672e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104967080(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb24a0();
  _objc_release(uVar1);
  if (((uint)uVar2 >> 2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf39c40(uVar2);
    func_0x00010beecd60();
    if (param_2 == 0x1ed) {
      puVar3 = *(undefined **)(param_1 + 0x28);
      func_0x00010bf39c40();
      func_0x00010beecd60();
      func_0x00010bf5df00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (puVar3 == (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar14 = puVar3;
        func_0x00010c072440();
        if ((int)puVar14 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf65600(0xbff0000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126add30;
          _objc_alloc();
          puVar5 = puVar3;
          func_0x00010c273280();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          func_0x00010c0f9dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010bf66bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010bf9ca00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010bf05260(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar3;
          func_0x00010c292360(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c054000(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        else {
          puVar14 = puVar3;
          _objc_retain(puVar3);
        }
      }
      _objc_release(puVar3);
    }
    else {
      puVar14 = (undefined *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c186f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setCurrentAccessToken__11263f5e0,puVar14);
    return;
  }
  return;
}



/* Entry: 10496730c; end: 1049673cb; -[FBSDKGraphRequestConnection processResultDebugDictionary:] */

void FUN_10496730c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da4298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0a0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1049673cc;
    puStack_40 = &UNK_110860380;
    uStack_38 = param_1;
    func_0x00010bf97e80(puVar1,param_2,&puStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049673cc; end: 1049675b3;  */

void FUN_1049673cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126add78;
  puVar4 = puVar1;
  func_0x00010c0e00e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126add78;
  puVar5 = puVar1;
  func_0x00010c0e00e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar3;
  if (puVar3 != (undefined *)0x0 && puVar2 != (undefined *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4e78;
    _objc_retain(&PTR____CFConstantStringClassReference_110da4e78);
    puVar7 = puVar2;
    func_0x00010c0720c0();
    ppuVar8 = ppuVar6;
    if ((int)puVar7 != 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110da4e58;
      _objc_retain(&PTR____CFConstantStringClassReference_110da4e58);
      _objc_release(ppuVar6);
    }
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c25cde0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0b3760(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40();
    func_0x00010c23cd40();
    _objc_release(uVar9);
    _objc_release(ppuVar8);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049675b4; end: 104967cc3; -[FBSDKGraphRequestConnection errorFromResult:request:] */

void FUN_1049675b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  lVar2 = param_3;
  FUN_104984150(param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    uVar21 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar4 = lVar3;
    FUN_104984150(lVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      uVar21 = 0;
    }
    else {
      lVar3 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      lVar5 = lVar3;
      FUN_104984150(lVar3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar5 == 0) {
        uVar21 = 0;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = (undefined **)PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df6c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        ppuVar7 = ppuVar6;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_110ddcc18;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar8 = ppuVar7;
        }
        _objc_retain();
        _objc_release(ppuVar7);
        func_0x00010bf71e80(PTR_PTR_1126add78);
        ppuVar9 = (undefined **)PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df6c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        ppuVar10 = ppuVar9;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110ddcc18;
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar7 = ppuVar10;
        }
        _objc_retain(ppuVar7);
        _objc_release(ppuVar10);
        func_0x00010bf71e80(PTR_PTR_1126add78);
        puVar13 = PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13);
        _objc_release(lVar3);
        puVar13 = PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13);
        _objc_release(lVar3);
        puVar13 = PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13);
        _objc_release(lVar3);
        puVar13 = PTR_PTR_1126add78;
        lVar3 = lVar2;
        func_0x00010c0e00e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13);
        _objc_release(lVar3);
        func_0x00010bf71e80(PTR_PTR_1126add78);
        uVar21 = param_1;
        func_0x00010bf39c40();
        func_0x00010bf989c0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar21;
        func_0x00010bf989a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        uVar12 = uVar11;
        func_0x00010c124340(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        puVar13 = PTR_PTR_1126add78;
        lVar3 = lVar5;
        func_0x00010c0e00e0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0df6c0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf1f3c0();
        _objc_release(puVar13);
        _objc_release(lVar3);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar14 & 1) == 0) {
          func_0x00010bf98920(uVar12);
        }
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78);
        puVar14 = PTR_PTR_1126add78;
        uVar21 = uVar12;
        func_0x00010c09e6a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar14);
        _objc_release(uVar21);
        puVar14 = PTR_PTR_1126add78;
        uVar21 = uVar12;
        func_0x00010c09e6c0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar14);
        _objc_release(uVar21);
        puVar14 = PTR_PTR_1126adf00;
        func_0x00010c1242c0(PTR_PTR_1126adf00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78);
        lVar3 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        lVar16 = lVar3;
        FUN_104984150(lVar3,puVar15);
        _objc_retainAutoreleasedReturnValue();
        if (lVar16 == 0) {
          lVar17 = lVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
          lVar18 = lVar17;
          FUN_104984150(lVar17,puVar15);
          _objc_retainAutoreleasedReturnValue();
          if (lVar18 == 0) {
            lVar19 = lVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
            lVar20 = lVar19;
            FUN_104984150(lVar19,puVar15);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar19);
          }
          else {
            lVar20 = lVar18;
            _objc_retain(lVar18);
          }
          _objc_release(lVar18);
          _objc_release(lVar17);
        }
        else {
          lVar20 = lVar16;
          _objc_retain(lVar16);
        }
        _objc_release(lVar16);
        _objc_release(lVar3);
        func_0x00010bf39c40(param_1);
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = param_1;
        func_0x00010bf99200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        _objc_release(lVar20);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar6);
        _objc_release(puVar1);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar21);
  return;
}



/* Entry: 104967cc4; end: 104967dcb; -[FBSDKGraphRequestConnection logAndInvokeHandler:error:] */

void FUN_104967cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 != 0) {
    func_0x00010bfbffe0();
    lVar1 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da4358);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0aa2c0(param_1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010c06ace0(param_1,param_2,param_3,param_4,0,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104967dcc; end: 104967f57; -[FBSDKGraphRequestConnection logAndInvokeHandler:response:responseData:requestStartTime:] */

void FUN_104967dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bdc1c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puVar2 = PTR_PTR_1126add38;
  func_0x00010bfbffe0();
  puVar3 = PTR_PTR_1126add20;
  func_0x00010c22c4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0();
  func_0x00010c08fa60();
  func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da4378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebf5d8);
  if ((int)uVar5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    puVar2 = puVar3;
    func_0x00010bf06ba0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da4398);
    _objc_release(puVar3);
  }
  func_0x00010c0aa2c0(param_1,param_2,puVar4);
  func_0x00010c06ace0(param_1,param_2,param_3,0,param_4,param_5,param_7,param_8,puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104967f58; end: 10496806b; -[FBSDKGraphRequestConnection invokeHandler:error:response:responseData:] */

void FUN_104967f58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10496806c;
    puStack_58 = &UNK_1108465d0;
    lVar1 = param_3;
    _objc_retain();
    uVar2 = param_6;
    lStack_38 = lVar1;
    _objc_retain();
    uVar3 = param_5;
    uStack_50 = uVar2;
    _objc_retain();
    uVar2 = param_4;
    uStack_48 = uVar3;
    _objc_retain();
    uStack_40 = uVar2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_38);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10496806c; end: 10496807f;  */

void FUN_10496806c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010496807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104968080; end: 10496809b; -[FBSDKGraphRequestConnection logMessage:] */

void FUN_104968080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23cd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126add38,PTR_s_singleShotLogEntry_logEntry__11266cd78,
             &PTR____CFConstantStringClassReference_110da4e98,param_3);
  return;
}


