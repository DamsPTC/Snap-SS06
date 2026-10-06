/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a6df70; end: 104a6df77; -[GIDSignInInternalOptions completion] */

undefined8 FUN_104a6df70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a6df78; end: 104a6df7f; -[GIDSignInInternalOptions scopes] */

undefined8 FUN_104a6df78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a6df80; end: 104a6df87; -[GIDSignInInternalOptions setScopes:] */

void FUN_104a6df80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a6df88; end: 104a6df8f; -[GIDSignInInternalOptions loginHint] */

undefined8 FUN_104a6df88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a6df90; end: 104a6df97; -[GIDSignInInternalOptions setLoginHint:] */

void FUN_104a6df90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a6df98; end: 104a6dff3; -[GIDSignInInternalOptions .cxx_destruct] */

void FUN_104a6df98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104a6dff4; end: 104a6e02b;  */

void FUN_104a6dff4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daad18);
  return;
}



/* Entry: 104a6e02c; end: 104a6e0c3;  */

void FUN_104a6e02c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_opt_respondsToSelector();
  _objc_release(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e17ad8;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c083ea0();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daacf8;
    if ((int)puVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e17ad8;
    }
    _objc_retain(ppuVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104a6e0c4; end: 104a6e0cf; +[GIDSignInPreferences googleUserInfoServer] */

undefined ** FUN_104a6e0c4(void)

{
  return &PTR____CFConstantStringClassReference_110daac98;
}



/* Entry: 104a6e0d0; end: 104a6e173; -[GIDSignInResult initWithGoogleUser:serverAuthCode:] */

undefined1 *
FUN_104a6e0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3658;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 104a6e174; end: 104a6e17b; -[GIDSignInResult user] */

undefined8 FUN_104a6e174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a6e17c; end: 104a6e183; -[GIDSignInResult serverAuthCode] */

undefined8 FUN_104a6e17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a6e184; end: 104a6e1b3; -[GIDSignInResult .cxx_destruct] */

void FUN_104a6e184(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a6e1b4; end: 104a6e247; +[GIDSignInStrings localizedStringForKey:text:] */

void FUN_104a6e1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfcc840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a6e248; end: 104a6e257; +[GIDSignInStrings signInString] */

void FUN_104a6e248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daad78,
             &PTR____CFConstantStringClassReference_110daad78);
  return;
}



/* Entry: 104a6e258; end: 104a6e267; +[GIDSignInStrings signInWithGoogleString] */

void FUN_104a6e258(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_localizedStringForKey_text__112605408,
             &PTR____CFConstantStringClassReference_110daad98,
             &PTR____CFConstantStringClassReference_110daad98);
  return;
}



/* Entry: 104a6e268; end: 104a6e30b; -[GIDToken initWithTokenString:expirationDate:] */

undefined1 *
FUN_104a6e268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain();
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3660;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x10),param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104a6e30c; end: 104a6e313; +[GIDToken supportsSecureCoding] */

undefined8 FUN_104a6e30c(void)

{
  return 1;
}



/* Entry: 104a6e314; end: 104a6e3e3; -[GIDToken initWithCoder:] */

undefined1 * FUN_104a6e314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a6e3e4; end: 104a6e43f; -[GIDToken encodeWithCoder:] */

void FUN_104a6e3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f83098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a6e440; end: 104a6e4bb; -[GIDToken isEqual:] */

ulong FUN_104a6e440(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_3 != 0) {
    if (param_1 == param_3) {
      param_1 = 1;
      goto LAB_104a6e4a4;
    }
    puVar1 = PTR_PTR_1126ae480;
    _objc_opt_class(PTR_PTR_1126ae480);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010c072120(param_1);
      goto LAB_104a6e4a4;
    }
  }
  param_1 = 0;
LAB_104a6e4a4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a6e4bc; end: 104a6e567; -[GIDToken isEqualToToken:] */

long FUN_104a6e4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar2,param_2,uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c080e40(param_1,param_2,uVar3,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a6e568; end: 104a6e583; -[GIDToken isTheSameDate:with:] */

long FUN_104a6e568(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 != 0 || param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c071cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isEqualToDate__1125fa148,param_4);
    return param_3;
  }
  return 1;
}



/* Entry: 104a6e584; end: 104a6e5ef; -[GIDToken hash] */

ulong FUN_104a6e584(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar3 ^ uVar2;
}



/* Entry: 104a6e5f0; end: 104a6e5f7; -[GIDToken tokenString] */

undefined8 FUN_104a6e5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a6e5f8; end: 104a6e5ff; -[GIDToken expirationDate] */

undefined8 FUN_104a6e5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a6e600; end: 104a6e62f; -[GIDToken .cxx_destruct] */

void FUN_104a6e600(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a6e630; end: 104a6e707;  */

void FUN_104a6e630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126a7220;
    _objc_opt_class(PTR_PTR_1126a7220);
    func_0x00010bf249e0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010bf24ca0(PTR__OBJC_CLASS___NSBundle_1126aea78,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a6e708; end: 104a6e773;  */

void FUN_104a6e708(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_104a6e774;
  puStack_20 = &UNK_110848088;
  if (lRam00000001136a1d38 != -1) {
    uStack_18 = param_1;
    func_0x00010002a2fc(0x1136a1d38,&puStack_38);
  }
  return;
}



/* Entry: 104a6e774; end: 104a6e917;  */

long * FUN_104a6e774(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined1 auStack_138 [8];
  long alStack_130 [2];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long alStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = *(long **)(param_1 + 0x20);
  func_0x00010bfcc840();
  _objc_retainAutoreleasedReturnValue();
  alStack_130[1] = 0;
  alStack_130[0] = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_11117e1d8;
  plVar8 = alStack_130;
  plVar9 = alStack_f0;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    lVar12 = *plStack_120;
    do {
      ppuVar13 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_11117e1d8);
        }
        puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c266f80(PTR__OBJC_CLASS___UIFont_1126aec38);
        func_0x00010bfb41a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 == (undefined *)0x0) {
          plVar8 = plVar5;
          func_0x00010c0f5960();
          _objc_retainAutoreleasedReturnValue();
          plVar9 = plVar8;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          _CGDataProviderCreateWithFilename();
          plVar10 = plVar9;
          _CGFontCreateWithDataProvider();
          if (plVar10 != (long *)0x0) {
            param_2 = auStack_138;
            _CTFontManagerRegisterGraphicsFont(plVar10);
          }
          _CGFontRelease(plVar10);
          _CGDataProviderRelease(plVar9);
          _objc_release(plVar8);
        }
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar6 != ppuVar13);
      plVar8 = alStack_130;
      plVar9 = alStack_f0;
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_11117e1d8;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    while( true ) {
      plVar11 = (long *)*plVar5;
      plVar10 = (long *)((long)plVar11 + (long)param_2);
      plVar1 = plVar9;
      if ((long)plVar10 <= (long)plVar9) {
        plVar1 = plVar10;
      }
      plVar2 = plVar8;
      if ((long)plVar8 <= (long)plVar10) {
        plVar2 = plVar1;
      }
      if (plVar2 == plVar11) break;
      while ((long *)*plVar5 == plVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = (long)plVar2;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return plVar2;
        }
      }
      ClearExclusiveLocal();
    }
    return plVar11;
  }
  return plVar5;
}



/* Entry: 104a6e918; end: 104a6e963;  */

long FUN_104a6e918(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  while( true ) {
    lVar6 = *param_1;
    lVar1 = lVar6 + param_2;
    lVar2 = param_4;
    if (lVar1 <= param_4) {
      lVar2 = lVar1;
    }
    lVar3 = param_3;
    if (param_3 <= lVar1) {
      lVar3 = lVar2;
    }
    if (lVar3 == lVar6) break;
    while (*param_1 == lVar6) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar5) {
        *param_1 = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        return lVar3;
      }
    }
    ClearExclusiveLocal();
  }
  return lVar6;
}



