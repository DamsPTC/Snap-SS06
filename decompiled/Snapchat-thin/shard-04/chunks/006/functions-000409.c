/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036d9ec4; end: 1036d9ecf; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl freemiumShouldHideUnlockedCTAButton:] */

uint FUN_1036d9ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d9db8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036d9ed0; end: 1036d9fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036d9ed0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_60 [16];
  ulong *puStack_48;
  
  uVar2 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&puStack_48,FUN_1036db3dc,auStack_60,uVar2);
  if (puStack_48 != (ulong *)0x0) {
    uVar3 = *(ulong *)((long)puStack_48 + _DAT_113036370);
    uVar1 = ((ulong *)((long)puStack_48 + _DAT_113036370))[1];
    if (((uVar3 == param_1 && uVar1 == param_2) ||
        (func_0x000107c605b8(uVar3,uVar1,param_1,param_2,0), (uVar3 & 1) != 0)) &&
       ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_48) + 0x80))(),
       (uVar3 & 1) != 0)) {
      func_0x0001036d9144();
      func_0x000107c61170(puStack_48);
      return uVar3 == 3;
    }
    func_0x000107c61170(puStack_48);
  }
  return false;
}



/* Entry: 1036d9fd8; end: 1036d9fe3; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl freemiumShouldHideLockedCTAButton:] */

uint FUN_1036d9fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036d9ed0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036d9fe4; end: 1036da04b;  */

uint FUN_1036d9fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036da04c; end: 1036da227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036da04c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uStack_48;
  
  if (cRam0000000112f881e8 == '\x01') {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar2 = 0;
    func_0x000103f6f61c(0);
    func_0x000107c610f8();
    func_0x000103f6f5b4(lVar3,param_2,0x7fffffff,0,0xd000000000000026,0x800000010f159430,uVar2);
  }
  else {
    func_0x0001000d224c(&uStack_48);
    func_0x000107c4a4c0(param_1);
    iVar1 = (int)uStack_48;
    func_0x000107c49f98();
    func_0x000107c615e8();
    if (iVar1 == 0) {
      func_0x000103f6f61c(0);
      func_0x000107c4b1dc(param_1);
    }
    else {
      FUN_1036d9130();
      if ((uStack_48 & 1) == 0) {
        func_0x000103f6f61c(0);
        func_0x000107c4b1dc(param_1);
      }
      else {
        lVar3 = param_1;
        FUN_1036da7b0();
        if (lVar3 != 0) {
          func_0x000107c4b1dc(param_1);
          func_0x000107c61180();
          lVar4 = param_1;
          func_0x000107c5faec();
          func_0x000107c61170(param_1);
          FUN_1036da3c8(lVar3,lVar4,param_2);
          func_0x000107c61170(lVar3);
          func_0x000107c6142c(param_2);
          return;
        }
        func_0x000103f6f61c();
        func_0x000107c4b1dc(param_1);
      }
    }
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000103f6f6f4(lVar3,param_2);
  }
  return;
}



/* Entry: 1036da228; end: 1036da38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036da228(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uStack_38;
  
  if (param_1 != 0) {
    uStack_38 = param_1;
    func_0x000107c60614(&UNK_110727398,&uStack_38,&UNK_110727398,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036da38c);
    (*pcVar1)();
  }
  if ((bRam0000000112f881e8 & 1) == 0) {
    FUN_1036d9130();
    if ((param_1 & 1) != 0) {
      lVar2 = 0x5f4f545f54414843;
      FUN_1036dae74(0x5f4f545f54414843,0xec000000474e4f53);
      if (lVar2 != 0) {
        func_0x0001000d224c(&uStack_38);
        uVar3 = uStack_38;
        func_0x000107c3f950();
        func_0x000107c615e8(uStack_38);
        if ((int)uVar3 == 0) {
          func_0x000103f6f61c(0);
          func_0x000103f6f6f4(0,0xe000000000000000);
        }
        else {
          FUN_1036da3c8(lVar2,0,0xe000000000000000);
        }
        func_0x000107c61170(lVar2);
        return;
      }
    }
    func_0x000103f6f61c();
    func_0x000103f6f6f4(0,0xe000000000000000);
  }
  else {
    func_0x000103f6f61c(0);
    func_0x000107c610f8();
    func_0x000103f6f5b4(0,0xe000000000000000,0x7fffffff,0,0x5f4f545f54414843,0xec000000474e4f53);
  }
  return;
}



/* Entry: 1036da38c; end: 1036da3c7; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl getNonLensFreemiumState:] */

