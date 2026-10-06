/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019d6760; end: 1019d676f; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationActiveStateProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d6760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7370));
  return;
}



/* Entry: 1019d6770; end: 1019d678f;  */

void FUN_1019d6770(void)

{
  func_0x000107c61168(&PTR_PTR_1127efb40);
  return;
}



/* Entry: 1019d6790; end: 1019d67b3;  */

void FUN_1019d6790(undefined8 *param_1,undefined8 param_2)

{
  func_0x000103ee3c34();
  *param_1 = param_2;
  return;
}



/* Entry: 1019d67b4; end: 1019d67cb;  */

/* WARNING: Possible PIC construction at 0x000103ee397c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ee3980) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b00) */
/* WARNING: Removing unreachable block (ram,0x000103ee398c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b04) */
/* WARNING: Removing unreachable block (ram,0x000103ee3994) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b08) */
/* WARNING: Removing unreachable block (ram,0x000103ee399c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b0c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b10) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b14) */
/* WARNING: Removing unreachable block (ram,0x000103ee39ac) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b18) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b1c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b20) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b24) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b28) */
/* WARNING: Removing unreachable block (ram,0x000103ee39cc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b2c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b30) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b34) */
/* WARNING: Removing unreachable block (ram,0x000103ee39dc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b38) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b3c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b40) */
/* WARNING: Removing unreachable block (ram,0x000103ee3ad8) */

void FUN_1019d67b4(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long alStack_110 [8];
  undefined1 auStack_d0 [80];
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar12 = param_1;
  (**(code **)(param_2 + 0x18))();
  (**(code **)(param_2 + 0x30))(param_1,param_2);
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar12 >> 0x20 | uVar12 << 0x20;
  uVar12 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar12 >> 0x20 | uVar12 << 0x20;
  puVar4 = &uStack_70;
  puVar8 = &uStack_68;
  func_0x000100e36f4c(puVar4,puVar8);
  puVar5 = &uStack_78;
  puVar9 = &uStack_70;
  func_0x000100e36f4c(puVar5,puVar9);
  func_0x00010006c00c(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  puVar6 = puVar4;
  FUN_1018e4e30(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  func_0x00010006c00c(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puVar7 = puVar5;
  FUN_1018e4e30(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puStack_80 = puVar6;
  *(ulong **)((long)alStack_110 + lVar1) = puVar5;
  *(undefined1 **)((long)alStack_110 + lVar1 + 8) = auStack_d0 + lVar1;
  *(ulong **)((long)alStack_110 + lVar1 + 0x10) = puVar4;
  *(long *)((long)alStack_110 + lVar1 + 0x18) = lVar11;
  *(ulong ***)((long)alStack_110 + lVar1 + 0x20) = &puStack_80;
  *(long *)((long)alStack_110 + lVar1 + 0x28) = lVar3;
  *(undefined1 **)((long)alStack_110 + lVar1 + 0x30) = &stack0xfffffffffffffff0;
  *(undefined **)((long)alStack_110 + lVar1 + 0x38) = &UNK_103ee3980;
  puVar9 = puStack_80;
  uVar12 = puVar7[2];
  uVar13 = puStack_80[2];
  if (SCARRY8(uVar13,uVar12)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar2)();
  }
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar6 == 0) || (uVar10 = puVar9[3] >> 1, (long)uVar10 < (long)(uVar13 + uVar12))) {
    func_0x0001014d97ac();
    uVar10 = puVar6[3] >> 1;
    uVar13 = puVar7[2];
    puVar9 = puVar6;
  }
  else {
    uVar13 = puVar7[2];
  }
  if (uVar13 == 0) {
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
      (*pcVar2)();
    }
  }
  else {
    if (uVar10 - puVar9[2] < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
      (*pcVar2)();
    }
    _memcpy((long)puVar9 + puVar9[2] + 0x20,puVar7 + 4,uVar12);
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
      if (SCARRY8(puVar9[2],uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
        (*pcVar2)();
      }
      puVar9[2] = puVar9[2] + uVar12;
    }
  }
  return;
}



/* Entry: 1019d67cc; end: 1019d6803;  */

undefined1  [16] FUN_1019d67cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c44e64();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1019d6804;
  return auVar2;
}



/* Entry: 1019d6804; end: 1019d6823;  */

void FUN_1019d6804(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setHighBits__112647b88,*param_1);
  return;
}



/* Entry: 1019d6824; end: 1019d685b;  */

undefined1  [16] FUN_1019d6824(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c4c0fc();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1019d685c;
  return auVar2;
}



/* Entry: 1019d685c; end: 1019d6877;  */

void FUN_1019d685c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setLowBits__11264de20,*param_1);
  return;
}



/* Entry: 1019d6878; end: 1019d68ab;  */

