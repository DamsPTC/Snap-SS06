/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011c820c; end: 1011c8217; -[SCDWebExplainerTrayDeepLinkEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c820c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65410;
  func_0x000107c61428(param_1 + _DAT_112d65410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c8218; end: 1011c826b;  */

void FUN_1011c8218(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c826c; end: 1011c83af; -[SCDWebExplainerTrayDeepLinkEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001011c8338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c834c) */
/* WARNING: Removing unreachable block (ram,0x0001011c833c) */
/* WARNING: Removing unreachable block (ram,0x0001011c836c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c826c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar5 = param_1;
  if (lVar2 != 0) {
    func_0x000107c4e270();
    func_0x000107c61180();
    lVar5 = lVar2;
    if (param_1 != 0) {
      FUN_1011c8184(0);
      func_0x000107c613fc();
      func_0x000107c4e9e4(lVar2);
      func_0x000107c61180();
      lVar3 = 0;
      FUN_1011c7ed8();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(long *)(lVar4 + _DAT_112d65340) = param_1;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(param_1);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000107c4fba8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1011c83b0; end: 1011c83f3; -[SCDWebExplainerTrayDeepLinkEntryPoint end] */

void FUN_1011c83b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c83f4; end: 1011c858b;  */

void FUN_1011c83f4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5ad0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "DWebExplainerTrayDeepLink/SCDWebExplainerTrayDeepLinkEntryPoint.swift",
                            0x45,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c858c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c571c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c858c; end: 1011c8637; -[SCDWebExplainerTrayDeepLinkEntryPoint setValue:forIvarName:] */

void FUN_1011c858c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011c83f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c8638; end: 1011c86ab; -[SCDWebExplainerTrayDeepLinkEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8638(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d65408,0);
  func_0x000107c61614(param_1 + _DAT_112d65410,0);
  *(undefined8 *)(param_1 + _DAT_112d65418) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c86ac; end: 1011c86df;  */

void FUN_1011c86ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c86e0; end: 1011c8727; -[SCDWebExplainerTrayDeepLinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c86e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d65408);
  func_0x000107c61610(param_1 + _DAT_112d65410);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d65418));
  return;
}



/* Entry: 1011c8728; end: 1011c8747;  */

void FUN_1011c8728(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6e18);
  return;
}



/* Entry: 1011c8748; end: 1011c8893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011c8748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_80 [8];
  long lStack_70;
  long lStack_68;
  
  puVar7 = auStack_80;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d65448) = param_1;
  func_0x000107c61174(param_1);
  uVar3 = param_1;
  func_0x00010451338c();
  lVar4 = 0;
  FUN_1011c8c6c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112d65480;
  func_0x000107c61614(lVar5 + _DAT_112d65480,0);
  func_0x000107c61604(lVar5 + lVar2,uVar3);
  *(undefined8 *)(lVar5 + _DAT_112d65488) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112d65490) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  plVar6 = &lStack_70;
  func_0x000107c61154(plVar6,puVar1);
  func_0x000107c61170(uVar3);
  *(long **)(unaff_x20 + _DAT_112d65450) = plVar6;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar7;
}



/* Entry: 1011c8894; end: 1011c88f3; -[_TtC29DWebExplainerTrayPageLauncher39DWebExplainerTrayPageLauncherEntryPoint init] */

void FUN_1011c8894(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayPageLauncher.DWebExplainerTrayPageLauncherEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c88c0);
  (*pcVar1)();
}



/* Entry: 1011c88f4; end: 1011c896f; -[_TtC29DWebExplainerTrayPageLauncher39DWebExplainerTrayPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011c8910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c8914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c88f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65448));
  return;
}



/* Entry: 1011c8970; end: 1011c8977;  */

undefined8 FUN_1011c8970(void)

{
  return 0;
}



/* Entry: 1011c8978; end: 1011c8a07; -[_TtC29DWebExplainerTrayPageLauncher39DWebExplainerTrayPageLauncherEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8978(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d65450);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1011c8a08; end: 1011c8a0b; -[_TtC29DWebExplainerTrayPageLauncher39DWebExplainerTrayPageLauncherEntryPoint setHandlers:] */

void FUN_1011c8a08(void)

{
  return;
}



/* Entry: 1011c8a0c; end: 1011c8a2b;  */

void FUN_1011c8a0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6ee0);
  return;
}



/* Entry: 1011c8a2c; end: 1011c8acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011c8a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112d65480;
  func_0x000107c61614(unaff_x20 + _DAT_112d65480,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d65488) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d65490) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1011c8ad0; end: 1011c8b2f; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler init] */

void FUN_1011c8ad0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayPageLauncher.DWebExplainerTrayPageLauncherHandler",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c8afc);
  (*pcVar1)();
}



/* Entry: 1011c8b30; end: 1011c8b77; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011c8b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c8b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8b30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d65480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65488));
  return;
}



/* Entry: 1011c8b78; end: 1011c8b7f; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler screen] */

undefined8 FUN_1011c8b78(void)

{
  return 0x21;
}



/* Entry: 1011c8b80; end: 1011c8c0f; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x0001011c8bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c8bf4) */

void FUN_1011c8b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1011c8c8c(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011c8c10; end: 1011c8c5b; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler dWebExplainerTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8c10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d65488);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1011c8c5c; end: 1011c8c63; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler numberOfUsersPresent] */

undefined8 FUN_1011c8c5c(void)

{
  return 0;
}



/* Entry: 1011c8c64; end: 1011c8c6b; -[_TtC29DWebExplainerTrayPageLauncher36DWebExplainerTrayPageLauncherHandler numberOfUsersPresentOnWeb] */

