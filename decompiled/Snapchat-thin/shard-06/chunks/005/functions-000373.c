/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a4c9e4; end: 104a4ca23;  */

void FUN_104a4c9e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a5550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4dad0;
  _swift_getWitnessTable(&UNK_10dd4dad0,&UNK_1107bfdc8);
  puRam00000001130a5550 = puVar1;
  return;
}



/* Entry: 104a4ca24; end: 104a4ca2f;  */

void FUN_104a4ca24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104a4ca30; end: 104a4ca7b; +[GTMSessionFetcher fetcherWithRequest:] */

void FUN_104a4ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c03ebc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a4ca7c; end: 104a4cad3; +[GTMSessionFetcher fetcherWithURL:] */

void FUN_104a4ca7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfabbe0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a4cad4; end: 104a4cb2b; +[GTMSessionFetcher fetcherWithURLString:] */

void FUN_104a4cad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfabc40(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a4cb2c; end: 104a4cb8f; +[GTMSessionFetcher fetcherWithDownloadResumeData:] */

void FUN_104a4cb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfabbe0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ed60();
  func_0x00010c191340(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a4cb90; end: 104a4cc83; +[GTMSessionFetcher fetcherWithSessionIdentifier:] */

void FUN_104a4cb90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c160080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar2 = param_3;
    func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da95f8);
    if ((int)uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x00010bfabbe0(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fda60();
      func_0x00010c1d0560(lVar1,param_2,param_1,param_3);
      *(undefined1 *)(param_1 + 0x70) = 1;
      func_0x00010c17ef20(param_1,param_2,&PTR____CFConstantStringClassReference_110da9738);
      lVar3 = param_1;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104a4cc84; end: 104a4ccb3; +[GTMSessionFetcher appAllowsInsecureRequests] */

undefined1 FUN_104a4cc84(void)

{
  if (lRam00000001136a1c48 != -1) {
    func_0x000104a58178();
  }
  return uRam00000001136a1c40;
}



/* Entry: 104a4ccb4; end: 104a4cd3b;  */

void FUN_104a4ccb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1f3c0();
  uRam00000001136a1c40 = SUB81(puVar4,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a4cd3c; end: 104a4cd47; -[GTMSessionFetcher init] */

void FUN_104a4cd3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithRequest_configuration__1125ed4f0,0,0)
  ;
  return;
}



/* Entry: 104a4cd48; end: 104a4cd4f; -[GTMSessionFetcher initWithRequest:] */

void FUN_104a4cd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRequest_configuration__1125ed4f0,param_3,0);
  return;
}



/* Entry: 104a4cd50; end: 104a4cec3; -[GTMSessionFetcher initWithRequest:configuration:] */

undefined1 * FUN_104a4cd50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain();
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e35a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + 0x228) = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
    lVar3 = param_3;
    func_0x00010c0d3c80();
    uVar8 = *(undefined8 *)((long)puVar2 + 8);
    *(long *)((long)puVar2 + 8) = lVar3;
    _objc_release(uVar8);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x40),param_4);
    lVar3 = param_3;
    func_0x00010bdc1620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = *(long *)PTR__NSURLSessionTransferSizeUnknown_110345640;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c08fa60();
    }
    *(long *)((long)puVar2 + 0x1a0) = lVar4;
    puVar5 = (undefined1 *)((long)puVar2 + 0xe0);
    _objc_storeStrong(puVar5,PTR___dispatch_main_q_11034be20);
    _dispatch_group_create();
    uVar8 = *(undefined8 *)((long)puVar2 + 0xe8);
    *(undefined1 **)((long)puVar2 + 0xe8) = puVar5;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0xf0);
    *(undefined **)((long)puVar2 + 0xf0) = puVar6;
    _objc_release(uVar8);
    uVar7 = 0xffff;
    _arc4random_uniform();
    *(double *)((long)puVar2 + 0x138) = (double)(uVar7 & 0xffffffff) / 65535.0 + 1.0;
    *(undefined8 *)((long)puVar2 + 0x130) = 0xbff0000000000000;
    *(undefined4 *)((long)puVar2 + 0x58) = 0xbf800000;
    *(undefined8 *)((long)puVar2 + 0x218) = 1;
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104a4cec4; end: 104a4cedf; -[GTMSessionFetcher copyWithZone:] */

undefined8 FUN_104a4cec4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf879a0(param_1,param_2,param_2);
  return 0;
}



/* Entry: 104a4cee0; end: 104a4cff7; -[GTMSessionFetcher description] */

void FUN_104a4cee0(undefined **param_1,undefined8 param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  ppuVar2 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = param_1;
    func_0x00010bf88f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release(ppuVar2);
    if (ppuVar3 == (undefined **)0x0) {
      cVar1 = *(char *)(param_1 + 0xe);
      _objc_release(ppuVar4);
      ppuVar4 = &PTR____CFConstantStringClassReference_110da97b8;
      if (cVar1 == '\0') {
        ppuVar4 = &PTR____CFConstantStringClassReference_110da97d8;
      }
    }
    else {
      _objc_release(ppuVar4);
      ppuVar4 = &PTR____CFConstantStringClassReference_110da9798;
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da97f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104a4cff8; end: 104a4d03b; -[GTMSessionFetcher dealloc] */

void FUN_104a4cff8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bfb5640();
  puStack_28 = PTR_PTR_1126e35a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104a4d03c; end: 104a4d07f; -[GTMSessionFetcher beginFetchWithCompletionHandler:] */

void FUN_104a4d03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf180f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_beginFetchMayDelay_mayAuthorize__1125a39e0,1,1,1);
  return;
}



/* Entry: 104a4d080; end: 104a4d08f; -[GTMSessionFetcher beginFetchForRetry] */

void FUN_104a4d080(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf180f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_beginFetchMayDelay_mayAuthorize__1125a39e0,1,1,1);
  return;
}



/* Entry: 104a4d090; end: 104a4d133; -[GTMSessionFetcher completionHandlerWithTarget:didFinishSelector:] */

void FUN_104a4d090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104a4d138;
  puStack_50 = &UNK_1107bfef8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain();
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104a4d134; end: 104a4d137;  */

void FUN_104a4d134(void)

{
  return;
}



/* Entry: 104a4d138; end: 104a4d243;  */

void FUN_104a4d138(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cca80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar3);
    func_0x00010c16a2c0(puVar3);
    func_0x00010c16a2c0(puVar3);
    func_0x00010c16a2c0(puVar3);
    func_0x00010c06abe0(puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release();
  _objc_release(param_2);
  return;
}



/* Entry: 104a4d244; end: 104a4d27f; -[GTMSessionFetcher beginFetchWithDelegate:didFinishSelector:] */

