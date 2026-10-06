/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10433c888; end: 10433c953; -[_TtC17PlayGamesServices26PlayGamesLensInfoCardRelay presentWithLens:from:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433c888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f8e0);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_1);
    FUN_10433c734(pcVar2,uVar3);
    (*pcVar2)(param_3,param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_1);
    FUN_10433c878(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10433c954; end: 10433c987;  */

void FUN_10433c954(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433c988; end: 10433c99b; -[_TtC17PlayGamesServices26PlayGamesLensInfoCardRelay .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433c988(long param_1)

{
  if (*(long *)(param_1 + _DAT_11306f8e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11306f8e0))[1]);
    return;
  }
  return;
}



/* Entry: 10433c99c; end: 10433c9bb;  */

void FUN_10433c99c(void)

{
  _objc_opt_self(&PTR_PTR_11299ed60);
  return;
}



/* Entry: 10433c9bc; end: 10433c9eb;  */

void FUN_10433c9bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010433c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10433c9ec; end: 10433ca77;  */

void FUN_10433c9ec(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return;
}



/* Entry: 10433ca78; end: 10433caa3; -[_TtC17PlayGamesServices18PlayGamesLensScope init] */

void FUN_10433ca78(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesLensScope",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433caa4);
  (*pcVar1)();
}



/* Entry: 10433caa4; end: 10433caa7;  */

void FUN_10433caa4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433caa8; end: 10433cb2b; -[_TtC17PlayGamesServices18PlayGamesLensScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433caa8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306f9c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f9d0));
  return;
}



/* Entry: 10433cb2c; end: 10433cb97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433cb2c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10433cd48();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f9e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10433cb98; end: 10433cb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433cb98(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10433cd48();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f9e0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10433cba0; end: 10433cbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433cba0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f9e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433cbec; end: 10433cca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10433cbec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_10433cca8();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11306f9c8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11306f9d0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_1);
  _swift_retain(param_2);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 10433cca8; end: 10433ccc7;  */

void FUN_10433cca8(void)

{
  _objc_opt_self(&PTR_PTR_11299ee18);
  return;
}



/* Entry: 10433ccc8; end: 10433cd27; -[_TtC17PlayGamesServices26PlayGamesLensScopeServices init] */

void FUN_10433ccc8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesLensScopeServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433ccf4);
  (*pcVar1)();
}



/* Entry: 10433cd28; end: 10433cd47; -[_TtC17PlayGamesServices26PlayGamesLensScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433cd28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f9e0));
  return;
}



/* Entry: 10433cd48; end: 10433cd67;  */

void FUN_10433cd48(void)

{
  _objc_opt_self(&PTR_PTR_11299eee0);
  return;
}



/* Entry: 10433cd68; end: 10433cd6b;  */

void FUN_10433cd68(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433cd6c; end: 10433cd9f; -[_TtC17PlayGamesServices26PlayGamesPresenterServices studySettingsObjc] */

void FUN_10433cd6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10433cda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10433cda0; end: 10433ce13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10433cda0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11306fa60;
  lVar2 = *(long *)(unaff_x20 + _DAT_11306fa60);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_11306fa40));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 10433ce14; end: 10433ce47; -[_TtC17PlayGamesServices26PlayGamesPresenterServices setStudySettingsObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433ce14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306fa60);
  *(undefined8 *)(param_1 + _DAT_11306fa60) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10433ce48; end: 10433ce57; -[_TtC17PlayGamesServices26PlayGamesPresenterServices playGamesPresenterObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433ce48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fa68));
  return;
}



/* Entry: 10433ce58; end: 10433d02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10433ce58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306fa60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11306fa38) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11306fa68) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306fa40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306fa48) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306fa50) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306fa58) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  _swift_release(param_1);
  _swift_release(param_2);
  return puVar2;
}



/* Entry: 10433d030; end: 10433d08f; -[_TtC17PlayGamesServices26PlayGamesPresenterServices init] */

void FUN_10433d030(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesPresenterServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433d05c);
  (*pcVar1)();
}



/* Entry: 10433d090; end: 10433d117; -[_TtC17PlayGamesServices26PlayGamesPresenterServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433d090(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fa38));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fa40));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fa48));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fa50));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fa58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fa60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fa68));
  return;
}



/* Entry: 10433d118; end: 10433d15f;  */

void FUN_10433d118(void)

{
  long in_x7;
  
  (**(code **)(in_x7 + 8))();
  return;
}