void FUN_1019d6878(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019d68ac; end: 1019d7243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d68ac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,byte *param_7,byte *param_8,ulong param_9,
                  undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte **ppbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x20;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  pbVar13 = (byte *)((ulong)param_7 & 0xffffffffffff);
  pbVar16 = (byte *)((ulong)param_8 >> 0x38 & 0xf);
  pbVar17 = pbVar13;
  if (((ulong)param_8 & 0x2000000000000000) != 0) {
    pbVar17 = pbVar16;
  }
  if (pbVar17 == (byte *)0x0) {
    return;
  }
  if (((ulong)param_8 >> 0x3c & 1) == 0) {
    if (((ulong)param_8 >> 0x3d & 1) == 0) {
      if (((ulong)param_7 >> 0x3c & 1) == 0) {
        pbVar17 = param_7;
        pbVar13 = param_8;
        func_0x000107c60358();
      }
      else {
        pbVar17 = (byte *)(((ulong)param_8 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar17 == 0x2b) {
        pbVar16 = pbVar13 + -1;
        if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d7004);
          (*pcVar2)();
        }
        if (pbVar16 == (byte *)0x0) {
          return;
        }
        lVar22 = 0;
        do {
          pbVar17 = pbVar17 + 1;
          if (9 < *pbVar17 - 0x30) {
            return;
          }
          lVar19 = lVar22 * 10;
          if (SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f) {
            return;
          }
          uVar14 = (ulong)(byte)(*pbVar17 - 0x30);
          lVar22 = lVar19 + uVar14;
          if (SCARRY8(lVar19,uVar14)) {
            return;
          }
          pbVar16 = pbVar16 + -1;
        } while (pbVar16 != (byte *)0x0);
      }
      else if (*pbVar17 == 0x2d) {
        pbVar16 = pbVar13 + -1;
        if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d6ffc);
          (*pcVar2)();
        }
        if (pbVar16 == (byte *)0x0) {
          return;
        }
        lVar22 = 0;
        do {
          pbVar17 = pbVar17 + 1;
          if (9 < *pbVar17 - 0x30) {
            return;
          }
          lVar19 = lVar22 * 10;
          if (SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f) {
            return;
          }
          uVar14 = (ulong)(byte)(*pbVar17 - 0x30);
          lVar22 = lVar19 - uVar14;
          if (SBORROW8(lVar19,uVar14)) {
            return;
          }
          pbVar16 = pbVar16 + -1;
        } while (pbVar16 != (byte *)0x0);
      }
      else {
        if (pbVar13 == (byte *)0x0) {
          return;
        }
        lVar22 = 0;
        pbVar16 = pbVar17;
        while (pbVar16 != (byte *)0x0) {
          if (9 < *pbVar17 - 0x30) {
            return;
          }
          lVar19 = lVar22 * 10;
          if (SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f) {
            return;
          }
          uVar14 = (ulong)(byte)(*pbVar17 - 0x30);
          lVar22 = lVar19 + uVar14;
          if (SCARRY8(lVar19,uVar14)) {
            return;
          }
          pbVar13 = pbVar13 + -1;
          pbVar17 = pbVar17 + 1;
          pbVar16 = pbVar13;
        }
      }
      goto LAB_1019d6b40;
    }
    pbStack_98 = param_7;
    uStack_90 = (ulong)param_8 & 0xffffffffffffff;
    uVar21 = (uint)param_7 & 0xff;
    if (uVar21 == 0x2b) {
      if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d7008);
        (*pcVar2)();
      }
      pbVar16 = pbVar16 + -1;
      if (pbVar16 == (byte *)0x0) goto LAB_1019d6b28;
      lVar22 = 0;
      pbVar17 = (byte *)((ulong)&pbStack_98 | 1);
      do {
        if (((9 < *pbVar17 - 0x30) ||
            (lVar19 = lVar22 * 10, SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
           (uVar14 = (ulong)(byte)(*pbVar17 - 0x30), lVar22 = lVar19 + uVar14,
           SCARRY8(lVar19,uVar14))) goto LAB_1019d6b28;
        uVar21 = 0;
        pbVar16 = pbVar16 + -1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar16 != (byte *)0x0);
    }
    else if (uVar21 == 0x2d) {
      if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d7000);
        (*pcVar2)();
      }
      pbVar16 = pbVar16 + -1;
      if (pbVar16 == (byte *)0x0) {
LAB_1019d6b28:
        uVar21 = 1;
      }
      else {
        lVar22 = 0;
        pbVar17 = (byte *)((ulong)&pbStack_98 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (lVar19 = lVar22 * 10, SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar14 = (ulong)(byte)(*pbVar17 - 0x30), lVar22 = lVar19 - uVar14,
             SBORROW8(lVar19,uVar14))) goto LAB_1019d6b28;
          uVar21 = 0;
          pbVar16 = pbVar16 + -1;
          pbVar17 = pbVar17 + 1;
        } while (pbVar16 != (byte *)0x0);
      }
    }
    else {
      if (pbVar16 == (byte *)0x0) goto LAB_1019d6b28;
      lVar22 = 0;
      ppbVar12 = &pbStack_98;
      do {
        if (((9 < *(byte *)ppbVar12 - 0x30) ||
            (lVar19 = lVar22 * 10, SUB168(SEXT816(lVar22) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
           (uVar14 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30), lVar22 = lVar19 + uVar14,
           SCARRY8(lVar19,uVar14))) goto LAB_1019d6b28;
        uVar21 = 0;
        pbVar16 = pbVar16 + -1;
        ppbVar12 = (byte **)((long)ppbVar12 + 1);
      } while (pbVar16 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(param_8);
    pbVar17 = param_8;
    func_0x000100fb6b80(param_7,param_8,10);
    uVar21 = (uint)pbVar17;
    func_0x000107c6142c(param_8);
  }
  if ((uVar21 & 0xff) == 1) {
    return;
  }
LAB_1019d6b40:
  lVar22 = *(long *)(unaff_x20 + _DAT_112de73a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar22 != 0) {
    puVar3 = PTR_PTR_1126bbc30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c59a08(puVar3);
    func_0x000107c61170(param_3);
    puVar4 = PTR_PTR_1126bbc40;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53d94();
    uVar5 = 0;
    FUN_1019da598(0,0x112dc0130,&PTR_PTR_1126afad0);
    func_0x000107c61434(param_2);
    uVar6 = param_1;
    uVar14 = param_2;
    func_0x000103ee3c34(param_1,param_2,uVar5,&PTR_DAT_110427990);
    func_0x000107c53d9c(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c52be8(puVar4);
    if (param_6 != 0) {
      uVar18 = param_5 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar18 = param_6 >> 0x38 & 0xf;
      }
      if (uVar18 != 0) {
        uVar18 = param_5;
        uVar14 = param_6;
        func_0x000107c5fadc(param_5,param_6);
        func_0x000107c577f4(puVar4);
        func_0x000107c61170(uVar18);
      }
    }
    if (param_9 != 0) {
      uVar18 = param_9 & 0xffffffffffffff8;
      if (param_9 >> 0x3e == 0) {
        uVar23 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar23 = param_9;
        if (-1 < (long)param_9) {
          uVar23 = uVar18;
        }
        func_0x000107c60480();
      }
      if (uVar23 != 0) {
        lVar19 = 4;
        do {
          uVar20 = lVar19 - 4;
          if ((param_9 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar18 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d6fd8);
              (*pcVar2)();
            }
            uVar7 = *(ulong *)(param_9 + lVar19 * 8);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar20;
            uVar14 = param_9;
            FUN_1019d944c(uVar20,param_9);
          }
          uVar1 = lVar19 - 3;
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d6f94);
            (*pcVar2)();
          }
          uVar20 = uVar7;
          func_0x000107c5d984();
          func_0x000107c61180();
          uVar8 = uVar20;
          func_0x000107c5faec();
          uVar15 = uVar14;
          func_0x000107c61170(uVar20);
          uVar20 = uVar7;
          func_0x000107c5db08(uVar7);
          func_0x000107c61180();
          uVar9 = uVar20;
          func_0x000107c5faec();
          func_0x000107c61170(uVar20);
          func_0x0001043fc638(0);
          func_0x000107c610f8();
          func_0x0001043fbb78(uVar8,uVar14,uVar9,uVar15);
          puVar10 = PTR_PTR_1126a83a8;
          func_0x000107c610f8(PTR_PTR_1126a83a8);
          func_0x000107c453e4();
          uVar9 = *(ulong *)(uVar8 + _DAT_113076e50);
          uVar15 = ((ulong *)(uVar8 + _DAT_113076e50))[1];
          uVar20 = uVar9 & 0xffffffffffff;
          if ((uVar15 & 0x2000000000000000) != 0) {
            uVar20 = uVar15 >> 0x38 & 0xf;
          }
          if (uVar20 != 0) {
            func_0x000107c61434(uVar15);
            uVar14 = uVar15;
            func_0x000107c5fadc(uVar9);
            func_0x000107c6142c(uVar15);
            func_0x000107c5a344(puVar10);
            func_0x000107c61170(uVar9);
          }
          uVar9 = *(ulong *)(uVar8 + _DAT_113076e58);
          uVar15 = ((ulong *)(uVar8 + _DAT_113076e58))[1];
          uVar20 = uVar9 & 0xffffffffffff;
          if ((uVar15 & 0x2000000000000000) != 0) {
            uVar20 = uVar15 >> 0x38 & 0xf;
          }
          if (uVar20 != 0) {
            func_0x000107c61434(uVar15);
            uVar14 = uVar15;
            func_0x000107c5fadc(uVar9);
            func_0x000107c6142c(uVar15);
            func_0x000107c5a42c(puVar10);
            func_0x000107c61170(uVar9);
          }
          puVar11 = puVar4;
          func_0x000107c4cd48();
          func_0x000107c61180();
          if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d7028);
            (*pcVar2)();
          }
          func_0x000107c3d798();
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          lVar19 = lVar19 + 1;
        } while (uVar1 != uVar23);
      }
    }
    puVar10 = &UNK_110427f10;
    func_0x000107c613fc(&UNK_110427f10,0x58,7);
    *(undefined8 *)(puVar10 + 0x10) = param_1;
    *(ulong *)(puVar10 + 0x18) = param_2;
    *(byte **)(puVar10 + 0x20) = param_7;
    *(byte **)(puVar10 + 0x28) = param_8;
    *(undefined **)(puVar10 + 0x30) = puVar3;
    *(ulong *)(puVar10 + 0x38) = param_5;
    *(ulong *)(puVar10 + 0x40) = param_6;
    *(undefined8 *)(puVar10 + 0x48) = param_10;
    *(undefined8 *)(puVar10 + 0x50) = param_11;
    pcStack_78 = FUN_1019da5d8;
    pbStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    uStack_88 = 0x1019da96c;
    puStack_80 = &UNK_110427f28;
    ppbVar12 = &pbStack_98;
    puStack_70 = puVar10;
    func_0x000107c60bc4(ppbVar12);
    puVar10 = puStack_70;
    func_0x000107c61434(param_6);
    func_0x000107c6157c(param_11);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_2);
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar10);
    func_0x000107c409bc(lVar22);
    func_0x000107c60bd0(ppbVar12);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1019d7244; end: 1019d76db; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider setCustomizationWithId:customizationString:previewText:lensId:mentions:completion:] */

/* WARNING: Possible PIC construction at 0x0001019d736c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d737c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d738c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d7380) */
/* WARNING: Removing unreachable block (ram,0x0001019d7370) */
/* WARNING: Removing unreachable block (ram,0x0001019d7390) */

void FUN_1019d7244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
    uVar5 = uVar3;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec(param_5);
    uVar5 = uVar4;
  }
  func_0x000107c5faec(param_6);
  if (param_7 != 0) {
    uVar1 = 0;
    FUN_1019da598(0,0x112d5ced8,&PTR_PTR_1126a6360);
    func_0x000107c5fc54(param_7,uVar1);
  }
  puVar2 = &UNK_110427ee8;
  func_0x000107c613fc(&UNK_110427ee8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  func_0x000107c61174(param_1);
  FUN_1019d68ac(param_3,param_2,param_4,uVar3,param_5,uVar4,param_6,uVar5,param_7,0x1019da988,puVar2
               );
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019d76dc; end: 1019d77af; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider fetchCustomizationId:completion:] */

void FUN_1019d76dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110427e48;
  func_0x000107c613fc(&UNK_110427e48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110427e70;
  func_0x000107c613fc(&UNK_110427e70,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1019da1f4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x0001019d73b4(param_3,param_2,FUN_1019da1fc,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019d77b0; end: 1019d7897;  */

/* WARNING: Possible PIC construction at 0x0001019d785c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d786c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d7860) */
/* WARNING: Removing unreachable block (ram,0x0001019d7870) */

void FUN_1019d77b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = param_3;
  }
  if (param_6 != 0) {
    uVar1 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    func_0x000107c5fc48(param_6,uVar1);
  }
  if (param_7 != 0) {
    func_0x000107c5ed2c(param_7);
  }
  (**(code **)(param_8 + 0x10))(param_8,param_1,uVar2,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019d7898; end: 1019d7a3f;  */

void FUN_1019d7898(long param_1,long param_2,code *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*param_3)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 != 0) {
    func_0x000107c4b1f0();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar4 = param_1;
      func_0x000107c40808();
      if (lVar4 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar4 = param_1;
        func_0x000107c40808();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019d7a40);
          (*pcVar3)();
        }
        if (lVar4 != 0) {
          func_0x000100403514(0,lVar4,0);
          puVar2 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
          lVar8 = 0;
          do {
            func_0x000107c5dc14();
            puVar5 = PTR___ss5Int64VN_11034ee50;
            puVar6 = puVar2;
            func_0x000107c6057c();
            uVar1 = *(ulong *)(puVar7 + 0x10);
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
              func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
            *(undefined **)(puVar7 + uVar1 * 0x10 + 0x20) = puVar5;
            *(undefined **)(puVar7 + uVar1 * 0x10 + 0x28) = puVar6;
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
        }
      }
      (*param_3)(puVar7);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar7);
      return;
    }
  }
  (*param_3)(0);
  return;
}



/* Entry: 1019d7a40; end: 1019d7adf; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider getCustomizedLensesWithCompletion:] */

