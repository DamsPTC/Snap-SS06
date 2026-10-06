/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a7aaa0; end: 100a7aabf;  */

void FUN_100a7aaa0(void)

{
  func_0x000107c61168(&PTR_PTR_11297d8d8);
  return;
}



/* Entry: 100a7aac0; end: 100a7ab8f;  */

undefined8 FUN_100a7aac0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x1130476c0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10023763c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a7ab90; end: 100a7c02f;  */

void FUN_100a7ab90(void)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long unaff_x19;
  undefined1 *unaff_x20;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_2e8 [24];
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 ***pppuStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  int iStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1e8;
  undefined1 *puStack_1d0;
  long lStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [296];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  func_0x0001009f7938();
  func_0x000100a4a1c4();
  lVar12 = *(long *)(unaff_x19 + 8);
  func_0x000100a37ddc();
  func_0x0001009fb58c();
  func_0x0001009e0bf8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  uStack_48 = 0x100a7abcc;
  uVar17 = *(ulong *)(lVar12 + 0xe98);
  lVar12 = *(long *)(lVar12 + 0x1f8);
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001009dd7c4();
  lVar14 = lVar12;
  func_0x0001009e5694();
  func_0x0001009f94ac();
  plVar13 = (long *)(uVar17 & 0xfffffffffffffffe);
  lVar12 = lVar14 * 3 + lVar12;
  func_0x0001009e5440();
  if ((bool)in_CY && !(bool)in_ZR) {
    plVar13[2] = lVar12;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 0x10);
    func_0x0001009e5564();
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000100a70fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    unaff_x20 = auStack_1a8;
    FUN_10014d294(auStack_1a8,&UNK_10f765f39,0x1e,2);
    FUN_1001549e4(auStack_198,&UNK_10f765f72);
    func_0x000107c60cf8();
    FUN_100155450(auStack_1a8);
    func_0x0001009e5564();
    if ((bool)in_ZR) {
      return;
    }
  }
  uVar2 = 0;
  func_0x000107c60e78();
  uStack_1b8 = 0x100a70ff0;
  puStack_1d0 = unaff_x20;
  lStack_1c8 = lVar12;
  ppuStack_1c0 = &puStack_50;
  func_0x0001009e3740();
  uStack_1e8 = extraout_x8;
  func_0x000100a71448();
  func_0x0001009eb598();
  FUN_100a71504();
  if ((*(long *)(extraout_x8_00 + 0x110) != 0) &&
     ((*(byte *)(*(long *)(extraout_x8_00 + 0x110) + 0x619) >> 3 & 1) != 0)) goto LAB_100a7143c;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uVar5 = 0x3a8;
  func_0x000107c60e20(0x3a8);
  func_0x0001009eb7ac();
  ppuStack_218 = (undefined8 ***)0x0;
  func_0x000100a71510(lVar12 + 0x1e0,uVar5);
  func_0x000100a71528(&ppuStack_218);
  func_0x0001009eb598();
  FUN_100a71504();
  if (*(long *)(extraout_x8_01 + 0x240) == 0) {
    func_0x000107c60c64(&uStack_260,&UNK_10f4f54d3);
LAB_100a7120c:
    func_0x000107c38da0();
    func_0x000107c38db0();
    func_0x000107c38db8();
LAB_100a7121c:
    func_0x000107c60ca0(&uStack_260);
    func_0x0001009e3d38(uStack_1e8);
    if ((bool)uVar2) {
      return;
    }
    func_0x000107c60e78();
  }
  else {
    ppuStack_218 = (undefined8 ***)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x0001009eb58c();
    uStack_248 = *(ulong *)(extraout_x8_02 + 0xc0);
    puVar6 = &uStack_248;
    func_0x000100a71554(puVar6,0);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c60dec(&uStack_248,&UNK_10f4f54fd,&ppuStack_218);
      func_0x00010017b08c(&uStack_260,&uStack_248);
      func_0x000107c60ca0(&uStack_248);
      goto LAB_100a71208;
    }
    func_0x0001009eb58c();
    plVar13 = *(long **)(extraout_x8_03 + 0xeb0);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(lVar12 + 0x1e0));
    }
    lVar14 = *(long *)(lVar12 + 0x1e0);
    piVar7 = (int *)(lVar14 + 8);
    if (*(char *)piVar7 == '\x01') {
      func_0x000107c2f31c();
      iVar4 = *piVar7;
      func_0x0001009eb58c();
      uStack_248 = *(ulong *)(extraout_x8_04 + 0xc0);
      iVar3 = (int)&uStack_248;
      func_0x00010084b3f4();
      uVar2 = iVar4 == iVar3;
      if ((bool)uVar2) {
        lVar14 = *(long *)(lVar12 + 0x1e0) + 8;
        func_0x000107c2f31c();
        func_0x0001009eb58c();
        lVar14 = lVar14 + 8;
        func_0x000107c2f250(lVar14,extraout_x8_05 + 0x1578,&uStack_260);
        if ((int)lVar14 != 0) goto LAB_100a71208;
        lVar14 = *(long *)(lVar12 + 0x1e0);
        goto LAB_100a71118;
      }
      puVar15 = &UNK_10f4f552d;
LAB_100a71200:
      func_0x000107c60c64(&uStack_260,puVar15);
LAB_100a71208:
      func_0x000100a764f4();
      goto LAB_100a7120c;
    }