/* Entry: 10433d160; end: 10433d2bb;  */

int FUN_10433d160(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_10433d1dc;
        goto LAB_10433d1bc;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10433d1bc:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_10433d1dc:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10433d2bc; end: 10433d93f;  */

long FUN_10433d2bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10433d940; end: 10433d95f;  */

void FUN_10433d940(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10433d960; end: 10433d99f;  */

void FUN_10433d960(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fa98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcece50;
  _swift_getWitnessTable(&UNK_10dcece50,&UNK_11075c060);
  puRam000000011306fa98 = puVar1;
  return;
}



/* Entry: 10433d9a0; end: 10433d9a3;  */

void FUN_10433d9a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306faa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecef0;
  _swift_getWitnessTable(&UNK_10dcecef0,&UNK_11075c080);
  puRam000000011306faa0 = puVar1;
  return;
}



/* Entry: 10433d9a4; end: 10433d9e3;  */

void FUN_10433d9a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011306faa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecef0;
  _swift_getWitnessTable(&UNK_10dcecef0,&UNK_11075c080);
  puRam000000011306faa0 = puVar1;
  return;
}



/* Entry: 10433d9e4; end: 10433da67;  */

void FUN_10433d9e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10433da68; end: 10433dacb;  */

void FUN_10433da68(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10433dacc; end: 10433dadb; -[_TtC17PlayGamesServices14PlayGamesScope renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306faa8));
  return;
}



/* Entry: 10433dadc; end: 10433db23; -[_TtC17PlayGamesServices14PlayGamesScope gestureRecognizerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dadc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306fab8;
  _swift_beginAccess(param_1 + _DAT_11306fab8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10433db24; end: 10433db7b; -[_TtC17PlayGamesServices14PlayGamesScope setGestureRecognizerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433db24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306fab8;
  _swift_beginAccess(param_1 + _DAT_11306fab8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10433db7c; end: 10433db8b; -[_TtC17PlayGamesServices14PlayGamesScope viewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433db7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fac0));
  return;
}



/* Entry: 10433db8c; end: 10433dbd7; -[_TtC17PlayGamesServices14PlayGamesScope lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433db8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fac8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fac8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433dbd8; end: 10433dbe7; -[_TtC17PlayGamesServices14PlayGamesScope framesPerSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10433dbd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306fad0);
}



/* Entry: 10433dbe8; end: 10433dbf7; -[_TtC17PlayGamesServices14PlayGamesScope replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fae0));
  return;
}



/* Entry: 10433dbf8; end: 10433dc07; -[_TtC17PlayGamesServices14PlayGamesScope lensSafeRenderRectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fb10));
  return;
}



/* Entry: 10433dc08; end: 10433dc17; -[_TtC17PlayGamesServices14PlayGamesScope lensCaptureButtonRectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dc08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fb18));
  return;
}



/* Entry: 10433dc18; end: 10433dc27; -[_TtC17PlayGamesServices14PlayGamesScope lensInfoCardRelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fb68));
  return;
}



/* Entry: 10433dc28; end: 10433dc53; -[_TtC17PlayGamesServices14PlayGamesScope init] */

void FUN_10433dc28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesScope",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433dc54);
  (*pcVar1)();
}



/* Entry: 10433dc54; end: 10433dc57;  */

void FUN_10433dc54(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433dc58; end: 10433de4b; -[_TtC17PlayGamesServices14PlayGamesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433dc58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306faa8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11306fab0);
  func_0x000100db5ec0(param_1 + _DAT_11306fab8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fac0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fac8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fae0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306faf0));
  func_0x000100db5ec0(param_1 + _DAT_11306faf8);
  func_0x000100db5ec0(param_1 + _DAT_11306fb00);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fb08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fb10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fb18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fb20));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fb28));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fb30));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fb58));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fb60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306fb68));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11306fb70));
  lVar1 = param_1 + _DAT_11306fb78;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  func_0x0001000b44c0(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306fb80));
  return;
}