void FUN_104a4d244(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf440e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18100(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a4d280; end: 104a4e07f; -[GTMSessionFetcher beginFetchMayDelay:mayAuthorize:mayDecorate:] */

undefined *
FUN_104a4d280(double param_1,undefined **param_2,undefined8 param_3,int param_4,int param_5,
             int param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined **unaff_x28;
  undefined8 uVar20;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2[1];
  _objc_retain();
  puVar19 = puVar6;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_240 = param_2;
  func_0x00010c160000();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_104a4e080;
  puStack_118 = &UNK_1107bff28;
  _objc_retain();
  ppuVar7 = &puStack_130;
  puStack_110 = puVar19;
  _objc_retainBlock();
  if (param_2[0x2a] == (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc_init();
    puVar17 = param_2[0x2a];
    param_2[0x2a] = puVar16;
    _objc_release(puVar17);
  }
  ppuVar13 = param_2;
  func_0x00010c1604a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuStack_248 = ppuVar7;
  if (ppuVar13 == (undefined **)0x0) {
    if ((puVar19 == (undefined *)0x0) &&
       (param_2[0x13] == (undefined *)0x0 && ppuStack_240 == (undefined **)0x0)) {
      (*(code *)ppuVar7[2])(ppuVar7,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9fb20(param_2);
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      ppuVar13 = param_2;
      func_0x00010c28fe40();
      if ((int)ppuVar13 != 0) {
        func_0x00010bf2ca20(param_2);
      }
      func_0x00010c21fae0(param_2);
      ppuStack_248 = param_2;
      func_0x00010bf1eaa0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_248 == (undefined **)0x0) {
LAB_104a4d448:
        puVar16 = puVar19;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c071ae0();
        uVar4 = (uint)puVar17;
        if (uVar4 == 0) {
          if (puVar19 != (undefined *)0x0) {
            ppuVar13 = param_2;
            _objc_opt_class();
            iVar5 = (int)ppuVar13;
            func_0x00010bf04c20();
            if ((iVar5 != 0) &&
               ((puVar16 == (undefined *)0x0 ||
                (puVar17 = puVar16, func_0x00010bf32ee0(), puVar17 != (undefined *)0x0)))) {
              puVar17 = puVar19;
              func_0x00010bfe4420();
              _objc_retainAutoreleasedReturnValue();
              param_1 = 0.0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_168 = 0;
              plStack_170 = (long *)0x0;
              puVar11 = param_2[0x40];
              _objc_retain();
              puVar9 = puVar11;
              func_0x00010bf52a60();
              if (puVar9 != (undefined *)0x0) {
                lVar18 = *plStack_170;
                do {
                  puVar12 = (undefined *)0x0;
                  do {
                    if (*plStack_170 != lVar18) {
                      _objc_enumerationMutation(puVar11);
                    }
                    if ((puVar16 != (undefined *)0x0) &&
                       (puVar8 = puVar16, func_0x00010bf32ee0(), puVar8 == (undefined *)0x0)) {
                      _objc_release(puVar11);
                      goto LAB_104a4d698;
                    }
                    puVar12 = puVar12 + 1;
                  } while (puVar9 != puVar12);
                  puVar9 = puVar11;
                  func_0x00010bf52a60();
                } while (puVar9 != (undefined *)0x0);
              }
              unaff_x28 = (undefined **)0x0;
              _objc_release(puVar11);
              puVar9 = puVar17;
              func_0x00010c08fa60();
              if ((((puVar9 != (undefined *)0x0) ||
                   (puVar9 = puVar19, func_0x00010c072e60(), ((ulong)puVar9 & 1) == 0)) &&
                  (puVar9 = puVar17, FUN_104a4e16c(), (int)puVar9 == 0)) ||
                 (ppuVar13 = param_2, func_0x00010bf01260(), ((ulong)ppuVar13 & 1) == 0)) {
                puVar9 = puVar19;
                func_0x00010bf6e340();
                _objc_retainAutoreleasedReturnValue();
                _NSLog(&PTR____CFConstantStringClassReference_110da9858);
                _objc_release(puVar9);
                ppuVar13 = ppuVar7;
                (*(code *)ppuVar7[2])(ppuVar7,0xfffffffffffffffb);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf9fb20(param_2);
                _objc_release(ppuVar13);
                _objc_release(puVar17);
                goto LAB_104a4df7c;
              }
LAB_104a4d698:
              _objc_release(puVar17);
            }
          }
        }
        else {
          _objc_release(ppuStack_240);
          func_0x00010c1fda80(param_2);
          func_0x00010c21fae0(param_2);
          ppuStack_240 = (undefined **)0x0;
        }
        ppuVar13 = param_2;
        func_0x00010bf51960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar13 == (undefined **)0x0) {
          ppuVar13 = param_2;
          _objc_opt_class(param_2);
          func_0x00010c252b20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c183fa0(param_2);
          _objc_release(ppuVar13);
        }
        ppuVar13 = param_2;
        func_0x00010c160000();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = ppuVar13 != (undefined **)0x0;
        bVar3 = puVar6 == (undefined *)0x0;
        unaff_x28 = (undefined **)(ulong)(bVar2 && bVar3);
        _objc_release();
        if (param_2[0x20] != (undefined *)0x0 && (!bVar2 || !bVar3)) {
          func_0x00010c0829e0(param_2);
        }
        func_0x00010c177d20(param_2);
        ppuVar13 = param_2;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (ppuVar13 == (undefined **)0x0) {
          ppuVar13 = param_2;
          func_0x00010bf2d620();
          if ((int)ppuVar13 == 0) {
            ppuVar13 = param_2;
            func_0x00010bda8bec(param_2,param_2,ppuStack_240);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fd860(param_2);
            _objc_release(ppuVar13);
          }
          else {
            puVar17 = param_2[0x20];
            puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1a8 = 0xc2000000;
            pcStack_1a0 = FUN_104a4e1e8;
            puStack_198 = &UNK_1107bff58;
            ppuVar13 = ppuStack_240;
            ppuStack_190 = param_2;
            _objc_retain();
            ppuStack_188 = ppuVar13;
            func_0x00010c1606e0(puVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fd860(param_2);
            _objc_release(puVar17);
            _objc_release(ppuStack_188);
          }
        }
        if (bVar2 && bVar3) {
          *(undefined1 *)(param_2 + 6) = 1;
          ppuVar13 = param_2;
          func_0x00010c15fac0(param_2);
          _objc_retainAutoreleasedReturnValue();
          puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d8 = 0xc2000000;
          pcStack_1d0 = FUN_104a4e1f4;
          puStack_1c8 = &UNK_1107bff88;
          uStack_1b8 = 0;
          ppuStack_1c0 = param_2;
          func_0x00010bfcb0a0();
          _objc_release(ppuVar13);
          _objc_release(uStack_1b8);
        }
        else {
          func_0x00010c191420(param_2);
          func_0x00010c191440(param_2);
          iVar5 = 0;
          if (param_2[0x22] != (undefined *)0x8000000000000000) {
            iVar5 = param_4;
          }
          if (((iVar5 == 1) && (puVar17 = param_2[0x20], puVar17 != (undefined *)0x0)) &&
             (func_0x00010bfabb60(), ((ulong)puVar17 & 1) == 0)) {
            ppuVar13 = param_2;
            func_0x00010bf2d620();
            if ((int)ppuVar13 != 0) {
              func_0x00010c1fd860(param_2);
            }
          }
          else {
            puVar17 = puVar6;
            func_0x00010c296ee0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar17 == (undefined *)0x0) {
              puVar9 = param_2[0x44];
              _objc_retain();
              puVar17 = puVar9;
              func_0x00010bf27640();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 == (undefined *)0x0) {
                if (puVar9 != (undefined *)0x0) {
                  func_0x00010c28b920(param_2);
                  _objc_release(puVar9);
                  unaff_x28 = (undefined **)0x0;
                  goto LAB_104a4df7c;
                }
              }
              else {
                func_0x00010c2201e0(puVar6);
              }
              _objc_release(puVar17);
              _objc_release(puVar9);
            }
            puVar17 = puVar6;
            func_0x00010c296ee0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar17 == (undefined *)0x0) {
              puVar17 = puVar6;
              func_0x00010bdc16c0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar17 != (undefined *)0x0) goto LAB_104a4d95c;
              puVar9 = (undefined *)0x1;
            }
            else {
LAB_104a4d95c:
              puVar9 = puVar17;
              func_0x00010c071ae0();
            }
            ppuVar13 = param_2;
            func_0x00010c290e00();
            if (((ulong)ppuVar13 & 1) == 0) {
              ppuVar13 = param_2;
              func_0x00010bf1eaa0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar13 == (undefined **)0x0) {
                ppuVar10 = param_2;
                func_0x00010bf1eb80();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = (undefined **)(ulong)(ppuVar10 != (undefined **)0x0);
                _objc_release();
              }
              else {
                unaff_x28 = (undefined **)0x1;
              }
              _objc_release(ppuVar13);
            }
            else {
              unaff_x28 = (undefined **)0x1;
            }
            if (param_2[0x33] == (undefined *)0x0) {
              ppuVar13 = param_2;
              func_0x00010bf1eb80();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar13 != (undefined **)0x0) {
                _objc_release();
                goto LAB_104a4da58;
              }
              puVar11 = puVar6;
              func_0x00010bdc1680();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar11 != (undefined *)0x0) goto LAB_104a4da58;
            }
            else {
LAB_104a4da58:
              if ((int)puVar9 != 0) {
                func_0x00010c1a4fc0(puVar6);
              }
              if (param_2[0x33] != (undefined *)0x0 && (int)unaff_x28 == 0) {
                func_0x00010c1a4f00(puVar6);
              }
              puVar9 = (undefined *)0x0;
            }
            if (param_5 == 0) {
LAB_104a4dab4:
              if (param_6 != 0) {
                puVar11 = param_2[0x20];
                _objc_opt_respondsToSelector(puVar11,PTR_s_decorators_1125b7750);
                if (((ulong)puVar11 & 1) != 0) {
                  puVar12 = param_2[0x20];
                  func_0x00010bf676a0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar12;
                  func_0x00010bf529e0();
                  if (puVar11 != (undefined *)0x0) {
                    ppuVar13 = param_2;
                    func_0x00010bf2d620();
                    if ((int)ppuVar13 != 0) {
                      func_0x00010c1fd860(param_2);
                    }
                    func_0x00010bf082e0(param_2);
                    _objc_release(puVar12);
                    goto LAB_104a4df74;
                  }
                  _objc_release(puVar12);
                }
              }
              ppuVar13 = param_2;
              func_0x00010c07c960();
              if (((int)ppuVar13 != 0) && (func_0x00010c0c2bc0(param_2), param_1 <= 0.0)) {
                if (((ulong)puVar9 & 1) == 0) {
                  puVar9 = puVar17;
                  func_0x00010c071ae0();
                  uVar20 = 0x404e000000000000;
                  if ((int)puVar9 == 0) {
                    uVar20 = 0x4082c00000000000;
                  }
                }
                else {
                  uVar20 = 0x404e000000000000;
                }
                func_0x00010c1c35e0(uVar20,param_2);
              }
              if (param_2[0x13] == (undefined *)0x0) {
                if (param_2[0x15] == (undefined *)0x0) {
                  uVar4 = 1;
                }
                if ((uVar4 & 1) == 0) {
                  ppuVar13 = (undefined **)param_2[5];
                  func_0x00010bf890c0();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar13 != (undefined **)0x0) goto LAB_104a4dc78;
                  _NSLog(&PTR____CFConstantStringClassReference_110da98b8);
                }
                else if ((int)unaff_x28 == 0) {
                  ppuVar13 = (undefined **)param_2[5];
                  func_0x00010bf647c0();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar13 != (undefined **)0x0) goto LAB_104a4de78;
                  _NSLog(&PTR____CFConstantStringClassReference_110da9958);
                }
                else if (ppuStack_248 == (undefined **)0x0) {
                  ppuVar13 = param_2;
                  func_0x00010bf1eb80();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (ppuVar13 == (undefined **)0x0) {
                    if (param_2[0x33] == (undefined *)0x0) {
                      _NSLog(&PTR____CFConstantStringClassReference_110da9918);
                    }
                    ppuVar13 = (undefined **)param_2[5];
                    func_0x00010c28e880();
                    _objc_retainAutoreleasedReturnValue();
                    if (ppuVar13 != (undefined **)0x0) goto LAB_104a4de78;
                    func_0x00010c08fa60();
                    _NSLog(&PTR____CFConstantStringClassReference_110da9938);
                  }
                  else {
                    ppuVar13 = (undefined **)param_2[5];
                    func_0x00010c28e8e0();
                    _objc_retainAutoreleasedReturnValue();
                    if (ppuVar13 != (undefined **)0x0) {
LAB_104a4de78:
                      func_0x00010c1fdd40(param_2);
                      if (param_2[0x35] == (undefined *)0x0) {
                        puVar9 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
                        func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c191420(param_2);
                        _objc_release(puVar9);
                      }
                      goto LAB_104a4dc84;
                    }
                    _NSLog(&PTR____CFConstantStringClassReference_110da98f8);
                  }
                }
                else {
                  ppuVar13 = (undefined **)param_2[5];
                  func_0x00010c28e8c0();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar13 != (undefined **)0x0) goto LAB_104a4de78;
                  ppuVar13 = ppuStack_248;
                  func_0x00010c0f5800();
                  _objc_retainAutoreleasedReturnValue();
                  _NSLog(&PTR____CFConstantStringClassReference_110da98d8);
                  _objc_release(ppuVar13);
                }
LAB_104a4df38:
                func_0x00010c1fdd40(param_2);
                ppuVar13 = ppuVar7;
                (*(code *)ppuVar7[2])(ppuVar7,0xfffffffffffffffa);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf9fb20(param_2);
              }
              else {
                ppuVar13 = (undefined **)param_2[5];
                func_0x00010bf89100();
                _objc_retainAutoreleasedReturnValue();
                if (ppuVar13 == (undefined **)0x0) {
                  func_0x00010c08fa60();
                  _NSLog(&PTR____CFConstantStringClassReference_110da9898);
                  goto LAB_104a4df38;
                }
LAB_104a4dc78:
                func_0x00010c1fdd40(param_2);
LAB_104a4dc84:
                if (param_2[10] != (undefined *)0x0) {
                  func_0x00010c2127e0(ppuVar13);
                }
                if (0.0 <= *(float *)(param_2 + 0xb)) {
                  func_0x00010c1e3380(ppuVar13);
                }
                puVar9 = param_2[0x42];
                if ((puVar9 == (undefined *)0x0) && (puRam00000001136a1c50 != (undefined *)0x0)) {
                  puVar9 = puRam00000001136a1c50;
                  _objc_retainBlock();
                  puVar11 = param_2[0x42];
                  param_2[0x42] = puVar9;
                  _objc_release(puVar11);
                  puVar9 = param_2[0x42];
                }
                *(bool *)((long)param_2 + 0xc9) = puVar9 != (undefined *)0x0;
                ppuVar10 = param_2;
                _objc_opt_class();
                func_0x00010bfabb80();
                _objc_retainAutoreleasedReturnValue();
                if (((ppuVar10 != (undefined **)0x0) &&
                    (ppuVar14 = param_2, func_0x00010c23df80(), ((ulong)ppuVar14 & 1) == 0)) &&
                   (ppuVar14 = param_2, func_0x00010c0829e0(), ((ulong)ppuVar14 & 1) == 0)) {
                  puStack_1f8 = &uStack_200;
                  uStack_200 = 0;
                  uStack_1f0 = 0x2020000000;
                  uStack_1e8 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
                  ppuVar14 = ppuVar10;
                  _objc_retain();
                  ppuVar15 = ppuVar14;
                  func_0x00010bf17d20();
                  unaff_x28 = param_2;
                  _objc_retain(param_2);
                  _objc_sync_enter();
                  puStack_1f8[3] = ppuVar15;
                  func_0x00010c16e940(unaff_x28);
                  _objc_sync_exit(unaff_x28);
                  _objc_release(unaff_x28);
                  _objc_release(ppuVar14);
                  __Block_object_dispose(&uStack_200,8);
                }
                if (param_2[0x2b] == (undefined *)0x0) {
                  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  _objc_alloc_init();
                  puVar11 = param_2[0x2b];
                  param_2[0x2b] = puVar9;
                  _objc_release(puVar11);
                }
                func_0x00010c15cd00(param_2);
                func_0x00010befa7e0(param_2);
                func_0x00010c20bf40(param_2);
                func_0x00010c1049e0(param_2);
                func_0x00010bfaba20(param_2[0x20]);
                if (param_2[0x42] == (undefined *)0x0) {
                  func_0x00010c13d1c0(ppuVar13);
                }
                else {
                  func_0x00010c23c9a0(param_2);
                }
                _objc_release(ppuVar10);
              }
              _objc_release(ppuVar13);
            }
            else {
              puVar11 = param_2[0x1f];
              uVar1 = uVar4;
              if (puVar11 == (undefined *)0x0) {
                uVar1 = 1;
              }
              if (((uVar1 & 1) != 0) || (func_0x00010c06cb20(), ((ulong)puVar11 & 1) != 0))
              goto LAB_104a4dab4;
              ppuVar13 = param_2;
              func_0x00010bf2d620();
              if ((int)ppuVar13 != 0) {
                func_0x00010c1fd860(param_2);
              }
              func_0x00010bf110a0(param_2);
            }