undefined8 FUN_1011c8c64(void)

{
  return 0;
}



/* Entry: 1011c8c6c; end: 1011c8c8b;  */

void FUN_1011c8c6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6fa8);
  return;
}



/* Entry: 1011c8c8c; end: 1011c8dcf;  */

/* WARNING: Possible PIC construction at 0x0001011c8d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c8d5c) */
/* WARNING: Removing unreachable block (ram,0x0001011c8d60) */
/* WARNING: Removing unreachable block (ram,0x0001011c8db8) */
/* WARNING: Removing unreachable block (ram,0x0001011c8d7c) */
/* WARNING: Removing unreachable block (ram,0x0001011c8d10) */
/* WARNING: Removing unreachable block (ram,0x0001011c8d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8c8c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d65490);
    func_0x000107c615f0();
    func_0x000107c3ed44(uVar1);
    func_0x000107c61180();
    func_0x000107c42c1c(*(undefined8 *)(param_2 + _DAT_112d65488));
    (**(code **)(param_3 + 0x10))(param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  param_2 = param_2 + _DAT_112d65480;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1011c8dd0; end: 1011c8ddb; -[SCDWebExplainerTrayPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8dd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d654c0;
  func_0x000107c61428(param_1 + _DAT_112d654c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c8ddc; end: 1011c8de7; -[SCDWebExplainerTrayPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d654c0;
  func_0x000107c61428(param_1 + _DAT_112d654c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c8de8; end: 1011c8df3; -[SCDWebExplainerTrayPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8de8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d654c8;
  func_0x000107c61428(param_1 + _DAT_112d654c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c8df4; end: 1011c8dff; -[SCDWebExplainerTrayPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d654c8;
  func_0x000107c61428(param_1 + _DAT_112d654c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c8e00; end: 1011c8e0b; -[SCDWebExplainerTrayPageLauncherEntryPoint dWebExplainerTrayScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d654d0;
  func_0x000107c61428(param_1 + _DAT_112d654d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c8e0c; end: 1011c8e4f;  */