void FUN_1019d7a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_1019d989c();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019d7ae0; end: 1019d7fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d7ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  undefined8 unaff_x20;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 auStack_120 [8];
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  uStack_108 = param_3;
  uStack_100 = param_4;
  uStack_c8 = param_2;
  func_0x000107c5f7fc();
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar3 = 0;
  puStack_e0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_f0 = *(long *)(lVar3 + -8);
  lStack_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar16 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_f8 = lVar16;
  func_0x000107c5f804();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lStack_110 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)&UNK_110427a10;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_110427a10,0x18,7);
  puVar18 = puVar4 + 2;
  *puVar18 = 0;
  func_0x000107c613fc(&UNK_110427a10,0x18,7);
  puVar5[2] = 0;
  puVar6 = puVar5;
  func_0x000107c60f34();
  func_0x000107c60f38();
  puVar7 = &UNK_110427c90;
  func_0x000107c613fc(&UNK_110427c90,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar4;
  *(undefined8 **)(puVar7 + 0x18) = puVar6;
  func_0x000107c61174(puVar6);
  puVar8 = puVar4;
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_b0);
  puVar2 = puStack_b0;
  puVar12 = PTR___NSConcreteStackBlock_11034bd00;
  if (puStack_b0 == (undefined *)0x0) {
    FUN_1019d90c0();
    puVar12 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,puVar8,0,0);
    puVar8[1] = 1;
    *puVar8 = 0;
    func_0x000107c61428(puVar18,auStack_80,1,0);
    uVar19 = *puVar18;
    *puVar18 = puVar12;
    func_0x000107c614b0(puVar12);
    func_0x000107c614ac(uVar19);
    func_0x000107c60f3c(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c614ac(puVar12);
  }
  else {
    puVar9 = &UNK_110427b28;
    func_0x000107c613fc(&UNK_110427b28,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,unaff_x20);
    puVar10 = &UNK_110427d08;
    func_0x000107c613fc(&UNK_110427d08,0x38,7);
    uVar19 = uStack_c8;
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined8 *)(puVar10 + 0x18) = 0x1019da95c;
    *(undefined **)(puVar10 + 0x20) = puVar7;
    *(undefined8 *)(puVar10 + 0x28) = param_1;
    *(undefined8 *)(puVar10 + 0x30) = uStack_c8;
    uStack_90 = 0x1019da964;
    puStack_b0 = puVar12;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100f1c768;
    puStack_98 = &UNK_110427d20;
    ppuVar11 = &puStack_b0;
    puStack_118 = puVar5;
    puStack_88 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar12 = puStack_88;
    func_0x000107c6157c(puVar7);
    puVar5 = puStack_118;
    func_0x000107c61434(uVar19);
    func_0x000107c61574(puVar12);
    func_0x000107c440d8(puVar2);
    func_0x000107c61574(puVar7);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c615e8(puVar2);
  }
  func_0x000107c60f38(puVar6);
  func_0x000107c61174(puVar6);
  func_0x000107c6157c(puVar5);
  FUN_1019d9a08(param_1,uStack_c8,unaff_x20,puVar5,puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar6);
  FUN_1019da598(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar16 = lStack_110;
  (**(code **)(lVar17 + 0x68))
            (lStack_110,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  lVar13 = lVar16;
  func_0x000107c5fff0(lVar16);
  (**(code **)(lVar17 + 8))(lVar16,lVar3);
  puVar7 = &UNK_110427cb8;
  func_0x000107c613fc(&UNK_110427cb8,0x30,7);
  uVar14 = uStack_100;
  *(undefined8 **)(puVar7 + 0x10) = puVar4;
  *(undefined8 *)(puVar7 + 0x18) = uStack_108;
  *(undefined8 *)(puVar7 + 0x20) = uStack_100;
  *(undefined8 **)(puVar7 + 0x28) = puVar5;
  uStack_90 = 0x1019da114;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110427cd0;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar14);
  lVar3 = lStack_f8;
  func_0x000107c5f808(lStack_f8);
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar19 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar15 = uVar19;
  func_0x0001001c7f30();
  lVar16 = lStack_d0;
  puVar1 = puStack_e0;
  func_0x000107c60264(puStack_e0,&puStack_b8,uVar19,uVar15,lStack_d0,uVar14);
  func_0x000107c5ffb8(lVar3,puVar1,lVar13,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar13);
  (**(code **)(lStack_d8 + 8))(puVar1,lVar16);
  (**(code **)(lStack_f0 + 8))(lVar3,lStack_e8);
  puVar7 = puStack_88;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1019d7fe0; end: 1019d807f; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider deleteCustomization:completion:] */

void FUN_1019d7fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110427c68;
  func_0x000107c613fc(&UNK_110427c68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_1019d7ae0(param_3,param_2,0x1019da984,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1019d8080; end: 1019d80df; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider deleteAllLocalCustomizations:] */

/* WARNING: Possible PIC construction at 0x0001019d80c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d80c8) */

void FUN_1019d8080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_1019d9f30(0,0,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_3);
  return;
}



/* Entry: 1019d80e0; end: 1019d8757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d80e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  uStack_110 = param_1;
  uStack_108 = param_2;
  func_0x000107c5f7fc();
  lStack_e0 = *(long *)(lVar3 + -8);
  lStack_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar3 = 0;
  puStack_e8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_f8 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lVar16 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_100 = lVar16;
  func_0x000107c5f804();
  lStack_120 = *(long *)(lVar3 + -8);
  lStack_118 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lStack_128 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)&UNK_110427a10;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_110427a10,0x18,7);
  puVar4[2] = 0;
  func_0x000107c613fc(&UNK_110427a10,0x18,7);
  puVar5[2] = 0;
  puVar6 = puVar5;
  func_0x000107c60f34();
  func_0x000107c60f38();
  puVar7 = &UNK_110427a38;
  func_0x000107c613fc(&UNK_110427a38,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar4;
  *(undefined8 **)(puVar7 + 0x18) = puVar6;
  func_0x000107c61580(puVar4,2);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar17 = puVar6;
  func_0x0001000d224c(&puStack_c8);
  puVar12 = puStack_c8;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  if (puStack_c8 == (undefined *)0x0) {
    FUN_1019d90c0();
    puVar11 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,puVar17,0,0);
    puVar17[1] = 1;
    *puVar17 = 0;
    func_0x000107c61428(puVar4 + 2,auStack_80,1,0);
    uVar18 = puVar4[2];
    puVar4[2] = puVar11;
    func_0x000107c614b0(puVar11);
    func_0x000107c614ac(uVar18);
    func_0x000107c60f3c(puVar6);
    func_0x000107c614ac(puVar11);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar7);
  }
  else {
    puVar8 = &UNK_110427b28;
    func_0x000107c613fc(&UNK_110427b28,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_110427b50;
    func_0x000107c613fc(&UNK_110427b50,0x38,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = 0x1019da954;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined **)(puVar9 + 0x20) = puVar7;
    pcStack_a8 = FUN_1019d9140;
    puStack_c8 = puVar11;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_100f1c768;
    puStack_b0 = &UNK_110427b68;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar11 = puStack_a0;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar11);
    func_0x000107c440d8(puVar12);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(puVar12);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c60f38(puVar6);
  puVar7 = &UNK_110427a60;
  func_0x000107c613fc(&UNK_110427a60,0x20,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar5;
  *(undefined8 **)(puVar7 + 0x18) = puVar6;
  puVar17 = *(undefined8 **)(unaff_x20 + _DAT_112de73a0);
  func_0x000107c61174(puVar6);
  func_0x000107c61580(puVar5,2);
  func_0x000107c61174(puVar6);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar17 == (undefined8 *)0x0) {
    FUN_1019d90c0();
    puVar11 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,puVar17,0,0);
    puVar17[1] = 1;
    *puVar17 = 0;
    func_0x000107c61428(puVar5 + 2,auStack_98,1,0);
    uVar18 = puVar5[2];
    puVar5[2] = puVar11;
    func_0x000107c614b0(puVar11);
    func_0x000107c614ac(uVar18);
    func_0x000107c60f3c(puVar6);
    func_0x000107c614ac(puVar11);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar7);
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    puVar8 = PTR_PTR_1126a8390;
    func_0x000107c610f8(PTR_PTR_1126a8390);
    func_0x000107c453e4();
    puVar12 = &UNK_110427ad8;
    func_0x000107c613fc(&UNK_110427ad8,0x30,7);
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined8 *)(puVar12 + 0x18) = 0;
    *(undefined8 *)(puVar12 + 0x20) = 0x1019da958;
    *(undefined **)(puVar12 + 0x28) = puVar7;
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a8 = FUN_1019d911c;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = (undefined *)0x1019da974;
    puStack_b0 = &UNK_110427af0;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar12;
    func_0x000107c60bc4(ppuVar10);
    puVar12 = puStack_a0;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar12);
    func_0x000107c4169c(puVar17);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar6);
  FUN_1019da598(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar1 = lStack_118;
  lVar16 = lStack_120;
  lVar3 = lStack_128;
  (**(code **)(lStack_120 + 0x68))
            (lStack_128,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_118);
  lVar13 = lVar3;
  func_0x000107c5fff0(lVar3);
  (**(code **)(lVar16 + 8))(lVar3,lVar1);
  puVar7 = &UNK_110427a88;
  func_0x000107c613fc(&UNK_110427a88,0x30,7);
  uVar14 = uStack_108;
  *(undefined8 **)(puVar7 + 0x10) = puVar4;
  *(undefined8 *)(puVar7 + 0x18) = uStack_110;
  *(undefined8 *)(puVar7 + 0x20) = uStack_108;
  *(undefined8 **)(puVar7 + 0x28) = puVar5;
  pcStack_a8 = (code *)0x1019da924;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_110427aa0;
  ppuVar10 = &puStack_c8;
  puStack_c8 = puVar11;
  puStack_a0 = puVar7;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar14);
  lVar3 = lStack_100;
  func_0x000107c5f808(lStack_100);
  puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar18 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar15 = uVar18;
  func_0x0001001c7f30();
  lVar16 = lStack_d8;
  puVar2 = puStack_e8;
  func_0x000107c60264(puStack_e8,&puStack_d0,uVar18,uVar15,lStack_d8,uVar14);
  func_0x000107c5ffb8(lVar3,puVar2,lVar13,ppuVar10);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar13);
  (**(code **)(lStack_e0 + 8))(puVar2,lVar16);
  (**(code **)(lStack_f8 + 8))(lVar3,lStack_f0);
  puVar7 = puStack_a0;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 1019d8758; end: 1019d8843;  */

void FUN_1019d8758(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c614b0(param_1);
  func_0x000107c614ac(uVar1);
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 1019d8844; end: 1019d88b7; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider deleteAllCustomizations:] */