void FUN_1036da38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1036da228(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036da3c8; end: 1036da7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036da3c8(byte *******param_1,byte *******param_2,ulong param_3)

{
  ulong uVar1;
  byte *******pppppppbVar2;
  byte ******ppppppbVar3;
  char cVar4;
  code *pcVar5;
  byte *******pppppppbVar6;
  undefined8 uVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  byte *******pppppppbVar15;
  char *pcVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long unaff_x20;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  uint uVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte *******pppppppbVar27;
  byte ******ppppppbStack_160;
  byte ******ppppppbStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  char cStack_121;
  byte ******ppppppbStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppbVar6 = *(byte ********)(unaff_x20 + _DAT_112f87c88);
  pppppppbVar11 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pppppppbVar6 == (byte *******)0x0) {
    func_0x000103f6f61c();
    func_0x000107c61434(param_3);
    func_0x000103f6f6f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    ppppppbStack_70 = (byte ******)0x0;
    pppppppbVar25 = pppppppbVar6;
    func_0x000107c43944();
    func_0x000107c61180();
    pppppppbVar23 = (byte *******)ppppppbStack_70;
    if (pppppppbVar25 == (byte *******)0x0) {
      pppppppbVar11 = (byte *******)ppppppbStack_70;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(pppppppbVar11);
      func_0x000107c61654();
      func_0x000103f6f61c();
      func_0x000107c61434(param_3);
      func_0x000103f6f6f4();
      func_0x000107c61170(pppppppbVar6);
      func_0x000107c614ac();
    }
    else {
      func_0x000107c61174();
      pppppppbVar23 = pppppppbVar25;
      func_0x000107c40850();
      func_0x000107c61180();
      if (pppppppbVar23 == (byte *******)0x0) {
LAB_1036da618:
        pppppppbVar23 = (byte *******)0x0;
      }
      else {
        ppppppbStack_70 = (byte ******)0x0;
        uVar7 = 0;
        FUN_1036db274(0,0x112f874a8,&PTR_PTR_1126ad478);
        pppppppbVar11 = &ppppppbStack_70;
        func_0x000107c5fc50(pppppppbVar23,pppppppbVar11,uVar7);
        func_0x000107c61170(pppppppbVar23);
        pppppppbVar23 = (byte *******)ppppppbStack_70;
        if ((byte *******)ppppppbStack_70 == (byte *******)0x0) goto LAB_1036da618;
        pppppppbVar22 = (byte *******)((ulong)ppppppbStack_70 & 0xffffffffffffff8);
        if ((ulong)ppppppbStack_70 >> 0x3e == 0) {
          pppppppbVar20 = (byte *******)pppppppbVar22[2];
        }
        else {
          pppppppbVar20 = (byte *******)ppppppbStack_70;
          if (-1 < (long)ppppppbStack_70) {
            pppppppbVar20 = pppppppbVar22;
          }
          func_0x000107c60480();
        }
        if (pppppppbVar20 != (byte *******)0x0) {
          pppppppbVar26 = (byte *******)0x0;
          do {
            if (((ulong)pppppppbVar23 & 0xc000000000000001) == 0) {
              if (pppppppbVar22[2] <= pppppppbVar26) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1036da6cc);
                (*pcVar5)();
              }
              pppppppbVar8 = (byte *******)pppppppbVar23[(long)((long)pppppppbVar26 + 4)];
              func_0x000107c61174();
            }
            else {
              pppppppbVar8 = pppppppbVar26;
              pppppppbVar11 = pppppppbVar23;
              func_0x0001036c8b9c();
            }
            pppppppbVar2 = (byte *******)((long)pppppppbVar26 + 1);
            if (SCARRY8((long)pppppppbVar26,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1036da6c8);
              (*pcVar5)();
            }
            pppppppbVar27 = pppppppbVar8;
            func_0x000107c4b1a8();
            func_0x000107c61180();
            if (pppppppbVar27 == (byte *******)0x0) {
              pppppppbVar21 = (byte *******)0x0;
              pppppppbVar27 = (byte *******)0x0;
              pppppppbVar15 = pppppppbVar11;
            }
            else {
              pppppppbVar21 = pppppppbVar27;
              func_0x000107c5faec();
              pppppppbVar15 = pppppppbVar11;
              func_0x000107c61170(pppppppbVar27);
              pppppppbVar27 = pppppppbVar11;
            }
            pppppppbVar9 = param_1;
            func_0x000107c444fc();
            func_0x000107c61180();
            pppppppbVar10 = pppppppbVar9;
            func_0x000107c5faec();
            pppppppbVar11 = pppppppbVar15;
            func_0x000107c61170(pppppppbVar9);
            if (pppppppbVar27 != (byte *******)0x0) {
              if ((pppppppbVar21 == pppppppbVar10) && (pppppppbVar27 == pppppppbVar15)) {
                func_0x000107c6142c(pppppppbVar23);
                func_0x000107c6142c(pppppppbVar27);
                pppppppbVar23 = pppppppbVar15;
              }
              else {
                pppppppbVar11 = pppppppbVar27;
                func_0x000107c605b8(pppppppbVar21,pppppppbVar27,pppppppbVar10,pppppppbVar15,0);
                func_0x000107c6142c(pppppppbVar27);
                func_0x000107c6142c(pppppppbVar15);
                if (((ulong)pppppppbVar21 & 1) == 0) goto LAB_1036da4dc;
              }
              func_0x000107c6142c(pppppppbVar23);
              pppppppbVar11 = param_1;
              func_0x000107c51b34();
              pppppppbVar23 = pppppppbVar8;
              FUN_1036db2b4();
              func_0x000107c61170(pppppppbVar8);
              goto LAB_1036da6f4;
            }
            func_0x000107c6142c(pppppppbVar15);
LAB_1036da4dc:
            func_0x000107c61170(pppppppbVar8);
            pppppppbVar26 = (byte *******)((long)pppppppbVar26 + 1);
          } while (pppppppbVar2 != pppppppbVar20);
        }
        func_0x000107c6142c();
        pppppppbVar23 = (byte *******)0x0;
      }
LAB_1036da6f4:
      func_0x000107c61434(param_3);
      pppppppbVar22 = param_1;
      func_0x000107c4b624(param_1);
      func_0x000107c444fc();
      func_0x000107c61180();
      pppppppbVar20 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000103f6f61c();
      func_0x000107c610f8();
      func_0x000103f6f5b4(param_2,param_3,pppppppbVar22,pppppppbVar23,pppppppbVar20,pppppppbVar11);
      func_0x000107c61170(pppppppbVar6);
      func_0x000107c61170();
      pppppppbVar23 = pppppppbVar25;
    }
    param_2 = pppppppbVar23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  func_0x000107c60e78();
  pppppppbVar11 = param_2;
  FUN_1036d91e8();
  if (((ulong)pppppppbVar11 & 1) != 0) {
    pppppppbVar11 = param_2;
    func_0x000107c4b31c();
    func_0x000107c61180();
    if (pppppppbVar11 != (byte *******)0x0) {
      pppppppbVar6 = pppppppbVar11;
      func_0x000107c43940();
      func_0x000107c61180();
      func_0x000107c61170();
      if (pppppppbVar6 != (byte *******)0x0) {
        pppppppbVar11 = pppppppbVar6;
        func_0x000107c444fc();
        func_0x000107c61180();
        pppppppbVar23 = pppppppbVar11;
        func_0x000107c5faec();
        func_0x000107c61170(pppppppbVar11);
        func_0x000107c6142c(param_3);
        uVar1 = (ulong)pppppppbVar23 & 0xffffffffffff;
        if ((param_3 & 0x2000000000000000) != 0) {
          uVar1 = param_3 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          return;
        }
        func_0x000107c61170();
        pppppppbVar11 = pppppppbVar6;
      }
    }
  }
  FUN_1036d9034();
  if (pppppppbVar11 == (byte *******)0x0) {
    return;
  }
  pppppppbVar6 = pppppppbVar11;
  func_0x000107c44560();
  func_0x000107c61180();
  if (pppppppbVar6 == (byte *******)0x0) {
LAB_1036da990:
    func_0x000107c61170(pppppppbVar11);
    return;
  }
  ppppppbStack_158 = (byte ******)0x0;
  uVar7 = 0;
  FUN_1036db274(0,0x112f874a0,&PTR_PTR_1126ad470);
  pppppppbVar23 = &ppppppbStack_158;
  func_0x000107c5fc50(pppppppbVar6,pppppppbVar23,uVar7);
  func_0x000107c61170(pppppppbVar6);
  ppppppbVar3 = ppppppbStack_158;
  if ((byte *******)ppppppbStack_158 == (byte *******)0x0) goto LAB_1036da990;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  pppppppbVar6 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  pppppppbVar22 = (byte *******)((ulong)pppppppbVar6 & 0xffffffffffff);
  pppppppbVar20 = (byte *******)((ulong)pppppppbVar23 >> 0x38 & 0xf);
  pppppppbVar25 = pppppppbVar22;
  if (((ulong)pppppppbVar23 & 0x2000000000000000) != 0) {
    pppppppbVar25 = pppppppbVar20;
  }
  if (pppppppbVar25 == (byte *******)0x0) {
    func_0x000107c61170(pppppppbVar11);
    func_0x000107c6142c(pppppppbVar23);
    goto LAB_1036dae20;
  }
  if (((ulong)pppppppbVar23 >> 0x3c & 1) == 0) {
    if (((ulong)pppppppbVar23 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppbVar6 >> 0x3c & 1) == 0) {
        pppppppbVar22 = pppppppbVar23;
        func_0x000107c60358();
      }
      else {
        pppppppbVar6 = (byte *******)(((ulong)pppppppbVar23 & 0xfffffffffffffff) + 0x20);
      }
      if (*(byte *)pppppppbVar6 == 0x2b) {
        if ((long)pppppppbVar22 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dae6c);
          (*pcVar5)();
        }
        lVar18 = (long)pppppppbVar22 + -1;
        if (lVar18 == 0) goto LAB_1036dab7c;
        ppppppbStack_160 = (byte ******)0x0;
        do {
          pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
          if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
              (lVar19 = (long)ppppppbStack_160 * 10,
              SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
             ppppppbStack_160 = (byte ******)(lVar19 + uVar1), SCARRY8(lVar19,uVar1)))
          goto LAB_1036dab7c;
          uVar24 = 0;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      else if (*(byte *)pppppppbVar6 == 0x2d) {
        if ((long)pppppppbVar22 < 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dae64);
          (*pcVar5)();
        }
        lVar18 = (long)pppppppbVar22 + -1;
        if (lVar18 == 0) {
LAB_1036dab7c:
          ppppppbStack_160 = (byte ******)0x0;
          uVar24 = 1;
        }
        else {
          ppppppbStack_160 = (byte ******)0x0;
          do {
            pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
            if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                (lVar19 = (long)ppppppbStack_160 * 10,
                SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
               ppppppbStack_160 = (byte ******)(lVar19 - uVar1), SBORROW8(lVar19,uVar1)))
            goto LAB_1036dab7c;
            uVar24 = 0;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
      }
      else {
        if (pppppppbVar22 == (byte *******)0x0) goto LAB_1036dab7c;
        if (pppppppbVar6 == (byte *******)0x0) {
          ppppppbStack_160 = (byte ******)0x0;
          uVar24 = 0;
        }
        else {
          ppppppbStack_160 = (byte ******)0x0;
          do {
            if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
                (lVar18 = (long)ppppppbStack_160 * 10,
                SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
               ppppppbStack_160 = (byte ******)(lVar18 + uVar1), SCARRY8(lVar18,uVar1)))
            goto LAB_1036dab7c;
            uVar24 = 0;
            pppppppbVar22 = (byte *******)((long)pppppppbVar22 + -1);
            pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
          } while (pppppppbVar22 != (byte *******)0x0);
        }
      }
    }
    else {
      ppppppbStack_158 = (byte ******)pppppppbVar6;
      uStack_150 = (ulong)pppppppbVar23 & 0xffffffffffffff;
      uVar24 = (uint)pppppppbVar6 & 0xff;
      if (uVar24 == 0x2b) {
        if (pppppppbVar20 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dae70);
          (*pcVar5)();
        }
        lVar18 = (long)pppppppbVar20 + -1;
        if (lVar18 == 0) goto LAB_1036dab7c;
        ppppppbStack_160 = (byte ******)0x0;
        pbVar17 = (byte *)((ulong)&ppppppbStack_158 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (lVar19 = (long)ppppppbStack_160 * 10,
              SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
             ppppppbStack_160 = (byte ******)(lVar19 + uVar1), SCARRY8(lVar19,uVar1)))
          goto LAB_1036dab7c;
          uVar24 = 0;
          lVar18 = lVar18 + -1;
          pbVar17 = pbVar17 + 1;
        } while (lVar18 != 0);
      }
      else if (uVar24 == 0x2d) {
        if (pppppppbVar20 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dae68);
          (*pcVar5)();
        }
        lVar18 = (long)pppppppbVar20 + -1;
        if (lVar18 == 0) goto LAB_1036dab7c;
        ppppppbStack_160 = (byte ******)0x0;
        pbVar17 = (byte *)((ulong)&ppppppbStack_158 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (lVar19 = (long)ppppppbStack_160 * 10,
              SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
             ppppppbStack_160 = (byte ******)(lVar19 - uVar1), SBORROW8(lVar19,uVar1)))
          goto LAB_1036dab7c;
          uVar24 = 0;
          lVar18 = lVar18 + -1;
          pbVar17 = pbVar17 + 1;
        } while (lVar18 != 0);
      }
      else {
        if (pppppppbVar20 == (byte *******)0x0) goto LAB_1036dab7c;
        ppppppbStack_160 = (byte ******)0x0;
        pppppppbVar6 = &ppppppbStack_158;
        do {
          if (((9 < *(byte *)pppppppbVar6 - 0x30) ||
              (lVar18 = (long)ppppppbStack_160 * 10,
              SUB168(SEXT816((long)ppppppbStack_160) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)pppppppbVar6 - 0x30),
             ppppppbStack_160 = (byte ******)(lVar18 + uVar1), SCARRY8(lVar18,uVar1)))
          goto LAB_1036dab7c;
          uVar24 = 0;
          pppppppbVar20 = (byte *******)((long)pppppppbVar20 + -1);
          pppppppbVar6 = (byte *******)((long)pppppppbVar6 + 1);
        } while (pppppppbVar20 != (byte *******)0x0);
      }
    }
  }
  else {
    pppppppbVar25 = pppppppbVar23;
    func_0x000100fb6b80(pppppppbVar6,pppppppbVar23,10);
    uVar24 = (uint)pppppppbVar25;
    ppppppbStack_160 = (byte ******)pppppppbVar6;
  }
  func_0x000107c6142c(pppppppbVar23);
  if ((uVar24 & 0xff) != 1) {
    pppppppbVar6 = (byte *******)((ulong)ppppppbVar3 & 0xffffffffffffff8);
    if ((ulong)ppppppbVar3 >> 0x3e == 0) {
      pppppppbVar23 = (byte *******)pppppppbVar6[2];
    }
    else {
      pppppppbVar23 = (byte *******)ppppppbVar3;
      if (-1 < (long)ppppppbVar3) {
        pppppppbVar23 = pppppppbVar6;
      }
      func_0x000107c60480();
    }
    if (pppppppbVar23 != (byte *******)0x0) {
      pppppppbVar25 = (byte *******)0x0;
      do {
        if (((ulong)ppppppbVar3 & 0xc000000000000001) == 0) {
          if (pppppppbVar6[2] <= pppppppbVar25) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dadcc);
            (*pcVar5)();
          }
          pppppppbVar22 = (byte *******)ppppppbVar3[(long)((long)pppppppbVar25 + 4)];
          func_0x000107c61174();
        }
        else {
          pppppppbVar22 = pppppppbVar25;
          func_0x0001036c8b88(pppppppbVar25,ppppppbVar3);
        }
        pppppppbVar20 = (byte *******)((long)pppppppbVar25 + 1);
        if (SCARRY8((long)pppppppbVar25,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dadc8);
          (*pcVar5)();
        }
        pppppppbVar26 = pppppppbVar22;
        func_0x000107c4b1f0();
        func_0x000107c61180();
        if (pppppppbVar26 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dae74);
          (*pcVar5)();
        }
        cStack_121 = '\0';
        puVar12 = &UNK_110682600;
        func_0x000107c613fc(&UNK_110682600,0x20,7);
        *(byte *******)(puVar12 + 0x10) = ppppppbStack_160;
        *(char **)(puVar12 + 0x18) = &cStack_121;
        puVar13 = &UNK_110682628;
        func_0x000107c613fc(&UNK_110682628,0x20,7);
        *(code **)(puVar13 + 0x10) = FUN_1036db218;
        *(undefined **)(puVar13 + 0x18) = puVar12;
        pcStack_138 = FUN_1036db238;
        ppppppbStack_158 = (byte ******)PTR___NSConcreteStackBlock_11034bd00;
        uStack_150 = 0x42000000;
        uStack_148 = 0x1036db1ec;
        puStack_140 = &UNK_110682640;
        pppppppbVar8 = &ppppppbStack_158;
        puStack_130 = puVar13;
        func_0x000107c60bc4(pppppppbVar8);
        puVar14 = puStack_130;
        func_0x000107c6157c(puVar13);
        func_0x000107c61574(puVar14);
        func_0x000107c429d8(pppppppbVar26);
        func_0x000107c61170(pppppppbVar26);
        func_0x000107c60bd0(pppppppbVar8);
        pcVar16 = "";
        puVar14 = puVar13;
        func_0x000107c61544(puVar13,"",0x6b,0x194,0x19,1);
        func_0x000107c61574(puVar13);
        cVar4 = cStack_121;
        if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dadd0);
          (*pcVar5)();
        }
        func_0x000107c61574(puVar12);
        if (cVar4 == '\x01') {
          pppppppbVar6 = pppppppbVar22;
          func_0x000107c4b1a8();
          func_0x000107c61180();
          if (pppppppbVar6 != (byte *******)0x0) {
            pppppppbVar23 = pppppppbVar6;
            func_0x000107c5faec();
            func_0x000107c6142c(ppppppbVar3);
            func_0x000107c61170(pppppppbVar6);
            func_0x000107c61170(pppppppbVar22);
            FUN_1036dae74(pppppppbVar23,pcVar16);
            func_0x000107c6142c(pcVar16);
            func_0x000107c61170(pppppppbVar11);
            return;
          }
          func_0x000107c61170(pppppppbVar11);
          func_0x000107c6142c(ppppppbVar3);
          pppppppbVar11 = pppppppbVar22;
          goto LAB_1036da990;
        }
        func_0x000107c61170(pppppppbVar22);
        pppppppbVar25 = (byte *******)((long)pppppppbVar25 + 1);
      } while (pppppppbVar20 != pppppppbVar23);
    }
  }
  func_0x000107c61170(pppppppbVar11);