void FUN_1011c8e0c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c8e50; end: 1011c8e5b; -[SCDWebExplainerTrayPageLauncherEntryPoint setDWebExplainerTrayScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d654d0;
  func_0x000107c61428(param_1 + _DAT_112d654d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c8e5c; end: 1011c8eaf;  */

void FUN_1011c8e5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c8eb0; end: 1011c8ef7; -[SCDWebExplainerTrayPageLauncherEntryPoint scopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8eb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d654d8;
  func_0x000107c61428(param_1 + _DAT_112d654d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011c8ef8; end: 1011c8f5b; -[SCDWebExplainerTrayPageLauncherEntryPoint setScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d654d8;
  func_0x000107c61428(param_1 + _DAT_112d654d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011c8f5c; end: 1011c91c3;  */

/* WARNING: Possible PIC construction at 0x0001011c90bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c90e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c90f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c9120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c9130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c9140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c9194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c9184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c9198) */
/* WARNING: Removing unreachable block (ram,0x0001011c9144) */
/* WARNING: Removing unreachable block (ram,0x0001011c9134) */
/* WARNING: Removing unreachable block (ram,0x0001011c9124) */
/* WARNING: Removing unreachable block (ram,0x0001011c90f8) */
/* WARNING: Removing unreachable block (ram,0x0001011c90e8) */
/* WARNING: Removing unreachable block (ram,0x0001011c90c0) */
/* WARNING: Removing unreachable block (ram,0x0001011c9188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c8f5c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c411e4();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c51968();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar5 = 0;
        FUN_1011c8a0c();
        func_0x000107c610f8();
        *(long *)(lVar5 + _DAT_112d65448) = lVar2;
        func_0x000107c61174();
        func_0x000107c61174(lVar3);
        func_0x000107c61174();
        func_0x000107c61174();
        lVar2 = unaff_x20;
        func_0x00010451338c();
        lVar6 = 0;
        FUN_1011c8c6c();
        lVar5 = lVar6;
        func_0x000107c610f8();
        lVar3 = _DAT_112d65480;
        func_0x000107c61614(lVar5 + _DAT_112d65480,0);
        func_0x000107c61604(lVar5 + lVar3,lVar2);
        *(long *)(lVar5 + _DAT_112d65488) = unaff_x20;
        *(long *)(lVar5 + _DAT_112d65490) = lVar4;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar5;
        lStack_68 = lVar6;
        func_0x000107c61174(lVar4);
        func_0x000107c61174(unaff_x20);
        func_0x000107c61154(&lStack_70,puVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011c91c4; end: 1011c91eb; -[SCDWebExplainerTrayPageLauncherEntryPoint begin] */

void FUN_1011c91c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011c8f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c91ec; end: 1011c922f; -[SCDWebExplainerTrayPageLauncherEntryPoint end] */

void FUN_1011c91ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c9230; end: 1011c94a7;  */

void FUN_1011c9230(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10d4010)) ||
           (func_0x000107c605b8(0xd00000000000001e,0x800000010ef2bff0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53ddc();
        }
        else {
          uVar2 = 0x70784565706f6373;
          if (((param_2 != 0x70784565706f6373) || (param_3 != -0x13ffffff8d9a8c91)) &&
             (func_0x000107c605b8(0x70784565706f6373,0xec0000007265736f,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "DWebExplainerTrayPageLauncher/SCDWebExplainerTrayPageLauncherEntryPoint.swift"
                                ,0x4d,2,0x2f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c94a8);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58c60();
        }
        goto LAB_1011c92bc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
LAB_1011c92bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c94a8; end: 1011c9553; -[SCDWebExplainerTrayPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_1011c94a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011c9230(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c9554; end: 1011c95e7; -[SCDWebExplainerTrayPageLauncherEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c9554(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d654c0,0);
  func_0x000107c61614(param_1 + _DAT_112d654c8,0);
  func_0x000107c61614(param_1 + _DAT_112d654d0,0);
  *(undefined8 *)(param_1 + _DAT_112d654d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d654e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c95e8; end: 1011c961b;  */

void FUN_1011c95e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c961c; end: 1011c9683; -[SCDWebExplainerTrayPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011c9668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c966c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c961c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d654c0);
  func_0x000107c61610(param_1 + _DAT_112d654c8);
  func_0x000107c61610(param_1 + _DAT_112d654d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d654d8));
  return;
}



/* Entry: 1011c9684; end: 1011c96a3;  */

void FUN_1011c9684(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7078);
  return;
}



/* Entry: 1011c96a4; end: 1011c973b;  */

undefined8
FUN_1011c96a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011c9774(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return uVar1;
}



/* Entry: 1011c973c; end: 1011c9757;  */

void FUN_1011c973c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 1011c9758; end: 1011c9773;  */

void FUN_1011c9758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c9774; end: 1011c9f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011c9774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  long *plVar22;
  undefined8 unaff_x20;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x0001000285a8(0x112d655a8,&UNK_10d92a3b8);
  func_0x000107c5da38();
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar7 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar8 = *(undefined8 *)(param_5 + _DAT_113083868);
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  puVar10 = PTR_PTR_1126a6510;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112e55030);
  uVar23 = ((undefined8 *)(param_1 + _DAT_112e55030))[1];
  func_0x000107c61434(uVar23);
  func_0x000107c5fadc(uVar8,uVar23);
  func_0x000107c6142c(uVar23);
  func_0x000107c54f58(puVar10);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112e55038);
  uVar23 = ((undefined8 *)(param_1 + _DAT_112e55038))[1];
  func_0x000107c61434(uVar23);
  func_0x000107c5fadc(uVar8,uVar23);
  func_0x000107c6142c(uVar23);
  func_0x000107c54f68(puVar10);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112e55040);
  uVar23 = ((undefined8 *)(param_1 + _DAT_112e55040))[1];
  func_0x000107c61434(uVar23);
  func_0x000107c5fadc(uVar8,uVar23);
  func_0x000107c6142c(uVar23);
  func_0x000107c560c8(puVar10);
  func_0x000107c61170(uVar8);
  uVar23 = *(undefined8 *)(param_1 + _DAT_112e55048);
  uVar8 = uVar23;
  func_0x000107c61434(uVar23);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar23);
  func_0x000107c53974(puVar10);
  func_0x000107c61170(uVar8);
  lVar11 = _DAT_112e55028;
  uVar24 = *(undefined8 *)(param_1 + _DAT_112e55020);
  func_0x000107c61428(param_1 + _DAT_112e55028,auStack_78,0,0);
  lVar11 = param_1 + lVar11;
  func_0x000107c61618();
  uVar23 = *(undefined8 *)(param_1 + _DAT_112e55050);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e55050))[1];
  func_0x0001000285a8(0x112d655b0,&UNK_10d92a3c0);
  func_0x000107c615f0(uVar24);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c61434(uVar2);
  func_0x000107c4d490(param_4);
  func_0x000107c61180();
  uVar12 = param_4;
  func_0x000100759c94();
  func_0x000107c61170(param_4);
  uVar8 = 0x112d655b8;
  func_0x0001000285a8(0x112d655b8,&UNK_10db95230);
  uVar13 = 0;
  func_0x000100759f5c(0,1,FUN_1011c973c,0,uVar8);
  func_0x000107c61574(uVar12);
  lVar14 = 0;
  FUN_1011cb7dc();
  lVar15 = lVar14;
  func_0x000107c610f8();
  lVar3 = _DAT_112d65640;
  func_0x000107c61614(lVar15 + _DAT_112d65640,0);
  *(undefined8 *)(lVar15 + _DAT_112d65670) = 0;
  *(undefined8 *)(lVar15 + _DAT_112d65630) = uVar24;
  *(undefined8 *)(lVar15 + _DAT_112d65638) = uVar6;
  func_0x000107c61604(lVar15 + lVar3,lVar11);
  *(undefined8 *)(lVar15 + _DAT_112d65648) = uVar7;
  *(undefined **)(lVar15 + _DAT_112d65650) = puVar10;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112d65658);
  *puVar1 = uVar23;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar15 + _DAT_112d65660) = uVar13;
  *(undefined8 *)(lVar15 + _DAT_112d65668) = uVar9;
  lVar16 = 0;
  FUN_1011cb480();
  lVar17 = lVar16;
  func_0x000107c610f8();
  lVar3 = _DAT_112d655c0;
  func_0x000107c61614(lVar17 + _DAT_112d655c0,0);
  *(undefined8 *)(lVar17 + _DAT_112d655d8) = 0;
  lVar4 = _DAT_112d655f8;
  func_0x000107c61580(uVar9,3);
  func_0x000107c61580(uVar6,2);
  func_0x000107c61580(uVar7,2);
  func_0x000107c61174();
  func_0x000107c61580(uVar13,2);
  func_0x000107c615f0(uVar24);
  func_0x000107c61174();
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(lVar11);
  pcVar18 = "SCGroupJoinPermissionTrayViewController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar17 + lVar4) = pcVar18;
  func_0x000107c61604(lVar17 + lVar3,lVar11);
  *(undefined8 *)(lVar17 + _DAT_112d655c8) = uVar7;
  *(undefined8 *)(lVar17 + _DAT_112d655d0) = uVar6;
  *(undefined **)(lVar17 + _DAT_112d655e0) = puVar10;
  puVar1 = (undefined8 *)(lVar17 + _DAT_112d655e8);
  *puVar1 = uVar23;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar17 + _DAT_112d655f0) = uVar13;
  *(undefined8 *)(lVar17 + _DAT_112d65600) = uVar9;
  puVar21 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_88 = lVar17;
  lStack_80 = lVar16;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar13);
  plVar19 = &lStack_88;
  func_0x000107c61154(plVar19,puVar21,0,0);
  func_0x000107c61180();
  plVar20 = plVar19;
  FUN_1011ca014();
  func_0x000107c615e8(lVar11);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(puVar10);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar9);
  uVar8 = *(undefined8 *)((long)plVar19 + _DAT_112d655d8);
  *(long **)((long)plVar19 + _DAT_112d655d8) = plVar20;
  func_0x000107c61170(plVar19);
  func_0x000107c61170(uVar8);
  *(long **)(lVar15 + _DAT_112d65678) = plVar19;
  plVar19 = &lStack_98;
  lStack_98 = lVar15;
  lStack_90 = lVar14;
  func_0x000107c61154(plVar19,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  plVar20 = plVar19;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (plVar20 != (long *)0x0) {
    puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(plVar20);
    func_0x000107c61170(plVar20);
    func_0x000107c61170(puVar21);
    func_0x000107c5677c(plVar19);
    func_0x000107c61170(plVar19);
    puVar21 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e84();
    func_0x000107c5a074();
    func_0x000107c52684(puVar21);
    func_0x000107c5a070(puVar21);
    func_0x000107c5921c(puVar21);
    func_0x000107c539d4(0x4034000000000000,puVar21);
    lVar3 = _DAT_112d65670;
    uVar8 = *(undefined8 *)((long)plVar19 + _DAT_112d65670);
    *(undefined **)((long)plVar19 + _DAT_112d65670) = puVar21;
    func_0x000107c61170(uVar8);
    plVar22 = *(long **)((long)plVar19 + lVar3);
    plVar20 = plVar19;
    if (plVar22 != (long *)0x0) {
      func_0x000107c61174();
      func_0x000107c4ef1c();
      func_0x000107c61170(plVar19);
      plVar20 = plVar22;
    }
    func_0x000107c61170(plVar20);
    func_0x000107c615e8(uVar24);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(lVar11);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(uVar9);
    func_0x000107c3e2c0(uVar24);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(plVar19);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1011c9f04);
  (*pcVar5)();
}



