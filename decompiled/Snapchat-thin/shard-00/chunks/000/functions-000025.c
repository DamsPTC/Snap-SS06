/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000ad658; end: 1000ad737;  */

void FUN_1000ad658(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  uVar2 = uStack_48;
  FUN_100083b20(&uStack_48);
  FUN_1000a0ea8(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uStack_48);
  uVar3 = uVar2;
  FUN_1000b6214(uVar2,uStack_48);
  func_0x0001000b625c(0);
  func_0x000107c438e4(uVar2);
  func_0x000107c61180();
  FUN_1000b62a4();
  uVar1 = uRam0000000113813758;
  uRam0000000113813758 = uVar3;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 1000ad738; end: 1000ad73f;  */

void FUN_1000ad738(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a71d8;
  func_0x000107c610f8();
  func_0x000107c456f0();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ad7c4);
  (*pcVar1)();
}



/* Entry: 1000ad740; end: 1000ad877;  */

void FUN_1000ad740(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a71d8;
  func_0x000107c610f8();
  func_0x000107c456f0();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ad7c4);
  (*pcVar1)();
}



/* Entry: 1000ad878; end: 1000ad88b;  */

void FUN_1000ad878(long param_1,long param_2)

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



/* Entry: 1000ad88c; end: 1000adb1f; -[SCFrameRateMonitor initWithAppStartExperimentReader:crashServices:] */

undefined8 *
FUN_1000ad88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_112700778;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126db610;
    func_0x000107c610f4();
    func_0x000107c48c40();
    uVar5 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126db610;
    func_0x000107c610f4();
    func_0x000107c48c40();
    uVar5 = puVar1[8];
    puVar1[8] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126dd6a8;
    func_0x000107c610f4();
    func_0x000107c456f0();
    uVar5 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c4a02c();
    puVar4 = PTR_PTR_1126b6eb0;
    puVar2 = PTR_PTR_1126ae960;
    if ((int)puVar3 == 0) {
      puVar3 = PTR_PTR_1126dd6b0;
      func_0x000107c4d104(PTR_PTR_1126dd6b0);
      func_0x000107c61180();
      func_0x000107c43908(puVar4);
      func_0x000107c61180();
      func_0x000107c3fbc8(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61144(auStack_68,puVar1);
      puVar4 = PTR_PTR_1126aeec0;
      puVar3 = PTR_PTR_1126ae970;
      func_0x000107c5d9b8(PTR_PTR_1126ae970);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_70,auStack_68);
      func_0x000107c3e2d8(puVar4);
      func_0x000107c611b0();
      func_0x000107c61170(puVar3);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
      func_0x000107c61170(puVar2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar4 = puVar2;
      func_0x000107c3dfc0();
      func_0x000107c61170(puVar2);
      if (puVar4 != (undefined *)0x2) {
        func_0x000107c3c3d0(puVar1);
      }
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000adb20; end: 1000adb7b; -[SCFrameRateLogger initWithTargetFrameRate:] */

void FUN_1000adb20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700770;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(double *)((long)puVar1 + 0x40) = 1.0 / (double)param_3;
    *(ulong *)((long)puVar1 + 0x38) = param_3;
    *(double *)((long)puVar1 + 8) = 1.0 / (double)param_3;
  }
  return;
}



/* Entry: 1000adb7c; end: 1000addab; -[SCBadFrameRateStatsTracker initWithAppStartExperimentReader:crashServices:] */

undefined8 *
FUN_1000adb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_70 = PTR_PTR_112700768;
  puVar3 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c4a8b0(PTR_PTR_1126dd6a0);
    func_0x000107c3e170();
    func_0x000107c61180();
    uVar6 = puVar3[1];
    puVar3[1] = puVar4;
    func_0x000107c61170(uVar6);
    puVar4 = PTR_PTR_1126dd6a0;
    func_0x000107c4a8b0();
    if (0 < (long)puVar4) {
      lVar8 = 0;
      do {
        func_0x000107c3d798(puVar3[1]);
        lVar8 = lVar8 + 1;
        puVar4 = PTR_PTR_1126dd6a0;
        func_0x000107c4a8b0();
      } while (lVar8 < (long)puVar4);
    }
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar4 = &UNK_10f552d09;
    func_0x000107c60f50(&UNK_10f552d09,0);
    uVar6 = puVar3[0xf];
    puVar3[0xf] = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = puVar3[0xc];
    puVar3[0xc] = param_4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = puVar3[0xb];
    puVar3[0xb] = param_3;
    func_0x000107c61170(uVar6);
    lVar7 = puVar3[0xb];
    func_0x000107c61174(lVar7);
    lVar8 = lRam0000000113730a78;
    if (lVar7 == 0) {
      *(undefined1 *)(puVar3 + 9) = 0;
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1000addb4;
      puStack_50 = &UNK_110842e18;
      lStack_48 = lVar7;
      func_0x000107c61174(lVar7);
      lVar5 = lVar7;
      if (lVar8 != -1) {
        FUN_10002a2fc(0x113730a78,&puStack_68);
        lVar5 = lStack_48;
      }
      bVar1 = bRam0000000113730a70;
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar7);
      *(byte *)(puVar3 + 9) = bVar1;
      if ((bVar1 & 1) != 0) {
        fVar9 = 1.0;
        func_0x000107c436e4(puVar3[0xb]);
        puVar3[10] = (double)fVar9;
        uVar2 = (undefined1)puVar3[0xb];
        func_0x000107c3ebd4();
        *(undefined1 *)((long)puVar3 + 0x49) = uVar2;
        goto LAB_1000add68;
      }
    }
    puVar3[10] = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar3 + 0x49) = 0;
  }
LAB_1000add68:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1000addac; end: 1000addb3; +[_TtC26SCFrameRateMonitorServices36SCBadFrameRateStatsTrackingConstants kSCBadFrameMaxNumberOfBuckets] */

undefined8 FUN_1000addac(void)

{
  return 9;
}



/* Entry: 1000addb4; end: 1000adde3;  */

void FUN_1000addb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ebd4(uVar1,param_2,&PTR____CFConstantStringClassReference_110f22658,0,0);
  uRam0000000113730a70 = (char)uVar1;
  return;
}



/* Entry: 1000adde4; end: 1000adde7;  */

void FUN_1000adde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d4a0;
  func_0x000107c61520(&UNK_10dd3d4a0,&UNK_1107ad680);
  puRam0000000113097398 = puVar1;
  return;
}



/* Entry: 1000adde8; end: 1000ade27;  */

void FUN_1000adde8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d4a0;
  func_0x000107c61520(&UNK_10dd3d4a0,&UNK_1107ad680);
  puRam0000000113097398 = puVar1;
  return;
}



/* Entry: 1000ade28; end: 1000ae2d7;  */

undefined8 FUN_1000ade28(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x38);
  uVar9 = param_2;
  func_0x000107c61434();
  lVar14 = 0;
  do {
    while (uVar15 != 0) {
      if (lRam00000001130973a0 != -1) {
        uVar9 = 0;
        func_0x000107c61568(0x1130973a0);
      }
      lVar3 = lRam0000000113815520;
      uVar15 = uVar15 - 1 & uVar15;
      if (*(long *)(lRam0000000113815520 + 0x10) != 0) {
        lVar6 = lRam0000000113815520;
        func_0x000107c61434();
        FUN_1000afb9c();
        lVar17 = lVar3;
        if ((uVar9 & 1) != 0) {
          lVar17 = *(long *)(*(long *)(lVar3 + 0x38) + lVar6 * 8);
          func_0x000107c61434(lVar17);
          func_0x000107c6142c(lVar3);
          if (*(long *)(lVar17 + 0x10) != 0) {
            func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar17 + 0x28));
            puVar7 = auStack_a8;
            FUN_1000ae32c(puVar7,param_2,param_3,param_4);
            func_0x000107c606a8();
            uVar10 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            uVar16 = (ulong)puVar7 & (uVar10 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
              while( true ) {
                puVar11 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar16 * 0x18);
                uVar1 = *puVar11;
                uVar9 = puVar11[1];
                uVar2 = (undefined1)puVar11[2];
                FUN_1000ab9d4(uVar1,uVar9,uVar2);
                uVar8 = uVar1;
                FUN_1000af114(uVar1,uVar9,uVar2,param_2,param_3,param_4);
                FUN_10007d980(uVar1,uVar9,uVar2);
                if ((uVar8 & 1) != 0) break;
                uVar16 = uVar16 + 1 & ~uVar10;
                if ((*(ulong *)(lVar17 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) == 0)
                goto LAB_1000ae010;
              }
              goto LAB_1000adeb0;
            }
          }
LAB_1000ae010:
          func_0x000107c6142c(lVar17);
          uVar13 = 0;
          goto LAB_1000ae020;
        }
LAB_1000adeb0:
        func_0x000107c6142c(lVar17);
      }
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ae050);
      (*pcVar4)();
    }
    if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
      uVar13 = 1;
LAB_1000ae020:
      func_0x000107c61574(param_1);
      return uVar13;
    }
    uVar15 = ((ulong *)(param_1 + 0x38))[lVar14];
  } while( true );
}



/* Entry: 1000ae2d8; end: 1000ae2eb;  */

undefined1  [16] FUN_1000ae2d8(void)

{
  return ZEXT816(0x1107ae470);
}



/* Entry: 1000ae2ec; end: 1000ae32b;  */

void FUN_1000ae2ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e6e8;
  func_0x000107c61520(&UNK_10dd3e6e8,&UNK_1107ae470);
  puRam0000000112e08d40 = puVar1;
  return;
}



/* Entry: 1000ae32c; end: 1000aed63;  */