/* Entry: 10433de4c; end: 10433de53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433de4c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003750d0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306fb90) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10433de54; end: 10433de9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433de54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306fb90) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433dea0; end: 10433e287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10433dea0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
                    undefined8 *param_21,undefined8 param_22)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *aplStack_c0 [6];
  undefined1 auStack_90 [32];
  
  lVar5 = param_3;
  func_0x0001003746a4();
  lVar6 = lVar5;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306fab0,0);
  lVar4 = _DAT_11306fab8;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306fab8,0);
  lVar1 = lVar6 + _DAT_11306faf8;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  lVar1 = lVar6 + _DAT_11306fb00;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  lVar1 = _DAT_11306fb58;
  lVar7 = 0;
  func_0x00010433bcb4();
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(long *)(lVar6 + lVar1) = lVar7;
  *(undefined8 *)(lVar6 + _DAT_11306fb60) = 0;
  lVar1 = _DAT_11306fb68;
  uVar8 = 0;
  FUN_10433c99c();
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined8 *)(lVar6 + lVar1) = uVar8;
  lVar1 = _DAT_11306fb70;
  lVar7 = 0;
  func_0x00010433ca58();
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(long *)(lVar6 + lVar1) = lVar7;
  *(long *)(lVar6 + _DAT_11306faa8) = param_3;
  _swift_beginAccess(lVar6 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_4);
  *(undefined8 *)(lVar6 + _DAT_11306fac0) = param_5;
  puVar2 = (undefined8 *)(lVar6 + _DAT_11306fac8);
  *puVar2 = param_6;
  puVar2[1] = param_7;
  *(undefined8 *)(lVar6 + _DAT_11306fad0) = param_1;
  *(undefined8 *)(lVar6 + _DAT_11306fad8) = param_2;
  *(undefined8 *)(lVar6 + _DAT_11306fae0) = param_8;
  *(undefined8 *)(lVar6 + _DAT_11306fae8) = param_9;
  *(undefined8 *)(lVar6 + _DAT_11306faf0) = param_10;
  *(undefined8 *)(lVar6 + _DAT_11306fb08) = param_11;
  *(undefined8 *)(lVar6 + _DAT_11306fb10) = param_12;
  *(undefined8 *)(lVar6 + _DAT_11306fb18) = param_13;
  *(undefined8 *)(lVar6 + _DAT_11306fb20) = param_14;
  puVar2 = (undefined8 *)(lVar6 + _DAT_11306fb28);
  *puVar2 = param_15;
  puVar2[1] = param_16;
  puVar2 = (undefined8 *)(lVar6 + _DAT_11306fb30);
  *puVar2 = param_17;
  puVar2[1] = param_18;
  *(undefined1 *)(lVar6 + _DAT_11306fb38) = (undefined1)param_19;
  *(undefined1 *)(lVar6 + _DAT_11306fb40) = param_19._1_1_;
  *(undefined1 *)(lVar6 + _DAT_11306fb48) = param_19._2_1_;
  *(undefined1 *)(lVar6 + _DAT_11306fb50) = param_19._3_1_;
  puVar2 = (undefined8 *)(lVar6 + _DAT_11306fb78);
  uVar10 = *(undefined8 *)((long)param_21 + 0x21);
  uVar8 = *(undefined8 *)((long)param_21 + 0x19);
  uVar13 = *param_21;
  uVar12 = param_21[3];
  uVar11 = param_21[2];
  puVar2[1] = param_21[1];
  *puVar2 = uVar13;
  puVar2[3] = uVar12;
  puVar2[2] = uVar11;
  *(undefined8 *)((long)puVar2 + 0x21) = uVar10;
  *(undefined8 *)((long)puVar2 + 0x19) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_11306fb80) = param_22;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _swift_unknownObjectRetain(param_15);
  _swift_unknownObjectRetain(param_17);
  func_0x0001033b08e8(param_21,aplStack_c0);
  puVar3 = PTR_s_init_1125d9248;
  lStack_d0 = lVar6;
  lStack_c8 = lVar5;
  _swift_bridgeObjectRetain(param_22);
  plVar9 = &lStack_d0;
  _objc_msgSendSuper2(plVar9,puVar3);
  aplStack_c0[0] = plVar9;
  func_0x00010008a7c8(&uStack_d8,aplStack_c0);
  func_0x000100083b20(aplStack_c0);
  _swift_release(uStack_d8);
  _swift_unknownObjectRelease(aplStack_c0[0]);
  return plVar9;
}



/* Entry: 10433e288; end: 10433e2e7; -[_TtC17PlayGamesServices22PlayGamesScopeServices init] */

void FUN_10433e288(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesScopeServices",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433e2b4);
  (*pcVar1)();
}