/* Entry: 104a6e964; end: 104a6e9cb;  */

undefined * FUN_104a6e964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  
  func_0x0001004686cc(param_2,param_3,2,"UNREACHABLE CODE: %s");
  uVar1 = (uint)param_2;
  _abort();
  if (uVar1 < 3) {
    return (&PTR_DAT_1107c0670)[(int)uVar1];
  }
  pcVar2 = "return \"UNKNOWN\"";
  FUN_104a6e964("return \"UNKNOWN\"",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/log.cc",
                0x40);
  return (undefined *)(ulong)(lRam00000001130a57a8 <= (long)((ulong)pcVar2 & 0xffffffff));
}



/* Entry: 104a6e9cc; end: 104a6e9df;  */

bool FUN_104a6e9cc(ulong param_1)

{
  return lRam00000001130a57a8 <= (long)(param_1 & 0xffffffff);
}



/* Entry: 104a6e9e0; end: 104a6ea23;  */

void FUN_104a6e9e0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  
  if (lRam00000001130a57a0 <= (long)(ulong)param_3) {
    uStack_28 = param_1;
    uStack_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    (*(code *)PTR_FUN_1130a57b0)(&uStack_28);
  }
  return;
}



/* Entry: 104a6ea24; end: 104a6ea4f;  */

void FUN_104a6ea24(uint param_1)

{
  uRam00000001130a57a0 = (ulong)param_1;
  return;
}



/* Entry: 104a6ea50; end: 104a6ec8b;  */

/* WARNING: Removing unreachable block (ram,0x000104a6ec1c) */