LAB_1036dae20:
  func_0x000107c6142c(ppppppbVar3);
  return;
}



/* Entry: 1036da7b0; end: 1036dae73;  */

void FUN_1036da7b0(byte *param_1,ulong param_2)

{
  ulong uVar1;
  byte *pbVar2;
  char cVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte **ppbVar12;
  undefined *puVar13;
  byte **ppbVar14;
  char *pcVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  char cStack_71;
  
  pbVar5 = param_1;
  FUN_1036d91e8();
  if (((ulong)pbVar5 & 1) != 0) {
    pbVar5 = param_1;
    func_0x000107c4b31c();
    func_0x000107c61180();
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar5;
      func_0x000107c43940();
      func_0x000107c61180();
      func_0x000107c61170();
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = pbVar6;
        func_0x000107c444fc();
        func_0x000107c61180();
        pbVar18 = pbVar5;
        func_0x000107c5faec();
        func_0x000107c61170(pbVar5);
        func_0x000107c6142c(param_2);
        uVar1 = (ulong)pbVar18 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          return;
        }
        func_0x000107c61170();
        pbVar5 = pbVar6;
      }
    }
  }
  FUN_1036d9034();
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  pbVar6 = pbVar5;
  func_0x000107c44560();
  func_0x000107c61180();
  if (pbVar6 == (byte *)0x0) {
LAB_1036da990:
    func_0x000107c61170(pbVar5);
    return;
  }
  pbStack_a8 = (byte *)0x0;
  uVar7 = 0;
  FUN_1036db274(0,0x112f874a0,&PTR_PTR_1126ad470);
  ppbVar12 = &pbStack_a8;
  func_0x000107c5fc50(pbVar6,ppbVar12,uVar7);
  func_0x000107c61170(pbVar6);
  pbVar6 = pbStack_a8;
  if (pbStack_a8 == (byte *)0x0) goto LAB_1036da990;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  pbVar18 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  ppbVar14 = (byte **)((ulong)pbVar18 & 0xffffffffffff);
  ppbVar17 = (byte **)((ulong)ppbVar12 >> 0x38 & 0xf);
  ppbVar16 = ppbVar14;
  if (((ulong)ppbVar12 & 0x2000000000000000) != 0) {
    ppbVar16 = ppbVar17;
  }
  if (ppbVar16 == (byte **)0x0) {
    func_0x000107c61170(pbVar5);
    func_0x000107c6142c(ppbVar12);
    goto LAB_1036dae20;
  }
  if (((ulong)ppbVar12 >> 0x3c & 1) == 0) {
    if (((ulong)ppbVar12 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar18 >> 0x3c & 1) == 0) {
        ppbVar14 = ppbVar12;
        func_0x000107c60358();
      }
      else {
        pbVar18 = (byte *)(((ulong)ppbVar12 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar18 == 0x2b) {
        if ((long)ppbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dae6c);
          (*pcVar4)();
        }
        lVar19 = (long)ppbVar14 + -1;
        if (lVar19 == 0) goto LAB_1036dab7c;
        pbStack_b0 = (byte *)0x0;
        do {
          pbVar18 = pbVar18 + 1;
          if (((9 < *pbVar18 - 0x30) ||
              (lVar20 = (long)pbStack_b0 * 10,
              SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar18 - 0x30), pbStack_b0 = (byte *)(lVar20 + uVar1),
             SCARRY8(lVar20,uVar1))) goto LAB_1036dab7c;
          uVar22 = 0;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      else if (*pbVar18 == 0x2d) {
        if ((long)ppbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dae64);
          (*pcVar4)();
        }
        lVar19 = (long)ppbVar14 + -1;
        if (lVar19 == 0) {
LAB_1036dab7c:
          pbStack_b0 = (byte *)0x0;
          uVar22 = 1;
        }
        else {
          pbStack_b0 = (byte *)0x0;
          do {
            pbVar18 = pbVar18 + 1;
            if (((9 < *pbVar18 - 0x30) ||
                (lVar20 = (long)pbStack_b0 * 10,
                SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar18 - 0x30), pbStack_b0 = (byte *)(lVar20 - uVar1),
               SBORROW8(lVar20,uVar1))) goto LAB_1036dab7c;
            uVar22 = 0;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      else {
        if (ppbVar14 == (byte **)0x0) goto LAB_1036dab7c;
        if (pbVar18 == (byte *)0x0) {
          pbStack_b0 = (byte *)0x0;
          uVar22 = 0;
        }
        else {
          pbStack_b0 = (byte *)0x0;
          do {
            if (((9 < *pbVar18 - 0x30) ||
                (lVar19 = (long)pbStack_b0 * 10,
                SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar18 - 0x30), pbStack_b0 = (byte *)(lVar19 + uVar1),
               SCARRY8(lVar19,uVar1))) goto LAB_1036dab7c;
            uVar22 = 0;
            ppbVar14 = (byte **)((long)ppbVar14 + -1);
            pbVar18 = pbVar18 + 1;
          } while (ppbVar14 != (byte **)0x0);
        }
      }
    }
    else {
      pbStack_a8 = pbVar18;
      uStack_a0 = (ulong)ppbVar12 & 0xffffffffffffff;
      uVar22 = (uint)pbVar18 & 0xff;
      if (uVar22 == 0x2b) {
        if (ppbVar17 == (byte **)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dae70);
          (*pcVar4)();
        }
        lVar19 = (long)ppbVar17 + -1;
        if (lVar19 == 0) goto LAB_1036dab7c;
        pbStack_b0 = (byte *)0x0;
        pbVar18 = (byte *)((ulong)&pbStack_a8 | 1);
        do {
          if (((9 < *pbVar18 - 0x30) ||
              (lVar20 = (long)pbStack_b0 * 10,
              SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar18 - 0x30), pbStack_b0 = (byte *)(lVar20 + uVar1),
             SCARRY8(lVar20,uVar1))) goto LAB_1036dab7c;
          uVar22 = 0;
          lVar19 = lVar19 + -1;
          pbVar18 = pbVar18 + 1;
        } while (lVar19 != 0);
      }
      else if (uVar22 == 0x2d) {
        if (ppbVar17 == (byte **)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dae68);
          (*pcVar4)();
        }
        lVar19 = (long)ppbVar17 + -1;
        if (lVar19 == 0) goto LAB_1036dab7c;
        pbStack_b0 = (byte *)0x0;
        pbVar18 = (byte *)((ulong)&pbStack_a8 | 1);
        do {
          if (((9 < *pbVar18 - 0x30) ||
              (lVar20 = (long)pbStack_b0 * 10,
              SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar18 - 0x30), pbStack_b0 = (byte *)(lVar20 - uVar1),
             SBORROW8(lVar20,uVar1))) goto LAB_1036dab7c;
          uVar22 = 0;
          lVar19 = lVar19 + -1;
          pbVar18 = pbVar18 + 1;
        } while (lVar19 != 0);
      }
      else {
        if (ppbVar17 == (byte **)0x0) goto LAB_1036dab7c;
        pbStack_b0 = (byte *)0x0;
        ppbVar16 = &pbStack_a8;
        do {
          if (((9 < *(byte *)ppbVar16 - 0x30) ||
              (lVar19 = (long)pbStack_b0 * 10,
              SUB168(SEXT816((long)pbStack_b0) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar16 - 0x30), pbStack_b0 = (byte *)(lVar19 + uVar1)
             , SCARRY8(lVar19,uVar1))) goto LAB_1036dab7c;
          uVar22 = 0;
          ppbVar17 = (byte **)((long)ppbVar17 + -1);
          ppbVar16 = (byte **)((long)ppbVar16 + 1);
        } while (ppbVar17 != (byte **)0x0);
      }
    }
  }
  else {
    ppbVar16 = ppbVar12;
    func_0x000100fb6b80(pbVar18,ppbVar12,10);
    uVar22 = (uint)ppbVar16;
    pbStack_b0 = pbVar18;
  }
  func_0x000107c6142c(ppbVar12);
  if ((uVar22 & 0xff) != 1) {
    pbVar18 = (byte *)((ulong)pbVar6 & 0xffffffffffffff8);
    if ((ulong)pbVar6 >> 0x3e == 0) {
      pbVar21 = *(byte **)(pbVar18 + 0x10);
    }
    else {
      pbVar21 = pbVar6;
      if (-1 < (long)pbVar6) {
        pbVar21 = pbVar18;
      }
      func_0x000107c60480();
    }
    if (pbVar21 != (byte *)0x0) {
      pbVar23 = (byte *)0x0;
      do {
        if (((ulong)pbVar6 & 0xc000000000000001) == 0) {
          if (*(byte **)(pbVar18 + 0x10) <= pbVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dadcc);
            (*pcVar4)();
          }
          pbVar8 = *(byte **)(pbVar6 + (long)pbVar23 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pbVar8 = pbVar23;
          func_0x0001036c8b88(pbVar23,pbVar6);
        }
        pbVar2 = pbVar23 + 1;
        if (SCARRY8((long)pbVar23,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dadc8);
          (*pcVar4)();
        }
        pbVar9 = pbVar8;
        func_0x000107c4b1f0();
        func_0x000107c61180();
        if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dae74);
          (*pcVar4)();
        }
        cStack_71 = '\0';
        puVar10 = &UNK_110682600;
        func_0x000107c613fc(&UNK_110682600,0x20,7);
        *(byte **)(puVar10 + 0x10) = pbStack_b0;
        *(char **)(puVar10 + 0x18) = &cStack_71;
        puVar11 = &UNK_110682628;
        func_0x000107c613fc(&UNK_110682628,0x20,7);
        *(code **)(puVar11 + 0x10) = FUN_1036db218;
        *(undefined **)(puVar11 + 0x18) = puVar10;
        pcStack_88 = FUN_1036db238;
        pbStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x1036db1ec;
        puStack_90 = &UNK_110682640;
        ppbVar12 = &pbStack_a8;
        puStack_80 = puVar11;
        func_0x000107c60bc4(ppbVar12);
        puVar13 = puStack_80;
        func_0x000107c6157c(puVar11);
        func_0x000107c61574(puVar13);
        func_0x000107c429d8(pbVar9);
        func_0x000107c61170(pbVar9);
        func_0x000107c60bd0(ppbVar12);
        pcVar15 = "";
        puVar13 = puVar11;
        func_0x000107c61544(puVar11,"",0x6b,0x194,0x19,1);
        func_0x000107c61574(puVar11);
        cVar3 = cStack_71;
        if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dadd0);
          (*pcVar4)();
        }
        func_0x000107c61574(puVar10);
        if (cVar3 == '\x01') {
          pbVar18 = pbVar8;
          func_0x000107c4b1a8();
          func_0x000107c61180();
          if (pbVar18 != (byte *)0x0) {
            pbVar21 = pbVar18;
            func_0x000107c5faec();
            func_0x000107c6142c(pbVar6);
            func_0x000107c61170(pbVar18);
            func_0x000107c61170(pbVar8);
            FUN_1036dae74(pbVar21,pcVar15);
            func_0x000107c6142c(pcVar15);
            func_0x000107c61170(pbVar5);
            return;
          }
          func_0x000107c61170(pbVar5);
          func_0x000107c6142c(pbVar6);
          pbVar5 = pbVar8;
          goto LAB_1036da990;
        }
        func_0x000107c61170(pbVar8);
        pbVar23 = pbVar23 + 1;
      } while (pbVar2 != pbVar21);
    }
  }
  func_0x000107c61170(pbVar5);