/* Entry: 10433e2e8; end: 10433e30b; -[_TtC17PlayGamesServices22PlayGamesScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433e2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306fb90));
  return;
}



/* Entry: 10433e30c; end: 10433e3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433e30c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306fbe8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433e3a4; end: 10433e403; -[_TtC17PlayGamesServices24PlayGamesSendingServices init] */

void FUN_10433e3a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PlayGamesServices.PlayGamesSendingServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433e3d0);
  (*pcVar1)();
}



/* Entry: 10433e404; end: 10433e413; -[_TtC17PlayGamesServices24PlayGamesSendingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433e404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306fbe8));
  return;
}



/* Entry: 10433e414; end: 10433e433;  */

void FUN_10433e414(void)

{
  _objc_opt_self(&PTR_PTR_11299f2e8);
  return;
}



/* Entry: 10433e434; end: 10433e4df;  */

void FUN_10433e434(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10433e4e0; end: 10433e66b;  */

void FUN_10433e4e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cc90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced170;
  func_0x000107c61520(&UNK_10dced170,&UNK_11075c198);
  puRam0000000112f1cc90 = puVar1;
  return;
}



/* Entry: 10433e66c; end: 10433e697;  */

long FUN_10433e66c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10433e698; end: 10433e763;  */

/* WARNING: Possible PIC construction at 0x000102e12740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e12744) */

long FUN_10433e698(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  char in_stack_00000020;
  
  if (in_stack_00000020 == '\x04') {
    _swift_bridgeObjectRetain(param_2);
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)
                (param_4,param_4,param_5,param_6,param_7,param_8,param_9,param_10,unaff_x24,
                 unaff_x23,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
      return param_4;
    }
    return param_3;
  }
  if (in_stack_00000020 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return param_1;
  }
  return param_1;
}



/* Entry: 10433e764; end: 10433e7ab;  */

void FUN_10433e764(undefined8 *param_1)

{
  FUN_10433e7ac(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],
                *(undefined1 *)(param_1 + 0xc));
  return;
}



/* Entry: 10433e7ac; end: 10433ea3b;  */

/* WARNING: Possible PIC construction at 0x000102e17d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e17d88) */

long FUN_10433e7ac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  char in_stack_00000020;
  
  if (in_stack_00000020 == '\x04') {
    _swift_bridgeObjectRelease(param_2);
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
                (param_4,param_4,param_5,param_6,param_7,param_8,param_9,param_10,unaff_x24,
                 unaff_x23,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
      return param_4;
    }
    return param_3;
  }
  if (in_stack_00000020 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return param_1;
  }
  return param_1;
}



/* Entry: 10433ea3c; end: 10433eab7;  */