/* WARNING: Possible PIC construction at 0x0001000aed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e5384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059b7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085ae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085ae9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006e84c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010092540c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100674dd0) */
/* WARNING: Removing unreachable block (ram,0x0001006e84c8) */
/* WARNING: Removing unreachable block (ram,0x00010085aea0) */
/* WARNING: Removing unreachable block (ram,0x00010085ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010085aea4) */
/* WARNING: Removing unreachable block (ram,0x00010059b7b8) */
/* WARNING: Removing unreachable block (ram,0x0001003e5388) */
/* WARNING: Removing unreachable block (ram,0x0001000aee80) */
/* WARNING: Removing unreachable block (ram,0x0001000aef60) */
/* WARNING: Removing unreachable block (ram,0x0001000aef64) */
/* WARNING: Removing unreachable block (ram,0x0001000aed40) */
/* WARNING: Removing unreachable block (ram,0x000100925410) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x0001000cee28) */
/* WARNING: Removing unreachable block (ram,0x0001000cee30) */
/* WARNING: Removing unreachable block (ram,0x0001000cef0c) */
/* WARNING: Removing unreachable block (ram,0x0001000cef14) */
/* WARNING: Removing unreachable block (ram,0x0001000cef4c) */
/* WARNING: Removing unreachable block (ram,0x0001000cef54) */
/* WARNING: Removing unreachable block (ram,0x0001000cef6c) */
/* WARNING: Removing unreachable block (ram,0x0001000cef70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong *******
FUN_1000ae32c(ulong *******param_1,ulong *******param_2,ulong *******param_3,ulong param_4,
             ulong *******param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  undefined1 uVar24;
  bool in_ZR;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  bool bVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulong ******ppppppuVar34;
  long *plVar35;
  long *plVar36;
  ulong ******ppppppuVar37;
  undefined *puVar38;
  ulong *******pppppppuVar39;
  uint uVar40;
  ulong *******pppppppuVar41;
  undefined8 *puVar42;
  ulong uVar43;
  ushort *puVar44;
  ulong *******pppppppuVar45;
  int iVar46;
  char *pcVar47;
  ulong *******pppppppuVar48;
  ulong *******pppppppuVar49;
  uint uVar50;
  undefined8 *puVar51;
  ulong uVar52;
  undefined8 uVar53;
  ulong *******pppppppuVar54;
  ulong uVar55;
  int iVar56;
  char *in_x12;
  undefined8 uVar57;
  ulong *******pppppppuVar58;
  ulong *******in_x13;
  ulong *******pppppppuVar59;
  ulong in_x14;
  ulong uVar60;
  undefined8 uVar61;
  ulong uVar62;
  uint uVar63;
  long unaff_x19;
  uint uVar64;
  ulong *******unaff_x21;
  undefined8 unaff_x22;
  ulong *******pppppppuVar65;
  int iVar66;
  ulong *******unaff_x23;
  long lVar67;
  ulong ******unaff_x24;
  ulong *******unaff_x25;
  ulong *******unaff_x26;
  ulong *******unaff_x27;
  int iVar68;
  undefined8 *unaff_x28;
  int iVar69;
  undefined8 unaff_d8;
  ulong *******in_stack_00000038;
  undefined4 *in_stack_00000040;
  ulong *******in_stack_00000048;
  undefined *in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  int in_stack_00000068;
  ulong *******in_stack_00000078;
  ulong ******in_stack_00000098;
  uint in_stack_000000a0;
  ulong *******in_stack_000000a8;
  ulong *******in_stack_000000b0;
  ulong *******in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  ulong *******in_stack_000000f0;
  ulong *******in_stack_000000f8;
  ulong *******in_stack_00000100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong *******pppppppuStack_e8;
  ulong *******pppppppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  uint uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong uStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulong uStack_70;
  uint uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  
  pppppppuVar39 = (ulong *******)&stack0xffffffffffffffd0;
  uVar40 = (uint)param_4;
  uVar50 = uVar40 >> 2 & 0x3f;
  pppppppuVar41 = (ulong *******)(ulong)uVar50;
  pcVar47 = &UNK_10dd3e5d8;
  pppppppuVar54 = (ulong *******)(ulong)*(ushort *)(&UNK_10dd3e5d8 + (long)pppppppuVar41 * 2);
  pppppppuVar59 = (ulong *******)((long)pppppppuVar54 * 4 + 0x1000ae360);
  uVar63 = (uint)param_2;
  uVar64 = (uint)param_3;
  pppppppuVar48 = param_2;
  pppppppuVar58 = param_1;
  switch(uVar50) {
  default:
    pppppppuVar59 = (ulong *******)0x0;
    func_0x000107c60690(0);
    if (((ulong)param_3 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000ae38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(param_2 + 0x21ba7cc6) * 4 + 0x1000aeb08))();
      return pppppppuVar59;
    }
code_r0x0001000ae904:
    uVar61 = 2;
    goto code_r0x0001000aeba8;
  case 1:
    uVar61 = 1;
    break;
  case 2:
    uVar61 = 4;
    break;
  case 3:
    func_0x000107c60690(5);
    uVar50 = uVar63 & 0xff;
    if (uVar50 < 0xb) {
      if (uVar50 != 9) {
        if (uVar50 == 10) goto code_r0x0001000aeb80;
code_r0x0001000ae9d0:
        func_0x000107c60690(2);
        uVar63 = uVar63 & 0xff;
        if (uVar63 < 4) {
          pcVar47 = "metaInfoProvider";
          if (uVar63 != 2) {
            pcVar47 = "extensionInfoProvider";
          }
          pppppppuVar48 = (ulong *******)0x800000010f215320;
          pppppppuVar54 = (ulong *******)0xd00000000000001b;
          if (((ulong)param_2 & 0xff) != 0) {
            pppppppuVar48 = (ulong *******)0xea0000000000746e;
            pppppppuVar54 = (ulong *******)0x657645656b616873;
          }
          pppppppuVar59 = (ulong *******)0xd000000000000010;
          if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
            pppppppuVar59 = pppppppuVar54;
          }
          param_3 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
          if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
            param_3 = pppppppuVar48;
          }
        }
        else {
          pcVar47 = "featureSettingsProvider";
          pppppppuVar48 = (ulong *******)0xd000000000000016;
          if (uVar63 != 7) {
            pcVar47 = "DeepLinkHandling";
            pppppppuVar48 = (ulong *******)0xd000000000000017;
          }
          pcVar2 = "startSyncManagerUnauth";
          pppppppuVar59 = (ulong *******)0xd000000000000014;
          if (uVar63 != 6) {
            pcVar2 = pcVar47;
            pppppppuVar59 = pppppppuVar48;
          }
          pcVar47 = "composerLogProvider";
          pppppppuVar48 = (ulong *******)0xd000000000000015;
          if (uVar63 != 4) {
            pcVar47 = "startSyncManagerAuth";
            pppppppuVar48 = (ulong *******)0xd000000000000013;
          }
          if (uVar63 < 6) {
            pcVar2 = pcVar47;
            pppppppuVar59 = pppppppuVar48;
          }
          param_3 = (ulong *******)((ulong)pcVar2 | 0x8000000000000000);
        }
        goto code_r0x00010bdb78a8;
      }
      goto code_r0x0001000aed5c;
    }
    if (uVar50 == 0xb) goto code_r0x0001000aeb9c;
    if (uVar50 != 0xc) goto code_r0x0001000ae9d0;
    goto code_r0x0001000aebc4;
  case 4:
    uVar61 = 6;
    break;
  case 5:
    func_0x000107c60690(7);
  case 0x3c:
    uVar50 = uVar63 & 0xff;
    uVar64 = uVar63 >> 5 & 7;
    if (2 < uVar64) {
      if (uVar64 < 5) {
        if (uVar64 == 3) {
          if (uVar50 < 100) {
            if (uVar50 < 0x62) {
              if (uVar50 == 0x60) {
                pppppppuVar59 = (ulong *******)0x0;
              }
              else {
                pppppppuVar59 = (ulong *******)0x1;
              }
            }
            else if (uVar50 == 0x62) {
              pppppppuVar59 = (ulong *******)0x2;
            }
            else {
              pppppppuVar59 = (ulong *******)0x3;
            }
          }
          else if (uVar50 < 0x66) {
            if (uVar50 == 100) {
              pppppppuVar59 = (ulong *******)0x4;
            }
            else {
              pppppppuVar59 = (ulong *******)0x6;
            }
          }
          else if (uVar50 == 0x66) {
            pppppppuVar59 = (ulong *******)0x7;
          }
          else {
            pppppppuVar59 = (ulong *******)0x8;
          }
        }
        else if (uVar50 < 0x84) {
          if (uVar50 < 0x82) {
            if (uVar50 == 0x80) {
              pppppppuVar59 = (ulong *******)0x9;
            }
            else {
              pppppppuVar59 = (ulong *******)0xa;
            }
          }
          else if (uVar50 == 0x82) {
            pppppppuVar59 = (ulong *******)0xb;
          }
          else {
            pppppppuVar59 = (ulong *******)0xd;
          }
        }
        else if (uVar50 < 0x86) {
          if (uVar50 == 0x84) {
            pppppppuVar59 = (ulong *******)0xe;
          }
          else {
            pppppppuVar59 = (ulong *******)0xf;
          }
        }
        else if (uVar50 == 0x86) {
          pppppppuVar59 = (ulong *******)0x10;
        }
        else {
          pppppppuVar59 = (ulong *******)0x11;
        }
      }
      else if (uVar64 == 5) {
        if (uVar50 < 0xa4) {
          if (uVar50 < 0xa2) {
            if (uVar50 == 0xa0) {
              pppppppuVar59 = (ulong *******)0x12;
            }
            else {
              pppppppuVar59 = (ulong *******)0x13;
            }
          }
          else if (uVar50 == 0xa2) {
            pppppppuVar59 = (ulong *******)0x14;
          }
          else {
            pppppppuVar59 = (ulong *******)0x15;
          }
        }
        else if (uVar50 < 0xa6) {
          if (uVar50 == 0xa4) {
            pppppppuVar59 = (ulong *******)0x16;
          }
          else {
            pppppppuVar59 = (ulong *******)0x17;
          }
        }
        else {
          if (uVar50 != 0xa6) {
            func_0x000107c60690(0x1a);
            pppppppuVar59 = (ulong *******)0xd000000000000012;
            param_3 = (ulong *******)0x800000010f2162a0;
            goto code_r0x00010bdb78a8;
          }
          pppppppuVar59 = (ulong *******)0x18;
        }
      }
      else if (uVar50 < 0xc2) {
        if (uVar50 == 0xc0) {
          pppppppuVar59 = (ulong *******)0x1b;
        }
        else {
          pppppppuVar59 = (ulong *******)0x1c;
        }
      }
      else if (uVar50 == 0xc2) {
        pppppppuVar59 = (ulong *******)0x1d;
      }
      else if (uVar50 == 0xc3) {
        pppppppuVar59 = (ulong *******)0x1e;
      }
      else {
        pppppppuVar59 = (ulong *******)0x1f;
      }
      func_0x000107c60690(pppppppuVar59);
      return pppppppuVar59;
    }
    if (uVar64 == 0) {
      func_0x000107c60690(5);
      pppppppuVar59 = (ulong *******)0xd000000000000019;
      pcVar47 = "LockedCameraCapture";
      if (uVar50 != 1) {
        pppppppuVar59 = (ulong *******)0xd000000000000012;
        pcVar47 = "invalidateSessionContents";
      }
      param_3 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
    }
    else {
      uVar63 = uVar63 & 0x1f;
      if (uVar64 == 1) {
        func_0x000107c60690(0xc);
        pppppppuVar59 = (ulong *******)0xd000000000000010;
        if (uVar63 != 1) {
          pppppppuVar59 = (ulong *******)0x6573624f6c6c6163;
        }
        param_3 = (ulong *******)0x800000010f216480;
        if (uVar63 != 1) {
          param_3 = (ulong *******)0xec00000072657672;
        }
      }
      else {
        func_0x000107c60690(0x19);
        pppppppuVar48 = (ulong *******)0xed00007261657070;
        pppppppuVar54 = (ulong *******)0x4164694477656976;
        if (uVar63 != 3) {
          pppppppuVar48 = (ulong *******)0xee00686374656665;
          pppppppuVar54 = (ulong *******)0x725064616f6c7075;
        }
        param_3 = (ulong *******)0x800000010f2162e0;
        pppppppuVar59 = (ulong *******)0xd000000000000011;
        if (uVar63 != 2) {
          param_3 = pppppppuVar48;
          pppppppuVar59 = pppppppuVar54;
        }
        pppppppuVar48 = (ulong *******)0xed000074696e4972;
        pppppppuVar54 = (ulong *******)0x65746c69466f6567;
        if (((ulong)param_2 & 0x1f) != 0) {
          pppppppuVar48 = (ulong *******)0x800000010f216300;
          pppppppuVar54 = (ulong *******)0xd000000000000017;
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0x1f) == 0) {
          pppppppuVar59 = pppppppuVar54;
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0x1f) == 0) {
          param_3 = pppppppuVar48;
        }
      }
    }
    goto code_r0x00010bdb78a8;
  case 6:
    func_0x000107c60690(8);
    if ((uVar63 & 0xff) == 4) {
      func_0x000107c60690(1);
      pppppppuVar59 = (ulong *******)0x4c63696d616e7964;
      param_3 = (ulong *******)0xed0000656c61636f;
    }
    else if ((uVar63 & 0xff) == 5) {
      func_0x000107c60690(2);
      pppppppuVar59 = (ulong *******)0x49726f74696e6f6d;
      param_3 = (ulong *******)0xeb0000000074696e;
    }
    else {
      func_0x000107c60690(0);
      uVar63 = uVar63 & 0xff;
      pppppppuVar59 = (ulong *******)0x6e49726567676f6c;
      param_3 = (ulong *******)0xea00000000007469;
      if (uVar63 != 2) {
        pppppppuVar59 = (ulong *******)0xd000000000000013;
        param_3 = (ulong *******)0x800000010f2166b0;
      }
      pppppppuVar48 = (ulong *******)0xd000000000000010;
      pcVar47 = "backgroundExecution";
      if (((ulong)param_2 & 0xff) != 0) {
        pppppppuVar48 = (ulong *******)0xd000000000000013;
        pcVar47 = "loggerDebugViewInit";
      }
      if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
        pppppppuVar59 = pppppppuVar48;
      }
      if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
        param_3 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
      }
    }
    goto code_r0x00010bdb78a8;
  case 7:
    func_0x000107c60690(9);
    uVar50 = uVar63 & 0xff;
    if (uVar50 < 5) {
      if (uVar50 == 3) goto code_r0x0001000aed5c;
      if (uVar50 == 4) goto code_r0x0001000aeb80;
    }
    else {
      if (uVar50 == 5) goto code_r0x0001000aeb9c;
      if (uVar50 == 6) goto code_r0x0001000aebc4;
    }
    func_0x000107c60690(2);
    if (((ulong)param_2 & 0xff) == 0) {
      pppppppuVar59 = (ulong *******)0x65526e4f74696e69;
      param_3 = (ulong *******)0xec000000656d7573;
      goto code_r0x00010bdb78a8;
    }
    param_3 = (ulong *******)0xeb000000006e6967;
    pppppppuVar59 = (ulong *******)0x6f4c6e4f74696e69;
    pcVar47 = "initOnForeground";
    lVar67 = -5;
    goto code_r0x0001000aea48;
  case 8:
    uVar61 = 10;
    break;
  case 9:
    func_0x000107c60690(0xb);
    uVar50 = uVar63 >> 6 & 3;
    if (uVar50 == 0) {
      func_0x000107c60690(3);
      uVar63 = uVar63 & 0xff;
      if (uVar63 < 4) {
        param_3 = (ulong *******)0xec00000070756d72;
        pppppppuVar59 = (ulong *******)0x615779636167656c;
        if (uVar63 != 2) {
          param_3 = (ulong *******)0x800000010f2153e0;
          pppppppuVar59 = (ulong *******)0xd000000000000016;
        }
        pppppppuVar48 = (ulong *******)0xd000000000000013;
        pcVar47 = "warmupCustomStories";
        if (((ulong)param_2 & 0xff) != 0) {
          pcVar47 = "snapReadReceiptCleanup";
        }
        pppppppuVar54 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
        bVar29 = SBORROW4(uVar63,1);
        iVar46 = uVar63 - 1;
        bVar30 = uVar63 == 1;
      }
      else {
        pppppppuVar48 = (ulong *******)0xee00676e69676461;
        pppppppuVar54 = (ulong *******)0x42736569726f7473;
        if (uVar63 != 7) {
          pppppppuVar48 = (ulong *******)0x800000010f215380;
          pppppppuVar54 = (ulong *******)0xd00000000000001a;
        }
        param_3 = (ulong *******)0x800000010f2153a0;
        pppppppuVar59 = (ulong *******)0xd000000000000010;
        if (uVar63 != 6) {
          param_3 = pppppppuVar48;
          pppppppuVar59 = pppppppuVar54;
        }
        pppppppuVar54 = (ulong *******)0x800000010f2153c0;
        pppppppuVar48 = (ulong *******)0xd00000000000001c;
        if (uVar63 != 4) {
          pppppppuVar54 = (ulong *******)0xec00000073656972;
          pppppppuVar48 = (ulong *******)0x6f74536863746566;
        }
        bVar29 = SBORROW4(uVar63,5);
        iVar46 = uVar63 - 5;
        bVar30 = uVar63 == 5;
      }
      if (bVar30 || iVar46 < 0 != bVar29) {
        pppppppuVar59 = pppppppuVar48;
        param_3 = pppppppuVar54;
      }
      goto code_r0x00010bdb78a8;
    }
    if (uVar50 == 1) {
      func_0x000107c60690(5);
      pppppppuVar41 = (ulong *******)0x800000010f2161a0;
      in_ZR = (uVar63 & 0x3f) == 1;
      param_2 = (ulong *******)0xd000000000000012;
      if (!in_ZR) {
        param_2 = (ulong *******)0x6163696669746f6e;
      }
      pcVar47 = (char *)0xec0000006e6f6974;
      goto code_r0x0001000ae568;
    }
    uVar63 = uVar63 & 0xff;
    if (0x81 < uVar63) {
      if (uVar63 != 0x82) goto code_r0x0001000aebc4;
      goto code_r0x0001000aebbc;
    }
    if (uVar63 != 0x80) goto code_r0x0001000aeb80;
    goto code_r0x0001000aed5c;
  case 10:
    uVar61 = 0xc;
    break;
  case 0xb:
    func_0x000107c60690(0xd);
    uVar64 = uVar64 & 0xff;
    if (uVar64 == 1 || ((ulong)param_3 & 0xff) == 0) {
      if (((ulong)param_3 & 0xff) == 0) {
        uVar61 = 0;
      }
      else {
        uVar61 = 2;
      }
    }
    else {
      if (uVar64 == 2) {
        __ss6HasherV8_combineyySuF(3);
        uVar63 = uVar63 & 0xff;
        pppppppuVar59 = (ulong *******)0xe900000000000072;
        uVar61 = 0x65766f6563696f76;
        if (uVar63 != 3) {
          pppppppuVar59 = (ulong *******)0xeb00000000726573;
          uVar61 = 0x617245636967616d;
        }
        uVar53 = 0x7372656b63697473;
        if (uVar63 != 2) {
          uVar53 = uVar61;
        }
        pppppppuVar54 = (ulong *******)0xe800000000000000;
        if (uVar63 != 2) {
          pppppppuVar54 = pppppppuVar59;
        }
        bVar30 = ((ulong)param_2 & 0xff) != 0;
        uVar61 = 0x65646f4d6961;
        if (bVar30) {
          uVar61 = 0x736e6f6974706163;
        }
        pppppppuVar59 = (ulong *******)0xe600000000000000;
        if (bVar30) {
          pppppppuVar59 = (ulong *******)0xe800000000000000;
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
          uVar53 = uVar61;
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
          pppppppuVar54 = pppppppuVar59;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar53,pppppppuVar54);
        goto _swift_bridgeObjectRelease;
      }
      if (uVar64 != 3) {
        __ss6HasherV8_combineyySuF(1);
        pppppppuVar59 = (ulong *******)0xd000000000000013;
        param_3 = (ulong *******)0x800000010f216a00;
        goto code_r0x00010bdb78a8;
      }
      uVar61 = 4;
    }
    __ss6HasherV8_combineyySuF(uVar61);
    __ss6HasherV8_combineyySuF(param_2);
    return param_2;
  case 0xc:
    uVar61 = 0xe;
    break;
  case 0xd:
  case 0x3a:
    func_0x000107c60690(0x10);
    if (((ulong)param_3 & 0xff) != 0) {
      if ((uVar64 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e53ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)param_2 + 0x10dd3f924) * 4 + 0x1003e53b0))();
        return param_1;
      }
      func_0x000107c60690(3);
      func_0x000107c60690(param_2);
      return param_2;
    }
    func_0x000107c60690(1);
    uVar63 = uVar63 & 0xff;
    pppppppuVar59 = (ulong *******)0x6863746566657270;
    if (uVar63 != 2) {
      pppppppuVar59 = (ulong *******)0x656e656870617267;
    }
    param_3 = (ulong *******)0xe800000000000000;
    if (uVar63 != 2) {
      param_3 = (ulong *******)0xee00726567676f4c;
    }
    pppppppuVar48 = (ulong *******)0xe900000000000061;
    pppppppuVar54 = (ulong *******)0x7461446775626564;
    if (((ulong)param_2 & 0xff) != 0) {
      pppppppuVar48 = (ulong *******)0xec00000072656c64;
      pppppppuVar54 = (ulong *******)0x6e6148726f727265;
    }
    if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
      pppppppuVar59 = pppppppuVar54;
    }
    if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
      param_3 = pppppppuVar48;
    }
    goto code_r0x00010bdb78a8;
  case 0xe:
    func_0x000107c60690(0x12);
    uVar64 = uVar64 & 0xff;
    if (uVar64 == 1 || ((ulong)param_3 & 0xff) == 0) {
      if (((ulong)param_3 & 0xff) != 0) {
        __ss6HasherV8_combineyySuF(9);
        if (((ulong)param_2 & 0xff) == 0) {
          uVar61 = 0xd000000000000012;
          pcVar47 = "replyActivationWorkflow";
        }
        else {
          uVar61 = 0xd000000000000017;
          pcVar47 = "miniCameraLensIconWorkflow";
          if ((uVar63 & 0xff) != 1) {
            uVar61 = 0xd00000000000001a;
            pcVar47 = "LensCarouselPreview";
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar61,(ulong)pcVar47 | 0x8000000000000000);
        pppppppuVar54 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
        goto _swift_bridgeObjectRelease;
      }
      __ss6HasherV8_combineyySuF(3);
      uVar63 = uVar63 & 0xff;
      pppppppuVar54 = (ulong *******)0xe900000000000073;
      uVar61 = 0x65736e654c746567;
      if (uVar63 != 2) {
        pppppppuVar54 = (ulong *******)0xef74736575716552;
        uVar61 = 0x70747448736e656c;
      }
      pppppppuVar59 = (ulong *******)0x800000010f216ed0;
      uVar53 = 0xd000000000000010;
      if (((ulong)param_2 & 0xff) != 0) {
        pppppppuVar59 = (ulong *******)0xea0000000000736e;
        uVar53 = 0x654c657461657263;
      }
      if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
        uVar61 = uVar53;
      }
      if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
        pppppppuVar54 = pppppppuVar59;
      }
    }
    else {
      if (uVar64 == 2) {
        __ss6HasherV8_combineyySuF(10);
        __ss6HasherV8_combineyySuF(param_2);
        return param_2;
      }
      if (uVar64 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1048a49d4 + (ulong)*(byte *)((long)param_2 + 0x10dd3fb92) * 4))();
        return param_1;
      }
      __ss6HasherV8_combineyySuF(0xb);
      bVar30 = ((ulong)param_2 & 0xff) != 1;
      uVar61 = 0x74754265736f6c63;
      if (bVar30) {
        uVar61 = 0x766f72506e6f6369;
      }
      pppppppuVar54 = (ulong *******)0xeb000000006e6f74;
      if (bVar30) {
        pppppppuVar54 = (ulong *******)0xec00000072656469;
      }
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar61,pppppppuVar54);
    goto _swift_bridgeObjectRelease;
  case 0xf:
    func_0x000107c60690(0x13);
  case 0x33:
    uVar50 = uVar63 >> 4 & 0xf;
    if (uVar50 < 4) {
      if (uVar50 < 2) {
        if (uVar50 == 0) {
          func_0x000107c60690(0x12);
          bVar30 = (uVar63 & 0xff) != 1;
          pppppppuVar59 = (ulong *******)0x4264657469736976;
          if (bVar30) {
            pppppppuVar59 = (ulong *******)0xd000000000000010;
          }
          param_3 = (ulong *******)0xe900000000000079;
          if (bVar30) {
            param_3 = (ulong *******)0x800000010f217060;
          }
        }
        else {
          func_0x000107c60690(0x19);
          if (((ulong)param_2 & 0xf) == 0) {
            pppppppuVar59 = (ulong *******)0x6c6172656e6567;
            param_3 = (ulong *******)0xe700000000000000;
          }
          else {
            pppppppuVar59 = (ulong *******)0x6d6f72684370616d;
            param_3 = (ulong *******)0xeb00000000325665;
            if ((uVar63 & 0xf) != 1) {
              pppppppuVar59 = (ulong *******)0xd000000000000010;
              param_3 = (ulong *******)0x800000010f217000;
            }
          }
        }
        goto code_r0x00010bdb78a8;
      }
      if (uVar50 == 2) {
        uVar63 = uVar63 & 0xff;
        if (uVar63 < 0x22) {
          if (uVar63 == 0x20) {
            pppppppuVar59 = (ulong *******)0x0;
          }
          else {
            pppppppuVar59 = (ulong *******)0x1;
          }
        }
        else if (uVar63 == 0x22) {
          pppppppuVar59 = (ulong *******)0x2;
        }
        else {
          pppppppuVar59 = (ulong *******)0x3;
        }
      }
      else {
        uVar63 = uVar63 & 0xff;
        if (uVar63 < 0x32) {
          if (uVar63 == 0x30) {
            pppppppuVar59 = (ulong *******)0x4;
          }
          else {
            pppppppuVar59 = (ulong *******)0x5;
          }
        }
        else if (uVar63 == 0x32) {
          pppppppuVar59 = (ulong *******)0x6;
        }
        else {
          pppppppuVar59 = (ulong *******)0x7;
        }
      }
    }
    else if (uVar50 < 6) {
      if (uVar50 == 4) {
        uVar63 = uVar63 & 0xff;
        if (uVar63 < 0x42) {
          if (uVar63 == 0x40) {
            pppppppuVar59 = (ulong *******)0x8;
          }
          else {
            pppppppuVar59 = (ulong *******)0x9;
          }
        }
        else if (uVar63 == 0x42) {
          pppppppuVar59 = (ulong *******)0xa;
        }
        else {
          pppppppuVar59 = (ulong *******)0xb;
        }
      }
      else {
        uVar63 = uVar63 & 0xff;
        if (uVar63 < 0x52) {
          if (uVar63 != 0x50) {
            func_0x000107c60690(0xd);
            pppppppuVar59 = (ulong *******)0x6e6f697461636f6c;
            param_3 = (ulong *******)0xef676e6972616853;
            goto code_r0x00010bdb78a8;
          }
          pppppppuVar59 = (ulong *******)0xc;
        }
        else if (uVar63 == 0x52) {
          pppppppuVar59 = (ulong *******)0xe;
        }
        else {
          pppppppuVar59 = (ulong *******)0xf;
        }
      }
    }
    else if (uVar50 == 6) {
      uVar63 = uVar63 & 0xff;
      if (uVar63 < 0x62) {
        if (uVar63 == 0x60) {
          pppppppuVar59 = (ulong *******)0x10;
        }
        else {
          pppppppuVar59 = (ulong *******)0x11;
        }
      }
      else if (uVar63 == 0x62) {
        pppppppuVar59 = (ulong *******)0x13;
      }
      else {
        pppppppuVar59 = (ulong *******)0x14;
      }
    }
    else if (uVar50 == 7) {
      uVar63 = uVar63 & 0xff;
      if (uVar63 < 0x72) {
        if (uVar63 == 0x70) {
          pppppppuVar59 = (ulong *******)0x15;
        }
        else {
          pppppppuVar59 = (ulong *******)0x16;
        }
      }
      else if (uVar63 == 0x72) {
        pppppppuVar59 = (ulong *******)0x17;
      }
      else {
        pppppppuVar59 = (ulong *******)0x18;
      }
    }
    else if ((uVar63 & 0xff) == 0x80) {
      pppppppuVar59 = (ulong *******)0x1a;
    }
    else if ((uVar63 & 0xff) == 0x81) {
      pppppppuVar59 = (ulong *******)0x1b;
    }
    else {
      pppppppuVar59 = (ulong *******)0x1c;
    }
    func_0x000107c60690(pppppppuVar59);
    return pppppppuVar59;
  case 0x10:
    func_0x000107c60690(0x14);
    uVar64 = uVar64 & 0xff;
    if (uVar64 != 1 && ((ulong)param_3 & 0xff) != 0) {
      if (uVar64 != 2) {
        if (uVar64 == 3) {
          unaff_x21 = (ulong *******)0xe90000000000006c;
          func_0x000107c60690(4);
          uVar50 = uVar63 & 0xff;
          if (uVar50 == 1 || ((ulong)param_2 & 0xff) == 0) {
            pppppppuVar59 = (ulong *******)0x65646f4d64616f6c;
            param_3 = unaff_x21;
            if (((ulong)param_2 & 0xff) != 0) {
              pppppppuVar59 = (ulong *******)0x6f4d64616f6c6e75;
              param_3 = (ulong *******)0xeb000000006c6564;
            }
            goto code_r0x00010bdb78a8;
          }
          pcVar47 = "VideoFilterCoordinator";
          goto code_r0x0001000ae43c;
        }
        if (param_2 == (ulong *******)0x0) goto code_r0x0001000aeb9c;
        if (param_2 == (ulong *******)0x1) goto code_r0x0001000aeb94;
        goto code_r0x0001000aebdc;
      }
      goto code_r0x0001000ae904;
    }
    if (((ulong)param_3 & 0xff) == 0) goto code_r0x0001000aeae8;
    uVar61 = 1;
    goto code_r0x0001000aeba8;
  case 0x11:
    param_2 = (ulong *******)(ulong)(uVar63 & 0xff);
    func_0x000107c60690(0x15);
  case 0x37:
    iVar46 = (int)param_2;
    if (iVar46 < 5) {
      if (iVar46 == 2) goto code_r0x0001000aed5c;
      if (iVar46 == 3) {
code_r0x0001000aeb80:
        param_2 = (ulong *******)0x1;
        goto code_r0x0001000ae86c;
      }
      if (iVar46 == 4) {
code_r0x0001000aeb9c:
        param_2 = (ulong *******)0x3;
        goto code_r0x0001000ae86c;
      }
    }
    else {
      if (iVar46 == 5) {
code_r0x0001000aebc4:
        param_2 = (ulong *******)0x4;
        goto code_r0x0001000ae86c;
      }
      if (iVar46 == 6) {
code_r0x0001000aeb94:
        param_2 = (ulong *******)0x5;
        goto code_r0x0001000ae86c;
      }
      if (iVar46 == 7) {
code_r0x0001000aebdc:
        param_2 = (ulong *******)0x6;
        goto code_r0x0001000ae86c;
      }
    }
    func_0x000107c60690(2);
    pppppppuVar59 = (ulong *******)0x6d6f7250776f6873;
    if (iVar46 != 1) {
      pppppppuVar59 = (ulong *******)0x635365736f707865;
    }
    param_3 = (ulong *******)0xea00000000007470;
    if (iVar46 != 1) {
      param_3 = (ulong *******)0xeb0000000065706f;
    }
    goto code_r0x00010bdb78a8;
  case 0x12:
    func_0x000107c60690(0x16);
    uVar50 = uVar63 & 0xff;
    uVar64 = uVar63 >> 5 & 7;
    if (2 < uVar64) {
      if (uVar64 < 5) {
        if (uVar64 == 3) {
          if (uVar50 < 0x62) {
            if (uVar50 == 0x60) {
              pppppppuVar59 = (ulong *******)0x2;
            }
            else {
              pppppppuVar59 = (ulong *******)0x3;
            }
          }
          else if (uVar50 == 0x62) {
            pppppppuVar59 = (ulong *******)0x4;
          }
          else {
            pppppppuVar59 = (ulong *******)0x5;
          }
        }
        else if (uVar50 < 0x82) {
          if (uVar50 == 0x80) {
            pppppppuVar59 = (ulong *******)0x6;
          }
          else {
            pppppppuVar59 = (ulong *******)0x7;
          }
        }
        else if (uVar50 == 0x82) {
          pppppppuVar59 = (ulong *******)0x8;
        }
        else {
          pppppppuVar59 = (ulong *******)0x9;
        }
      }
      else if (uVar64 == 5) {
        if (uVar50 < 0xa2) {
          if (uVar50 == 0xa0) {
            pppppppuVar59 = (ulong *******)0xa;
          }
          else {
            pppppppuVar59 = (ulong *******)0xb;
          }
        }
        else if (uVar50 == 0xa2) {
          pppppppuVar59 = (ulong *******)0xc;
        }
        else {
          pppppppuVar59 = (ulong *******)0xd;
        }
      }
      else if (uVar50 == 0xc0) {
        pppppppuVar59 = (ulong *******)0xe;
      }
      else {
        pppppppuVar59 = (ulong *******)0x10;
      }
      func_0x000107c60690(pppppppuVar59);
      return pppppppuVar59;
    }
    if (uVar64 == 0) {
      func_0x000107c60690(0);
      pcVar1 = "doubleEncryptionResolver";
      pcVar2 = "doubleEncryptionInvoker";
      pcVar47 = "encryptionInfoProvider";
      bVar30 = uVar50 == 1;
      pppppppuVar48 = (ulong *******)0xd000000000000017;
      if (!bVar30) {
        pppppppuVar48 = (ulong *******)0xd000000000000016;
      }
    }
    else {
      if (uVar64 != 1) {
        func_0x000107c60690(0xf);
        bVar30 = (uVar63 & 0x1f) != 1;
        pppppppuVar59 = (ulong *******)0x7475436b63697571;
        if (bVar30) {
          pppppppuVar59 = (ulong *******)0x6c6172656e6567;
        }
        param_3 = (ulong *******)0xe800000000000000;
        if (bVar30) {
          param_3 = (ulong *******)0xe700000000000000;
        }
        goto code_r0x00010bdb78a8;
      }
      uVar50 = uVar63 & 0x1f;
      func_0x000107c60690(1);
      pcVar1 = "opportunisticRetranscode";
      pcVar2 = "snapDocTranscode";
      pppppppuVar48 = (ulong *******)0xd000000000000010;
      pcVar47 = "snapDocTranscodeForExport";
      bVar30 = uVar50 == 1;
      if (!bVar30) {
        pppppppuVar48 = (ulong *******)0xd000000000000019;
      }
    }
    if (!bVar30) {
      pcVar2 = pcVar47;
    }
    pppppppuVar59 = (ulong *******)0xd000000000000018;
    if (uVar50 != 0) {
      pppppppuVar59 = pppppppuVar48;
      pcVar1 = pcVar2;
    }
    param_3 = (ulong *******)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    goto code_r0x00010bdb78a8;
  case 0x13:
    uVar61 = 0x17;
    break;
  case 0x14:
  case 0x3f:
    func_0x000107c60690(0x18);
  case 0x38:
    if ((uVar64 & 0xff) == 1 || ((ulong)param_3 & 0xff) == 0) {
      if (((ulong)param_3 & 0xff) == 0) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(param_2);
        return param_2;
      }
      __ss6HasherV8_combineyySuF(5);
      uVar50 = uVar63 & 0xff;
      pppppppuVar48 = (ulong *******)0xeb00000000646565;
      uVar53 = 0x4673646e65697266;
      pppppppuVar59 = (ulong *******)0xed00006465654674;
      uVar61 = 0x6867696c746f7073;
      if (uVar50 != 3) {
        pppppppuVar59 = (ulong *******)0xe700000000000000;
        uVar61 = 0x6e776f6e6b6e75;
      }
      uVar57 = 0x79726f7473;
      if (uVar50 != 2) {
        uVar57 = uVar61;
      }
      pppppppuVar54 = (ulong *******)0xe500000000000000;
      if (uVar50 != 2) {
        pppppppuVar54 = pppppppuVar59;
      }
      pppppppuVar59 = (ulong *******)0xe300000000000000;
      uVar61 = 0x70616d;
    }
    else {
      if ((uVar64 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1048aa5ec + (ulong)*(byte *)(param_2 + 0x21ba8105) * 4))();
        return param_1;
      }
      __ss6HasherV8_combineyySuF(10);
      uVar50 = uVar63 & 0xff;
      pppppppuVar48 = (ulong *******)0xe900000000000064;
      uVar53 = 0x6565466f54646461;
      uVar61 = 0x6574496863746566;
      pppppppuVar59 = (ulong *******)0xea0000000000736d;
      if (uVar50 != 3) {
        uVar61 = 0xd000000000000013;
        pppppppuVar59 = (ulong *******)0x800000010f217560;
      }
      uVar57 = 0x646565466e497369;
      if (uVar50 != 2) {
        uVar57 = uVar61;
      }
      pppppppuVar54 = (ulong *******)0xe800000000000000;
      if (uVar50 != 2) {
        pppppppuVar54 = pppppppuVar59;
      }
      pppppppuVar59 = (ulong *******)0xee00646565466d6f;
      uVar61 = 0x724665766f6d6572;
    }
    if (((ulong)param_2 & 0xff) != 0) {
      pppppppuVar48 = pppppppuVar59;
      uVar53 = uVar61;
    }
    if ((uVar63 & 0xff) < 2) {
      pppppppuVar54 = pppppppuVar48;
      uVar57 = uVar53;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar57,pppppppuVar54);
_swift_bridgeObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppppppuVar54);
    return pppppppuVar54;
  case 0x15:
    uVar61 = 0x19;
    break;
  case 0x16:
    uVar61 = 0x1a;
    break;
  case 0x17:
    uVar61 = 0x1b;
    break;
  case 0x18:
    func_0x000107c60690(0x1c);
    unaff_x21 = (ulong *******)((ulong)param_3 & 0xff);
    if (((ulong)param_3 & 0xff00) == 0x100) {
      uVar43 = (long)(char)param_3 + (ulong)(param_2 >= (ulong *******)0x3);
      if ((long)-uVar43 < 0 != SCARRY8(~uVar43,(ulong)(param_2 < (ulong *******)0x3)))
      goto code_r0x0001000ae5c8;
      if (param_2 != (ulong *******)0x0 || unaff_x21 != (ulong *******)0x0) {
        if (param_2 != (ulong *******)0x1 || unaff_x21 != (ulong *******)0x0)
        goto code_r0x0001000aeb9c;
        goto code_r0x0001000aebbc;
      }
    }
    else {
      func_0x000107c60690(0);
      if (unaff_x21 != (ulong *******)0x1) goto code_r0x0001000aeae8;
    }
    goto code_r0x0001000aeb80;
  case 0x19:
    func_0x000107c60690(0x1e);
    uVar50 = uVar63 & 0xff;
    if (9 < uVar50) {
      if (uVar50 == 10) goto code_r0x0001000aeb9c;
      if (uVar50 == 0xb) goto code_r0x0001000aebc4;
      goto code_r0x0001000ae91c;
    }
    if (uVar50 != 8) goto code_r0x0001000ae58c;
    goto code_r0x0001000aed5c;
  case 0x1a:
    func_0x000107c60690(0x1f);
    if ((uVar63 & 0xff) == 3) goto code_r0x0001000aeb80;
    if ((uVar63 & 0xff) == 4) goto code_r0x0001000aebbc;
    func_0x000107c60690(0);
    if (((ulong)param_2 & 0xff) == 0) {
      pppppppuVar59 = (ulong *******)0x614264616f6c6572;
      param_3 = (ulong *******)0xeb00000000656764;
      goto code_r0x00010bdb78a8;
    }
    param_3 = (ulong *******)0xe90000000000006e;
    pppppppuVar59 = (ulong *******)0x6f63496863746566;
    pcVar47 = "bitmojiBadgeReload";
    lVar67 = -3;
code_r0x0001000aea48:
    if ((uVar63 & 0xff) != 1) {
      pppppppuVar59 = (ulong *******)(lVar67 + -0x2fffffffffffffeb);
      param_3 = (ulong *******)((ulong)(pcVar47 + -0x20) | 0x8000000000000000);
    }
    goto code_r0x00010bdb78a8;
  case 0x1b:
    pppppppuVar59 = (ulong *******)0x20;
    func_0x000107c60690(0x20);
    if ((param_4 & 3) != 0) {
      if ((uVar40 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000aeb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)param_2 + 0x10dd3e626) * 4 + 0x1000aeb08))();
        return pppppppuVar59;
      }
      func_0x000107c60690(1);
      pppppppuVar59 = param_2;
      goto code_r0x00010bdb78a8;
    }
code_r0x0001000aeae8:
    uVar61 = 0;
code_r0x0001000aeba8:
    func_0x000107c60690(uVar61);
    goto code_r0x0001000ae86c;
  case 0x1c:
    uVar61 = 0x21;
    break;
  case 0x1d:
    uVar61 = 0x22;
    break;
  case 0x1e:
    func_0x000107c60690(0x23);
    if ((uVar63 & 0xff) != 5) {
      if ((uVar63 & 0xff) != 6) {
        func_0x000107c60690(1);
        uVar63 = uVar63 & 0xff;
        pppppppuVar48 = (ulong *******)0x6f4a74696d627573;
        pppppppuVar54 = (ulong *******)0xea00000000007362;
        if (uVar63 != 3) {
          pppppppuVar48 = (ulong *******)0xd000000000000015;
          pppppppuVar54 = (ulong *******)0x800000010f215df0;
        }
        param_3 = (ulong *******)0x800000010f215e10;
        pppppppuVar59 = (ulong *******)0xd000000000000023;
        if (uVar63 != 2) {
          param_3 = pppppppuVar54;
          pppppppuVar59 = pppppppuVar48;
        }
        pcVar47 = "registerSystemJobProviders";
        if (((ulong)param_2 & 0xff) != 0) {
          pcVar47 = "ticatedJobProviders";
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
          pppppppuVar59 = (ulong *******)0xd00000000000001a;
        }
        if (uVar63 == 1 || ((ulong)param_2 & 0xff) == 0) {
          param_3 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
        }
        goto code_r0x00010bdb78a8;
      }
      goto code_r0x0001000aebbc;
    }
    goto code_r0x0001000aed5c;
  case 0x1f:
    uVar61 = 0x24;
    break;
  case 0x20:
    uVar61 = 0x25;
    break;
  case 0x21:
    uVar61 = 0x26;
    break;
  case 0x22:
    uVar61 = 0x27;
    break;
  case 0x23:
    uVar61 = 0x28;
    break;
  case 0x24:
    uVar61 = 0x29;
    break;
  case 0x25:
    uVar61 = 0x2a;
    break;
  case 0x26:
    if ((param_3 == (ulong *******)0x0 && param_2 == (ulong *******)0x0) &&
       ((uVar40 & 0xff) == 0x98)) {
      uVar61 = 2;
    }
    else if ((param_2 == (ulong *******)0x1) &&
            ((param_3 == (ulong *******)0x0 && ((uVar40 & 0xff) == 0x98)))) {
      uVar61 = 3;
    }
    else if ((param_2 == (ulong *******)0x2) &&
            ((param_3 == (ulong *******)0x0 && ((uVar40 & 0xff) == 0x98)))) {
      uVar61 = 0xf;
    }
    else if ((param_2 == (ulong *******)0x3) &&
            ((param_3 == (ulong *******)0x0 && ((uVar40 & 0xff) == 0x98)))) {
      uVar61 = 0x11;
    }
    else {
      uVar61 = 0x1d;
    }
    func_0x000107c60690(uVar61);
code_r0x0001000aed5c:
    param_2 = (ulong *******)0x0;
    goto code_r0x0001000ae86c;
  case 0x27:
    *(undefined8 *)((long)param_1 + (long)pppppppuVar41) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acb8) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acc0) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acc8) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acd0) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acd8) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ace0) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ace8) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acf0) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309acf8) = 0;
    *(ulong ********)((long)param_1 + _DAT_11309ad00) = param_2;
    *(undefined8 *)((long)param_1 + _DAT_11309ad08) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad10) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad18) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad20) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad28) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad30) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad38) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad40) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad48) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad50) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad58) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad60) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad68) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad70) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad78) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad80) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad88) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad90) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ad98) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ada0) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309ada8) = 0;
    *(undefined8 *)((long)param_1 + _DAT_11309adb0) = 0;
    puVar38 = PTR_s_init_1125d9248;
    func_0x000107c61174(param_2);
    func_0x000107c61154(&stack0xffffffffffffffd0,puVar38);
    return pppppppuVar39;
  case 0x28:
    pppppppuVar59 = param_1;
    FUN_1000ac118();
    func_0x000107c61170(param_1);
    puVar38 = &UNK_1103cda68;
    func_0x000107c613fc(&UNK_1103cda68,0x18,7);
    *(ulong ********)(puVar38 + 0x10) = param_2;
    func_0x000107c615f0(param_2);
    pppppppuVar48 = pppppppuVar59;
    FUN_1000ab368(pppppppuVar59);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(pppppppuVar59);
    func_0x000107c61574(puVar38);
    func_0x000107c615e8(pppppppuVar48);
    return pppppppuVar48;
  case 0x29:
    ppppppuVar34 = pppppppuVar41[0x107];
    *(ulong *)((long)param_1 + (long)ppppppuVar34) = uStack_98;
    *(undefined1 *)((ulong *)((long)param_1 + (long)ppppppuVar34) + 1) = 0;
    puVar42 = (undefined8 *)((long)param_1 + _DAT_113097840);
    *puVar42 = unaff_d8;
    *(undefined1 *)(puVar42 + 1) = 0;
    FUN_1000bc298(CONCAT44(uStack_8c,uStack_90),(undefined *)((long)param_1 + _DAT_113097848),
                  param_2,param_1);
    *(undefined1 *)((long)unaff_x26 + _DAT_113097850) = uStack_88._4_1_;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097858);
    *puVar42 = 0;
    uVar24 = SUB81(unaff_x27,0);
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097860);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097868);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097870);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097878);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    *(undefined8 *)((long)unaff_x26 + _DAT_113097880) = 0;
    FUN_1000bc298();
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_113097890);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    FUN_1000bc298();
    *(undefined1 *)((long)unaff_x26 + _DAT_1130978a0) = 2;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978a8);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978b0);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978b8);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    FUN_1000bc298();
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978c8);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978d0);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978d8);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    puVar42 = (undefined8 *)((long)unaff_x26 + _DAT_1130978e0);
    *puVar42 = 0;
    *(undefined1 *)(puVar42 + 1) = uVar24;
    FUN_1000bc298();
    pppppppuVar59 = (ulong *******)&stack0xffffffffffffff80;
    func_0x000107c61154(pppppppuVar59,PTR_s_init_1125d9248);
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    return pppppppuVar59;
  case 0x2a:
    pppppppuVar59 = param_1;
    func_0x0001099ed780(param_1,param_4,param_5,param_6,param_7);
    if ((ulong *******)0xffffffffffffff88 < pppppppuVar59) {
      return pppppppuVar59;
    }
    uVar43 = (long)param_5 - (long)pppppppuVar59;
    if (param_5 < pppppppuVar59 || uVar43 == 0) {
      return (ulong *******)0xffffffffffffffb8;
    }
    puVar44 = (ushort *)(param_4 + (long)pppppppuVar59);
    if (uVar43 < 10) {
      return (ulong *******)0xffffffffffffffec;
    }
    uVar19 = *puVar44;
    uVar20 = puVar44[1];
    uVar21 = puVar44[2];
    uVar62 = (ulong)uVar19 + (ulong)uVar20 + (ulong)uVar21 + 6;
    if (uVar43 < uVar62) {
      return (ulong *******)0xffffffffffffffec;
    }
    if (uVar19 == 0) {
      return (ulong *******)0xffffffffffffffb8;
    }
    puStack_58 = (ulong *)(puVar44 + 3);
    puVar7 = (ulong *)((long)puStack_58 + (ulong)uVar19);
    uVar22 = *(ushort *)((long)param_1 + 2);
    puStack_50 = (ulong *)(puVar44 + 7);
    if (uVar19 < 8) {
      uStack_70 = (ulong)(byte)*puStack_58;
      uVar50 = (uint)uVar19;
      if (uVar19 < 5) {
        if (uVar50 == 2) goto code_r0x0001099edf28;
        if (uVar50 == 3) goto code_r0x0001099edf20;
        if (uVar50 == 4) goto code_r0x0001099edf18;
      }
      else {
        if (uVar19 != 5) {
          if (uVar19 != 6) {
            if (uVar50 != 7) goto code_r0x0001099edf34;
            uStack_70 = uStack_70 | (ulong)(byte)puVar44[6] << 0x30;
          }
          uStack_70 = uStack_70 + ((ulong)*(byte *)((long)puVar44 + 0xb) << 0x28);
        }
        uStack_70 = uStack_70 + ((ulong)(byte)puVar44[5] << 0x20);
code_r0x0001099edf18:
        uStack_70 = uStack_70 + (ulong)*(byte *)((long)puVar44 + 9) * 0x1000000;
code_r0x0001099edf20:
        uStack_70 = uStack_70 + (ulong)(byte)puVar44[4] * 0x10000;
code_r0x0001099edf28:
        uStack_70 = uStack_70 + (ulong)*(byte *)((long)puVar44 + 7) * 0x100;
      }
code_r0x0001099edf34:
      if (*(byte *)((long)puVar7 + -1) != 0) {
        uStack_68 = (int)LZCOUNT((uint)*(byte *)((long)puVar7 + -1)) + uVar50 * -8 + 0x29;
        puStack_60 = puStack_58;
        goto code_r0x0001099edf48;
      }
code_r0x0001099ee648:
      pppppppuVar59 = (ulong *******)0xffffffffffffffec;
    }
    else {
      uStack_70 = puVar7[-1];
      if (uStack_70 >> 0x38 == 0) {
        return (ulong *******)0xffffffffffffffff;
      }
      uStack_68 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_70 >> 0x38)) ^ 0x1f);
      puStack_60 = puVar7 + -1;
code_r0x0001099edf48:
      if (uVar20 != 0) {
        puStack_a8 = (ulong *)((long)puVar7 + (ulong)uVar20);
        puVar3 = puVar7 + 1;
        if (uVar20 < 8) {
          uStack_98 = (ulong)(byte)*puVar7;
          uVar50 = (uint)uVar20;
          if (uVar20 < 5) {
            if (uVar50 == 2) goto code_r0x0001099ee000;
            if (uVar50 == 3) goto code_r0x0001099edff8;
            if (uVar50 == 4) goto code_r0x0001099edff0;
          }
          else {
            if (uVar20 != 5) {
              if (uVar20 != 6) {
                if (uVar50 != 7) goto code_r0x0001099ee00c;
                uStack_98 = uStack_98 | (ulong)*(byte *)((long)puVar7 + 6) << 0x30;
              }
              uStack_98 = uStack_98 + ((ulong)*(byte *)((long)puVar7 + 5) << 0x28);
            }
            uStack_98 = uStack_98 + ((ulong)*(byte *)((long)puVar7 + 4) << 0x20);
code_r0x0001099edff0:
            uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar7 + 3) * 0x1000000;
code_r0x0001099edff8:
            uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar7 + 2) * 0x10000;
code_r0x0001099ee000:
            uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar7 + 1) * 0x100;
          }
code_r0x0001099ee00c:
          if (*(byte *)((long)puStack_a8 + -1) == 0) goto code_r0x0001099ee648;
          uStack_90 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a8 + -1)) + uVar50 * -8 + 0x29;
          uStack_88 = puVar7;
        }
        else {
          uStack_98 = puStack_a8[-1];
          if (uStack_98 >> 0x38 == 0) {
            return (ulong *******)0xffffffffffffffff;
          }
          uStack_90 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_98 >> 0x38)) ^ 0x1f);
          uStack_88 = puStack_a8 + -1;
        }
        if (uVar21 != 0) {
          pbVar8 = (byte *)((long)puStack_a8 + (ulong)uVar21);
          puStack_a0 = puStack_a8 + 1;
          if (7 < uVar21) {
            uStack_c0 = *(ulong *)(pbVar8 + -8);
            if (uStack_c0 >> 0x38 == 0) {
              return (ulong *******)0xffffffffffffffff;
            }
            uStack_b8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_c0 >> 0x38)) ^ 0x1f);
            puStack_b0 = (ulong *)(pbVar8 + -8);
            goto code_r0x0001099ee108;
          }
          uStack_c0 = (ulong)(byte)*puStack_a8;
          uVar50 = (uint)uVar21;
          if (uVar21 < 5) {
            if (uVar50 == 2) goto code_r0x0001099ee0e8;
            if (uVar50 == 3) goto code_r0x0001099ee0e0;
            if (uVar50 == 4) goto code_r0x0001099ee0d8;
          }
          else {
            if (uVar21 != 5) {
              if (uVar21 != 6) {
                if (uVar50 != 7) goto code_r0x0001099ee0f4;
                uStack_c0 = uStack_c0 | (ulong)*(byte *)((long)puStack_a8 + 6) << 0x30;
              }
              uStack_c0 = uStack_c0 + ((ulong)*(byte *)((long)puStack_a8 + 5) << 0x28);
            }
            uStack_c0 = uStack_c0 + ((ulong)*(byte *)((long)puStack_a8 + 4) << 0x20);
code_r0x0001099ee0d8:
            uStack_c0 = uStack_c0 + (ulong)*(byte *)((long)puStack_a8 + 3) * 0x1000000;
code_r0x0001099ee0e0:
            uStack_c0 = uStack_c0 + (ulong)*(byte *)((long)puStack_a8 + 2) * 0x10000;
code_r0x0001099ee0e8:
            uStack_c0 = uStack_c0 + (ulong)*(byte *)((long)puStack_a8 + 1) * 0x100;
          }
code_r0x0001099ee0f4:
          if (pbVar8[-1] != 0) {
            uStack_b8 = (int)LZCOUNT((uint)pbVar8[-1]) + uVar50 * -8 + 0x29;
            puStack_b0 = puStack_a8;
code_r0x0001099ee108:
            pppppppuVar59 = (ulong *******)&pppppppuStack_e8;
            func_0x000107c2ae50(pppppppuVar59,pbVar8,uVar43 - uVar62);
            if ((ulong *******)0xffffffffffffff88 < pppppppuVar59) {
              return pppppppuVar59;
            }
            pppppppuVar59 = (ulong *******)((long)param_2 + (long)param_3);
            puVar38 = (undefined *)((long)param_3 + 3);
            pppppppuVar48 = (ulong *******)((long)param_2 + ((ulong)puVar38 >> 2));
            pppppppuVar54 = (ulong *******)((long)pppppppuVar48 + ((ulong)puVar38 >> 2));
            pppppppuVar41 = (ulong *******)((long)pppppppuVar54 + ((ulong)puVar38 >> 2));
            iVar31 = (int)&uStack_70;
            func_0x000107c2ae54();
            iVar32 = (int)&uStack_98;
            func_0x000107c2ae54();
            iVar46 = (int)&uStack_c0;
            func_0x000107c2ae54();
            iVar33 = (int)&pppppppuStack_e8;
            func_0x000107c2ae54();
            pppppppuVar45 = (ulong *******)((long)pppppppuVar59 + -7);
            iVar66 = (int)puStack_58;
            iVar56 = (int)puVar7;
            iVar69 = (int)puStack_a8;
            iVar68 = (int)puStack_d0;
            pppppppuVar49 = pppppppuVar41;
            pppppppuVar39 = pppppppuVar54;
            pppppppuVar58 = pppppppuVar48;
            if ((pppppppuVar41 < pppppppuVar45) &&
               ((iVar32 == 0 && iVar31 == 0) && (iVar46 == 0 && iVar33 == 0))) {
              uVar50 = -(uint)uVar22 & 0x3f;
              uVar60 = (ulong)uStack_68;
              uVar62 = (ulong)uStack_90;
              uVar43 = (ulong)uStack_b8;
              pppppppuStack_e0 = (ulong *******)((ulong)pppppppuStack_e0 & 0xffffffff);
              puStack_f8 = puStack_d8;
              pppppppuVar65 = pppppppuStack_e8;
              do {
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_70 << (uVar60 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)param_2 = *puVar44;
                uVar63 = (int)uVar60 + (uint)(byte)puVar44[1];
                puVar9 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_98 << (uVar62 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)pppppppuVar58 = *puVar44;
                uVar64 = (int)uVar62 + (uint)(byte)puVar44[1];
                puVar10 = (undefined2 *)((long)pppppppuVar58 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_c0 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)pppppppuVar39 = *puVar44;
                uVar40 = (int)uVar43 + (uint)(byte)puVar44[1];
                puVar11 = (undefined2 *)((long)pppppppuVar39 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar44 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppuVar65 << ((ulong)pppppppuStack_e0 & 0x3f)) >>
                          uVar50) * 4 + 4);
                *(ushort *)pppppppuVar49 = *puVar44;
                uVar4 = (int)pppppppuStack_e0 + (uint)(byte)puVar44[1];
                puVar12 = (undefined2 *)((long)pppppppuVar49 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_70 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uVar63 = uVar63 + *(byte *)(puVar13 + 1);
                bVar15 = *(byte *)((long)puVar13 + 3);
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar64 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar10 = *puVar13;
                uVar64 = uVar64 + *(byte *)(puVar13 + 1);
                puVar10 = (undefined2 *)((long)puVar10 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_c0 << ((ulong)uVar40 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar11 = *puVar13;
                uVar40 = uVar40 + *(byte *)(puVar13 + 1);
                puVar11 = (undefined2 *)((long)puVar11 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppuVar65 << ((ulong)uVar4 & 0x3f)) >> uVar50) * 4 + 4)
                ;
                *puVar12 = *puVar13;
                uVar4 = uVar4 + *(byte *)(puVar13 + 1);
                puVar12 = (undefined2 *)((long)puVar12 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)bVar15);
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_70 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uVar63 = uVar63 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar64 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar10 = *puVar13;
                uVar64 = uVar64 + *(byte *)(puVar13 + 1);
                puVar10 = (undefined2 *)((long)puVar10 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_c0 << ((ulong)uVar40 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar11 = *puVar13;
                uVar40 = uVar40 + *(byte *)(puVar13 + 1);
                puVar11 = (undefined2 *)((long)puVar11 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppuVar65 << ((ulong)uVar4 & 0x3f)) >> uVar50) * 4 + 4)
                ;
                *puVar12 = *puVar13;
                uVar4 = uVar4 + *(byte *)(puVar13 + 1);
                puVar12 = (undefined2 *)((long)puVar12 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_70 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uVar63 = uVar63 + *(byte *)(puVar13 + 1);
                uVar60 = (ulong)uVar63;
                bVar15 = *(byte *)((long)puVar13 + 3);
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar64 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar10 = *puVar13;
                bVar14 = *(byte *)(puVar13 + 1);
                bVar16 = *(byte *)((long)puVar13 + 3);
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_c0 << ((ulong)uVar40 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar11 = *puVar13;
                bVar17 = *(byte *)(puVar13 + 1);
                bVar18 = *(byte *)((long)puVar13 + 3);
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppuVar65 << ((ulong)uVar4 & 0x3f)) >> uVar50) * 4 + 4)
                ;
                *puVar12 = *puVar13;
                if (uVar63 < 0x41) {
                  if (puStack_60 < puStack_50) {
                    if (puStack_60 == puStack_58) {
                      cVar25 = '\x01';
                      if (uVar63 == 0x40) {
                        cVar25 = '\x02';
                      }
                      goto code_r0x0001099ee47c;
                    }
                    cVar25 = (ulong *)((long)puStack_60 - (ulong)(uVar63 >> 3)) < puStack_58;
                    uVar23 = (int)puStack_60 - iVar66;
                    if (!(bool)cVar25) {
                      uVar23 = uVar63 >> 3;
                    }
                    uVar63 = uVar63 + uVar23 * -8;
                  }
                  else {
                    cVar25 = false;
                    uVar23 = uVar63 >> 3;
                    uVar63 = uVar63 & 7;
                  }
                  uVar60 = (ulong)uVar63;
                  puStack_60 = (ulong *)((long)puStack_60 - (ulong)uVar23);
                  uStack_70 = *puStack_60;
                }
                else {
                  cVar25 = '\x03';
                }
code_r0x0001099ee47c:
                uVar64 = uVar64 + bVar14;
                uVar62 = (ulong)uVar64;
                if (uVar64 < 0x41) {
                  if (uStack_88 < puVar3) {
                    if (uStack_88 == puVar7) {
                      cVar26 = '\x01';
                      if (uVar64 == 0x40) {
                        cVar26 = '\x02';
                      }
                      goto code_r0x0001099ee4e8;
                    }
                    cVar26 = (ulong *)((long)uStack_88 - (ulong)(uVar64 >> 3)) < puVar7;
                    uVar63 = (int)uStack_88 - iVar56;
                    if (!(bool)cVar26) {
                      uVar63 = uVar64 >> 3;
                    }
                    uVar64 = uVar64 + uVar63 * -8;
                  }
                  else {
                    cVar26 = false;
                    uVar63 = uVar64 >> 3;
                    uVar64 = uVar64 & 7;
                  }
                  uVar62 = (ulong)uVar64;
                  uStack_88 = (ulong *)((long)uStack_88 - (ulong)uVar63);
                  uStack_98 = *uStack_88;
                }
                else {
                  cVar26 = '\x03';
                }
code_r0x0001099ee4e8:
                uVar40 = uVar40 + bVar17;
                uVar43 = (ulong)uVar40;
                if (uVar40 < 0x41) {
                  if (puStack_b0 < puStack_a0) {
                    if (puStack_b0 == puStack_a8) {
                      cVar27 = '\x01';
                      if (uVar40 == 0x40) {
                        cVar27 = '\x02';
                      }
                      goto code_r0x0001099ee558;
                    }
                    cVar27 = (ulong *)((long)puStack_b0 - (ulong)(uVar40 >> 3)) < puStack_a8;
                    uVar63 = (int)puStack_b0 - iVar69;
                    if (!(bool)cVar27) {
                      uVar63 = uVar40 >> 3;
                    }
                    uVar40 = uVar40 + uVar63 * -8;
                  }
                  else {
                    cVar27 = false;
                    uVar63 = uVar40 >> 3;
                    uVar40 = uVar40 & 7;
                  }
                  puStack_b0 = (ulong *)((long)puStack_b0 - (ulong)uVar63);
                  uVar43 = (ulong)uVar40;
                  uStack_c0 = *puStack_b0;
                }
                else {
                  cVar27 = '\x03';
                }
code_r0x0001099ee558:
                uVar4 = uVar4 + *(byte *)(puVar13 + 1);
                pppppppuStack_e0 = (ulong *******)(ulong)uVar4;
                if (uVar4 < 0x41) {
                  if (puStack_f8 < puStack_c8) {
                    if (puStack_f8 == puStack_d0) {
                      cVar28 = '\x03';
                      goto code_r0x0001099ee5dc;
                    }
                    cVar28 = (undefined8 *)((long)puStack_f8 - (ulong)(uVar4 >> 3)) < puStack_d0;
                    uVar63 = (int)puStack_f8 - iVar68;
                    if (!(bool)cVar28) {
                      uVar63 = uVar4 >> 3;
                    }
                    uVar4 = uVar4 + uVar63 * -8;
                  }
                  else {
                    cVar28 = false;
                    uVar63 = uVar4 >> 3;
                    uVar4 = uVar4 & 7;
                  }
                  puStack_f8 = (undefined8 *)((long)puStack_f8 - (ulong)uVar63);
                  pppppppuStack_e0 = (ulong *******)(ulong)uVar4;
                  pppppppuVar65 = (ulong *******)*puStack_f8;
                  pppppppuStack_e8 = pppppppuVar65;
                  puStack_d8 = puStack_f8;
                }
                else {
                  cVar28 = '\x03';
                }
code_r0x0001099ee5dc:
                param_2 = (ulong *******)((long)puVar9 + (ulong)bVar15);
                pppppppuVar58 = (ulong *******)((long)puVar10 + (ulong)bVar16);
                pppppppuVar39 = (ulong *******)((long)puVar11 + (ulong)bVar18);
                pppppppuVar49 = (ulong *******)((long)puVar12 + (ulong)*(byte *)((long)puVar13 + 3))
                ;
              } while (pppppppuVar49 < pppppppuVar45 &&
                       (((cVar26 == '\0' && cVar25 == '\0') && cVar27 == '\0') && cVar28 == '\0'));
              uStack_68 = (uint)uVar60;
              uStack_90 = (uint)uVar62;
              uStack_b8 = (uint)uVar43;
            }
            if (pppppppuVar48 < param_2) {
              return (ulong *******)0xffffffffffffffec;
            }
            if (pppppppuVar54 < pppppppuVar58) {
              return (ulong *******)0xffffffffffffffec;
            }
            if (pppppppuVar41 < pppppppuVar39) {
              return (ulong *******)0xffffffffffffffec;
            }
            uVar50 = -(uint)uVar22 & 0x3f;
            uVar43 = (ulong)uStack_68;
            if (uStack_68 < 0x41) {
              do {
                uVar63 = (uint)uVar43;
                if (puStack_60 < puStack_50) {
                  if (puStack_60 == puStack_58) goto code_r0x0001099ee81c;
                  bVar30 = puStack_58 <= (ulong *)((long)puStack_60 - (uVar43 >> 3));
                  uVar64 = (uint)(uVar43 >> 3);
                  if (!bVar30) {
                    uVar64 = (int)puStack_60 - iVar66;
                  }
                  uStack_68 = uVar63 + uVar64 * -8;
                }
                else {
                  uVar64 = uVar63 >> 3;
                  uStack_68 = uVar63 & 7;
                  bVar30 = true;
                }
                puStack_60 = (ulong *)((long)puStack_60 - (ulong)uVar64);
                uVar43 = (ulong)uStack_68;
                uStack_70 = *puStack_60;
                if (((ulong *******)((long)pppppppuVar48 + -7) <= param_2) || (!bVar30)) {
                  if (uStack_68 < 0x41) goto code_r0x0001099ee81c;
                  break;
                }
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_70 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)param_2 = *puVar44;
                uStack_68 = uStack_68 + (byte)puVar44[1];
                puVar9 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_70 << ((ulong)uStack_68 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_68 = uStack_68 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_70 << ((ulong)uStack_68 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_68 = uStack_68 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_70 << ((ulong)uStack_68 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_68 = uStack_68 + *(byte *)(puVar13 + 1);
                uVar43 = (ulong)uStack_68;
                param_2 = (ulong *******)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
              } while (uStack_68 < 0x41);
            }
code_r0x0001099ee8ec:
            for (; uVar63 = (uint)uVar43, param_2 <= (ulong *******)((long)pppppppuVar48 + -2);
                param_2 = (ulong *******)((long)param_2 + (ulong)*(byte *)((long)puVar44 + 3))) {
              puVar44 = (ushort *)
                        ((long)param_1 + ((uStack_70 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(ushort *)param_2 = *puVar44;
              uStack_68 = uVar63 + (byte)puVar44[1];
              uVar43 = (ulong)uStack_68;
            }
            if (param_2 < pppppppuVar48) {
              puVar38 = (undefined *)
                        ((long)param_1 + ((uStack_70 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(undefined *)param_2 = *puVar38;
              if (puVar38[3] == '\x01') {
                uStack_68 = uVar63 + (byte)puVar38[2];
              }
              else if ((uVar63 < 0x40) && (uStack_68 = uVar63 + (byte)puVar38[2], 0x3f < uStack_68))
              {
                uStack_68 = 0x40;
              }
            }
            uVar43 = (ulong)uStack_90;
            if (uStack_90 < 0x41) {
              do {
                uVar63 = (uint)uVar43;
                if (uStack_88 < puVar3) {
                  if (uStack_88 == puVar7) goto code_r0x0001099eea84;
                  bVar30 = puVar7 <= (ulong *)((long)uStack_88 - (uVar43 >> 3));
                  uVar64 = (uint)(uVar43 >> 3);
                  if (!bVar30) {
                    uVar64 = (int)uStack_88 - iVar56;
                  }
                  uStack_90 = uVar63 + uVar64 * -8;
                }
                else {
                  uVar64 = uVar63 >> 3;
                  uStack_90 = uVar63 & 7;
                  bVar30 = true;
                }
                uStack_88 = (ulong *)((long)uStack_88 - (ulong)uVar64);
                uVar43 = (ulong)uStack_90;
                uStack_98 = *uStack_88;
                if (((ulong *******)((long)pppppppuVar54 + -7) <= pppppppuVar58) || (!bVar30)) {
                  if (uStack_90 < 0x41) goto code_r0x0001099eea84;
                  break;
                }
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_98 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)pppppppuVar58 = *puVar44;
                uVar63 = uStack_90 + (byte)puVar44[1];
                puVar9 = (undefined2 *)((long)pppppppuVar58 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uVar63 = uVar63 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uVar63 = uVar63 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 + ((uStack_98 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 + 4
                          );
                *puVar9 = *puVar13;
                uStack_90 = uVar63 + *(byte *)(puVar13 + 1);
                uVar43 = (ulong)uStack_90;
                pppppppuVar58 = (ulong *******)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
              } while (uStack_90 < 0x41);
            }
code_r0x0001099eeb54:
            for (; uVar63 = (uint)uVar43, pppppppuVar58 <= (ulong *******)((long)pppppppuVar54 + -2)
                ; pppppppuVar58 =
                       (ulong *******)((long)pppppppuVar58 + (ulong)*(byte *)((long)puVar44 + 3))) {
              puVar44 = (ushort *)
                        ((long)param_1 + ((uStack_98 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(ushort *)pppppppuVar58 = *puVar44;
              uStack_90 = uVar63 + (byte)puVar44[1];
              uVar43 = (ulong)uStack_90;
            }
            if (pppppppuVar58 < pppppppuVar54) {
              puVar38 = (undefined *)
                        ((long)param_1 + ((uStack_98 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(undefined *)pppppppuVar58 = *puVar38;
              if (puVar38[3] == '\x01') {
                uStack_90 = uVar63 + (byte)puVar38[2];
              }
              else if ((uVar63 < 0x40) && (uStack_90 = uVar63 + (byte)puVar38[2], 0x3f < uStack_90))
              {
                uStack_90 = 0x40;
              }
            }
            uVar43 = (ulong)uStack_b8;
            if (uStack_b8 < 0x41) {
              do {
                uVar63 = (uint)uVar43;
                if (puStack_b0 < puStack_a0) {
                  if (puStack_b0 == puStack_a8) goto code_r0x0001099eecec;
                  bVar30 = puStack_a8 <= (ulong *)((long)puStack_b0 - (uVar43 >> 3));
                  uVar64 = (uint)(uVar43 >> 3);
                  if (!bVar30) {
                    uVar64 = (int)puStack_b0 - iVar69;
                  }
                  uStack_b8 = uVar63 + uVar64 * -8;
                }
                else {
                  uVar64 = uVar63 >> 3;
                  uStack_b8 = uVar63 & 7;
                  bVar30 = true;
                }
                puStack_b0 = (ulong *)((long)puStack_b0 - (ulong)uVar64);
                uVar43 = (ulong)uStack_b8;
                uStack_c0 = *puStack_b0;
                if (((ulong *******)((long)pppppppuVar41 + -7) <= pppppppuVar39) || (!bVar30)) {
                  if (uStack_b8 < 0x41) goto code_r0x0001099eecec;
                  break;
                }
                puVar44 = (ushort *)
                          ((long)param_1 + ((uStack_c0 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
                *(ushort *)pppppppuVar39 = *puVar44;
                uStack_b8 = uStack_b8 + (byte)puVar44[1];
                puVar9 = (undefined2 *)((long)pppppppuVar39 + (ulong)*(byte *)((long)puVar44 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_c0 << ((ulong)uStack_b8 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_b8 = uStack_b8 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_c0 << ((ulong)uStack_b8 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_b8 = uStack_b8 + *(byte *)(puVar13 + 1);
                puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
                puVar13 = (undefined2 *)
                          ((long)param_1 +
                          ((uStack_c0 << ((ulong)uStack_b8 & 0x3f)) >> uVar50) * 4 + 4);
                *puVar9 = *puVar13;
                uStack_b8 = uStack_b8 + *(byte *)(puVar13 + 1);
                uVar43 = (ulong)uStack_b8;
                pppppppuVar39 = (ulong *******)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
              } while (uStack_b8 < 0x41);
            }
code_r0x0001099eedbc:
            for (; uVar63 = (uint)uVar43, pppppppuVar39 <= (ulong *******)((long)pppppppuVar41 + -2)
                ; pppppppuVar39 =
                       (ulong *******)((long)pppppppuVar39 + (ulong)*(byte *)((long)puVar44 + 3))) {
              puVar44 = (ushort *)
                        ((long)param_1 + ((uStack_c0 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(ushort *)pppppppuVar39 = *puVar44;
              uStack_b8 = uVar63 + (byte)puVar44[1];
              uVar43 = (ulong)uStack_b8;
            }
            if (pppppppuVar39 < pppppppuVar41) {
              puVar38 = (undefined *)
                        ((long)param_1 + ((uStack_c0 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(undefined *)pppppppuVar39 = *puVar38;
              if (puVar38[3] == '\x01') {
                uStack_b8 = uVar63 + (byte)puVar38[2];
              }
              else if ((uVar63 < 0x40) && (uStack_b8 = uVar63 + (byte)puVar38[2], 0x3f < uStack_b8))
              {
                uStack_b8 = 0x40;
              }
            }
            uVar63 = (uint)pppppppuStack_e0;
            while (uVar43 = (ulong)uVar63, uVar63 < 0x41) {
              if (puStack_d8 < puStack_c8) {
                if (puStack_d8 == puStack_d0) goto code_r0x0001099eef50;
                bVar30 = puStack_d0 <= (undefined8 *)((long)puStack_d8 - (ulong)(uVar63 >> 3));
                uVar64 = uVar63 >> 3;
                if (!bVar30) {
                  uVar64 = (int)puStack_d8 - iVar68;
                }
                uVar63 = uVar63 + uVar64 * -8;
              }
              else {
                uVar64 = uVar63 >> 3;
                uVar63 = uVar63 & 7;
                bVar30 = true;
              }
              puStack_d8 = (undefined8 *)((long)puStack_d8 - (ulong)uVar64);
              uVar43 = (ulong)uVar63;
              pppppppuStack_e0 = (ulong *******)(ulong)uVar63;
              pppppppuStack_e8 = (ulong *******)*puStack_d8;
              if ((pppppppuVar45 <= pppppppuVar49) || (!bVar30)) {
                if (uVar63 < 0x41) goto code_r0x0001099eef50;
                break;
              }
              puVar44 = (ushort *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(ushort *)pppppppuVar49 = *puVar44;
              uVar63 = uVar63 + (byte)puVar44[1];
              puVar9 = (undefined2 *)((long)pppppppuVar49 + (ulong)*(byte *)((long)puVar44 + 3));
              puVar13 = (undefined2 *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 +
                        4);
              *puVar9 = *puVar13;
              uVar63 = uVar63 + *(byte *)(puVar13 + 1);
              puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
              puVar13 = (undefined2 *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 +
                        4);
              *puVar9 = *puVar13;
              uVar63 = uVar63 + *(byte *)(puVar13 + 1);
              puVar9 = (undefined2 *)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
              puVar13 = (undefined2 *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << ((ulong)uVar63 & 0x3f)) >> uVar50) * 4 +
                        4);
              *puVar9 = *puVar13;
              uVar63 = uVar63 + *(byte *)(puVar13 + 1);
              pppppppuStack_e0 = (ulong *******)(ulong)uVar63;
              pppppppuVar49 = (ulong *******)((long)puVar9 + (ulong)*(byte *)((long)puVar13 + 3));
            }
code_r0x0001099ef020:
            for (; uVar63 = (uint)uVar43, pppppppuVar49 <= (ulong *******)((long)pppppppuVar59 + -2)
                ; pppppppuVar49 =
                       (ulong *******)((long)pppppppuVar49 + (ulong)*(byte *)((long)puVar44 + 3))) {
              puVar44 = (ushort *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(ushort *)pppppppuVar49 = *puVar44;
              uVar63 = uVar63 + (byte)puVar44[1];
              uVar43 = (ulong)uVar63;
              pppppppuStack_e0 = (ulong *******)(ulong)uVar63;
            }
            if (pppppppuVar49 < pppppppuVar59) {
              puVar38 = (undefined *)
                        ((long)param_1 +
                        ((ulong)((long)pppppppuStack_e8 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
              *(undefined *)pppppppuVar49 = *puVar38;
              if (puVar38[3] == '\x01') {
                uVar63 = uVar63 + (byte)puVar38[2];
              }
              else if (uVar63 < 0x40) {
                uVar63 = uVar63 + (byte)puVar38[2];
                if (0x3f < uVar63) {
                  uVar63 = 0x40;
                }
              }
              else {
                uVar63 = (uint)pppppppuStack_e0;
              }
            }
            if (((((((uVar63 == 0x40 && puStack_d8 == puStack_d0) && uStack_b8 == 0x40) &&
                   puStack_b0 == puStack_a8) && uStack_90 == 0x40) && uStack_88 == puVar7) &&
                uStack_68 == 0x40) && puStack_60 == puStack_58) {
              return param_3;
            }
            return (ulong *******)0xffffffffffffffec;
          }
          goto code_r0x0001099ee648;
        }
      }
      pppppppuVar59 = (ulong *******)0xffffffffffffffb8;
    }
    return pppppppuVar59;
  case 0x2b:
    if (!in_ZR) {
      if (param_4 != 4) goto LAB_1000cedd8;
      pppppppuVar59 = pppppppuVar59 + (ulong)*(byte *)((long)param_3 + 3) * 0x200000;
    }
    pppppppuVar59 =
         pppppppuVar59 +
         (ulong)*(byte *)((long)param_3 + 2) * 0x2000 + (ulong)*(byte *)((long)param_3 + 1) * 0x20;
LAB_1000cedd8:
    uVar50 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar50 == 0) {
      pppppppuVar59 = (ulong *******)0xffffffffffffffec;
    }
    else {
      uVar19 = *(ushort *)param_5;
      iVar46 = (int)LZCOUNT(uVar50) + uVar40 * -8 + 0x29 + (uint)uVar19;
      uVar43 = (ulong)pppppppuVar59 >> ((ulong)(uint)-iVar46 & 0x3f) &
               (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar19 * 4);
      uVar50 = iVar46 + (uint)uVar19;
      uVar60 = (ulong)uVar50;
      uVar62 = (ulong)pppppppuVar59 >> ((ulong)-uVar50 & 0x3f) &
               (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar19 * 4);
      pppppppuVar48 = param_1;
      if (uVar50 < 0x41) {
        uVar55 = 0;
        do {
          uVar50 = (uint)uVar60;
          if ((long)uVar55 < 8) {
            if (uVar55 == 0) goto LAB_1000cf078;
            uVar60 = uVar60 >> 3;
            bVar30 = (long)uVar60 <= (long)uVar55;
            uVar52 = uVar55;
            if ((long)uVar60 <= (long)uVar55) {
              uVar52 = uVar60;
            }
            uVar50 = uVar50 + (int)uVar52 * -8;
          }
          else {
            uVar52 = (ulong)(uVar50 >> 3);
            uVar50 = uVar50 & 7;
            bVar30 = true;
          }
          uVar60 = (ulong)uVar50;
          uVar55 = uVar55 - (uVar52 & 0xffffffff);
          pppppppuVar59 = *(ulong ********)((long)param_3 + uVar55);
          if ((&UNK_10dd3e5d7 < pppppppuVar48) || (!bVar30)) goto LAB_1000cf078;
          puVar44 = (ushort *)((long)param_5 + uVar43 * 4 + 4);
          uVar19 = *puVar44;
          bVar15 = *(byte *)((long)puVar44 + 3);
          uVar50 = uVar50 + bVar15;
          *(char *)pppppppuVar48 = (char)puVar44[1];
          puVar44 = (ushort *)((long)param_5 + uVar62 * 4 + 4);
          uVar20 = *puVar44;
          bVar14 = *(byte *)((long)puVar44 + 3);
          uVar63 = uVar50 + bVar14;
          *(char *)((long)pppppppuVar48 + 1) = (char)puVar44[1];
          puVar44 = (ushort *)
                    ((long)param_5 +
                    (ulong)uVar19 * 4 +
                    ((ulong)((long)pppppppuVar59 << (uVar60 & 0x3f)) >>
                    ((ulong)-(uint)bVar15 & 0x3f)) * 4 + 4);
          uVar64 = uVar63 + *(byte *)((long)puVar44 + 3);
          uVar43 = ((ulong)((long)pppppppuVar59 << ((ulong)uVar63 & 0x3f)) >>
                   ((ulong)-(uint)*(byte *)((long)puVar44 + 3) & 0x3f)) + (ulong)*puVar44;
          *(char *)((long)pppppppuVar48 + 2) = (char)puVar44[1];
          puVar44 = (ushort *)
                    ((long)param_5 +
                    (ulong)uVar20 * 4 +
                    ((ulong)((long)pppppppuVar59 << ((ulong)uVar50 & 0x3f)) >>
                    ((ulong)-(uint)bVar14 & 0x3f)) * 4 + 4);
          uVar50 = uVar64 + *(byte *)((long)puVar44 + 3);
          uVar60 = (ulong)uVar50;
          uVar62 = ((ulong)((long)pppppppuVar59 << ((ulong)uVar64 & 0x3f)) >>
                   ((ulong)-(uint)*(byte *)((long)puVar44 + 3) & 0x3f)) + (ulong)*puVar44;
          *(char *)((long)pppppppuVar48 + 3) = (char)puVar44[1];
          pppppppuVar48 = (ulong *******)((long)pppppppuVar48 + 4);
          if (0x40 < uVar50) goto LAB_1000cf078;
        } while( true );
      }
      uVar55 = 0;
LAB_1000cf078:
      pppppppuVar41 = (ulong *******)((long)pppppppuVar41 + -2);
      if (pppppppuVar48 <= pppppppuVar41) {
        pppppppuVar48 = (ulong *******)((long)pppppppuVar48 + 1);
        do {
          puVar44 = (ushort *)((long)param_5 + uVar43 * 4 + 4);
          uVar19 = *puVar44;
          bVar15 = *(byte *)((long)puVar44 + 3);
          uVar50 = (int)uVar60 + (uint)bVar15;
          *(char *)((long)pppppppuVar48 + -1) = (char)puVar44[1];
          if (0x40 < uVar50) {
            puVar44 = (ushort *)((long)pppppppuVar48 + 1);
            *(undefined *)pppppppuVar48 = *(undefined *)((long)param_5 + uVar62 * 4 + 6);
            goto LAB_1000cf430;
          }
          if ((long)uVar55 < 8) {
            pppppppuVar54 = pppppppuVar59;
            if (uVar55 != 0) {
              uVar43 = uVar55;
              if ((long)(ulong)(uVar50 >> 3) <= (long)uVar55) {
                uVar43 = (ulong)(uVar50 >> 3);
              }
              uVar50 = uVar50 + (int)uVar43 * -8;
              goto LAB_1000cf0d0;
            }
          }
          else {
            uVar43 = (ulong)(uVar50 >> 3);
            uVar50 = uVar50 & 7;
LAB_1000cf0d0:
            uVar55 = uVar55 - (uVar43 & 0xffffffff);
            pppppppuVar54 = *(ulong ********)((long)param_3 + uVar55);
          }
          if (pppppppuVar41 < pppppppuVar48) break;
          uVar43 = ((ulong)((long)pppppppuVar59 << (uVar60 & 0x3f)) >> ((ulong)-(uint)bVar15 & 0x3f)
                   ) + (ulong)uVar19;
          puVar44 = (ushort *)((long)param_5 + uVar62 * 4 + 4);
          uVar19 = *puVar44;
          bVar15 = *(byte *)((long)puVar44 + 3);
          uVar63 = uVar50 + bVar15;
          *(char *)pppppppuVar48 = (char)puVar44[1];
          if (0x40 < uVar63) {
            *(undefined *)((long)pppppppuVar48 + 1) = *(undefined *)((long)param_5 + uVar43 * 4 + 6)
            ;
            puVar44 = (ushort *)((long)pppppppuVar48 + 2);
LAB_1000cf430:
            return (ulong *******)((long)puVar44 - (long)param_1);
          }
          if ((long)uVar55 < 8) {
            pppppppuVar59 = pppppppuVar54;
            if (uVar55 != 0) {
              uVar62 = uVar55;
              if ((long)(ulong)(uVar63 >> 3) <= (long)uVar55) {
                uVar62 = (ulong)(uVar63 >> 3);
              }
              uVar63 = uVar63 + (int)uVar62 * -8;
              goto LAB_1000cf138;
            }
          }
          else {
            uVar62 = (ulong)(uVar63 >> 3);
            uVar63 = uVar63 & 7;
LAB_1000cf138:
            uVar55 = uVar55 - (uVar62 & 0xffffffff);
            pppppppuVar59 = *(ulong ********)((long)param_3 + uVar55);
          }
          uVar60 = (ulong)uVar63;
          uVar62 = ((ulong)((long)pppppppuVar54 << ((ulong)uVar50 & 0x3f)) >>
                   ((ulong)-(uint)bVar15 & 0x3f)) + (ulong)uVar19;
          pppppppuVar54 = (ulong *******)((long)pppppppuVar48 + 1);
          pppppppuVar48 = (ulong *******)((long)pppppppuVar48 + 2);
        } while (pppppppuVar54 <= pppppppuVar41);
      }
      pppppppuVar59 = (ulong *******)0xffffffffffffffba;
    }
    return pppppppuVar59;
  case 0x2c:
    if (unaff_x24 == (ulong ******)0x0) {
      FUN_100088750();
      func_0x000107c61180();
      pppppppuVar59 = param_1;
      func_0x000107c5c168();
      func_0x000107c61180();
      ppppppuVar34 = unaff_x25[8];
      unaff_x25[8] = (ulong ******)pppppppuVar59;
      func_0x000107c61170(ppppppuVar34);
    }
    else {
      func_0x000107c61174();
      param_1 = (ulong *******)unaff_x25[8];
      unaff_x25[8] = unaff_x24;
    }
    func_0x000107c61170(param_1);
    pcVar47 = "CircumstanceEngineInit:ConfigRepository:FileSystem";
    FUN_1000ba800("CircumstanceEngineInit:ConfigRepository:FileSystem");
    ppppppuVar34 = (ulong ******)0x1e8;
    func_0x000107c60e20();
    plVar35 = (long *)0x20;
    func_0x000107c60e20();
    plVar35[1] = 0;
    plVar35[2] = 0;
    *plVar35 = (long)&PTR_DAT_11087bbd0;
    plVar36 = plVar35;
    FUN_100077ef8();
    plVar35[3] = (long)plVar36;
    ppppppuVar37 = unaff_x25[8];
    func_0x000107c3ac4c(ppppppuVar37);
    FUN_10002b838(&stack0xffffffffffffffd8,ppppppuVar37);
    FUN_1000cb5f4(ppppppuVar34,&stack0xfffffffffffffff0,&stack0xffffffffffffffd8);
    unaff_x25[7] = ppppppuVar34;
    if (unaff_x19 < 0) {
      func_0x000107c60e14(unaff_x21);
    }
    if (plVar35 != (long *)0x0) {
      plVar36 = plVar35 + 1;
      do {
        lVar67 = *plVar36;
        cVar25 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(plVar36,0x10);
        if (bVar30) {
          *plVar36 = lVar67 + -1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
      if (lVar67 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        func_0x000107c60d68(plVar35);
      }
    }
    func_0x0001000e2a84(pcVar47);
    func_0x000107c3bee4();
    func_0x000107c61170();
    func_0x000107c61170();
    func_0x000107c61170();
    func_0x000107c61170();
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(param_2);
    return unaff_x25;
  case 0x2d:
    if (uVar50 != 0x62) {
      return (ulong *******)0x0;
    }
    return (ulong *******)0x1;
  case 0x2e:
    pppppppuVar59 = (ulong *******)PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c453e4();
    func_0x000107c56330();
    func_0x000107c57a7c(pppppppuVar59);
    uVar61 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef7f790);
    func_0x000107c56954(pppppppuVar59);
    func_0x000107c61170(uVar61);
    func_0x000107c61174(pppppppuVar59);
    pppppppuVar48 = pppppppuVar59;
    FUN_100083b20(&stack0xffffffffffffffd8);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & (ulong)*unaff_x21) + 0x58))();
    func_0x000107c61170(unaff_x21);
    ppppppuVar34 = (ulong ******)PTR_PTR_1126a6db8;
    func_0x000107c610f8();
    func_0x000107c47b88();
    func_0x000107c61170(pppppppuVar59);
    func_0x000107c61170(pppppppuVar48);
    FUN_100083b20(&stack0xffffffffffffffd8);
    pppppppuVar48 = unaff_x21;
    func_0x000107c40fa4(unaff_x21);
    func_0x000107c61180();
    func_0x000107c615e8(unaff_x21);
    func_0x000107c5c31c(ppppppuVar34);
    func_0x000107c61170(pppppppuVar48);
    func_0x000107c61170(pppppppuVar59);
    *pppppppuVar41 = ppppppuVar34;
    return pppppppuVar59;
  case 0x2f:
code_r0x0001000ae43c:
    pcVar47 = (char *)((long)pcVar47 + 0x1a0);
  case 0x3d:
    pcVar47 = (char *)((ulong)((long)pcVar47 + -0x20) | 0x8000000000000000);
    pppppppuVar59 = (ulong *******)0xd000000000000013;
    pppppppuVar54 = (ulong *******)0x15;
code_r0x0001000ae458:
    pppppppuVar54 = (ulong *******)((ulong)pppppppuVar54 | 0xd000000000000000);
    in_x12 = "NotificationCenterBadgeUpdate";
code_r0x0001000ae468:
    in_x12 = (char *)((ulong)in_x12 | 0x8000000000000000);
    in_x13 = (ulong *******)((long)unaff_x21 + 0xb);
    in_x14 = 0x75626564;
code_r0x0001000ae478:
    if (uVar50 != 3) {
      in_x12 = (char *)in_x13;
      pppppppuVar54 = (ulong *******)(in_x14 & 0xffffffff | 0x6569566700000000);
    }
    param_3 = (ulong *******)pcVar47;
    if (uVar50 != 2) {
      pppppppuVar59 = pppppppuVar54;
      param_3 = (ulong *******)in_x12;
    }
code_r0x00010bdb78a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,pppppppuVar59,param_3);
    return param_1;
  case 0x30:
code_r0x0001000cdd60:
    pppppppuVar54 = unaff_x26 + 6;
    pppppppuVar41 = pppppppuVar41 + 8;
    do {
      ppppppuVar34 = pppppppuVar41[-2];
      pppppppuVar54[1] = pppppppuVar41[-1];
      *pppppppuVar54 = ppppppuVar34;
      ppppppuVar34 = *pppppppuVar41;
      pppppppuVar54[3] = pppppppuVar41[1];
      pppppppuVar54[2] = ppppppuVar34;
      pppppppuVar54 = pppppppuVar54 + 4;
      pppppppuVar41 = pppppppuVar41 + 4;
    } while (pppppppuVar54 < unaff_x27);
LAB_1000cdd84:
    puVar42 = (undefined8 *)((long)unaff_x27 - (long)pppppppuVar58);
    pppppppuVar54 = unaff_x27;
    in_stack_00000078 = pppppppuVar59;
    if ((ulong *******)((long)unaff_x27 - (long)unaff_x28) < pppppppuVar58) {
      if ((ulong *******)((long)unaff_x27 - in_stack_00000060) < pppppppuVar58) {
LAB_1000cc91c:
        unaff_x27 = param_1;
        unaff_x25 = (ulong *******)0xffffffffffffffec;
LAB_1000cc920:
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_70) {
          func_0x000107c60e78();
          if (pppppppuVar48 < unaff_x27) {
            uVar43 = 0;
            if (unaff_x27 != (ulong *******)0x0) {
              uVar43 = (ulong)((long)pppppppuVar48 << 4) / (ulong)unaff_x27;
            }
            uVar43 = uVar43 & 0xffffffff;
          }
          else {
            uVar43 = 0xf;
          }
          lVar67 = uVar43 * 0x18;
          iVar46 = (int)((ulong)unaff_x27 >> 8);
          uVar50 = *(int *)(&UNK_10e010d68 + lVar67) + *(int *)(&UNK_10e010d6c + lVar67) * iVar46;
          return (ulong *******)
                 (ulong)(uVar50 + (uVar50 >> 3) <
                        (uint)(*(int *)(&UNK_10e010d60 + lVar67) +
                              *(int *)(&UNK_10e010d64 + lVar67) * iVar46));
        }
        return unaff_x25;
      }
      lVar67 = ((long)unaff_x27 - (long)pppppppuVar58) - (long)unaff_x28;
      bVar30 = SCARRY8(lVar67,(long)param_3);
      param_3 = (ulong *******)(lVar67 + (long)param_3);
      if (param_3 == (ulong *******)0x0 || (long)param_3 < 0 != bVar30) {
        pppppppuVar48 = (ulong *******)(in_stack_00000058 + lVar67);
        func_0x000107c610b8();
        param_5 = in_stack_00000048;
        unaff_x23 = in_stack_00000038;
        goto LAB_1000cde6c;
      }
      pppppppuVar48 = (ulong *******)(in_stack_00000058 + lVar67);
      param_1 = unaff_x27;
      func_0x000107c610b8(unaff_x27,pppppppuVar48,-lVar67);
      pppppppuVar54 = (ulong *******)((long)unaff_x27 - lVar67);
      param_5 = in_stack_00000048;
      puVar42 = unaff_x28;
      unaff_x23 = in_stack_00000038;
    }
    unaff_x27 = param_1;
    if (pppppppuVar58 < (ulong *******)0x10) {
      if (pppppppuVar58 < (ulong *******)0x8) {
        iVar46 = *(int *)(&UNK_10e011c80 + (long)pppppppuVar58 * 4);
        *(undefined1 *)pppppppuVar54 = *(undefined1 *)puVar42;
        *(undefined1 *)((long)pppppppuVar54 + 1) = *(undefined1 *)((long)puVar42 + 1);
        *(undefined1 *)((long)pppppppuVar54 + 2) = *(undefined1 *)((long)puVar42 + 2);
        *(undefined1 *)((long)pppppppuVar54 + 3) = *(undefined1 *)((long)puVar42 + 3);
        uVar50 = *(uint *)(&UNK_10e011c60 + (long)pppppppuVar58 * 4);
        *(undefined4 *)((long)pppppppuVar54 + 4) = *(undefined4 *)((long)puVar42 + (ulong)uVar50);
        puVar42 = (undefined8 *)((long)((long)puVar42 + (ulong)uVar50) - (long)iVar46);
      }
      else {
        *pppppppuVar54 = (ulong ******)*puVar42;
      }
      if ((ulong *******)0x8 < param_3) {
        puVar51 = puVar42 + 1;
        pppppppuVar59 = pppppppuVar54 + 1;
        if ((long)pppppppuVar59 - (long)puVar51 < 0x10) {
          do {
            pppppppuVar41 = pppppppuVar59 + 1;
            *pppppppuVar59 = (ulong ******)*puVar51;
            puVar51 = puVar51 + 1;
            pppppppuVar59 = pppppppuVar41;
          } while (pppppppuVar41 < (ulong *******)((long)pppppppuVar54 + (long)param_3));
        }
        else {
          ppppppuVar34 = (ulong ******)*puVar51;
          pppppppuVar54[2] = (ulong ******)puVar42[2];
          *pppppppuVar59 = ppppppuVar34;
          ppppppuVar34 = (ulong ******)puVar42[3];
          pppppppuVar54[4] = (ulong ******)puVar42[4];
          pppppppuVar54[3] = ppppppuVar34;
          if (0x28 < (long)param_3) {
            pppppppuVar59 = pppppppuVar54 + 5;
            puVar42 = puVar42 + 7;
            do {
              ppppppuVar34 = (ulong ******)puVar42[-2];
              pppppppuVar59[1] = (ulong ******)puVar42[-1];
              *pppppppuVar59 = ppppppuVar34;
              ppppppuVar34 = (ulong ******)*puVar42;
              pppppppuVar59[3] = (ulong ******)puVar42[1];
              pppppppuVar59[2] = ppppppuVar34;
              pppppppuVar59 = pppppppuVar59 + 4;
              puVar42 = puVar42 + 4;
            } while (pppppppuVar59 < (ulong *******)((long)pppppppuVar54 + (long)param_3));
          }
        }
      }
    }
    else {
      ppppppuVar34 = (ulong ******)*puVar42;
      pppppppuVar54[1] = (ulong ******)puVar42[1];
      *pppppppuVar54 = ppppppuVar34;
      ppppppuVar34 = (ulong ******)puVar42[2];
      pppppppuVar54[3] = (ulong ******)puVar42[3];
      pppppppuVar54[2] = ppppppuVar34;
      if (0x20 < (long)param_3) {
        pppppppuVar59 = pppppppuVar54 + 4;
        puVar42 = puVar42 + 6;
        do {
          ppppppuVar34 = (ulong ******)puVar42[-2];
          pppppppuVar59[1] = (ulong ******)puVar42[-1];
          *pppppppuVar59 = ppppppuVar34;
          ppppppuVar34 = (ulong ******)*puVar42;
          pppppppuVar59[3] = (ulong ******)puVar42[1];
          pppppppuVar59[2] = ppppppuVar34;
          pppppppuVar59 = pppppppuVar59 + 4;
          puVar42 = puVar42 + 4;
        } while (pppppppuVar59 < (ulong *******)((long)pppppppuVar54 + (long)param_3));
      }
    }
LAB_1000cde6c:
    do {
      in_stack_00000068 = in_stack_00000068 + -1;
      unaff_x26 = (ulong *******)((long)unaff_x26 + (long)unaff_x25);
      if ((ulong *******)0xffffffffffffff88 < unaff_x25) goto LAB_1000cc920;
      if (0x40 < in_stack_000000a0) {
        param_1 = unaff_x27;
        if (in_stack_00000068 == 0) {
LAB_1000ce274:
          lVar67 = 0x58;
          do {
            *in_stack_00000040 = (int)*(undefined8 *)((long)&stack0x00000098 + lVar67);
            lVar67 = lVar67 + 8;
            in_stack_00000040 = in_stack_00000040 + 1;
          } while (lVar67 != 0x70);
          uVar43 = (long)unaff_x23 - (long)in_stack_00000078;
          pppppppuVar48 = in_stack_00000078;
          if ((ulong)((long)param_5 - (long)unaff_x26) < uVar43) {
            unaff_x25 = (ulong *******)0xffffffffffffffba;
          }
          else {
            unaff_x27 = unaff_x26;
            func_0x000107c610b4(unaff_x26,in_stack_00000078,uVar43);
            unaff_x25 = (ulong *******)((long)unaff_x26 + (uVar43 - (long)param_2));
          }
          goto LAB_1000cc920;
        }
        goto LAB_1000cc91c;
      }
      if (in_stack_000000a8 < in_stack_000000b8) {
        if (in_stack_000000a8 != in_stack_000000b0) {
          uVar50 = (int)in_stack_000000a8 - (int)in_stack_000000b0;
          if (in_stack_000000b0 <=
              (ulong *******)((long)in_stack_000000a8 - (ulong)(in_stack_000000a0 >> 3))) {
            uVar50 = in_stack_000000a0 >> 3;
          }
          in_stack_000000a0 = in_stack_000000a0 + uVar50 * -8;
          goto LAB_1000cdb18;
        }
      }
      else {
        uVar50 = in_stack_000000a0 >> 3;
        in_stack_000000a0 = in_stack_000000a0 & 7;
LAB_1000cdb18:
        in_stack_000000a8 = (ulong *******)((long)in_stack_000000a8 - (ulong)uVar50);
        in_stack_00000098 = *in_stack_000000a8;
      }
      if (in_stack_00000068 == 0) {
        if ((0x40 < in_stack_000000a0) ||
           (((unaff_x25 = (ulong *******)0xffffffffffffffec, in_stack_000000a0 == 0x40 &&
             (in_stack_000000a8 < in_stack_000000b8)) &&
            (param_5 = in_stack_00000048, unaff_x23 = in_stack_00000038,
            in_stack_000000a8 == in_stack_000000b0)))) goto LAB_1000ce274;
        goto LAB_1000cc920;
      }
      uVar43 = (ulong)in_stack_000000a0;
      puVar44 = (ushort *)(in_stack_000000c8 + in_stack_000000c0 * 8);
      bVar15 = (byte)puVar44[1];
      puVar5 = (ushort *)(in_stack_000000e8 + in_stack_000000e0 * 8);
      bVar14 = (byte)puVar5[1];
      puVar6 = (ushort *)(in_stack_000000d8 + in_stack_000000d0 * 8);
      bVar16 = (byte)puVar6[1];
      param_1 = (ulong *******)(ulong)bVar16;
      uVar50 = (uint)bVar16;
      if (bVar16 == 0) {
        pppppppuVar59 = (ulong *******)0x0;
LAB_1000cdb94:
        if (*(uint *)(puVar44 + 2) == 0) {
          pppppppuVar59 = (ulong *******)((long)pppppppuVar59 + 1);
        }
        if (pppppppuVar59 != (ulong *******)0x0) {
          if (pppppppuVar59 == (ulong *******)0x3) {
            pppppppuVar48 = (ulong *******)((long)in_stack_000000f0 + -1);
            if (pppppppuVar48 < (ulong *******)0x2) {
              pppppppuVar48 = (ulong *******)0x1;
            }
LAB_1000cdbd8:
            in_stack_00000100 = in_stack_000000f8;
          }
          else {
            pppppppuVar48 = (ulong *******)unaff_x21[(long)pppppppuVar59];
            if (pppppppuVar48 < (ulong *******)0x2) {
              pppppppuVar48 = (ulong *******)0x1;
            }
            if (pppppppuVar59 != (ulong *******)0x1) goto LAB_1000cdbd8;
          }
          in_stack_000000f8 = in_stack_000000f0;
          goto LAB_1000cdbe8;
        }
      }
      else {
        uVar62 = uVar43 & 0x3f;
        uVar43 = (ulong)(in_stack_000000a0 + uVar50);
        pppppppuVar48 =
             (ulong *******)
             (((ulong)((long)in_stack_00000098 << uVar62) >> ((ulong)-(uint)bVar16 & 0x3f)) +
             (ulong)*(uint *)(puVar6 + 2));
        pppppppuVar59 = pppppppuVar48;
        if (uVar50 == 1) goto LAB_1000cdb94;
        in_stack_00000100 = in_stack_000000f8;
        in_stack_000000f8 = in_stack_000000f0;
LAB_1000cdbe8:
        in_stack_000000f8 = in_stack_000000f0;
        in_stack_000000f0 = pppppppuVar48;
      }
      if (bVar14 == 0) {
        pppppppuVar48 = (ulong *******)0x0;
      }
      else {
        pppppppuVar48 =
             (ulong *******)
             ((ulong)((long)in_stack_00000098 << (uVar43 & 0x3f)) >> ((ulong)-(uint)bVar14 & 0x3f));
        uVar43 = (ulong)((int)uVar43 + (uint)bVar14);
      }
      if ((0x1e < (uint)bVar14 + (uint)bVar15 + uVar50) && (uVar50 = (uint)uVar43, uVar50 < 0x41)) {
        if (in_stack_000000a8 < in_stack_000000b8) {
          if (in_stack_000000a8 == in_stack_000000b0) goto LAB_1000cdc74;
          param_1 = (ulong *******)((long)in_stack_000000a8 - (ulong)(uVar50 >> 3));
          uVar63 = (int)in_stack_000000a8 - (int)in_stack_000000b0;
          if (in_stack_000000b0 <= param_1) {
            uVar63 = uVar50 >> 3;
          }
          uVar50 = uVar50 + uVar63 * -8;
        }
        else {
          uVar63 = uVar50 >> 3;
          uVar50 = uVar50 & 7;
        }
        in_stack_000000a8 = (ulong *******)((long)in_stack_000000a8 - (ulong)uVar63);
        uVar43 = (ulong)uVar50;
        in_stack_00000098 = *in_stack_000000a8;
      }
LAB_1000cdc74:
      param_3 = (ulong *******)((long)pppppppuVar48 + (ulong)*(uint *)(puVar5 + 2));
      uVar50 = (uint)bVar15;
      iVar46 = (int)uVar43;
      if (uVar50 != 0) {
        iVar46 = (int)uVar43 + uVar50;
      }
      uVar62 = 0;
      if (uVar50 != 0) {
        uVar62 = (ulong)((long)in_stack_00000098 << (uVar43 & 0x3f)) >>
                 ((ulong)-(uint)bVar15 & 0x3f);
      }
      uVar62 = uVar62 + *(uint *)(puVar44 + 2);
      iVar46 = iVar46 + (uint)*(byte *)((long)puVar44 + 3);
      in_stack_000000c0 =
           ((ulong)in_stack_00000098 >> ((ulong)(uint)-iVar46 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar44 + 3) * 4)) +
           (ulong)*puVar44;
      iVar46 = iVar46 + (uint)*(byte *)((long)puVar5 + 3);
      in_stack_000000e0 =
           ((ulong)in_stack_00000098 >> ((ulong)(uint)-iVar46 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar5 + 3) * 4)) +
           (ulong)*puVar5;
      in_stack_000000a0 = iVar46 + (uint)*(byte *)((long)puVar6 + 3);
      in_stack_000000d0 =
           ((ulong)in_stack_00000098 >> ((ulong)-in_stack_000000a0 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar6 + 3) * 4)) +
           (ulong)*puVar6;
      pppppppuVar59 = (ulong *******)((long)in_stack_00000078 + uVar62);
      if ((pppppppuVar59 <= unaff_x23) &&
         (unaff_x25 = (ulong *******)(uVar62 + (long)param_3),
         (undefined *)((long)unaff_x26 + (long)unaff_x25) <= in_stack_00000050))
      goto code_r0x0001000cdd30;
      unaff_x27 = unaff_x26;
      pppppppuVar48 = param_5;
      uStack_f0 = uVar62;
      pppppppuStack_e8 = param_3;
      pppppppuStack_e0 = in_stack_000000f0;
      func_0x000107c2ae84(unaff_x26,param_5,&uStack_f0,&stack0x00000078,unaff_x23);
      unaff_x25 = unaff_x27;
    } while( true );
  case 0x31:
  case 0x34:
code_r0x0001000ae568:
    pppppppuVar59 = param_2;
    param_3 = pppppppuVar41;
    if (!in_ZR) {
      param_3 = (ulong *******)pcVar47;
    }
    goto code_r0x00010bdb78a8;
  case 0x35:
code_r0x0001000ae58c:
    if (uVar50 != 9) {
code_r0x0001000ae91c:
      func_0x000107c60690(1);
      uVar63 = uVar63 & 0xff;
      if (uVar63 < 4) {
        param_3 = (ulong *******)0x800000010f215480;
        pppppppuVar59 = (ulong *******)0xd000000000000022;
        if (uVar63 != 2) {
          param_3 = (ulong *******)0xe700000000000000;
          pppppppuVar59 = (ulong *******)0x64616f6c657270;
        }
        pcVar47 = "featureSyncJobProcessor";
        pppppppuVar54 = (ulong *******)0xd000000000000015;
        if (((ulong)param_2 & 0xff) != 0) {
          pcVar47 = "esSyncJobProcessor";
          pppppppuVar54 = (ulong *******)0xd000000000000017;
        }
        pppppppuVar48 = (ulong *******)((ulong)pcVar47 | 0x8000000000000000);
        bVar29 = SBORROW4(uVar63,1);
        iVar46 = uVar63 - 1;
        bVar30 = uVar63 == 1;
      }
      else {
        param_3 = (ulong *******)0x800000010f215440;
        pppppppuVar59 = (ulong *******)0xd000000000000010;
        if (uVar63 != 6) {
          param_3 = (ulong *******)0xef72656469766f72;
          pppppppuVar59 = (ulong *******)0x507463656a627573;
        }
        pppppppuVar48 = (ulong *******)0xee0073746e656970;
        pppppppuVar54 = (ulong *******)0x696365526b6e6172;
        if (uVar63 != 4) {
          pppppppuVar48 = (ulong *******)0x800000010f215460;
          pppppppuVar54 = (ulong *******)0xd000000000000011;
        }
        bVar29 = SBORROW4(uVar63,5);
        iVar46 = uVar63 - 5;
        bVar30 = uVar63 == 5;
      }
      if (bVar30 || iVar46 < 0 != bVar29) {
        pppppppuVar59 = pppppppuVar54;
        param_3 = pppppppuVar48;
      }
      goto code_r0x00010bdb78a8;
    }
code_r0x0001000aebbc:
    param_2 = (ulong *******)0x2;
    goto code_r0x0001000ae86c;
  case 0x36:
    goto code_r0x0001000ae458;
  case 0x39:
code_r0x0001000ae5c8:
    uVar43 = (long)(char)unaff_x21 + (ulong)(param_2 >= (ulong *******)0x5);
    if ((long)-uVar43 < 0 == SCARRY8(~uVar43,(ulong)(param_2 < (ulong *******)0x5))) {
      if (param_2 == (ulong *******)0x3 && unaff_x21 == (ulong *******)0x0)
      goto code_r0x0001000aebc4;
      goto code_r0x0001000aeb94;
    }
    if (param_2 != (ulong *******)0x5 || unaff_x21 != (ulong *******)0x0) {
      param_2 = (ulong *******)0x7;
      goto code_r0x0001000ae86c;
    }
    goto code_r0x0001000aebdc;
  case 0x3b:
    goto code_r0x0001000ae478;
  case 0x3e:
    goto code_r0x0001000ae468;
  }
  func_0x000107c60690(uVar61);
  param_2 = (ulong *******)((ulong)param_2 & 0xff);
code_r0x0001000ae86c:
  func_0x000107c60690(param_2);
  return param_2;
code_r0x0001000cdd30:
  unaff_x27 = (ulong *******)((long)unaff_x26 + uVar62);
  ppppppuVar34 = *in_stack_00000078;
  unaff_x26[1] = in_stack_00000078[1];
  *unaff_x26 = ppppppuVar34;
  pppppppuVar58 = in_stack_000000f0;
  if (uVar62 < 0x11) goto LAB_1000cdd84;
  ppppppuVar34 = in_stack_00000078[2];
  unaff_x26[3] = in_stack_00000078[3];
  unaff_x26[2] = ppppppuVar34;
  ppppppuVar34 = in_stack_00000078[4];
  unaff_x26[5] = in_stack_00000078[5];
  unaff_x26[4] = ppppppuVar34;
  pppppppuVar41 = in_stack_00000078;
  if (0x20 < (long)(uVar62 - 0x10)) goto code_r0x0001000cdd60;
  goto LAB_1000cdd84;
code_r0x0001099ee81c:
  uVar63 = (uint)uVar43;
  if (puStack_60 < puStack_50) {
    if (puStack_60 == puStack_58) goto code_r0x0001099ee8ec;
    bVar30 = puStack_58 <= (ulong *)((long)puStack_60 - (uVar43 >> 3));
    uVar64 = (uint)(uVar43 >> 3);
    if (!bVar30) {
      uVar64 = (int)puStack_60 - iVar66;
    }
    uStack_68 = uVar63 + uVar64 * -8;
  }
  else {
    uVar64 = uVar63 >> 3;
    uStack_68 = uVar63 & 7;
    bVar30 = true;
  }
  puStack_60 = (ulong *)((long)puStack_60 - (ulong)uVar64);
  uVar43 = (ulong)uStack_68;
  uStack_70 = *puStack_60;
  if (((ulong *******)((long)pppppppuVar48 + -2) < param_2) || (!bVar30)) goto code_r0x0001099ee8ec;
  puVar44 = (ushort *)((long)param_1 + ((uStack_70 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
  *(ushort *)param_2 = *puVar44;
  uStack_68 = uStack_68 + (byte)puVar44[1];
  uVar43 = (ulong)uStack_68;
  param_2 = (ulong *******)((long)param_2 + (ulong)*(byte *)((long)puVar44 + 3));
  if (0x40 < uStack_68) goto code_r0x0001099ee8ec;
  goto code_r0x0001099ee81c;
code_r0x0001099eea84:
  uVar63 = (uint)uVar43;
  if (uStack_88 < puVar3) {
    if (uStack_88 == puVar7) goto code_r0x0001099eeb54;
    bVar30 = puVar7 <= (ulong *)((long)uStack_88 - (uVar43 >> 3));
    uVar64 = (uint)(uVar43 >> 3);
    if (!bVar30) {
      uVar64 = (int)uStack_88 - iVar56;
    }
    uStack_90 = uVar63 + uVar64 * -8;
  }
  else {
    uVar64 = uVar63 >> 3;
    uStack_90 = uVar63 & 7;
    bVar30 = true;
  }
  uStack_88 = (ulong *)((long)uStack_88 - (ulong)uVar64);
  uVar43 = (ulong)uStack_90;
  uStack_98 = *uStack_88;
  if (((ulong *******)((long)pppppppuVar54 + -2) < pppppppuVar58) || (!bVar30))
  goto code_r0x0001099eeb54;
  puVar44 = (ushort *)((long)param_1 + ((uStack_98 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
  *(ushort *)pppppppuVar58 = *puVar44;
  uStack_90 = uStack_90 + (byte)puVar44[1];
  uVar43 = (ulong)uStack_90;
  pppppppuVar58 = (ulong *******)((long)pppppppuVar58 + (ulong)*(byte *)((long)puVar44 + 3));
  if (0x40 < uStack_90) goto code_r0x0001099eeb54;
  goto code_r0x0001099eea84;
code_r0x0001099eecec:
  uVar63 = (uint)uVar43;
  if (puStack_b0 < puStack_a0) {
    if (puStack_b0 == puStack_a8) goto code_r0x0001099eedbc;
    bVar30 = puStack_a8 <= (ulong *)((long)puStack_b0 - (uVar43 >> 3));
    uVar64 = (uint)(uVar43 >> 3);
    if (!bVar30) {
      uVar64 = (int)puStack_b0 - iVar69;
    }
    uStack_b8 = uVar63 + uVar64 * -8;
  }
  else {
    uVar64 = uVar63 >> 3;
    uStack_b8 = uVar63 & 7;
    bVar30 = true;
  }
  puStack_b0 = (ulong *)((long)puStack_b0 - (ulong)uVar64);
  uVar43 = (ulong)uStack_b8;
  uStack_c0 = *puStack_b0;
  if (((ulong *******)((long)pppppppuVar41 + -2) < pppppppuVar39) || (!bVar30))
  goto code_r0x0001099eedbc;
  puVar44 = (ushort *)((long)param_1 + ((uStack_c0 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4);
  *(ushort *)pppppppuVar39 = *puVar44;
  uStack_b8 = uStack_b8 + (byte)puVar44[1];
  uVar43 = (ulong)uStack_b8;
  pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + (ulong)*(byte *)((long)puVar44 + 3));
  if (0x40 < uStack_b8) goto code_r0x0001099eedbc;
  goto code_r0x0001099eecec;
code_r0x0001099eef50:
  uVar63 = (uint)uVar43;
  if (puStack_d8 < puStack_c8) {
    if (puStack_d8 == puStack_d0) goto code_r0x0001099ef020;
    bVar30 = puStack_d0 <= (undefined8 *)((long)puStack_d8 - (uVar43 >> 3));
    uVar64 = (uint)(uVar43 >> 3);
    if (!bVar30) {
      uVar64 = (int)puStack_d8 - iVar68;
    }
    uVar63 = uVar63 + uVar64 * -8;
  }
  else {
    uVar64 = uVar63 >> 3;
    uVar63 = uVar63 & 7;
    bVar30 = true;
  }
  puStack_d8 = (undefined8 *)((long)puStack_d8 - (ulong)uVar64);
  uVar43 = (ulong)uVar63;
  pppppppuStack_e0 = (ulong *******)(ulong)uVar63;
  pppppppuStack_e8 = (ulong *******)*puStack_d8;
  if (((ulong *******)((long)pppppppuVar59 + -2) < pppppppuVar49) || (!bVar30))
  goto code_r0x0001099ef020;
  puVar44 = (ushort *)
            ((long)param_1 + ((ulong)((long)pppppppuStack_e8 << (uVar43 & 0x3f)) >> uVar50) * 4 + 4)
  ;
  *(ushort *)pppppppuVar49 = *puVar44;
  uVar63 = uVar63 + (byte)puVar44[1];
  uVar43 = (ulong)uVar63;
  pppppppuStack_e0 = (ulong *******)(ulong)uVar63;
  pppppppuVar49 = (ulong *******)((long)pppppppuVar49 + (ulong)*(byte *)((long)puVar44 + 3));
  if (0x40 < uVar63) goto code_r0x0001099ef020;
  goto code_r0x0001099eef50;
}



/* Entry: 1000aed64; end: 1000af113;  */