LAB_100a71118:
    pcVar8 = (char *)(lVar14 + 0x30);
    uVar2 = *pcVar8 == '\x01';
    if ((bool)uVar2) {
      func_0x000107c2f320();
      iVar4 = (int)pcVar8;
      func_0x0001009eb58c();
      uStack_248 = *(ulong *)(extraout_x8_06 + 0xc0);
      func_0x000107c2f254();
      if (iVar4 != 0) {
        lVar14 = *(long *)(lVar12 + 0x1e0) + 0x30;
        func_0x000107c2f320();
        uStack_248 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0xe8) + 0x58) + 0xc0);
        pcVar8 = (char *)(lVar14 + 8);
        func_0x000107c2f258(pcVar8,&uStack_248,*(long *)(lVar12 + 0xe8) + 0xaa8,&uStack_260);
        if ((int)pcVar8 != 0) goto LAB_100a71180;
      }
      goto LAB_100a71208;
    }
LAB_100a71180:
    iVar4 = (int)pcVar8;
    FUN_1009ebb28();
    (**(code **)(extraout_x8_07 + 0x60))();
    if (iVar4 != 0) goto LAB_100a71208;
    lVar14 = *(long *)(lVar12 + 0xe8);
    func_0x000100a7292c();
    uVar2 = *(char *)(lVar12 + 0x44) == '\x01';
    if ((bool)uVar2) {
      puVar15 = &UNK_10f4f5547;
      goto LAB_100a71200;
    }
    func_0x000100a764f4();
    uStack_268 = 0;
    iStack_26c = 0;
    func_0x0001009eb598();
    FUN_10022a914(*(undefined8 *)(lVar14 + 8),&uStack_268,&iStack_26c);
    if (iStack_26c == 0) {
      FUN_10012dbd0(&ppuStack_218,&UNK_10f4f55a8);
      func_0x000107c38da0();
      func_0x000107c38db0();
      func_0x000107c38db8();
      ppppuVar11 = (undefined8 ****)&ppuStack_218;
LAB_100a7142c:
      func_0x000107c60ca0(ppppuVar11);
      goto LAB_100a7121c;
    }
    uStack_280 = 0xaaaaaaaaaaaaaaaa;
    uStack_278 = -0x5555555555555556;
    pppuStack_288 = (undefined8 ****)0xaaaaaaaaaaaaaaaa;
    func_0x000107c60c50(&pppuStack_288,uStack_268);
    uStack_298 = 0xaaaaaaaaaaaaaaaa;
    uStack_290 = 0xaaaaaaaaaaaaaaaa;
    uStack_2a0 = 0xaaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(lVar12 + 0xe8) + 0x308))(&uStack_2a0);
    uVar1 = uStack_298;
    uVar17 = uStack_2a0;
    while ((uVar16 = uVar1, uVar17 != uVar1 &&
           (uVar9 = uVar17, func_0x00010017d174(uVar17,&pppuStack_288), uVar16 = uVar17,
           (uVar9 & 1) == 0))) {
      uVar17 = uVar17 + 0x18;
    }
    uVar2 = uStack_298 == uVar16;
    if ((bool)uVar2) {
      FUN_10012dbd0(&ppuStack_218,&UNK_10f4f55c3);
      func_0x000107c38da0();
      func_0x000107c38db0();
      func_0x000107c38db8();
      func_0x000100a764f4();
LAB_100a71420:
      func_0x00010014c5e8(&uStack_2a0);
      ppppuVar11 = &pppuStack_288;
      goto LAB_100a7142c;
    }
    plVar13 = *(long **)(lVar12 + 0xe8);
    uVar2 = uStack_278._7_1_ == 0;
    uVar17 = uStack_280;
    ppppuVar11 = (undefined8 ****)pppuStack_288;
    if (-1 < uStack_278) {
      uVar17 = (ulong)uStack_278._7_1_;
      ppppuVar11 = &pppuStack_288;
    }
    (**(code **)(*plVar13 + 0x318))(plVar13,ppppuVar11,uVar17);
    lStack_2b0 = -0x5555555555555556;
    uStack_2a8 = 0xaaaaaaaaaaaaaaaa;
    func_0x0001009eb598();
    FUN_100a76500(plVar13[1],&uStack_2a8,&lStack_2b0);
    if (lStack_2b0 == 0) {
LAB_100a7140c:
      *(undefined4 *)(lVar12 + 0x160) = 2;
      FUN_1009ebb28();
      (**(code **)(extraout_x8_08 + 0x28))();
      goto LAB_100a71420;
    }
    uStack_2c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_2d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_2b8 = -0x5555555555555556;
    uStack_2c0 = 0xaaaaaaaaaaaaaaaa;
    uVar5 = uStack_2a8;
    (**(code **)(**(long **)(lVar12 + 0xe8) + 0x238))(&uStack_2d0);
    if ((uStack_2d0 & 1) == 0) {
      func_0x0001001d822c(&uStack_2d0);
      goto LAB_100a7140c;
    }
    pppuVar10 = (undefined8 ***)&UNK_10f4f55e3;
    func_0x0001009e0154();
    ppuStack_218 = pppuVar10;
    uStack_210 = uVar5;
    if ((uStack_2d0 & 1) != 0) {
      uVar2 = uStack_2b8._7_1_ == 0;
      uStack_240 = uStack_2c0;
      uStack_248 = uStack_2c8;
      if (-1 < uStack_2b8) {
        uStack_240 = (ulong)uStack_2b8._7_1_;
        uStack_248 = (ulong)&uStack_2d0 | 8;
      }
      func_0x0001009e01a0(auStack_2e8,&ppuStack_218,&uStack_248);
      func_0x000107c38da0();
      func_0x000107c38db0();
      func_0x000107c38da4();
      func_0x0001001d822c(&uStack_2d0);
      goto LAB_100a71420;
    }
  }
  func_0x000107c2d060();