undefined8 * FUN_10433ea3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = *(undefined1 *)(param_2 + 0xc);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar4 = param_1[10];
  uVar8 = param_1[0xb];
  uVar10 = *(undefined1 *)(param_1 + 0xc);
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  *(undefined1 *)(param_1 + 0xc) = uVar9;
  FUN_10433e7ac(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 10433eab8; end: 10433ebbf;  */

int FUN_10433eab8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x61) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 0x18) ^ 0xff;
  if (*(byte *)(param_1 + 0x18) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10433ebc0; end: 10433ec6b;  */

void FUN_10433ebc0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10433ec6c; end: 10433ec7f;  */

bool FUN_10433ec6c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10433ec80; end: 10433ece7;  */

uint FUN_10433ec80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_10433ece8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10433ece8; end: 10433f1c7;  */

ulong FUN_10433ece8(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_340 [80];
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  uStack_f0 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = (uint)(uVar4 >> 0x20);
  uVar6 = uVar5 >> 0x1d;
  if (uVar5 >> 0x1d < 3) {
    if (uVar6 == 0) {
      uStack_e8 = uVar4 & 0x1fffffffffffffff;
      uStack_d8 = param_1[4];
      uStack_e0 = param_1[3];
      uStack_d0 = param_1[5];
      uStack_c8 = param_1[6];
      uStack_b8 = param_1[8];
      uStack_c0 = param_1[7];
      uStack_b0 = param_1[9];
      uStack_a8 = param_1[10];
      uStack_98 = param_1[0xc];
      uStack_a0 = param_1[0xb];
      uStack_150 = param_2[2];
      if (uStack_150 >> 0x3d == 0) {
        uStack_160 = *param_2;
        uStack_158 = param_2[1];
        uStack_140 = param_2[4];
        uStack_148 = param_2[3];
        uStack_130 = param_2[6];
        uStack_138 = param_2[5];
        uStack_120 = param_2[8];
        uStack_128 = param_2[7];
        uStack_110 = param_2[10];
        uStack_118 = param_2[9];
        uStack_100 = param_2[0xc];
        uStack_108 = param_2[0xb];
        uVar5 = (uint)uStack_150;
        uStack_f8 = uVar2;
        if ((((uVar2 == uStack_160) && (uStack_f0 == uStack_158)) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar2,uStack_f0,uStack_160,uStack_158,0), (uVar2 & 1) != 0)) &&
           (((uint)uVar4 & 0xff) == (uVar5 & 0xff))) {
          uStack_1d8 = uStack_b8;
          uStack_1e0 = uStack_c0;
          uStack_1c8 = uStack_a8;
          uStack_1d0 = uStack_b0;
          uStack_1f8 = uStack_d8;
          uStack_200 = uStack_e0;
          uStack_1e8 = uStack_c8;
          uStack_1f0 = uStack_d0;
          uStack_198 = uStack_130;
          uStack_1a0 = uStack_138;
          uStack_188 = uStack_120;
          uStack_190 = uStack_128;
          uStack_178 = uStack_110;
          uStack_180 = uStack_118;
          uStack_168 = uStack_100;
          uStack_170 = uStack_108;
          uStack_1b8 = uStack_98;
          uStack_1c0 = uStack_a0;
          uStack_1a8 = uStack_140;
          uStack_1b0 = uStack_148;
          if (uStack_d8 == 0) {
            if (uStack_140 == 0) {
              uStack_278 = uStack_b8;
              uStack_280 = uStack_c0;
              uStack_268 = uStack_a8;
              uStack_270 = uStack_b0;
              uStack_258 = uStack_98;
              uStack_260 = uStack_a0;
              uStack_298 = uStack_d8;
              uStack_2a0 = uStack_e0;
              uStack_288 = uStack_c8;
              uStack_290 = uStack_d0;
              func_0x000102e17b28(&uStack_e0,&uStack_90);
              func_0x000102e17b28(&uStack_148,&uStack_90);
              FUN_10433f744(&uStack_2a0,0x112e55fd0,&UNK_10da58ae0);
              uVar5 = 1;
              goto LAB_10433f158;
            }
          }
          else if (uStack_140 != 0) {
            uStack_2c8 = uStack_120;
            uStack_2d0 = uStack_128;
            uStack_2b8 = uStack_110;
            uStack_2c0 = uStack_118;
            uStack_2e8 = uStack_140;
            uStack_2f0 = uStack_148;
            uStack_2d8 = uStack_130;
            uStack_2e0 = uStack_138;
            uStack_278 = uStack_120;
            uStack_280 = uStack_128;
            uStack_268 = uStack_110;
            uStack_270 = uStack_118;
            uStack_258 = uStack_100;
            uStack_260 = uStack_108;
            uStack_288 = uStack_130;
            uStack_290 = uStack_138;
            uStack_2a8 = uStack_100;
            uStack_2b0 = uStack_108;
            uStack_298 = uStack_140;
            uStack_2a0 = uStack_148;
            uStack_58 = uStack_a8;
            uStack_60 = uStack_b0;
            uStack_48 = uStack_98;
            uStack_50 = uStack_a0;
            uStack_78 = uStack_c8;
            uStack_80 = uStack_d0;
            uStack_68 = uStack_b8;
            uStack_70 = uStack_c0;
            uStack_88 = uStack_d8;
            uStack_90 = uStack_e0;
            puVar3 = &uStack_90;
            FUN_10433b118(puVar3,&uStack_2a0);
            uVar5 = (uint)puVar3;
            func_0x000102e17b28(&uStack_e0,auStack_340);
            func_0x000102e17b28(&uStack_148,auStack_340);
            FUN_10433f744(&uStack_2f0,0x112e55fd0,&UNK_10da58ae0);
            FUN_10433f744(&uStack_200,0x112e55fd0,&UNK_10da58ae0);
            goto LAB_10433f158;
          }
          uStack_238 = uStack_130;
          uStack_240 = uStack_138;
          uStack_228 = uStack_120;
          uStack_230 = uStack_128;
          uStack_218 = uStack_110;
          uStack_220 = uStack_118;
          uStack_208 = uStack_100;
          uStack_210 = uStack_108;
          uStack_278 = uStack_b8;
          uStack_280 = uStack_c0;
          uStack_268 = uStack_a8;
          uStack_270 = uStack_b0;
          uStack_258 = uStack_98;
          uStack_260 = uStack_a0;
          uStack_248 = uStack_140;
          uStack_250 = uStack_148;
          uStack_298 = uStack_d8;
          uStack_2a0 = uStack_e0;
          uStack_288 = uStack_c8;
          uStack_290 = uStack_d0;
          func_0x000102e17b28(&uStack_e0,&uStack_90);
          func_0x000102e17b28(&uStack_148,&uStack_90);
          FUN_10433f744(&uStack_2a0,0x11306fc20,&UNK_10dced2d0);
        }
      }
    }
    else if (uVar6 == 1) {
      if (param_2[2] >> 0x3d == 1) {
        uVar7 = *param_2;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar3 = param_2;
        _objc_release(uVar2);
        func_0x00010c094540();
LAB_10433efd0:
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(uVar7);
        if ((uVar4 == uVar2) && (param_2 == puVar3)) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(puVar3);
          uVar5 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,param_2,uVar2,puVar3,0);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(puVar3);
          uVar5 = (uint)uVar4;
        }
        goto LAB_10433f158;
      }
    }
    else if (param_2[2] >> 0x3d == 2) {
      uVar7 = *param_2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      puVar3 = param_2;
      _objc_release(uVar2);
      func_0x00010c094540();
      goto LAB_10433efd0;
    }
  }
  else if (uVar6 < 5) {
    if (uVar6 == 3) {
      if (param_2[2] >> 0x3d == 3) {
        uVar7 = *param_2;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar3 = param_2;
        _objc_release(uVar2);
        func_0x00010c094540();
        goto LAB_10433efd0;
      }
    }
    else if ((long)param_2[2] < -0x6000000000000000) {
      if ((uVar2 != *param_2) || (uStack_f0 != param_2[1])) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(uVar2,uStack_f0,*param_2,param_2[1],0);
        return uVar2;
      }
LAB_10433f0b8:
      uVar5 = 1;
      goto LAB_10433f158;
    }
  }
  else if (uVar6 == 5) {
    if (param_2[2] >> 0x3d == 5) {
      uVar5 = (uint)((((uint)*param_2 ^ (uint)uVar2) & 0xff) == 0);
      goto LAB_10433f158;
    }
  }
  else if ((param_2[2] >> 0x3d == 6) && (param_2[2] == 0xc000000000000000)) {
    uVar2 = param_2[10];
    uVar4 = param_2[9];
    uVar25 = param_2[0xc];
    uVar7 = param_2[0xb];
    uVar27 = param_2[8];
    uVar26 = param_2[7];
    bVar8 = (byte)param_2[5] | (byte)uVar4 | (byte)uVar26 | (byte)uVar7;
    bVar9 = *(byte *)((long)param_2 + 0x29) | (byte)(uVar4 >> 8) |
            (byte)(uVar26 >> 8) | (byte)(uVar7 >> 8);
    bVar10 = *(byte *)((long)param_2 + 0x2a) | (byte)(uVar4 >> 0x10) |
             (byte)(uVar26 >> 0x10) | (byte)(uVar7 >> 0x10);
    bVar11 = *(byte *)((long)param_2 + 0x2b) | (byte)(uVar4 >> 0x18) |
             (byte)(uVar26 >> 0x18) | (byte)(uVar7 >> 0x18);
    bVar12 = *(byte *)((long)param_2 + 0x2c) | (byte)(uVar4 >> 0x20) |
             (byte)(uVar26 >> 0x20) | (byte)(uVar7 >> 0x20);
    bVar13 = *(byte *)((long)param_2 + 0x2d) | (byte)(uVar4 >> 0x28) |
             (byte)(uVar26 >> 0x28) | (byte)(uVar7 >> 0x28);
    bVar14 = *(byte *)((long)param_2 + 0x2e) | (byte)(uVar4 >> 0x30) |
             (byte)(uVar26 >> 0x30) | (byte)(uVar7 >> 0x30);
    bVar15 = *(byte *)((long)param_2 + 0x2f) | (byte)(uVar4 >> 0x38) |
             (byte)(uVar26 >> 0x38) | (byte)(uVar7 >> 0x38);
    bVar16 = (byte)param_2[6] | (byte)uVar2 | (byte)uVar27 | (byte)uVar25;
    bVar17 = *(byte *)((long)param_2 + 0x31) | (byte)(uVar2 >> 8) |
             (byte)(uVar27 >> 8) | (byte)(uVar25 >> 8);
    bVar18 = *(byte *)((long)param_2 + 0x32) | (byte)(uVar2 >> 0x10) |
             (byte)(uVar27 >> 0x10) | (byte)(uVar25 >> 0x10);
    bVar19 = *(byte *)((long)param_2 + 0x33) | (byte)(uVar2 >> 0x18) |
             (byte)(uVar27 >> 0x18) | (byte)(uVar25 >> 0x18);
    bVar20 = *(byte *)((long)param_2 + 0x34) | (byte)(uVar2 >> 0x20) |
             (byte)(uVar27 >> 0x20) | (byte)(uVar25 >> 0x20);
    bVar21 = *(byte *)((long)param_2 + 0x35) | (byte)(uVar2 >> 0x28) |
             (byte)(uVar27 >> 0x28) | (byte)(uVar25 >> 0x28);
    bVar22 = *(byte *)((long)param_2 + 0x36) | (byte)(uVar2 >> 0x30) |
             (byte)(uVar27 >> 0x30) | (byte)(uVar25 >> 0x30);
    bVar23 = *(byte *)((long)param_2 + 0x37) | (byte)(uVar2 >> 0x38) |
             (byte)(uVar27 >> 0x38) | (byte)(uVar25 >> 0x38);
    auVar24[1] = bVar9;
    auVar24[0] = bVar8;
    auVar24[2] = bVar10;
    auVar24[3] = bVar11;
    auVar24[4] = bVar12;
    auVar24[5] = bVar13;
    auVar24[6] = bVar14;
    auVar24[7] = bVar15;
    auVar24[8] = bVar16;
    auVar24[9] = bVar17;
    auVar24[10] = bVar18;
    auVar24[0xb] = bVar19;
    auVar24[0xc] = bVar20;
    auVar24[0xd] = bVar21;
    auVar24[0xe] = bVar22;
    auVar24[0xf] = bVar23;
    auVar1[1] = bVar9;
    auVar1[0] = bVar8;
    auVar1[2] = bVar10;
    auVar1[3] = bVar11;
    auVar1[4] = bVar12;
    auVar1[5] = bVar13;
    auVar1[6] = bVar14;
    auVar1[7] = bVar15;
    auVar1[8] = bVar16;
    auVar1[9] = bVar17;
    auVar1[10] = bVar18;
    auVar1[0xb] = bVar19;
    auVar1[0xc] = bVar20;
    auVar1[0xd] = bVar21;
    auVar1[0xe] = bVar22;
    auVar1[0xf] = bVar23;
    auVar24 = NEON_ext(auVar24,auVar1,8,1);
    if ((CONCAT17(bVar15 | auVar24[7],
                  CONCAT16(bVar14 | auVar24[6],
                           CONCAT15(bVar13 | auVar24[5],
                                    CONCAT14(bVar12 | auVar24[4],
                                             CONCAT13(bVar11 | auVar24[3],
                                                      CONCAT12(bVar10 | auVar24[2],
                                                               CONCAT11(bVar9 | auVar24[1],
                                                                        bVar8 | auVar24[0]))))))) ==
         0 && param_2[4] == 0) && ((param_2[3] == 0 && param_2[1] == 0) && *param_2 == 0))
    goto LAB_10433f0b8;
  }
  uVar5 = 0;