/* WARNING: Possible PIC construction at 0x0001000aef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aee7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000aef60) */
/* WARNING: Removing unreachable block (ram,0x0001000aee80) */
/* WARNING: Removing unreachable block (ram,0x0001000aef64) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_1000aed64(undefined8 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar1 = param_2 & 0xff;
  uVar4 = param_2 >> 5 & 7;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      func_0x000107c60690(5);
      uVar6 = 0xd000000000000019;
      pcVar2 = "LockedCameraCapture";
      if (uVar1 != 1) {
        uVar6 = 0xd000000000000012;
        pcVar2 = "invalidateSessionContents";
      }
      uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    }
    else {
      uVar1 = param_2 & 0x1f;
      if (uVar4 == 1) {
        func_0x000107c60690(0xc);
        uVar6 = 0xd000000000000010;
        if (uVar1 != 1) {
          uVar6 = 0x6573624f6c6c6163;
        }
        uVar7 = 0x800000010f216480;
        if (uVar1 != 1) {
          uVar7 = 0xec00000072657672;
        }
      }
      else {
        func_0x000107c60690(0x19);
        uVar3 = 0xed00007261657070;
        uVar5 = 0x4164694477656976;
        if (uVar1 != 3) {
          uVar3 = 0xee00686374656665;
          uVar5 = 0x725064616f6c7075;
        }
        uVar7 = 0x800000010f2162e0;
        uVar6 = 0xd000000000000011;
        if (uVar1 != 2) {
          uVar7 = uVar3;
          uVar6 = uVar5;
        }
        uVar3 = 0xed000074696e4972;
        uVar5 = 0x65746c69466f6567;
        if ((param_2 & 0x1f) != 0) {
          uVar3 = 0x800000010f216300;
          uVar5 = 0xd000000000000017;
        }
        if (uVar1 < 2) {
          uVar6 = uVar5;
          uVar7 = uVar3;
        }
      }
    }
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar6,uVar7);
    return;
  }
  if (uVar4 < 5) {
    if (uVar4 == 3) {
      if (uVar1 < 100) {
        if (uVar1 < 0x62) {
          if (uVar1 == 0x60) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
        }
        else if (uVar1 == 0x62) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
      }
      else if (uVar1 < 0x66) {
        if (uVar1 == 100) {
          uVar6 = 4;
        }
        else {
          uVar6 = 6;
        }
      }
      else if (uVar1 == 0x66) {
        uVar6 = 7;
      }
      else {
        uVar6 = 8;
      }
    }
    else if (uVar1 < 0x84) {
      if (uVar1 < 0x82) {
        if (uVar1 == 0x80) {
          uVar6 = 9;
        }
        else {
          uVar6 = 10;
        }
      }
      else if (uVar1 == 0x82) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = 0xd;
      }
    }
    else if (uVar1 < 0x86) {
      if (uVar1 == 0x84) {
        uVar6 = 0xe;
      }
      else {
        uVar6 = 0xf;
      }
    }
    else if (uVar1 == 0x86) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x11;
    }
  }
  else if (uVar4 == 5) {
    if (uVar1 < 0xa4) {
      if (uVar1 < 0xa2) {
        if (uVar1 == 0xa0) {
          uVar6 = 0x12;
        }
        else {
          uVar6 = 0x13;
        }
      }
      else if (uVar1 == 0xa2) {
        uVar6 = 0x14;
      }
      else {
        uVar6 = 0x15;
      }
    }
    else if (uVar1 < 0xa6) {
      if (uVar1 == 0xa4) {
        uVar6 = 0x16;
      }
      else {
        uVar6 = 0x17;
      }
    }
    else {
      if (uVar1 != 0xa6) {
        func_0x000107c60690(0x1a);
        uVar6 = 0xd000000000000012;
        uVar7 = 0x800000010f2162a0;
        goto code_r0x000107c5fb58;
      }
      uVar6 = 0x18;
    }
  }
  else if (uVar1 < 0xc2) {
    if (uVar1 == 0xc0) {
      uVar6 = 0x1b;
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else if (uVar1 == 0xc2) {
    uVar6 = 0x1d;
  }
  else if (uVar1 == 0xc3) {
    uVar6 = 0x1e;
  }
  else {
    uVar6 = 0x1f;
  }
  func_0x000107c60690(uVar6);
  return;
}



/* Entry: 1000af114; end: 1000afb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1000af114(ulong param_1,undefined **param_2,uint param_3,ulong param_4,undefined **param_5,
             uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZR;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *unaff_x19;
  long unaff_x20;
  undefined **unaff_x21;
  long unaff_x22;
  long lVar19;
  int unaff_w25;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  long in_stack_00000050;
  
  uVar17 = param_3 >> 2 & 0x3f;
  uVar18 = (ulong)uVar17;
  uVar13 = (uint)param_1;
  uVar15 = (uint)param_4;
  uVar16 = (uint)param_5;
  uVar14 = (uint)param_2;
  switch(uVar17) {
  default:
    if (3 < (param_6 & 0xff)) break;
  case 0x3d:
    uVar17 = uVar16 & 0xff;
  case 0x3e:
    if (((ulong)param_2 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000af164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10dd3e68a + param_1 * 2) * 4 + 0x1000af168))();
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = param_1;
      return auVar20;
    }
    if ((uVar17 != 1) && (uVar13 == uVar15)) {
      auVar35._8_8_ = param_2;
      auVar35._0_8_ = 1;
      return auVar35;
    }
    break;
  case 1:
    if ((param_6 & 0xfc) != 4) break;
    goto code_r0x0001000af568;
  case 2:
    if ((param_6 & 0xfc) == 8) goto code_r0x0001000af568;
    break;
  case 3:
    if ((param_6 & 0xfc) == 0xc) {
      uVar17 = uVar15 & 0xff;
      uVar16 = uVar13 & 0xff;
      if (uVar16 < 0xb) {
        if (uVar16 == 9) {
          if (uVar17 == 9) {
            auVar49._8_8_ = param_2;
            auVar49._0_8_ = 1;
            return auVar49;
          }
          break;
        }
        if (uVar16 == 10) {
          if (uVar17 == 10) {
            auVar24._8_8_ = param_2;
            auVar24._0_8_ = 1;
            return auVar24;
          }
          break;
        }
      }
      else {
        if (uVar16 == 0xb) {
          if (uVar17 == 0xb) {
            auVar50._8_8_ = param_2;
            auVar50._0_8_ = 1;
            return auVar50;
          }
          break;
        }
        if (uVar16 == 0xc) {
          if (uVar17 == 0xc) {
            auVar33._8_8_ = param_2;
            auVar33._0_8_ = 1;
            return auVar33;
          }
          break;
        }
      }
      if ((3 < uVar17 - 9) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar45._8_8_ = param_2;
        auVar45._0_8_ = 1;
        return auVar45;
      }
    }
    break;
  case 4:
    if ((param_6 & 0xfc) == 0x10) goto code_r0x0001000af568;
    break;
  case 5:
    if ((param_6 & 0xfc) == 0x14) {
      uVar17 = uVar13 & 0xff;
      uVar16 = uVar15 & 0xff;
      uVar13 = uVar13 >> 5 & 7;
      if (uVar13 < 3) {
        if (uVar13 == 0) {
          if (uVar16 < 0x20) {
            auVar86._1_7_ = 0;
            auVar86[0] = uVar17 == uVar16;
            auVar86._8_8_ = param_4;
            return auVar86;
          }
        }
        else if (uVar13 == 1) {
          if ((uVar15 & 0xe0) == 0x20) {
LAB_1000b9f14:
            auVar87._1_7_ = 0;
            auVar87[0] = ((uVar16 ^ uVar17) & 0x1f) == 0;
            auVar87._8_8_ = param_4;
            return auVar87;
          }
        }
        else if ((uVar15 & 0xe0) == 0x40) goto LAB_1000b9f14;
      }
      else if (uVar13 < 5) {
        if (uVar13 == 3) {
          if (uVar17 < 100) {
            if (uVar17 < 0x62) {
              if (uVar17 == 0x60) {
                if (uVar16 == 0x60) {
                  auVar84._8_8_ = param_4;
                  auVar84._0_8_ = 1;
                  return auVar84;
                }
              }
              else if (uVar16 == 0x61) {
                auVar103._8_8_ = param_4;
                auVar103._0_8_ = 1;
                return auVar103;
              }
            }
            else if (uVar17 == 0x62) {
              if (uVar16 == 0x62) {
                auVar94._8_8_ = param_4;
                auVar94._0_8_ = 1;
                return auVar94;
              }
            }
            else if (uVar16 == 99) {
              auVar109._8_8_ = param_4;
              auVar109._0_8_ = 1;
              return auVar109;
            }
          }
          else if (uVar17 < 0x66) {
            if (uVar17 == 100) {
              if (uVar16 == 100) {
                auVar90._8_8_ = param_4;
                auVar90._0_8_ = 1;
                return auVar90;
              }
            }
            else if (uVar16 == 0x65) {
              auVar106._8_8_ = param_4;
              auVar106._0_8_ = 1;
              return auVar106;
            }
          }
          else if (uVar17 == 0x66) {
            if (uVar16 == 0x66) {
              auVar97._8_8_ = param_4;
              auVar97._0_8_ = 1;
              return auVar97;
            }
          }
          else if (uVar16 == 0x67) {
            auVar112._8_8_ = param_4;
            auVar112._0_8_ = 1;
            return auVar112;
          }
        }
        else if (uVar17 < 0x84) {
          if (uVar17 < 0x82) {
            if (uVar17 == 0x80) {
              if (uVar16 == 0x80) {
                auVar88._8_8_ = param_4;
                auVar88._0_8_ = 1;
                return auVar88;
              }
            }
            else if (uVar16 == 0x81) {
              auVar105._8_8_ = param_4;
              auVar105._0_8_ = 1;
              return auVar105;
            }
          }
          else if (uVar17 == 0x82) {
            if (uVar16 == 0x82) {
              auVar96._8_8_ = param_4;
              auVar96._0_8_ = 1;
              return auVar96;
            }
          }
          else if (uVar16 == 0x83) {
            auVar111._8_8_ = param_4;
            auVar111._0_8_ = 1;
            return auVar111;
          }
        }
        else if (uVar17 < 0x86) {
          if (uVar17 == 0x84) {
            if (uVar16 == 0x84) {
              auVar92._8_8_ = param_4;
              auVar92._0_8_ = 1;
              return auVar92;
            }
          }
          else if (uVar16 == 0x85) {
            auVar108._8_8_ = param_4;
            auVar108._0_8_ = 1;
            return auVar108;
          }
        }
        else if (uVar17 == 0x86) {
          if (uVar16 == 0x86) {
            auVar99._8_8_ = param_4;
            auVar99._0_8_ = 1;
            return auVar99;
          }
        }
        else if (uVar16 == 0x87) {
          auVar114._8_8_ = param_4;
          auVar114._0_8_ = 1;
          return auVar114;
        }
      }
      else if (uVar13 == 5) {
        if (uVar17 < 0xa4) {
          if (uVar17 < 0xa2) {
            if (uVar17 == 0xa0) {
              if (uVar16 == 0xa0) {
                auVar85._8_8_ = param_4;
                auVar85._0_8_ = 1;
                return auVar85;
              }
            }
            else if (uVar16 == 0xa1) {
              auVar104._8_8_ = param_4;
              auVar104._0_8_ = 1;
              return auVar104;
            }
          }
          else if (uVar17 == 0xa2) {
            if (uVar16 == 0xa2) {
              auVar95._8_8_ = param_4;
              auVar95._0_8_ = 1;
              return auVar95;
            }
          }
          else if (uVar16 == 0xa3) {
            auVar110._8_8_ = param_4;
            auVar110._0_8_ = 1;
            return auVar110;
          }
        }
        else if (uVar17 < 0xa6) {
          if (uVar17 == 0xa4) {
            if (uVar16 == 0xa4) {
              auVar91._8_8_ = param_4;
              auVar91._0_8_ = 1;
              return auVar91;
            }
          }
          else if (uVar16 == 0xa5) {
            auVar107._8_8_ = param_4;
            auVar107._0_8_ = 1;
            return auVar107;
          }
        }
        else if (uVar17 == 0xa6) {
          if (uVar16 == 0xa6) {
            auVar98._8_8_ = param_4;
            auVar98._0_8_ = 1;
            return auVar98;
          }
        }
        else if (uVar16 == 0xa7) {
          auVar113._8_8_ = param_4;
          auVar113._0_8_ = 1;
          return auVar113;
        }
      }
      else if (uVar17 < 0xc2) {
        if (uVar17 == 0xc0) {
          if (uVar16 == 0xc0) {
            auVar93._8_8_ = param_4;
            auVar93._0_8_ = 1;
            return auVar93;
          }
        }
        else if (uVar16 == 0xc1) {
          auVar102._8_8_ = param_4;
          auVar102._0_8_ = 1;
          return auVar102;
        }
      }
      else if (uVar17 == 0xc2) {
        if (uVar16 == 0xc2) {
          auVar100._8_8_ = param_4;
          auVar100._0_8_ = 1;
          return auVar100;
        }
      }
      else if (uVar17 == 0xc3) {
        if (uVar16 == 0xc3) {
          auVar89._8_8_ = param_4;
          auVar89._0_8_ = 1;
          return auVar89;
        }
      }
      else if (uVar16 == 0xc4) {
        auVar101._8_8_ = param_4;
        auVar101._0_8_ = 1;
        return auVar101;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      return auVar9 << 0x40;
    }
    break;
  case 6:
    if ((param_6 & 0xfc) == 0x18) {
      uVar13 = uVar13 & 0xff;
      uVar17 = uVar15 & 0xff;
      if (uVar13 == 4) {
        if (uVar17 == 4) {
          auVar118._8_8_ = param_4;
          auVar118._0_8_ = 1;
          return auVar118;
        }
      }
      else if (uVar13 == 5) {
        if (uVar17 == 5) {
          auVar117._8_8_ = param_4;
          auVar117._0_8_ = 1;
          return auVar117;
        }
      }
      else if ((uVar15 & 0xfe) != 4) {
        auVar119._1_7_ = 0;
        auVar119[0] = uVar13 == uVar17;
        auVar119._8_8_ = param_4;
        return auVar119;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      return auVar10 << 0x40;
    }
    break;
  case 7:
    if ((param_6 & 0xfc) == 0x1c) {
      uVar17 = uVar15 & 0xff;
      uVar16 = uVar13 & 0xff;
      if (uVar16 < 5) {
        if (uVar16 == 3) {
          if (uVar17 == 3) {
            auVar51._8_8_ = param_2;
            auVar51._0_8_ = 1;
            return auVar51;
          }
          break;
        }
        if (uVar16 == 4) {
          if (uVar17 == 4) {
            auVar25._8_8_ = param_2;
            auVar25._0_8_ = 1;
            return auVar25;
          }
          break;
        }
      }
      else {
        if (uVar16 == 5) {
          if (uVar17 == 5) {
            auVar52._8_8_ = param_2;
            auVar52._0_8_ = 1;
            return auVar52;
          }
          break;
        }
        if (uVar16 == 6) {
          if (uVar17 == 6) {
            auVar34._8_8_ = param_2;
            auVar34._0_8_ = 1;
            return auVar34;
          }
          break;
        }
      }
      if ((3 < uVar17 - 3) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar46._8_8_ = param_2;
        auVar46._0_8_ = 1;
        return auVar46;
      }
    }
    break;
  case 8:
    if ((param_6 & 0xfc) == 0x20) goto code_r0x0001000af568;
    break;
  case 9:
    if ((param_6 & 0xfc) == 0x24) {
      uVar17 = uVar13 & 0xff;
      uVar16 = uVar15 & 0xff;
      if (uVar17 >> 6 == 0) {
        if ((uVar16 < 0x40) && ((uVar15 & 0x3f) == (uVar13 & 0xff))) {
          auVar37._8_8_ = param_2;
          auVar37._0_8_ = 1;
          return auVar37;
        }
      }
      else if (uVar17 >> 6 == 1) {
        if (((uVar15 & 0xc0) == 0x40) && (((uVar16 ^ uVar17) & 0x3f) == 0)) {
          auVar21._8_8_ = param_2;
          auVar21._0_8_ = 1;
          return auVar21;
        }
      }
      else if (uVar17 < 0x82) {
        if (uVar17 == 0x80) {
          if (uVar16 == 0x80) {
            auVar38._8_8_ = param_2;
            auVar38._0_8_ = 1;
            return auVar38;
          }
        }
        else if (uVar16 == 0x81) {
          auVar62._8_8_ = param_2;
          auVar62._0_8_ = 1;
          return auVar62;
        }
      }
      else if (uVar17 == 0x82) {
        if (uVar16 == 0x82) {
          auVar53._8_8_ = param_2;
          auVar53._0_8_ = 1;
          return auVar53;
        }
      }
      else if (uVar16 == 0x83) {
        auVar63._8_8_ = param_2;
        auVar63._0_8_ = 1;
        return auVar63;
      }
    }
    break;
  case 10:
    if ((param_6 & 0xfc) == 0x28) goto code_r0x0001000af568;
    break;
  case 0xb:
    if ((param_6 & 0xfc) == 0x2c) {
      uVar14 = uVar14 & 0xff;
      if (uVar14 == 1 || ((ulong)param_2 & 0xff) == 0) {
        if (((ulong)param_2 & 0xff) == 0) {
          if (((ulong)param_5 & 0xff) == 0) {
code_r0x0001048a2510:
            auVar122._1_7_ = 0;
            auVar122[0] = uVar13 == uVar15;
            auVar122._8_8_ = param_2;
            return auVar122;
          }
        }
        else if ((uVar16 & 0xff) == 1) goto code_r0x0001048a2510;
      }
      else if (uVar14 == 2) {
        if ((uVar16 & 0xff) == 2) {
          auVar120._1_7_ = 0;
          auVar120[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
          auVar120._8_8_ = param_2;
          return auVar120;
        }
      }
      else if (uVar14 == 3) {
        if ((uVar16 & 0xff) == 3) goto code_r0x0001048a2510;
      }
      else if (((uVar16 & 0xff) == 4) && (param_4 == 0)) {
        auVar121._8_8_ = param_2;
        auVar121._0_8_ = 1;
        return auVar121;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      return auVar5 << 0x40;
    }
    break;
  case 0xc:
    if ((param_6 & 0xfc) == 0x30) goto code_r0x0001000af568;
    break;
  case 0xd:
    if ((param_6 & 0xfc) == 0x34) {
      if (((ulong)param_2 & 0xff) == 0) {
        if (((ulong)param_5 & 0xff) == 0) {
          auVar125._1_7_ = 0;
          auVar125[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
          auVar125._8_8_ = param_2;
          return auVar125;
        }
      }
      else {
        if ((uVar14 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001048a3744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1048a3748 + (ulong)(byte)(&UNK_10dd3f938)[param_1] * 4))();
          auVar124._8_8_ = param_2;
          auVar124._0_8_ = param_1;
          return auVar124;
        }
        if ((uVar16 & 0xff) == 1) {
          auVar123._1_7_ = 0;
          auVar123[0] = uVar13 == uVar15;
          auVar123._8_8_ = param_2;
          return auVar123;
        }
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2;
      return auVar6 << 0x40;
    }
    break;
  case 0xe:
    if ((param_6 & 0xfc) == 0x38) {
      uVar14 = uVar14 & 0xff;
      if (uVar14 == 1 || ((ulong)param_2 & 0xff) == 0) {
        if (((ulong)param_2 & 0xff) == 0) {
          if (((ulong)param_5 & 0xff) == 0) {
code_r0x0001048a4c34:
            auVar128._1_7_ = 0;
            auVar128[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
            auVar128._8_8_ = param_2;
            return auVar128;
          }
        }
        else if ((uVar16 & 0xff) == 1) goto code_r0x0001048a4c34;
      }
      else if (uVar14 == 2) {
        if ((uVar16 & 0xff) == 2) {
          auVar126._1_7_ = 0;
          auVar126[0] = uVar13 == uVar15;
          auVar126._8_8_ = param_2;
          return auVar126;
        }
      }
      else {
        if (uVar14 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1048a4c10 + (ulong)(byte)(&UNK_10dd3fba3)[param_1] * 4))();
          auVar127._8_8_ = param_2;
          auVar127._0_8_ = param_1;
          return auVar127;
        }
        if ((uVar16 & 0xff) == 3) goto code_r0x0001048a4c34;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_2;
      return auVar7 << 0x40;
    }
    break;
  case 0xf:
    if ((param_6 & 0xfc) == 0x3c) {
      uVar17 = uVar13 & 0xff;
      uVar16 = uVar15 & 0xff;
      uVar13 = uVar13 >> 4 & 0xf;
      if (uVar13 < 4) {
        if (uVar13 < 2) {
          if (uVar13 == 0) {
            if (uVar16 < 0x10) {
              auVar130._1_7_ = 0;
              auVar130[0] = uVar17 == uVar16;
              auVar130._8_8_ = param_4;
              return auVar130;
            }
          }
          else if ((uVar15 & 0xf0) == 0x10) {
            auVar134._1_7_ = 0;
            auVar134[0] = ((uVar16 ^ uVar17) & 0xf) == 0;
            auVar134._8_8_ = param_4;
            return auVar134;
          }
        }
        else if (uVar13 == 2) {
          if (uVar17 < 0x22) {
            if (uVar17 == 0x20) {
              if (uVar16 == 0x20) {
                auVar131._8_8_ = param_4;
                auVar131._0_8_ = 1;
                return auVar131;
              }
            }
            else if (uVar16 == 0x21) {
              auVar148._8_8_ = param_4;
              auVar148._0_8_ = 1;
              return auVar148;
            }
          }
          else if (uVar17 == 0x22) {
            if (uVar16 == 0x22) {
              auVar139._8_8_ = param_4;
              auVar139._0_8_ = 1;
              return auVar139;
            }
          }
          else if (uVar16 == 0x23) {
            auVar150._8_8_ = param_4;
            auVar150._0_8_ = 1;
            return auVar150;
          }
        }
        else if (uVar17 < 0x32) {
          if (uVar17 == 0x30) {
            if (uVar16 == 0x30) {
              auVar135._8_8_ = param_4;
              auVar135._0_8_ = 1;
              return auVar135;
            }
          }
          else if (uVar16 == 0x31) {
            auVar149._8_8_ = param_4;
            auVar149._0_8_ = 1;
            return auVar149;
          }
        }
        else if (uVar17 == 0x32) {
          if (uVar16 == 0x32) {
            auVar140._8_8_ = param_4;
            auVar140._0_8_ = 1;
            return auVar140;
          }
        }
        else if (uVar16 == 0x33) {
          auVar151._8_8_ = param_4;
          auVar151._0_8_ = 1;
          return auVar151;
        }
      }
      else if (uVar13 < 6) {
        if (uVar13 == 4) {
          if (uVar17 < 0x42) {
            if (uVar17 == 0x40) {
              if (uVar16 == 0x40) {
                auVar132._8_8_ = param_4;
                auVar132._0_8_ = 1;
                return auVar132;
              }
            }
            else if (uVar16 == 0x41) {
              auVar154._8_8_ = param_4;
              auVar154._0_8_ = 1;
              return auVar154;
            }
          }
          else if (uVar17 == 0x42) {
            if (uVar16 == 0x42) {
              auVar142._8_8_ = param_4;
              auVar142._0_8_ = 1;
              return auVar142;
            }
          }
          else if (uVar16 == 0x43) {
            auVar156._8_8_ = param_4;
            auVar156._0_8_ = 1;
            return auVar156;
          }
        }
        else if (uVar17 < 0x52) {
          if (uVar17 == 0x50) {
            if (uVar16 == 0x50) {
              auVar137._8_8_ = param_4;
              auVar137._0_8_ = 1;
              return auVar137;
            }
          }
          else if (uVar16 == 0x51) {
            auVar155._8_8_ = param_4;
            auVar155._0_8_ = 1;
            return auVar155;
          }
        }
        else if (uVar17 == 0x52) {
          if (uVar16 == 0x52) {
            auVar143._8_8_ = param_4;
            auVar143._0_8_ = 1;
            return auVar143;
          }
        }
        else if (uVar16 == 0x53) {
          auVar157._8_8_ = param_4;
          auVar157._0_8_ = 1;
          return auVar157;
        }
      }
      else if (uVar13 == 6) {
        if (uVar17 < 0x62) {
          if (uVar17 == 0x60) {
            if (uVar16 == 0x60) {
              auVar133._8_8_ = param_4;
              auVar133._0_8_ = 1;
              return auVar133;
            }
          }
          else if (uVar16 == 0x61) {
            auVar146._8_8_ = param_4;
            auVar146._0_8_ = 1;
            return auVar146;
          }
        }
        else if (uVar17 == 0x62) {
          if (uVar16 == 0x62) {
            auVar138._8_8_ = param_4;
            auVar138._0_8_ = 1;
            return auVar138;
          }
        }
        else if (uVar16 == 99) {
          auVar147._8_8_ = param_4;
          auVar147._0_8_ = 1;
          return auVar147;
        }
      }
      else if (uVar13 == 7) {
        if (uVar17 < 0x72) {
          if (uVar17 == 0x70) {
            if (uVar16 == 0x70) {
              auVar129._8_8_ = param_4;
              auVar129._0_8_ = 1;
              return auVar129;
            }
          }
          else if (uVar16 == 0x71) {
            auVar152._8_8_ = param_4;
            auVar152._0_8_ = 1;
            return auVar152;
          }
        }
        else if (uVar17 == 0x72) {
          if (uVar16 == 0x72) {
            auVar141._8_8_ = param_4;
            auVar141._0_8_ = 1;
            return auVar141;
          }
        }
        else if (uVar16 == 0x73) {
          auVar153._8_8_ = param_4;
          auVar153._0_8_ = 1;
          return auVar153;
        }
      }
      else if (uVar17 == 0x80) {
        if (uVar16 == 0x80) {
          auVar144._8_8_ = param_4;
          auVar144._0_8_ = 1;
          return auVar144;
        }
      }
      else if (uVar17 == 0x81) {
        if (uVar16 == 0x81) {
          auVar136._8_8_ = param_4;
          auVar136._0_8_ = 1;
          return auVar136;
        }
      }
      else if (uVar16 == 0x82) {
        auVar145._8_8_ = param_4;
        auVar145._0_8_ = 1;
        return auVar145;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_4;
      return auVar11 << 0x40;
    }
    break;
  case 0x10:
    if ((param_6 & 0xfc) == 0x40) {
      uVar14 = uVar14 & 0xff;
      if (uVar14 == 1 || ((ulong)param_2 & 0xff) == 0) {
        if (((ulong)param_2 & 0xff) == 0) {
          if (((ulong)param_5 & 0xff) == 0) {
LAB_1000b9d20:
            auVar81._1_7_ = 0;
            auVar81[0] = uVar13 == uVar15;
            auVar81._8_8_ = param_2;
            return auVar81;
          }
        }
        else if ((uVar16 & 0xff) == 1) goto LAB_1000b9d20;
      }
      else if (uVar14 == 2) {
        if ((uVar16 & 0xff) == 2) goto LAB_1000b9d20;
      }
      else if (uVar14 == 3) {
        if ((uVar16 & 0xff) == 3) {
          auVar79._1_7_ = 0;
          auVar79[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
          auVar79._8_8_ = param_2;
          return auVar79;
        }
      }
      else {
        uVar16 = uVar16 & 0xff;
        if (param_1 == 0) {
          if ((uVar16 == 4) && (param_4 == 0)) {
            auVar82._8_8_ = param_2;
            auVar82._0_8_ = 1;
            return auVar82;
          }
        }
        else if (param_1 == 1) {
          if ((uVar16 == 4) && (param_4 == 1)) {
            auVar80._8_8_ = param_2;
            auVar80._0_8_ = 1;
            return auVar80;
          }
        }
        else if ((uVar16 == 4) && (param_4 == 2)) {
          auVar83._8_8_ = param_2;
          auVar83._0_8_ = 1;
          return auVar83;
        }
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      return auVar3 << 0x40;
    }
    break;
  case 0x11:
    if ((param_6 & 0xfc) == 0x44) {
      uVar17 = uVar15 & 0xff;
      uVar16 = uVar13 & 0xff;
      if (uVar16 < 5) {
        if (uVar16 == 2) {
          if (uVar17 == 2) {
            auVar55._8_8_ = param_2;
            auVar55._0_8_ = 1;
            return auVar55;
          }
          break;
        }
        if (uVar16 == 3) {
          if (uVar17 == 3) {
            auVar58._8_8_ = param_2;
            auVar58._0_8_ = 1;
            return auVar58;
          }
          break;
        }
        if (uVar16 == 4) {
          if (uVar17 == 4) {
            auVar26._8_8_ = param_2;
            auVar26._0_8_ = 1;
            return auVar26;
          }
          break;
        }
      }
      else {
        if (uVar16 == 5) {
          if (uVar17 == 5) {
            auVar56._8_8_ = param_2;
            auVar56._0_8_ = 1;
            return auVar56;
          }
          break;
        }
        if (uVar16 == 6) {
          if (uVar17 == 6) {
            auVar59._8_8_ = param_2;
            auVar59._0_8_ = 1;
            return auVar59;
          }
          break;
        }
        if (uVar16 == 7) {
          if (uVar17 == 7) {
            auVar36._8_8_ = param_2;
            auVar36._0_8_ = 1;
            return auVar36;
          }
          break;
        }
      }
      if ((5 < uVar17 - 2) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar57._8_8_ = param_2;
        auVar57._0_8_ = 1;
        return auVar57;
      }
    }
    break;
  case 0x12:
    if ((param_6 & 0xfc) == 0x48) {
      uVar17 = uVar13 & 0xff;
      uVar16 = uVar15 & 0xff;
      uVar13 = uVar13 >> 5 & 7;
      if (uVar13 < 3) {
        if (uVar13 == 0) {
          if (uVar16 < 0x20) {
            auVar160._1_7_ = 0;
            auVar160[0] = uVar17 == uVar16;
            auVar160._8_8_ = param_4;
            return auVar160;
          }
        }
        else if (uVar13 == 1) {
          if ((uVar15 & 0xe0) == 0x20) {
code_r0x0001048a8644:
            auVar161._1_7_ = 0;
            auVar161[0] = ((uVar16 ^ uVar17) & 0x1f) == 0;
            auVar161._8_8_ = param_4;
            return auVar161;
          }
        }
        else if ((uVar15 & 0xe0) == 0x40) goto code_r0x0001048a8644;
      }
      else if (uVar13 < 5) {
        if (uVar13 == 3) {
          if (uVar17 < 0x62) {
            if (uVar17 == 0x60) {
              if (uVar16 == 0x60) {
                auVar158._8_8_ = param_4;
                auVar158._0_8_ = 1;
                return auVar158;
              }
            }
            else if (uVar16 == 0x61) {
              auVar168._8_8_ = param_4;
              auVar168._0_8_ = 1;
              return auVar168;
            }
          }
          else if (uVar17 == 0x62) {
            if (uVar16 == 0x62) {
              auVar164._8_8_ = param_4;
              auVar164._0_8_ = 1;
              return auVar164;
            }
          }
          else if (uVar16 == 99) {
            auVar171._8_8_ = param_4;
            auVar171._0_8_ = 1;
            return auVar171;
          }
        }
        else if (uVar17 < 0x82) {
          if (uVar17 == 0x80) {
            if (uVar16 == 0x80) {
              auVar162._8_8_ = param_4;
              auVar162._0_8_ = 1;
              return auVar162;
            }
          }
          else if (uVar16 == 0x81) {
            auVar170._8_8_ = param_4;
            auVar170._0_8_ = 1;
            return auVar170;
          }
        }
        else if (uVar17 == 0x82) {
          if (uVar16 == 0x82) {
            auVar166._8_8_ = param_4;
            auVar166._0_8_ = 1;
            return auVar166;
          }
        }
        else if (uVar16 == 0x83) {
          auVar173._8_8_ = param_4;
          auVar173._0_8_ = 1;
          return auVar173;
        }
      }
      else if (uVar13 == 5) {
        if (uVar17 < 0xa2) {
          if (uVar17 == 0xa0) {
            if (uVar16 == 0xa0) {
              auVar159._8_8_ = param_4;
              auVar159._0_8_ = 1;
              return auVar159;
            }
          }
          else if (uVar16 == 0xa1) {
            auVar169._8_8_ = param_4;
            auVar169._0_8_ = 1;
            return auVar169;
          }
        }
        else if (uVar17 == 0xa2) {
          if (uVar16 == 0xa2) {
            auVar165._8_8_ = param_4;
            auVar165._0_8_ = 1;
            return auVar165;
          }
        }
        else if (uVar16 == 0xa3) {
          auVar172._8_8_ = param_4;
          auVar172._0_8_ = 1;
          return auVar172;
        }
      }
      else if (uVar17 == 0xc0) {
        if (uVar16 == 0xc0) {
          auVar163._8_8_ = param_4;
          auVar163._0_8_ = 1;
          return auVar163;
        }
      }
      else if (uVar16 == 0xc1) {
        auVar167._8_8_ = param_4;
        auVar167._0_8_ = 1;
        return auVar167;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_4;
      return auVar12 << 0x40;
    }
    break;
  case 0x13:
    if ((param_6 & 0xfc) == 0x4c) goto code_r0x0001000af568;
    break;
  case 0x14:
    if ((param_6 & 0xfc) == 0x50) {
      if ((uVar14 & 0xff) == 1 || ((ulong)param_2 & 0xff) == 0) {
        if (((ulong)param_2 & 0xff) == 0) {
          if (((ulong)param_5 & 0xff) == 0) {
            auVar174._1_7_ = 0;
            auVar174[0] = uVar13 == uVar15;
            auVar174._8_8_ = param_2;
            return auVar174;
          }
        }
        else if ((uVar16 & 0xff) == 1) goto code_r0x0001048aa7fc;
      }
      else {
        if ((uVar14 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1048aa824 + (ulong)(byte)(&UNK_10dd40836)[param_1] * 4))();
          auVar176._8_8_ = param_2;
          auVar176._0_8_ = param_1;
          return auVar176;
        }
        if ((uVar16 & 0xff) == 2) {
code_r0x0001048aa7fc:
          auVar175._1_7_ = 0;
          auVar175[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
          auVar175._8_8_ = param_2;
          return auVar175;
        }
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2;
      return auVar8 << 0x40;
    }
    break;
  case 0x15:
    if ((param_6 & 0xfc) == 0x54) goto code_r0x0001000af568;
    break;
  case 0x16:
    if ((param_6 & 0xfc) == 0x58) goto code_r0x0001000af568;
    break;
  case 0x17:
    if ((param_6 & 0xfc) == 0x5c) goto code_r0x0001000af568;
    break;
  case 0x18:
    if ((param_6 & 0xfc) != 0x60) break;
    uVar17 = uVar16 >> 8 & 0xff;
    if (((ulong)param_2 & 0xff00) != 0x100) {
      if (uVar17 != 1) {
        if (((ulong)param_2 & 0xff) == 1) {
          if ((uVar16 & 0xff) == 1) {
            auVar32._8_8_ = param_2;
            auVar32._0_8_ = 1;
            return auVar32;
          }
        }
        else if (((uVar16 & 0xff) != 1) && (uVar13 == uVar15)) {
          auVar60._8_8_ = param_2;
          auVar60._0_8_ = 1;
          return auVar60;
        }
      }
      break;
    }
    uVar18 = (long)(char)param_2 + (ulong)(param_1 >= 3);
    if ((long)-uVar18 < 0 == SCARRY8(~uVar18,(ulong)(param_1 < 3))) {
      if (param_1 == 0 && ((ulong)param_2 & 0xff) == 0) {
        if ((uVar17 == 1) && (((ulong)param_5 & 0xff) == 0 && param_4 == 0)) {
          auVar64._8_8_ = param_2;
          auVar64._0_8_ = 1;
          return auVar64;
        }
      }
      else if (param_1 == 1 && ((ulong)param_2 & 0xff) == 0) {
        if ((uVar17 == 1) && (param_4 == 1 && ((ulong)param_5 & 0xff) == 0)) {
          auVar43._8_8_ = param_2;
          auVar43._0_8_ = 1;
          return auVar43;
        }
      }
      else if ((uVar17 == 1) && (param_4 == 2 && ((ulong)param_5 & 0xff) == 0)) {
        auVar65._8_8_ = param_2;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      break;
    }
    uVar18 = (long)(char)param_2 + (ulong)(param_1 >= 5);
    if ((long)-uVar18 < 0 != SCARRY8(~uVar18,(ulong)(param_1 < 5))) {
      in_ZR = uVar17 == 1;
      if (param_1 == 5 && ((ulong)param_2 & 0xff) == 0) {
        if (((bool)in_ZR) && (param_4 == 5 && ((ulong)param_5 & 0xff) == 0)) {
          auVar54._8_8_ = param_2;
          auVar54._0_8_ = 1;
          return auVar54;
        }
        break;
      }
      goto code_r0x0001000afa78;
    }
    if (param_1 == 3 && ((ulong)param_2 & 0xff) == 0) {
      if ((uVar17 == 1) && (param_4 == 3 && ((ulong)param_5 & 0xff) == 0)) {
        auVar23._8_8_ = param_2;
        auVar23._0_8_ = 1;
        return auVar23;
      }
      break;
    }
    if (uVar17 != 1) break;
  case 0x2b:
    if (param_4 == 4 && ((ulong)param_5 & 0xff) == 0) {
      auVar66._8_8_ = param_2;
      auVar66._0_8_ = 1;
      return auVar66;
    }
    break;
  case 0x19:
    if ((param_6 & 0xfc) == 100) {
      uVar17 = uVar15 & 0xff;
      uVar16 = uVar13 & 0xff;
      if (uVar16 < 10) {
        if (uVar16 == 8) {
          if (uVar17 == 8) {
            auVar47._8_8_ = param_2;
            auVar47._0_8_ = 1;
            return auVar47;
          }
          break;
        }
        if (uVar16 == 9) {
          if (uVar17 == 9) {
            auVar22._8_8_ = param_2;
            auVar22._0_8_ = 1;
            return auVar22;
          }
          break;
        }
      }
      else {
        if (uVar16 == 10) {
          if (uVar17 == 10) {
            auVar48._8_8_ = param_2;
            auVar48._0_8_ = 1;
            return auVar48;
          }
          break;
        }
        if (uVar16 == 0xb) {
          if (uVar17 == 0xb) {
            auVar31._8_8_ = param_2;
            auVar31._0_8_ = 1;
            return auVar31;
          }
          break;
        }
      }
      if (((uVar15 & 0xfc) != 8) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar44._8_8_ = param_2;
        auVar44._0_8_ = 1;
        return auVar44;
      }
    }
    break;
  case 0x1a:
    if ((param_6 & 0xfc) == 0x68) {
      uVar17 = uVar15 & 0xff;
      if ((uVar13 & 0xff) == 3) {
        if (uVar17 == 3) {
          auVar41._8_8_ = param_2;
          auVar41._0_8_ = 1;
          return auVar41;
        }
      }
      else if ((uVar13 & 0xff) == 4) {
        if (uVar17 == 4) {
          auVar30._8_8_ = param_2;
          auVar30._0_8_ = 1;
          return auVar30;
        }
      }
      else if ((1 < uVar17 - 3) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar42._8_8_ = param_2;
        auVar42._0_8_ = 1;
        return auVar42;
      }
    }
    break;
  case 0x1b:
    if ((param_6 & 0xfc) == 0x6c) {
      if ((param_3 & 3) == 0) {
        if ((param_6 & 3) == 0) {
          auVar78._1_7_ = 0;
          auVar78[0] = uVar13 == uVar15;
          auVar78._8_8_ = param_2;
          return auVar78;
        }
      }
      else {
        if ((param_3 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000b1d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dd41824)[param_1] * 4 + 0x1000b1d44))();
          auVar77._8_8_ = param_2;
          auVar77._0_8_ = param_1;
          return auVar77;
        }
        if ((param_6 & 3) == 1) {
          if ((param_1 == param_4) && (param_2 == param_5)) {
            auVar76._8_8_ = param_2;
            auVar76._0_8_ = 1;
            return auVar76;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(param_1,param_2,param_4,param_5,0);
          auVar177._8_8_ = param_2;
          auVar177._0_8_ = param_1;
          return auVar177;
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2;
      return auVar2 << 0x40;
    }
    break;
  case 0x1c:
    if ((param_6 & 0xfc) == 0x70) goto code_r0x0001000af568;
    break;
  case 0x1d:
    if ((param_6 & 0xfc) == 0x74) goto code_r0x0001000af568;
    break;
  case 0x1e:
    if ((param_6 & 0xfc) == 0x78) {
      uVar17 = uVar15 & 0xff;
      if ((uVar13 & 0xff) == 6) {
        if (uVar17 == 6) {
          auVar39._8_8_ = param_2;
          auVar39._0_8_ = 1;
          return auVar39;
        }
      }
      else if ((uVar13 & 0xff) == 5) {
        if (uVar17 == 5) {
          auVar27._8_8_ = param_2;
          auVar27._0_8_ = 1;
          return auVar27;
        }
      }
      else if ((1 < uVar17 - 5) && (((uVar15 ^ uVar13) & 0xff) == 0)) {
        auVar40._8_8_ = param_2;
        auVar40._0_8_ = 1;
        return auVar40;
      }
    }
    break;
  case 0x1f:
    uVar17 = param_6 & 0xfc;
  case 0x39:
    if (uVar17 == 0x7c) {
code_r0x0001000af568:
      auVar28._1_7_ = 0;
      auVar28[0] = ((uVar15 ^ uVar13) & 0xff) == 0;
      auVar28._8_8_ = param_2;
      return auVar28;
    }
    break;
  case 0x20:
    if ((char)param_6 < -0x7c) goto code_r0x0001000af568;
    break;
  case 0x21:
    if ((param_6 & 0xfc) == 0x84) goto code_r0x0001000af568;
    break;
  case 0x22:
    if ((param_6 & 0xfc) == 0x88) goto code_r0x0001000af568;
    break;
  case 0x23:
    if ((param_6 & 0xfc) == 0x8c) goto code_r0x0001000af568;
    break;
  case 0x24:
    if ((param_6 & 0xfc) == 0x90) goto code_r0x0001000af568;
    break;
  case 0x25:
    if ((param_6 & 0xfc) == 0x94) goto code_r0x0001000af568;
    break;
  case 0x26:
    if ((param_2 == (undefined **)0x0 && param_1 == 0) && ((param_3 & 0xff) == 0x98)) {
      if ((((param_6 & 0xfc) == 0x98) && (param_5 == (undefined **)0x0 && param_4 == 0)) &&
         ((param_6 & 0xff) == 0x98)) {
        auVar29._8_8_ = param_2;
        auVar29._0_8_ = 1;
        return auVar29;
      }
    }
    else if ((param_1 == 1) && ((param_2 == (undefined **)0x0 && ((param_3 & 0xff) == 0x98)))) {
      if (((((param_6 & 0xfc) == 0x98) && (param_4 == 1)) && (param_5 == (undefined **)0x0)) &&
         ((param_6 & 0xff) == 0x98)) {
        return ZEXT816(1);
      }
    }
    else if ((param_1 == 2) && ((param_2 == (undefined **)0x0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == 2)) &&
         ((param_5 == (undefined **)0x0 && ((param_6 & 0xff) == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if ((param_1 == 3) && ((param_2 == (undefined **)0x0 && ((param_3 & 0xff) == 0x98)))) {
      if ((((param_6 & 0xfc) == 0x98) && (param_4 == 3)) &&
         ((param_5 == (undefined **)0x0 && ((param_6 & 0xff) == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if (((param_6 & 0xfc) == 0x98) &&
            (((param_4 == 4 && (param_5 == (undefined **)0x0)) && ((param_6 & 0xff) == 0x98)))) {
      auVar61._8_8_ = param_2;
      auVar61._0_8_ = 1;
      return auVar61;
    }
    break;
  case 0x28:
    auVar70._8_8_ = param_2;
    auVar70._0_8_ = param_1;
    return auVar70;
  case 0x29:
    goto code_r0x0001000afa90;
  case 0x2a:
    auVar68._8_8_ = param_2;
    auVar68._0_8_ = param_1;
    return auVar68;
  case 0x2c:
    auVar71._8_8_ = param_2;
    auVar71._0_8_ = param_1;
    return auVar71;
  case 0x2d:
    auVar72._8_8_ = param_2;
    auVar72._0_8_ = param_1;
    return auVar72;
  case 0x2e:
    auVar69._8_8_ = param_2;
    auVar69._0_8_ = param_1;
    return auVar69;
  case 0x2f:
    auVar74._8_8_ = param_2;
    auVar74._0_8_ = param_1;
    return auVar74;
  case 0x30:
code_r0x0001000afa78:
    if (((bool)in_ZR) &&
       (((ulong)param_5 & 0xff) != 0 || CARRY8(((ulong)param_5 & 0xff) - 1,(ulong)(5 < param_4)))) {
      param_1 = 1;
code_r0x0001000afa90:
      auVar67._8_8_ = param_2;
      auVar67._0_8_ = param_1;
      return auVar67;
    }
    break;
  case 0x31:
    auVar73._8_8_ = param_2;
    auVar73._0_8_ = param_1;
    return auVar73;
  case 0x36:
    (**(code **)(*(long *)(param_4 - 8) + 0x38))();
    lVar19 = unaff_x22 + _DAT_1137ff4d8;
    FUN_1001021cc();
    unaff_x19[3] = (long)unaff_x21;
    unaff_x19[4] = (long)&PTR_DAT_1103c75a0;
    *unaff_x19 = unaff_x22;
    auVar116._8_8_ = lVar19;
    auVar116._0_8_ = unaff_x20;
    return auVar116;
  case 0x37:
    func_0x000107c606a8();
    auVar75._0_8_ =
         param_1 & (-1L << ((ulong)*(byte *)(in_stack_00000050 + 0x20) & 0x3f) ^ 0xffffffffffffffffU
                   );
    auVar75._8_4_ =
         (uint)(*(ulong *)(in_stack_00000050 + (auVar75._0_8_ >> 3 & 0xffffffffffffff8) + 0x40) >>
               (auVar75._0_8_ & 0x3f)) & 1;
    auVar75._12_4_ = 0;
    return auVar75;
  case 0x38:
    *(ulong *)(unaff_x20 + 0x1b8) = uVar18;
    if ((int)unaff_x19 != 0) {
      param_2 = *(undefined ***)(unaff_x20 + 0x1b0);
      if (*(long *)(unaff_x20 + 0x1c0) <= (long)(uVar18 + 1)) {
        lVar19 = (uVar18 + 1) * 2;
        param_2 = (undefined **)0x0;
        func_0x000107c60748(0,*(undefined ***)(unaff_x20 + 0x1b0),lVar19,0);
        *(undefined ***)(unaff_x20 + 0x1b0) = param_2;
        *(long *)(unaff_x20 + 0x1c0) = lVar19;
        uVar18 = *(ulong *)(unaff_x20 + 0x1b8);
      }
      *(undefined1 *)((long)param_2 + uVar18) = 0x22;
      *(long *)(unaff_x20 + 0x1b8) = *(long *)(unaff_x20 + 0x1b8) + 1;
    }
    if (unaff_w25 != 0) {
      func_0x000107c60740(0);
      param_2 = unaff_x21;
    }
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(unaff_x29 + -0x60)) {
      func_0x000107c60e78();
      if (lRam00000001136ba2a0 != -1) {
        param_2 = &PTR___NSConcreteGlobalBlock_110875ec0;
        FUN_10002a2fc(0x1136ba2a0,&PTR___NSConcreteGlobalBlock_110875ec0);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2;
      return auVar4 << 0x40;
    }
    auVar115._8_8_ = param_2;
    auVar115._0_8_ = unaff_x28;
    return auVar115;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}



/* Entry: 1000afb9c; end: 1000afbdf;  */