void FUN_1019d8844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1104279e8;
  func_0x000107c613fc(&UNK_1104279e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1019d80e0(FUN_1019d90b8,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1019d88b8; end: 1019d8b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d88b8(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  puVar1 = (undefined8 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      puVar4 = PTR_PTR_1126e06f8;
      func_0x000107c61168();
      func_0x000107c615f0(param_1);
      func_0x000107c43be4();
      func_0x000107c61180();
      puVar2 = puVar4;
      func_0x000107c411a0();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = puVar2;
      if (param_6 == 0) {
        func_0x000107c41694();
        func_0x000107c61180();
        puVar5 = puVar4;
        (**(code **)(puVar4 + 0x10))();
        func_0x000107c61180();
      }
      else {
        func_0x000107c416d0();
        func_0x000107c61180();
        uVar3 = param_5;
        func_0x000107c5fadc(param_5,param_6);
        puVar5 = puVar4;
        (**(code **)(puVar4 + 0x10))(puVar4,uVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
      }
      func_0x000107c60bd0(puVar4);
      puVar6 = puVar5;
      func_0x000107c5cb2c(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar4 = &UNK_110427ba0;
      func_0x000107c613fc(&UNK_110427ba0,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(long *)(puVar4 + 0x18) = param_6;
      *(code **)(puVar4 + 0x20) = param_3;
      *(undefined8 *)(puVar4 + 0x28) = param_4;
      uStack_88 = 0x1019d9144;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100b5fdac;
      puStack_90 = &UNK_110427bb8;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar7);
      puVar4 = puStack_80;
      func_0x000107c61434(param_6);
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar4);
      puVar4 = puVar6;
      func_0x000107c5c320(puVar6);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c3e924(puVar4);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      return;
    }
    func_0x000107c61170();
  }
  FUN_1019d90c0();
  puVar4 = &UNK_110427fd0;
  func_0x000107c613f8(&UNK_110427fd0,puVar1,0,0);
  puVar1[1] = 1;
  *puVar1 = 0;
  (*param_3)();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 1019d8b30; end: 1019d8bab;  */

void FUN_1019d8b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  
  func_0x000107c3ebcc();
  func_0x000107c3ebcc();
  if (((ulong)param_1 & 1) == 0) {
    FUN_1019d90c0();
    puVar1 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,param_1,0,0);
    param_1[1] = 1;
    *param_1 = 0;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  (*param_4)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 1019d8bac; end: 1019d8f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d8bac(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,long param_7)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*param_3)(0,0,0,0,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 == 0) {
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c411ac();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d8f44);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&lStack_a0,lVar3);
      func_0x000107c615e8(lVar3);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      uVar4 = 0;
      FUN_1019da598(0,0x112de74a8,&PTR_PTR_1126bbc38);
      plVar10 = &lStack_a0;
      plVar9 = &lStack_80;
      func_0x000107c6147c(plVar10,plVar9,PTR___sypN_11034f1a8 + 8,uVar4,6);
      lVar3 = lStack_a0;
      if (((ulong)plVar10 & 1) != 0) {
        lVar5 = lStack_a0;
        func_0x000107c41188();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d8f48);
          (*pcVar1)();
        }
        lVar6 = lVar5;
        func_0x000107c5c194();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          lVar5 = lVar6;
          func_0x000107c5faec();
          plVar10 = plVar9;
          func_0x000107c61170(lVar6);
          lVar6 = lVar3;
          FUN_1019da26c();
          lVar7 = lVar3;
          func_0x000107c4f1b8();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar12 = 0;
            plVar10 = (long *)0x0;
          }
          else {
            lVar12 = lVar7;
            func_0x000107c5faec();
            func_0x000107c61170(lVar7);
          }
          lVar7 = lVar3;
          func_0x000107c411a8();
          iVar2 = (int)lVar7;
          func_0x0001019d9098();
          func_0x000107c613fc();
          *(long *)(lVar7 + 0x10) = lVar5;
          *(long **)(lVar7 + 0x18) = plVar9;
          *(long *)(lVar7 + 0x20) = lVar12;
          *(long **)(lVar7 + 0x28) = plVar10;
          *(long *)(lVar7 + 0x30) = (long)iVar2;
          *(long *)(lVar7 + 0x38) = lVar6;
          plVar10 = &lStack_80;
          func_0x000107c61428(param_7 + 0x10,plVar10,0,0);
          param_7 = param_7 + 0x10;
          func_0x000107c61618();
          if (param_7 == 0) {
            func_0x000107c61434(lVar6);
            func_0x000107c61434(plVar9);
          }
          else {
            uVar4 = *(undefined8 *)(param_7 + _DAT_112de73b8);
            func_0x000107c61434(lVar6);
            func_0x000107c61434(plVar9);
            func_0x000107c61174(uVar4);
            func_0x000107c61170(param_7);
            func_0x000107c5fadc(param_5,param_6);
            func_0x000107c56bcc(uVar4);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(param_5);
            plVar10 = param_6;
          }
          lVar12 = lVar3;
          func_0x000107c4f1b8();
          func_0x000107c61180();
          if (lVar12 == 0) {
            lVar11 = 0;
            plVar10 = (long *)0x0;
          }
          else {
            lVar11 = lVar12;
            func_0x000107c5faec();
            func_0x000107c61170(lVar12);
          }
          lVar12 = lVar3;
          func_0x000107c411a8(lVar3);
          lVar8 = lVar6;
          FUN_1019d96dc(lVar6);
          func_0x000107c6142c(lVar6);
          (*param_3)(lVar5,plVar9,lVar11,plVar10,(long)(int)lVar12,lVar8,0);
          func_0x000107c61170(lVar3);
          func_0x000107c61574(lVar7);
          func_0x000107c6142c(plVar9);
          func_0x000107c6142c(lVar8);
          func_0x000107c6142c(plVar10);
          return;
        }
        func_0x000107c61170(lVar3);
      }
      goto LAB_1019d8d80;
    }
  }
  FUN_1019da22c(&lStack_80,0x112d387f8,&UNK_10d902650);
LAB_1019d8d80:
  (*param_3)(0,0,0,0,0,0,0);
  return;
}



/* Entry: 1019d8f48; end: 1019d8fbf;  */

/* WARNING: Possible PIC construction at 0x0001019d8fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d8fa8) */

void FUN_1019d8f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1019d8fc0; end: 1019d901f; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider init] */

void FUN_1019d8fc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationDataServicesImpl.InLensCreationDataProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d8fec);
  (*pcVar1)();
}



/* Entry: 1019d9020; end: 1019d9077; -[_TtC32SCInLensCreationDataServicesImpl26InLensCreationDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019d903c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d905c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d9040) */
/* WARNING: Removing unreachable block (ram,0x0001019d9060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d9020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de73a0));
  return;
}



/* Entry: 1019d9078; end: 1019d90b7;  */

void FUN_1019d9078(void)

{
  func_0x000107c61168(&PTR_PTR_1127efc30);
  return;
}



/* Entry: 1019d90b8; end: 1019d90bf;  */

void FUN_1019d90b8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019d90c0; end: 1019d90ff;  */

void FUN_1019d90c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de74a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b230c;
  func_0x000107c61520(&UNK_10d9b230c,&UNK_110427fd0);
  puRam0000000112de74a0 = puVar1;
  return;
}



/* Entry: 1019d9100; end: 1019d911b;  */

void FUN_1019d9100(long param_1,long param_2)

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



/* Entry: 1019d911c; end: 1019d913f;  */

void FUN_1019d911c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(param_2);
  return;
}



/* Entry: 1019d9140; end: 1019d914f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d9140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  puVar5 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      puVar8 = PTR_PTR_1126e06f8;
      func_0x000107c61168();
      func_0x000107c615f0(param_1);
      func_0x000107c43be4();
      func_0x000107c61180();
      puVar6 = puVar8;
      func_0x000107c411a0();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar8 = puVar6;
      if (lVar12 == 0) {
        func_0x000107c41694();
        func_0x000107c61180();
        puVar9 = puVar8;
        (**(code **)(puVar8 + 0x10))();
        func_0x000107c61180();
      }
      else {
        func_0x000107c416d0();
        func_0x000107c61180();
        uVar7 = uVar4;
        func_0x000107c5fadc(uVar4,lVar12);
        puVar9 = puVar8;
        (**(code **)(puVar8 + 0x10))(puVar8,uVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
      }
      func_0x000107c60bd0(puVar8);
      puVar10 = puVar9;
      func_0x000107c5cb2c(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar8 = &UNK_110427ba0;
      func_0x000107c613fc(&UNK_110427ba0,0x30,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar4;
      *(long *)(puVar8 + 0x18) = lVar12;
      *(code **)(puVar8 + 0x20) = pcVar3;
      *(undefined8 *)(puVar8 + 0x28) = uVar2;
      uStack_88 = 0x1019d9144;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100b5fdac;
      puStack_90 = &UNK_110427bb8;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_80;
      func_0x000107c61434(lVar12);
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar8);
      puVar8 = puVar10;
      func_0x000107c5c320(puVar10);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c3e924(puVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      return;
    }
    func_0x000107c61170();
  }
  FUN_1019d90c0();
  puVar8 = &UNK_110427fd0;
  func_0x000107c613f8(&UNK_110427fd0,puVar5,0,0);
  puVar5[1] = 1;
  *puVar5 = 0;
  (*pcVar3)();
  func_0x000107c614ac(puVar8);
  return;
}



/* Entry: 1019d9150; end: 1019d91ab;  */

void FUN_1019d9150(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001043fc638();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112de74b8;
  plVar5 = (long *)&UNK_10d9b22f0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1019d91ac; end: 1019d922b;  */

undefined * FUN_1019d91ac(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1019d9150();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1019d922c; end: 1019d944b;  */

ulong FUN_1019d922c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d9354);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1019d91ac(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d9350);
      (*pcVar1)();
    }
    func_0x0001019d9354(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1019d944c; end: 1019d960f;  */

ulong FUN_1019d944c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9530);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9534);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6360;
    func_0x000107c61168(PTR_PTR_1126a6360);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a6360;
    func_0x000107c61168(PTR_PTR_1126a6360);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1019da598(0,0x112d5ced8,&PTR_PTR_1126a6360);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9610);
  (*pcVar2)();
}