LAB_10433f158:
  return (ulong)(uVar5 & 1);
}



/* Entry: 10433f1c8; end: 10433f1cb;  */

void FUN_10433f1c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced240;
  _swift_getWitnessTable(&UNK_10dced240,&UNK_11075c3a8);
  puRam000000011306fc18 = puVar1;
  return;
}



/* Entry: 10433f1cc; end: 10433f20b;  */

void FUN_10433f1cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced240;
  _swift_getWitnessTable(&UNK_10dced240,&UNK_11075c3a8);
  puRam000000011306fc18 = puVar1;
  return;
}



/* Entry: 10433f20c; end: 10433f237;  */

long FUN_10433f20c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10433f238; end: 10433f277;  */

void FUN_10433f238(undefined8 *param_1)

{
  func_0x000102e17c90(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc]);
  return;
}



/* Entry: 10433f278; end: 10433f41b;  */

undefined8 * FUN_10433f278(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar4 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = param_2[8];
  uVar11 = param_2[9];
  uVar6 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xc];
  func_0x000102e1264c(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,
                      uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[10] = uVar6;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  return param_1;
}



/* Entry: 10433f41c; end: 10433f48f;  */

undefined8 * FUN_10433f41c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar9 = param_2[0xc];
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar10 = param_1[0xc];
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[0xb] = uVar17;
  param_1[10] = uVar16;
  param_1[0xc] = uVar9;
  func_0x000102e17c90(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar11,uVar12,uVar13,uVar14,
                      uVar10);
  return param_1;
}