void FUN_1000afb9c(void)

{
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 1000afbe0; end: 1000afc0b;  */

void FUN_1000afbe0(void)

{
  return;
}



/* Entry: 1000afc0c; end: 1000afc53;  */

undefined8 FUN_1000afc0c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1130975a8;
  FUN_1000285a8(0x1130975a8,&UNK_10dd3d5b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1000afc54; end: 1000afc9b;  */

void FUN_1000afc54(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000afc9c,0,0);
  return;
}



/* Entry: 1000afc9c; end: 1000afd5b;  */

void FUN_1000afc9c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c4b940(uVar5);
  func_0x000107c61428(lVar4 + 0x18,unaff_x22 + 0x38,0,0);
  FUN_1000afd5c(lVar4 + 0x18,unaff_x22 + 0x10);
  func_0x000107c5d278(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  FUN_1000a8868(unaff_x22 + 0x10,uVar5);
  piVar3 = *(int **)(lVar4 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000afda8;
                    /* WARNING: Could not recover jumptable at 0x0001000afd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined1 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x60),uVar5,lVar4);
  return;
}



/* Entry: 1000afd5c; end: 1000afd9f;  */

long FUN_1000afd5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1000afda0; end: 1000afda7;  */

void FUN_1000afda0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001000afda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000afda8; end: 1000afe1f;  */

void FUN_1000afda8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1000afdf0,0,0);
  return;
}



/* Entry: 1000afe20; end: 1000afec3;  */

void FUN_1000afe20(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  int *piVar6;
  long lVar7;
  
  lVar5 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  piVar6 = *(int **)(lVar5 + 0x40);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x60));
  func_0x000107c61574(uVar2);
  FUN_1000afec4(uVar4,0x112d453c8,&UNK_10d90ac60);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(lVar5 + 0x68) = plVar3;
  *plVar3 = lVar7;
  plVar3[1] = (long)FUN_1000dab08;
                    /* WARNING: Could not recover jumptable at 0x0001000afec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(lVar5 + 0x28));
  return;
}



/* Entry: 1000afec4; end: 1000aff03;  */