LAB_1036dae20:
  func_0x000107c6142c(pbVar6);
  return;
}



/* Entry: 1036dae74; end: 1036db0e7;  */

void FUN_1036dae74(undefined8 ******param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  undefined8 ******ppppppuVar3;
  undefined8 uVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuStack_68;
  
  ppppppuVar3 = param_1;
  func_0x0001036d9058();
  if (ppppppuVar3 != (undefined8 ******)0x0) {
    ppppppuVar14 = ppppppuVar3;
    func_0x000107c4b630();
    func_0x000107c61180();
    if (ppppppuVar14 != (undefined8 ******)0x0) {
      ppppppuStack_68 = (undefined8 *******)0x0;
      uVar4 = 0;
      FUN_1036db274(0,0x112f87498,&PTR_PTR_1126ad468);
      pppppppuVar9 = &ppppppuStack_68;
      func_0x000107c5fc50(ppppppuVar14,pppppppuVar9,uVar4);
      func_0x000107c61170(ppppppuVar14);
      pppppppuVar15 = (undefined8 *******)ppppppuStack_68;
      if ((undefined8 *******)ppppppuStack_68 != (undefined8 *******)0x0) {
        pppppppuVar13 = (undefined8 *******)((ulong)ppppppuStack_68 & 0xffffffffffffff8);
        if ((ulong)ppppppuStack_68 >> 0x3e == 0) {
          pppppppuVar12 = (undefined8 *******)pppppppuVar13[2];
        }
        else {
          pppppppuVar12 = (undefined8 *******)ppppppuStack_68;
          if (-1 < (long)ppppppuStack_68) {
            pppppppuVar12 = pppppppuVar13;
          }
          func_0x000107c60480();
        }
        if (pppppppuVar12 != (undefined8 *******)0x0) {
          ppppppuVar14 = (undefined8 ******)0x0;
          do {
            if (((ulong)pppppppuVar15 & 0xc000000000000001) == 0) {
              if (pppppppuVar13[2] <= ppppppuVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1036db09c);
                (*pcVar2)();
              }
              ppppppuVar5 = pppppppuVar15[(long)ppppppuVar14 + 4];
              func_0x000107c61174();
              pppppppuVar10 = pppppppuVar9;
            }
            else {
              ppppppuVar5 = ppppppuVar14;
              pppppppuVar10 = pppppppuVar15;
              FUN_1036c8b74();
            }
            pppppppuVar1 = (undefined8 *******)((long)ppppppuVar14 + 1);
            if (SCARRY8((long)ppppppuVar14,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1036db098);
              (*pcVar2)();
            }
            ppppppuVar6 = ppppppuVar5;
            func_0x000107c4b1a8();
            func_0x000107c61180();
            pppppppuVar9 = pppppppuVar10;
            if (ppppppuVar6 != (undefined8 ******)0x0) {
              ppppppuVar7 = ppppppuVar6;
              func_0x000107c5faec();
              func_0x000107c61170(ppppppuVar6);
              if ((ppppppuVar7 == param_1) && (pppppppuVar10 == param_2)) {
                func_0x000107c6142c(pppppppuVar15);
                pppppppuVar15 = pppppppuVar10;
LAB_1036db00c:
                func_0x000107c6142c(pppppppuVar15);
                ppppppuVar14 = ppppppuVar5;
                func_0x000107c41380();
                lVar11 = (long)(int)ppppppuVar14 * 0x15180;
                if (lVar11 - (int)lVar11 == 0) {
                  func_0x000107c4b624(ppppppuVar5);
                  puVar8 = PTR_PTR_1126bb858;
                  func_0x000107c610f8(PTR_PTR_1126bb858);
                  func_0x000107c5fadc(param_1,param_2);
                  func_0x000107c46bf8(puVar8);
                  func_0x000107c61170(ppppppuVar5);
                  func_0x000107c61170(ppppppuVar3);
                  func_0x000107c61170(param_1);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1036db0e8);
                (*pcVar2)();
              }
              pppppppuVar9 = pppppppuVar10;
              func_0x000107c605b8(ppppppuVar7,pppppppuVar10,param_1,param_2,0);
              func_0x000107c6142c(pppppppuVar10);
              if (((ulong)ppppppuVar7 & 1) != 0) goto LAB_1036db00c;
            }
            func_0x000107c61170(ppppppuVar5);
            ppppppuVar14 = (undefined8 ******)((long)ppppppuVar14 + 1);
          } while (pppppppuVar1 != pppppppuVar12);
        }
        func_0x000107c6142c(pppppppuVar15);
      }
    }
    func_0x000107c61170(ppppppuVar3);
  }
  return;
}



/* Entry: 1036db0e8; end: 1036db143; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl init] */

void FUN_1036db0e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusFreemiumServiceImpl",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036db114);
  (*pcVar1)();
}



/* Entry: 1036db144; end: 1036db217; -[_TtC32SCLensPlusServicesImplementation27LensPlusFreemiumServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036db160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036db180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036db1c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036db184) */
/* WARNING: Removing unreachable block (ram,0x0001036db164) */
/* WARNING: Removing unreachable block (ram,0x0001036db1c4) */
/* WARNING: Removing unreachable block (ram,0x000100d59f6c) */
/* WARNING: Removing unreachable block (ram,0x000100d59f78) */
/* WARNING: Removing unreachable block (ram,0x000100d59f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87c70));
  return;
}



/* Entry: 1036db218; end: 1036db237;  */

void FUN_1036db218(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long unaff_x20;
  
  if (param_1 == *(long *)(unaff_x20 + 0x10)) {
    **(undefined1 **)(unaff_x20 + 0x18) = 1;
    *param_3 = 1;
  }
  return;
}



/* Entry: 1036db238; end: 1036db257;  */

void FUN_1036db238(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036db258; end: 1036db273;  */

void FUN_1036db258(long param_1,long param_2)

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



/* Entry: 1036db274; end: 1036db2b3;  */

void FUN_1036db274(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036db2b4; end: 1036db3db;  */

void FUN_1036db2b4(double param_1,long param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  if (0 < (int)param_3) {
    lVar3 = param_2;
    func_0x000107c4aaa0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036db3d8);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c51b2c();
    func_0x000107c61170(lVar3);
    if (0 < lVar4) {
      func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar5 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      lVar2 = param_2;
      func_0x000107c4aaa0();
      func_0x000107c61180();
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036db3dc);
        (*pcVar1)();
      }
      lVar5 = lVar2;
      func_0x000107c51b2c();
      func_0x000107c61170(lVar2);
      if ((double)param_3 < param_1 - (double)lVar5) {
        return;
      }
    }
  }
  func_0x000107c4084c(param_2);
  return;
}



/* Entry: 1036db3dc; end: 1036db413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db3dc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f87ca0);
  func_0x000107c61174();
  return;
}



/* Entry: 1036db414; end: 1036db443;  */

void FUN_1036db414(void)