/* Entry: 10433f490; end: 10433f743;  */

int FUN_10433f490(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 4) >> 2);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 10433f744; end: 10433f783;  */

undefined8 FUN_10433f744(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10433f784; end: 10433f797;  */

bool FUN_10433f784(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10433f798; end: 10433f86b;  */

void FUN_10433f798(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10433f86c; end: 10433f88b;  */

void FUN_10433f86c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10433f88c; end: 10433f8cb;  */

void FUN_10433f88c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306fc28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced2e0;
  _swift_getWitnessTable(&UNK_10dced2e0,&UNK_11075c470);
  puRam000000011306fc28 = puVar1;
  return;
}



/* Entry: 10433f8cc; end: 10433fa2f;  */

int FUN_10433f8cc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xef < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x10) {
      iVar2 = 4;
    }
    if (param_2 + 0x10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10433f948;
        goto LAB_10433f92c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10433f92c:
      return ((uint)*param_1 | uVar1 << 8) - 0x10;
    }
  }
LAB_10433f948:
  iVar2 = *param_1 - 0x11;
  if (*param_1 < 0x11) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10433fa30; end: 10433fa3f; -[LensProcessingUsageServices processingUsageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fa30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fc30));
  return;
}



/* Entry: 10433fa40; end: 10433fa8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fa40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306fc30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433fa8c; end: 10433faeb; -[LensProcessingUsageServices init] */