undefined8 FUN_1000afec4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1000aff04; end: 1000aff97;  */

void FUN_1000aff04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xa0;
  uVar7 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1000dab04;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar6;
  plVar8[0xc] = lVar2;
  plVar8[0xd] = lVar5;
  *(undefined1 *)(plVar8 + 0x13) = uVar7;
  plVar8[10] = lVar1;
  plVar8[0xb] = lVar4;
  plVar8[9] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000affc0,0,0);
  return;
}



/* Entry: 1000aff98; end: 1000affbf;  */

void FUN_1000aff98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined1 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000affc0,0,0);
  return;
}



/* Entry: 1000affc0; end: 1000b0163;  */

void FUN_1000affc0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  piVar2 = *(int **)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x98);
  puVar4 = (undefined8 *)0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar4[3] = 6;
  puVar4[2] = 3;
  puVar4[4] = 0x6b73615470616e53;
  puVar4[5] = 0xe800000000000000;
  FUN_1000b0164(uVar9,uVar5,uVar3);
  FUN_1000b030c();
  puVar4[6] = uVar9;
  puVar4[7] = uVar5;
  puVar4[8] = uVar6;
  puVar4[9] = uVar7;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar4;
  func_0x000107c61434(uVar7);
  uVar7 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = 0x112d38278;
  FUN_1000b06b4(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  uVar6 = 0x3a;
  uVar9 = 0xe100000000000000;
  func_0x000107c5fa80(0x3a,0xe100000000000000,uVar7,uVar5);
  func_0x000107c61574();
  FUN_1000298f0();
  *(undefined8 **)(unaff_x22 + 0x80) = puVar4;
  func_0x000107c61428();
  uVar7 = *puVar4;
  func_0x000107c61174(uVar7);
  func_0x000100029b28(uVar6,uVar9);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
  func_0x000107c61170(uVar7);
  func_0x000107c6142c(uVar9);
  iVar1 = *piVar2;
  plVar8 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1000daa5c;
                    /* WARNING: Could not recover jumptable at 0x0001000b0160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar8,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 1000b0164; end: 1000b030b;  */

undefined1  [16] FUN_1000b0164(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  uVar1 = param_3 >> 2 & 0x3f;
  uVar2 = 1;
  switch(uVar1) {
  default:
code_r0x0001000b0188:
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = 0x21;
    return auVar4;
  case 2:
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = 2;
    return auVar12;
  case 3:
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = 3;
    return auVar18;
  case 4:
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = 6;
    return auVar22;
  case 5:
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = 8;
    return auVar28;
  case 6:
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = 9;
    return auVar29;
  case 7:
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = 10;
    return auVar13;
  case 8:
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = 0xe;
    return auVar30;
  case 9:
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = 0xd;
    return auVar17;
  case 0xb:
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = 0x10;
    return auVar11;
  case 0xc:
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = 0x12;
    return auVar19;
  case 0xd:
    auVar32._8_8_ = param_2;
    auVar32._0_8_ = 0x13;
    return auVar32;
  case 0xe:
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = 0x17;
    return auVar15;
  case 0xf:
    auVar34._8_8_ = param_2;
    auVar34._0_8_ = 0x18;
    return auVar34;
  case 0x10:
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = 0x1a;
    return auVar21;
  case 0x11:
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = 0x19;
    return auVar25;
  case 0x12:
    uVar2 = 0x1b;
  case 0x38:
    auVar33._8_8_ = param_2;
    auVar33._0_8_ = uVar2;
    return auVar33;
  case 0x13:
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = 0x1c;
    return auVar23;
  case 0x14:
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = 0x1d;
    return auVar24;
  case 0x15:
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = 0x20;
    return auVar31;
  case 0x16:
code_r0x0001000b02bc:
    auVar37._8_8_ = param_2;
    auVar37._0_8_ = 0x22;
    return auVar37;
  case 0x17:
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = 0x24;
    return auVar16;
  case 0x18:
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = 0x29;
    return auVar14;
  case 0x19:
    auVar38._8_8_ = param_2;
    auVar38._0_8_ = 0x26;
    return auVar38;
  case 0x1a:
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = 0x25;
    return auVar8;
  case 0x1b:
    auVar35._8_8_ = param_2;
    auVar35._0_8_ = 5;
    return auVar35;
  case 0x1c:
    auVar36._8_8_ = param_2;
    auVar36._0_8_ = 0x2b;
    return auVar36;
  case 0x1d:
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = 0x2e;
    return auVar26;
  case 0x1e:
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = 0x2f;
    return auVar20;
  case 0x1f:
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = 0xc;
    return auVar27;
  case 0x20:
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = 0x11;
    return auVar10;
  case 0x21:
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = 0x2d;
    return auVar9;
  case 0x22:
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = 0x2c;
    return auVar6;
  case 0x23:
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = 0x27;
    return auVar7;
  case 0x25:
  case 0x31:
  case 0x35:
  case 0x37:
    uVar2 = 0x30;
  case 0:
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 0x26:
    if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x98)) goto code_r0x0001000b0188;
    if ((param_1 == 1) && ((param_2 == 0 && ((param_3 & 0xff) == 0x98)))) goto code_r0x0001000b02bc;
    if ((param_1 != 2) || (param_2 != 0)) goto code_r0x0001000b02ec;
  case 0x2e:
    if ((param_3 & 0xff) != 0x98) {
code_r0x0001000b02ec:
      uVar2 = 0x15;
      if (((param_3 & 0xff) != 0x98 || param_2 != 0) || param_1 != 3) {
        uVar2 = 0x28;
      }
      auVar40._8_8_ = param_2;
      auVar40._0_8_ = uVar2;
      return auVar40;
    }
  case 10:
    auVar39._8_8_ = param_2;
    auVar39._0_8_ = 0xf;
    return auVar39;
  case 0x2a:
    auVar44._8_8_ = 0xe900000000000053;
    auVar44._0_8_ = 0x4552544e45494c43;
    return auVar44;
  case 0x2c:
    auVar47._8_8_ = param_2;
    auVar47._0_8_ = 0x53524f5400000001;
    return auVar47;
  case 0x30:
  case 0x34:
  case 0x36:
    auVar42._8_8_ = param_2;
    auVar42._0_8_ = 1;
    return auVar42;
  case 0x32:
    auVar45._8_8_ = param_2;
    auVar45._0_8_ = 0x4c430001;
    return auVar45;
  case 0x3a:
    auVar46._8_8_ = 0xe700000000000000;
    auVar46._0_8_ = 0x6e776f6e6b6e55;
    return auVar46;
  case 0x3c:
    lVar3 = (ulong)(uVar1 | 0x500000) + 0xef4;
    uVar2 = 0xe300000000000000;
                    /* WARNING: Could not recover jumptable at 0x0001000b033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd3dd90)[param_1] * 4 + 0x1000b0340))(lVar3,0xe300000000000000);
    auVar41._8_8_ = uVar2;
    auVar41._0_8_ = lVar3;
    return auVar41;
  case 0x3e:
    auVar43._8_8_ = param_2;
    auVar43._0_8_ = 0x544f5053;
    return auVar43;
  }
}



/* Entry: 1000b030c; end: 1000b06b3;  */

undefined1  [16] FUN_1000b030c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uStack_18;
  
  uVar2 = 0x505041;
  uVar3 = 0xe300000000000000;
  switch(param_1) {
  case 0:
    auVar27._8_8_ = 0xe700000000000000;
    auVar27._0_8_ = 0x6e776f6e6b6e55;
    return auVar27;
  case 1:
    auVar28._8_8_ = 0xe500000000000000;
    auVar28._0_8_ = 0x5649544341;
    return auVar28;
  case 2:
    auVar23._8_8_ = 0xe400000000000000;
    auVar23._0_8_ = 0x4c434441;
    return auVar23;
  case 3:
    auVar25._8_8_ = 0xe600000000000000;
    auVar25._0_8_ = 0x534e49505041;
    return auVar25;
  case 4:
    goto code_r0x0001000b05a0;
  case 5:
    auVar32._8_8_ = 0xe500000000000000;
    auVar32._0_8_ = 0x5452415453;
    return auVar32;
  case 6:
    auVar34._8_8_ = 0xe200000000000000;
    auVar34._0_8_ = 0x4d42;
    return auVar34;
  case 7:
    auVar26._8_8_ = 0xe500000000000000;
    auVar26._0_8_ = 0x4f454d4143;
    return auVar26;
  case 8:
    uVar3 = 0xe600000000000000;
    uVar2 = 0x4152454d4143;
code_r0x0001000b05a0:
    auVar37._8_8_ = uVar3;
    auVar37._0_8_ = uVar2;
    return auVar37;
  case 9:
    auVar20._8_8_ = 0xe900000000000053;
    auVar20._0_8_ = 0x4552544e45494c43;
    return auVar20;
  case 10:
    auVar36._8_8_ = 0xe300000000000000;
    auVar36._0_8_ = 0x464f43;
    return auVar36;
  case 0xb:
    auVar17._8_8_ = 0xe300000000000000;
    auVar17._0_8_ = 0x4d4f43;
    return auVar17;
  case 0xc:
    auVar19._8_8_ = 0xe800000000000000;
    auVar19._0_8_ = 0x5245534f504d4f43;
    return auVar19;
  case 0xd:
    auVar33._8_8_ = 0xe200000000000000;
    auVar33._0_8_ = 0x5043;
    return auVar33;
  case 0xe:
    auVar14._8_8_ = 0xe700000000000000;
    auVar14._0_8_ = 0x545845544e4f43;
    return auVar14;
  case 0xf:
    auVar24._8_8_ = 0xe500000000000000;
    auVar24._0_8_ = 0x4f564e4f43;
    return auVar24;
  case 0x10:
    auVar12._8_8_ = 0xe600000000000000;
    auVar12._0_8_ = 0x455441455243;
    return auVar12;
  case 0x11:
    auVar30._8_8_ = 0xe800000000000000;
    auVar30._0_8_ = 0x53524f5441455243;
    return auVar30;
  case 0x12:
    auVar35._8_8_ = 0xe400000000000000;
    auVar35._0_8_ = 0x50544144;
    return auVar35;
  case 0x13:
    auVar43._8_8_ = 0xe400000000000000;
    auVar43._0_8_ = 0x444e5246;
    return auVar43;
  case 0x14:
  case 0x1b:
    auVar4._8_8_ = 0xe300000000000000;
    auVar4._0_8_ = 0x4d454d;
    return auVar4;
  case 0x15:
    auVar41._8_8_ = 0xe600000000000000;
    auVar41._0_8_ = 0x43495254454d;
    return auVar41;
  case 0x16:
    auVar45._8_8_ = 0xe600000000000000;
    auVar45._0_8_ = 0x414c41504d49;
    return auVar45;
  case 0x17:
    auVar22._8_8_ = 0xe400000000000000;
    auVar22._0_8_ = 0x534e454c;
    return auVar22;
  case 0x18:
    auVar21._8_8_ = 0xe300000000000000;
    auVar21._0_8_ = 0x50414d;
    return auVar21;
  case 0x19:
    auVar49._8_8_ = 0xe300000000000000;
    auVar49._0_8_ = 0x50444d;
    return auVar49;
  case 0x1a:
    auVar10._8_8_ = 0xe200000000000000;
    auVar10._0_8_ = 0x454d;
    return auVar10;
  case 0x1c:
    auVar46._8_8_ = 0xe300000000000000;
    auVar46._0_8_ = 0x48434d;
    return auVar46;
  case 0x1d:
    auVar47._8_8_ = 0xe500000000000000;
    auVar47._0_8_ = 0x434953554d;
    return auVar47;
  case 0x1e:
    auVar38._8_8_ = 0xe500000000000000;
    auVar38._0_8_ = 0x415245504f;
    return auVar38;
  case 0x1f:
    auVar29._8_8_ = 0xe400000000000000;
    auVar29._0_8_ = 0x43524550;
    return auVar29;
  case 0x20:
    auVar39._8_8_ = 0xe700000000000000;
    auVar39._0_8_ = 0x57454956455250;
    return auVar39;
  case 0x21:
    auVar15._8_8_ = 0xe700000000000000;
    auVar15._0_8_ = 0x454c49464f5250;
    return auVar15;
  case 0x22:
    auVar11._8_8_ = 0xe400000000000000;
    auVar11._0_8_ = 0x48535550;
    return auVar11;
  case 0x23:
    auVar8._8_8_ = 0xe600000000000000;
    auVar8._0_8_ = 0x484352414553;
    return auVar8;
  case 0x24:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x434d4553;
    return auVar9;
  case 0x25:
    auVar6._8_8_ = 0xe300000000000000;
    auVar6._0_8_ = 0x554853;
    return auVar6;
  case 0x26:
    auVar48._8_8_ = 0xe700000000000000;
    auVar48._0_8_ = 0x474e4952414853;
    return auVar48;
  case 0x27:
    auVar42._8_8_ = 0xe300000000000000;
    auVar42._0_8_ = 0x534441;
    return auVar42;
  case 0x28:
    auVar18._8_8_ = 0xe300000000000000;
    auVar18._0_8_ = 0x474953;
    return auVar18;
  case 0x29:
    auVar31._8_8_ = 0xe400000000000000;
    auVar31._0_8_ = 0x53554c50;
    return auVar31;
  case 0x2a:
    auVar44._8_8_ = 0xe700000000000000;
    auVar44._0_8_ = 0x54494b50414e53;
    return auVar44;
  case 0x2b:
    auVar5._8_8_ = 0xe700000000000000;
    auVar5._0_8_ = 0x474e4543455053;
    return auVar5;
  case 0x2c:
    auVar13._8_8_ = 0xe400000000000000;
    auVar13._0_8_ = 0x544f5053;
    return auVar13;
  case 0x2d:
    auVar40._8_8_ = 0xe300000000000000;
    auVar40._0_8_ = 0x525453;
    return auVar40;
  case 0x2e:
    auVar50._8_8_ = 0xe300000000000000;
    auVar50._0_8_ = 0x4c4441;
    return auVar50;
  case 0x2f:
    auVar7._8_8_ = 0xe600000000000000;
    auVar7._0_8_ = 0x444548435357;
    return auVar7;
  case 0x30:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x54494b4d4143;
    return auVar16;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_1107add30,&uStack_18,&UNK_1107add30,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b06b4);
    (*pcVar1)();
  }
}