/* Entry: 1011c9f04; end: 1011c9f23;  */

void FUN_1011c9f04(void)

{
  func_0x000107c61168(&PTR_PTR_112d65550);
  return;
}



/* Entry: 1011c9f24; end: 1011ca013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1011c9f24(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d655d8);
  if (lVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e07c();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ca014);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517d0();
    func_0x000107c61170(lVar2);
    dVar4 = dVar4 + param_1;
  }
  return dVar4;
}



/* Entry: 1011ca014; end: 1011ca213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011ca014(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  if (puStack_90 != (undefined *)0x0) {
    puVar2 = puStack_90;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_90);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126a6518;
      func_0x000107c610f8(PTR_PTR_1126a6518);
      func_0x000107c453e4();
      puVar6 = &UNK_1103900d8;
      puVar4 = puVar6;
      func_0x000107c613fc(&UNK_1103900d8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_1011cb4c4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103900f0;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c55980(puVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c613fc(&UNK_1103900d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      pcStack_70 = FUN_1011cb500;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110390118;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c55b7c(puVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x0001000d224c(&puStack_90);
      puVar6 = puStack_90;
      func_0x000107c5a3d0(puVar3);
      func_0x000107c615e8(puVar6);
      puVar6 = PTR_PTR_1126a6520;
      func_0x000107c610f8(PTR_PTR_1126a6520);
      func_0x000107c49520();
      func_0x000107c5a050();
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar3);
      return puVar6;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1011ca214; end: 1011ca2c3; -[_TtC34GroupJoinPermissionScopeEntryPoint39SCGroupJoinPermissionTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ca214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x000107c61614(param_1 + _DAT_112d655c0,0);
  *(undefined8 *)(param_1 + _DAT_112d655d8) = 0;
  lVar1 = _DAT_112d655f8;
  func_0x000107c61174(param_3);
  puVar3 = &UNK_10d92a3d0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "GroupJoinPermissionScopeEntryPoint/SCGroupJoinPermissionTrayViewController.swift"
                      ,0x50,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ca2c4);
  (*pcVar2)();
}



/* Entry: 1011ca2c4; end: 1011ca5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ca2c4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d655d8);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ca5b0);
      (*pcVar1)();
    }
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(lVar3);
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ca5b4);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5cbe4(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar6 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    *(long *)(lVar3 + 0x20) = lVar6;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ca5b8);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c4acb0(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar6 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    *(long *)(lVar3 + 0x28) = lVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ca5bc);
      (*pcVar1)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = unaff_x20;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    lVar5 = lVar2;
    func_0x000107c5ce8c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar6 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar3 + 0x30) = lVar6;
    lVar4 = lVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    FUN_1011c9f24();
    lVar5 = lVar4;
    func_0x000107c40290();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    *(long *)(lVar3 + 0x38) = lVar5;
    uVar8 = 0;
    FUN_1011cb528(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1011ca5bc; end: 1011ca5e3; -[_TtC34GroupJoinPermissionScopeEntryPoint39SCGroupJoinPermissionTrayViewController viewDidLoad] */