void FUN_10433fa8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensProcessingUsageServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433fab8);
  (*pcVar1)();
}



/* Entry: 10433faec; end: 10433fafb; -[LensProcessingUsageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433faec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306fc30));
  return;
}



/* Entry: 10433fafc; end: 10433fb07; -[SCLensCorePerformanceEvent lensCoreId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fafc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fc60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fc60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433fb08; end: 10433fb13; -[SCLensCorePerformanceEvent contextId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fb08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fc68);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fc68))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433fb14; end: 10433fb23; -[SCLensCorePerformanceEvent requestedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10433fb14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306fc70);
}



/* Entry: 10433fb24; end: 10433fb33; -[SCLensCorePerformanceEvent executedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10433fb24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306fc78);
}



/* Entry: 10433fb34; end: 10433fbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc68);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc78) = param_2;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433fbd8; end: 10433fc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc68);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc78) = param_2;
  func_0x000100471780();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433fc40; end: 10433fce7; -[SCLensCorePerformanceEvent initWithLensCoreId:contextId:requestedTime:executedTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fc40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_3 + _DAT_11306fc60);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_11306fc68);
  *puVar1 = param_6;
  puVar1[1] = uVar2;
  *(undefined8 *)(param_3 + _DAT_11306fc70) = param_1;
  *(undefined8 *)(param_3 + _DAT_11306fc78) = param_2;
  func_0x000100471780();
  lStack_50 = param_3;
  uStack_48 = param_6;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433fce8; end: 10433fd13; -[SCLensCorePerformanceEvent init] */

void FUN_10433fce8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingUsageApi.LensCorePerformanceEvent",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10433fd14);
  (*pcVar1)();
}



/* Entry: 10433fd14; end: 10433fd1f;  */

void FUN_10433fd14(void)

{
  (*(code *)&SUB_100471780)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433fd20; end: 10433fd5f; -[SCLensCorePerformanceEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fd20(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306fc60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306fc68 + 8))
  ;
  return;
}



/* Entry: 10433fd60; end: 10433fd6b; -[SCLensCoreUsageEvent lensCoreId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fd60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fc80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fc80))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433fd6c; end: 10433fd77; -[SCLensCoreUsageEvent contextId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fd6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306fc88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306fc88))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433fd78; end: 10433fdbf;  */

void FUN_10433fd78(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10433fdc0; end: 10433fdcf; -[SCLensCoreUsageEvent lensUsage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fdc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306fc90));
  return;
}



/* Entry: 10433fdd0; end: 10433fe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433fdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306fc88);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306fc90) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}