/* Entry: 1019d9610; end: 1019d96db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d9610(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112de73b8;
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112de73a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112de73a8) = param_2;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112de73b0) = puVar2;
  func_0x000107c539f8(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019d96dc; end: 1019d989b;  */

undefined * FUN_1019d96dc(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar9 == 0) {
      return (undefined *)0x0;
    }
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    uVar10 = uVar9;
    func_0x000107c60480();
    if (uVar10 == 0) {
      return (undefined *)0x0;
    }
    func_0x000107c60480();
    if (uVar9 == 0) {
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101395f90(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d989c);
    (*pcVar2)();
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    puVar11 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar6 = *puVar11;
      func_0x000107c61174();
      uVar7 = uVar6;
      func_0x0001043fbdc8();
      uVar8 = uVar7;
      func_0x000100215634();
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar7);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        func_0x000101395f90(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar1 + uVar10 * 8 + 0x20) = uVar8;
      uVar9 = uVar9 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar9 != 0);
  }
  else {
    uVar10 = 0;
    do {
      uVar3 = uVar10;
      func_0x0001010e6634(uVar10,param_1);
      uVar4 = uVar3;
      func_0x0001043fbdc8();
      uVar5 = uVar4;
      func_0x000100215634();
      func_0x000107c615e8(uVar3);
      func_0x000107c6142c(uVar4);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000101395f90(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar1 + uVar3 * 8 + 0x20) = uVar5;
    } while (uVar9 != uVar10);
  }
  return puVar1;
}



/* Entry: 1019d989c; end: 1019d9a07;  */

/* WARNING: Possible PIC construction at 0x0001019d998c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019d99b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019d9990) */
/* WARNING: Removing unreachable block (ram,0x0001019d99b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d989c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_110427dd0;
  func_0x000107c613fc(&UNK_110427dd0,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  lVar3 = *(long *)(param_1 + _DAT_112de73a0);
  func_0x000107c60bc4(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    (**(code **)(param_2 + 0x10))(param_2,0);
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126a8398);
    func_0x000107c453e4();
    puVar2 = &UNK_110427df8;
    func_0x000107c613fc(&UNK_110427df8,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_1019da1e4;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    uStack_50 = 0x1019da1ec;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1019da968;
    puStack_58 = &UNK_110427e10;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1019d9a08; end: 1019d9f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d9a08(byte *param_1,byte *param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  byte *pbStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppbVar6 = &pbStack_90;
  puVar3 = &UNK_110427d58;
  func_0x000107c613fc(&UNK_110427d58,0x20,7);
  *(long *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  puVar13 = *(undefined8 **)(param_3 + _DAT_112de73a0);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar13 == (undefined8 *)0x0) {
    FUN_1019d90c0();
    puVar4 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,puVar13,0,0);
    puVar13[1] = 1;
    *puVar13 = 0;
    func_0x000107c61428(param_4 + 0x10,&pbStack_90,1,0);
    uVar14 = *(undefined8 *)(param_4 + 0x10);
    *(undefined **)(param_4 + 0x10) = puVar4;
    func_0x000107c614b0(puVar4);
    func_0x000107c614ac(uVar14);
    func_0x000107c60f3c(param_5);
    func_0x000107c614ac(puVar4);
    func_0x000107c61574(puVar3);
    return;
  }
  puVar4 = PTR_PTR_1126a8390;
  func_0x000107c610f8(PTR_PTR_1126a8390);
  func_0x000107c453e4();
  if (param_2 == (byte *)0x0) {
LAB_1019d9e00:
    puVar5 = &UNK_110427d80;
    func_0x000107c613fc(&UNK_110427d80,0x30,7);
    *(byte **)(puVar5 + 0x10) = param_1;
    *(byte **)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = 0x1019da1a0;
    *(undefined **)(puVar5 + 0x28) = puVar3;
    uStack_70 = 0x1019da950;
    pbStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1019da974;
    puStack_78 = &UNK_110427d98;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&pbStack_90);
    puVar5 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4169c(puVar13);
    func_0x000107c60bd0(ppbVar6);
  }
  else {
    pbVar8 = (byte *)((ulong)param_1 & 0xffffffffffff);
    pbVar9 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
    pbVar10 = pbVar8;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pbVar10 = pbVar9;
    }
    pbVar7 = param_2;
    if (pbVar10 == (byte *)0x0) {
      func_0x000107c61434();
    }
    else {
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        if (((ulong)param_2 >> 0x3d & 1) == 0) {
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pbVar10 = param_1;
            pbVar8 = param_2;
            func_0x000107c60358();
          }
          else {
            pbVar10 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar10 == 0x2b) {
            if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9f2c);
              (*pcVar2)();
            }
            pbVar8 = pbVar8 + -1;
            if (pbVar8 == (byte *)0x0) goto LAB_1019d9d6c;
            lVar15 = 0;
            do {
              pbVar10 = pbVar10 + 1;
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar15 = lVar12 + uVar1,
                    SCARRY8(lVar12,uVar1))) goto LAB_1019d9d6c;
              uVar16 = 0;
              pbVar8 = pbVar8 + -1;
            } while (pbVar8 != (byte *)0x0);
          }
          else if (*pbVar10 == 0x2d) {
            if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9f24);
              (*pcVar2)();
            }
            pbVar8 = pbVar8 + -1;
            if (pbVar8 == (byte *)0x0) {
LAB_1019d9d6c:
              uVar16 = 1;
            }
            else {
              lVar15 = 0;
              do {
                pbVar10 = pbVar10 + 1;
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f
                    )) || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar15 = lVar12 - uVar1,
                          SBORROW8(lVar12,uVar1))) goto LAB_1019d9d6c;
                uVar16 = 0;
                pbVar8 = pbVar8 + -1;
              } while (pbVar8 != (byte *)0x0);
            }
          }
          else {
            if (pbVar8 == (byte *)0x0) goto LAB_1019d9d6c;
            lVar15 = 0;
            if (pbVar10 == (byte *)0x0) {
              uVar16 = 0;
            }
            else {
              do {
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f
                    )) || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar15 = lVar12 + uVar1,
                          SCARRY8(lVar12,uVar1))) goto LAB_1019d9d6c;
                uVar16 = 0;
                pbVar8 = pbVar8 + -1;
                pbVar10 = pbVar10 + 1;
              } while (pbVar8 != (byte *)0x0);
            }
          }
        }
        else {
          pbStack_90 = param_1;
          uStack_88 = (ulong)param_2 & 0xffffffffffffff;
          uVar16 = (uint)param_1 & 0xff;
          if (uVar16 == 0x2b) {
            if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9f30);
              (*pcVar2)();
            }
            pbVar9 = pbVar9 + -1;
            if (pbVar9 == (byte *)0x0) goto LAB_1019d9d6c;
            lVar15 = 0;
            pbVar10 = (byte *)((ulong)&pbStack_90 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar15 = lVar12 + uVar1,
                    SCARRY8(lVar12,uVar1))) goto LAB_1019d9d6c;
              uVar16 = 0;
              pbVar9 = pbVar9 + -1;
              pbVar10 = pbVar10 + 1;
            } while (pbVar9 != (byte *)0x0);
          }
          else if (uVar16 == 0x2d) {
            if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019d9f28);
              (*pcVar2)();
            }
            pbVar9 = pbVar9 + -1;
            if (pbVar9 == (byte *)0x0) goto LAB_1019d9d6c;
            lVar15 = 0;
            pbVar10 = (byte *)((ulong)&pbStack_90 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), lVar15 = lVar12 - uVar1,
                    SBORROW8(lVar12,uVar1))) goto LAB_1019d9d6c;
              uVar16 = 0;
              pbVar9 = pbVar9 + -1;
              pbVar10 = pbVar10 + 1;
            } while (pbVar9 != (byte *)0x0);
          }
          else {
            if (pbVar9 == (byte *)0x0) goto LAB_1019d9d6c;
            lVar15 = 0;
            ppbVar11 = &pbStack_90;
            do {
              if (((9 < *(byte *)ppbVar11 - 0x30) ||
                  (lVar12 = lVar15 * 10, SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar12 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*(byte *)ppbVar11 - 0x30), lVar15 = lVar12 + uVar1,
                    SCARRY8(lVar12,uVar1))) goto LAB_1019d9d6c;
              uVar16 = 0;
              pbVar9 = pbVar9 + -1;
              ppbVar11 = (byte **)((long)ppbVar11 + 1);
            } while (pbVar9 != (byte *)0x0);
          }
        }
        func_0x000107c61434();
      }
      else {
        func_0x000107c61434(param_2);
        pbVar7 = param_1;
        pbVar10 = param_2;
        func_0x000100fb6b80(param_1,param_2,10);
        uVar16 = (uint)pbVar10;
      }
      if ((uVar16 & 0xff) != 1) {
        func_0x000107c6142c(param_2);
        func_0x000107c55d70(puVar4);
        goto LAB_1019d9e00;
      }
    }
    FUN_1019d90c0();
    puVar5 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,pbVar7,0,0);
    *(byte **)pbVar7 = param_1;
    *(byte **)(pbVar7 + 8) = param_2;
    func_0x000107c61428(param_4 + 0x10,&pbStack_90,1,0);
    uVar14 = *(undefined8 *)(param_4 + 0x10);
    *(undefined **)(param_4 + 0x10) = puVar5;
    func_0x000107c614b0(puVar5);
    func_0x000107c614ac(uVar14);
    func_0x000107c60f3c(param_5);
    func_0x000107c614ac(puVar5);
  }
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1019d9f30; end: 1019da0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019d9f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = &UNK_110427bf0;
  func_0x000107c613fc(&UNK_110427bf0,0x18,7);
  *(undefined8 **)(puVar1 + 0x10) = param_4;
  puVar2 = param_4;
  func_0x000107c60bc4();
  func_0x0001000d224c(&puStack_70);
  puVar5 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    FUN_1019d90c0();
    puVar5 = &UNK_110427fd0;
    func_0x000107c613f8(&UNK_110427fd0,puVar2,0,0);
    puVar2[1] = 1;
    *puVar2 = 0;
    puVar6 = puVar5;
    func_0x000107c5ed2c();
    (*(code *)param_4[2])(param_4,puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c614ac(puVar5);
    func_0x000107c61574(puVar1);
  }
  else {
    puVar6 = &UNK_110427b28;
    func_0x000107c613fc(&UNK_110427b28,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_3);
    puVar3 = &UNK_110427c18;
    func_0x000107c613fc(&UNK_110427c18,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar6;
    *(undefined8 *)(puVar3 + 0x18) = 0x1019da980;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(undefined8 *)(puVar3 + 0x30) = param_2;
    uStack_50 = 0x1019da960;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f1c768;
    puStack_58 = &UNK_110427c30;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar6);
    func_0x000107c440d8(puVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(puVar5);
  }
  return;
}



/* Entry: 1019da0e0; end: 1019da163;  */