void FUN_1011ca5bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ca2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ca5e4; end: 1011ca68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ca5e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_1103900d8;
    func_0x000107c613fc(&UNK_1103900d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    func_0x00010075a04c(0,1,param_2,puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 1011ca690; end: 1011ca9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ca690(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined *)*param_1;
  lVar13 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((char)lVar13 == '\x01') {
      iVar2 = 2;
      puStack_a8 = puVar14;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar2 != 0) {
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(&puStack_a8,uVar4,PTR___ss5ErrorWS_11034ee10);
      }
    }
    else {
      func_0x000107c44174();
      func_0x000107c61180();
      if (puVar14 != (undefined *)0x0) {
        FUN_1011cb528(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        puVar5 = *(undefined **)(puVar3 + _DAT_112d655e8);
        lVar13 = *(long *)((long)(puVar3 + _DAT_112d655e8) + 8);
        func_0x000107c61434(lVar13);
        func_0x000103c1912c();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c61170(puVar3);
          puVar3 = puVar14;
        }
        else {
          lVar6 = *(long *)(puVar3 + _DAT_112d655e0);
          func_0x000107c44500();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            puVar8 = &UNK_110390290;
            func_0x000107c613fc(&UNK_110390290,0x30,7);
            *(undefined **)(puVar8 + 0x10) = puVar3;
            *(undefined **)(puVar8 + 0x18) = puVar5;
            *(long *)(puVar8 + 0x20) = lVar7;
            *(long *)(puVar8 + 0x28) = lVar13;
            puVar9 = &UNK_1103902b8;
            func_0x000107c613fc(&UNK_1103902b8,0x30,7);
            *(undefined **)(puVar9 + 0x10) = puVar3;
            *(undefined **)(puVar9 + 0x18) = puVar5;
            *(long *)(puVar9 + 0x20) = lVar7;
            *(long *)(puVar9 + 0x28) = lVar13;
            puVar10 = PTR_PTR_1126b2730;
            func_0x000107c610f8(PTR_PTR_1126b2730);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x1011cb5a0;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_1103902d0;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar11);
            pcStack_b8 = FUN_1011cb5e0;
            puStack_d8 = puVar1;
            uStack_d0 = 0x42000000;
            pcStack_c8 = FUN_1011adf84;
            puStack_c0 = &UNK_1103902f8;
            ppuVar12 = &puStack_d8;
            puStack_b0 = puVar9;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61434(lVar13);
            func_0x000107c48b60(puVar10);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puStack_b0);
            func_0x000107c61574(puStack_80);
            func_0x000107c3cec8(puVar14);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            return;
          }
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar14);
          puVar3 = puVar5;
        }
      }
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(param_2 + 0x10,&puStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar13 = param_2 + _DAT_112d655c0;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar13 != 0) {
      func_0x000107c44504(lVar13);
      func_0x000107c615e8(lVar13);
    }
  }
  return;
}



/* Entry: 1011ca9d0; end: 1011cacdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ca9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d655f8);
  puVar1 = &UNK_110390380;
  func_0x000107c613fc(&UNK_110390380,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  uStack_60 = 0x1011cb638;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110390398;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c5cb4c(param_2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a6528;
  func_0x000107c610f8(PTR_PTR_1126a6528);
  func_0x000107c453e4();
  func_0x000107c54f6c();
  func_0x000107c54f70(puVar3);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c54f74(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c56718(puVar3);
  func_0x000107c61170(param_2);
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_80);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1011cace0; end: 1011cb01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cace0(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined *)*param_1;
  lVar13 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((char)lVar13 == '\x01') {
      iVar2 = 2;
      puStack_a8 = puVar14;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar2 != 0) {
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(&puStack_a8,uVar4,PTR___ss5ErrorWS_11034ee10);
      }
    }
    else {
      func_0x000107c44174();
      func_0x000107c61180();
      if (puVar14 != (undefined *)0x0) {
        FUN_1011cb528(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        puVar5 = *(undefined **)(puVar3 + _DAT_112d655e8);
        lVar13 = *(long *)((long)(puVar3 + _DAT_112d655e8) + 8);
        func_0x000107c61434(lVar13);
        func_0x000103c1912c();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c61170(puVar3);
          puVar3 = puVar14;
        }
        else {
          lVar6 = *(long *)(puVar3 + _DAT_112d655e0);
          func_0x000107c44500();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            puVar8 = &UNK_110390150;
            func_0x000107c613fc(&UNK_110390150,0x30,7);
            *(undefined **)(puVar8 + 0x10) = puVar3;
            *(undefined **)(puVar8 + 0x18) = puVar5;
            *(long *)(puVar8 + 0x20) = lVar7;
            *(long *)(puVar8 + 0x28) = lVar13;
            puVar9 = &UNK_110390178;
            func_0x000107c613fc(&UNK_110390178,0x30,7);
            *(undefined **)(puVar9 + 0x10) = puVar3;
            *(undefined **)(puVar9 + 0x18) = puVar5;
            *(long *)(puVar9 + 0x20) = lVar7;
            *(long *)(puVar9 + 0x28) = lVar13;
            puVar10 = PTR_PTR_1126b2730;
            func_0x000107c610f8(PTR_PTR_1126b2730);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_88 = FUN_1011cb568;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_110390190;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar11);
            uStack_b8 = 0x1011cb574;
            puStack_d8 = puVar1;
            uStack_d0 = 0x42000000;
            pcStack_c8 = FUN_1011adf84;
            puStack_c0 = &UNK_1103901b8;
            ppuVar12 = &puStack_d8;
            puStack_b0 = puVar9;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61434(lVar13);
            func_0x000107c48b60(puVar10);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puStack_b0);
            func_0x000107c61574(puStack_80);
            func_0x000107c41450(puVar14);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            return;
          }
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar14);
          puVar3 = puVar5;
        }
      }
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(param_2 + 0x10,&puStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar13 = param_2 + _DAT_112d655c0;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar13 != 0) {
      func_0x000107c44504(lVar13);
      func_0x000107c615e8(lVar13);
    }
  }
  return;
}



/* Entry: 1011cb020; end: 1011cb32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d655f8);
  puVar1 = &UNK_110390240;
  func_0x000107c613fc(&UNK_110390240,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  uStack_60 = 0x1011cb620;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110390258;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c5cb4c(param_2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a6528;
  func_0x000107c610f8(PTR_PTR_1126a6528);
  func_0x000107c453e4();
  func_0x000107c54f6c();
  func_0x000107c54f70(puVar3);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c54f74(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c56718(puVar3);
  func_0x000107c61170(param_2);
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_80);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1011cb330; end: 1011cb373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb330(long param_1)

{
  param_1 = param_1 + _DAT_112d655c0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c44504();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1011cb374; end: 1011cb3d3; -[_TtC34GroupJoinPermissionScopeEntryPoint39SCGroupJoinPermissionTrayViewController initWithNibName:bundle:] */