LAB_100a7143c:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x100a71440);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 100a7c030; end: 100a7c0af; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7c030(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130477b0,0);
  func_0x000107c61614(param_1 + _DAT_1130477b8,0);
  *(undefined8 *)(param_1 + _DAT_1130477c0) = 0;
  *(undefined8 *)(param_1 + _DAT_1130477c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a7c0b0; end: 100a7c323;  */

void FUN_100a7c0b0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_2;
  if (*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x155a) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0x48);
    uVar4 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x70) == 0) {
      lVar3 = param_1;
      func_0x000100a7c0f0(*(undefined8 *)(param_1 + 0x10));
      *(long *)(param_1 + 0x70) = lVar3;
    }
    if (uVar4 < uVar2 >> 1) {
      func_0x000107c2f758(param_1);
      *(ulong *)(param_1 + 0x40) = (*(long *)(param_1 + 0x48) - uVar4) + *(long *)(param_1 + 0x40);
      if (*(char *)(param_1 + 0x1c) == '\x01') {
        iVar1 = -(uint)(0x48 < *(int *)(*(long *)(param_1 + 0x10) + 0xc4));
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
      }
                    /* WARNING: Could not recover jumptable at 0x00010b45adb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 8) + 0x218))
                (*(long **)(param_1 + 8),iVar1,*(undefined8 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



/* Entry: 100a7c324; end: 100a7c3cf; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a7c324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7c3d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7c3d0; end: 100a7c5d3;  */

void FUN_100a7c3d0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e22060)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f1ddfa0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e22030)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000002a,0x800000010f1ddfd0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SharingUserSessionScopeGraphBridge/SCSCOffPlatformLinkGenerationServicesSaberEntryPoint.swift"
                                ,0x5d,2,0x38,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7c5d4);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586dc();
        goto LAB_100a7c45c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c590cc();
  }