void FUN_1019da0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019da164; end: 1019da173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019da164(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  puVar5 = (undefined8 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar5 != (undefined8 *)0x0) {
    if (param_1 != 0) {
      puVar8 = PTR_PTR_1126e06f8;
      func_0x000107c61168();
      func_0x000107c615f0(param_1);
      func_0x000107c43be4();
      func_0x000107c61180();
      puVar6 = puVar8;
      func_0x000107c411a0();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar8 = puVar6;
      if (lVar12 == 0) {
        func_0x000107c41694();
        func_0x000107c61180();
        puVar9 = puVar8;
        (**(code **)(puVar8 + 0x10))();
        func_0x000107c61180();
      }
      else {
        func_0x000107c416d0();
        func_0x000107c61180();
        uVar7 = uVar4;
        func_0x000107c5fadc(uVar4,lVar12);
        puVar9 = puVar8;
        (**(code **)(puVar8 + 0x10))(puVar8,uVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
      }
      func_0x000107c60bd0(puVar8);
      puVar10 = puVar9;
      func_0x000107c5cb2c(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar8 = &UNK_110427ba0;
      func_0x000107c613fc(&UNK_110427ba0,0x30,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar4;
      *(long *)(puVar8 + 0x18) = lVar12;
      *(code **)(puVar8 + 0x20) = pcVar3;
      *(undefined8 *)(puVar8 + 0x28) = uVar2;
      uStack_88 = 0x1019d9144;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100b5fdac;
      puStack_90 = &UNK_110427bb8;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar11);
      puVar8 = puStack_80;
      func_0x000107c61434(lVar12);
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar8);
      puVar8 = puVar10;
      func_0x000107c5c320(puVar10);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c3e924(puVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      return;
    }
    func_0x000107c61170();
  }
  FUN_1019d90c0();
  puVar8 = &UNK_110427fd0;
  func_0x000107c613f8(&UNK_110427fd0,puVar5,0,0);
  puVar5[1] = 1;
  *puVar5 = 0;
  (*pcVar3)();
  func_0x000107c614ac(puVar8);
  return;
}



/* Entry: 1019da174; end: 1019da1e3;  */

void FUN_1019da174(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019da1e4; end: 1019da1fb;  */

void FUN_1019da1e4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019da1fc; end: 1019da21b;  */

void FUN_1019da1fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019da21c; end: 1019da22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019da21c(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x20;
  long *plVar13;
  long lVar14;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar12 = *(long **)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*pcVar1)(0,0,0,0,0,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  if (param_1 == 0) {
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c411ac();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d8f44);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      uStack_98 = 0;
      lStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c60234(&lStack_a0,lVar3);
      func_0x000107c615e8(lVar3);
    }
    uStack_78 = uStack_98;
    lStack_80 = lStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      uVar4 = 0;
      FUN_1019da598(0,0x112de74a8,&PTR_PTR_1126bbc38);
      plVar13 = &lStack_a0;
      plVar11 = &lStack_80;
      func_0x000107c6147c(plVar13,plVar11,PTR___sypN_11034f1a8 + 8,uVar4,6);
      lVar3 = lStack_a0;
      if (((ulong)plVar13 & 1) != 0) {
        lVar5 = lStack_a0;
        func_0x000107c41188();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019d8f48);
          (*pcVar1)();
        }
        lVar6 = lVar5;
        func_0x000107c5c194();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          lVar5 = lVar6;
          func_0x000107c5faec();
          plVar13 = plVar11;
          func_0x000107c61170(lVar6);
          lVar6 = lVar3;
          FUN_1019da26c();
          lVar7 = lVar3;
          func_0x000107c4f1b8();
          func_0x000107c61180();
          if (lVar7 == 0) {
            lVar14 = 0;
            plVar13 = (long *)0x0;
          }
          else {
            lVar14 = lVar7;
            func_0x000107c5faec();
            func_0x000107c61170(lVar7);
          }
          lVar7 = lVar3;
          func_0x000107c411a8();
          iVar2 = (int)lVar7;
          func_0x0001019d9098();
          func_0x000107c613fc();
          *(long *)(lVar7 + 0x10) = lVar5;
          *(long **)(lVar7 + 0x18) = plVar11;
          *(long *)(lVar7 + 0x20) = lVar14;
          *(long **)(lVar7 + 0x28) = plVar13;
          *(long *)(lVar7 + 0x30) = (long)iVar2;
          *(long *)(lVar7 + 0x38) = lVar6;
          plVar13 = &lStack_80;
          func_0x000107c61428(lVar8 + 0x10,plVar13,0,0);
          lVar8 = lVar8 + 0x10;
          func_0x000107c61618();
          if (lVar8 == 0) {
            func_0x000107c61434(lVar6);
            func_0x000107c61434(plVar11);
          }
          else {
            uVar4 = *(undefined8 *)(lVar8 + _DAT_112de73b8);
            func_0x000107c61434(lVar6);
            func_0x000107c61434(plVar11);
            func_0x000107c61174(uVar4);
            func_0x000107c61170(lVar8);
            func_0x000107c5fadc(uVar9,plVar12);
            func_0x000107c56bcc(uVar4);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar9);
            plVar13 = plVar12;
          }
          lVar8 = lVar3;
          func_0x000107c4f1b8();
          func_0x000107c61180();
          if (lVar8 == 0) {
            lVar14 = 0;
            plVar13 = (long *)0x0;
          }
          else {
            lVar14 = lVar8;
            func_0x000107c5faec();
            func_0x000107c61170(lVar8);
          }
          lVar8 = lVar3;
          func_0x000107c411a8(lVar3);
          lVar10 = lVar6;
          FUN_1019d96dc(lVar6);
          func_0x000107c6142c(lVar6);
          (*pcVar1)(lVar5,plVar11,lVar14,plVar13,(long)(int)lVar8,lVar10,0);
          func_0x000107c61170(lVar3);
          func_0x000107c61574(lVar7);
          func_0x000107c6142c(plVar11);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(plVar13);
          return;
        }
        func_0x000107c61170(lVar3);
      }
      goto LAB_1019d8d80;
    }
  }
  FUN_1019da22c(&lStack_80,0x112d387f8,&UNK_10d902650);
LAB_1019d8d80:
  (*pcVar1)(0,0,0,0,0,0,0);
  return;
}



/* Entry: 1019da22c; end: 1019da26b;  */

undefined8 FUN_1019da22c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019da26c; end: 1019da597;  */

undefined * FUN_1019da26c(undefined *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long extraout_x8;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4cd48();
  func_0x000107c61180();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000107c40808();
    if ((long)puVar3 < 1) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_1);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar3 = param_1;
      func_0x000107c40808();
      func_0x000107c61170(param_1);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar4 = puVar5;
        }
        func_0x000107c60480();
      }
      if ((long)puVar4 <= (long)puVar3) {
        puVar4 = puVar3;
      }
      puVar5 = (undefined *)0x0;
      lStack_a0 = lVar16;
      lStack_98 = lVar2;
      FUN_1019d922c(0,puVar4,0,PTR___swiftEmptyArrayStorage_11034f1c8);
      puStack_90 = puVar5;
      func_0x000107c600f4(lVar15);
      func_0x000107c5ed4c(auStack_80);
      if (lStack_68 != 0) {
        uVar6 = 0;
        FUN_1019da598(0,0x112de74b0,&PTR_PTR_1126a83a8);
        puVar5 = PTR___sypN_11034f1a8;
        do {
          puVar8 = &uStack_88;
          puVar7 = auStack_80;
          func_0x000107c6147c(puVar8,puVar7,puVar5 + 8,uVar6,6);
          uVar1 = uStack_88;
          if (((ulong)puVar8 & 1) != 0) {
            uVar9 = uStack_88;
            func_0x000107c5d984();
            func_0x000107c61180();
            if (uVar9 != 0) {
              uVar10 = uVar9;
              func_0x000107c5faec();
              puVar13 = puVar7;
              func_0x000107c61170(uVar9);
              uVar9 = uVar1;
              func_0x000107c5db08();
              func_0x000107c61180();
              if (uVar9 != 0) {
                uVar14 = uVar9;
                func_0x000107c5faec();
                func_0x000107c61170(uVar9);
                uVar9 = uVar10 & 0xffffffffffff;
                if (((ulong)puVar7 & 0x2000000000000000) != 0) {
                  uVar9 = (ulong)puVar7 >> 0x38 & 0xf;
                }
                if (uVar9 != 0) {
                  uVar9 = uVar14 & 0xffffffffffff;
                  if (((ulong)puVar13 & 0x2000000000000000) != 0) {
                    uVar9 = (ulong)puVar13 >> 0x38 & 0xf;
                  }
                  if (uVar9 != 0) {
                    uVar11 = 0;
                    func_0x0001043fc638(0);
                    func_0x000107c610f8();
                    func_0x0001043fbb78(uVar10,puVar7,uVar14,puVar13,uVar11);
                    puVar3 = puStack_90;
                    puVar4 = puStack_90;
                    if ((ulong)puStack_90 >> 0x3e != 0) {
                      puVar12 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puStack_90) {
                        puVar12 = puStack_90;
                      }
                      func_0x000107c60480(puVar12);
                      puVar4 = (undefined *)0x0;
                      FUN_1019d922c(0,puVar12 + 1,1,puVar3);
                    }
                    uVar14 = (ulong)puVar4 & 0xffffffffffffff8;
                    uVar9 = *(ulong *)(uVar14 + 0x10);
                    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar9) {
                      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
                      FUN_1019d922c(puVar4,uVar9 + 1,1);
                      uVar14 = (ulong)puVar4 & 0xffffffffffffff8;
                    }
                    puStack_90 = puVar4;
                    *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
                    *(ulong *)(uVar14 + uVar9 * 8 + 0x20) = uVar10;
                    goto LAB_1019da394;
                  }
                }
                func_0x000107c6142c(puVar7);
                puVar7 = puVar13;
              }
              func_0x000107c6142c(puVar7);
            }
LAB_1019da394:
            func_0x000107c61170(uVar1);
          }
          func_0x000107c5ed4c(auStack_80);
        } while (lStack_68 != 0);
      }
      (**(code **)(lStack_a0 + 8))(lVar15,lStack_98);
      func_0x000107c61170(param_1);
      puVar5 = puStack_90;
    }
  }
  return puVar5;
}