{
  long unaff_x20;
  
  FUN_1036d9360(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036db444; end: 1036db453;  */

void FUN_1036db444(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1036db454; end: 1036db48f;  */

void FUN_1036db454(void)

{
  FUN_1036db3dc();
  return;
}



/* Entry: 1036db490; end: 1036db5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db490(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d00);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010f15a0f0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d08);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x800000010f15a120;
  *(undefined8 *)(unaff_x20 + _DAT_112f87d20) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d28);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010f15a140;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d30);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010f15a170;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d38);
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f87d10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f87d18) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036db5b0; end: 1036db5e3; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl setPlusSyncService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f87d20);
  *(undefined8 *)(param_1 + _DAT_112f87d20) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1036db5e4; end: 1036db69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db5e4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4393c();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      return;
    }
    func_0x000107c6142c(param_2);
  }
  FUN_1036db6a0();
  if (param_2 == 0) {
    func_0x0001036e2efc();
  }
  return;
}



/* Entry: 1036db6a0; end: 1036db907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036db6a0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [64];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f87d18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f87d00);
    func_0x000107c5fadc(uVar3,((undefined8 *)(unaff_x20 + _DAT_112f87d00))[1]);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    if (((int)lVar4 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112f87d20), lVar2 != 0)) {
      lVar4 = lVar2;
      func_0x000107c615f0();
      func_0x000107c43008();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        FUN_1036dc59c(&uStack_90);
        if (lStack_88 == 0) {
          FUN_1036dd650(&uStack_90,0x112f87d78,&UNK_10dbfbbf8);
          uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f87d28);
          lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f87d28))[1];
          func_0x000107c61434(lVar5);
        }
        else {
          lStack_c8 = lStack_88;
          uStack_d0 = uStack_90;
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          func_0x000107c61434(lStack_88);
          FUN_1036dd650(&uStack_d0,0x112f87d78,&UNK_10dbfbbf8);
          lVar5 = lStack_88;
          uVar3 = uStack_90;
        }
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d38);
        uStack_90 = *puVar1;
        lStack_88 = puVar1[1];
        uStack_80 = puVar1[2];
        uStack_78 = puVar1[3];
        uVar7 = puVar1[4];
        uVar6 = puVar1[5];
        uStack_60 = puVar1[6];
        uStack_58 = puVar1[7];
        uStack_70 = uVar7;
        uStack_68 = uVar6;
        if (lStack_88 == 0) {
          lStack_c8 = 0;
          lStack_88 = 0;
          uStack_d0 = uStack_90;
          uStack_c0 = uStack_80;
          uStack_b8 = uStack_78;
          uStack_b0 = uVar7;
          uStack_a8 = uVar6;
          uStack_a0 = uStack_60;
          uStack_98 = uStack_58;
          FUN_1036dd5c8(&uStack_90,auStack_110,0x112f87d78,&UNK_10dbfbbf8);
          FUN_1036dd650(&uStack_d0,0x112f87d78,&UNK_10dbfbbf8);
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f87d30);
          uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f87d30))[1];
          func_0x000107c61434(uVar6);
        }
        else {
          func_0x0001036dd550();
          func_0x000107c61434(uVar6);
          FUN_1036dd650(&uStack_90,0x112f87d78,&UNK_10dbfbbf8);
        }
        FUN_1036dcc68(lVar4,uVar3,lVar5,uVar7,uVar6);
        func_0x000107c6142c(lVar5);
        func_0x000107c6142c(uVar6);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar4);
      }
    }
  }
  return;
}



/* Entry: 1036db908; end: 1036db97f; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl ctaButtonTitle:] */

void FUN_1036db908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036db5e4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036db980; end: 1036dbb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036db980(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar3 = puStack_70;
  puVar2 = puStack_70;
  func_0x000107c4393c();
  func_0x000107c61180();
  func_0x000107c615e8();
  uVar7 = param_2;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c6142c(param_2);
    uVar1 = (ulong)puVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar5 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c451b0();
      func_0x000107c61180();
      goto LAB_1036dbb28;
    }
    func_0x000107c61170();
    puVar3 = puVar2;
  }
  func_0x0001036e2efc();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar2;
  FUN_1036dbb4c();
  puVar5 = &UNK_110682678;
  func_0x000107c613fc(&UNK_110682678,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  pcStack_50 = FUN_1036dd52c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101d58ff0;
  puStack_58 = &UNK_110682690;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar4);
  puVar5 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
LAB_1036dbb28:
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 1036dbb4c; end: 1036dbf5b;  */

/* WARNING: Possible PIC construction at 0x0001036dbb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036dbda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036dbf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036dbe1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036dbed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036dbe20) */
/* WARNING: Removing unreachable block (ram,0x0001036dbf14) */
/* WARNING: Removing unreachable block (ram,0x0001036dbdac) */
/* WARNING: Removing unreachable block (ram,0x0001036dbe0c) */
/* WARNING: Removing unreachable block (ram,0x0001036dbdb0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbef4) */
/* WARNING: Removing unreachable block (ram,0x0001036dbde4) */
/* WARNING: Removing unreachable block (ram,0x0001036dbef8) */
/* WARNING: Removing unreachable block (ram,0x0001036dbb84) */
/* WARNING: Removing unreachable block (ram,0x0001036dbb88) */
/* WARNING: Removing unreachable block (ram,0x0001036dbc4c) */
/* WARNING: Removing unreachable block (ram,0x0001036dbbd0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbc84) */
/* WARNING: Removing unreachable block (ram,0x0001036dbc64) */
/* WARNING: Removing unreachable block (ram,0x0001036dbbe0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbca0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbc14) */
/* WARNING: Removing unreachable block (ram,0x0001036dbcd0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbd30) */
/* WARNING: Removing unreachable block (ram,0x0001036dbcf0) */
/* WARNING: Removing unreachable block (ram,0x0001036dbd9c) */
/* WARNING: Removing unreachable block (ram,0x0001036dbed8) */
/* WARNING: Removing unreachable block (ram,0x0001036dbf3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dbb4c(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112f87d18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1036dbf5c; end: 1036dbfaf;  */

void FUN_1036dbf5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
  }
  func_0x000107c61174(param_1);
  func_0x000107c3fefc(param_4,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1036dbfb0; end: 1036dc00b; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl fetchLatestCTAButtonTitle:] */

void FUN_1036dbfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036db980(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036dc00c; end: 1036dc0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036dc00c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  ulong uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar1 = uStack_48;
  func_0x000107c4394c();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x0001000d224c(&uStack_50);
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = uStack_50;
    func_0x000107c43948(uStack_50);
    func_0x000107c615e8(uStack_50);
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1036dc0d8; end: 1036dc13f; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl shouldHideCTAButton:] */

uint FUN_1036dc0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036dc00c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036dc140; end: 1036dc4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dc140(void)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112f87d20);
  if (uVar6 != 0) {
    func_0x000107c43008();
    func_0x000107c61180();
    if (uVar6 != 0) {
      uVar13 = *(ulong *)(uVar6 + _DAT_113036748);
      if (uVar13 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar15 = uVar13;
        }
        func_0x000107c60480();
      }
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          if ((uVar13 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dc474);
              (*pcVar5)();
            }
            uVar7 = *(ulong *)(uVar13 + uVar16 * 8 + 0x20);
            func_0x000107c61174();
            lVar14 = _DAT_1130367b0;
          }
          else {
            uVar7 = uVar16;
            FUN_1036c8bb0(uVar16,uVar13);
            lVar14 = _DAT_1130367b0;
          }
          _DAT_1130367b0 = lVar14;
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1036dc228);
            (*pcVar5)();
          }
          uVar18 = uVar16 + 1;
          lVar12 = *(long *)(uVar7 + lVar14);
          if (*(int *)(lVar12 + _DAT_113036900) == 3) {
            uVar17 = *(undefined8 *)(*(long *)(lVar12 + _DAT_1130368e0) + _DAT_113036970);
            plVar1 = (long *)(*(long *)(lVar12 + _DAT_1130368e0) + _DAT_113036978);
            lVar11 = *plVar1;
            lVar3 = plVar1[1];
            uVar13 = *(ulong *)(lVar12 + _DAT_1130368e8);
            if ((uVar13 == 0) || (*(long *)(uVar13 + _DAT_113036a58) == 0)) {
              func_0x000107c61174();
              func_0x000107c61434(lVar3);
              FUN_1036dd0fc(uVar17,lVar11,lVar3);
              func_0x000107c6142c(lVar3);
              func_0x000107c61170(uVar13);
              if (lVar11 == 0) {
                func_0x000107c61170(uVar6);
                uVar6 = uVar7;
                break;
              }
            }
            else {
              uVar15 = uVar13;
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61434(lVar3);
              FUN_1036dcf10(uVar17,uVar13);
              FUN_1036dd0fc();
              if (lVar11 == 0) {
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar7);
                func_0x000107c6142c(lVar3);
                func_0x000107c61170(uVar15);
                uVar6 = uVar15;
                break;
              }
              uVar9 = uVar17;
              lVar10 = lVar11;
              func_0x0001036e2fc8();
              lVar12 = 0x112d36008;
              func_0x0001000285a8(0x112d36008,&UNK_10d900720);
              func_0x000107c613fc();
              *(undefined8 *)(lVar12 + 0x18) = 2;
              *(undefined8 *)(lVar12 + 0x10) = 1;
              *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
              lVar8 = lVar12;
              func_0x00010075bbf0();
              *(long *)(lVar12 + 0x40) = lVar8;
              *(undefined8 *)(lVar12 + 0x20) = uVar17;
              *(long *)(lVar12 + 0x28) = lVar11;
              lVar11 = lVar10;
              func_0x000107c5fb00(uVar9,lVar10,lVar12);
              func_0x000107c6142c(lVar3);
              func_0x000107c61170(uVar15);
              func_0x000107c61170(uVar15);
              func_0x000107c6142c(lVar10);
              uVar17 = uVar9;
            }
            uVar4 = *(undefined1 *)(*(long *)(uVar6 + _DAT_113036750) + _DAT_113042760);
            lVar14 = *(long *)(*(long *)(uVar7 + lVar14) + _DAT_1130368f0);
            uVar2 = 0;
            if (lVar14 != 0) {
              uVar2 = uVar4;
            }
            lVar12 = lVar14;
            func_0x000107c61174(lVar14);
            FUN_1036dd2cc(lVar14,uVar4);
            func_0x000107c61170(lVar12);
            uVar9 = 0;
            func_0x000103f6fd54(0);
            func_0x000107c610f8();
            func_0x000103f6fb6c(uVar17,lVar11,lVar14,uVar2,uVar9);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar7);
            return;
          }
          func_0x000107c61170();
          uVar16 = uVar16 + 1;
        } while (uVar18 != uVar15);
      }
      func_0x000107c61170(uVar6);
    }
  }
  return;
}



/* Entry: 1036dc4b4; end: 1036dc53f; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl lensPlusPriceText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dc4b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1036dc140();
  func_0x000107c61170(param_1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_1130363f0);
    lVar1 = ((undefined8 *)(lVar2 + _DAT_1130363f0))[1];
    func_0x000107c61434(lVar1);
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5fadc(uVar3,lVar1);
      func_0x000107c6142c(lVar1);
      goto LAB_1036dc530;
    }
  }
  uVar3 = 0;
LAB_1036dc530:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1036dc540; end: 1036dc573; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl lensPlusPriceInfo] */