LAB_104a4df74:
            _objc_release(puVar17);
          }
        }
      }
      else {
        puStack_138 = (undefined *)0x0;
        ppuVar13 = ppuStack_248;
        func_0x00010bf384a0();
        puVar16 = puStack_138;
        _objc_retain();
        if (((ulong)ppuVar13 & 1) != 0) {
          _objc_release(puVar16);
          goto LAB_104a4d448;
        }
        ppuVar13 = ppuStack_248;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _NSLog(&PTR____CFConstantStringClassReference_110da9838);
        _objc_release(ppuVar13);
        func_0x00010bf9fb20(param_2);
      }
LAB_104a4df7c:
      _objc_release(puVar16);
    }
  }
  else {
    ppuVar13 = param_2;
    func_0x00010c160000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar13 != (undefined **)0x0) goto LAB_104a4df8c;
    (*(code *)ppuVar7[2])(ppuVar7,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9fb20(param_2);
  }
  _objc_release(ppuStack_248);
LAB_104a4df8c:
  _objc_release(ppuVar7);
  _objc_release(puStack_110);
  _objc_release(ppuStack_240);
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x28);
  __Block_object_dispose(&uStack_200,8);
  __Unwind_Resume();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(undefined **)(puVar6 + 0x20);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (puVar16 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = puVar16;
    func_0x00010bf32ee0();
    if ((puVar19 == (undefined *)0x0) ||
       (puVar19 = puVar16, func_0x00010c071ae0(), ((ulong)puVar19 & 1) != 0)) {
      puVar19 = (undefined *)0x1;
    }
    else {
      puVar19 = puVar16;
      func_0x00010c071ae0(puVar16);
    }
  }
  _objc_release(puVar16);
  return puVar19;
}