/* Entry: 1019da598; end: 1019da5d7;  */

void FUN_1019da598(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019da5d8; end: 1019da60f;  */

void FUN_1019da5d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001019d7028(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1019da610; end: 1019da637;  */

void FUN_1019da610(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1019da638; end: 1019da7e3;  */

undefined8 * FUN_1019da638(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
    *param_1 = *param_2;
    param_1[1] = uVar2;
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  return param_1;
}



/* Entry: 1019da7e4; end: 1019da98b;  */

int FUN_1019da7e4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar3 = (int)uVar4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  iVar2 = 0;
  if (1 < iVar3 + 1U) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 1019da98c; end: 1019da9df;  */

void FUN_1019da98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1019da9e0; end: 1019da9f7;  */

void FUN_1019da9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1019db624();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1019da9f8; end: 1019daae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019da9f8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar4 = &lStack_40;
  if (param_2 == 0) {
    FUN_1019db858();
    func_0x000107c610f8();
    ppuVar5 = &PTR_PTR_1126ae568;
    lVar2 = param_2;
  }
  else {
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7730);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    lVar2 = 0;
    FUN_1019db858();
    func_0x000107c610f8();
    ppuVar5 = &PTR_PTR_1126ae568;
    if ((int)param_2 == 0) {
      ppuVar5 = &PTR_PTR_1126ae820;
    }
  }
  puVar3 = *ppuVar5;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + _DAT_112de7690) = puVar3;
  uVar1 = 0;
  FUN_1019db858();
  lStack_40 = lVar2;
  uStack_38 = uVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1019daae4; end: 1019daaf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019daae4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  if (lVar5 == 0) {
    FUN_1019db858();
    func_0x000107c610f8();
    ppuVar6 = &PTR_PTR_1126ae568;
    lVar2 = lVar5;
  }
  else {
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7730);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    lVar2 = 0;
    FUN_1019db858();
    func_0x000107c610f8();
    ppuVar6 = &PTR_PTR_1126ae568;
    if ((int)lVar5 == 0) {
      ppuVar6 = &PTR_PTR_1126ae820;
    }
  }
  puVar3 = *ppuVar6;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + _DAT_112de7690) = puVar3;
  uVar1 = 0;
  FUN_1019db858();
  lStack_40 = lVar2;
  uStack_38 = uVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1019daaf8; end: 1019dab2b;  */

void FUN_1019daaf8(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1019dab2c; end: 1019dabab;  */

void FUN_1019dab2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1019d9078(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(param_3);
  uVar1 = param_2;
  FUN_1019d9610(param_2,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019dabac; end: 1019dad5b;  */

void FUN_1019dabac(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      uVar3 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010efc7750);
      lVar1 = param_2;
      func_0x000107c4e60c(param_2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      puVar2 = PTR_PTR_1126ae728;
      func_0x000107c61168(PTR_PTR_1126ae728);
      func_0x000107c3edf4();
      func_0x000107c61180();
      uVar3 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
      puVar5 = puVar2;
      func_0x000107c545b8(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar5);
      uVar3 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010efc7780);
      lVar4 = param_3;
      func_0x000107c40a28(param_3);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      puVar5 = PTR_PTR_1126a83b8;
      func_0x000107c610f8();
      func_0x000107c49088();
      func_0x000107c615e8(param_2);
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar4);
      goto LAB_1019dad40;
    }
    func_0x000107c615e8(param_2);
  }
  puVar5 = (undefined *)0x0;
LAB_1019dad40:
  *param_1 = puVar5;
  return;
}



/* Entry: 1019dad5c; end: 1019dad87;  */

/* WARNING: Possible PIC construction at 0x0001019dad68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dad78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019dad6c) */
/* WARNING: Removing unreachable block (ram,0x0001019dad7c) */

void FUN_1019dad5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019dad88; end: 1019dae07;  */

void FUN_1019dad88(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019dae08; end: 1019dae37;  */

void FUN_1019dae08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar5 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010efc7750);
      lVar3 = lVar1;
      func_0x000107c4e60c(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      puVar4 = PTR_PTR_1126ae728;
      func_0x000107c61168(PTR_PTR_1126ae728);
      func_0x000107c3edf4();
      func_0x000107c61180();
      uVar5 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
      puVar7 = puVar4;
      func_0x000107c545b8(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar7);
      uVar5 = 0xd000000000000015;
      func_0x000107c5fadc(0xd000000000000015,0x800000010efc7780);
      lVar6 = lVar2;
      func_0x000107c40a28(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      puVar7 = PTR_PTR_1126a83b8;
      func_0x000107c610f8();
      func_0x000107c49088();
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar6);
      goto LAB_1019dad40;
    }
    func_0x000107c615e8(lVar1);
  }
  puVar7 = (undefined *)0x0;
LAB_1019dad40:
  *param_1 = puVar7;
  return;
}



/* Entry: 1019dae38; end: 1019dae47; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider latestCustomizationChangedEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dae38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7628));
  return;
}



/* Entry: 1019dae48; end: 1019dae7b; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider setLatestCustomizationChangedEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dae48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112de7628);
  *(undefined8 *)(param_1 + _DAT_112de7628) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1019dae7c; end: 1019dae8b; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider customizationChangedAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dae7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7610));
  return;
}



/* Entry: 1019dae8c; end: 1019dae9b; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider showKeyboardAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dae8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7618));
  return;
}



/* Entry: 1019dae9c; end: 1019daeab; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider triggerRandomizationAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dae9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7620));
  return;
}



/* Entry: 1019daeac; end: 1019db09b;  */

/* WARNING: Possible PIC construction at 0x0001019daffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db054) */
/* WARNING: Removing unreachable block (ram,0x0001019db030) */
/* WARNING: Removing unreachable block (ram,0x0001019db020) */
/* WARNING: Removing unreachable block (ram,0x0001019db010) */
/* WARNING: Removing unreachable block (ram,0x0001019db000) */
/* WARNING: Removing unreachable block (ram,0x0001019db070) */

void FUN_1019daeac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10,undefined4 param_11,undefined4 param_12,long param_13,long param_14
                  )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_1019db364();
  lVar2 = param_14;
  if (param_14 == 0) {
    func_0x000107c3dc80();
    func_0x000107c61180();
    lVar2 = lVar1;
  }
  func_0x000107c61174(param_14);
  func_0x000107c61174();
  func_0x000107c5fadc(param_1,param_2);
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
  }
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
  }
  if (param_8 != 0) {
    func_0x000107c5fadc(param_7,param_8);
  }
  if (param_10 != 0) {
    func_0x000107c5fadc(param_9);
  }
  if (param_13 != 0) {
    uVar3 = 0;
    func_0x0001019db644(0);
    func_0x000107c5fc48(param_13,uVar3);
  }
  func_0x000107c610f8(PTR_PTR_1126a83c0);
  func_0x000107c45a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1019db09c; end: 1019db257; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider customizationChangedWithBody:customizationId:previewText:promptSource:tabId:promptType:mentions:analyticsMetadata:] */

/* WARNING: Possible PIC construction at 0x0001019db210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db224) */
/* WARNING: Removing unreachable block (ram,0x0001019db214) */
/* WARNING: Removing unreachable block (ram,0x0001019db234) */

void FUN_1019db09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  func_0x000107c5faec();
  uVar6 = param_2;
  if (param_4 == 0) {
    uStack_88 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_88 = param_4;
    uStack_68 = uVar6;
  }
  if (param_5 == 0) {
    uStack_90 = 0;
    uVar4 = 0;
    param_5 = uStack_90;
  }
  else {
    func_0x000107c5faec();
    uVar4 = uVar6;
  }
  if (param_6 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar5 = uVar6;
  }
  lVar1 = param_7;
  func_0x000107c61174();
  lVar2 = param_9;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  if (lVar1 == 0) {
    param_7 = 0;
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  if (lVar2 == 0) {
    param_9 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001019db644(0);
    func_0x000107c5fc54(param_9,uVar3);
    func_0x000107c61170(lVar2);
  }
  FUN_1019daeac(param_3,param_2,uStack_88,uStack_68,param_5,uVar4,param_6,uVar5,param_7,uVar6,
                param_8,param_9,param_10);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019db258; end: 1019db2cb; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider clearText] */