/* Entry: 1000b06b4; end: 1000b06f7;  */

void FUN_1000b06b4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1000b06f8; end: 1000b0787;  */

void FUN_1000b06f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  plVar6 = (long *)0x110;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x10);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000daa20;
  plVar6[0x13] = lVar1;
  plVar6[0x14] = lVar3;
  *(undefined1 *)((long)plVar6 + 0x101) = uVar4;
  plVar6[0x11] = lVar7;
  plVar6[0x12] = lVar2;
  *(undefined1 *)(plVar6 + 0x20) = uVar5;
  lVar7 = 0;
  func_0x000107c5f7fc();
  plVar6[0x15] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x16] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x17] = uVar8;
  lVar7 = 0;
  func_0x000107c5f824();
  plVar6[0x18] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x19] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1a] = uVar8;
  lVar7 = 0x1130970c0;
  FUN_1000285a8(0x1130970c0,&UNK_10dd3d170);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1b] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1c] = uVar8;
  lVar7 = 0;
  func_0x000107c5f804();
  plVar6[0x1d] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x1e] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x1f] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000b087c,0,0);
  return;
}



/* Entry: 1000b0788; end: 1000b087b;  */

void FUN_1000b0788(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined1 *)(unaff_x22 + 0x101) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined1 *)(unaff_x22 + 0x100) = param_2;
  lVar1 = 0;
  func_0x000107c5f7fc();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar1 = 0;
  func_0x000107c5f824();
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 200) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0x1130970c0;
  FUN_1000285a8(0x1130970c0,&UNK_10dd3d170);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000b087c,0,0);
  return;
}