void FUN_1011cb374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupJoinPermissionScopeEntryPoint.SCGroupJoinPermissionTrayViewController",
                      0x4a,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cb3a0);
  (*pcVar1)();
}



/* Entry: 1011cb3d4; end: 1011cb47f; -[_TtC34GroupJoinPermissionScopeEntryPoint39SCGroupJoinPermissionTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011cb400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cb454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cb404) */
/* WARNING: Removing unreachable block (ram,0x0001011cb458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb3d4(long param_1)

{
  FUN_1011cb4a0(param_1 + _DAT_112d655c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d655c8));
  return;
}



/* Entry: 1011cb480; end: 1011cb49f;  */

void FUN_1011cb480(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7150);
  return;
}



/* Entry: 1011cb4a0; end: 1011cb4c3;  */

undefined8 FUN_1011cb4a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011cb4c4; end: 1011cb4e3;  */

void FUN_1011cb4c4(void)

{
  FUN_1011ca5e4();
  return;
}



/* Entry: 1011cb4e4; end: 1011cb4ff;  */

void FUN_1011cb4e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1011cb500; end: 1011cb51f;  */

void FUN_1011cb500(void)

{
  FUN_1011ca5e4();
  return;
}



/* Entry: 1011cb520; end: 1011cb527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb520(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined *)*param_1;
  lVar13 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((char)lVar13 == '\x01') {
      iVar2 = 2;
      puStack_a8 = puVar14;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar2 != 0) {
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(&puStack_a8,uVar4,PTR___ss5ErrorWS_11034ee10);
      }
    }
    else {
      func_0x000107c44174();
      func_0x000107c61180();
      if (puVar14 != (undefined *)0x0) {
        FUN_1011cb528(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        puVar5 = *(undefined **)(puVar3 + _DAT_112d655e8);
        lVar13 = *(long *)((long)(puVar3 + _DAT_112d655e8) + 8);
        func_0x000107c61434(lVar13);
        func_0x000103c1912c();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c61170(puVar3);
          puVar3 = puVar14;
        }
        else {
          lVar6 = *(long *)(puVar3 + _DAT_112d655e0);
          func_0x000107c44500();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            puVar8 = &UNK_110390150;
            func_0x000107c613fc(&UNK_110390150,0x30,7);
            *(undefined **)(puVar8 + 0x10) = puVar3;
            *(undefined **)(puVar8 + 0x18) = puVar5;
            *(long *)(puVar8 + 0x20) = lVar7;
            *(long *)(puVar8 + 0x28) = lVar13;
            puVar9 = &UNK_110390178;
            func_0x000107c613fc(&UNK_110390178,0x30,7);
            *(undefined **)(puVar9 + 0x10) = puVar3;
            *(undefined **)(puVar9 + 0x18) = puVar5;
            *(long *)(puVar9 + 0x20) = lVar7;
            *(long *)(puVar9 + 0x28) = lVar13;
            puVar10 = PTR_PTR_1126b2730;
            func_0x000107c610f8(PTR_PTR_1126b2730);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_88 = FUN_1011cb568;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_110390190;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar11);
            uStack_b8 = 0x1011cb574;
            puStack_d8 = puVar1;
            uStack_d0 = 0x42000000;
            pcStack_c8 = FUN_1011adf84;
            puStack_c0 = &UNK_1103901b8;
            ppuVar12 = &puStack_d8;
            puStack_b0 = puVar9;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61434(lVar13);
            func_0x000107c48b60(puVar10);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puStack_b0);
            func_0x000107c61574(puStack_80);
            func_0x000107c41450(puVar14);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            return;
          }
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar14);
          puVar3 = puVar5;
        }
      }
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,&puStack_a8,0,0);
  lVar13 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    lVar6 = lVar13 + _DAT_112d655c0;
    func_0x000107c61618();
    func_0x000107c61170(lVar13);
    if (lVar6 != 0) {
      func_0x000107c44504(lVar6);
      func_0x000107c615e8(lVar6);
    }
  }
  return;
}



/* Entry: 1011cb528; end: 1011cb567;  */