void FUN_1036dc540(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1036dc140();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036dc574; end: 1036dc59b;  */

void FUN_1036dc574(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112f87d70 = puVar1;
  return;
}



/* Entry: 1036dc59c; end: 1036dc697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dc59c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87d38);
  lStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  uStack_48 = puVar1[5];
  uStack_50 = puVar1[4];
  uStack_38 = puVar1[7];
  uStack_40 = puVar1[6];
  if (lStack_68 == 1) {
    FUN_1036dc748(&uStack_f0);
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_128 = puVar1[1];
    uStack_130 = *puVar1;
    uStack_118 = puVar1[3];
    uStack_120 = puVar1[2];
    uStack_108 = puVar1[5];
    uStack_110 = puVar1[4];
    uStack_f8 = puVar1[7];
    uStack_100 = puVar1[6];
    puVar1[1] = uStack_e8;
    *puVar1 = uStack_f0;
    puVar1[3] = uStack_d8;
    puVar1[2] = uStack_e0;
    puVar1[5] = uStack_c8;
    puVar1[4] = uStack_d0;
    puVar1[7] = uStack_b8;
    puVar1[6] = uStack_c0;
    FUN_1036dd5c8(&uStack_f0,auStack_170,0x112f87d78,&UNK_10dbfbbf8);
    FUN_1036dd650(&uStack_130,0x112f87d80,&UNK_10dbfbc00);
  }
  else {
    uStack_a8 = puVar1[1];
    uStack_b0 = *puVar1;
    uStack_98 = puVar1[3];
    uStack_a0 = puVar1[2];
    uStack_88 = puVar1[5];
    uStack_90 = puVar1[4];
    uStack_78 = puVar1[7];
    uStack_80 = puVar1[6];
  }
  FUN_1036dd5c8(&uStack_70,&uStack_130,0x112f87d80,&UNK_10dbfbc00);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  return;
}



/* Entry: 1036dc698; end: 1036dc747;  */

/* WARNING: Possible PIC construction at 0x0001036dc724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036dc728) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1036dc698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c61174();
    FUN_1036dcc68();
    if (param_5 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 1036dc748; end: 1036dcb2f;  */

/* WARNING: Removing unreachable block (ram,0x0001036dca48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dc748(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_e6 [4];
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined1 **)(param_2 + _DAT_112f87d18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 == (undefined1 *)0x0) {
    uVar5 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    goto LAB_1036dca9c;
  }
  uVar5 = *(undefined8 *)(param_2 + _DAT_112f87d08);
  uVar11 = ((undefined8 *)(param_2 + _DAT_112f87d08))[1];
  func_0x000107c5fadc(uVar5);
  puVar6 = puVar4;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (puVar6 == (undefined1 *)0x0) {
LAB_1036dc838:
    func_0x000107c615e8(puVar4);
  }
  else {
    puVar7 = puVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x000107c61170(puVar6);
      goto LAB_1036dc838;
    }
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170();
    uVar2 = (uint)(uVar11 >> 0x20);
    uVar12 = uVar2 >> 0x1e;
    lVar13 = (long)puVar8 >> 0x20;
    if (uVar2 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar11 & 0xff000000000000) != 0) {
LAB_1036dc858:
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0xe000000000000000;
          uStack_c0 = 0;
          uStack_b8 = 0xe000000000000000;
          uStack_b0 = 0;
          uStack_a8 = 0xe000000000000000;
          uStack_98 = 0xc000000000000000;
          uStack_a0 = 0;
          if (uVar12 == 2) {
            lVar13 = *(long *)(puVar8 + 0x10);
            lVar14 = *(long *)(puVar8 + 0x18);
            func_0x000107c5ec30();
            puVar10 = puVar7;
            if (puVar7 != (undefined1 *)0x0) {
              puVar9 = puVar7;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar13,(long)puVar9)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dcb28);
                (*pcVar3)();
              }
              puVar10 = puVar7 + (lVar13 - (long)puVar9);
              puVar7 = puVar9;
            }
            puVar9 = (undefined1 *)(lVar14 - lVar13);
            if (SBORROW8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dcb24);
              (*pcVar3)();
            }
            func_0x000107c5ec38();
            puVar1 = puVar7;
            if ((long)puVar9 <= (long)puVar7) {
              puVar1 = puVar9;
            }
            puVar9 = (undefined1 *)0x0;
            if (puVar10 != (undefined1 *)0x0) {
              puVar9 = puVar1 + (long)puVar10;
            }
LAB_1036dca10:
            FUN_1036dd610();
          }
          else {
            if (uVar12 == 1) {
              lVar14 = (long)(int)puVar8;
              if (lVar13 < lVar14) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dcb20);
                (*pcVar3)();
              }
              func_0x000107c5ec30();
              if (puVar7 == (undefined1 *)0x0) {
                func_0x000107c5ec38();
                puVar10 = (undefined1 *)0x0;
              }
              else {
                puVar9 = puVar7;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar14,(long)puVar9)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dcb2c);
                  (*pcVar3)();
                }
                puVar10 = puVar7 + (lVar14 - (long)puVar9);
                func_0x000107c5ec38();
                puVar7 = puVar9;
                if (puVar10 != (undefined1 *)0x0) {
                  if (lVar13 - lVar14 <= (long)puVar9) {
                    puVar9 = (undefined1 *)(lVar13 - lVar14);
                  }
                  puVar9 = puVar9 + (long)puVar10;
                  goto LAB_1036dca10;
                }
              }
              puVar9 = (undefined1 *)0x0;
              goto LAB_1036dca10;
            }
            auStack_e6[0] = SUB81(puVar8,0);
            auStack_e6[1] = (undefined1)((ulong)puVar8 >> 8);
            auStack_e6[2] = (undefined1)((ulong)puVar8 >> 0x10);
            auStack_e6[3] = (undefined1)((ulong)puVar8 >> 0x18);
            uStack_e2 = (undefined1)((ulong)puVar8 >> 0x20);
            uStack_e1 = (undefined1)((ulong)puVar8 >> 0x28);
            uStack_e0 = (undefined1)((ulong)puVar8 >> 0x30);
            uStack_df = (undefined1)((ulong)puVar8 >> 0x38);
            uStack_de = (undefined1)uVar11;
            uStack_dd = (undefined1)(uVar11 >> 8);
            uStack_dc = (undefined1)(uVar11 >> 0x10);
            uStack_db = (undefined1)(uVar11 >> 0x18);
            uStack_da = (undefined1)(uVar11 >> 0x20);
            uStack_d9 = (undefined1)(uVar11 >> 0x28);
            puVar9 = auStack_e6 + (uVar11 >> 0x30 & 0xff);
            FUN_1036dd610();
            puVar10 = auStack_e6;
          }
          func_0x00010006ae80(puVar10,puVar9,&uStack_90,0,100,0,&UNK_1106830e0,puVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c615e8(puVar4);
          func_0x00010006c090(puVar8,uVar11);
          FUN_1036dd650(&uStack_90,0x112d49548,&UNK_10d90fde0);
          uVar5 = uStack_c0;
          uVar15 = uStack_b8;
          uVar16 = uStack_b0;
          uVar17 = uStack_a8;
          uVar18 = uStack_a0;
          uVar19 = uStack_98;
          uVar20 = uStack_d0;
          uVar21 = uStack_c8;
          goto LAB_1036dca9c;
        }
      }
      else if ((int)puVar8 != lVar13) goto LAB_1036dc858;
    }
    else if ((uVar12 == 2) && (*(long *)(puVar8 + 0x10) != *(long *)(puVar8 + 0x18)))
    goto LAB_1036dc858;
    func_0x000107c615e8(puVar4);
    func_0x00010006c090(puVar8,uVar11);
    func_0x000107c61170(puVar6);
  }
  uVar5 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
LAB_1036dca9c:
  param_1[1] = uVar21;
  *param_1 = uVar20;
  param_1[3] = uVar15;
  param_1[2] = uVar5;
  param_1[5] = uVar17;
  param_1[4] = uVar16;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusOverlayCTAServiceImpl",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dcb5c);
  (*pcVar3)();
}



/* Entry: 1036dcb30; end: 1036dcb8f; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl init] */

void FUN_1036dcb30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusOverlayCTAServiceImpl",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dcb5c);
  (*pcVar1)();
}



/* Entry: 1036dcb90; end: 1036dcc47; -[_TtC32SCLensPlusServicesImplementation29LensPlusOverlayCTAServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036dcbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036dcbd8) */
/* WARNING: Removing unreachable block (ram,0x0001036dd6c4) */
/* WARNING: Removing unreachable block (ram,0x0001036dd6d0) */
/* WARNING: Removing unreachable block (ram,0x0001036dd6d4) */
/* WARNING: Removing unreachable block (ram,0x0001036dd728) */
/* WARNING: Removing unreachable block (ram,0x0001036dd6d8) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001036dd6cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dcb90(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f87d00 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f87d08 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f87d10));
  return;
}



/* Entry: 1036dcc48; end: 1036dcc67;  */

void FUN_1036dcc48(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2ca0);
  return;
}



/* Entry: 1036dcc68; end: 1036dcf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036dcc68(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  uVar10 = *(ulong *)(param_1 + _DAT_113036748);
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    lVar3 = _DAT_113042760;
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
    lVar3 = _DAT_113042760;
  }
  _DAT_113042760 = lVar3;
  if (uVar9 != 0) {
    lVar8 = *(long *)(param_1 + _DAT_113036750);
    if ((uVar10 & 0xc000000000000001) == 0) {
      puVar12 = (ulong *)(uVar10 + 0x20);
      lVar14 = *(long *)((uVar10 & 0xffffffffffffff8) + 0x10);
      do {
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dcec4);
          (*pcVar4)();
        }
        uVar6 = *puVar12;
        lVar13 = *(long *)(uVar6 + _DAT_1130367b0);
        puVar2 = (ulong *)(lVar13 + _DAT_1130368c8);
        uVar10 = *puVar2;
        uVar7 = puVar2[1];
        if ((uVar10 == param_2 && uVar7 == param_3) ||
           (func_0x000107c605b8(uVar10,uVar7,param_2,param_3,0), (uVar10 & 1) != 0)) {
          uVar7 = ((ulong *)(uVar6 + _DAT_1130367a8))[1];
          if (((uVar7 != 0) &&
              ((uVar10 = *(ulong *)(uVar6 + _DAT_1130367a8), uVar10 == param_4 && uVar7 == param_5
               || (func_0x000107c605b8(uVar10,uVar7,param_4,param_5,0), (uVar10 & 1) != 0)))) ||
             ((*(char *)(lVar8 + lVar3) == '\x01' && (*(long *)(lVar13 + _DAT_1130368f0) != 0)))) {
            func_0x000107c61174(uVar6);
            uVar5 = uVar6;
            goto LAB_1036dce9c;
          }
        }
        lVar14 = lVar14 + -1;
        puVar12 = puVar12 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      uVar11 = 0;
      do {
        uVar5 = uVar11;
        FUN_1036c8bb0(uVar11,uVar10);
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1036dcec0);
          (*pcVar4)();
        }
        lVar14 = *(long *)(uVar5 + _DAT_1130367b0);
        puVar12 = (ulong *)(lVar14 + _DAT_1130368c8);
        uVar6 = *puVar12;
        uVar7 = puVar12[1];
        if ((uVar6 == param_2 && uVar7 == param_3) ||
           (func_0x000107c605b8(uVar6,uVar7,param_2,param_3,0), (uVar6 & 1) != 0)) {
          uVar7 = ((ulong *)(uVar5 + _DAT_1130367a8))[1];
          if (((uVar7 != 0) &&
              ((uVar6 = *(ulong *)(uVar5 + _DAT_1130367a8), uVar6 == param_4 && uVar7 == param_5 ||
               (func_0x000107c605b8(uVar6,uVar7,param_4,param_5,0), (uVar6 & 1) != 0)))) ||
             ((*(char *)(lVar8 + lVar3) == '\x01' && (*(long *)(lVar14 + _DAT_1130368f0) != 0))))
          goto LAB_1036dce9c;
        }
        func_0x000107c615e8(uVar5);
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar9);
    }
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_1036dcef0:
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = uVar6;
  return auVar15;
LAB_1036dce9c:
  func_0x0001036e2e30();
  func_0x000107c61170(uVar5);
  goto LAB_1036dcef0;
}



/* Entry: 1036dcf10; end: 1036dd0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036dcf10(long param_1,long param_2)

{
  code *pcVar1;
  double dVar2;
  long lStack_18;
  
  if ((param_2 != 0) && (*(ulong *)(param_2 + _DAT_113036a58) != 0)) {
    dVar2 = (double)param_1 / (double)*(ulong *)(param_2 + _DAT_113036a58);
    lStack_18 = *(long *)(param_2 + _DAT_113036a60);
    if (lStack_18 < 2) {
      if (lStack_18 == 0) {
        dVar2 = (double)(long)((dVar2 * 365.0) / 12.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0a4);
          (*pcVar1)();
        }
        if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0b4);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dcfa8);
          (*pcVar1)();
        }
      }
      else {
        if (lStack_18 != 1) {
LAB_1036dd0c4:
          func_0x000107c61174(param_2);
          func_0x000107c60614(&UNK_1107278f8,&lStack_18,&UNK_1107278f8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0fc);
          (*pcVar1)();
        }
        dVar2 = (double)(long)((dVar2 * 52.0) / 12.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0ac);
          (*pcVar1)();
        }
        if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0bc);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd04c);
          (*pcVar1)();
        }
      }
    }
    else if (lStack_18 == 2) {
      dVar2 = (double)(long)dVar2;
      if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0a8);
        (*pcVar1)();
      }
      if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0b8);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dcff0);
        (*pcVar1)();
      }
    }
    else {
      if (lStack_18 != 3) goto LAB_1036dd0c4;
      dVar2 = (double)(long)(dVar2 / 12.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0b0);
        (*pcVar1)();
      }
      if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0c0);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036dd0c4);
        (*pcVar1)();
      }
    }
    param_1 = (long)dVar2;
  }
  return param_1;
}



/* Entry: 1036dd0fc; end: 1036dd2cb;  */