/* Entry: 1000b087c; end: 1000b0be7;  */

void FUN_1000b087c(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  bVar8 = *(byte *)(unaff_x22 + 0x100);
  func_0x000107c5fd5c();
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x1000da97c;
  lVar10 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar10,0);
  if (bVar8 < 2) {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8;
    if (bVar8 != 0) {
      puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0;
    }
  }
  else {
    puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0;
    if ((bVar8 != 2) &&
       (puVar16 = (undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8
       , bVar8 != 3)) {
      uVar15 = 1;
      goto LAB_1000b092c;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xe0),*puVar16,*(undefined8 *)(unaff_x22 + 0xe8));
  uVar15 = 0;
LAB_1000b092c:
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(lVar3 + 0x38))(uVar4,uVar15,1,uVar19);
  FUN_1000b0be8(uVar4,uVar11);
  pcVar18 = *(code **)(lVar3 + 0x30);
  (*pcVar18)(uVar11,1,uVar19);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x68))
              (*(undefined8 *)(unaff_x22 + 0xf8),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,uVar19);
    (*pcVar18)(uVar15,1,uVar19);
    if ((int)uVar15 != 1) {
      FUN_1000afec4(*(undefined8 *)(unaff_x22 + 0xd8),0x1130970c0,&UNK_10dd3d170);
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0xf8),uVar15,uVar19);
  }
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar7 = *(long *)(unaff_x22 + 0xb0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x101);
  FUN_1000295c4(0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = uVar19;
  func_0x000107c5fff0();
  (**(code **)(lVar3 + 8))(uVar19,uVar20);
  puVar13 = &UNK_1107acfe8;
  func_0x000107c613fc(&UNK_1107acfe8,0x48,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar15;
  *(undefined8 *)(puVar13 + 0x18) = uVar11;
  puVar13[0x20] = uVar9;
  *(undefined8 *)(puVar13 + 0x30) = uVar22;
  *(undefined8 *)(puVar13 + 0x28) = uVar21;
  puVar13[0x38] = param_1 & 1;
  *(long *)(puVar13 + 0x40) = lVar10;
  *(code **)(unaff_x22 + 0x70) = FUN_1000b0ca8;
  *(undefined **)(unaff_x22 + 0x78) = puVar13;
  puVar14 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x1000b0c7c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1107ad000;
  func_0x000107c60bc4();
  FUN_1000ab9d4(uVar15,uVar11,uVar9);
  func_0x000107c6157c(uVar17);
  func_0x000107c5f808(uVar5);
  *(undefined8 *)(unaff_x22 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0x112d4af88;
  FUN_1000b0c3c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar19 = 0x112d4af90;
  FUN_1000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = 0x112d4af98;
  FUN_1000b06b4(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
  func_0x000107c60264(uVar4,(undefined8 *)(unaff_x22 + 0x80),uVar19,uVar11,uVar2,uVar15);
  func_0x000107c5ffe8(0,uVar5,uVar4,puVar14);
  func_0x000107c60bd0(puVar14);
  func_0x000107c61170(uVar12);
  (**(code **)(lVar7 + 8))(uVar4,uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1000b0be8; end: 1000b0c37;  */

undefined8 FUN_1000b0be8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130970c0;
  FUN_1000285a8(0x1130970c0,&UNK_10dd3d170);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000b0c38; end: 1000b0c3b;  */

void FUN_1000b0c38(long param_1,long param_2)

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



/* Entry: 1000b0c3c; end: 1000b0ca7;  */

void FUN_1000b0c3c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1000b0ca8; end: 1000b0cb3;  */

void FUN_1000b0ca8(void)

{
  long unaff_x20;
  
  FUN_1000b0cb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),0x1000b0eec);
  return;
}



/* Entry: 1000b0cb4; end: 1000b0d7b;  */

void FUN_1000b0cb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  
  puVar1 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  FUN_10007c170(param_1,param_2,param_3);
  FUN_1000b0da8();
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c61450(in_x6);
  return;
}



/* Entry: 1000b0d7c; end: 1000b0da7;  */

void FUN_1000b0d7c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000b0cb4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),param_1);
  return;
}



/* Entry: 1000b0da8; end: 1000b0e73;  */

/* WARNING: Possible PIC construction at 0x0001000b0e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b0e14) */
/* WARNING: Removing unreachable block (ram,0x0001000b0e24) */
/* WARNING: Removing unreachable block (ram,0x0001000b0e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b0da8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c3e814(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  (*param_3)();
  return;
}



/* Entry: 1000b0e74; end: 1000b0f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b0e74(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  func_0x000107c61170(lStack_28);
  FUN_100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_1130807f8);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000b0f14; end: 1000b17f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b0f14(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong **ppuVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 in_x4;
  undefined8 in_x6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  undefined8 uVar20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 auStack_180 [8];
  ulong *puStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_15c;
  ulong *puStack_158;
  ulong *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  ulong *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uStack_d0 = in_stack_00000028;
  lVar3 = 0;
  uStack_148 = in_x6;
  puStack_c8 = param_1;
  uStack_c0 = in_x4;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar3 = 0;
  puStack_e8 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_f8 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar19 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_100 = lVar19;
  func_0x000107c5f804();
  lStack_110 = *(long *)(lVar3 + -8);
  puStack_108 = (ulong *)lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lStack_118 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100083b20(&puStack_a8);
  puStack_130 = puStack_a8;
  FUN_100083b20(&puStack_a8);
  puVar4 = puStack_a8;
  func_0x000107c61170();
  FUN_100083b20(&puStack_a8);
  puStack_138 = puStack_a8;
  FUN_100083b20(&puStack_a8);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_a8) + 0x58))();
  func_0x000107c61170(puStack_a8);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar5 != (ulong *)0x0) {
    puVar6 = (undefined8 *)0x0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar7 = puVar6;
    FUN_1000d1f44();
    uVar8 = *puVar7;
    uVar15 = puVar7[1];
    func_0x000107c61434(uVar15);
    func_0x000107c5fadc(uVar8,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000107c56be8(puVar5);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar8);
  }
  uStack_120 = in_stack_00000020;
  uStack_128 = in_stack_00000018;
  uStack_140 = in_stack_00000010;
  puVar9 = PTR_PTR_1126d0530;
  func_0x000107c61168(PTR_PTR_1126d0530);
  puVar10 = &UNK_1103b7b48;
  func_0x000107c613fc(&UNK_1103b7b48,0x18,7);
  *(ulong **)(puVar10 + 0x10) = puVar4;
  pcStack_88 = (code *)&UNK_100c761cc;
  puStack_a8 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100c75f50;
  puStack_90 = &UNK_1103b7b60;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  func_0x000107c3d848(puVar9);
  func_0x000107c60bd0(ppuVar11);
  puVar10 = PTR_PTR_1126d0378;
  func_0x000107c61168();
  func_0x000107c442a8();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puStack_b8 = PTR_DAT_11269e880;
    puVar9 = puVar10;
    func_0x000107c61498();
    func_0x000107c52060();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 != (ulong *)0x0) {
      puVar12 = puVar5;
      FUN_1000d1f44();
      puVar13 = (undefined *)*puVar12;
      uVar1 = puVar12[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(puVar13,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c56be8(puVar5);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar9);
      puVar9 = puVar10;
      puVar10 = puVar13;
    }
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
  }
  uStack_168 = in_stack_00000008;
  puVar7 = (undefined8 *)PTR_PTR_1126b7040;
  puStack_158 = puVar4;
  func_0x000107c61168();
  func_0x000107c5aa24();
  func_0x000107c61180();
  puVar6 = puVar7;
  FUN_1000dc2ac();
  uVar8 = *puVar6;
  uVar15 = puVar6[1];
  func_0x000107c61434(uVar15);
  func_0x000107c5fadc(uVar8,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c401a4(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c517e4();
  FUN_100083b20(&puStack_a8);
  puVar12 = puStack_a8;
  FUN_100083b20(&puStack_a8);
  func_0x000107c61170(puStack_a8);
  uVar8 = uStack_148;
  FUN_100083b20(&puStack_a8);
  func_0x000107c615e8(puStack_a8);
  FUN_100083b20(&puStack_a8);
  puVar4 = puStack_a8;
  uVar20 = *(undefined8 *)((long)puStack_a8 + _DAT_113092298);
  func_0x000107c615f0(uVar20);
  func_0x000107c61170(puVar4);
  uVar14 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef7f720);
  uVar15 = uVar20;
  func_0x000107c3ebd4();
  uStack_15c = (undefined4)uVar15;
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(uVar14);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_88 = FUN_1001c9ed0;
  puStack_80 = (undefined *)in_stack_00000000;
  puStack_a8 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_1001c9e98;
  puStack_90 = &UNK_1103b7b88;
  ppuVar11 = &puStack_a8;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_80;
  func_0x000107c6157c(in_stack_00000000);
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  puVar16 = puVar12;
  func_0x000107c61174();
  puVar4 = puVar16;
  func_0x0001000ad7c4();
  puVar13 = PTR_PTR_1126a6da0;
  puStack_178 = puVar4;
  func_0x000107c610f8(PTR_PTR_1126a6da0);
  puVar4 = puStack_138;
  puVar5 = puStack_138;
  func_0x000107c61174();
  puStack_150 = puVar5;
  func_0x000107c453e4(puVar13);
  puVar10 = &UNK_1103b7bc0;
  func_0x000107c613fc(&UNK_1103b7bc0,0x38,7);
  puVar5 = puStack_130;
  uVar15 = uStack_140;
  *(ulong **)(puVar10 + 0x10) = puStack_130;
  *(ulong **)(puVar10 + 0x18) = puVar12;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  *(undefined8 *)(puVar10 + 0x28) = uVar8;
  *(undefined8 *)(puVar10 + 0x30) = uStack_140;
  FUN_1000a06bc(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  puStack_170 = puVar16;
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_130 = (ulong *)puVar9;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar15);
  puVar16 = puVar12;
  FUN_1001c7194(puVar12,puStack_178,puVar4,puVar13,FUN_1001c8a40,puVar10);
  FUN_1000295c4(0);
  puVar4 = puStack_108;
  lVar19 = lStack_110;
  lVar3 = lStack_118;
  (**(code **)(lStack_110 + 0x68))
            (lStack_118,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             puStack_108);
  lVar17 = lVar3;
  func_0x000107c5fff0(lVar3);
  (**(code **)(lVar19 + 8))(lVar3,puVar4);
  puVar10 = &UNK_1103b7be8;
  func_0x000107c613fc(&UNK_1103b7be8,0x49,7);
  uVar14 = uStack_120;
  uVar15 = uStack_128;
  uVar8 = uStack_168;
  *(ulong **)(puVar10 + 0x10) = puVar16;
  *(ulong **)(puVar10 + 0x18) = puVar5;
  *(ulong **)(puVar10 + 0x20) = puVar12;
  *(undefined8 *)(puVar10 + 0x28) = uStack_168;
  *(undefined8 *)(puVar10 + 0x30) = uStack_128;
  *(ulong **)(puVar10 + 0x38) = puStack_158;
  *(undefined8 *)(puVar10 + 0x40) = uStack_120;
  puVar10[0x48] = (char)uStack_15c;
  pcStack_88 = FUN_1001c8848;
  puStack_a8 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x1000b0c7c;
  puStack_90 = &UNK_1103b7c00;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_158;
  func_0x000107c61174(puStack_158);
  puVar18 = puStack_170;
  func_0x000107c61174(puStack_170);
  func_0x000107c61174();
  puStack_108 = puVar5;
  func_0x000107c61174();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  lVar3 = lStack_100;
  func_0x000107c5f808(lStack_100);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1001c7eec();
  uVar8 = 0x112d4af90;
  FUN_1000285a8(0x112d4af90,&UNK_10d914100);
  uVar15 = uVar8;
  func_0x0001001c7f30();
  lVar19 = lStack_d8;
  puVar2 = puStack_e8;
  func_0x000107c60264(puStack_e8,&puStack_b0,uVar8,uVar15,lStack_d8,uVar14);
  func_0x000107c5ffe8(0,lVar3,puVar2,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(lVar17);
  (**(code **)(lStack_e0 + 8))(puVar2,lVar19);
  (**(code **)(lStack_f8 + 8))(lVar3,lStack_f0);
  func_0x000107c61574(puStack_80);
  FUN_100083b20(&puStack_a8);
  puVar4 = puStack_a8;
  FUN_1001c7f80(puStack_a8);
  func_0x000107c61170(puVar4);
  FUN_100083b20(&puStack_a8);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puStack_150);
  func_0x000107c61170(puStack_108);
  func_0x000107c61170(puStack_130);
  func_0x000107c61170(puStack_a8);
  *puStack_c8 = puVar16;
  return;
}



/* Entry: 1000b17f4; end: 1000b1853;  */