/* Entry: 104a4e080; end: 104a4e16b;  */

undefined * FUN_104a4e080(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf32ee0();
    if ((puVar4 == (undefined *)0x0) ||
       (puVar4 = puVar1, func_0x00010c071ae0(), ((ulong)puVar4 & 1) != 0)) {
      puVar4 = (undefined *)0x1;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c071ae0(puVar1);
    }
  }
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 104a4e16c; end: 104a4e1e7;  */

ulong FUN_104a4e16c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf32ee0(param_1,param_2,&PTR____CFConstantStringClassReference_110e8b7b8);
    if ((uVar1 == 0) ||
       (uVar1 = param_1,
       func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110da9b18),
       (uVar1 & 1) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = param_1;
      func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110da9b38);
    }
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a4e1e8; end: 104a4e1f3;  */

void FUN_104a4e1e8(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain();
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
    goto code_r0x00010bda8dcc;
  }
  if (*(long *)(uVar1 + 0x40) == 0) {
    if (lVar2 == 0) {
      uVar3 = uVar1;
      func_0x00010c0829e0();
      if ((int)uVar3 != 0) {
        func_0x00010bf58ce0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        goto code_r0x00010bda8c60;
      }
      puVar7 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
      func_0x00010bf98460();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)(uVar1 + 0x40) = puVar7;
    }
    else {
      _objc_retain(lVar2);
code_r0x00010bda8c60:
      uVar3 = uVar1;
      _objc_opt_class(uVar1);
      func_0x00010c160080();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c160000(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar3);
      _objc_release(uVar4);
      puVar7 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
      func_0x00010bf14420();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(uVar1 + 0x40);
      *(undefined **)(uVar1 + 0x40) = puVar7;
      _objc_release(uVar6);
      func_0x00010c21fae0(uVar1);
      func_0x00010c177d20(uVar1);
      _objc_release(uVar3);
    }
    FUN_104a58170();
    func_0x00010c2112a0(*(undefined8 *)(uVar1 + 0x40));
  }
  func_0x00010bf51960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f80(*(undefined8 *)(uVar1 + 0x40));
  FUN_104a58170();
  lVar5 = *(long *)(uVar1 + 0x180);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,uVar1,*(undefined8 *)(uVar1 + 0x40));
  }
  uVar3 = param_2;
  _objc_retain();
  if ((uVar3 == 0) || (uVar4 = uVar1, func_0x00010bf2d620(), (uVar4 & 1) == 0)) {
    uVar3 = uVar1;
    _objc_retain();
    FUN_104a58170();
  }
  puVar7 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  uVar4 = uVar1;
  func_0x00010c15fc80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1606c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if ((uVar3 == uVar1) && (puVar7 != (undefined *)0x0)) {
    *(undefined1 *)(uVar1 + 0x30) = 1;
  }
  FUN_104a58170();
code_r0x00010bda8dcc:
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a4e1f4; end: 104a4e2db;  */