LAB_100a7c45c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a7c5d4; end: 100a7c5df; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7c5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130477b0;
  func_0x000107c61428(param_1 + _DAT_1130477b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7c5e0; end: 100a7c633;  */

void FUN_100a7c5e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7c634; end: 100a7d613;  */

void FUN_100a7c634(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce2c48;
  param_1[0x47] = &PTR_DAT_110ce2de8;
  return;
}



/* Entry: 100a7d614; end: 100a7d61f; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint setSharingUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7d614(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130477b8;
  func_0x000107c61428(param_1 + _DAT_1130477b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7d620; end: 100a7d89b;  */

void FUN_100a7d620(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 8;
  lStack_20 = param_2;
  func_0x000100a7d64c(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 100a7d89c; end: 100a7d8ff; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint setSCOffPlatformLinkGenerationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7d89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130477c0;
  func_0x000107c61428(param_1 + _DAT_1130477c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a7d900; end: 100a7dbe7;  */

uint FUN_100a7d900(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long **pplVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 auStack_40 [2];
  long *plStack_30;
  undefined1 *puStack_28;
  
  func_0x0001009e1d38();
  if (*(long **)(param_1 + 0xcf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xcf0) + 0x50))();
    param_2 = unaff_x20;
  }
  func_0x000100a6fddc();
  auStack_40[0] = 0;
  puStack_28 = (undefined1 *)param_2;
  while( true ) {
    uVar1 = (uint)&plStack_30;
    puVar5 = auStack_40;
    func_0x000100a6ffd0();
    if (uVar1 == 0) break;
    iVar2 = (int)&plStack_30;
    func_0x000100a701d4();
    func_0x000100a7de70();
    if (iVar2 == 0) goto LAB_100a7d9c4;
    func_0x000100a6fff4(&plStack_30);
  }
  plVar3 = unaff_x19 + 0x1ae;
  func_0x000100a7e6c4();
  auStack_40[0] = 0;
  plStack_30 = plVar3;
  puStack_28 = (undefined1 *)puVar5;
  while( true ) {
    pplVar4 = &plStack_30;
    func_0x000100a7e724(pplVar4,auStack_40);
    if (((ulong)pplVar4 & 1) == 0) break;
    func_0x000107c2f458();
    plVar3 = unaff_x19;
    func_0x000107c2f444();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    func_0x000107c2f45c(&plStack_30);
  }
  func_0x000100a7e73c(unaff_x19 + 0x1ae);
LAB_100a7d9c4:
  return uVar1 ^ 1;
}



/* Entry: 100a7dbe8; end: 100a7dc0f; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint begin] */

void FUN_100a7dbe8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a7dc10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a7dc10; end: 100a7dd93;  */

/* WARNING: Possible PIC construction at 0x000100a7dd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7dd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7dd3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7dd14) */
/* WARNING: Removing unreachable block (ram,0x000100a7dd24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7dc10(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5aa84();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51134();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a7de38();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113047700);
        *(undefined8 *)(lVar2 + _DAT_113046f38) = uVar6;
        *(long *)(lVar2 + _DAT_113046f40) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113046f40);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a7dd94; end: 100a7dd9f; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7dd94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130477b0;
  func_0x000107c61428(param_1 + _DAT_1130477b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7dda0; end: 100a7dde3;  */

void FUN_100a7dda0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a7dde4; end: 100a7ddef; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint sharingUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7dde4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130477b8;
  func_0x000107c61428(param_1 + _DAT_1130477b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7ddf0; end: 100a7de37; -[SCSCOffPlatformLinkGenerationServicesSaberEntryPoint sCOffPlatformLinkGenerationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7ddf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130477c0;
  func_0x000107c61428(param_1 + _DAT_1130477c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a7de38; end: 100a7de57;  */

void FUN_100a7de38(void)

{
  func_0x000107c61168(&PTR_PTR_11297d9a0);
  return;
}



/* Entry: 100a7de58; end: 100a7e773;  */

void FUN_100a7de58(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined **ppuStack_80;
  undefined8 ***pppuStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x000107c613d0();
  if (0x7ffffffffffffff7 < uVar2) {
    func_0x000107c35c54();
    goto LAB_100162018;
  }
  if (uVar2 < 0x17) {
    uStack_98 = CONCAT17((char)uVar2,(undefined7)uStack_98);
    ppppuVar3 = &pppuStack_a8;
    if (uVar2 == 0) goto LAB_100161f44;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if ((uVar2 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)((uVar2 | 7) + 1);
    }
    ppppuVar3 = ppppuVar4;
    func_0x000107c60e20();
    uStack_98 = (ulong)ppppuVar4 | 0x8000000000000000;
    pppuStack_a8 = ppppuVar3;
    uStack_a0 = uVar2;
  }
  func_0x000107c610b4(ppppuVar3,param_1,uVar2);
LAB_100161f44:
  *(undefined1 *)((long)ppppuVar3 + uVar2) = 0;
  uStack_88 = 1000000;
  uStack_84 = 1;
  uStack_8c = 0x32;
  ppppuVar4 = (undefined8 ****)pppuStack_a8;
  if (-1 < (long)uStack_98._7_1_) {
    ppppuVar4 = &pppuStack_a8;
  }
  uVar2 = uStack_a0;
  if (-1 < (long)uStack_98) {
    uVar2 = (long)uStack_98._7_1_;
  }
  FUN_100121bd8(ppppuVar4,uVar2,&uStack_84,&uStack_88,&uStack_8c);
  if (((ulong)ppppuVar4 & 1) == 0) {
    if ((bRam000000011383aa60 & 1) == 0) goto LAB_10016201c;
  }
  else {
    ppuStack_80 = &PTR_FUN_110cd4f18;
    uStack_70 = 0;
    uStack_6c = uStack_84;
    uStack_68 = uStack_88;
    uStack_64 = uStack_8c;
    uStack_60 = 1;
    pppuStack_78 = &pppuStack_a8;
    FUN_100122250(&ppuStack_80);
  }
  while( true ) {
    if ((long)uStack_98 < 0) {
      func_0x000107c60e14(pppuStack_a8);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
LAB_100162018:
    func_0x000107c60e78();
LAB_10016201c:
    iVar1 = 0x1383aa60;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011383aa58 = 0;
      ppuRam000000011383aa48 = &PTR_DAT_110cd4ab8;
      puRam000000011383aa50 = &UNK_10f7443ef;
      func_0x000107c60e4c(0x11383aa60);
    }
  }
  return;
}



/* Entry: 100a7e774; end: 100a7e793;  */

void FUN_100a7e774(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100a7e794; end: 100a7f2eb;  */

void FUN_100a7e794(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x6d8);
  uStack_18 = *param_2;
  *param_2 = 0;
  (**(code **)(*plVar1 + 0xb8))(plVar1,&uStack_18);
  func_0x000100a7e884(&uStack_18);
  return;
}



/* Entry: 100a7f2ec; end: 100a7f357; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f2ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113048130,0);
  *(undefined8 *)(param_1 + _DAT_113048138) = 0;
  *(undefined8 *)(param_1 + _DAT_113048140) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a7f358; end: 100a7f403; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a7f358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7f404(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7f404; end: 100a7f59b;  */

void FUN_100a7f404(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e21a90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f1de570,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpamUserSessionScopeGraphBridge/SCSpamUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7f59c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5959c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a7f59c; end: 100a7f5f3; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048130;
  func_0x000107c61428(param_1 + _DAT_113048130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7f5f4; end: 100a7f657; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint setSpamUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f5f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048138;
  func_0x000107c61428(param_1 + _DAT_113048138,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a7f658; end: 100a7f67f; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a7f658(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a7f680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a7f680; end: 100a7f7b3;  */

/* WARNING: Possible PIC construction at 0x000100a7f738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7f754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7f770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7f73c) */
/* WARNING: Removing unreachable block (ram,0x000100a7f758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f680(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5b6b0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a7f844();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a7f864();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7f7b4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113047ee8) = lVar5;
    *(long *)(lVar4 + _DAT_113047ef0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a7f7b4; end: 100a7f7fb; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f7b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048130;
  func_0x000107c61428(param_1 + _DAT_113048130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7f7fc; end: 100a7f843; -[SCSpamUserSessionScopeGraphBridgeSaberEntryPoint spamUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f7fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048138;
  func_0x000107c61428(param_1 + _DAT_113048138,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a7f844; end: 100a7f863;  */

void FUN_100a7f844(void)

{
  func_0x000107c61168(&PTR_PTR_11297e050);
  return;
}



/* Entry: 100a7f864; end: 100a7f933;  */

undefined8 FUN_100a7f864(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x1130480c0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10020927c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a7f934; end: 100a7f99f; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7f934(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113048460,0);
  *(undefined8 *)(param_1 + _DAT_113048468) = 0;
  *(undefined8 *)(param_1 + _DAT_113048470) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a7f9a0; end: 100a7fa4b; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a7f9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a7fa4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a7fa4c; end: 100a7fbe3;  */

void FUN_100a7fa4c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e21800)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f1de800,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengUserSessionScopeGraphBridge/SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7fbe4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a7fbe4; end: 100a7fc3b; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048460;
  func_0x000107c61428(param_1 + _DAT_113048460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a7fc3c; end: 100a7fc9f; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint setSpecengUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048468;
  func_0x000107c61428(param_1 + _DAT_113048468,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a7fca0; end: 100a7fcc7; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a7fca0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a7fcc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a7fcc8; end: 100a7fdfb;  */

/* WARNING: Possible PIC construction at 0x000100a7fd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7fd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a7fdb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a7fd84) */
/* WARNING: Removing unreachable block (ram,0x000100a7fda0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fcc8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5b6d8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a7fe8c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a7feac();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a7fdfc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_1130482f0) = lVar5;
    *(long *)(lVar4 + _DAT_1130482f8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a7fdfc; end: 100a7fe43; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fdfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048460;
  func_0x000107c61428(param_1 + _DAT_113048460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a7fe44; end: 100a7fe8b; -[SCSpecengUserSessionScopeGraphBridgeSaberEntryPoint specengUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7fe44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048468;
  func_0x000107c61428(param_1 + _DAT_113048468,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a7fe8c; end: 100a7feab;  */

void FUN_100a7fe8c(void)

{
  func_0x000107c61168(&PTR_PTR_11297e338);
  return;
}



/* Entry: 100a7feac; end: 100a7ff7b;  */

undefined8 FUN_100a7feac(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x1130483f8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1001d4ec4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a7ff7c; end: 100a7ffe7; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7ff7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130487e8,0);
  *(undefined8 *)(param_1 + _DAT_1130487f0) = 0;
  *(undefined8 *)(param_1 + _DAT_1130487f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a7ffe8; end: 100a80093; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a7ffe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a80094(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a80094; end: 100a8022b;  */

void FUN_100a80094(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e21530)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f1dead0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotUserSessionScopeGraphBridge/SCSpotUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a8022c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c596c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a8022c; end: 100a80283; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8022c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130487e8;
  func_0x000107c61428(param_1 + _DAT_1130487e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a80284; end: 100a802e7; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint setSpotUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130487f0;
  func_0x000107c61428(param_1 + _DAT_1130487f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a802e8; end: 100a8030f; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a802e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a80310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a80310; end: 100a80443;  */

/* WARNING: Possible PIC construction at 0x000100a803c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a803e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a80400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a803cc) */
/* WARNING: Removing unreachable block (ram,0x000100a803e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80310(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5b8a4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a804d4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a804f4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a80444);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113048560) = lVar5;
    *(long *)(lVar4 + _DAT_113048568) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a80444; end: 100a8048b; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130487e8;
  func_0x000107c61428(param_1 + _DAT_1130487e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a8048c; end: 100a804d3; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint spotUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a8048c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130487f0;
  func_0x000107c61428(param_1 + _DAT_1130487f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a804d4; end: 100a804f3;  */

void FUN_100a804d4(void)

{
  func_0x000107c61168(&PTR_PTR_11297e5d0);
  return;
}



/* Entry: 100a804f4; end: 100a805c3;  */

undefined8 FUN_100a804f4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x113048770,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_100235a80();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a805c4; end: 100a80643; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a805c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113048828,0);
  func_0x000107c61614(param_1 + _DAT_113048830,0);
  *(undefined8 *)(param_1 + _DAT_113048838) = 0;
  *(undefined8 *)(param_1 + _DAT_113048840) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a80644; end: 100a806ef; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a80644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a806f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a806f0; end: 100a808f3;  */

void FUN_100a806f0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e214a0)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1deb60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e21470)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f1deb90,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SpotUserSessionScopeGraphBridge/SCSCSpotlightSnapDownloadingServicesSaberEntryPoint.swift"
                              ,0x59,2,0x31,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a808f4);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c589b0();
        goto LAB_100a8077c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c596c4();
  }
LAB_100a8077c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a808f4; end: 100a808ff; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a808f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048828;
  func_0x000107c61428(param_1 + _DAT_113048828,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a80900; end: 100a80953;  */

void FUN_100a80900(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a80954; end: 100a8095f; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint setSpotUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048830;
  func_0x000107c61428(param_1 + _DAT_113048830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a80960; end: 100a809c3; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint setSCSpotlightSnapDownloadingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048838;
  func_0x000107c61428(param_1 + _DAT_113048838,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a809c4; end: 100a809eb; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint begin] */

void FUN_100a809c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a809ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a809ec; end: 100a80b6f;  */

/* WARNING: Possible PIC construction at 0x000100a80aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a80afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a80b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a80af0) */
/* WARNING: Removing unreachable block (ram,0x000100a80b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a809ec(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b8a0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51408();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a80c14();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113048788);
        *(undefined8 *)(lVar2 + _DAT_113048598) = uVar6;
        *(long *)(lVar2 + _DAT_1130485a0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130485a0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a80b70; end: 100a80b7b; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80b70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048828;
  func_0x000107c61428(param_1 + _DAT_113048828,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a80b7c; end: 100a80bbf;  */

void FUN_100a80b7c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a80bc0; end: 100a80bcb; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint spotUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80bc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048830;
  func_0x000107c61428(param_1 + _DAT_113048830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a80bcc; end: 100a80c13; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint sCSpotlightSnapDownloadingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048838;
  func_0x000107c61428(param_1 + _DAT_113048838,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a80c14; end: 100a80c33;  */

void FUN_100a80c14(void)

{
  func_0x000107c61168(&PTR_PTR_11297e698);
  return;
}



/* Entry: 100a80c34; end: 100a80c3b;  */

void FUN_100a80c34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a80c3c; end: 100a80c8f;  */

void FUN_100a80c3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a80c90; end: 100a80c9b;  */

void FUN_100a80c90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100210cbc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a80d4c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a80c9c; end: 100a80d4b;  */

void FUN_100a80c9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100210cbc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a80d4c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a80d4c; end: 100a80f7f;  */

void FUN_100a80d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8800;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efcf7a0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a80f80);
  (*pcVar1)();
}



/* Entry: 100a80f80; end: 100a81083; -[SCSpotlightSnapDownloadingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a80f80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112727dc0);
  puVar2 = PTR_PTR_1126bd348;
  func_0x000107c610f4(PTR_PTR_1126bd348);
  func_0x000107c4895c();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100a81084; end: 100a810db; -[_TtC34SCSpotlightSnapDownloadingServices34SCSpotlightSnapDownloadingServices initWithSpotlightSnapDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81084(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113048ae8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100a810dc; end: 100a8110f;  */

void FUN_100a810dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a81110; end: 100a8117b; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81110(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113048eb0,0);
  *(undefined8 *)(param_1 + _DAT_113048eb8) = 0;
  *(undefined8 *)(param_1 + _DAT_113048ec0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a8117c; end: 100a81227; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a8117c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a81228(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a81228; end: 100a813bf;  */

void FUN_100a81228(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e21010)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1deff0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrUserSessionScopeGraphBridge/SCStrUserSessionScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a813c0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a813c0; end: 100a81417; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a813c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048eb0;
  func_0x000107c61428(param_1 + _DAT_113048eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a81418; end: 100a8147b; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint setStrUserSessionScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048eb8;
  func_0x000107c61428(param_1 + _DAT_113048eb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a8147c; end: 100a814a3; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a8147c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a814a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a814a4; end: 100a815d7;  */

/* WARNING: Possible PIC construction at 0x000100a8155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a81578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a81594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a81560) */
/* WARNING: Removing unreachable block (ram,0x000100a8157c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a814a4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5c0b4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a81668();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a81688();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a815d8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113048b50) = lVar5;
    *(long *)(lVar4 + _DAT_113048b58) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a815d8; end: 100a8161f; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a815d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048eb0;
  func_0x000107c61428(param_1 + _DAT_113048eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a81620; end: 100a81667; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint strUserSessionScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048eb8;
  func_0x000107c61428(param_1 + _DAT_113048eb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a81668; end: 100a81687;  */

void FUN_100a81668(void)

{
  func_0x000107c61168(&PTR_PTR_11297ed70);
  return;
}



/* Entry: 100a81688; end: 100a81757;  */

undefined8 FUN_100a81688(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x113048e30,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10022cc20();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a81758; end: 100a817d7; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81758(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113048ef0,0);
  func_0x000107c61614(param_1 + _DAT_113048ef8,0);
  *(undefined8 *)(param_1 + _DAT_113048f00) = 0;
  *(undefined8 *)(param_1 + _DAT_113048f08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a817d8; end: 100a81883; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a817d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a81884(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a81884; end: 100a81a87;  */

void FUN_100a81884(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e20f80)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000026,0x800000010f1df080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e20f50)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000026,0x800000010f1df0b0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "StrUserSessionScopeGraphBridge/SCSCLegacyStoriesTooltipsServicesSaberEntryPoint.swift"
                                ,0x55,2,0x32,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a81a88);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58404();
        goto LAB_100a81910;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599d4();
  }
LAB_100a81910:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a81a88; end: 100a81a93; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048ef0;
  func_0x000107c61428(param_1 + _DAT_113048ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a81a94; end: 100a81ae7;  */

void FUN_100a81a94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a81ae8; end: 100a81af3; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint setStrUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048ef8;
  func_0x000107c61428(param_1 + _DAT_113048ef8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a81af4; end: 100a81b57; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint setSCLegacyStoriesTooltipsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048f00;
  func_0x000107c61428(param_1 + _DAT_113048f00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a81b58; end: 100a81b7f; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint begin] */

void FUN_100a81b58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a81b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a81b80; end: 100a81d03;  */

/* WARNING: Possible PIC construction at 0x000100a81c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a81c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a81cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a81c84) */
/* WARNING: Removing unreachable block (ram,0x000100a81c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81b80(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c0b0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e5c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a81da8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113048e48);
        *(undefined8 *)(lVar2 + _DAT_113048b88) = uVar6;
        *(long *)(lVar2 + _DAT_113048b90) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113048b90);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a81d04; end: 100a81d0f; -[SCSCLegacyStoriesTooltipsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a81d04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048ef0;
  func_0x000107c61428(param_1 + _DAT_113048ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