void FUN_1011cb528(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011cb568; end: 1011cb57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb568(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar4 = &puStack_80;
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112d655f8);
  puVar3 = &UNK_110390240;
  func_0x000107c613fc(&UNK_110390240,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  uStack_60 = 0x1011cb620;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110390258;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar8);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c5cb4c(uVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126a6528;
  func_0x000107c610f8(PTR_PTR_1126a6528);
  func_0x000107c453e4();
  func_0x000107c54f6c();
  func_0x000107c54f70(puVar6);
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c54f74(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c56718(puVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&puStack_80);
  puVar3 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_80);
    func_0x000107c615e8(puVar3);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1011cb580; end: 1011cb597;  */

void FUN_1011cb580(void)

{
  long unaff_x20;
  
  FUN_1011cb330(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1011cb598; end: 1011cb5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb598(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined *)*param_1;
  lVar13 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  puVar3 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((char)lVar13 == '\x01') {
      iVar2 = 2;
      puStack_a8 = puVar14;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar2 != 0) {
        uVar4 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(&puStack_a8,uVar4,PTR___ss5ErrorWS_11034ee10);
      }
    }
    else {
      func_0x000107c44174();
      func_0x000107c61180();
      if (puVar14 != (undefined *)0x0) {
        FUN_1011cb528(0,0x112d4e810,&PTR_PTR_1126b0cd8);
        puVar5 = *(undefined **)(puVar3 + _DAT_112d655e8);
        lVar13 = *(long *)((long)(puVar3 + _DAT_112d655e8) + 8);
        func_0x000107c61434(lVar13);
        func_0x000103c1912c();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c61170(puVar3);
          puVar3 = puVar14;
        }
        else {
          lVar6 = *(long *)(puVar3 + _DAT_112d655e0);
          func_0x000107c44500();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            puVar8 = &UNK_110390290;
            func_0x000107c613fc(&UNK_110390290,0x30,7);
            *(undefined **)(puVar8 + 0x10) = puVar3;
            *(undefined **)(puVar8 + 0x18) = puVar5;
            *(long *)(puVar8 + 0x20) = lVar7;
            *(long *)(puVar8 + 0x28) = lVar13;
            puVar9 = &UNK_1103902b8;
            func_0x000107c613fc(&UNK_1103902b8,0x30,7);
            *(undefined **)(puVar9 + 0x10) = puVar3;
            *(undefined **)(puVar9 + 0x18) = puVar5;
            *(long *)(puVar9 + 0x20) = lVar7;
            *(long *)(puVar9 + 0x28) = lVar13;
            puVar10 = PTR_PTR_1126b2730;
            func_0x000107c610f8(PTR_PTR_1126b2730);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x1011cb5a0;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000f6b44;
            puStack_90 = &UNK_1103902d0;
            ppuVar11 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar11);
            pcStack_b8 = FUN_1011cb5e0;
            puStack_d8 = puVar1;
            uStack_d0 = 0x42000000;
            pcStack_c8 = FUN_1011adf84;
            puStack_c0 = &UNK_1103902f8;
            ppuVar12 = &puStack_d8;
            puStack_b0 = puVar9;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61174(puVar3);
            func_0x000107c61174(puVar5);
            func_0x000107c61434(lVar13);
            func_0x000107c48b60(puVar10);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c60bd0(ppuVar11);
            func_0x000107c61574(puStack_b0);
            func_0x000107c61574(puStack_80);
            func_0x000107c3cec8(puVar14);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            return;
          }
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar14);
          puVar3 = puVar5;
        }
      }
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,&puStack_a8,0,0);
  lVar13 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    lVar6 = lVar13 + _DAT_112d655c0;
    func_0x000107c61618();
    func_0x000107c61170(lVar13);
    if (lVar6 != 0) {
      func_0x000107c44504(lVar6);
      func_0x000107c615e8(lVar6);
    }
  }
  return;
}



/* Entry: 1011cb5ac; end: 1011cb5df;  */

void FUN_1011cb5ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011cb5e0; end: 1011cb63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb5e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar4 = &puStack_80;
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112d655f8);
  puVar3 = &UNK_110390330;
  func_0x000107c613fc(&UNK_110390330,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  uStack_60 = 0x1011cb630;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110390348;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar8);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c5cb4c(uVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126a6528;
  func_0x000107c610f8(PTR_PTR_1126a6528);
  func_0x000107c453e4();
  func_0x000107c54f6c();
  func_0x000107c54f70(puVar6);
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c54f74(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c56718(puVar6);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&puStack_80);
  puVar3 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c4bfb0(puStack_80);
    func_0x000107c615e8(puVar3);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1011cb640; end: 1011cb6bf; -[_TtC34GroupJoinPermissionScopeEntryPoint35SCGroupJoinPermissionViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb640(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d65640,0);
  *(undefined8 *)(param_1 + _DAT_112d65670) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "GroupJoinPermissionScopeEntryPoint/SCGroupJoinPermissionViewController.swift"
                      ,0x4c,2,0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cb6c0);
  (*pcVar1)();
}



/* Entry: 1011cb6c0; end: 1011cb71f; -[_TtC34GroupJoinPermissionScopeEntryPoint35SCGroupJoinPermissionViewController initWithNibName:bundle:] */

void FUN_1011cb6c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GroupJoinPermissionScopeEntryPoint.SCGroupJoinPermissionViewController",0x46,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cb6ec);
  (*pcVar1)();
}



/* Entry: 1011cb720; end: 1011cb7db; -[_TtC34GroupJoinPermissionScopeEntryPoint35SCGroupJoinPermissionViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011cb77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cb7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cb780) */
/* WARNING: Removing unreachable block (ram,0x0001011cb7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb720(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d65630));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d65638));
  FUN_1011cb4a0(param_1 + _DAT_112d65640);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d65648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65650));
  return;
}



/* Entry: 1011cb7dc; end: 1011cb7fb;  */

void FUN_1011cb7dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7250);
  return;
}