void FUN_104a4e1f4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  func_0x00010bf529e0();
  if (((param_2 == 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) &&
     (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    _dispatch_time();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104a4e2dc;
    puStack_48 = &UNK_110841f80;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    uStack_38 = uVar2;
    func_0x00010058c530(lVar1,PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a4e2dc; end: 104a4e367;  */

void FUN_104a4e2dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c1604a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      return;
    }
    func_0x00010c12d980(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110da95f8,0xfffffffffffffffc,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9fb20(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a4e368; end: 104a4e433;  */

void FUN_104a4e368(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  if (lVar3 == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf14580();
  if (lVar3 == lVar2) {
    func_0x00010c16e940(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endBackgroundTask__1125c2a40,lVar3);
  return;
}



/* Entry: 104a4e434; end: 104a4e52f; -[GTMSessionFetcher updateUserAgentAsynchronouslyForRequest:userAgentProvider:mayDelay:mayAuthorize:mayDecorate:] */

void FUN_104a4e434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104a4e530;
  puStack_68 = &UNK_1109486d0;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_60 = param_4;
  uStack_50 = param_5;
  uStack_4f = param_6;
  uStack_4e = param_7;
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104a4e530; end: 104a4e63f;  */

void FUN_104a4e530(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c291200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    _objc_retain();
    _objc_sync_enter();
    func_0x00010c2201e0(*(undefined8 *)(lVar4 + 8),param_2,uVar3,
                        &PTR____CFConstantStringClassReference_110e2d8f8);
    cVar1 = *(char *)(lVar4 + 0x119);
    _objc_sync_exit(lVar4);
    _objc_release(lVar4);
    if (cVar1 == '\x01') {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110da95f8,0xfffffffffffffff9,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06aca0(lVar4,param_2,0,puVar5,0,1);
      _objc_release(puVar5);
    }
    else {
      func_0x00010bf180e0(lVar4,param_2,*(undefined1 *)(param_1 + 0x30),
                          *(undefined1 *)(param_1 + 0x31),*(undefined1 *)(param_1 + 0x32));
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a4e640; end: 104a4e757;  */

void FUN_104a4e640(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  ulong uStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8e20(param_1);
  uVar1 = param_1;
  func_0x00010bfd4e40();
  if ((int)uVar1 != 0) {
    do {
      uVar1 = param_1;
      func_0x00010c121160();
      if ((long)uVar1 < 1) break;
      func_0x00010bf06a40(puVar2);
      uVar1 = param_1;
      func_0x00010bfd4e40();
    } while ((uVar1 & 1) != 0);
  }
  func_0x00010bf3d9e0(param_1);
  uVar1 = param_1;
  func_0x00010c25c4e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    _objc_release(puVar2);
    puVar2 = (undefined *)0x0;
  }
  if (param_2 != (ulong *)0x0) {
    _objc_retainAutorelease(uVar1);
    *param_2 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_104a4e758;
  puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_104a4e7b4;
  puStack_270 = &UNK_1107bffe8;
  uStack_268 = param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)(param_1 + 0x210) + 0x10))(*(long *)(param_1 + 0x210),param_1,&puStack_288);
  return;
}



/* Entry: 104a4e758; end: 104a4e7b3; -[GTMSessionFetcher simulateFetchForTestBlock] */

void FUN_104a4e758(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104a4e7b4;
  puStack_20 = &UNK_1107bffe8;
  lStack_18 = param_1;
  (**(code **)(*(long *)(param_1 + 0x210) + 0x10))(*(long *)(param_1 + 0x210),param_1,&puStack_38);
  return;
}



/* Entry: 104a4e7b4; end: 104a4e9ff;  */

void FUN_104a4e7b4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x20);
  if (((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) {
    uVar6 = *(undefined8 *)(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x210) = 0;
    _objc_release(uVar6);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xc9) = 0;
    func_0x00010c13d1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
  }
  else {
    func_0x00010bf1eb80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf1eaa0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lStack_98 = 0;
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ae0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lStack_98;
        _objc_retain();
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198);
        *(undefined **)(*(long *)(param_1 + 0x20) + 0x198) = puVar3;
        _objc_release(uVar6);
        _objc_release(param_4);
        param_4 = lVar4;
      }
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      uStack_c8 = 0x104a4ec38;
      puStack_c0 = &UNK_11084c4a0;
      uStack_b8 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = param_2;
      _objc_retain();
      lVar5 = param_3;
      lStack_b0 = lVar4;
      _objc_retain();
      lStack_a8 = lVar5;
      _objc_retain();
      lStack_a0 = param_4;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_d8);
      _objc_release(lStack_a0);
      _objc_release(lStack_a8);
      _objc_release(lStack_b0);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_104a4ea00;
      puStack_78 = &UNK_1107bffb8;
      uStack_70 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_2;
      _objc_retain();
      lVar4 = param_3;
      lStack_68 = lVar2;
      _objc_retain();
      lStack_60 = lVar4;
      _objc_retain();
      lStack_58 = param_4;
      (**(code **)(lVar1 + 0x10))(lVar1,&puStack_90);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      lVar2 = lStack_68;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a4ea00; end: 104a4eb0f;  */

void FUN_104a4ea00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 2;
  _dispatch_get_global_queue(2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  uVar4 = param_2;
  _objc_retain(param_2);
  func_0x00010c06ad00(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(param_2);
  _objc_release(uVar4);
  return;
}



/* Entry: 104a4eb10; end: 104a4ec17;  */

void FUN_104a4eb10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = 0;
  FUN_104a4e640(uVar1,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_38;
  _objc_retain();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104a4ec18;
  puStack_70 = &UNK_110868f80;
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar1;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar4;
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar3;
  _objc_retain();
  uStack_48 = uVar4;
  uStack_40 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 104a4ec18; end: 104a4ec4b;  */

void FUN_104a4ec18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_simulateDataCallbacksForTestBloc_11266cc88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),lVar1);
  return;
}



/* Entry: 104a4ec4c; end: 104a4ed2f; -[GTMSessionFetcher simulateByteTransferReportWithDataLength:block:] */

void FUN_104a4ec4c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (0 < (long)param_3) {
    lVar3 = 0;
    lVar4 = param_3 / 3 + 1;
    do {
      puStack_a0 = puVar1;
      if ((long)(param_3 - lVar3) <= lVar4) {
        lVar4 = param_3 - lVar3;
      }
      uStack_98 = 0xc2000000;
      lVar3 = lVar4 + lVar3;
      pcStack_90 = FUN_104a4ed30;
      puStack_88 = &UNK_1107c0018;
      uVar2 = param_4;
      _objc_retain();
      uStack_80 = uVar2;
      lStack_78 = lVar4;
      lStack_70 = lVar3;
      uStack_68 = param_3;
      func_0x00010c06ad40(param_1,param_2,&puStack_a0);
      _objc_release(uStack_80);
    } while (lVar3 < (long)param_3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104a4ed30; end: 104a4ed43;  */

void FUN_104a4ed30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a4ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104a4ed44; end: 104a4f3d3; -[GTMSessionFetcher simulateDataCallbacksForTestBlockWithBodyData:response:responseData:error:] */

void FUN_104a4ed44(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  lVar2 = param_4;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_104a4f3d4;
  uStack_78 = 0x104a4f3e4;
  _objc_retain();
  uStack_70 = param_6;
  _objc_retain();
  _objc_sync_enter();
  lVar3 = *(long *)(param_1 + 0xa8);
  _objc_retain();
  lVar4 = *(long *)(param_1 + 0x1d8);
  _objc_retainBlock();
  lVar5 = *(long *)(param_1 + 0x1c8);
  _objc_retainBlock();
  lVar6 = *(long *)(param_1 + 0x1e0);
  _objc_retainBlock();
  lVar7 = *(long *)(param_1 + 0x1b8);
  _objc_retainBlock();
  lVar8 = *(long *)(param_1 + 0x1a8);
  _objc_retainBlock();
  lVar9 = *(long *)(param_1 + 0x1b0);
  _objc_retainBlock();
  lVar10 = *(long *)(param_1 + 0x1e8);
  _objc_retainBlock();
  lVar11 = *(long *)(param_1 + 0x1d0);
  _objc_retainBlock();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104a4f3ec;
    puStack_b8 = &UNK_11084a9e8;
    lVar12 = lVar4;
    _objc_retain();
    lVar13 = lVar2;
    lStack_a0 = lVar12;
    _objc_retain();
    ppuVar14 = &puStack_d0;
    lStack_b0 = lVar13;
    lStack_a8 = param_1;
    _objc_retainBlock(ppuVar14);
    func_0x00010c06ad60(param_1);
    _objc_release(ppuVar14);
    _objc_release(lStack_b0);
    _objc_release(lStack_a0);
  }
  if (lVar11 != 0) {
    puStack_100 = puVar15;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_104a4f410;
    puStack_e8 = &UNK_11084aaa8;
    lVar12 = lVar11;
    lStack_e0 = param_1;
    _objc_retain();
    ppuVar14 = &puStack_100;
    lStack_d8 = lVar12;
    _objc_retainBlock(ppuVar14);
    func_0x00010c06ad60(param_1);
    _objc_release(ppuVar14);
    _objc_release(lStack_d8);
  }
  if ((lVar2 != 0) && (lVar5 != 0)) {
    puStack_130 = puVar15;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x104a4f568;
    puStack_118 = &UNK_11084aaa8;
    lVar12 = lVar5;
    _objc_retain();
    lVar13 = lVar2;
    lStack_108 = lVar12;
    _objc_retain();
    ppuVar14 = &puStack_130;
    lStack_110 = lVar13;
    _objc_retainBlock(ppuVar14);
    func_0x00010c06ad60(param_1);
    _objc_release(ppuVar14);
    _objc_release(lStack_110);
    _objc_release(lStack_108);
  }
  if (lVar6 != 0) {
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x104a4f584;
    puStack_140 = &UNK_1107c00e8;
    lVar12 = lVar6;
    _objc_retain();
    ppuVar14 = &puStack_158;
    lStack_138 = lVar12;
    _objc_retainBlock(ppuVar14);
    func_0x00010c08fa60(param_3);
    func_0x00010c23c940(param_1);
    _objc_release(ppuVar14);
    _objc_release(lStack_138);
  }
  if (lVar3 == 0) {
    if ((param_5 != (undefined *)0x0) && (lVar8 != 0 || lVar9 != 0)) {
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_104a4f59c;
      puStack_1a0 = &UNK_1107c0118;
      lVar12 = lVar8;
      _objc_retain();
      lVar13 = lVar9;
      lStack_198 = lVar12;
      _objc_retain();
      ppuVar14 = &puStack_1b8;
      lStack_190 = lVar13;
      _objc_retainBlock(ppuVar14);
      func_0x00010c23c960(param_1);
      _objc_release(ppuVar14);
      _objc_release(lStack_190);
      _objc_release(lStack_198);
    }
    if (lVar8 == 0) {
      puVar15 = param_5;
      func_0x00010c0d3c80();
      uVar16 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar15;
      _objc_release(uVar16);
    }
    if (lVar10 == 0) goto LAB_104a4f26c;
    if (param_5 == (undefined *)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc_init(PTR__OBJC_CLASS___NSData_1126ae778);
    }
    else {
      puVar15 = param_5;
      _objc_retain(param_5);
    }
    puVar17 = PTR__OBJC_CLASS___NSCachedURLResponse_1126adf18;
    _objc_alloc();
    func_0x00010c03fae0();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_104a4f604;
    puStack_1d0 = &UNK_11084aaa8;
    lVar12 = lVar10;
    _objc_retain();
    lStack_1c0 = lVar12;
    _objc_retain();
    ppuVar14 = &puStack_1e8;
    puStack_1c8 = puVar17;
    _objc_retainBlock(ppuVar14);
    func_0x00010c06ad60(param_1);
    _objc_release(ppuVar14);
    _objc_release(puStack_1c8);
    _objc_release(lStack_1c0);
LAB_104a4f258:
    _objc_release(puVar17);
  }
  else {
    if (lVar7 != 0) {
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      uStack_170 = 0x104a4f590;
      puStack_168 = &UNK_1107c00e8;
      lVar12 = lVar7;
      _objc_retain();
      ppuVar14 = &puStack_180;
      lStack_160 = lVar12;
      _objc_retainBlock(ppuVar14);
      func_0x00010c08fa60(param_5);
      func_0x00010c23c940(param_1);
      _objc_release(ppuVar14);
      _objc_release(lStack_160);
    }
    puStack_188 = (undefined *)0x0;
    func_0x00010c2be5a0(param_5);
    puVar15 = puStack_188;
    _objc_retain();
    puVar1 = puStack_90;
    if (puVar15 != (undefined *)0x0) {
      _objc_retain();
      puVar17 = (undefined *)puVar1[5];
      puVar1[5] = puVar15;
      goto LAB_104a4f258;
    }
  }
  _objc_release(puVar15);
LAB_104a4f26c:
  _objc_storeStrong(param_1 + 0x60,param_4);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c15fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa3a0();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104a4f3d4; end: 104a4f40f;  */

void FUN_104a4f3d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104a4f410; end: 104a4f563;  */

void FUN_104a4f410(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bdc2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURLProtectionSpace_1126ae3e0;
  _objc_alloc(PTR__OBJC_CLASS___NSURLProtectionSpace_1126ae3e0);
  uVar4 = uVar1;
  func_0x00010c104060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  uVar5 = uVar1;
  func_0x00010c1504a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01aa60(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURLAuthenticationChallenge_1126ae3e8;
  _objc_alloc(PTR__OBJC_CLASS___NSURLAuthenticationChallenge_1126ae3e8);
  func_0x00010c03b840();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),puVar7,
             &PTR___NSConcreteGlobalBlock_1107c00a8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a4f564; end: 104a4f59b;  */

void FUN_104a4f564(void)

{
  return;
}



/* Entry: 104a4f59c; end: 104a4f603;  */

void FUN_104a4f59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a4f604; end: 104a4f61f;  */

void FUN_104a4f604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a4f618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             &PTR___NSConcreteGlobalBlock_1107c0168);
  return;
}



/* Entry: 104a4f620; end: 104a4f6cb;  */

void FUN_104a4f620(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (lVar1 != 0) {
    func_0x00010bf3ec40();
    if (199 < lVar1 - 200U) {
      func_0x00010c232c20();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfafe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishWithError_shouldRetry__1125c9948,0,0);
  return;
}



/* Entry: 104a4f6cc; end: 104a4f6e3;  */

void FUN_104a4f6cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishWithError_shouldRetry__1125c9948,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2);
  return;
}



/* Entry: 104a4f6e4; end: 104a4f82f; -[GTMSessionFetcher simulateByteTransferWithData:block:] */

void FUN_104a4f6e4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  _objc_retain();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c26b640();
  uVar3 = param_3;
  func_0x00010c08fa60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar3 != 0) {
    uVar5 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = uVar3 / uVar2;
    }
    uVar6 = uVar6 + 1;
    do {
      if (uVar3 - uVar5 <= uVar6) {
        uVar6 = uVar3 - uVar5;
      }
      uVar2 = param_3;
      func_0x00010c25eac0(param_3,param_2,uVar5,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = puVar1;
      uVar5 = uVar6 + uVar5;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_104a4f830;
      puStack_a0 = &UNK_110ad6190;
      uVar4 = param_4;
      _objc_retain();
      uStack_98 = uVar2;
      uStack_90 = uVar4;
      uStack_88 = uVar6;
      uStack_80 = uVar5;
      uStack_78 = uVar3;
      _objc_retain(uVar2);
      func_0x00010c06ad40(param_1,param_2,&puStack_b8);
      _objc_release(uStack_98);
      _objc_release(uStack_90);
      _objc_release(uVar2);
    } while (uVar5 < uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a4f830; end: 104a4f847;  */

void FUN_104a4f830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a4f844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104a4f848; end: 104a4f90b; -[GTMSessionFetcher setSessionTask:] */

void FUN_104a4f848(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  plVar5 = (long *)(param_1 + 0x48);
  if (*plVar5 != lVar1) {
    _objc_storeStrong(plVar5,param_3);
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (*(long *)(param_1 + 8) == 0)) {
      func_0x00010c0ed8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0d3c80();
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar2);
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a4f90c; end: 104a4f94f; -[GTMSessionFetcher sessionTask] */

void FUN_104a4f90c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a4f950; end: 104a4fa1b; -[GTMSessionFetcher addPersistedBackgroundSessionToDefaults] */

void FUN_104a4f950(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c160000();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    _objc_opt_class();
    func_0x00010bef0de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_opt_class(param_1);
      func_0x00010bfabba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      func_0x00010c266b80(param_1);
      _objc_release(param_1);
      _objc_release(puVar4);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a4fa1c; end: 104a4fb1b; -[GTMSessionFetcher removePersistedBackgroundSessionFromDefaults] */

void FUN_104a4fa1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c160000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    _objc_opt_class();
    func_0x00010bef0de0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfecde0();
      if (puVar4 != (undefined *)0x7fffffffffffffff) {
        func_0x00010c12d3c0(puVar3,param_2,puVar4);
        _objc_opt_class(param_1);
        func_0x00010bfabba0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf529e0();
        if (puVar4 == (undefined *)0x0) {
          func_0x00010c12d3e0(param_1,param_2,&PTR____CFConstantStringClassReference_110da96f8);
        }
        else {
          func_0x00010c1d0560(param_1,param_2,puVar3,
                              &PTR____CFConstantStringClassReference_110da96f8);
        }
        func_0x00010c266b80(param_1);
        _objc_release(param_1);
      }
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a4fb1c; end: 104a4fcdb; +[GTMSessionFetcher activePersistedBackgroundSessions] */

void FUN_104a4fb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
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
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfabba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00010c160080();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = lVar2;
    _objc_retain();
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = (undefined *)0x0;
      lVar9 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          lVar5 = param_1;
          func_0x00010c0dff20(param_1,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            if (puVar7 == (undefined *)0x0) {
              puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              _objc_alloc_init();
            }
            func_0x00010befa120(puVar7,param_2,uVar8);
          }
          _objc_release(lVar5);
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
        param_4 = auStack_f0;
        param_5 = 0x10;
        lVar4 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,param_4,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_5);
    func_0x00010bfabc20(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c211060(lVar1,param_2,param_5);
    }
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a4fcdc; end: 104a4fd43; +[GTMSessionFetcher application:handleEventsForBackgroundURLSession:completionHandler:] */

void FUN_104a4fcdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bfabc20(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c211060(param_1,param_2,param_5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104a4fd44; end: 104a4fd87; -[GTMSessionFetcher sessionIdentifier] */

void FUN_104a4fd44(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a4fd88; end: 104a4fe13; -[GTMSessionFetcher setSessionIdentifier:] */

void FUN_104a4fd88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x178) = 0;
  func_0x00010c13c300(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a4fe14; end: 104a4fe8b; -[GTMSessionFetcher setSessionIdentifierInternal:] */

void FUN_104a4fe14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a4fe8c; end: 104a4ff83; -[GTMSessionFetcher sessionUserInfo] */

void FUN_104a4fe8c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c160060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c086e80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0(lVar2);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      _objc_storeStrong(param_1 + 0x188,lVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x188);
  }
  _objc_retain(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a4ff84; end: 104a4ff93;  */

void FUN_104a4ff84(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110dc1338);
  return;
}



/* Entry: 104a4ff94; end: 104a4ffe3; -[GTMSessionFetcher setSessionUserInfo:] */

void FUN_104a4ff94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a4ffe4; end: 104a500c7; -[GTMSessionFetcher sessionIdentifierDefaultMetadata] */

undefined * FUN_104a4ffe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,lVar3,&PTR____CFConstantStringClassReference_110da9698);
    _objc_release(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,lVar3,&PTR____CFConstantStringClassReference_110da96b8);
    _objc_release(lVar3);
  }
  if (*(char *)(param_1 + 0x71) == '\x01') {
    func_0x00010c1d0640(puVar2,param_2,&PTR____CFConstantStringClassReference_110db8118,
                        &PTR____CFConstantStringClassReference_110da96d8);
  }
  puVar4 = puVar2;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retainAutoreleaseReturnValue(puVar1);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 104a500c8; end: 104a501d3; -[GTMSessionFetcher restoreDefaultStateForSessionIdentifierMetadata] */

void FUN_104a500c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010c160060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar3;
    _objc_release(uVar7);
  }
  lVar4 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da96b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar7);
  }
  lVar5 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110da96d8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + 0x71) = (char)lVar6;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a501d4; end: 104a50233; -[GTMSessionFetcher sessionIdentifierMetadata] */

void FUN_104a501d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c160060(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a50234; end: 104a503bb; -[GTMSessionFetcher sessionIdentifierMetadataUnsynchronized] */

void FUN_104a50234(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_104a503a0;
  }
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ace0();
  puVar4 = puVar1;
  func_0x00010c14f600();
  if (((int)puVar4 == 0) || (puVar4 = puVar1, func_0x00010c14f4e0(), (int)puVar4 == 0)) {
    uVar5 = 0;
LAB_104a50378:
    uVar2 = 0;
LAB_104a5037c:
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x00010c14f600();
    uVar5 = 0;
    _objc_retain(0);
    if (((int)puVar4 == 0) || (puVar4 = puVar1, func_0x00010c14f4e0(), (int)puVar4 == 0))
    goto LAB_104a50378;
    puVar4 = puVar1;
    func_0x00010c14f600();
    uVar2 = 0;
    _objc_retain(0);
    if ((int)puVar4 == 0) goto LAB_104a5037c;
    _objc_storeStrong(param_1 + 0x78,0);
    uVar3 = uVar2;
    func_0x00010bf64920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
LAB_104a503a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a503bc; end: 104a505c3; -[GTMSessionFetcher createSessionIdentifierWithMetadata:] */

void FUN_104a503bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x188));
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_3);
  }
  lVar3 = param_1;
  func_0x00010c160020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,lVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      uVar5 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c25cde0(uVar5,param_2,&PTR____CFConstantStringClassReference_110dc7718);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      _objc_release(uVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  *(undefined1 *)(param_1 + 0x72) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104a505c4; end: 104a50673; -[GTMSessionFetcher failToBeginFetchWithError:] */

void FUN_104a505c4(long param_1,undefined8 param_2,undefined *param_3)

{
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x118) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110da95f8,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c06aca0(param_1,param_2,0,param_3,1,1);
  func_0x00010bfaba60(*(undefined8 *)(param_1 + 0x100),param_2,param_1);
  func_0x00010c16caa0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a50674; end: 104a506cf; +[GTMSessionFetcher staticCookieStorage] */

void FUN_104a50674(void)

{
  if (lRam00000001136a1c70 != -1) {
    func_0x000104a5818c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1c68);
  return;
}



/* Entry: 104a506d0; end: 104a5076f; -[GTMSessionFetcher endBackgroundTask] */

void FUN_104a506d0(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010bf14580();
  if (lVar1 == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
    _objc_sync_exit(param_1);
  }
  else {
    func_0x00010c16e940(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_opt_class(param_1);
    func_0x00010bfabb80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a50770; end: 104a50913; -[GTMSessionFetcher authorizeRequest] */

void FUN_104a50770(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010bf11180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_authorizeRequest_delegate_didFin_1125a1de0);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf180e0(param_1);
    }
    else {
      func_0x00010c134680(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0d3c80();
      _objc_release(param_1);
      func_0x00010bf110e0(uVar1);
      _objc_release(uVar2);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0d3c80();
    _objc_release(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain();
    func_0x00010bf110c0(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104a50914; end: 104a5096b;  */

void FUN_104a50914(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf111a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5096c; end: 104a509f7; -[GTMSessionFetcher authorizer:request:finishedWithError:] */

void FUN_104a5096c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  if (param_5 == 0) {
    _objc_retain(param_1);
    _objc_sync_enter();
    _objc_storeStrong(param_1 + 8,param_4);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010bf180e0(param_1);
  }
  else {
    func_0x00010bf9fb20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a509f8; end: 104a50b2f; -[GTMSessionFetcher applyDecoratorsAtRequestWillStart:startingAtIndex:] */

void FUN_104a509f8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uVar2 = param_3;
    _objc_retain();
    uStack_50 = param_4;
    func_0x00010bfabbc0(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bf180e0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104a50b30; end: 104a50be7;  */

void FUN_104a50b30(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      if (param_2 != 0) {
        lVar2 = param_2;
        func_0x00010c0d3c80(param_2);
        func_0x00010c287e00(lVar1);
        _objc_release(lVar2);
      }
      func_0x00010bf082e0(lVar1);
    }
    else {
      func_0x00010bf9fb20(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a50be8; end: 104a50d9f; -[GTMSessionFetcher applyDecoratorsAtRequestDidFinish:withData:error:startingAtIndex:shouldReleaseCallbacks:] */

void FUN_104a50be8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined1 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_6 < uVar1) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    uVar2 = param_3;
    _objc_retain();
    uVar3 = param_4;
    _objc_retain();
    uVar4 = param_5;
    _objc_retain();
    uStack_78 = param_6;
    uStack_70 = param_7;
    func_0x00010bfaba40(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010c06aca0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a50da0; end: 104a50deb;  */

void FUN_104a50da0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf082c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(long *)(param_1 + 0x40) + 1,*(undefined1 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a50dec; end: 104a50df3; -[GTMSessionFetcher canFetchWithBackgroundSession] */

undefined8 FUN_104a50dec(void)

{
  return 1;
}



/* Entry: 104a50df4; end: 104a50e4b; -[GTMSessionFetcher isFetching] */

undefined8 FUN_104a50df4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c072de0(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a50e4c; end: 104a50e63; -[GTMSessionFetcher isFetchingUnsynchronized] */

byte FUN_104a50e4c(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 0x150) != 0) {
    bVar1 = *(byte *)(param_1 + 0x118) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 104a50e64; end: 104a50ec3; -[GTMSessionFetcher response] */

void FUN_104a50e64(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c13bd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a50ec4; end: 104a50efb; -[GTMSessionFetcher responseUnsynchronized] */

void FUN_104a50ec4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_retain(*(undefined8 *)(param_1 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a50efc; end: 104a50f53; -[GTMSessionFetcher statusCode] */

undefined8 FUN_104a50efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c252f80(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a50f54; end: 104a50fab; -[GTMSessionFetcher statusCodeUnsynchronized] */

ulong FUN_104a50f54(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c13bd60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c252ee0(param_1);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a50fac; end: 104a5100b; -[GTMSessionFetcher responseHeaders] */

void FUN_104a50fac(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf001c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5100c; end: 104a5106b; -[GTMSessionFetcher responseHeadersUnsynchronized] */

void FUN_104a5100c(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c13bd60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf001c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a5106c; end: 104a51183; -[GTMSessionFetcher releaseCallbacks] */

void FUN_104a5106c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 400);
  _objc_retain(uVar1);
  _objc_retainBlock(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c180aa0(param_1);
  func_0x00010c18daa0(param_1);
  func_0x00010c17a900(param_1);
  func_0x00010c225a00(param_1);
  func_0x00010c1fc300(param_1);
  func_0x00010c1e8340(param_1);
  func_0x00010c1912e0(param_1);
  func_0x00010c161460(param_1);
  func_0x00010c2259e0(param_1);
  func_0x00010c1ed8e0(param_1);
  func_0x00010c212ee0(param_1);
  func_0x00010c1ed620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setMetricsCollectionBlock__11264f828,0);
  return;
}



/* Entry: 104a51184; end: 104a51187; -[GTMSessionFetcher forgetSessionIdentifierForFetcher] */

void FUN_104a51184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_forgetSessionIdentifierForFetche_1125caf38);
  return;
}



/* Entry: 104a51188; end: 104a511df; -[GTMSessionFetcher forgetSessionIdentifierForFetcherWithoutSyncCheck] */

void FUN_104a51188(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar1 = param_1;
    _objc_opt_class();
    func_0x00010c160080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x72) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104a511e0; end: 104a5122b; -[GTMSessionFetcher stopFetching] */

void FUN_104a511e0(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x119) = 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = param_1;
  func_0x00010c255f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c255f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stopFetchReleasingCallbacks__1126731f0,(uint)lVar1 ^ 1);
  return;
}



/* Entry: 104a5122c; end: 104a514eb; -[GTMSessionFetcher stopFetchReleasingCallbacks:] */

void FUN_104a5122c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  
  func_0x00010c12d980();
  _objc_retainAutorelease(param_1);
  func_0x00010bf6f0c0();
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 0x118) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar7 = *(ulong *)(param_1 + 0x48);
  if (uVar7 == 0) {
LAB_104a512e4:
    bVar8 = false;
  }
  else {
    _objc_retainAutorelease(uVar7);
    if ((*(byte *)(param_1 + 0xc9) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c13b720();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      _objc_release(uVar6);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar3);
    uVar4 = uVar7;
    func_0x00010c252440();
    if (uVar4 == 3) goto LAB_104a512e4;
    if ((*(long *)(param_1 + 0x1c0) == 0) ||
       (uVar4 = uVar7,
       _objc_opt_respondsToSelector(uVar7,PTR_s_cancelByProducingResumeData__1125a91b8),
       (uVar4 & 1) == 0)) {
      func_0x00010bf2dba0(uVar7);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x1c0);
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      _objc_retain();
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0xe8));
      _objc_retain();
      _objc_retain();
      func_0x00010bf2e040(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
    bVar8 = true;
  }
  if ((*(long *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    lVar5 = param_1;
    func_0x00010c266ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainAutorelease(uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar3);
      if (bVar8) {
        _objc_storeStrong(param_1 + 0x38,uVar6);
        bVar8 = false;
        goto LAB_104a5142c;
      }
      func_0x00010bfafc60(uVar6);
    }
  }
  bVar8 = true;
LAB_104a5142c:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (bVar8) {
    func_0x00010c15cd00(param_1);
  }
  func_0x00010c255a80(*(undefined8 *)(param_1 + 0xf8));
  if (param_3 != 0) {
    func_0x00010c1284a0(param_1);
    func_0x00010c16caa0(param_1);
  }
  func_0x00010bfaba80(uVar1);
  func_0x00010bf94240(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104a514ec; end: 104a5159f;  */

void FUN_104a514ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uVar3 = param_2;
  _objc_retain(param_2);
  func_0x00010c06ad00(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 104a515a0; end: 104a515d3;  */

void FUN_104a515a0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8));
  return;
}



/* Entry: 104a515d4; end: 104a5160b; -[GTMSessionFetcher setStopNotificationNeeded:] */

void FUN_104a515d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined1 *)(param_1 + 200) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5160c; end: 104a5167b; -[GTMSessionFetcher sendStopNotificationIfNeeded] */

void FUN_104a5160c(long param_1)

{
  _objc_retain();
  _objc_sync_enter();
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
    _objc_sync_exit(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_postNotificationOnMainThreadWith_11261ec98,
               &PTR____CFConstantStringClassReference_110da9578,0,0);
    return;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5167c; end: 104a51717; -[GTMSessionFetcher retryFetch] */

void FUN_104a5167c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c255f20(param_1,param_2,0);
  _objc_retain();
  _objc_sync_enter();
  if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x72) == '\x01')) {
    func_0x00010bfb5620(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
  if (*(char *)(param_1 + 0x178) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf180d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_beginFetchForRetry_1125a39d8);
  return;
}



/* Entry: 104a51718; end: 104a518cf; -[GTMSessionFetcher waitForCompletionWithTimeout:] */

byte FUN_104a51718(double param_1,undefined *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retainAutorelease();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar5 == 0) {
    bVar1 = false;
  }
  else {
    puVar5 = param_2;
    func_0x00010bf28660();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      bVar1 = true;
    }
    else {
      puVar6 = param_2;
      func_0x00010bf28660();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar6 == PTR___dispatch_main_q_11034be20;
      _objc_release();
    }
    _objc_release(puVar5);
  }
  while( true ) {
    lVar7 = *(long *)(param_2 + 0x48);
    if (lVar7 == 0) {
      bVar2 = false;
    }
    else {
      func_0x00010c252440();
      bVar2 = lVar7 != 3;
    }
    lVar9 = *(long *)(param_2 + 400);
    lVar7 = *(long *)(param_2 + 0xe8);
    if (lVar7 == 0) {
      bVar3 = false;
    }
    else {
      uVar8 = 0;
      _dispatch_time(0,100000000);
      _dispatch_group_wait(lVar7,uVar8);
      bVar3 = lVar7 != 0;
    }
    if (lVar9 != 0) {
      bVar2 = true;
    }
    if ((!(bool)(bVar2 | bVar3)) || (func_0x00010c26f3a0(puVar4), param_1 < 0.0)) break;
    param_1 = 0.001;
    if (bVar1) {
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142a80();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    else {
      func_0x00010c23e800(PTR__OBJC_CLASS___NSThread_1126b47e0);
    }
  }
  _objc_release(puVar4);
  return (bVar2 | bVar3) ^ 1;
}



/* Entry: 104a518d0; end: 104a518f7; +[GTMSessionFetcher setGlobalTestBlock:] */

void FUN_104a518d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = uRam00000001136a1c50;
  uRam00000001136a1c50 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a518f8; end: 104a51907; +[GTMSessionFetcher setSubstituteUIApplication:] */

void FUN_104a518f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x1136a1c78,param_3);
  return;
}



/* Entry: 104a51908; end: 104a51913; +[GTMSessionFetcher substituteUIApplication] */

void FUN_104a51908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1c78);
  return;
}



/* Entry: 104a51914; end: 104a5197b; +[GTMSessionFetcher fetcherUIApplication] */

void FUN_104a51914(void)

{
  long lVar1;
  
  lVar1 = lRam00000001136a1c78;
  _objc_retain();
  if (lVar1 == 0) {
    if (lRam00000001136a1c88 != -1) {
      func_0x000104a581a0();
    }
    lVar1 = lRam00000001136a1c80;
    if (lRam00000001136a1c80 != 0) {
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_retain();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104a5197c; end: 104a51a1f;  */

void FUN_104a5197c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf24b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdcf80();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (((ulong)puVar3 & 1) == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110da7118;
    _NSClassFromString();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110da7138;
      _NSSelectorFromString(&PTR____CFConstantStringClassReference_110da7138);
      ppuVar6 = ppuVar4;
      _objc_opt_respondsToSelector(ppuVar4,ppuVar5);
      if (((ulong)ppuVar6 & 1) != 0) {
        ppuRam00000001136a1c80 = ppuVar4;
      }
    }
  }
  return;
}


