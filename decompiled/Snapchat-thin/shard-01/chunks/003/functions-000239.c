/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f1ef28; end: 100f1ef2b; -[_TtC24ChatDeeplinkPageLauncher34ChatDeeplinkPageLauncherEntryPoint setNativePayloadHandlers:] */

void FUN_100f1ef28(void)

{
  return;
}



/* Entry: 100f1ef2c; end: 100f1ef4b;  */

void FUN_100f1ef2c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a11b8);
  return;
}



/* Entry: 100f1ef4c; end: 100f1f013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f1ef4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_112d4be18;
  func_0x000107c61614(unaff_x20 + _DAT_112d4be18,0);
  uVar2 = param_1;
  func_0x000107c5c734(param_1);
  func_0x000107c61180();
  func_0x000107c61604(unaff_x20 + lVar1,uVar2);
  func_0x000107c615e8(uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112d4be20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4be28) = param_3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 100f1f014; end: 100f1f127;  */

long FUN_100f1f014(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  uVar5 = 0xd000000000000017;
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    puVar4 = auStack_130;
    pcVar6 = "Missing required dependencies.";
  }
  else {
    uVar5 = 0xd00000000000001e;
    puVar4 = auStack_e0;
    pcVar6 = "JSRuntime unavailable.";
    if (param_1 != '\x01') {
      uVar5 = 0xd000000000000018;
      puVar4 = auStack_90;
      pcVar6 = "plinkPageLauncherHandler";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f1fd38((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  return lVar3;
}



/* Entry: 100f1f128; end: 100f1f13b;  */

bool FUN_100f1f128(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f1f13c; end: 100f1f1e7;  */

void FUN_100f1f13c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f1f1e8; end: 100f1f20b;  */

void FUN_100f1f1e8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100f1f20c; end: 100f1f23f;  */

undefined1  [16] FUN_100f1f20c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_s_Missing_view_controller__112d4be88;
  auVar1._0_8_ = uRam0000000112d4be80;
  func_0x000107c61434(PTR_s_Missing_view_controller__112d4be88);
  return auVar1;
}



/* Entry: 100f1f240; end: 100f1f24f;  */

undefined1 FUN_100f1f240(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f1f250; end: 100f1f277;  */

void FUN_100f1f250(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f1fcb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 100f1f278; end: 100f1f2bf;  */

void FUN_100f1f278(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000100f1fcb8();
  uVar2 = uVar1;
  func_0x000100f1fcf8();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f1f2c0; end: 100f1f2c7;  */

void FUN_100f1f2c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 100f1f2c8; end: 100f1f327; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler init] */

void FUN_100f1f2c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatDeeplinkPageLauncher.ChatDeeplinkPageLauncherHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1f2f4);
  (*pcVar1)();
}



/* Entry: 100f1f328; end: 100f1f36f; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f1f354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1f358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1f328(long param_1)

{
  FUN_100f1fd80(param_1 + _DAT_112d4be18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4be20));
  return;
}



/* Entry: 100f1f370; end: 100f1f3b3;  */

void FUN_100f1f370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4be30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a5f38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4be30 = puVar1;
  return;
}



/* Entry: 100f1f3b4; end: 100f1f3b7; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler setPayloadClass:] */

void FUN_100f1f3b4(void)

{
  return;
}



/* Entry: 100f1f3b8; end: 100f1f3bb; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler setComposerPayloadClass:] */

void FUN_100f1f3b8(void)

{
  return;
}



/* Entry: 100f1f3bc; end: 100f1f3c3; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler payloadType] */

undefined8 FUN_100f1f3bc(void)

{
  return 0xb;
}



/* Entry: 100f1f3c4; end: 100f1f847;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1f3c4(undefined8 param_1,code *param_2)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pppppppuVar13 = (undefined8 *******)(unaff_x20 + _DAT_112d4be18);
  func_0x000107c61618();
  if (pppppppuVar13 != (undefined8 *******)0x0) {
    pppppppuVar2 = pppppppuVar13;
    func_0x000107c61150(pppppppuVar13,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_visibleViewController_112685a88);
    if (((ulong)pppppppuVar2 & 1) == 0) {
      func_0x000107c615e8(pppppppuVar13);
    }
    else {
      pppppppuVar2 = pppppppuVar13;
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c615e8(pppppppuVar13);
      if (pppppppuVar2 != (undefined8 *******)0x0) {
        pppppppuVar3 = pppppppuVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        pppppppuVar13 = pppppppuVar2;
        while (pppppppuVar3 != (undefined8 *******)0x0) {
          func_0x000107c61170(pppppppuVar13);
          pppppppuVar2 = pppppppuVar3;
          func_0x000107c4f078();
          func_0x000107c61180();
          pppppppuVar13 = pppppppuVar3;
          pppppppuVar3 = pppppppuVar2;
        }
        goto LAB_100f1f494;
      }
    }
    pppppppuVar13 = (undefined8 *******)0x0;
  }
LAB_100f1f494:
  func_0x0001000bb420(param_1,&uStack_80);
  uVar4 = 0;
  FUN_100f1f370(0);
  pppppppuVar2 = &pppppppuStack_88;
  puVar11 = &uStack_80;
  func_0x000107c6147c(pppppppuVar2,puVar11,PTR___sypN_11034f1a8 + 8,uVar4,6);
  if (((ulong)pppppppuVar2 & 1) != 0) {
    pppppppuVar2 = pppppppuStack_88;
    func_0x000107c5d984();
    func_0x000107c61180();
    pppppppuVar3 = pppppppuVar2;
    func_0x000107c5faec();
    puVar12 = puVar11;
    func_0x000107c61170(pppppppuVar2);
    puVar5 = puVar11;
    func_0x000107c6142c();
    uVar1 = (ulong)pppppppuVar3 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      if (pppppppuVar13 != (undefined8 *******)0x0) {
        lVar14 = *(long *)(unaff_x20 + _DAT_112d4be20);
        func_0x000107c61174(pppppppuVar13);
        lVar6 = lVar14;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar14);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        func_0x000104522c9c(0);
        pppppppuVar2 = pppppppuStack_88;
        func_0x000107c5d984(pppppppuStack_88);
        func_0x000107c61180();
        pppppppuVar3 = pppppppuVar2;
        func_0x000107c5faec();
        func_0x000107c61170(pppppppuVar2);
        puVar11 = puVar12;
        func_0x00010452281c(pppppppuVar3);
        func_0x000107c6142c(puVar12);
        pppppppuVar2 = pppppppuStack_88;
        func_0x000107c4d4ac();
        func_0x000107c61180();
        pppppppuVar7 = pppppppuVar2;
        func_0x000107c5faec();
        func_0x000107c61170(pppppppuVar2);
        if ((pppppppuVar7 == (undefined8 *******)0x534441) &&
           (puVar11 == (undefined8 *)0xe300000000000000)) {
          func_0x000107c6142c(0xe300000000000000);
          uVar4 = 0x17;
        }
        else {
          func_0x000107c605b8(pppppppuVar7,puVar11,0x534441,0xe300000000000000,0);
          func_0x000107c6142c(puVar11);
          uVar4 = 0x17;
          if (((ulong)pppppppuVar7 & 1) == 0) {
            uVar4 = 2;
          }
        }
        uVar10 = 0;
        func_0x000104523254(0);
        func_0x000107c610f8();
        func_0x000104522fdc(uVar4,1,1,uVar10);
        puVar8 = PTR_PTR_1126b3530;
        func_0x000107c610f8(PTR_PTR_1126b3530);
        func_0x000107c4807c();
        pppppppuVar2 = pppppppuVar3;
        func_0x000104520f00(pppppppuVar3,uVar4,unaff_x20,puVar8);
        func_0x000107c42c1c(lVar14);
        if (param_2 != (code *)0x0) {
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          (*param_2)(0,&uStack_80);
          func_0x000107c61170(pppppppuVar13);
          func_0x000107c61170(pppppppuVar13);
          func_0x000107c61170(pppppppuStack_88);
          func_0x000107c61170(pppppppuVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar8);
          pppppppuVar13 = pppppppuVar2;
          goto LAB_100f1f7c8;
        }
        func_0x000107c61170(pppppppuStack_88);
        func_0x000107c61170(pppppppuVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(pppppppuVar2);
        func_0x000107c61170(pppppppuVar13);
        goto LAB_100f1f81c;
      }
      pppppppuVar13 = pppppppuStack_88;
      if (param_2 == (code *)0x0) goto LAB_100f1f81c;
      FUN_100f1f848();
      puVar8 = &UNK_1103698c0;
      func_0x000107c613f8(&UNK_1103698c0,puVar5,0,0);
      *(undefined1 *)puVar5 = 2;
      puVar9 = puVar8;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar8);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      (*param_2)(puVar9,&uStack_80);
      func_0x000107c61170(puVar9);
      goto LAB_100f1f7c8;
    }
    func_0x000107c61170();
    pppppppuVar2 = pppppppuStack_88;
  }
  if (param_2 == (code *)0x0) {
LAB_100f1f81c:
    func_0x000107c61170(pppppppuVar13);
    return;
  }
  FUN_100f1f848();
  puVar8 = &UNK_1103698c0;
  func_0x000107c613f8(&UNK_1103698c0,pppppppuVar2,0,0);
  *(undefined1 *)pppppppuVar2 = 0;
  puVar9 = puVar8;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar8);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  (*param_2)(puVar9,&uStack_80);
  func_0x000107c61170(puVar9);
LAB_100f1f7c8:
  func_0x000107c61170(pppppppuVar13);
  FUN_100f1fd38(&uStack_80,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 100f1f848; end: 100f1f887;  */

void FUN_100f1f848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4be38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91298c;
  func_0x000107c61520(&UNK_10d91298c,&UNK_1103698c0);
  puRam0000000112d4be38 = puVar1;
  return;
}



/* Entry: 100f1f888; end: 100f1f947; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler launchWithPayload:completion:] */

void FUN_100f1f888(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1103698e0;
    func_0x000107c613fc(&UNK_1103698e0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_100f1fd78;
  }
  FUN_100f1f3c4(auStack_50,pcVar1,puVar2);
  FUN_100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f1f948; end: 100f1f9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1f948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d4be20);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4ffe8(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 100f1f9d4; end: 100f1faeb; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000100f1fa08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1fa0c) */

void FUN_100f1f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100f1fa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f1faec; end: 100f1fb0b;  */

void FUN_100f1faec(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1280);
  return;
}