undefined1  [16] FUN_1036dd0fc(long param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = param_2;
    pcVar5 = param_3;
    func_0x000107c5fadc(param_2,param_3);
    if (lRam0000000112f87d68 != -1) {
      pcVar5 = FUN_1036dc574;
      func_0x000107c61568(0x112f87d68,FUN_1036dc574);
    }
    puVar4 = puRam0000000112f87d70;
    puVar2 = puRam0000000112f87d70;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61180();
      func_0x000107c56bbc();
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c53c64(puVar3);
      func_0x000107c61170(param_2);
      func_0x000107c56bcc(puVar4);
      pcVar5 = param_3;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61174(puVar2);
    func_0x000107c466c0((double)param_1 / 1000.0,puVar4);
    puVar2 = puVar3;
    func_0x000107c5c1c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61170(uVar1);
      func_0x000107c61170(puVar3);
      puVar4 = (undefined *)0x0;
      pcVar5 = (code *)0x0;
    }
    else {
      puVar4 = puVar2;
      func_0x000107c5faec(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(puVar3);
    }
    auVar6._8_8_ = pcVar5;
    auVar6._0_8_ = puVar4;
    return auVar6;
  }
  return ZEXT816(0);
}



/* Entry: 1036dd2cc; end: 1036dd52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036dd2cc(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uStack_58;
  
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  uStack_58 = *(ulong *)(param_1 + _DAT_1130369d0);
  if (uStack_58 < 2) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + _DAT_1130369b8) + _DAT_113036970);
    plVar1 = (long *)(*(long *)(param_1 + _DAT_1130369b8) + _DAT_113036978);
    lVar10 = *(long *)(param_1 + _DAT_1130369c0);
    lVar8 = *plVar1;
    lVar2 = plVar1[1];
    if (*(long *)(lVar10 + _DAT_113036a58) == 0) {
      func_0x000107c61174(lVar10);
      func_0x000107c61434(lVar2);
      lVar6 = param_1;
      func_0x000107c61174(param_1);
      FUN_1036dd0fc(uVar9,lVar8,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(lVar10);
      if (lVar8 == 0) goto LAB_1036dd504;
    }
    else {
      lVar6 = lVar10;
      func_0x000107c61174(lVar10);
      func_0x000107c61174();
      func_0x000107c61434(lVar2);
      lVar4 = param_1;
      func_0x000107c61174(param_1);
      FUN_1036dcf10(uVar9,lVar10);
      FUN_1036dd0fc();
      if (lVar8 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c6142c(lVar2);
        func_0x000107c61170(lVar6);
LAB_1036dd504:
        func_0x000107c61170(lVar6);
        goto LAB_1036dd50c;
      }
      uVar5 = uVar9;
      lVar7 = lVar8;
      func_0x0001036e2fc8();
      lVar10 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 2;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      *(undefined **)(lVar10 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar10;
      func_0x00010075bbf0();
      *(long *)(lVar10 + 0x40) = lVar4;
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      *(long *)(lVar10 + 0x28) = lVar8;
      lVar8 = lVar7;
      func_0x000107c5fb00(uVar5,lVar7,lVar10);
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c6142c(lVar7);
      uVar9 = uVar5;
    }
    func_0x000103f6fd34(0);
    func_0x000107c610f8();
    func_0x000103f6f968(uVar9,lVar8);
    func_0x000107c61170(param_1);
  }
  else {
    if (uStack_58 != 2) {
      func_0x000107c61174(param_1);
      func_0x000107c60614(&UNK_1107276c0,&uStack_58,&UNK_1107276c0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036dd470);
      (*pcVar3)();
    }
LAB_1036dd50c:
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 1036dd52c; end: 1036dd55f;  */

void FUN_1036dd52c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = param_1;
  if (param_1 == 0) {
    func_0x000107c61174(lVar2);
    lVar3 = lVar2;
  }
  func_0x000107c61174(param_1);
  func_0x000107c3fefc(uVar1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1036dd560; end: 1036dd5b7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1036dd560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  uVar1 = (uint)(param_8 >> 0x3e);
  if (uVar1 == 1) {
    param_7 = param_8 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_7);
  return;
}



/* Entry: 1036dd5b8; end: 1036dd5c7;  */

/* WARNING: Possible PIC construction at 0x0001036dc724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036dc728) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1036dd5b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c61174();
    FUN_1036dcc68();
    if (lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 1036dd5c8; end: 1036dd60f;  */

undefined8 FUN_1036dd5c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1036dd610; end: 1036dd64f;  */

void FUN_1036dd610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f87d88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbfc1d0;
  func_0x000107c61520(&DAT_10dbfc1d0,&UNK_1106830e0);
  puRam0000000112f87d88 = puVar1;
  return;
}



/* Entry: 1036dd650; end: 1036dd6c3;  */

undefined8 FUN_1036dd650(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1036dd6c4; end: 1036dd6d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036dd6c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if (param_2 == 1) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_6);
  uVar1 = (uint)(param_8 >> 0x3e);
  if (uVar1 == 1) {
    param_7 = param_8 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_7);
  return;
}



/* Entry: 1036dd6d4; end: 1036dd72b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036dd6d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_6);
  uVar1 = (uint)(param_8 >> 0x3e);
  if (uVar1 == 1) {
    param_7 = param_8 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_7);
  return;
}



/* Entry: 1036dd72c; end: 1036dd733;  */

void FUN_1036dd72c(long param_1,long param_2)

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



/* Entry: 1036dd734; end: 1036dd78f;  */

/* WARNING: Possible PIC construction at 0x0001036dd748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036dd74c) */