byte * FUN_104a6ea50(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte *apbStack_148 [2];
  char cStack_131;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined7 *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 1;
  func_0x000100467380();
  lVar13 = *param_1;
  lVar2 = lVar13;
  uStack_f8 = uVar1;
  _strrchr(lVar13,0x2f);
  if (lVar2 != 0) {
    lVar13 = lVar2 + 1;
  }
  puVar3 = &uStack_f8;
  _localtime_r(puVar3,auStack_130);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_e8 = 0x656d69746c6163;
    uStack_e1 = 0;
    uStack_f0 = 0x6c3a726f727265;
    uStack_e9 = 0x6f;
  }
  else {
    puVar4 = &uStack_f0;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_130);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_f0 = 0x733a726f727265;
      uStack_e9 = 0x74;
      uStack_e8 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc);
  func_0x000104a6e990();
  uVar11 = uVar5;
  _pthread_self();
  puStack_a0 = &UNK_1005616c4;
  puStack_98 = &uStack_f0;
  puStack_90 = &UNK_1005616c4;
  uStack_88 = param_2 & 0xffffffff;
  puStack_80 = &UNK_1004d50a8;
  puStack_70 = &UNK_10ae73d0c;
  puStack_60 = &UNK_1005616c4;
  uStack_58 = (ulong)*(uint *)(param_1 + 1);
  puStack_50 = &UNK_1004d50a8;
  puVar9 = &uStack_a8;
  uStack_a8 = uVar5;
  uStack_78 = uVar11;
  lStack_68 = lVar13;
  func_0x0001004d4da0(apbStack_148,"%s%s.%09d %7ld %s:%d]",0x15,puVar9,6);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  FUN_104a6e9cc();
  if (uVar8 == 0) {
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff00);
LAB_104a6ebd8:
    pbVar6 = *(byte **)PTR____stderrp_11034bdc8;
    pcVar7 = "%-70s %s\n";
  }
  else {
    func_0x000104a6f680(&uStack_a8);
    if ((char)puStack_90 == '\0') goto LAB_104a6ebd8;
    pbVar6 = *(byte **)PTR____stderrp_11034bdc8;
    pcVar7 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_131 < '\0') {
    pbVar6 = apbStack_148[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(apbStack_148[0]);
  }
  __Unwind_Resume();
  uVar8 = (uint)puVar9;
  if ((char *)0x3 < pcVar7) {
    uVar11 = (ulong)pcVar7 >> 2;
    pbVar12 = pbVar6;
    do {
      uVar8 = (*(int *)pbVar12 * 0x16a88000 | (uint)(*(int *)pbVar12 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar9;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
      puVar9 = (ulong *)(ulong)uVar8;
      uVar11 = uVar11 - 1;
      pbVar12 = pbVar12 + 4;
    } while (uVar11 != 0);
    pbVar6 = pbVar6 + ((ulong)pcVar7 & 0xfffffffffffffffc);
  }
  uVar10 = 0;
  uVar11 = (ulong)pcVar7 & 3;
  if (uVar11 != 1) {
    if (uVar11 != 2) {
      if (uVar11 != 3) goto LAB_104a6ed3c;
      uVar10 = (uint)pbVar6[2] << 0x10;
    }
    uVar10 = uVar10 | (uint)pbVar6[1] << 8;
  }
  uVar8 = ((uVar10 ^ *pbVar6) * 0x16a88000 | (uVar10 ^ *pbVar6) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar8;
LAB_104a6ed3c:
  uVar8 = uVar8 ^ (uint)pcVar7;
  uVar8 = (uVar8 ^ uVar8 >> 0x10) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar8 ^ uVar8 >> 0x10);
}



/* Entry: 104a6ec8c; end: 104a6ed67;  */

uint FUN_104a6ec8c(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (3 < param_2) {
    uVar2 = param_2 >> 2;
    pbVar4 = param_1;
    do {
      param_3 = (*(int *)pbVar4 * 0x16a88000 | (uint)(*(int *)pbVar4 * -0x3361d2af) >> 0x11) *
                0x1b873593 ^ param_3;
      param_3 = (param_3 >> 0x13 | param_3 << 0xd) * 5 + 0xe6546b64;
      uVar2 = uVar2 - 1;
      pbVar4 = pbVar4 + 4;
    } while (uVar2 != 0);
    param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
  }
  uVar1 = 0;
  uVar3 = (uint)param_2 & 3;
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_104a6ed3c;
      uVar1 = (uint)param_1[2] << 0x10;
    }
    uVar1 = uVar1 | (uint)param_1[1] << 8;
  }
  param_3 = ((uVar1 ^ *param_1) * 0x16a88000 | (uVar1 ^ *param_1) * -0x3361d2af >> 0x11) *
            0x1b873593 ^ param_3;
LAB_104a6ed3c:
  param_3 = param_3 ^ (uint)param_2;
  uVar1 = (param_3 ^ param_3 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 104a6ed68; end: 104a6eea7;  */

undefined1 ** FUN_104a6ed68(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  char **ppcVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined1 **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  char **ppcVar16;
  byte bVar17;
  long lStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  char acStack_66 [11];
  undefined1 auStack_5b [35];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = &lStack_108;
  lStack_108 = param_2;
  uStack_100 = param_3;
  _localtime();
  _strftime(auStack_5b,0x23,"%Y-%m-%dT%H:%M:%S");
  _snprintf(acStack_66,0xb,".%09d");
  uVar12 = 10;
  do {
    iVar11 = (int)uVar12;
    uVar12 = (ulong)(iVar11 - 3U);
    if (((acStack_66[uVar12] != '0') || (acStack_66[iVar11 - 2] != '0')) ||
       (acStack_66[iVar11 - 1] != '0')) break;
    acStack_66[uVar12] = '\0';
    cVar3 = '\0';
    if (iVar11 != 4) {
      cVar3 = acStack_66[0];
    }
    acStack_66[0] = cVar3;
  } while (3 < iVar11 - 3U);
  puVar5 = auStack_5b;
  _strlen();
  pcVar6 = acStack_66;
  puStack_98 = auStack_5b;
  puStack_90 = puVar5;
  _strlen();
  pcStack_f8 = "Z";
  uStack_f0 = 1;
  ppuVar7 = &puStack_98;
  ppcVar9 = &pcStack_c8;
  uVar10 = 0;
  pcStack_c8 = acStack_66;
  pcStack_c0 = pcVar6;
  func_0x000100066c24(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (((uVar10 & 1) == 0) || (ppcVar9 == (char **)0x0)) {
    uVar14 = 0;
    uVar12 = 0;
    ppuVar13 = (undefined1 **)0x0;
  }
  else {
    ppcVar16 = (char **)0x0;
    uVar14 = 0;
    uVar12 = 0;
    ppuVar13 = (undefined1 **)0x0;
    do {
      if (ppcVar16 != (char **)0x0) {
        if (uVar12 == uVar14) {
          uVar14 = uVar14 * 2;
          if (uVar14 < 9) {
            uVar14 = 8;
          }
          func_0x0001004689e4(ppuVar13,uVar14);
        }
        *(undefined1 *)((long)ppuVar13 + uVar12) = 0x20;
        uVar12 = uVar12 + 1;
      }
      uVar1 = (&UNK_10f416238)[*(byte *)((long)ppuVar7 + (long)ppcVar16) >> 4];
      if (uVar12 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      uVar15 = uVar12 + 1;
      *(undefined1 *)((long)ppuVar13 + uVar12) = uVar1;
      uVar1 = (&UNK_10f416238)[(ulong)*(byte *)((long)ppuVar7 + (long)ppcVar16) & 0xf];
      if (uVar15 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      uVar12 = uVar12 + 2;
      *(undefined1 *)((long)ppuVar13 + uVar15) = uVar1;
      ppcVar16 = (char **)((long)ppcVar16 + 1);
    } while (ppcVar9 != ppcVar16);
  }
  uVar15 = uVar12;
  if ((uVar10 >> 1 & 1) != 0) {
    if (uVar12 == 0) {
      uVar15 = 0;
      puVar2 = PTR___DefaultRuneLocale_11034bcf8;
    }
    else {
      if (uVar12 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      *(undefined1 *)((long)ppuVar13 + uVar12) = 0x20;
      if (uVar12 + 1 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      *(undefined1 *)((long)ppuVar13 + uVar12 + 1) = 0x27;
      uVar15 = uVar12 + 2;
      puVar2 = PTR___DefaultRuneLocale_11034bcf8;
    }
    for (; ppcVar9 != (char **)0x0; ppcVar9 = (char **)((long)ppcVar9 + -1)) {
      uVar8 = (ulong)*(byte *)ppuVar7;
      if ((char)*(byte *)ppuVar7 < '\0') {
        ___maskrune(uVar8,0x40000);
        if ((int)uVar8 != 0) goto LAB_104a6f05c;
LAB_104a6f070:
        bVar17 = 0x2e;
      }
      else {
        if ((*(uint *)(puVar2 + uVar8 * 4 + 0x3c) & 0x40000) == 0) goto LAB_104a6f070;
LAB_104a6f05c:
        bVar17 = *(byte *)ppuVar7;
      }
      if (uVar15 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      *(byte *)((long)ppuVar13 + uVar15) = bVar17;
      ppuVar7 = (undefined1 **)((long)ppuVar7 + 1);
      uVar15 = uVar15 + 1;
    }
    if (uVar12 != 0) {
      if (uVar15 == uVar14) {
        uVar14 = uVar14 * 2;
        if (uVar14 < 9) {
          uVar14 = 8;
        }
        func_0x0001004689e4(ppuVar13,uVar14);
      }
      *(undefined1 *)((long)ppuVar13 + uVar15) = 0x27;
      uVar15 = uVar15 + 1;
    }
  }
  if (uVar15 == uVar14) {
    uVar14 = uVar14 * 2;
    if (uVar14 < 9) {
      uVar14 = 8;
    }
    func_0x0001004689e4(ppuVar13,uVar14);
  }
  *(undefined1 *)((long)ppuVar13 + uVar15) = 0;
  *plVar4 = uVar15 + 1;
  return ppuVar13;
}



/* Entry: 104a6eea8; end: 104a6f15b;  */

long FUN_104a6eea8(byte *param_1,long param_2,uint param_3,long *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  
  if (((param_3 & 1) == 0) || (param_2 == 0)) {
    uVar5 = 0;
    uVar6 = 0;
    lVar4 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar4 = 0;
    do {
      if (lVar8 != 0) {
        if (uVar6 == uVar5) {
          uVar5 = uVar5 * 2;
          if (uVar5 < 9) {
            uVar5 = 8;
          }
          func_0x0001004689e4(lVar4,uVar5);
        }
        *(undefined1 *)(lVar4 + uVar6) = 0x20;
        uVar6 = uVar6 + 1;
      }
      uVar1 = (&UNK_10f416238)[param_1[lVar8] >> 4];
      if (uVar6 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      uVar7 = uVar6 + 1;
      *(undefined1 *)(lVar4 + uVar6) = uVar1;
      uVar1 = (&UNK_10f416238)[(ulong)param_1[lVar8] & 0xf];
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      uVar6 = uVar6 + 2;
      *(undefined1 *)(lVar4 + uVar7) = uVar1;
      lVar8 = lVar8 + 1;
    } while (param_2 != lVar8);
  }
  uVar7 = uVar6;
  if ((param_3 >> 1 & 1) != 0) {
    if (uVar6 == 0) {
      uVar7 = 0;
      puVar2 = PTR___DefaultRuneLocale_11034bcf8;
    }
    else {
      if (uVar6 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar6) = 0x20;
      if (uVar6 + 1 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar6 + 1) = 0x27;
      uVar7 = uVar6 + 2;
      puVar2 = PTR___DefaultRuneLocale_11034bcf8;
    }
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar3 = (ulong)*param_1;
      if ((char)*param_1 < '\0') {
        ___maskrune(uVar3,0x40000);
        if ((int)uVar3 != 0) goto LAB_104a6f05c;
LAB_104a6f070:
        bVar9 = 0x2e;
      }
      else {
        if ((*(uint *)(puVar2 + uVar3 * 4 + 0x3c) & 0x40000) == 0) goto LAB_104a6f070;
LAB_104a6f05c:
        bVar9 = *param_1;
      }
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      *(byte *)(lVar4 + uVar7) = bVar9;
      param_1 = param_1 + 1;
      uVar7 = uVar7 + 1;
    }
    if (uVar6 != 0) {
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        func_0x0001004689e4(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar7) = 0x27;
      uVar7 = uVar7 + 1;
    }
  }
  if (uVar7 == uVar5) {
    uVar5 = uVar5 * 2;
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    func_0x0001004689e4(lVar4,uVar5);
  }
  *(undefined1 *)(lVar4 + uVar7) = 0;
  *param_4 = uVar7 + 1;
  return lVar4;
}



/* Entry: 104a6f15c; end: 104a6f25b;  */

undefined8 FUN_104a6f15c(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    while( true ) {
      if ((*param_1 - 0x3a < 0xfffffff6) ||
         (uVar1 = ((uint)*param_1 + uVar2 * 10) - 0x30, uVar1 < uVar2)) break;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
      if (param_2 == 0) {
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104a6f25c; end: 104a6f29b;  */

undefined4 FUN_104a6f25c(ulong param_1)

{
  undefined4 uVar1;
  char *pcStack_18;
  
  _strtol(param_1,&pcStack_18,10);
  uVar1 = (undefined4)param_1;
  if (0x7fffffff < param_1 || *pcStack_18 != '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104a6f29c; end: 104a6f3e7;  */

void FUN_104a6f29c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_48;
  
  *param_3 = 0;
  *param_4 = 0;
  uStack_48 = 0;
  lVar1 = param_1;
  _strstr();
  while (lVar1 != 0) {
    func_0x000104a6f34c(param_1,lVar1,param_3,param_4,&uStack_48);
    param_1 = param_2;
    _strlen();
    param_1 = lVar1 + param_1;
    lVar1 = param_1;
    _strstr(param_1,param_2);
  }
  lVar1 = param_1;
  _strlen(param_1);
  func_0x000104a6f34c(param_1,param_1 + lVar1,param_3,param_4,&uStack_48);
  return;
}



/* Entry: 104a6f3e8; end: 104a6f423;  */

long FUN_104a6f3e8(long param_1,int param_2,long param_3)

{
  if ((param_1 != 0) && (param_3 != 0)) {
    do {
      if (*(char *)(param_1 + -1 + param_3) == param_2) {
        return param_1 + param_3 + -1;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



/* Entry: 104a6f424; end: 104a6f4e3;  */

bool FUN_104a6f424(long param_1,undefined1 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
LAB_104a6f4b0:
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x0001004602b4(param_1,"1",0xffffffffffffffff);
    if ((int)lVar2 == 0) {
      bVar1 = true;
    }
    else {
      uVar4 = 0;
      bVar1 = true;
      do {
        lVar2 = param_1;
        func_0x0001004602b4(param_1,(&PTR_DAT_1107c06b0)[uVar4],0xffffffffffffffff);
        if ((int)lVar2 == 0) {
          uVar3 = 0;
          goto LAB_104a6f4c8;
        }
        bVar1 = uVar4 < 4;
        if (uVar4 == 4) goto LAB_104a6f4b0;
        lVar2 = param_1;
        func_0x0001004602b4(param_1,(&PTR_s_t_1107c0690)[uVar4],0xffffffffffffffff);
        uVar4 = uVar4 + 1;
      } while ((int)lVar2 != 0);
    }
    uVar3 = 1;
LAB_104a6f4c8:
    *param_2 = uVar3;
  }
  return bVar1;
}



/* Entry: 104a6f4e4; end: 104a6f4ff;  */

void FUN_104a6f4e4(long *param_1)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 104a6f500; end: 104a6f547;  */

undefined1  [16]
FUN_104a6f500(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long alStack_a8 [8];
  long lStack_68;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    auVar9._1_7_ = 0;
    auVar9[0] = (uint)param_1 == 0;
    auVar9._8_8_ = param_2;
    return auVar9;
  }
  func_0x00010bda8f5c();
  uStack_18 = 0x104a6f52c;
  puStack_20 = &stack0xfffffffffffffff0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  func_0x00010bda9094();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_a8;
    func_0x000107c616d0(plVar1,0x40,param_4,&puStack_20);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_a8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a6f548; end: 104a6f57b;  */

undefined1  [16]
FUN_104a6f548(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a6f57c; end: 104a6f60f;  */

void FUN_104a6f57c(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = param_2;
  do {
    uVar2 = param_2 >> 0x20;
    func_0x000100467380(param_2 >> 0x20);
    uVar3 = param_1;
    func_0x000100466678(param_1,param_2,uVar2,uVar5);
    if ((int)uVar3 < 1) {
      return;
    }
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x00010046778c(param_1,param_2,uVar2,uVar5);
    lStack_48 = (long)(int)uVar4;
    uVar5 = 0;
    uStack_50 = uVar3;
    iVar1 = (int)&uStack_50;
    _nanosleep();
  } while (iVar1 != 0);
  return;
}



/* Entry: 104a6f610; end: 104a6f64f;  */

void FUN_104a6f610(void)

{
  return;
}



/* Entry: 104a6f650; end: 104a6f6db;  */

void FUN_104a6f650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  func_0x000100467380();
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  return;
}



/* Entry: 104a6f6dc; end: 104a6f723;  */

void FUN_104a6f6dc(void)

{
  if ((bRam0000000113815bd8 & 1) != 0) {
    if (lRam0000000113815bc0 != 0) {
      FUN_104a6f87c();
      __ZdlPv();
    }
    if (lRam0000000113815bc8 != 0) {
      FUN_104a6f8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 104a6f724; end: 104a6f72f;  */

void FUN_104a6f724(undefined8 param_1,char *param_2)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
  pcVar6 = pcRam0000000113815bc0;
  plVar1 = (long *)(pcRam0000000113815bc0 + 0x78);
  lVar9 = *(long *)(pcRam0000000113815bc0 + 0x78);
  pcVar2 = pcRam0000000113815bc0 + 8;
  pcVar3 = pcRam0000000113815bc0 + 0x48;
  do {
    if (lVar9 < 2) {
      func_0x000100460448(pcVar2);
      if (*plVar1 < 2) {
        while (*pcVar6 == '\0') {
          uVar7 = 1;
          func_0x000100466584(1);
          pcVar8 = pcVar2;
          func_0x000100466590(pcVar3,pcVar2,uVar7,param_2);
          param_2 = pcVar8;
        }
      }
      func_0x000100466b80(pcVar2);
    }
    else {
      while (*plVar1 == lVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
    lVar9 = *plVar1;
  } while( true );
}



/* Entry: 104a6f730; end: 104a6f7db;  */

void FUN_104a6f730(char *param_1,char *param_2)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x78);
  lVar7 = *(long *)(param_1 + 0x78);
  pcVar2 = param_1 + 8;
  do {
    if (lVar7 < 2) {
      func_0x000100460448(pcVar2);
      if (*plVar1 < 2) {
        while (*param_1 == '\0') {
          uVar5 = 1;
          func_0x000100466584(1);
          pcVar6 = pcVar2;
          func_0x000100466590(param_1 + 0x48,pcVar2,uVar5,param_2);
          param_2 = pcVar6;
        }
      }
      func_0x000100466b80(pcVar2);
    }
    else {
      while (*plVar1 == lVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
    lVar7 = *plVar1;
  } while( true );
}



/* Entry: 104a6f7dc; end: 104a6f823;  */

void FUN_104a6f7dc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(lRam0000000113815bc0 + 0x78);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 104a6f824; end: 104a6f87b;  */

void FUN_104a6f824(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1 + 8;
  func_0x000100460448(pcVar2);
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + -1;
  if (*param_1 != '\0' && iVar1 + -1 == 0) {
    param_1[1] = '\x01';
    func_0x000100466b64(param_1 + 0x48);
  }
  func_0x000107c61268();
  if ((int)pcVar2 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104a6f87c; end: 104a6f8af;  */

long FUN_104a6f87c(long param_1)

{
  func_0x0001005a5f48(param_1 + 8);
  func_0x000100832c44(param_1 + 0x48);
  return param_1;
}



/* Entry: 104a6f8b0; end: 104a6f8e3;  */

long FUN_104a6f8b0(long param_1)

{
  func_0x0001005a5f48(param_1 + 8);
  func_0x000100832c44(param_1 + 0x48);
  return param_1;
}



/* Entry: 104a6f8e4; end: 104a6f9af;  */

void FUN_104a6f8e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &UNK_1005616c4;
  puStack_30 = &UNK_1005616c4;
  uStack_48 = param_2;
  uStack_38 = param_1;
  func_0x0001004d4da0(auStack_60,"Illegal value \'%s\' specified for environment variable \'%s\'",
                      0x3a,&uStack_48,2);
  (*(code *)PTR_FUN_1130a5840)();
  if (cStack_49 < '\0') {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  __Unwind_Resume();
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/global_config_env.cc"
                      ,0x2b,2,"%s");
  return;
}



/* Entry: 104a6f9b0; end: 104a6f9e7;  */

void FUN_104a6f9b0(void)

{
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/global_config_env.cc"
                      ,0x2b,2,"%s");
  return;
}



/* Entry: 104a6f9e8; end: 104a6fa37;  */

void FUN_104a6f9e8(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104a6fa38();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12out_of_range_110352240,PTR___ZNSt12out_of_rangeD1Ev_110346180);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104a6fa38; end: 104a6fa6f;  */

void FUN_104a6fa38(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_110346b60 + 0x10);
  return;
}



/* Entry: 104a6fa70; end: 104a6fabf;  */

void FUN_104a6fa70(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104a6fac0();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104a6fac0; end: 104a6fae3;  */

void FUN_104a6fac0(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104a6fae4; end: 104a6fb1f;  */

undefined8 * FUN_104a6fae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c06e8;
  func_0x0001005a5f48(param_1 + 1);
  func_0x000100832c44(param_1 + 9);
  return param_1;
}



/* Entry: 104a6fb20; end: 104a6fb33;  */

void FUN_104a6fb20(void)

{
  FUN_104a6fae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a6fb34; end: 104a6fb3f;  */

void FUN_104a6fb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_join_11034c8c8)(*(undefined8 *)(param_1 + 0x80),0);
  return;
}



/* Entry: 104a6fb40; end: 104a6fc53;  */

undefined1  [16] FUN_104a6fb40(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_40;
  int iStack_38;
  
  if ((param_1 == 0x7fffffffffffffff) && (param_2 == -1)) {
    auVar7._8_8_ = 0x300000000;
    auVar7._0_8_ = 0x7fffffffffffffff;
    return auVar7;
  }
  lVar1 = 0x7fffffffffffffff;
  iVar4 = -1;
  lStack_40 = param_1;
  iStack_38 = param_2;
  func_0x00010ae86bb0();
  if ((param_1 == lVar1) && (param_2 == iVar4)) {
    auVar8._8_8_ = 0x300000000;
    auVar8._0_8_ = 0x8000000000000000;
    return auVar8;
  }
  uVar2 = 1;
  func_0x00010ae8680c(1,param_1,param_2,1,0,&lStack_40);
  uVar3 = 1;
  func_0x00010ae8680c(1,lStack_40,iStack_38,0,4,&lStack_40);
  uVar5 = 3;
  func_0x000104a6f56c(uVar2,3);
  uVar6 = 3;
  func_0x000104a6f55c(uVar3,3);
  func_0x00010047e648(uVar2,uVar5,uVar3,uVar6);
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar2;
  return auVar9;
}



/* Entry: 104a6fc54; end: 104a6fc57;  */

void FUN_104a6fc54(void)

{
  return;
}



/* Entry: 104a6fc58; end: 104a6fd0b;  */

void FUN_104a6fc58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  pcVar3 = "grpc.client_idle_timeout_ms";
  func_0x00010047da54(param_2,"grpc.client_idle_timeout_ms",0x1b);
  uStack_58 = 0x7fffffffffffffff;
  if (((ulong)pcVar3 & 0xff) != 0) {
    uStack_58 = param_2;
  }
  ppuStack_68 = &PTR_DAT_1107c0858;
  uStack_32 = 0;
  uStack_60 = param_3;
  FUN_104a712b0(&uStack_50,&uStack_31,&uStack_32);
  param_1[1] = &PTR_DAT_1107c0858;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  ppuStack_68 = &PTR_DAT_1107c08e0;
  uStack_50 = 0;
  uStack_48 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&uStack_40,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
    }
    uStack_40 = 0;
  } while (cVar1 != '\0');
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = &PTR_DAT_1107c08e0;
  FUN_104a710cc(&ppuStack_68);
  return;
}



/* Entry: 104a6fd0c; end: 104a6fd0f;  */

undefined8 * FUN_104a6fd0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c0858;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_104a7138c(param_1 + 3);
  return param_1;
}



/* Entry: 104a6fd10; end: 104a6fe83;  */

void FUN_104a6fd10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uStack_c8 = *param_2;
  plStack_c0 = (long *)param_2[1];
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_104a6fe84(&uStack_b8,&uStack_c8);
  ppuStack_a0 = &PTR_DAT_1107c0858;
  uStack_90 = uStack_b0;
  uStack_52 = 0;
  uStack_98 = param_3;
  FUN_104a712b0(&uStack_88,&uStack_51,&uStack_52);
  plVar1 = plStack_c0;
  ppuStack_a0 = &PTR_FUN_1107c0810;
  uStack_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  uStack_68 = uStack_b8;
  uStack_60 = uStack_a8;
  if (plStack_c0 != (long *)0x0) {
    plVar2 = plStack_c0 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  param_1[1] = &PTR_DAT_1107c0858;
  param_1[3] = uStack_90;
  param_1[2] = uStack_98;
  param_1[5] = uStack_80;
  param_1[4] = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  do {
    uVar5 = uStack_78;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&uStack_78,0x10);
    if (bVar4) {
      uStack_78 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[6] = uVar5;
  param_1[1] = &PTR_FUN_1107c0810;
  do {
    puVar6 = puStack_70;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&puStack_70,0x10);
    if (bVar4) {
      puStack_70 = (undefined8 *)0x0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[7] = puVar6;
  param_1[9] = uStack_60;
  param_1[8] = uStack_68;
  *param_1 = 0;
  if (puStack_70 != (undefined8 *)0x0) {
    (**(code **)*puStack_70)();
  }
  FUN_104a710cc(&ppuStack_a0);
  return;
}



/* Entry: 104a6fe84; end: 104a6ffdb;  */

void FUN_104a6fe84(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  double dVar7;
  
  pcVar4 = "grpc.max_connection_age_ms";
  lVar3 = param_2;
  func_0x00010047da54(param_2,"grpc.max_connection_age_ms",0x1a);
  lVar1 = 0x7fffffffffffffff;
  if (((ulong)pcVar4 & 0xff) != 0) {
    lVar1 = lVar3;
  }
  pcVar4 = "grpc.max_connection_idle_ms";
  lVar3 = param_2;
  func_0x00010047da54(param_2,"grpc.max_connection_idle_ms",0x1b);
  pcVar5 = "grpc.max_connection_age_grace_ms";
  func_0x00010047da54(param_2,"grpc.max_connection_age_grace_ms",0x20);
  lVar6 = param_2;
  _rand();
  dVar7 = (double)(int)lVar6 * 0.1;
  dVar7 = (dVar7 + dVar7) / 2147483647.0 + 1.0 + -0.1;
  lVar6 = -0x8000000000000000;
  if (lVar1 == -0x8000000000000000) {
    if (0.0 <= dVar7) goto LAB_104a6ffa0;
  }
  else if (lVar1 == 0x7fffffffffffffff) {
    if (dVar7 < 0.0) goto LAB_104a6ffa0;
  }
  else {
    dVar7 = ((dVar7 * (double)lVar1) / 1000.0) * 1000.0;
    if (dVar7 < 9.223372036854776e+18) {
      if (dVar7 <= -9.223372036854776e+18) {
        lVar6 = -0x8000000000000000;
      }
      else {
        lVar6 = (long)dVar7;
      }
      goto LAB_104a6ffa0;
    }
  }
  lVar6 = 0x7fffffffffffffff;
LAB_104a6ffa0:
  lVar1 = 0x7fffffffffffffff;
  if (((ulong)pcVar5 & 0xff) != 0) {
    lVar1 = param_2;
  }
  lVar2 = 0x7fffffffffffffff;
  if (((ulong)pcVar4 & 0xff) != 0) {
    lVar2 = lVar3;
  }
  *param_1 = lVar6;
  param_1[1] = lVar2;
  param_1[2] = lVar1;
  return;
}



/* Entry: 104a6ffdc; end: 104a70013;  */

undefined8 * FUN_104a6ffdc(undefined8 *param_1)

{
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  *param_1 = &PTR_DAT_1107c0858;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_104a7138c(param_1 + 3);
  return param_1;
}



/* Entry: 104a70014; end: 104a700cb;  */

void FUN_104a70014(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  plVar1 = (long *)(param_1 + 0x30);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  func_0x000104a73af4(*(undefined8 *)(param_1 + 0x18));
  plVar1 = (long *)(param_1 + 0x28);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a70070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return;
  }
  return;
}



/* Entry: 104a700cc; end: 104a705af;  */

long ** FUN_104a700cc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long **pplVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plStack_410;
  long lStack_408;
  long *plStack_400;
  ulong *puStack_3f8;
  long *plStack_3f0;
  long lStack_3e8;
  ulong uStack_3e0;
  char cStack_3d8;
  undefined1 auStack_3d0 [104];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [104];
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [104];
  long lStack_278;
  long lStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [104];
  long lStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 auStack_1e0 [13];
  long lStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [104];
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [104];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  plVar12 = *(long **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = *plVar12 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *puVar4 = plVar12;
  puVar4[1] = param_1;
  puVar7 = puVar4 + 2;
  *puVar7 = 0;
  puVar4[3] = FUN_104a7111c;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  puStack_3f8 = (ulong *)0x0;
  func_0x0001004bd7e8(auStack_e8,puVar7,&puStack_3f8);
  iVar9 = (int)puVar7;
  puVar5 = puStack_3f8;
  if (((ulong)puStack_3f8 & 1) != 0) {
    func_0x00010084dad0();
  }
  plStack_400 = *(long **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_400,0x10);
    if (bVar2) {
      *plStack_400 = *plStack_400 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (*(long *)(param_1 + 0x38) == 0x7fffffffffffffff) goto LAB_104a70480;
  func_0x000100460dc4();
  uVar6 = *puVar5;
  func_0x0001004671a4();
  lVar13 = *(long *)(param_1 + 0x38);
  lVar10 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff && lVar13 != 0x7fffffffffffffff) &&
     (lVar10 = -0x8000000000000000, uVar6 != 0x8000000000000000 && lVar13 != -0x8000000000000000)) {
    if ((long)uVar6 < 1) {
      if ((long)(-0x8000000000000000 - uVar6) <= lVar13) goto LAB_104a701d4;
    }
    else if ((long)(uVar6 ^ 0x7fffffffffffffff) < lVar13) {
      lVar10 = 0x7fffffffffffffff;
    }
    else {
LAB_104a701d4:
      lVar10 = lVar13 + uVar6;
    }
  }
  FUN_104ac9dec(auStack_3d0,lVar10);
  FUN_104a71404(auStack_e8,auStack_3d0);
  auStack_368[0] = 0;
  lStack_2f0 = param_1;
  FUN_104a71404(auStack_360,auStack_e8);
  lStack_2f8 = param_1;
  FUN_104ac9f40(auStack_e8);
  if (plStack_400 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_400,0x10);
      if (bVar2) {
        *plStack_400 = *plStack_400 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_410 = plStack_400;
  puVar7 = (undefined8 *)0x118;
  lStack_408 = param_1;
  __Znwm();
  auStack_2e8[0] = 0;
  lStack_270 = lStack_2f0;
  FUN_104a71404(auStack_2e0,auStack_360);
  plStack_3f0 = plStack_410;
  lStack_278 = lStack_2f8;
  plStack_410 = (long *)0x0;
  lStack_3e8 = lStack_408;
  puVar14 = puVar7 + 2;
  puVar7[3] = 0;
  *puVar14 = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *puVar7 = &PTR_FUN_1107c5ac0;
  puVar7[1] = &PTR____cxa_pure_virtual_1107c5b08;
  func_0x000100460318(puVar14);
  *(undefined4 *)(puVar7 + 10) = 1;
  *(undefined1 *)((long)puVar7 + 0x54) = 0;
  puVar7[0xb] = 0;
  *puVar7 = &PTR_FUN_1107c09e0;
  puVar7[1] = &PTR_DAT_1107c0a38;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = lStack_3e8;
  puVar7[0x10] = plStack_3f0;
  plStack_3f0 = (long *)0x0;
  *(undefined2 *)(puVar7 + 0x12) = 0;
  func_0x000100460448(puVar14);
  auStack_268[0] = 0;
  lStack_1f0 = lStack_270;
  FUN_104a71404(auStack_260,auStack_2e0);
  lStack_1f8 = lStack_278;
  auStack_1e8[0] = 0;
  lStack_170 = lStack_1f0;
  puVar4 = auStack_1e0;
  FUN_104a71404(auStack_1e0,auStack_260);
  lStack_178 = lStack_1f8;
  func_0x00010047a478();
  uVar15 = *puVar4;
  func_0x00010047a478();
  *puVar4 = puVar7;
  auStack_e8[0] = 0;
  lStack_70 = lStack_170;
  FUN_104a71404(auStack_e0,auStack_1e0);
  lStack_78 = lStack_178;
  auStack_168[0] = 0;
  puVar11 = auStack_160;
  lStack_f0 = lStack_70;
  FUN_104a71404(puVar11,auStack_e0);
  lStack_f8 = lStack_78;
  FUN_104a705b0(auStack_e8);
  *(undefined1 *)(puVar7 + 0x13) = 0;
  puVar7[0x22] = lStack_f0;
  FUN_104a71404(puVar7 + 0x14);
  iVar9 = (int)puVar11;
  puVar7[0x21] = lStack_f8;
  FUN_104a705b0(auStack_168);
  puVar4 = puVar7;
  FUN_104a717e4(&uStack_3e0);
  func_0x00010047a478();
  *puVar4 = uVar15;
  FUN_104a705b0(auStack_1e8);
  FUN_104a705b0(auStack_268);
  func_0x000100466b80(puVar14);
  uVar6 = uStack_3e0;
  if (cStack_3d8 != '\0') {
    uStack_3e0 = 0x36;
    if (uVar6 == 0) {
      FUN_104a70f44(puVar7[0x11]);
    }
    else if ((uVar6 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar12 = (long *)(param_1 + 0x30);
  func_0x00010047aa10(&uStack_3e0);
  func_0x0001004868c0(&plStack_3f0);
  FUN_104a705b0(auStack_2e8);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      (**(code **)*puVar7)(puVar7);
      break;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar2) {
      *plVar12 = (long)puVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x0001004868c0(&plStack_410);
  FUN_104a705b0(auStack_368);
  FUN_104ac9f40(auStack_3d0);
LAB_104a70480:
  pplVar8 = &plStack_400;
  func_0x0001004868c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pplVar8;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    FUN_104bd46a0();
    func_0x0001004868c0(&plStack_400);
  }
  __Unwind_Resume();
  cVar1 = *(char *)pplVar8;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      FUN_104a7148c(pplVar8 + 1);
      return pplVar8;
    }
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104a70604);
      (*pcVar3)();
    }
  }
  FUN_104ac9f40(pplVar8 + 1);
  return pplVar8;
}



/* Entry: 104a705b0; end: 104a70607;  */

char * FUN_104a705b0(char *param_1)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      FUN_104a7148c(param_1 + 8);
      return param_1;
    }
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104a70604);
      (*pcVar2)();
    }
  }
  FUN_104ac9f40(param_1 + 8);
  return param_1;
}



/* Entry: 104a70608; end: 104a70733;  */

void FUN_104a70608(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000104a73af4(*(undefined8 *)(param_2 + 0x18));
  plVar5 = *(long **)(param_5 + 0x18);
  uStack_60 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))((ulong)&uStack_60 | 8,plVar5,&uStack_50);
    ppuVar6 = &PTR___tlv_bootstrap_11340d8b8;
    (*(code *)PTR___tlv_bootstrap_11340d8b8)();
    puVar7 = (ulong *)*ppuVar6;
    do {
      uVar8 = *puVar7;
      uVar1 = uVar8 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *puVar7 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7[2] < uVar1) {
      func_0x0001004bbee0(puVar7,0x20);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar8 + 0x30);
    }
    *puVar7 = (ulong)&PTR_LAB_1107c0ac0;
    puVar7[2] = (ulong)ppuStack_58;
    puVar7[1] = uStack_60;
    uStack_60 = 0;
    ppuStack_58 = &PTR_PTR_1130a5848;
    *param_1 = puVar7;
    (**(code **)(PTR_PTR_1130a5848 + 8))(&PTR_PTR_1130a5848);
    FUN_104a71f5c(&uStack_60,0);
    return;
  }
  FUN_104a71f98();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a70708);
  (*pcVar4)();
}



/* Entry: 104a70734; end: 104a70773;  */

long FUN_104a70734(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  FUN_104a71f5c(param_1,0);
  return param_1;
}



/* Entry: 104a70774; end: 104a7079b;  */

undefined8 FUN_104a70774(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
    (**(code **)(*param_1 + 0x30))();
  }
  return 0;
}



/* Entry: 104a7079c; end: 104a70f43;  */

void FUN_104a7079c(long param_1)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long **pplVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_589;
  ulong uStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  long **pplStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined1 *puStack_530;
  undefined8 *puStack_528;
  long lStack_520;
  undefined1 *puStack_518;
  undefined8 *puStack_510;
  undefined1 *puStack_508;
  long *plStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  long **pplStack_4c8;
  long *plStack_4c0;
  long lStack_4b8;
  ulong uStack_4b0;
  char cStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long **pplStack_490;
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [104];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long **pplStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [104];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long **pplStack_360;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [104];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long **pplStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [104];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  undefined1 auStack_228 [8];
  undefined8 auStack_220 [13];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long **pplStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [104];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long **pplStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [104];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4d0 = *(undefined8 *)(param_1 + 0x18);
  pplStack_4c8 = *(long ***)(param_1 + 0x20);
  if (pplStack_4c8 != (long **)0x0) {
    pplVar1 = pplStack_4c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar5) {
        *pplVar1 = (long *)((long)*pplVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_4d8 = *(long **)(param_1 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plStack_4d8,0x10);
    if (bVar5) {
      *plStack_4d8 = *plStack_4d8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uStack_4f0 = *(undefined8 *)(param_1 + 0x10);
  if (pplStack_4c8 != (long **)0x0) {
    pplVar1 = pplStack_4c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar5) {
        *pplVar1 = (long *)((long)*pplVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_108 = 0;
  pplStack_100 = (long **)0x0;
  puStack_508 = auStack_3f0;
  uStack_408 = uStack_4f0;
  uStack_400 = uStack_4d0;
  pplStack_3f8 = pplStack_4c8;
  uStack_110 = uStack_4f0;
  FUN_104a72034(&uStack_408);
  uStack_4a0 = uStack_408;
  pplStack_490 = pplStack_3f8;
  uStack_498 = uStack_400;
  uStack_400 = 0;
  pplStack_3f8 = (long **)0x0;
  puStack_518 = auStack_488;
  auStack_488[0] = 0;
  FUN_104a71404(auStack_480,auStack_3e8);
  uStack_410 = uStack_378;
  uStack_418 = uStack_380;
  uStack_380 = 0;
  uStack_378 = 0;
  if (plStack_4d8 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_4d8,0x10);
      if (bVar5) {
        *plStack_4d8 = *plStack_4d8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_548 = &uStack_498;
  plStack_500 = plStack_4d8;
  puVar6 = (undefined8 *)0x130;
  puStack_540 = &uStack_400;
  lStack_520 = param_1;
  lStack_4f8 = param_1;
  __Znwm();
  uStack_370 = uStack_4a0;
  puStack_510 = &uStack_368;
  pplStack_360 = pplStack_490;
  uStack_368 = uStack_498;
  uStack_498 = 0;
  pplStack_490 = (long **)0x0;
  auStack_358[0] = 0;
  FUN_104a71404(auStack_350,auStack_480);
  plStack_4c0 = plStack_500;
  uStack_2e0 = uStack_410;
  uStack_2e8 = uStack_418;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_500 = (long *)0x0;
  lStack_4b8 = lStack_4f8;
  puVar7 = puVar6 + 2;
  puVar6[3] = 0;
  *puVar7 = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  *puVar6 = &PTR_FUN_1107c5ac0;
  puVar6[1] = &PTR____cxa_pure_virtual_1107c5b08;
  puStack_530 = auStack_358;
  func_0x000100460318(puVar7);
  *(undefined4 *)(puVar6 + 10) = 1;
  *(undefined1 *)((long)puVar6 + 0x54) = 0;
  puVar6[0xb] = 0;
  *puVar6 = &PTR_FUN_1107c0b40;
  puVar6[1] = &PTR_DAT_1107c0b98;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puStack_550 = puVar6 + 0x10;
  puVar6[0x11] = lStack_4b8;
  *puStack_550 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  *(undefined2 *)(puVar6 + 0x12) = 0;
  puStack_528 = puVar7;
  func_0x000100460448(puVar7);
  puVar7 = puStack_510;
  uStack_2d8 = uStack_370;
  pplStack_2c8 = pplStack_360;
  uStack_2d0 = uStack_368;
  *puStack_510 = 0;
  puVar7[1] = 0;
  auStack_2c0[0] = 0;
  FUN_104a71404(auStack_2b8,auStack_350);
  uStack_248 = uStack_2e0;
  uStack_250 = uStack_2e8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_240 = uStack_2d8;
  pplStack_230 = pplStack_2c8;
  uStack_238 = uStack_2d0;
  uStack_2d0 = 0;
  pplStack_2c8 = (long **)0x0;
  auStack_228[0] = 0;
  puVar7 = auStack_220;
  FUN_104a71404(auStack_220,auStack_2b8);
  uStack_1b0 = uStack_248;
  uStack_1b8 = uStack_250;
  uStack_248 = 0;
  uStack_250 = 0;
  func_0x00010047a478();
  uStack_538 = *puVar7;
  func_0x00010047a478();
  *puVar7 = puVar6;
  uStack_110 = uStack_240;
  pplStack_100 = pplStack_230;
  uStack_108 = uStack_238;
  pplStack_230 = (long **)0x0;
  uStack_238 = 0;
  auStack_f8[0] = 0;
  FUN_104a71404(auStack_f0,auStack_220);
  uStack_80 = uStack_1b0;
  uStack_88 = uStack_1b8;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = uStack_110;
  pplStack_198 = pplStack_100;
  uStack_1a0 = uStack_108;
  uStack_108 = 0;
  pplStack_100 = (long **)0x0;
  puVar12 = auStack_188;
  auStack_190[0] = 0;
  FUN_104a71404(puVar12,auStack_f0);
  uStack_118 = uStack_80;
  uStack_120 = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_104a72178(auStack_f8);
  pplVar1 = pplStack_100;
  if (pplStack_100 != (long **)0x0) {
    plVar15 = (long *)(pplStack_100 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_100 + 0x10))(pplStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar1);
    }
  }
  puVar6[0x13] = uStack_1a8;
  puVar6[0x15] = pplStack_198;
  puVar6[0x14] = uStack_1a0;
  uStack_1a0 = 0;
  pplStack_198 = (long **)0x0;
  *(undefined1 *)(puVar6 + 0x16) = 0;
  FUN_104a71404(puVar6 + 0x17);
  iVar11 = (int)puVar12;
  puVar6[0x25] = uStack_118;
  puVar6[0x24] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  FUN_104a72178(auStack_190);
  pplVar1 = pplStack_198;
  lVar13 = lStack_520;
  puVar7 = puStack_528;
  if (pplStack_198 != (long **)0x0) {
    plVar15 = (long *)(pplStack_198 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_198 + 0x10))(pplStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar1);
    }
  }
  puVar8 = puVar6;
  FUN_104a72478(&uStack_4b0);
  func_0x00010047a478();
  *puVar8 = uStack_538;
  FUN_104a72178(auStack_228);
  pplVar9 = pplStack_230;
  if (pplStack_230 != (long **)0x0) {
    plVar15 = (long *)(pplStack_230 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_230 + 0x10))(pplStack_230);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  FUN_104a72178(auStack_2c0);
  pplVar9 = pplStack_2c8;
  if (pplStack_2c8 != (long **)0x0) {
    plVar15 = (long *)(pplStack_2c8 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_2c8 + 0x10))(pplStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  func_0x000100466b80(puVar7);
  uVar10 = uStack_4b0;
  if (cStack_4a8 != '\0') {
    uStack_4b0 = 0x36;
    if (uVar10 == 0) {
      FUN_104a70f44(puVar6[0x11]);
    }
    else if ((uVar10 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x00010047aa10(&uStack_4b0);
  func_0x0001004868c0(&plStack_4c0);
  FUN_104a72178(puStack_530);
  pplVar9 = pplStack_360;
  if (pplStack_360 != (long **)0x0) {
    pplVar2 = pplStack_360 + 1;
    do {
      plVar15 = *pplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar5) {
        *pplVar2 = (long *)((long)plVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar15 == (long *)0x0) {
      (*(code *)(*pplStack_360)[2])(pplStack_360);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  plVar15 = (long *)(lVar13 + 0x28);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      (**(code **)*puVar6)(puVar6);
      break;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = (long)puVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  func_0x0001004868c0(&plStack_500);
  FUN_104a72178(puStack_518);
  pplVar9 = pplStack_490;
  if (pplStack_490 != (long **)0x0) {
    plVar15 = (long *)(pplStack_490 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_490 + 0x10))(pplStack_490);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  FUN_104a72178(puStack_508);
  pplVar9 = pplStack_3f8;
  if (pplStack_3f8 != (long **)0x0) {
    plVar15 = (long *)(pplStack_3f8 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_3f8 + 0x10))(pplStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  pplVar9 = &plStack_4d8;
  func_0x0001004868c0();
  pplVar2 = pplStack_4c8;
  if (pplStack_4c8 != (long **)0x0) {
    pplVar3 = pplStack_4c8 + 1;
    do {
      plVar15 = *pplVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
      if (bVar5) {
        *pplVar3 = (long *)((long)plVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar15 == (long *)0x0) {
      (*(code *)(*pplStack_4c8)[2])(pplStack_4c8);
      pplVar9 = pplVar2;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    FUN_104bd46a0();
    func_0x0001004868c0(&plStack_4c0);
    FUN_104a72178(puStack_530);
    FUN_104a7138c(puStack_510);
    __ZdlPv(puVar6);
    func_0x0001004868c0(&plStack_500);
    FUN_104a72178(puStack_518);
    FUN_104a7138c(puStack_548);
    FUN_104a72178(puStack_508);
    FUN_104a7138c(puStack_540);
    func_0x0001004868c0(&plStack_4d8);
    FUN_104a7138c(&uStack_4d0);
  }
  __Unwind_Resume();
  plStack_570 = (long *)pplVar1;
  pplStack_568 = pplVar2;
  pcStack_558 = FUN_104a70f44;
  lVar13 = 0;
  puStack_560 = &stack0xfffffffffffffff0;
  func_0x0001008daf18();
  uStack_5a0 = 0;
  uStack_598 = 0;
  uStack_5a8 = 0;
  FUN_104ab5920(&uStack_588,2,"enter idle",10,&uStack_589,&uStack_5a8);
  FUN_104abaa50(&uStack_580,&uStack_588,0xd,0);
  uVar10 = *(ulong *)(lVar13 + 0x20);
  if (uStack_580 != uVar10) {
    *(ulong *)(lVar13 + 0x20) = uStack_580;
    uStack_580 = 0x36;
    if ((uVar10 & 1) == 0) goto LAB_104a70fd0;
    func_0x00010084dad0();
    uVar10 = uStack_580;
  }
  if ((uVar10 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a70fd0:
  if ((uStack_588 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_578 = &uStack_5a8;
  func_0x000100482b64(&puStack_578);
  plVar15 = pplVar9[1];
  func_0x0001004868b0(plVar15,0);
  (**(code **)(*plVar15 + 0x10))();
  return;
}



/* Entry: 104a70f44; end: 104a7105b;  */

void FUN_104a70f44(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  lVar1 = 0;
  func_0x0001008daf18();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_104ab5920(&uStack_38,2,"enter idle",10,&uStack_39,&uStack_58);
  FUN_104abaa50(&uStack_30,&uStack_38,0xd,0);
  uVar2 = *(ulong *)(lVar1 + 0x20);
  if (uStack_30 != uVar2) {
    *(ulong *)(lVar1 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar2 & 1) == 0) goto LAB_104a70fd0;
    func_0x00010084dad0();
    uVar2 = uStack_30;
  }
  if ((uVar2 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a70fd0:
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_28 = &uStack_58;
  func_0x000100482b64(&puStack_28);
  plVar3 = *(long **)(param_1 + 8);
  func_0x0001004868b0(plVar3,0);
  (**(code **)(*plVar3 + 0x10))();
  return;
}



/* Entry: 104a7105c; end: 104a71067;  */

undefined8 FUN_104a7105c(void)

{
  return 0;
}



/* Entry: 104a71068; end: 104a7107b;  */

void FUN_104a71068(void)

{
  FUN_104a710cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a7107c; end: 104a710b7;  */

void FUN_104a7107c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))();
  }
  FUN_104a710cc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a710b8; end: 104a710cb;  */

void FUN_104a710b8(void)

{
  FUN_104a710cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a710cc; end: 104a7111b;  */

undefined8 * FUN_104a710cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c0858;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_104a7138c(param_1 + 3);
  return param_1;
}



/* Entry: 104a7111c; end: 104a711df;  */

void FUN_104a7111c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  func_0x000104a73af4(*(undefined8 *)(param_1[1] + 0x18));
  lVar8 = param_1[1];
  iVar3 = (int)*(undefined8 *)(lVar8 + 0x18);
  func_0x000104a73b64();
  if (iVar3 != 0) {
    FUN_104a7079c(lVar8);
  }
  lVar8 = 0;
  func_0x0001008daf18();
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  lVar5 = param_1[1];
  puVar4[2] = 0;
  puVar4[3] = 0;
  plVar7 = *(long **)(lVar5 + 8);
  *puVar4 = &PTR_FUN_1107c0940;
  puVar4[1] = 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar4[4] = plVar7;
  puVar4[5] = lVar5;
  puVar6 = *(undefined8 **)(lVar8 + 8);
  *(undefined8 **)(lVar8 + 8) = puVar4;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
  }
  *(undefined4 *)(lVar8 + 0x10) = 0;
  func_0x0001004868b0(*param_1,0);
  func_0x0001008db08c();
  func_0x0001004868c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a711e0; end: 104a7120b;  */

void FUN_104a711e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a71208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 104a7120c; end: 104a7129b;  */

undefined8 * FUN_104a7120c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c0940;
  func_0x0001004868c0(param_1 + 4);
  *param_1 = &PTR_FUN_1107c7418;
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a7129c; end: 104a712af;  */

void FUN_104a7129c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 != 4) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  func_0x000104a73af4(*(undefined8 *)(lVar5 + 0x18));
  plVar1 = (long *)(lVar5 + 0x28);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a70070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return;
  }
  return;
}



/* Entry: 104a712b0; end: 104a71307;  */

void FUN_104a712b0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  FUN_104a71308();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 104a71308; end: 104a71353;  */

undefined8 * FUN_104a71308(undefined8 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1107c0990;
  func_0x000104a73ae8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 104a71354; end: 104a71363;  */

void FUN_104a71354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c0990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104a71364; end: 104a71383;  */

void FUN_104a71364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c0990;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a71384; end: 104a7138b;  */

void FUN_104a71384(void)

{
  return;
}



/* Entry: 104a7138c; end: 104a713e3;  */

long FUN_104a7138c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 104a713e4; end: 104a71403;  */

void FUN_104a713e4(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a71404; end: 104a7148b;  */

undefined8 * FUN_104a71404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000100460318(param_1 + 3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  func_0x000100460448(param_2 + 3);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = uVar1;
  *param_2 = 0x8000000000000000;
  func_0x000100466b80(param_2 + 3);
  return param_1;
}



/* Entry: 104a7148c; end: 104a714ab;  */

void FUN_104a7148c(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a714ac; end: 104a71503;  */

void FUN_104a714ac(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = param_1 + 10;
  (**(code **)(*param_1 + 0x30))();
  do {
    iVar3 = (int)*plVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *(int *)plVar4 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a714f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  return;
}