/* WARNING: Possible PIC construction at 0x0001019db2a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db258(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112de7610);
  *(undefined **)(param_1 + _DAT_112de7610) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1019db2cc; end: 1019db2df; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider showKeyboardWithLensId:] */

/* WARNING: Possible PIC construction at 0x0001019db34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db2cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a83d8;
  func_0x000107c610f8(PTR_PTR_1126a83d8);
  func_0x000107c61174();
  func_0x000107c472d0(puVar1,param_2,param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112de7618),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019db2e0; end: 1019db2f3; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider triggerRandomizationWithLensId:] */

/* WARNING: Possible PIC construction at 0x0001019db34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a83d0;
  func_0x000107c610f8(PTR_PTR_1126a83d0);
  func_0x000107c61174();
  func_0x000107c472d0(puVar1,param_2,param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112de7620),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019db2f4; end: 1019db363;  */

/* WARNING: Possible PIC construction at 0x0001019db34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db350) */

void FUN_1019db2f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  func_0x000107c610f8(uVar1);
  func_0x000107c61174();
  func_0x000107c472d0(uVar1,param_2,param_3);
  func_0x000107c4d664(*(undefined8 *)(param_1 + *param_5),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1019db364; end: 1019db4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1019db364(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112de7628);
  if (uVar5 != 0) {
    uVar1 = uVar5;
    uVar4 = param_2;
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c3eb80();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (uVar3 == param_1 && uVar4 == param_2) {
      func_0x000107c6142c(uVar4);
    }
    else {
      uVar2 = uVar4;
      func_0x000107c605b8(uVar3,uVar4,param_1,param_2,0);
      func_0x000107c6142c(uVar4);
      if ((uVar3 & 1) == 0) {
        if (param_4 != 0) {
          uVar3 = param_3 & 0xffffffffffff;
          if ((param_4 & 0x2000000000000000) != 0) {
            uVar3 = param_4 >> 0x38 & 0xf;
          }
          if (uVar3 != 0) {
            uVar3 = uVar1;
            func_0x000107c41198();
            func_0x000107c61180();
            if (uVar3 != 0) {
              uVar4 = uVar3;
              func_0x000107c5faec();
              func_0x000107c61170(uVar3);
              uVar3 = uVar4 & 0xffffffffffff;
              if ((uVar2 & 0x2000000000000000) != 0) {
                uVar3 = uVar2 >> 0x38 & 0xf;
              }
              if (uVar3 == 0) {
                func_0x000107c6142c(uVar2);
              }
              else {
                if (uVar4 == param_3 && param_4 == uVar2) {
                  func_0x000107c6142c(uVar2);
                  return uVar5;
                }
                func_0x000107c605b8(uVar4,uVar2,param_3,param_4,0);
                func_0x000107c6142c(uVar2);
                if ((uVar4 & 1) != 0) {
                  return uVar5;
                }
              }
            }
          }
        }
        func_0x000107c61170(uVar1);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}



/* Entry: 1019db4e0; end: 1019db57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db4e0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112de7610;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112de7618;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112de7620;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112de7628) = 0;
  FUN_1019db624();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019db57c; end: 1019db59b; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider init] */

void FUN_1019db57c(void)

{
  FUN_1019db4e0();
  return;
}



/* Entry: 1019db59c; end: 1019db5cb;  */

void FUN_1019db59c(void)

{
  FUN_1019db624();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019db5cc; end: 1019db623; -[_TtC32SCInLensCreationDataServicesImpl33InLensCreationTextServiceProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019db5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db5ec) */
/* WARNING: Removing unreachable block (ram,0x0001019db60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7610));
  return;
}



/* Entry: 1019db624; end: 1019db687;  */

void FUN_1019db624(void)

{
  func_0x000107c61168(&PTR_PTR_1127efd08);
  return;
}



/* Entry: 1019db688; end: 1019db697; -[_TtC32SCInLensCreationDataServicesImpl32InLensCreationVisibilityProvider ctaButtonVisibilityAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7660));
  return;
}



/* Entry: 1019db698; end: 1019db713; -[_TtC32SCInLensCreationDataServicesImpl32InLensCreationVisibilityProvider setCTAButtonVisibilityWithLensId:shouldHide:] */

/* WARNING: Possible PIC construction at 0x0001019db6fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a83e0;
  func_0x000107c610f8(PTR_PTR_1126a83e0);
  func_0x000107c61174();
  func_0x000107c4731c(puVar1,param_2,param_3,param_4);
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112de7660),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1019db714; end: 1019db76b; -[_TtC32SCInLensCreationDataServicesImpl32InLensCreationVisibilityProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db714(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = _DAT_112de7660;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar2;
  FUN_1019db7ac();
  lStack_30 = param_1;
  puStack_28 = puVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019db76c; end: 1019db79b;  */

void FUN_1019db76c(void)

{
  FUN_1019db7ac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019db79c; end: 1019db7ab; -[_TtC32SCInLensCreationDataServicesImpl32InLensCreationVisibilityProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7660));
  return;
}



/* Entry: 1019db7ac; end: 1019db7cb;  */

void FUN_1019db7ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127efe48);
  return;
}



/* Entry: 1019db7cc; end: 1019db7db; -[_TtC32SCInLensCreationDataServicesImpl35SCInLensCreationClientEventsEmitter eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112de7690));
  return;
}



/* Entry: 1019db7dc; end: 1019db7eb; -[_TtC32SCInLensCreationDataServicesImpl35SCInLensCreationClientEventsEmitter emitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112de7690),PTR_s_next__112614028);
  return;
}



/* Entry: 1019db7ec; end: 1019db847; -[_TtC32SCInLensCreationDataServicesImpl35SCInLensCreationClientEventsEmitter init] */

void FUN_1019db7ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInLensCreationDataServicesImpl.SCInLensCreationClientEventsEmitter",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019db818);
  (*pcVar1)();
}



/* Entry: 1019db848; end: 1019db857; -[_TtC32SCInLensCreationDataServicesImpl35SCInLensCreationClientEventsEmitter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019db848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7690));
  return;
}



/* Entry: 1019db858; end: 1019db877;  */

void FUN_1019db858(void)

{
  func_0x000107c61168(&PTR_PTR_1127eff10);
  return;
}



/* Entry: 1019db878; end: 1019db8d3;  */

void FUN_1019db878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1019db8d4; end: 1019db907;  */

/* WARNING: Possible PIC construction at 0x0001019db8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019db8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019db8e4) */
/* WARNING: Removing unreachable block (ram,0x0001019db8f4) */

void FUN_1019db8d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019db908; end: 1019db98f;  */

void FUN_1019db908(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019db990; end: 1019dbfdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1019db990(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puStack_68;
    func_0x000107c44054();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c615e8(puStack_68);
      puVar10 = (undefined *)0x0;
    }
    else {
      uVar4 = 0;
      FUN_1019ddbcc(0,0x112de7818,&PTR_PTR_1126dec08);
      puVar5 = puVar10;
      func_0x000107c5fc54(puVar10,uVar4);
      func_0x000107c61170(puVar10);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar11 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c615e8(puStack_68);
        func_0x000107c6142c(puVar5);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar9 = (undefined *)((ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU));
        puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1019dc914(0,puVar9,0);
        if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dbc58);
          (*pcVar3)();
        }
        puVar12 = (undefined *)0x0;
        do {
          puVar10 = puStack_68;
          if (((ulong)puVar5 & 0xc000000000000001) == 0) {
            if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dbbfc);
              (*pcVar3)();
            }
            if (*(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dbc00);
              (*pcVar3)();
            }
            puVar6 = *(undefined **)(puVar5 + (long)puVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar6 = puVar12;
            puVar9 = puVar5;
            FUN_1019dcc60(puVar12,puVar5,&PTR_PTR_1126dec08,0x112de7818);
          }
          puVar7 = PTR_PTR_1126a83f0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c4e494(puVar6);
          func_0x000107c5728c(puVar7);
          puVar13 = puVar6;
          func_0x000107c4e490();
          func_0x000107c61180();
          if (puVar13 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar8 = puVar13;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar13);
            puVar13 = puVar8;
            func_0x000107c5ee20(puVar8,puVar9);
            func_0x00010006c090(puVar8);
          }
          func_0x000107c57288(puVar7);
          func_0x000107c61170(puVar13);
          func_0x000107c3fbdc(puVar6);
          func_0x000107c53494(puVar7);
          puVar13 = puVar6;
          func_0x000107c42abc(puVar6);
          func_0x000107c61180();
          func_0x000107c546ac(puVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar13);
          uVar1 = *(ulong *)(puVar10 + 0x10);
          puVar6 = (undefined *)(uVar1 + 1);
          puStack_68 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = puVar6;
            FUN_1019dc914(1 < *(ulong *)(puVar10 + 0x18),puVar6,1);
          }
          puVar10 = puStack_68;
          puVar12 = puVar12 + 1;
          *(undefined **)(puStack_68 + 0x10) = puVar6;
          *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar7;
        } while (puVar11 != puVar12);
        func_0x000107c615e8(puVar2);
        func_0x000107c6142c(puVar5);
      }
    }
  }
  return puVar10;
}



/* Entry: 1019dbfe0; end: 1019dc03f; -[_TtC38SCLensInteractionHistoryImplementation35RTUSLensInteractionsHistoryProvider init] */

void FUN_1019dbfe0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensInteractionHistoryImplementation.RTUSLensInteractionsHistoryProvider",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dc00c);
  (*pcVar1)();
}



/* Entry: 1019dc040; end: 1019dc077; -[_TtC38SCLensInteractionHistoryImplementation35RTUSLensInteractionsHistoryProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dc040(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112de77c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112de77d0));
  return;
}



/* Entry: 1019dc078; end: 1019dc093;  */

bool FUN_1019dc078(int param_1)

{
  func_0x000107c4e494();
  return param_1 == 0xe51;
}