void FUN_1036dd734(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1036dd790; end: 1036dd7eb;  */

undefined8 * FUN_1036dd790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1036dd7ec; end: 1036dd827;  */

undefined8 * FUN_1036dd7ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1036dd828; end: 1036dd8bb;  */

int FUN_1036dd828(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036dd8bc; end: 1036dda3b;  */

undefined * FUN_1036dd8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_48);
  uVar5 = param_1;
  func_0x000107c614f0(param_1);
  FUN_1036ddd8c();
  uVar2 = uStack_48;
  func_0x000107c4314c(uStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar5);
  puVar3 = &UNK_110682798;
  func_0x000107c613fc(&UNK_110682798,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  pcStack_58 = FUN_1036ddafc;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_101d58ff0;
  puStack_60 = &UNK_1106827b0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_50;
  func_0x000107c6157c(param_3);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c5dc64(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  puVar3 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1036e604c(0);
  func_0x000107c610f8();
  FUN_1036e5708(puVar3,uVar5);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1036dda3c; end: 1036ddafb;  */

void FUN_1036dda3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    func_0x0001036e2efc();
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = &UNK_1106827e8;
  func_0x000107c613fc(&UNK_1106827e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x0001036e55a8(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_3);
  func_0x000107c615f0(param_4);
  func_0x0001036e5558(param_1,param_2,FUN_1036ddbc8,puVar1);
  func_0x000107c3fefc(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036ddafc; end: 1036ddb23;  */

void FUN_1036ddafc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    func_0x0001036e2efc();
  }
  else {
    func_0x000107c5faec();
  }
  puVar3 = &UNK_1106827e8;
  func_0x000107c613fc(&UNK_1106827e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001036e55a8(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  func_0x0001036e5558(param_1,param_2,FUN_1036ddbc8,puVar3);
  func_0x000107c3fefc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036ddb24; end: 1036ddbc7;  */

void FUN_1036ddb24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = param_2;
  func_0x000107c614f0(param_2);
  FUN_1036ddd8c();
  func_0x000107c4c010(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4a7a8();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c4efa4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1036ddbc8; end: 1036ddbd7;  */

void FUN_1036ddbc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = uVar2;
  func_0x000107c614f0(uVar2);
  FUN_1036ddd8c();
  func_0x000107c4c010(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a7a8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c4efa4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1036ddbd8; end: 1036ddc5f;  */

uint FUN_1036ddbd8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  uVar4 = (uint)*(byte *)(unaff_x20 + 0x28);
  if (*(byte *)(unaff_x20 + 0x28) == 2) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
      lVar3 = lVar1;
      func_0x000107c3ebd4();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
    }
    *(char *)(unaff_x20 + 0x28) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 1036ddc60; end: 1036ddce7;  */

void FUN_1036ddc60(ulong param_1)

{
  func_0x000107c4a4c0();
  if ((int)param_1 != 0) {
    FUN_1036ddbd8();
    if ((param_1 & 1) == 0) {
      if (lRam0000000112f884d8 != -1) {
        func_0x000107c61568(0x112f884d8,FUN_1036e328c);
      }
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x000107c46db4();
    }
    else {
      FUN_1036d8190(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
  }
  return;
}



/* Entry: 1036ddce8; end: 1036ddd3f; -[_TtC32SCLensPlusServicesImplementation38LensPlusPostCaptureCellOverlayProvider iconOverlayFor:] */

void FUN_1036ddce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1036ddc60(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036ddd40; end: 1036ddd8b;  */

void FUN_1036ddd40(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036ddd8c; end: 1036ddff3;  */

undefined * FUN_1036ddd8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c4c010();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar7 = 0;
      uVar6 = 0xe000000000000000;
    }
    else {
      lVar7 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      uVar6 = param_2;
    }
    puVar5 = PTR_PTR_1126bb898;
    func_0x000107c610f8(PTR_PTR_1126bb898);
    param_2 = uVar6;
    func_0x000107c5fadc(lVar7,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c45604(puVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar7);
  }
  puVar3 = PTR_PTR_1126b0820;
  func_0x000107c610f8(PTR_PTR_1126b0820);
  func_0x000107c453e4();
  func_0x000107c434c4();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar4 = puVar3;
  func_0x000107c5e650(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(unaff_x20);
  puVar3 = puVar4;
  func_0x000107c5e850(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c3ecc8(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 1036ddff4; end: 1036de0bf; -[SCLensPlusPreviewCTAProvider ctaViewFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ddff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f87e40);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f87e40))[1];
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f87e48);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f87e50);
  puVar3 = &UNK_110682810;
  func_0x000107c613fc(&UNK_110682810,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  func_0x0001036e2b7c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  FUN_1036e2434(uVar5,FUN_1036de194,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036de0c0; end: 1036de11f; -[SCLensPlusPreviewCTAProvider init] */

void FUN_1036de0c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusPreviewCTAProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de0ec);
  (*pcVar1)();
}



/* Entry: 1036de120; end: 1036de173; -[SCLensPlusPreviewCTAProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036de120(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f87e40);
  func_0x000107c61574(((undefined8 *)(param_1 + _DAT_112f87e40))[1]);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87e48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87e50));
  return;
}



/* Entry: 1036de174; end: 1036de193;  */

void FUN_1036de174(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2d98);
  return;
}



/* Entry: 1036de194; end: 1036de19f;  */

void FUN_1036de194(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = lVar1;
  func_0x000107c49fa8(lVar1,uVar5);
  if ((int)lVar4 != 0) {
    func_0x0001000d224c(&uStack_48);
    lVar4 = lVar1;
    func_0x000107c434c4();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    uVar5 = uStack_48;
    func_0x000107c49fa4();
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(lVar4);
    if ((int)uVar5 != 0) {
      FUN_1036dd8bc(lVar1,uVar2,uVar3);
    }
  }
  return;
}



/* Entry: 1036de1a0; end: 1036de3fb;  */

void FUN_1036de1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  return;
}



/* Entry: 1036de3fc; end: 1036de40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036de3fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar12 = &lStack_70;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1036de3f8);
    (*pcVar5)();
  }
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = 0;
    func_0x0001003da984();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar4 = _DAT_112f87c98;
    uVar11 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    func_0x00010006a360();
    *(undefined8 *)(lVar10 + lVar4) = uVar11;
    *(undefined8 *)(lVar10 + _DAT_112f87ca0) = 0;
    *(undefined8 *)(lVar10 + _DAT_112f87ca8) = 1;
    *(undefined8 *)(lVar10 + _DAT_112f87cb0) = 1;
    *(undefined1 *)(lVar10 + _DAT_112f87cb8) = 2;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112f87cc0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112f87cc8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)(lVar10 + _DAT_112f87cd0) = 2;
    *(undefined8 *)(lVar10 + _DAT_112f87c70) = uVar6;
    *(undefined8 *)(lVar10 + _DAT_112f87c78) = uVar2;
    *(long *)(lVar10 + _DAT_112f87c80) = lVar7;
    *(long *)(lVar10 + _DAT_112f87c88) = lVar8;
    *(undefined8 *)(lVar10 + _DAT_112f87c90) = uVar13;
    puVar3 = PTR_s_init_1125d9248;
    lStack_70 = lVar10;
    lStack_68 = lVar9;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar13);
    func_0x000107c61154(&lStack_70,puVar3);
    *param_1 = plVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1036de3fc);
  (*pcVar5)();
}



/* Entry: 1036de40c; end: 1036de48f;  */

void FUN_1036de40c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (param_4 != 0) {
    func_0x0001003da9a4(0);
    func_0x000107c610f8();
    func_0x000107c6157c(param_3);
    func_0x000107c6157c();
    FUN_1036bf8f0();
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de490);
  (*pcVar1)();
}



/* Entry: 1036de490; end: 1036de49b;  */

void FUN_1036de490(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001003da9a4(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c();
    FUN_1036bf8f0();
    *param_1 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036de490);
  (*pcVar2)();
}



/* Entry: 1036de49c; end: 1036de547;  */

void FUN_1036de49c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de548);
    (*pcVar1)();
  }
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000108c2bc24();
    if ((int)lVar3 != 0) {
      func_0x0001000d224c(&uStack_48);
      func_0x000107c615e8(lVar2);
      goto LAB_1036de524;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000d224c(&uStack_48);
LAB_1036de524:
  *param_1 = uStack_48;
  return;
}



/* Entry: 1036de548; end: 1036de553;  */

void FUN_1036de548(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa08(lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de548);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000108c2bc24();
    if ((int)lVar2 != 0) {
      func_0x0001000d224c(&uStack_48);
      func_0x000107c615e8(lVar3);
      goto LAB_1036de524;
    }
    func_0x000107c615e8(lVar3);
  }
  func_0x0001000d224c(&uStack_48);
LAB_1036de524:
  *param_1 = uStack_48;
  return;
}



/* Entry: 1036de554; end: 1036de5bb;  */

void FUN_1036de554(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1036de5bc; end: 1036de627;  */

void FUN_1036de5bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (param_3 != 0) {
    FUN_1036dcc48(0);
    func_0x000107c610f8();
    func_0x000107c6157c();
    FUN_1036db490();
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de628);
  (*pcVar1)();
}



/* Entry: 1036de628; end: 1036de62f;  */

void FUN_1036de628(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar2 != 0) {
    FUN_1036dcc48(0);
    func_0x000107c610f8();
    func_0x000107c6157c();
    FUN_1036db490();
    *param_1 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de628);
  (*pcVar1)();
}



/* Entry: 1036de630; end: 1036de75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036de630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1036e122c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f88180) = 2;
  *(undefined1 *)(lVar3 + _DAT_112f88188) = 2;
  *(undefined8 *)(lVar3 + _DAT_112f88190) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f88158) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f88160) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f88168) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f88170) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f88178) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036de75c; end: 1036de76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036de75c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_1036e122c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112f88180) = 2;
  *(undefined1 *)(lVar7 + _DAT_112f88188) = 2;
  *(undefined8 *)(lVar7 + _DAT_112f88190) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f88158) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f88160) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f88168) = uVar5;
  *(undefined8 *)(lVar7 + _DAT_112f88170) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f88178) = uVar9;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar3);
  *param_1 = plVar8;
  return;
}



/* Entry: 1036de76c; end: 1036de7df;  */

void FUN_1036de76c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar2 = 0;
    func_0x0001036ddd6c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x10) = 0xd000000000000033;
    *(undefined8 *)(lVar2 + 0x18) = 0x800000010f159360;
    *(undefined1 *)(lVar2 + 0x28) = 2;
    *(long *)(lVar2 + 0x20) = param_2;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de7e0);
  (*pcVar1)();
}



/* Entry: 1036de7e0; end: 1036de7e7;  */

void FUN_1036de7e0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa08();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = 0;
    func_0x0001036ddd6c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x10) = 0xd000000000000033;
    *(undefined8 *)(lVar2 + 0x18) = 0x800000010f159360;
    *(undefined1 *)(lVar2 + 0x28) = 2;
    *(long *)(lVar2 + 0x20) = lVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036de7e0);
  (*pcVar1)();
}



/* Entry: 1036de7e8; end: 1036de817;  */

void FUN_1036de7e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001036bf710();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036de818; end: 1036de913;  */

void FUN_1036de818(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_38;
  
  lVar1 = 0;
  FUN_1036bee10();
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1036dea60();
  puStack_38 = puVar2;
  func_0x0001000285a8(0x112f88018,&UNK_10dbfbdc8);
  func_0x000107c613fc();
  ppuVar3 = &puStack_38;
  func_0x00010006c248();
  *(undefined ***)(lVar1 + 0x10) = ppuVar3;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1106805d8;
  return;
}



/* Entry: 1036de914; end: 1036de93b;  */

void FUN_1036de914(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_110680668;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1036de93c; end: 1036dea3b;  */

/* WARNING: Possible PIC construction at 0x0001036de950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036de960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036de978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036de988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036de998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036de98c) */
/* WARNING: Removing unreachable block (ram,0x0001036de97c) */
/* WARNING: Removing unreachable block (ram,0x0001036de964) */
/* WARNING: Removing unreachable block (ram,0x0001036de954) */
/* WARNING: Removing unreachable block (ram,0x0001036de99c) */

void FUN_1036de93c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036dea3c; end: 1036dea5f;  */

void FUN_1036dea3c(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001003da198();
  *param_1 = param_2;
  return;
}



/* Entry: 1036dea60; end: 1036deb4b;  */

undefined * FUN_1036dea60(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f86fe8,&UNK_10dbfb120);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (ulong *)(param_1 + 0x28);
    do {
      uVar2 = puVar9[-1];
      uVar3 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036deb48);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036deb4c);
        (*pcVar4)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1036deb4c; end: 1036deb4f;  */

void FUN_1036deb4c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1036deb50; end: 1036dec47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036deb50(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lStack_38;
  
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f88020);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c41050();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c370();
      func_0x000107c61170(lVar2);
      func_0x0001000d224c(&lStack_38);
      lVar2 = lStack_38;
      func_0x000107c42b3c();
      func_0x000107c615e8(lStack_38);
      if (lVar2 == 0) {
        lVar2 = lVar1;
        func_0x000107c41050(lVar1);
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c4a564();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        uVar4 = (uint)lVar3 ^ 1;
      }
      else {
        uVar4 = (uint)(lVar3 - 4U < 0xfffffffffffffffe);
        func_0x000107c61170(lVar1);
      }
    }
  }
  return uVar4;
}



/* Entry: 1036dec48; end: 1036dec83; -[_TtC32SCLensPlusServicesImplementation28LensPlusTierCheckServiceImpl isLensLockedBySubscriptionStatus:] */

uint FUN_1036dec48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1036deb50(param_3);
  func_0x000107c61170(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 1036dec84; end: 1036decdf; -[_TtC32SCLensPlusServicesImplementation28LensPlusTierCheckServiceImpl init] */

void FUN_1036dec84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusTierCheckServiceImpl",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036decb0);
  (*pcVar1)();
}



/* Entry: 1036dece0; end: 1036ded17; -[_TtC32SCLensPlusServicesImplementation28LensPlusTierCheckServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036dece0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f88020));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f88028));
  return;
}



/* Entry: 1036ded18; end: 1036ded37;  */

void FUN_1036ded18(void)

{
  func_0x000107c61168(&PTR_PTR_1128e2e68);
  return;
}



/* Entry: 1036ded38; end: 1036deec7;  */

void FUN_1036ded38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}