void FUN_1000b17f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b1854; end: 1000b185b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b1854(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_38);
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_113091b70);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_38);
  puVar2 = PTR_PTR_1126a6d90;
  func_0x000107c610f8();
  func_0x000107c47fd8();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000b185c; end: 1000b18fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b185c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_113091b70);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  puVar1 = PTR_PTR_1126a6d90;
  func_0x000107c610f8();
  func_0x000107c47fd8();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000b18fc; end: 1000b1b4f; -[SCCrashAppStateTracker initWithPreferences:applicationLifecycleEvents:storageDirectory:] */

undefined8 *
FUN_1000b18fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_78 = PTR_PTR_1126e7360;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar5 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar5);
    puVar3 = puVar1;
    func_0x000107c5069c();
    puVar1[2] = puVar3;
    func_0x000107c5a1d8(puVar1);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    uVar2 = param_4;
    func_0x000107c419f0(param_4);
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_100c7640c;
    puStack_98 = &UNK_110846510;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c41b80(param_4);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000b1b50; end: 1000b1c43; -[SCCrashAppStateTracker restoreLastSessionAppState] */

undefined * FUN_1000b1b50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x000107c3c8fc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4341c();
    func_0x000107c61170(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c1f4(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1,4,0);
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c4adac();
      if (puVar3 != (undefined *)0x0) goto LAB_1000b1c14;
      func_0x000107c61170(puVar2);
    }
  }
  puVar3 = *(undefined **)(param_1 + 8);
  func_0x000107c5c734(puVar3);
  func_0x000107c61180();
  puVar2 = puVar3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
LAB_1000b1c14:
  puVar3 = puVar2;
  func_0x000107c49820(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  return puVar3;
}



/* Entry: 1000b1c44; end: 1000b1ce7; -[SCCrashAppStateTracker _stateFilePath] */

void FUN_1000b1c44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c4adac();
  if (lVar1 == 0) {
    FUN_100088750();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c168();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000107c61174(lVar2);
  }
  lVar1 = lVar2;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c5c168(lVar2,param_2,&PTR____CFConstantStringClassReference_110dce058);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1000b1ce8; end: 1000b1e9b;  */

ulong FUN_1000b1ce8(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  if (param_3 == '\0') {
    if (param_6 == '\0') {
      return (ulong)((int)param_1 == (int)param_4);
    }
  }
  else {
    if (param_3 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000b1d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd41824)[param_1] * 4 + 0x1000b1d44))();
      return param_1;
    }
    if (param_6 == '\x01') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  return 0;
}



/* Entry: 1000b1e9c; end: 1000b1f07;  */

void FUN_1000b1e9c(void)

{
  code *pcVar1;
  long lVar2;
  long lStack_28;
  
  FUN_100083b20(&lStack_28);
  lVar2 = lStack_28;
  func_0x000107c3fa08();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  if (lVar2 != 0) {
    func_0x000107c5c734(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b1f08);
  (*pcVar1)();
}



/* Entry: 1000b1f08; end: 1000b1ffb;  */

void FUN_1000b1f08(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126d3ec0;
  func_0x000107c610f8();
  func_0x000107c45e34();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b1f60);
  (*pcVar1)();
}



/* Entry: 1000b1ffc; end: 1000b2003;  */

void FUN_1000b1ffc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_10009d6a8(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1000b204c();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1000b2004; end: 1000b204b;  */

void FUN_1000b2004(undefined8 *param_1,undefined8 param_2)

{
  FUN_10009d6a8(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1000b204c();
  *param_1 = param_2;
  return;
}



/* Entry: 1000b204c; end: 1000b20cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b204c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113052a68) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b20cc; end: 1000b20d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b20cc(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  cVar1 = *(char *)(lStack_48 + _DAT_11307ce50);
  func_0x000107c61170();
  if (cVar1 == '\x03') {
    FUN_100083b20(&lStack_48);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef80c20);
    func_0x000107c3ebd4();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar2);
  }
  FUN_100083b20(param_1);
  return;
}



/* Entry: 1000b20d8; end: 1000b21af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b20d8(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  cVar1 = *(char *)(lStack_48 + _DAT_11307ce50);
  func_0x000107c61170();
  if (cVar1 == '\x03') {
    FUN_100083b20(&lStack_48);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef80c20);
    func_0x000107c3ebd4();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(uVar2);
  }
  FUN_100083b20(param_1);
  return;
}



/* Entry: 1000b21b0; end: 1000b2223; -[SCApplicationCircumstanceEngineServices initWithCircumstanceEngineLazy:] */

undefined1 * FUN_1000b21b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270c158;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b2224; end: 1000b222b; -[SCApplicationCircumstanceEngineServices circumstanceEngineLazy] */

undefined8 FUN_1000b2224(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000b222c; end: 1000b23ef; -[SCLazy target] */

void FUN_1000b222c(long param_1)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c611ec(param_1 + 0x18);
  cVar2 = *(char *)(param_1 + 0x1c);
  if (cVar2 == '\0') {
    lVar4 = param_1 + 0x18;
    func_0x000107c611f0();
    lVar8 = 0;
    goto LAB_1000b239c;
  }
  if (cVar2 == '\x02') {
LAB_1000b22a4:
    lVar8 = *(long *)(param_1 + 8);
    func_0x000107c61174(lVar8);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000107c61174(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    func_0x000107c61170(uVar7);
  }
  else {
    if (cVar2 == '\x01') {
      *(undefined1 *)(param_1 + 0x1c) = 2;
      lVar4 = *(long *)(param_1 + 8);
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar4;
      func_0x000107c61170(uVar7);
      goto LAB_1000b22a4;
    }
    lVar4 = 0;
    lVar8 = 0;
  }
  func_0x000107c611f0(param_1 + 0x18);
  func_0x000107c61174(lVar4);
  lVar5 = lVar4;
  func_0x000107c4080c();
  lVar3 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        func_0x000107c61128(lVar4);
      }
      (**(code **)(*(long *)(lVar9 * 8) + 0x10))(*(long *)(lVar9 * 8),lVar8);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar4;
    func_0x000107c4080c();
  }
  param_1 = 0;
  func_0x000107c61170(lVar4);
  func_0x000107c61174(lVar8);
  func_0x000107c61170(lVar4);
  lVar4 = lVar8;
  func_0x000107c61170();
LAB_1000b239c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    func_0x000107c60e78();
    func_0x000107c611f0(param_1 + 0x18);
    func_0x000107c60bd8();
    pcVar1 = *(code **)(lVar4 + 0x20);
    lVar6 = *(long *)(lVar4 + 0x28);
    lVar8 = lVar6;
    func_0x000107c6157c(lVar6);
    (*pcVar1)();
    func_0x000107c61574(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1000b23f0; end: 1000b2427;  */

void FUN_1000b23f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1000b2428; end: 1000b244b;  */

undefined8 FUN_1000b2428(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 1000b244c; end: 1000b261f;  */

void FUN_1000b244c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long alStack_70 [6];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000025;
  FUN_1000a9a18(0xd000000000000025,0x800000010ef861a0);
  func_0x000107c61170(uVar1);
  FUN_100083b20(alStack_70);
  uVar1 = *(undefined8 *)(alStack_70[0] + 0x18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(alStack_70[0]);
  FUN_100083b20(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c61428(param_2,alStack_70,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000b2620; end: 1000b2803;  */

/* WARNING: Possible PIC construction at 0x0001000b2744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b2754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b2764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b2774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b2784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b2794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b27a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b27b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b27c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b27d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b27c8) */
/* WARNING: Removing unreachable block (ram,0x0001000b27b8) */
/* WARNING: Removing unreachable block (ram,0x0001000b27a8) */
/* WARNING: Removing unreachable block (ram,0x0001000b2798) */
/* WARNING: Removing unreachable block (ram,0x0001000b2788) */
/* WARNING: Removing unreachable block (ram,0x0001000b2778) */
/* WARNING: Removing unreachable block (ram,0x0001000b2768) */
/* WARNING: Removing unreachable block (ram,0x0001000b2758) */
/* WARNING: Removing unreachable block (ram,0x0001000b2748) */
/* WARNING: Removing unreachable block (ram,0x0001000b27d8) */

void FUN_1000b2620(undefined8 *param_1)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  code *pcVar22;
  long unaff_x20;
  undefined8 uVar23;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xb0);
  puVar20 = &UNK_1103cdbe0;
  func_0x000107c613fc(&UNK_1103cdbe0,0xb8,7);
  *(undefined8 *)(puVar20 + 0x10) = uVar1;
  *(undefined8 *)(puVar20 + 0x18) = uVar10;
  *(undefined8 *)(puVar20 + 0x20) = uVar21;
  *(undefined8 *)(puVar20 + 0x28) = uVar11;
  *(undefined8 *)(puVar20 + 0x30) = uVar2;
  *(undefined8 *)(puVar20 + 0x38) = uVar12;
  *(undefined8 *)(puVar20 + 0x40) = uVar3;
  *(undefined8 *)(puVar20 + 0x48) = uVar13;
  *(undefined8 *)(puVar20 + 0x50) = uVar4;
  *(undefined8 *)(puVar20 + 0x58) = uVar14;
  *(undefined8 *)(puVar20 + 0x60) = uVar5;
  *(undefined8 *)(puVar20 + 0x68) = uVar15;
  *(undefined8 *)(puVar20 + 0x70) = uVar6;
  *(undefined8 *)(puVar20 + 0x78) = uVar16;
  *(undefined8 *)(puVar20 + 0x80) = uVar7;
  *(undefined8 *)(puVar20 + 0x88) = uVar17;
  *(undefined8 *)(puVar20 + 0x90) = uVar8;
  *(undefined8 *)(puVar20 + 0x98) = uVar18;
  *(undefined8 *)(puVar20 + 0xa0) = uVar9;
  *(undefined8 *)(puVar20 + 0xa8) = uVar19;
  *(undefined8 *)(puVar20 + 0xb0) = uVar23;
  uVar21 = 0x112da9420;
  FUN_1000285a8(0x112da9420,&UNK_10d9508a0);
  func_0x000107c613fc();
  pcVar22 = FUN_1000b2970;
  FUN_1000841f8(FUN_1000b2970,puVar20,uVar21);
  FUN_100084214(&UNK_10d950870,0x29,2);
  *param_1 = pcVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1000b2804; end: 1000b2807;  */

void FUN_1000b2804(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b2808; end: 1000b28cb;  */

void FUN_1000b2808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b28cc; end: 1000b296f;  */

void FUN_1000b28cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112daa3e0,&UNK_10d951ba0);
  puVar1 = &UNK_1103d05f0;
  func_0x000107c613fc(&UNK_1103d05f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1000b45fc,puVar1);
  return;
}



/* Entry: 1000b2970; end: 1000b2b47;  */

void FUN_1000b2970(undefined8 *param_1)

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
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar19 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar15 = uVar19;
  FUN_1000b28cc(uVar19,uVar8,uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("ConfigRepositoryServiceProvider",0x1f,2);
  FUN_1000b3050();
  FUN_100082720("ExperimentLoggerSaberServiceProvider",0x24,2);
  uVar17 = uVar1;
  FUN_1000b30b0(uVar1,uVar18,uVar2,uVar15,uVar9,uVar3,uVar8,uVar10,uVar16,uVar4,uVar11,uVar5,uVar12,
                uVar20,uVar21,uVar22,uVar6,uVar19,uVar13);
  FUN_100082720("ConfigManagerServiceProvider",0x1c,2);
  func_0x0001000b3264(uVar18,uVar1,uVar17,uVar2,uVar19,uVar16,uVar15,uVar5,uVar7,uVar20,uVar14);
  FUN_100082720("CircumstanceEngineServiceProvider",0x21,2);
  uVar19 = uVar18;
  FUN_1000b338c(uVar18,uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar15);
  FUN_100082720("ConfigurationServicesImplementationEntryPointProvider",0x35,2);
  *param_1 = uVar19;
  return;
}



/* Entry: 1000b2b48; end: 1000b2b53;  */

void FUN_1000b2b48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c444a4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar2 = PTR_PTR_1126a6f20;
  func_0x000107c610f8();
  func_0x000107c47174();
  func_0x000107c615e8(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000b2b54; end: 1000b2c17;  */

void FUN_1000b2b54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c444a4(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  puVar2 = PTR_PTR_1126a6f20;
  func_0x000107c610f8();
  func_0x000107c47174();
  func_0x000107c615e8(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000b2c18; end: 1000b2c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b2c18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_11305f240);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  puVar3 = PTR_PTR_1126a6f18;
  func_0x000107c610f8();
  func_0x000107c4574c();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1000b2c24; end: 1000b2ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b2c24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_50);
  uVar1 = *(undefined8 *)(lStack_50 + _DAT_11305f240);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_50);
  puVar2 = PTR_PTR_1126a6f18;
  func_0x000107c610f8();
  func_0x000107c4574c();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000b2ce8; end: 1000b2cef;  */

void FUN_1000b2ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x12;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_110 [12];
  undefined8 *apuStack_b0 [2];
  undefined8 uStack_a0;
  long alStack_98 [6];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x0;
  apuStack_b0[0] = param_1;
  func_0x000107c5ede0();
  lVar11 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)apuStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000019;
  FUN_1000a9a18(0xd000000000000019,0x800000010f1ee340);
  func_0x000107c61170(uVar3);
  FUN_100083b20(alStack_98);
  uVar13 = 0x800000010f1ee360;
  uVar3 = 0xd000000000000019;
  uVar6 = uVar13;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1ee360);
  uStack_a0 = 0;
  lVar5 = alStack_98[0];
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(alStack_98[0]);
  func_0x000107c61170(uVar3);
  uVar3 = uStack_a0;
  if (lVar5 == 0) {
    uVar6 = uStack_a0;
    func_0x000107c61174(uStack_a0);
    func_0x000107c5ed30(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar3);
    lVar16 = -0x2fffffffffffffe7;
  }
  else {
    lVar16 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar5);
    uVar13 = uVar6;
  }
  func_0x000107c5ed80(lVar15,lVar16,uVar13);
  func_0x000107c6142c(uVar13);
  uVar3 = 0x800000010f1ee380;
  func_0x000107c5ed9c(lVar14,0xd000000000000012,0x800000010f1ee380);
  puVar7 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  puVar9 = puVar7;
  func_0x000107c4ec84();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar14,puVar1);
  (*pcVar12)(lVar15,puVar1);
  *apuStack_b0[0] = puVar9;
  func_0x000107c61428(puVar2,alStack_98,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174();
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar10 = (undefined1 *)(lVar15 + -0x60);
  *(undefined8 **)(lVar15 + -0x30) = puVar1;
  *(undefined **)(lVar15 + -0x28) = puVar7;
  *(undefined8 *)(lVar15 + -0x20) = uVar3;
  *(code **)(lVar15 + -0x18) = pcVar12;
  *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar15 + -8) = FUN_1000b2fac;
  puVar7 = PTR_PTR_1126adb60;
  func_0x000107c610f8();
  *(code **)(lVar15 + -0x40) = FUN_1000b44d4;
  *(undefined8 *)(lVar15 + -0x38) = 0;
  *(undefined **)(lVar15 + -0x60) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar15 + -0x58) = 0x42000000;
  *(code **)(lVar15 + -0x50) = FUN_1000b4418;
  *(undefined **)(lVar15 + -0x48) = &UNK_11074c520;
  func_0x000107c60bc4(lVar15 + -0x60);
  func_0x000107c46590();
  func_0x000107c60bd0(puVar10);
  func_0x000107c61574(*(undefined8 *)(lVar15 + -0x38));
  *extraout_x8_00 = puVar7;
  return;
}



/* Entry: 1000b2cf0; end: 1000b2fab;  */

void FUN_1000b2cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x12;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_110 [12];
  undefined8 *apuStack_b0 [2];
  undefined8 uStack_a0;
  long alStack_98 [6];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x0;
  apuStack_b0[0] = param_1;
  func_0x000107c5ede0();
  lVar11 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)apuStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000019;
  FUN_1000a9a18(0xd000000000000019,0x800000010f1ee340);
  func_0x000107c61170(uVar3);
  FUN_100083b20(alStack_98);
  uVar13 = 0x800000010f1ee360;
  uVar3 = 0xd000000000000019;
  uVar6 = uVar13;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1ee360);
  uStack_a0 = 0;
  lVar5 = alStack_98[0];
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(alStack_98[0]);
  func_0x000107c61170(uVar3);
  uVar3 = uStack_a0;
  if (lVar5 == 0) {
    uVar6 = uStack_a0;
    func_0x000107c61174(uStack_a0);
    func_0x000107c5ed30(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar3);
    lVar16 = -0x2fffffffffffffe7;
  }
  else {
    lVar16 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar5);
    uVar13 = uVar6;
  }
  func_0x000107c5ed80(lVar15,lVar16,uVar13);
  func_0x000107c6142c(uVar13);
  uVar3 = 0x800000010f1ee380;
  func_0x000107c5ed9c(lVar14,0xd000000000000012,0x800000010f1ee380);
  puVar7 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  puVar9 = puVar7;
  func_0x000107c4ec84();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar14,puVar1);
  (*pcVar12)(lVar15,puVar1);
  *apuStack_b0[0] = puVar9;
  func_0x000107c61428(puVar2,alStack_98,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174();
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar10 = (undefined1 *)(lVar15 + -0x60);
  *(undefined8 **)(lVar15 + -0x30) = puVar1;
  *(undefined **)(lVar15 + -0x28) = puVar7;
  *(undefined8 *)(lVar15 + -0x20) = uVar3;
  *(code **)(lVar15 + -0x18) = pcVar12;
  *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar15 + -8) = FUN_1000b2fac;
  puVar7 = PTR_PTR_1126adb60;
  func_0x000107c610f8();
  *(code **)(lVar15 + -0x40) = FUN_1000b44d4;
  *(undefined8 *)(lVar15 + -0x38) = 0;
  *(undefined **)(lVar15 + -0x60) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar15 + -0x58) = 0x42000000;
  *(code **)(lVar15 + -0x50) = FUN_1000b4418;
  *(undefined **)(lVar15 + -0x48) = &UNK_11074c520;
  func_0x000107c60bc4(lVar15 + -0x60);
  func_0x000107c46590();
  func_0x000107c60bd0(puVar10);
  func_0x000107c61574(*(undefined8 *)(lVar15 + -0x38));
  *extraout_x8_00 = puVar7;
  return;
}



/* Entry: 1000b2fac; end: 1000b304f;  */

void FUN_1000b2fac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126adb60;
  func_0x000107c610f8();
  pcStack_40 = FUN_1000b44d4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1000b4418;
  puStack_48 = &UNK_11074c520;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c46590(puVar1,param_3,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000b3050; end: 1000b309b;  */

void FUN_1000b3050(undefined8 param_1)

{
  FUN_1000285a8(0x112daa3e8,&UNK_10d951bf0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100111600,param_1);
  return;
}



/* Entry: 1000b309c; end: 1000b30af;  */

void FUN_1000b309c(long param_1,long param_2)

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



/* Entry: 1000b30b0; end: 1000b338b;  */

void FUN_1000b30b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da9430,&UNK_10d951840);
  puVar1 = &UNK_1103d00a0;
  func_0x000107c613fc(&UNK_1103d00a0,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_19;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  *(undefined8 *)(puVar1 + 0x88) = param_15;
  *(undefined8 *)(puVar1 + 0x90) = param_16;
  *(undefined8 *)(puVar1 + 0x98) = param_17;
  *(undefined8 *)(puVar1 + 0xa0) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  FUN_1000823a8(FUN_1000b415c,puVar1);
  return;
}



/* Entry: 1000b338c; end: 1000b33af;  */

void FUN_1000b338c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103cdc88;
  FUN_1000285a8(0x112da9428,&UNK_10d9508b0);
  func_0x000107c613fc(&UNK_1103cdc88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1000b33b0,puVar1);
  return;
}



/* Entry: 1000b33b0; end: 1000b33fb;  */

/* WARNING: Possible PIC construction at 0x0001000b33e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b33e8) */

void FUN_1000b33b0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100098abc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1000b33fc; end: 1000b3407;  */

void FUN_1000b33fc(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000b3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1000b3408; end: 1000b3467;  */

void FUN_1000b3408(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001000b3440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1000b3468; end: 1000b346b;  */

void FUN_1000b3468(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b346c; end: 1000b36cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b346c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [5];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  FUN_1000a9a18(0xd00000000000001d,0x800000010ef86f00);
  func_0x000107c61170();
  func_0x0001000ad7c4();
  uVar6 = uVar1;
  FUN_100083b20(auStack_c8);
  FUN_100083b20(auStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x0001000ad7c4();
  uVar3 = uVar6;
  func_0x0001000ad7c4();
  uVar4 = uVar3;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(auStack_b0);
  func_0x000107c61170();
  puVar5 = PTR_PTR_1126b9fd8;
  func_0x000107c610f8();
  func_0x000107c45fa4();
  func_0x000107c615e8(uStack_a8);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_98);
  func_0x000107c615e8(uStack_90);
  func_0x000107c615e8(auStack_88[0]);
  func_0x000107c615e8(auStack_c8[0]);
  func_0x000107c61170(uVar1);
  *param_1 = puVar5;
  func_0x000107c61428(param_2,auStack_c8,0,0);
  uVar6 = *param_2;
  func_0x000107c61174(uVar6);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1000b36d0; end: 1000b36d7;  */

void FUN_1000b36d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_70 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *unaff_x20;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000023;
  FUN_1000a9a18(0xd000000000000023,0x800000010ef86f70);
  func_0x000107c61170(uVar2);
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a7518;
  func_0x000107c610f8();
  func_0x000107c46b6c();
  func_0x000107c61170(uVar2);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    func_0x000107c61428(unaff_x20,auStack_70,0,0);
    uVar2 = *unaff_x20;
    func_0x000107c61174(uVar2);
    FUN_1000aa0a8(uVar3);
    func_0x000107c61170(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b37c4);
  (*pcVar1)();
}



/* Entry: 1000b36d8; end: 1000b37c3;  */

void FUN_1000b36d8(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000023;
  FUN_1000a9a18(0xd000000000000023,0x800000010ef86f70);
  func_0x000107c61170(uVar2);
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a7518;
  func_0x000107c610f8();
  func_0x000107c46b6c();
  func_0x000107c61170(uVar2);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    func_0x000107c61428(param_2,auStack_70,0,0);
    uVar2 = *param_2;
    func_0x000107c61174(uVar2);
    FUN_1000aa0a8(uVar3);
    func_0x000107c61170(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b37c4);
  (*pcVar1)();
}



/* Entry: 1000b37c4; end: 1000b392b; -[SCConfigMetricGraphene2 initWithGraphene:] */

undefined8 FUN_1000b37c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b77d0;
  func_0x000107c610fc(PTR_PTR_1126b77d0);
  puVar2 = PTR_PTR_1126b77d8;
  func_0x000107c610fc(PTR_PTR_1126b77d8);
  puVar3 = PTR_PTR_1126b77e0;
  func_0x000107c610fc(PTR_PTR_1126b77e0);
  puVar4 = PTR_PTR_1126b77e8;
  func_0x000107c610fc(PTR_PTR_1126b77e8);
  puVar5 = PTR_PTR_1126b77f0;
  func_0x000107c610fc(PTR_PTR_1126b77f0);
  puVar6 = PTR_PTR_1126b77f8;
  func_0x000107c610fc(PTR_PTR_1126b77f8);
  func_0x000107c45e38(param_1,param_2,puVar1,puVar2,puVar3,puVar4,puVar5,puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1000b392c; end: 1000b399f; -[SCGrapheneCircumstanceEngineMetric2 init] */

undefined1 * FUN_1000b392c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e78f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b39a0; end: 1000b3a13; -[SCGrapheneConfigEvaluationMetric2 init] */

undefined1 * FUN_1000b39a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7900;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3a14; end: 1000b3a87; -[SCGrapheneConfigRecoveryMetric2 init] */

undefined1 * FUN_1000b3a14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7908;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3a88; end: 1000b3afb; -[SCGrapheneConfigSingleReadMetric2 init] */

undefined1 * FUN_1000b3a88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7910;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3afc; end: 1000b3b6f; -[SCGrapheneExperimentationMetric2 init] */

undefined1 * FUN_1000b3afc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7918;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3b70; end: 1000b3be3; -[SCGrapheneAserMetric2 init] */

undefined1 * FUN_1000b3b70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e78f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3be4; end: 1000b3d73; -[SCConfigMetricGraphene2 initWithCircumstanceGraphene:configEvaluationGraphene:configRecoveryGraphene:configSingleReadGraphene:experimentGraphene:aserGraphene:] */

undefined1 *
FUN_1000b3be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e78e0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b3d74; end: 1000b3da3; -[SCLazy .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001000b3d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b3d90) */

void FUN_1000b3d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1000b3da4; end: 1000b3dab;  */

void FUN_1000b3da4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000b3dac; end: 1000b415b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b3dac(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 auStack_88 [5];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174();
  uVar3 = 0xd000000000000024;
  FUN_1000a9a18(0xd000000000000024,0x800000010ef86f40);
  func_0x000107c61170();
  func_0x0001000ad7c4();
  uVar14 = uVar2;
  func_0x0001000ad7c4();
  FUN_100083b20(auStack_e0);
  FUN_100083b20(auStack_88);
  FUN_100083b20(&lStack_90);
  uVar4 = *(undefined8 *)(lStack_90 + _DAT_112daa260);
  func_0x000107c615f0();
  func_0x000107c61170();
  lVar5 = lStack_90;
  func_0x0001000ad7c4();
  lVar6 = lVar5;
  func_0x0001000ad7c4();
  lVar7 = lVar6;
  FUN_100083b20(&uStack_98);
  func_0x0001000ad7c4();
  lVar8 = lVar7;
  func_0x0001000ad7c4();
  lVar9 = lVar8;
  FUN_100083b20(&uStack_a0);
  func_0x0001000ad7c4();
  lVar10 = lVar9;
  func_0x0001000ad7c4();
  lVar11 = lVar10;
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  uVar12 = 0;
  func_0x0001000f9d80();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar13 = PTR_PTR_1126a7508;
  func_0x000107c610f8();
  func_0x000107c45f90();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c615e8(auStack_e0[0]);
  func_0x000107c615e8(auStack_88[0]);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c615e8(uStack_98);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c615e8(uStack_a8);
  func_0x000107c615e8(uStack_b0);
  func_0x000107c61170(lVar11);
  func_0x000107c615e8(uStack_b8);
  func_0x000107c615e8(uStack_c0);
  func_0x000107c615e8(uStack_c8);
  func_0x000107c61170(uVar12);
  if (puVar13 != (undefined *)0x0) {
    *param_1 = puVar13;
    func_0x000107c61428(param_2,auStack_e0,0,0);
    uVar14 = *param_2;
    func_0x000107c61174(uVar14);
    FUN_1000aa0a8(uVar3);
    func_0x000107c61170(uVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b415c);
  (*pcVar1)();
}



/* Entry: 1000b415c; end: 1000b41c7;  */

void FUN_1000b415c(void)

{
  long unaff_x20;
  
  FUN_1000b3dac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}