/* Entry: 100f1fb0c; end: 100f1fc77;  */

int FUN_100f1fb0c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f1fb88;
        goto LAB_100f1fb6c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f1fb6c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f1fb88:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f1fc78; end: 100f1fd37;  */

void FUN_100f1fc78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4be68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d912964;
  func_0x000107c61520(&UNK_10d912964,&UNK_1103698c0);
  puRam0000000112d4be68 = puVar1;
  return;
}



/* Entry: 100f1fd38; end: 100f1fd77;  */

undefined8 FUN_100f1fd38(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100f1fd78; end: 100f1fd7f;  */

void FUN_100f1fd78(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 100f1fd80; end: 100f1fda3;  */

undefined8 FUN_100f1fd80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f1fda4; end: 100f1fdc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fda4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d4be20);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = uVar3;
    func_0x000107c4ffe8(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 100f1fdc8; end: 100f1fdcb; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler composerPayloadClass] */

void FUN_100f1fdc8(void)

{
  FUN_100f1f370(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f1fdcc; end: 100f1fdcf; -[_TtC24ChatDeeplinkPageLauncher31ChatDeeplinkPageLauncherHandler payloadClass] */

void FUN_100f1fdcc(void)

{
  FUN_100f1f370(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 100f1fdd0; end: 100f1fddb; -[SCChatDeeplinkPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fdd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4be90;
  func_0x000107c61428(param_1 + _DAT_112d4be90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1fddc; end: 100f1fde7; -[SCChatDeeplinkPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4be90;
  func_0x000107c61428(param_1 + _DAT_112d4be90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1fde8; end: 100f1fdf3; -[SCChatDeeplinkPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fde8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4be98;
  func_0x000107c61428(param_1 + _DAT_112d4be98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1fdf4; end: 100f1fdff; -[SCChatDeeplinkPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4be98;
  func_0x000107c61428(param_1 + _DAT_112d4be98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1fe00; end: 100f1fe0b; -[SCChatDeeplinkPageLauncherEntryPoint chatScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fe00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bea0;
  func_0x000107c61428(param_1 + _DAT_112d4bea0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1fe0c; end: 100f1fe4f;  */

void FUN_100f1fe0c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f1fe50; end: 100f1fe5b; -[SCChatDeeplinkPageLauncherEntryPoint setChatScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fe50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bea0;
  func_0x000107c61428(param_1 + _DAT_112d4bea0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1fe5c; end: 100f1feaf;  */

void FUN_100f1fe5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1feb0; end: 100f1fef7; -[SCChatDeeplinkPageLauncherEntryPoint chatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1feb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bea8;
  func_0x000107c61428(param_1 + _DAT_112d4bea8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f1fef8; end: 100f1ff5b; -[SCChatDeeplinkPageLauncherEntryPoint setChatScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1fef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bea8;
  func_0x000107c61428(param_1 + _DAT_112d4bea8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f1ff5c; end: 100f201df;  */

/* WARNING: Possible PIC construction at 0x000100f200d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2013c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2014c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2015c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f201b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f201a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f201b4) */
/* WARNING: Removing unreachable block (ram,0x000100f20160) */
/* WARNING: Removing unreachable block (ram,0x000100f20150) */
/* WARNING: Removing unreachable block (ram,0x000100f20140) */
/* WARNING: Removing unreachable block (ram,0x000100f20114) */
/* WARNING: Removing unreachable block (ram,0x000100f20104) */
/* WARNING: Removing unreachable block (ram,0x000100f200d8) */
/* WARNING: Removing unreachable block (ram,0x000100f201a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ff5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f928();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3f93c();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_100f1ef2c();
        func_0x000107c610f8();
        *(long *)(lVar4 + _DAT_112d4bde0) = lVar1;
        func_0x000107c61174();
        func_0x000107c61174(lVar2);
        func_0x000107c61174();
        func_0x000107c61174();
        lVar1 = unaff_x20;
        func_0x00010451338c();
        lVar5 = 0;
        FUN_100f1faec();
        lVar4 = lVar5;
        func_0x000107c610f8();
        lVar2 = _DAT_112d4be18;
        func_0x000107c61614(lVar4 + _DAT_112d4be18,0);
        func_0x000107c61174();
        func_0x000107c61174();
        lVar6 = lVar1;
        func_0x000107c5c734(lVar1);
        func_0x000107c61180();
        func_0x000107c61604(lVar4 + lVar2,lVar6);
        func_0x000107c615e8(lVar6);
        *(long *)(lVar4 + _DAT_112d4be20) = lVar3;
        *(long *)(lVar4 + _DAT_112d4be28) = unaff_x20;
        lStack_70 = lVar4;
        lStack_68 = lVar5;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f201e0; end: 100f20207; -[SCChatDeeplinkPageLauncherEntryPoint begin] */

void FUN_100f201e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f1ff5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f20208; end: 100f2024b; -[SCChatDeeplinkPageLauncherEntryPoint end] */

void FUN_100f20208(undefined8 param_1)

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



/* Entry: 100f2024c; end: 100f204bb;  */

void FUN_100f2024c(long param_1,long param_2,long param_3)

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
        uVar2 = 0xd000000000000011;
        if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10e5910)) ||
           (func_0x000107c605b8(0xd000000000000011,0x800000010ef1a6f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c533cc();
        }
        else {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e58f0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef1a710,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ChatDeeplinkPageLauncher/SCChatDeeplinkPageLauncherEntryPoint.swift"
                                  ,0x43,2,0x2f,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100f204bc);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c533c0();
        }
        goto LAB_100f202d8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
LAB_100f202d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f204bc; end: 100f20567; -[SCChatDeeplinkPageLauncherEntryPoint setValue:forIvarName:] */

void FUN_100f204bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f2024c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f20568; end: 100f205fb; -[SCChatDeeplinkPageLauncherEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f20568(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4be90,0);
  func_0x000107c61614(param_1 + _DAT_112d4be98,0);
  func_0x000107c61614(param_1 + _DAT_112d4bea0,0);
  *(undefined8 *)(param_1 + _DAT_112d4bea8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4beb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f205fc; end: 100f2062f;  */

void FUN_100f205fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f20630; end: 100f20697; -[SCChatDeeplinkPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f2067c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f20680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f20630(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4be90);
  func_0x000107c61610(param_1 + _DAT_112d4be98);
  func_0x000107c61610(param_1 + _DAT_112d4bea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4bea8));
  return;
}



/* Entry: 100f20698; end: 100f206b7;  */

void FUN_100f20698(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1350);
  return;
}



/* Entry: 100f206b8; end: 100f207cf;  */

long FUN_100f206b8(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    uVar5 = 0xd00000000000003a;
    puVar4 = auStack_130;
    pcVar6 = "Cannot perform navigation.";
  }
  else {
    uVar5 = 0xd00000000000001a;
    puVar4 = auStack_e0;
    pcVar6 = "Failed to launch page.";
    if (param_1 != '\x01') {
      uVar5 = 0xd000000000000016;
      puVar4 = auStack_90;
      pcVar6 = "HubDeeplinkPlugin";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_100f21d50((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  return lVar3;
}



/* Entry: 100f207d0; end: 100f207e3;  */

bool FUN_100f207d0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f207e4; end: 100f2088f;  */

void FUN_100f207e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f20890; end: 100f208b3;  */

void FUN_100f20890(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100f208b4; end: 100f208e7;  */

undefined1  [16] FUN_100f208b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_DAT_112d4bf58;
  auVar1._0_8_ = uRam0000000112d4bf50;
  func_0x000107c61434(PTR_DAT_112d4bf58);
  return auVar1;
}



/* Entry: 100f208e8; end: 100f208f7;  */

undefined1 FUN_100f208e8(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f208f8; end: 100f2091f;  */

void FUN_100f208f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f21cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 100f20920; end: 100f20967;  */

void FUN_100f20920(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000100f21cd0();
  uVar2 = uVar1;
  func_0x000100f21d10();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 100f20968; end: 100f2096f;  */

void FUN_100f20968(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 100f20970; end: 100f209cb; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin init] */

void FUN_100f20970(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorHubDeeplinkPlugin.CreatorHubDeeplinkPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f2099c);
  (*pcVar1)();
}



/* Entry: 100f209cc; end: 100f20a3f; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f20a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f20a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f209cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4bee0));
  FUN_100f21b00(param_1 + _DAT_112d4bee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4bef0 + 8))
  ;
  return;
}



/* Entry: 100f20a40; end: 100f20b6b;  */

/* WARNING: Possible PIC construction at 0x000100f20ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f20ab8) */
/* WARNING: Removing unreachable block (ram,0x000100f20b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f20a40(undefined1 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d4bee8;
  puVar2 = (undefined1 *)(unaff_x20 + _DAT_112d4bee8);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(unaff_x20 + lVar1);
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      return;
    }
    FUN_100f21ac0();
    puVar3 = &UNK_110369b90;
    func_0x000107c613f8(&UNK_110369b90,puVar2,0,0);
    *puVar2 = param_1;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c5ed2c(puVar4);
  }
  else {
    FUN_100f21ac0();
    puVar3 = &UNK_110369b90;
    func_0x000107c613f8(&UNK_110369b90,puVar2,0,0);
    *puVar2 = param_1;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c5ed2c(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 100f20b6c; end: 100f21307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f20b6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar7 = PTR___sypN_11034f1a8;
  lVar4 = lVar3;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar3);
  uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_112d4bef0);
  uStack_a0 = ((undefined8 *)(unaff_x20 + _DAT_112d4bef0))[1];
  func_0x000107c61434();
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_98,&uStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_100f20c40:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
    puVar5 = auStack_98;
    FUN_100df95d0(puVar5);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_100f20c40;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + (long)puVar5 * 0x20,&uStack_70);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c6142c(lVar4);
  func_0x0001007bbff0(auStack_98);
  if (lStack_58 != 0) {
    puVar6 = &uStack_a8;
    func_0x000107c6147c(puVar6,&uStack_70,puVar7 + 8,PTR___sSSN_11034da80,6);
    uVar1 = uStack_a0;
    uVar11 = uStack_a8;
    if (((ulong)puVar6 & 1) == 0) goto LAB_100f20e74;
    func_0x000107c4f778();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5f9e8();
    func_0x000107c61170(param_1);
    uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_112d4bef8);
    uStack_a0 = ((undefined8 *)(unaff_x20 + _DAT_112d4bef8))[1];
    func_0x000107c61434();
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c602d4(auStack_98,&uStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar3 + 0x10) == 0) {
LAB_100f20d30:
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c61434(lVar3);
      puVar5 = auStack_98;
      FUN_100df95d0(puVar5);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107c6142c(lVar3);
        goto LAB_100f20d30;
      }
      func_0x0001000bb420(*(long *)(lVar3 + 0x38) + (long)puVar5 * 0x20,&uStack_70);
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c6142c(lVar3);
    func_0x0001007bbff0(auStack_98);
    if (lStack_58 != 0) {
      puVar6 = &uStack_a8;
      func_0x000107c6147c(puVar6,&uStack_70,puVar7 + 8,PTR___sSSN_11034da80,6);
      uVar2 = uStack_a0;
      uVar8 = uStack_a8;
      if (((ulong)puVar6 & 1) != 0) {
        puVar7 = PTR_PTR_1126a5f40;
        func_0x000107c610f8(PTR_PTR_1126a5f40);
        func_0x000107c5fadc(uVar8,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c48178(puVar7);
        func_0x000107c61170(uVar8);
        puVar9 = PTR_PTR_1126a5f48;
        func_0x000107c610f8(PTR_PTR_1126a5f48);
        func_0x000107c453e4();
        func_0x000107c56fb8();
        puVar10 = PTR_PTR_1126a5f28;
        func_0x000107c610f8(PTR_PTR_1126a5f28);
        func_0x000107c5fadc(uVar11,uVar1);
        func_0x000107c48154(puVar10);
        func_0x000107c61170(uVar11);
        func_0x000107c53f34(puVar10);
        FUN_100f215e4(puVar10);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
        func_0x000107c6142c(uVar1);
        func_0x000107c61170(puVar10);
        return;
      }
      func_0x000107c6142c(uVar1);
      goto LAB_100f20e74;
    }
    func_0x000107c6142c(uVar1);
  }
  FUN_100f21d50(&uStack_70,0x112d387f8,&UNK_10d902650);
LAB_100f20e74:
  FUN_100f20a40(0);
  return;
}



/* Entry: 100f21308; end: 100f2136f; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_100f21308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_100f2191c(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f21370; end: 100f21377; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin shouldForceNavigation] */

undefined8 FUN_100f21370(void)

{
  return 0;
}



/* Entry: 100f21378; end: 100f2137b; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_100f21378(void)

{
  return;
}



/* Entry: 100f2137c; end: 100f213cb; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin identifier] */

void FUN_100f2137c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100f213cc; end: 100f213d3; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin priority] */

undefined8 FUN_100f213cc(void)

{
  return 1000;
}



/* Entry: 100f213d4; end: 100f214c3; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin canProvideProcessorForFeature:] */

uint FUN_100f213d4(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  func_0x000107c5faec();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f84098;
  lVar4 = param_2;
  func_0x000107c5faec();
  lVar3 = param_2;
  if (param_3 == ppuVar1 && param_2 == lVar4) {
    uVar5 = 1;
    param_2 = lVar4;
  }
  else {
    ppuVar2 = param_3;
    func_0x000107c605b8(param_3,param_2,ppuVar1,lVar4,0);
    func_0x000107c6142c(lVar4);
    if (((ulong)ppuVar2 & 1) != 0) {
      uVar5 = 1;
      goto LAB_100f214a8;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110f840b8;
    func_0x000107c5faec();
    if (param_3 == ppuVar1 && param_2 == lVar3) {
      uVar5 = 1;
    }
    else {
      func_0x000107c605b8(param_3,param_2,ppuVar1,lVar3,0);
      uVar5 = (uint)param_3;
    }
  }
  func_0x000107c6142c(lVar3);
LAB_100f214a8:
  func_0x000107c6142c(param_2);
  return uVar5 & 1;
}



/* Entry: 100f214c4; end: 100f2154b; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin isValidDeepLink:] */

undefined8 FUN_100f214c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c3f418(param_1,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100f2154c; end: 100f2154f; -[_TtC24CreatorHubDeeplinkPlugin24CreatorHubDeeplinkPlugin makeDeepLinkProcessor] */

void FUN_100f2154c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100f21550; end: 100f215e3;  */

/* WARNING: Possible PIC construction at 0x000100f21584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f215a4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f21550(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d4bee8;
  lVar2 = unaff_x20 + _DAT_112d4bee8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar2 = unaff_x20 + lVar1;
      func_0x000107c61618();
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c42808();
    }
    else {
      func_0x000107c4bb60();
    }
  }
  else {
    func_0x000107c4bb48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 100f215e4; end: 100f2172b;  */

/* WARNING: Possible PIC construction at 0x000100f21630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f20ab8) */
/* WARNING: Removing unreachable block (ram,0x000100f21634) */
/* WARNING: Removing unreachable block (ram,0x000100f21710) */
/* WARNING: Removing unreachable block (ram,0x000100f20a40) */
/* WARNING: Removing unreachable block (ram,0x000100f20ad4) */
/* WARNING: Removing unreachable block (ram,0x000100f20b58) */
/* WARNING: Removing unreachable block (ram,0x000100f20ae0) */
/* WARNING: Removing unreachable block (ram,0x000100f20a6c) */
/* WARNING: Removing unreachable block (ram,0x000100f21638) */
/* WARNING: Removing unreachable block (ram,0x000100f20b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f215e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4bee0);
  func_0x000107c4e26c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f2172c; end: 100f217e7;  */

void FUN_100f2172c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110369ad0;
  func_0x000107c613fc(&UNK_110369ad0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  uStack_40 = 0x100f21ab8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f21850;
  puStack_48 = &UNK_110369ae8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4ab9c(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f217e8; end: 100f2184f;  */

void FUN_100f217e8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == 0) {
      FUN_100f21550();
    }
    else {
      FUN_100f20a40(2);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f21850; end: 100f218fb;  */

void FUN_100f21850(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_60 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    lVar3 = 0;
    alStack_60[1] = 0;
    alStack_60[2] = 0;
  }
  else {
    lVar3 = param_3;
    func_0x000107c614f0();
  }
  alStack_60[0] = param_3;
  alStack_60[3] = lVar3;
  func_0x000107c6157c(uVar2);
  uVar4 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,alStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
  FUN_100f21d50(alStack_60,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 100f218fc; end: 100f2191b;  */

void FUN_100f218fc(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1428);
  return;
}



/* Entry: 100f2191c; end: 100f21a8f;  */

/* WARNING: Possible PIC construction at 0x000100f21970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f210e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f211f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f21264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f21284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2129c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f20b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f20ab8) */
/* WARNING: Removing unreachable block (ram,0x000100f212a0) */
/* WARNING: Removing unreachable block (ram,0x000100f21288) */
/* WARNING: Removing unreachable block (ram,0x000100f21268) */
/* WARNING: Removing unreachable block (ram,0x000100f211fc) */
/* WARNING: Removing unreachable block (ram,0x000100f210e8) */
/* WARNING: Removing unreachable block (ram,0x000100f21124) */
/* WARNING: Removing unreachable block (ram,0x000100f21154) */
/* WARNING: Removing unreachable block (ram,0x000100f2115c) */
/* WARNING: Removing unreachable block (ram,0x000100f21138) */
/* WARNING: Removing unreachable block (ram,0x000100f21164) */
/* WARNING: Removing unreachable block (ram,0x000100f212a4) */
/* WARNING: Removing unreachable block (ram,0x000100f2117c) */
/* WARNING: Removing unreachable block (ram,0x000100f212f4) */
/* WARNING: Removing unreachable block (ram,0x000100f2119c) */
/* WARNING: Removing unreachable block (ram,0x000100f20ff8) */
/* WARNING: Removing unreachable block (ram,0x000100f21034) */
/* WARNING: Removing unreachable block (ram,0x000100f21064) */
/* WARNING: Removing unreachable block (ram,0x000100f2106c) */
/* WARNING: Removing unreachable block (ram,0x000100f21048) */
/* WARNING: Removing unreachable block (ram,0x000100f21074) */
/* WARNING: Removing unreachable block (ram,0x000100f212ac) */
/* WARNING: Removing unreachable block (ram,0x000100f2108c) */
/* WARNING: Removing unreachable block (ram,0x000100f212fc) */
/* WARNING: Removing unreachable block (ram,0x000100f210ac) */
/* WARNING: Removing unreachable block (ram,0x000100f20f08) */
/* WARNING: Removing unreachable block (ram,0x000100f20f44) */
/* WARNING: Removing unreachable block (ram,0x000100f20f74) */
/* WARNING: Removing unreachable block (ram,0x000100f20f7c) */
/* WARNING: Removing unreachable block (ram,0x000100f20f58) */
/* WARNING: Removing unreachable block (ram,0x000100f20f84) */
/* WARNING: Removing unreachable block (ram,0x000100f212b4) */
/* WARNING: Removing unreachable block (ram,0x000100f20f9c) */
/* WARNING: Removing unreachable block (ram,0x000100f212cc) */
/* WARNING: Removing unreachable block (ram,0x000100f212d8) */
/* WARNING: Removing unreachable block (ram,0x000100f20fbc) */
/* WARNING: Removing unreachable block (ram,0x000100f20e50) */
/* WARNING: Removing unreachable block (ram,0x000100f20e38) */
/* WARNING: Removing unreachable block (ram,0x000100f20e18) */
/* WARNING: Removing unreachable block (ram,0x000100f20db4) */
/* WARNING: Removing unreachable block (ram,0x000100f20cbc) */
/* WARNING: Removing unreachable block (ram,0x000100f20cf8) */
/* WARNING: Removing unreachable block (ram,0x000100f20d28) */
/* WARNING: Removing unreachable block (ram,0x000100f20d30) */
/* WARNING: Removing unreachable block (ram,0x000100f20d0c) */
/* WARNING: Removing unreachable block (ram,0x000100f20d38) */
/* WARNING: Removing unreachable block (ram,0x000100f20e54) */
/* WARNING: Removing unreachable block (ram,0x000100f20d50) */
/* WARNING: Removing unreachable block (ram,0x000100f20e9c) */
/* WARNING: Removing unreachable block (ram,0x000100f20d70) */
/* WARNING: Removing unreachable block (ram,0x000100f20bcc) */
/* WARNING: Removing unreachable block (ram,0x000100f20c08) */
/* WARNING: Removing unreachable block (ram,0x000100f20c38) */
/* WARNING: Removing unreachable block (ram,0x000100f20c40) */
/* WARNING: Removing unreachable block (ram,0x000100f20c1c) */
/* WARNING: Removing unreachable block (ram,0x000100f20c48) */
/* WARNING: Removing unreachable block (ram,0x000100f20e5c) */
/* WARNING: Removing unreachable block (ram,0x000100f20c60) */
/* WARNING: Removing unreachable block (ram,0x000100f20e74) */
/* WARNING: Removing unreachable block (ram,0x000100f20e80) */
/* WARNING: Removing unreachable block (ram,0x000100f20c80) */
/* WARNING: Removing unreachable block (ram,0x000100f21974) */
/* WARNING: Removing unreachable block (ram,0x000100f2198c) */
/* WARNING: Removing unreachable block (ram,0x000100f21990) */
/* WARNING: Removing unreachable block (ram,0x000100f219dc) */
/* WARNING: Removing unreachable block (ram,0x000100f21994) */
/* WARNING: Removing unreachable block (ram,0x000100f21a04) */
/* WARNING: Removing unreachable block (ram,0x000100f21a1c) */
/* WARNING: Removing unreachable block (ram,0x000100f21a20) */
/* WARNING: Removing unreachable block (ram,0x000100f21a68) */
/* WARNING: Removing unreachable block (ram,0x000100f21a24) */
/* WARNING: Removing unreachable block (ram,0x000100f21a78) */
/* WARNING: Removing unreachable block (ram,0x000100f20ea8) */
/* WARNING: Removing unreachable block (ram,0x000100f21a54) */
/* WARNING: Removing unreachable block (ram,0x000100f219bc) */
/* WARNING: Removing unreachable block (ram,0x000100f219e4) */
/* WARNING: Removing unreachable block (ram,0x000100f20b6c) */
/* WARNING: Removing unreachable block (ram,0x000100f20b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2191c(undefined *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112d4bee8);
  func_0x000107c4e434();
  func_0x000107c61180();
  lVar1 = _DAT_112d4bee8;
  if (param_1 == (undefined *)0x0) {
    puVar2 = (undefined1 *)(unaff_x20 + _DAT_112d4bee8);
    func_0x000107c61618();
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(unaff_x20 + lVar1);
      func_0x000107c61618();
      if (puVar2 == (undefined1 *)0x0) {
        return;
      }
      FUN_100f21ac0();
      puVar3 = &UNK_110369b90;
      func_0x000107c613f8(&UNK_110369b90,puVar2,0,0);
      *puVar2 = 1;
      param_1 = puVar3;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar3);
      func_0x000107c5ed2c(param_1);
    }
    else {
      FUN_100f21ac0();
      puVar3 = &UNK_110369b90;
      func_0x000107c613f8(&UNK_110369b90,puVar2,0,0);
      *puVar2 = 1;
      param_1 = puVar3;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar3);
      func_0x000107c5ed2c(param_1);
    }
  }
  else {
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f21a90; end: 100f21abf;  */

void FUN_100f21a90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_60;
  puVar2 = &UNK_110369ad0;
  func_0x000107c613fc(&UNK_110369ad0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar4);
  uStack_40 = 0x100f21ab8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f21850;
  puStack_48 = &UNK_110369ae8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4ab9c(uVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 100f21ac0; end: 100f21aff;  */

void FUN_100f21ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4bf30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d912b14;
  func_0x000107c61520(&UNK_10d912b14,&UNK_110369b90);
  puRam0000000112d4bf30 = puVar1;
  return;
}



/* Entry: 100f21b00; end: 100f21b23;  */

undefined8 FUN_100f21b00(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f21b24; end: 100f21c8f;  */

int FUN_100f21b24(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f21ba0;
        goto LAB_100f21b84;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f21b84:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f21ba0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f21c90; end: 100f21d4f;  */

void FUN_100f21c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4bf38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d912aec;
  func_0x000107c61520(&UNK_10d912aec,&UNK_110369b90);
  puRam0000000112d4bf38 = puVar1;
  return;
}



/* Entry: 100f21d50; end: 100f21d8f;  */

undefined8 FUN_100f21d50(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100f21d90; end: 100f21d97;  */

void FUN_100f21d90(long param_1,long param_2)

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



/* Entry: 100f21d98; end: 100f21efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f21d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c613fc();
  lVar3 = 0;
  FUN_100f218fc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112d4bee8,0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4bef0);
  *puVar1 = 0x5f656c69666f7270;
  puVar1[1] = 0xea00000000006469;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4bef8);
  *puVar1 = 0x5f7463656a6f7270;
  puVar1[1] = 0xea00000000006469;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4bf00);
  *puVar1 = 0x61726576696c6564;
  puVar1[1] = 0xee0064695f656c62;
  *(undefined8 *)(lVar4 + _DAT_112d4bee0) = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar2);
  uVar6 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(uVar6);
  return unaff_x20;
}



/* Entry: 100f21efc; end: 100f21f17;  */

void FUN_100f21efc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f21f18; end: 100f21f37;  */

void FUN_100f21f18(void)

{
  func_0x000107c61168(&PTR_PTR_112d4bfa0);
  return;
}



/* Entry: 100f21f38; end: 100f21f43; -[SCCreatorHubDeeplinkPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f21f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bff8;
  func_0x000107c61428(param_1 + _DAT_112d4bff8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f21f44; end: 100f21f4f; -[SCCreatorHubDeeplinkPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f21f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bff8;
  func_0x000107c61428(param_1 + _DAT_112d4bff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f21f50; end: 100f21f5b; -[SCCreatorHubDeeplinkPluginEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f21f50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c000;
  func_0x000107c61428(param_1 + _DAT_112d4c000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f21f5c; end: 100f21f9f;  */

void FUN_100f21f5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100f21fa0; end: 100f21fab; -[SCCreatorHubDeeplinkPluginEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f21fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c000;
  func_0x000107c61428(param_1 + _DAT_112d4c000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f21fac; end: 100f21fff;  */

void FUN_100f21fac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f22000; end: 100f221b7;  */

/* WARNING: Possible PIC construction at 0x000100f22154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f22164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f22158) */
/* WARNING: Removing unreachable block (ram,0x000100f22168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f22000(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c4e270();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_100f21f18(0);
    func_0x000107c613fc();
    lVar4 = 0;
    FUN_100f218fc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    func_0x000107c61614(lVar5 + _DAT_112d4bee8,0);
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d4bef0);
    *puVar1 = 0x5f656c69666f7270;
    puVar1[1] = 0xea00000000006469;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d4bef8);
    *puVar1 = 0x5f7463656a6f7270;
    puVar1[1] = 0xea00000000006469;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d4bf00);
    *puVar1 = 0x61726576696c6564;
    puVar1[1] = 0xee0064695f656c62;
    *(long *)(lVar5 + _DAT_112d4bee0) = unaff_x20;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61154(&lStack_50,puVar2);
    func_0x000107c4e9e4(lVar3);
    func_0x000107c61180();
    func_0x000107c4fba8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100f221b8; end: 100f221df; -[SCCreatorHubDeeplinkPluginEntryPoint begin] */

void FUN_100f221b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f22000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f221e0; end: 100f22223; -[SCCreatorHubDeeplinkPluginEntryPoint end] */

void FUN_100f221e0(undefined8 param_1)

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



/* Entry: 100f22224; end: 100f223bb;  */

void FUN_100f22224(long param_1,long param_2,long param_3)

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
                            "CreatorHubDeeplinkPlugin/SCCreatorHubDeeplinkPluginEntryPoint.swift",
                            0x43,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f223bc);
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



/* Entry: 100f223bc; end: 100f22467; -[SCCreatorHubDeeplinkPluginEntryPoint setValue:forIvarName:] */

void FUN_100f223bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f22224(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