/* Entry: 1011cb7fc; end: 1011cb863; -[_TtC34GroupJoinPermissionScopeEntryPoint35SCGroupJoinPermissionViewController tray:heightForPosition:] */

undefined8
FUN_1011cb7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1011cba80(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1011cb864; end: 1011cb9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cb864(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lStack_48;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112d65670);
  if (uVar5 != 0) {
    FUN_1011cba3c(0);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar1 = uVar5;
    func_0x000107c60118(uVar5,param_1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_1);
    if (((uVar1 & 1) != 0) && (param_2 == 2)) {
      puVar2 = PTR_PTR_1126a6528;
      func_0x000107c610f8(PTR_PTR_1126a6528);
      func_0x000107c453e4();
      func_0x000107c54f6c();
      func_0x000107c54f70(puVar2);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d65650);
      func_0x000107c44500(uVar3);
      func_0x000107c61180();
      func_0x000107c54f74(puVar2);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d65658);
      func_0x000107c5fadc(uVar3,((undefined8 *)(unaff_x20 + _DAT_112d65658))[1]);
      func_0x000107c56718(puVar2);
      func_0x000107c61170(uVar3);
      func_0x0001000d224c(&lStack_48);
      if (lStack_48 != 0) {
        func_0x000107c4bfb0(lStack_48);
        func_0x000107c615e8(lStack_48);
      }
      lVar4 = unaff_x20 + _DAT_112d65640;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c44504();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1011cb9e4; end: 1011cba3b; -[_TtC34GroupJoinPermissionScopeEntryPoint35SCGroupJoinPermissionViewController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001011cba24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cba28) */

void FUN_1011cb9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011cb864(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011cba3c; end: 1011cba7f;  */

void FUN_1011cba3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d656a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0a08;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d656a8 = puVar1;
  return;
}



/* Entry: 1011cba80; end: 1011cbb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1011cba80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = -1.0;
  if (param_5 == 8) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d65678);
    lVar2 = *(long *)(lVar4 + _DAT_112d655d8);
    if (lVar2 == 0) {
      dVar5 = 0.0;
    }
    else {
      func_0x000107c61174(0xbff0000000000000);
      lVar3 = lVar2;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5e07c();
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011cbb88);
        (*pcVar1)();
      }
      func_0x000107c3ec60();
      func_0x000107c61170(lVar4);
      func_0x000107c609cc(dVar5,param_2,param_3,param_4);
      dVar6 = 1.79769313486232e+308;
      func_0x000107c5b098(lVar2);
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c517d0();
      func_0x000107c61170(lVar2);
      dVar5 = dVar6 + dVar5;
    }
  }
  return dVar5;
}



/* Entry: 1011cbb88; end: 1011cbb93; -[SCGroupJoinPermissionScopeEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbb88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d656b0;
  func_0x000107c61428(param_1 + _DAT_112d656b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbb94; end: 1011cbb9f; -[SCGroupJoinPermissionScopeEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d656b0;
  func_0x000107c61428(param_1 + _DAT_112d656b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbba0; end: 1011cbbab; -[SCGroupJoinPermissionScopeEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbba0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d656b8;
  func_0x000107c61428(param_1 + _DAT_112d656b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbbac; end: 1011cbbb7; -[SCGroupJoinPermissionScopeEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d656b8;
  func_0x000107c61428(param_1 + _DAT_112d656b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbbb8; end: 1011cbbc3; -[SCGroupJoinPermissionScopeEntryPoint composerPeopleBridgeUserServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d656c0;
  func_0x000107c61428(param_1 + _DAT_112d656c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbbc4; end: 1011cbbcf; -[SCGroupJoinPermissionScopeEntryPoint setComposerPeopleBridgeUserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d656c0;
  func_0x000107c61428(param_1 + _DAT_112d656c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbbd0; end: 1011cbbdb; -[SCGroupJoinPermissionScopeEntryPoint nativeSessionManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d656c8;
  func_0x000107c61428(param_1 + _DAT_112d656c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbbdc; end: 1011cbbe7; -[SCGroupJoinPermissionScopeEntryPoint setNativeSessionManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d656c8;
  func_0x000107c61428(param_1 + _DAT_112d656c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbbe8; end: 1011cbbf3; -[SCGroupJoinPermissionScopeEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbbe8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d656d0;
  func_0x000107c61428(param_1 + _DAT_112d656d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbbf4; end: 1011cbc37;  */

void FUN_1011cbbf4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011cbc38; end: 1011cbc43; -[SCGroupJoinPermissionScopeEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011cbc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d656d0;
  func_0x000107c61428(param_1 + _DAT_112d656d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbc44; end: 1011cbc97;  */

void FUN_1011cbc44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011cbc98; end: 1011cbe2b;  */

/* WARNING: Possible PIC construction at 0x0001011cbd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cbd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cbd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cbe04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cbde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011cbdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011cbde8) */
/* WARNING: Removing unreachable block (ram,0x0001011cbe08) */
/* WARNING: Removing unreachable block (ram,0x0001011cbd88) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001011cbd78) */
/* WARNING: Removing unreachable block (ram,0x0001011cbd68) */
/* WARNING: Removing unreachable block (ram,0x0001011cbdd8) */

void FUN_1011cbc98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3ffe8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4d494();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5d900();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          FUN_1011c9f04(0);
          func_0x000107c613fc();
          FUN_1011c9774(lVar1,lVar2,lVar3,lVar4,unaff_x20);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011cbe2c; end: 1011cbe53; -[SCGroupJoinPermissionScopeEntryPoint begin] */

void FUN_1011cbe2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011cbc98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011cbe54; end: 1011cbe97; -[SCGroupJoinPermissionScopeEntryPoint end] */

void FUN_1011cbe54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


