/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086f68bc; end: 1086f697f;  */

void FUN_1086f68bc(void)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001086f75f0();
  if (in_NG != in_OV) {
    cVar1 = SBORROW8(extraout_x9,extraout_x8);
    cVar2 = extraout_x9 - extraout_x8 < 0;
    if (extraout_x8 <= extraout_x9) {
      FUN_1086ad29c();
      func_0x0001086f75bc(*(undefined8 *)(unaff_x20 + 0x88));
      if (cVar2 == cVar1) {
        return;
      }
    }
code_r0x0001086ad29c:
    func_0x000107c324b0();
    func_0x0001086b0a24(auStack_c8);
    func_0x0001086b0314();
    func_0x0001086ad2d8();
    func_0x000107c32508();
    func_0x0001086ad2d8();
    func_0x0001086b09c8();
    return;
  }
  cVar1 = SBORROW8(extraout_x9,extraout_x8);
  cVar2 = extraout_x9 - extraout_x8 < 0;
  if (extraout_x9 < extraout_x8) {
    func_0x0001086f7800();
    func_0x0001086f7540(*(undefined8 *)(unaff_x19 + 0x88));
    if (cVar2 != cVar1) goto code_r0x0001086ad29c;
  }
  return;
}



/* Entry: 1086f6980; end: 1086f69e7;  */

void FUN_1086f6980(void)

{
  char in_NG;
  char in_OV;
  long in_x4;
  long unaff_x22;
  undefined1 auStack_c8 [136];
  
  func_0x0001086f74b8();
  func_0x0001086f6930();
  func_0x0001086f76dc(*(undefined8 *)(in_x4 + 0x88));
  if (in_NG != in_OV) {
    func_0x0001086f78c4();
    func_0x0001086f7540(*(undefined8 *)(unaff_x22 + 0x88));
    if (in_NG != in_OV) {
      func_0x0001086f74e4();
      func_0x0001086f75ac();
      if (in_NG != in_OV) {
        func_0x0001086f74cc();
        func_0x0001086f754c();
        if (in_NG != in_OV) {
          func_0x0001086f7970();
          func_0x000107c324b0();
          func_0x0001086b0a24(auStack_c8);
          func_0x0001086b0314();
          func_0x0001086ad2d8();
          func_0x000107c32508();
          func_0x0001086ad2d8();
          func_0x0001086b09c8();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1086f69e8; end: 1086f6afb;  */

/* WARNING: Removing unreachable block (ram,0x0001086f6aec) */

undefined8 FUN_1086f69e8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  func_0x0001086f7670();
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar3 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001086f6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df48f8a)[extraout_x8] * 4 + 0x1086f6a28))(1);
    return uVar3;
  }
  func_0x0001086f7a30();
  FUN_1086f68bc();
  lVar5 = 0;
  lVar4 = unaff_x19 + 0x1f8;
  do {
    cVar1 = SBORROW8(lVar4,unaff_x20);
    cVar2 = lVar4 - unaff_x20 < 0;
    if (lVar4 == unaff_x20) {
      return 1;
    }
    func_0x0001086f76dc(*(undefined8 *)(lVar4 + 0x88));
    if (cVar2 != cVar1) {
      func_0x0001086f77f4();
      do {
        func_0x0001086f7704();
        cVar1 = SCARRY8(lVar5,0x150);
        cVar2 = lVar5 + 0x150 < 0;
        if (lVar5 == -0x150) break;
        func_0x0001086f7a08();
      } while (cVar2 != cVar1);
      func_0x0001086ad2d8();
      func_0x0001086f78d0();
    }
    lVar4 = lVar4 + 0xa8;
    lVar5 = lVar5 + 0xa8;
  } while( true );
}



/* Entry: 1086f6afc; end: 1086f6b1f;  */

void FUN_1086f6afc(long param_1)

{
  func_0x000107c32b28();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1086f6b20; end: 1086f6b4b;  */

void FUN_1086f6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_1086f6b4c(&uStack_30,&uStack_20);
  return;
}



/* Entry: 1086f6b4c; end: 1086f6b8f;  */

long FUN_1086f6b4c(long *param_1,undefined8 *param_2)

{
  if (param_1[1] != param_2[1]) {
    return ((param_1[1] - *(long *)*param_1 >> 3) + (*param_1 - (long)*param_2) * 0x40) -
           (param_2[1] - *(long *)*param_2 >> 3);
  }
  return 0;
}



/* Entry: 1086f6b90; end: 1086f703b;  */

void FUN_1086f6b90(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  long extraout_x9_02;
  long lVar8;
  long lVar9;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar10;
  ulong unaff_x28;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [304];
  long lStack_88;
  
  func_0x000107c32b00();
  do {
    func_0x0001086f77ac();
    uVar6 = unaff_x28;
LAB_1086f6bc4:
    while( true ) {
      func_0x0001086f79e0();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001086f6dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df48f90)[unaff_x26] * 4 + 0x1086f6df0))();
        return;
      }
      bVar3 = 0xfbe < extraout_x8;
      cVar4 = SBORROW8(extraout_x8,0xfbf);
      cVar5 = (long)(extraout_x8 - 0xfbf) < 0;
      if ((long)extraout_x8 < 0xfc0) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar6 = unaff_x20;
            unaff_x20 = uVar6 + 0xa8;
            cVar4 = SBORROW8(unaff_x20,unaff_x19);
            cVar5 = (long)(unaff_x20 - unaff_x19) < 0;
            if (unaff_x20 == unaff_x19) break;
            func_0x0001086f7540(*(undefined8 *)(uVar6 + 0x130));
            if (cVar5 != cVar4) {
              func_0x0001086f74ac();
              do {
                func_0x0001086f76b8(uVar6 + 0xa8);
                func_0x0001086f7764();
              } while (cVar5 != cVar4);
              func_0x0001086f7658(extraout_x8_06 + 0xa8);
              func_0x0001086f74f0();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar7 = 0;
        goto LAB_1086f6e40;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        func_0x0001086f7a1c();
        goto LAB_1086f6ea8;
      }
      func_0x0001086f79cc();
      if (bVar3) {
        func_0x0001086f78bc();
        func_0x0001086f79b8();
        FUN_1086f703c();
        FUN_1086f703c(unaff_x20 + 0x150,unaff_x26 + 0xa8,uStack_1c8);
        FUN_1086f703c(unaff_x27,unaff_x26,unaff_x26 + 0xa8);
        unaff_x28 = unaff_x20;
        func_0x0001086f76b0();
      }
      else {
        unaff_x28 = unaff_x26;
        func_0x0001086f78bc();
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x0001086f75c8(*(undefined8 *)(unaff_x20 - 0x20)), cVar5 != cVar4)) break;
      func_0x0001086f74ac();
      lVar7 = *(long *)(unaff_x19 - 0x20);
      cVar4 = SBORROW8(lStack_88,lVar7);
      cVar5 = lStack_88 - lVar7 < 0;
      uVar10 = unaff_x20;
      if (lStack_88 < lVar7) {
        do {
          func_0x0001086f79a4();
        } while (cVar5 == cVar4);
      }
      else {
        do {
          unaff_x26 = uVar10 + 0xa8;
          if (unaff_x19 <= unaff_x26) break;
          plVar1 = (long *)(uVar10 + 0x130);
          uVar10 = unaff_x26;
        } while (*plVar1 <= lStack_88);
      }
      cVar4 = SBORROW8(unaff_x26,unaff_x19);
      cVar5 = (long)(unaff_x26 - unaff_x19) < 0;
      uVar10 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          func_0x0001086f78fc();
        } while (cVar5 != cVar4);
      }
      while (unaff_x26 < uVar10) {
        func_0x0001086f786c();
        do {
          func_0x0001086f793c();
        } while (extraout_x9_02 <= extraout_x8_01);
        do {
          plVar1 = (long *)(uVar10 - 0x20);
          uVar10 = uVar10 - 0xa8;
        } while (extraout_x8_01 < *plVar1);
      }
      in_CY = unaff_x26 - 0xa8 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0xa8;
      if (!(bool)in_ZR) {
        func_0x0001086f7860();
      }
      func_0x0001086f7818();
      func_0x0001086f74f0();
      param_4 = 0;
    }
    func_0x0001086f74ac();
    do {
      func_0x0001086f797c();
    } while (cVar5 != cVar4);
    unaff_x26 = unaff_x20 + extraout_x9;
    cVar4 = SBORROW8(extraout_x9,0xa8);
    cVar5 = extraout_x9 + -0xa8 < 0;
    uVar6 = unaff_x19;
    if (extraout_x9 == 0xa8) {
      do {
        cVar4 = SBORROW8(unaff_x26,uVar6);
        cVar5 = (long)(unaff_x26 - uVar6) < 0;
        uVar10 = uVar6;
        uVar2 = uVar6;
        if (uVar6 <= unaff_x26) break;
        func_0x0001086f7948();
        uVar6 = extraout_x9_00;
        uVar10 = unaff_x24;
        uVar2 = unaff_x24;
      } while (cVar5 == cVar4);
    }
    else {
      do {
        func_0x0001086f795c();
        uVar10 = unaff_x24;
        uVar2 = unaff_x24;
      } while (cVar5 == cVar4);
    }
    while (unaff_x24 = uVar2, unaff_x26 < uVar10) {
      func_0x0001086f7878();
      do {
        func_0x0001086f793c();
      } while (extraout_x9_01 < extraout_x8_00);
      do {
        plVar1 = (long *)(uVar10 - 0x20);
        uVar10 = uVar10 - 0xa8;
        uVar2 = unaff_x24;
      } while (extraout_x8_00 <= *plVar1);
    }
    unaff_x27 = unaff_x26 - 0xa8;
    if (unaff_x20 != unaff_x27) {
      func_0x0001086f768c();
      func_0x0001086ad2d8();
    }
    func_0x0001086f780c();
    func_0x0001086f74f0();
    in_CY = unaff_x24 <= unaff_x26;
    in_ZR = unaff_x26 == unaff_x24;
    uVar6 = unaff_x26;
    if (!(bool)in_CY) goto LAB_1086f6d08;
    func_0x0001086f768c();
    FUN_1086f7168();
    FUN_1086f7168(unaff_x26,unaff_x19);
    if ((int)uVar6 == 0) goto code_r0x0001086f6d04;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1086f6e40:
  if (unaff_x20 + 0xa8 == unaff_x19) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + 0x130);
  lVar9 = *(long *)(unaff_x20 + 0x88);
  cVar4 = SBORROW8(lVar8,lVar9);
  cVar5 = lVar8 - lVar9 < 0;
  if (lVar8 < lVar9) {
    func_0x0001086f74f8();
    do {
      func_0x0001086f7724();
      if (lVar7 == 0) break;
      func_0x0001086f7990();
    } while (cVar5 != cVar4);
    func_0x0001086f7658();
    func_0x0001086f74f0();
  }
  lVar7 = lVar7 + 0xa8;
  unaff_x20 = unaff_x20 + 0xa8;
  goto LAB_1086f6e40;
LAB_1086f6ea8:
  do {
    cVar4 = SBORROW8(0xa8,param_4);
    cVar5 = (long)(0xa8 - param_4) < 0;
    uVar10 = uVar6;
    if ((long)param_4 < 0xa9) {
      func_0x0001086f76e8();
      if (cVar5 != cVar4) {
        lVar7 = *(long *)(unaff_x27 + 0x88);
        lVar9 = *(long *)(unaff_x27 + 0x130);
        cVar4 = SBORROW8(lVar7,lVar9);
        cVar5 = lVar7 - lVar9 < 0;
        uVar10 = unaff_x24;
        if (lVar9 <= lVar7) {
          uVar10 = 0;
        }
        unaff_x27 = unaff_x27 + uVar10;
        uVar10 = extraout_x8_02;
        if (lVar9 <= lVar7) {
          uVar10 = uVar6;
        }
      }
      func_0x0001086f76dc(*(undefined8 *)(unaff_x27 + 0x88));
      if (cVar5 == cVar4) {
        func_0x0001086f7890();
        do {
          func_0x0001086f7638();
          cVar4 = SBORROW8(0xa8,uVar10);
          cVar5 = (long)(0xa8 - uVar10) < 0;
          if (0xa8 < (long)uVar10) break;
          func_0x0001086f76c0();
          if (cVar5 != cVar4) {
            lVar7 = *(long *)(unaff_x27 + 0x88);
            lVar9 = *(long *)(unaff_x27 + 0x130);
            cVar4 = SBORROW8(lVar7,lVar9);
            cVar5 = lVar7 - lVar9 < 0;
            uVar6 = unaff_x24;
            if (lVar9 <= lVar7) {
              uVar6 = 0;
            }
            unaff_x27 = unaff_x27 + uVar6;
          }
          func_0x0001086f7794();
        } while (cVar5 == cVar4);
        func_0x0001086f7698();
        func_0x0001086f74f0();
      }
    }
    param_4 = param_4 - 1;
    uVar6 = uVar10;
  } while (-1 < (long)param_4);
  do {
    cVar4 = SBORROW8(unaff_x26,2);
    uVar6 = unaff_x26 - 2;
    cVar5 = (long)uVar6 < 0;
    if ((long)unaff_x26 < 2) {
      return;
    }
    func_0x0001086f789c();
    uVar10 = uVar6 >> 1;
    do {
      func_0x0001086f7610();
      lVar7 = extraout_x8_03;
      if ((cVar5 != cVar4) && (func_0x0001086f777c(), lVar7 = extraout_x10, cVar5 == cVar4)) {
        lVar7 = extraout_x8_04;
      }
      func_0x0001086f76b8();
      cVar4 = SBORROW8(lVar7,uVar10);
      cVar5 = (long)(lVar7 - uVar10) < 0;
    } while (lVar7 <= (long)uVar10);
    unaff_x19 = unaff_x19 - 0xa8;
    if (uVar6 == unaff_x19) {
      func_0x0001086f7698(uVar6,auStack_1b8);
    }
    else {
      func_0x0001086f7884();
      func_0x0001086f7848();
      uVar10 = (uVar6 - unaff_x20) + 0xa8;
      cVar4 = SBORROW8(uVar10,0xa9);
      cVar5 = (long)((uVar6 - unaff_x20) + -1) < 0;
      if (0xa8 < (long)uVar10) {
        func_0x0001086f7574(uVar10 / 0xa8 - 2);
        func_0x0001086f7540();
        if (cVar5 != cVar4) {
          func_0x0001086f74f8();
          do {
            func_0x0001086f7660();
            if (lVar7 == 0) break;
            func_0x0001086f7574(lVar7 + -1);
          } while (extraout_x8_05 < lStack_88);
          func_0x0001086f7824();
          func_0x0001086f74f0();
        }
      }
    }
    func_0x0001086a9714(auStack_1b8);
    unaff_x26 = unaff_x26 - 1;
  } while( true );
code_r0x0001086f6d04:
  uVar6 = unaff_x28;
  if ((unaff_x28 & 1) == 0) {
LAB_1086f6d08:
    func_0x0001086f768c();
    FUN_1086f6b90();
    param_4 = 0;
  }
  goto LAB_1086f6bc4;
}



/* Entry: 1086f703c; end: 1086f70ff;  */

void FUN_1086f703c(void)

{
  char in_NG;
  char in_OV;
  char cVar1;
  char cVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001086f75f0();
  if (in_NG != in_OV) {
    cVar1 = SBORROW8(extraout_x9,extraout_x8);
    cVar2 = extraout_x9 - extraout_x8 < 0;
    if (extraout_x8 <= extraout_x9) {
      FUN_1086ad29c();
      func_0x0001086f75bc(*(undefined8 *)(unaff_x20 + 0x88));
      if (cVar2 == cVar1) {
        return;
      }
    }
code_r0x0001086ad29c:
    func_0x000107c324b0();
    func_0x0001086b0a24(auStack_c8);
    func_0x0001086b0314();
    func_0x0001086ad2d8();
    func_0x000107c32508();
    func_0x0001086ad2d8();
    func_0x0001086b09c8();
    return;
  }
  cVar1 = SBORROW8(extraout_x9,extraout_x8);
  cVar2 = extraout_x9 - extraout_x8 < 0;
  if (extraout_x9 < extraout_x8) {
    func_0x0001086f7800();
    func_0x0001086f7540(*(undefined8 *)(unaff_x19 + 0x88));
    if (cVar2 != cVar1) goto code_r0x0001086ad29c;
  }
  return;
}



/* Entry: 1086f7100; end: 1086f7167;  */

void FUN_1086f7100(void)

{
  char in_NG;
  char in_OV;
  long in_x4;
  long unaff_x22;
  undefined1 auStack_c8 [136];
  
  func_0x0001086f74b8();
  func_0x0001086f70b0();
  func_0x0001086f76dc(*(undefined8 *)(in_x4 + 0x88));
  if (in_NG != in_OV) {
    func_0x0001086f78c4();
    func_0x0001086f7540(*(undefined8 *)(unaff_x22 + 0x88));
    if (in_NG != in_OV) {
      func_0x0001086f74e4();
      func_0x0001086f75ac();
      if (in_NG != in_OV) {
        func_0x0001086f74cc();
        func_0x0001086f754c();
        if (in_NG != in_OV) {
          func_0x0001086f7970();
          func_0x000107c324b0();
          func_0x0001086b0a24(auStack_c8);
          func_0x0001086b0314();
          func_0x0001086ad2d8();
          func_0x000107c32508();
          func_0x0001086ad2d8();
          func_0x0001086b09c8();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1086f7168; end: 1086f727b;  */

/* WARNING: Removing unreachable block (ram,0x0001086f726c) */

undefined8 FUN_1086f7168(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  func_0x0001086f7670();
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar3 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001086f71a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df48f96)[extraout_x8] * 4 + 0x1086f71a8))(1);
    return uVar3;
  }
  func_0x0001086f7a30();
  FUN_1086f703c();
  lVar5 = 0;
  lVar4 = unaff_x19 + 0x1f8;
  do {
    cVar1 = SBORROW8(lVar4,unaff_x20);
    cVar2 = lVar4 - unaff_x20 < 0;
    if (lVar4 == unaff_x20) {
      return 1;
    }
    func_0x0001086f76dc(*(undefined8 *)(lVar4 + 0x88));
    if (cVar2 != cVar1) {
      func_0x0001086f77f4();
      do {
        func_0x0001086f7704();
        cVar1 = SCARRY8(lVar5,0x150);
        cVar2 = lVar5 + 0x150 < 0;
        if (lVar5 == -0x150) break;
        func_0x0001086f7a08();
      } while (cVar2 != cVar1);
      func_0x0001086ad2d8();
      func_0x0001086f78d0();
    }
    lVar4 = lVar4 + 0xa8;
    lVar5 = lVar5 + 0xa8;
  } while( true );
}



/* Entry: 1086f727c; end: 1086f7297;  */

void FUN_1086f727c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c27a08(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f7298; end: 1086f72af;  */

uint FUN_1086f7298(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001006760a8();
    return (uint)param_1 ^ 1;
  }
  return 1;
}



/* Entry: 1086f72b0; end: 1086f7393;  */

undefined8 * FUN_1086f72b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a67358;
  func_0x000107c27914(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x19);
  func_0x000107c294a0(param_1 + 0x15);
  func_0x000107c27c20(param_1 + 0x13);
  func_0x000107c288a4(param_1 + 0x11);
  func_0x000107c28ec0(param_1 + 0xf);
  func_0x000107c290f4(param_1 + 0xd);
  func_0x000107c29498(param_1 + 0xb);
  func_0x000107c2949c(param_1 + 9);
  func_0x000107c28ae4(param_1 + 7);
  func_0x000107c29190(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1086f7394; end: 1086f73af;  */

void FUN_1086f7394(void)

{
  return;
}



/* Entry: 1086f73b0; end: 1086f7423;  */

void FUN_1086f73b0(long param_1)

{
  long lVar1;
  long *plStack_30;
  long lStack_28;
  
  plStack_30 = (long *)0x0;
  lStack_28 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar1;
    if (lVar1 != 0) {
      plStack_30 = *(long **)(param_1 + 0x10);
      if (plStack_30 != (long *)0x0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30,param_1 + 0x38,param_1 + 0x20);
      }
    }
  }
  FUN_1086f7424(&plStack_30);
  return;
}



/* Entry: 1086f7424; end: 1086f7447;  */

void FUN_1086f7424(long param_1)

{
  func_0x000107c32b28();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086f7448; end: 1086f7a57;  */

undefined8 FUN_1086f7448(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 8;
  func_0x000107c27914(param_1 + 0x30);
  func_0x000107c29484(param_1 + 0x18);
  func_0x000100554364();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086f7a58; end: 1086f7a9f;  */

void FUN_1086f7a58(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  func_0x000100869e04(param_1,&uStack_50);
  func_0x000100864b68(&uStack_50);
  return;
}



/* Entry: 1086f7aa0; end: 1086f7b1f;  */

void FUN_1086f7aa0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001086f9fa4();
  FUN_1086b10ac();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x3d0) {
    func_0x0001086fa070();
    func_0x0001086fa060();
    func_0x0001086f9fe4();
  }
  return;
}



/* Entry: 1086f7b20; end: 1086f7b9b;  */

void FUN_1086f7b20(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x0001086f9fa4();
  FUN_1086b10ac();
  lVar1 = unaff_x21[1];
  for (lVar2 = *unaff_x21; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x0001086fa070();
    func_0x0001086fa060();
    func_0x0001086f9fe4();
  }
  return;
}



/* Entry: 1086f7b9c; end: 1086f7bcf;  */

long FUN_1086f7b9c(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b84();
  if ((bool)in_CY) {
    FUN_1086f7f14();
  }
  else {
    FUN_1086f7ee8();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1086f7bd0; end: 1086f7d27;  */

long * FUN_1086f7bd0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0x1600c0;
  uStack_78 = 0;
  uStack_80 = 0x1600c1;
  uStack_68 = 0;
  uStack_70 = 0x1600c2;
  uStack_58 = 0;
  uStack_60 = 0x1600c3;
  FUN_1086f977c(param_1,&uStack_90,4);
  lVar2 = *param_2;
  lVar1 = param_2[1];
  do {
    if (lVar2 == lVar1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001086fa03c();
      func_0x0001086f9f20();
      FUN_1086f9c6c();
      return param_1 + 3;
    }
    if ((*(byte *)(lVar2 + 0x168) & 1) == 0) {
      param_1 = (long *)(lVar2 + 0xa0);
      FUN_1086f7298();
      if ((int)param_1 != 0) {
        if (*(char *)(lVar2 + 0x120) == '\x01') {
          uStack_90 = CONCAT44(uStack_90._4_4_,0x1600c0);
          func_0x0001086f9e78();
        }
        else if (*(char *)(lVar2 + 0x148) == '\x01') {
          uStack_90 = CONCAT44(uStack_90._4_4_,0x1600c1);
          func_0x0001086f9e78();
        }
        else if (*(char *)(lVar2 + 0x158) == '\x01') {
          uStack_90 = CONCAT44(uStack_90._4_4_,0x1600c2);
          func_0x0001086f9e78();
        }
        else {
          if (*(char *)(lVar2 + 0x160) != '\x01') goto LAB_1086f7ccc;
          uStack_90 = CONCAT44(uStack_90._4_4_,0x1600c3);
          func_0x0001086f9e78();
        }
        *param_1 = *param_1 + 1;
      }
    }
LAB_1086f7ccc:
    lVar2 = lVar2 + 0x378;
  } while( true );
}



/* Entry: 1086f7d28; end: 1086f7d5b;  */

long FUN_1086f7d28(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1086f9c6c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 1086f7d5c; end: 1086f7dd7;  */

void FUN_1086f7d5c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_44 [4];
  undefined1 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [24];
  
  FUN_108867224(auStack_38,*param_3,param_2);
  uStack_3c = 0;
  auStack_44[0] = 0;
  uStack_40 = 0;
  (**(code **)(*(long *)*param_4 + 0xc0))(param_1,(long *)*param_4,auStack_38,&uStack_3c,auStack_44)
  ;
  func_0x000107c29108(auStack_38);
  return;
}



/* Entry: 1086f7dd8; end: 1086f7de3;  */

void FUN_1086f7dd8(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  FUN_1086f88bc(*param_1,param_1[1],&uStack_11);
  return;
}



/* Entry: 1086f7de4; end: 1086f7e03;  */

void FUN_1086f7de4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1086f88bc(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1086f7e04; end: 1086f7e6b;  */

long FUN_1086f7e04(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x0001086fa0b0();
    FUN_1086f94f0();
    FUN_1086f4d64();
  }
  return param_2;
}



/* Entry: 1086f7e6c; end: 1086f7ee7;  */

undefined8 FUN_1086f7e6c(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_1 < param_3) {
    return 1;
  }
  if (((param_1 == param_3) && ((*(byte *)(param_2 + 3) & 1) != 0)) &&
     ((*(byte *)(param_4 + 3) & 1) != 0)) {
    uVar1 = *param_4;
    func_0x000107c289b8(uVar1,param_4[1],*param_2,param_2[1],&uStack_11,&uStack_12,&uStack_12);
    return uVar1;
  }
  return 0;
}



/* Entry: 1086f7ee8; end: 1086f7f13;  */

void FUN_1086f7ee8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b88();
  FUN_10865ecd8();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1086f7f14; end: 1086f7f9f;  */

long FUN_1086f7f14(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x000107c32b64();
  FUN_1086f7fa0();
  FUN_1086f802c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_10865ecd8(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  FUN_1086f7fe0();
  lVar1 = unaff_x19[1];
  func_0x0001086f81e0(auStack_48);
  return lVar1;
}



/* Entry: 1086f7fa0; end: 1086f7fdf;  */

long * FUN_1086f7fa0(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_1086f8018();
  func_0x000107c32b58();
  plVar1 = param_1 + 2;
  FUN_1086f80b4(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x0001086f9e84();
  return plVar1;
}



/* Entry: 1086f7fe0; end: 1086f8017;  */

void FUN_1086f7fe0(long *param_1,long param_2)

{
  func_0x000107c32b58();
  FUN_1086f80b4(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001086f9e84();
  return;
}



/* Entry: 1086f8018; end: 1086f802b;  */

long * FUN_1086f8018(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4b203a;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f8074();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x20;
  return plVar2;
}



/* Entry: 1086f802c; end: 1086f8097;  */

long * FUN_1086f802c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001086f8074();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1086f8098; end: 1086f80b3;  */

void FUN_1086f8098(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001086f9ffc();
  func_0x0001086f9e58();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x20) {
    FUN_10865ef28(param_4,param_2);
    param_4 = lStack_48 + 0x20;
    lStack_48 = param_4;
  }
  func_0x0001086fa07c();
  FUN_1086f8130();
  FUN_1086f8160(auStack_70);
  return;
}



/* Entry: 1086f80b4; end: 1086f812f;  */

void FUN_1086f80b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001086f9ffc();
  func_0x0001086f9e58();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x20) {
    FUN_10865ef28(param_4,param_2);
    param_4 = lStack_38 + 0x20;
    lStack_38 = param_4;
  }
  func_0x0001086fa07c();
  FUN_1086f8130();
  FUN_1086f8160(auStack_60);
  return;
}



/* Entry: 1086f8130; end: 1086f815f;  */

void FUN_1086f8130(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000107c2a2e0();
  }
  return;
}



/* Entry: 1086f8160; end: 1086f818f;  */

long FUN_1086f8160(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086f8190(param_1);
  }
  return param_1;
}



/* Entry: 1086f8190; end: 1086f81af;  */

void FUN_1086f8190(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c2a2e0();
  }
  return;
}



/* Entry: 1086f81b0; end: 1086f820b;  */

void FUN_1086f81b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000107c2a2e0();
  }
  return;
}



/* Entry: 1086f820c; end: 1086f8213;  */

void FUN_1086f820c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107c2a2e0();
  }
  return;
}



/* Entry: 1086f8214; end: 1086f827b;  */

void FUN_1086f8214(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107c2a2e0();
  }
  return;
}



/* Entry: 1086f827c; end: 1086f82a7;  */

void FUN_1086f827c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b88();
  FUN_1086f5844();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0xa8;
  return;
}



/* Entry: 1086f82a8; end: 1086f831f;  */

undefined8 FUN_1086f82a8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107c32b64();
  FUN_1086f8320();
  func_0x000107c32b74();
  FUN_1086f83c4();
  FUN_1086f5844(lStack_48);
  lStack_48 = lStack_48 + 0xa8;
  FUN_1086f8380();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1086f8594(auStack_58);
  return uVar1;
}



/* Entry: 1086f8320; end: 1086f837f;  */

long * FUN_1086f8320(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x186186186186187) {
    uVar1 = (param_1[2] - *param_1) / 0xa8;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xc30c30c30c30c2 < uVar1) {
      plVar2 = (long *)0x186186186186186;
    }
    return plVar2;
  }
  FUN_1086f5748();
  func_0x000107c32b58();
  plVar2 = param_1 + 2;
  FUN_1086f8410(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0xa8) * 0xa8);
  func_0x0001086f9e84();
  return plVar2;
}



/* Entry: 1086f8380; end: 1086f83c3;  */

void FUN_1086f8380(long *param_1,long param_2)

{
  func_0x000107c32b58();
  FUN_1086f8410(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xa8) * 0xa8);
  func_0x0001086f9e84();
  return;
}



/* Entry: 1086f83c4; end: 1086f840f;  */

long * FUN_1086f83c4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1086f5754();
  }
  lVar1 = param_4 + param_3 * 0xa8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xa8;
  return param_1;
}



/* Entry: 1086f8410; end: 1086f848b;  */

void FUN_1086f8410(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001086f9ffc();
  func_0x0001086f9e58();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0xa8) {
    FUN_1086f84bc(param_4,param_2);
    param_4 = lStack_38 + 0xa8;
    lStack_38 = param_4;
  }
  func_0x0001086fa07c();
  FUN_1086f848c();
  FUN_1086f5850(auStack_60);
  return;
}



/* Entry: 1086f848c; end: 1086f84bb;  */

void FUN_1086f848c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    FUN_1088eba94();
  }
  return;
}



/* Entry: 1086f84bc; end: 1086f84c7;  */

undefined8 * FUN_1086f84bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a8b638;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_11383d918;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  FUN_1086f8530(param_1,param_2);
  return param_1;
}



/* Entry: 1086f84c8; end: 1086f852f;  */

undefined8 * FUN_1086f84c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a8b638;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = &DAT_11383d918;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  FUN_1086f8530(param_1,param_3);
  return param_1;
}



/* Entry: 1086f8530; end: 1086f8593;  */

long FUN_1086f8530(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x0001088ec7fc(param_1);
    }
    else {
      FUN_1088ec7cc(param_1);
    }
  }
  return param_1;
}



/* Entry: 1086f8594; end: 1086f85bf;  */

long * FUN_1086f8594(long *param_1)

{
  FUN_1086f85c0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086f85c0; end: 1086f85c7;  */

void FUN_1086f85c0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    FUN_1088eba94();
  }
  return;
}



/* Entry: 1086f85c8; end: 1086f8633;  */

void FUN_1086f85c8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xa8;
    FUN_1088eba94();
  }
  return;
}



/* Entry: 1086f8634; end: 1086f865f;  */

void FUN_1086f8634(long param_1)

{
  long unaff_x19;
  
  func_0x000107c32b88();
  param_1 = param_1 + 0x10;
  FUN_1086f8660();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086f8660; end: 1086f8673;  */

void FUN_1086f8660(void)

{
  FUN_1086f8674();
  return;
}



/* Entry: 1086f8674; end: 1086f86eb;  */

long FUN_1086f8674(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086f9e58();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_10865ecd8(param_4,param_2);
    param_4 = lStack_38 + 0x20;
    lStack_38 = param_4;
  }
  func_0x0001086fa07c();
  FUN_1086f8160(auStack_60);
  return param_4;
}



/* Entry: 1086f86ec; end: 1086f86f3;  */

void FUN_1086f86ec(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c2a2e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f86f4; end: 1086f8753;  */

void FUN_1086f86f4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c2a2e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f8754; end: 1086f87b7;  */

void FUN_1086f8754(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000100865a50();
    FUN_1086f87b8();
    func_0x0001086f9f6c();
    FUN_1086f8804();
  }
  uStack_38 = 1;
  func_0x0001086d6fbc(&uStack_40);
  return;
}



/* Entry: 1086f87b8; end: 1086f8803;  */

void FUN_1086f87b8(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 < 0x4325c53ef368ec) {
    plVar1 = param_1 + 2;
    func_0x000107c291cc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x7a);
  }
  else {
    FUN_1086d6f74();
    func_0x000107c32b88();
    param_1 = param_1 + 2;
    FUN_1086f8830();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 1086f8804; end: 1086f882f;  */

void FUN_1086f8804(long param_1)

{
  long unaff_x19;
  
  func_0x000107c32b88();
  param_1 = param_1 + 0x10;
  FUN_1086f8830();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086f8830; end: 1086f8843;  */

void FUN_1086f8830(void)

{
  FUN_1086f8844();
  return;
}



/* Entry: 1086f8844; end: 1086f88bb;  */

long FUN_1086f8844(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086f9e58();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x3d0) {
    func_0x000107c291e0(param_4,param_2);
    param_4 = lStack_38 + 0x3d0;
    lStack_38 = param_4;
  }
  func_0x0001086fa07c();
  func_0x000107c291d4(auStack_60);
  return param_4;
}



/* Entry: 1086f88bc; end: 1086f88e7;  */

/* WARNING: Possible PIC construction at 0x0001086f90e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086f90e4) */
/* WARNING: Removing unreachable block (ram,0x0001086f90f4) */
/* WARNING: Removing unreachable block (ram,0x0001086f910c) */
/* WARNING: Removing unreachable block (ram,0x0001086f9124) */
/* WARNING: Removing unreachable block (ram,0x0001086f9154) */
/* WARNING: Removing unreachable block (ram,0x0001086f913c) */

undefined1  [16] FUN_1086f88bc(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x19;
  long lVar18;
  bool bVar19;
  long lVar20;
  long *plVar21;
  undefined8 ******unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long alStack_1b8 [21];
  long alStack_110 [22];
  
  if (param_1 == param_2) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = param_1;
    return auVar23;
  }
  plVar15 = (long *)(LZCOUNT(((long)param_2 - (long)param_1) / 0xa8) << 1 ^ 0x7e);
  puVar4 = &uStack_1d0;
  pplVar5 = (long **)&uStack_1d0;
  bVar19 = true;
  plVar13 = param_1;
  plVar9 = param_2;
  uStack_1d0 = param_3;
LAB_1086f8920:
  plVar11 = plVar9 + -0x15;
  plStack_1c0 = plVar9 + -0x2a;
  plStack_1c8 = plVar9 + -0x3f;
  plVar10 = plVar13;
LAB_1086f8934:
  plVar13 = plVar10;
  uVar16 = (long)plVar9 - (long)plVar13;
  plVar21 = (long *)((long)uVar16 / 0xa8);
  plVar8 = plVar13;
  plVar10 = plVar11;
  pppppuStack_1e0 = unaff_x29;
  switch(plVar21) {
  case (long *)0x0:
  case (long *)0x1:
    goto LAB_1086f8bc4;
  case (long *)0x2:
    plVar9 = plVar11;
    func_0x0001086f9f9c();
    if ((int)plVar9 != 0) {
      func_0x0001086f9f80();
      uStack_1d8 = unaff_x30;
      goto code_r0x0001086f9374;
    }
    goto LAB_1086f8bc4;
  case (long *)0x3:
    plVar9 = plVar13 + 0x15;
    func_0x0001086f9f80();
    pplVar6 = &plStack_200;
    plVar12 = plVar9;
    plVar21 = plVar9;
    plStack_200 = plVar15;
    plStack_1f8 = plVar11;
    plStack_1f0 = plVar13;
    plStack_1e8 = unaff_x19;
    uStack_1d8 = unaff_x30;
    func_0x0001086f9f28();
    plVar13 = plVar12;
    func_0x0001086f9e6c();
    if (((ulong)plVar12 & 1) == 0) {
      if ((int)plVar13 == 0) goto FUN_1086f9e44;
      func_0x0001086f9fd0();
      FUN_1086f9374();
      plVar13 = plVar9;
      func_0x0001086f9f28();
      iVar7 = (int)plVar13;
      plVar15 = plVar8;
      plVar10 = plVar9;
joined_r0x0001086f9010:
      plVar8 = plVar15;
      pplVar6 = &plStack_200;
      if (iVar7 == 0) goto FUN_1086f9e44;
    }
    else if ((int)plVar13 == 0) {
      plVar21 = plVar9;
      FUN_1086f9374(plVar8,plVar9);
      func_0x0001086f9e6c();
      iVar7 = (int)plVar8;
      plVar15 = plVar9;
      plVar13 = plVar8;
      goto joined_r0x0001086f9010;
    }
    goto LAB_1086fa054;
  case (long *)0x4:
    plVar21 = plVar13 + 0x15;
    plVar10 = plVar13 + 0x2a;
    plVar14 = plVar11;
    func_0x0001086f9f80(plVar13,plVar21);
    break;
  case (long *)0x5:
    plVar21 = plVar13 + 0x15;
    plVar8 = plVar13 + 0x2a;
    plVar12 = plVar13 + 0x3f;
    func_0x0001086f9f80(plVar13,plVar21,plVar8,plVar12,plVar11);
    puVar4 = &uStack_210;
    uStack_210 = 0xa8;
    unaff_x29 = &pppppuStack_1e0;
    plVar10 = plVar8;
    plVar14 = plVar12;
    plStack_208 = plVar9;
    plStack_200 = plVar15;
    plStack_1f8 = plVar11;
    plStack_1f0 = plVar13;
    plStack_1e8 = unaff_x19;
    func_0x000107c32b58();
    unaff_x30 = 0x1086f90e4;
    plVar11 = plVar8;
    plVar15 = plVar12;
    break;
  default:
    goto code_r0x0001086f8948;
  }
  pplVar6 = (long **)((long)puVar4 + -0x30);
  *(long **)((long)puVar4 + -0x30) = plVar15;
  *(long **)((long)puVar4 + -0x28) = plVar11;
  *(long **)((long)puVar4 + -0x20) = plVar13;
  *(long **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 *******)((long)puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)((long)puVar4 + -8) = unaff_x30;
  func_0x000107c32b58();
  FUN_1086f8fc0();
  plVar13 = plVar14;
  func_0x0001086f9f28();
  if ((int)plVar13 != 0) {
    FUN_1086f9374(plVar10,plVar14);
    plVar13 = plVar10;
    func_0x0001086f9ed4();
    plVar21 = plVar14;
    if ((int)plVar13 != 0) {
      FUN_1086f9374(unaff_x19);
      func_0x0001086f9f9c();
      plVar13 = unaff_x19;
      plVar21 = plVar10;
      if ((int)unaff_x19 != 0) {
        func_0x0001086f9ec8();
        pppppuStack_1e0 = *(undefined8 ******)((long)puVar4 + -0x10);
        uStack_1d8 = *(undefined8 *)((long)puVar4 + -8);
        plVar8 = unaff_x19;
LAB_1086fa054:
        plVar13 = pplVar6[2];
        unaff_x19 = pplVar6[3];
        pplVar5 = pplVar6 + 6;
        plVar15 = *pplVar6;
        plVar11 = pplVar6[1];
code_r0x0001086f9374:
        if (plVar10 == plVar8) {
          auVar25._8_8_ = plVar10;
          auVar25._0_8_ = plVar8;
          return auVar25;
        }
        uVar16 = plVar8[1];
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        uVar17 = plVar10[1];
        if ((uVar17 & 1) != 0) {
          uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
        }
        if (uVar16 == uVar17) {
          *(long **)((long)pplVar5 + -0x20) = plVar13;
          *(long **)((long)pplVar5 + -0x18) = unaff_x19;
          *(undefined8 ******)((long)pplVar5 + -0x10) = pppppuStack_1e0;
          *(undefined8 *)((long)pplVar5 + -8) = uStack_1d8;
          func_0x000107c34868();
          func_0x0001088ef054();
          func_0x000107c303a4(plVar8 + 3,plVar10 + 3);
          lVar20 = unaff_x19[6];
          unaff_x19[6] = plVar13[6];
          plVar13[6] = lVar20;
          plVar9 = unaff_x19 + 7;
          plVar10 = plVar9;
          for (plVar15 = plVar13 + 7; plVar15 != (long *)((long)plVar13 + 0xa4U);
              plVar15 = (long *)((long)plVar15 + 1)) {
            lVar20 = *plVar15;
            *(char *)plVar15 = (char)*plVar10;
            *(char *)plVar10 = (char)lVar20;
            plVar9 = (long *)((long)plVar9 + 1);
            plVar10 = (long *)((long)plVar10 + 1);
          }
          auVar22._8_8_ = plVar9;
          auVar22._0_8_ = (long *)((long)plVar13 + 0xa4U);
          return auVar22;
        }
        *(long **)((long)pplVar5 + -0x30) = plVar15;
        *(long **)((long)pplVar5 + -0x28) = plVar11;
        *(long **)((long)pplVar5 + -0x20) = plVar13;
        *(long **)((long)pplVar5 + -0x18) = unaff_x19;
        *(undefined8 ******)((long)pplVar5 + -0x10) = pppppuStack_1e0;
        *(undefined8 *)((long)pplVar5 + -8) = uStack_1d8;
        plVar13 = plVar8;
        func_0x00010b4cf4b4();
        (**(code **)(*plVar13 + 0x20))();
        (**(code **)(*plVar8 + 0x18))(plVar8);
        (**(code **)(*plVar8 + 0x20))(plVar8,plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x20))(plVar10,plVar13);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar13);
        auVar27._8_8_ = UNRECOVERED_JUMPTABLE;
        auVar27._0_8_ = plVar13;
        return auVar27;
      }
    }
  }
FUN_1086f9e44:
  auVar26._8_8_ = plVar21;
  auVar26._0_8_ = plVar13;
  return auVar26;
code_r0x0001086f8948:
  if ((long)uVar16 < 0xfc0) {
    if (bVar19 == false) {
      if (plVar13 != plVar9) {
        while (plVar15 = plVar13, plVar13 = plVar15 + 0x15, plVar13 != plVar9) {
          func_0x0001086f9e6c();
          if ((int)param_1 != 0) {
            func_0x0001086f9ef4();
            do {
              param_1 = plVar15;
              func_0x0001086f9fc8(param_1 + 0x15);
              uVar16 = 0;
              func_0x0001086f9ed4();
              plVar15 = param_1 + -0x15;
            } while ((uVar16 & 1) != 0);
            param_2 = alStack_110;
            FUN_1086f8530(param_1,param_2);
            func_0x0001086f9f0c();
          }
        }
      }
      goto LAB_1086f8bc4;
    }
    if (plVar13 == plVar9) goto LAB_1086f8bc4;
    lVar20 = 0;
    param_2 = plVar13;
    goto LAB_1086f8c80;
  }
  if (plVar15 == (long *)0x0) {
    if (plVar13 == plVar9) goto LAB_1086f8bc4;
    uVar16 = (long)plVar21 - 2U >> 1;
    plVar15 = plVar13 + uVar16 * 0x15;
    do {
      param_2 = plVar21;
      FUN_1086f93b0(plVar13,plVar21,plVar15);
      uVar16 = uVar16 - 1;
      plVar15 = plVar15 + -0x15;
    } while (-1 < (long)uVar16);
    do {
      if ((long)plVar21 < 2) goto LAB_1086f8bc4;
      plVar15 = alStack_1b8;
      FUN_1086f84bc(plVar15,plVar13);
      uVar16 = 0;
      plVar10 = plVar13;
      do {
        iVar7 = (int)plVar15;
        uVar1 = uVar16 << 1 | 1;
        uVar17 = uVar16 * 2 + 2;
        plVar11 = plVar10 + uVar16 * 0x15 + 0x15;
        uVar3 = uVar1;
        if ((long)uVar17 < (long)plVar21) {
          func_0x0001086f9f14();
          plVar11 = plVar10 + uVar16 * 0x15 + 0x2a;
          uVar3 = uVar17;
          if (iVar7 == 0) {
            plVar11 = plVar10 + uVar16 * 0x15 + 0x15;
            uVar3 = uVar1;
          }
        }
        uVar16 = uVar3;
        FUN_1086f8530(plVar10,plVar11);
        plVar15 = plVar10;
        plVar10 = plVar11;
      } while ((long)uVar16 <= (long)((long)plVar21 - 2U >> 1));
      plVar9 = plVar9 + -0x15;
      if (plVar11 == plVar9) {
        param_2 = alStack_1b8;
        FUN_1086f8530(plVar11,param_2);
      }
      else {
        FUN_1086f8530(plVar11,plVar9);
        param_2 = alStack_1b8;
        FUN_1086f8530(plVar9,param_2);
        uVar16 = (long)plVar11 + (0xa8 - (long)plVar13);
        if (0xa8 < (long)uVar16) {
          uVar16 = uVar16 / 0xa8 - 2 >> 1;
          plVar15 = plVar13 + uVar16 * 0x15;
          func_0x0001086f9f28();
          if ((int)plVar15 != 0) {
            func_0x0001086fa024();
            plVar15 = plVar13 + uVar16 * 0x15;
            do {
              plVar10 = plVar15;
              func_0x0001086f9fc8();
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1 >> 1;
              func_0x0001086f9ee8();
              uVar17 = (ulong)plVar11 & 1;
              plVar15 = plVar13 + uVar16 * 0x15;
              plVar11 = plVar10;
            } while (uVar17 != 0);
            param_2 = alStack_110;
            FUN_1086f8530(plVar10,param_2);
            func_0x0001086f9f0c();
          }
        }
      }
      FUN_1088eba94(alStack_1b8);
      plVar21 = (long *)((long)plVar21 - 1);
    } while( true );
  }
  plVar10 = plVar13 + ((ulong)plVar21 >> 1) * 0x15;
  if (uVar16 < 0x5401) {
    func_0x0001086f9fd0();
    FUN_1086f8fc0();
  }
  else {
    func_0x0001086f9ec8();
    FUN_1086f8fc0();
    FUN_1086f8fc0(plVar13 + 0x15,plVar10 + -0x15,plStack_1c0);
    FUN_1086f8fc0(plVar13 + 0x2a,plVar10 + 0x15,plStack_1c8);
    FUN_1086f8fc0(plVar10 + -0x15,plVar10,plVar10 + 0x15);
    func_0x0001086f9ec8();
    FUN_1086f9374();
  }
  plVar15 = (long *)((long)plVar15 - 1);
  if (!bVar19) {
    plVar10 = plVar13 + -0x15;
    func_0x0001086f9f9c();
    if (((ulong)plVar10 & 1) == 0) {
      func_0x0001086f9ef4();
      plVar21 = alStack_110;
      func_0x0001086f9f28();
      plVar10 = plVar13;
      if (((ulong)plVar21 & 1) == 0) {
        do {
          plVar10 = plVar10 + 0x15;
          if (plVar9 <= plVar10) break;
          func_0x0001086f9f00();
        } while ((int)plVar21 == 0);
      }
      else {
        do {
          plVar10 = plVar10 + 0x15;
          func_0x0001086f9f00();
        } while (((ulong)plVar21 & 1) == 0);
      }
      plVar8 = plVar9;
      if (plVar10 < plVar9) {
        do {
          plVar8 = plVar8 + -0x15;
          func_0x0001086fa030();
        } while (((ulong)plVar21 & 1) != 0);
      }
      while (plVar10 < plVar8) {
        plVar21 = plVar10;
        FUN_1086f9374(plVar10,plVar8);
        do {
          plVar10 = plVar10 + 0x15;
          func_0x0001086f9f00();
        } while ((int)plVar21 == 0);
        do {
          plVar8 = plVar8 + -0x15;
          func_0x0001086fa030();
        } while (((ulong)plVar21 & 1) != 0);
      }
      unaff_x19 = plVar10 + -0x15;
      if (plVar13 != unaff_x19) {
        func_0x0001086f9ec8();
        FUN_1086f8530();
      }
      param_2 = alStack_110;
      param_1 = unaff_x19;
      FUN_1086f8530(unaff_x19,param_2);
      func_0x0001086f9f0c();
      bVar19 = false;
      goto LAB_1086f8934;
    }
  }
  func_0x0001086f9ef4();
  lVar20 = 0;
  do {
    uVar16 = (long)plVar13 + lVar20 + 0xa8;
    FUN_1086f8ef4(uVar16,alStack_110);
    lVar20 = lVar20 + 0xa8;
  } while ((uVar16 & 1) != 0);
  plVar21 = (long *)((long)plVar13 + lVar20);
  plVar8 = plVar9;
  plVar10 = plVar21;
  if (lVar20 == 0xa8) {
    do {
      unaff_x19 = plVar8;
      if (plVar8 <= plVar21) break;
      plVar8 = plVar8 + -0x15;
      func_0x0001086f9ee8();
      unaff_x19 = plVar8;
    } while ((uVar16 & 1) == 0);
  }
  else {
    do {
      plVar8 = plVar8 + -0x15;
      func_0x0001086f9ee8();
      unaff_x19 = plVar8;
    } while ((int)uVar16 == 0);
  }
  while (plVar10 < plVar8) {
    FUN_1086f9374(plVar10,plVar8);
    do {
      plVar10 = plVar10 + 0x15;
      plVar12 = plVar10;
      FUN_1086f8ef4(plVar10,alStack_110);
    } while (((ulong)plVar12 & 1) != 0);
    do {
      plVar8 = plVar8 + -0x15;
      plVar12 = plVar8;
      FUN_1086f8ef4(plVar8,alStack_110);
    } while (((ulong)plVar12 & 1) == 0);
  }
  plVar8 = plVar10 + -0x15;
  if (plVar13 != plVar8) {
    FUN_1086f8530(plVar13,plVar8);
  }
  FUN_1086f8530(plVar8,alStack_110);
  func_0x0001086f9f0c();
  if (plVar21 < unaff_x19) goto LAB_1086f8ac8;
  unaff_x19 = plVar13;
  FUN_1086f9168(plVar13,plVar8);
  param_1 = plVar10;
  param_2 = plVar9;
  FUN_1086f9168(plVar10,plVar9);
  if ((int)param_1 == 0) goto code_r0x0001086f8ac4;
  plVar9 = plVar8;
  if (((ulong)unaff_x19 & 1) != 0) goto LAB_1086f8bc4;
  goto LAB_1086f8920;
LAB_1086f8c80:
  plVar15 = param_2 + 0x15;
  if (plVar15 == plVar9) {
LAB_1086f8bc4:
    func_0x0001086f9f80(unaff_x30);
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = unaff_x30;
    return auVar24;
  }
  plVar10 = plVar15;
  FUN_1086f8ef4();
  if ((int)plVar10 != 0) {
    func_0x0001086fa024();
    lVar2 = lVar20;
    do {
      lVar18 = lVar2;
      func_0x0001086f9fc8((long)plVar13 + lVar18 + 0xa8);
      plVar10 = plVar13;
      if (lVar18 == 0) goto LAB_1086f8cd4;
      plVar10 = alStack_110;
      FUN_1086f8ef4(plVar10,(long)plVar13 + lVar18 + -0xa8);
      lVar2 = lVar18 + -0xa8;
    } while (((ulong)plVar10 & 1) != 0);
    plVar10 = (long *)((long)plVar13 + lVar18);
LAB_1086f8cd4:
    FUN_1086f8530(plVar10,alStack_110);
    func_0x0001086f9f0c();
  }
  lVar20 = lVar20 + 0xa8;
  param_2 = plVar15;
  goto LAB_1086f8c80;
code_r0x0001086f8ac4:
  if (((ulong)unaff_x19 & 1) == 0) {
LAB_1086f8ac8:
    FUN_1086f88e8(plVar13,plVar8,uStack_1d0,plVar15,bVar19);
    bVar19 = false;
    param_1 = plVar13;
    param_2 = plVar8;
  }
  goto LAB_1086f8934;
}



/* Entry: 1086f88e8; end: 1086f8ef3;  */

/* WARNING: Possible PIC construction at 0x0001086f90e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086f90e4) */
/* WARNING: Removing unreachable block (ram,0x0001086f90f4) */
/* WARNING: Removing unreachable block (ram,0x0001086f910c) */
/* WARNING: Removing unreachable block (ram,0x0001086f9124) */
/* WARNING: Removing unreachable block (ram,0x0001086f9154) */
/* WARNING: Removing unreachable block (ram,0x0001086f913c) */

undefined1  [16]
FUN_1086f88e8(long *param_1,long *param_2,undefined8 param_3,long *param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long **pplVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x19;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 ******unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long alStack_1b8 [21];
  long alStack_110 [22];
  
  puVar4 = &uStack_1d0;
  pplVar5 = (long **)&uStack_1d0;
  plVar13 = param_1;
  plVar8 = param_2;
  uStack_1d0 = param_3;
LAB_1086f8920:
  plVar10 = plVar8 + -0x15;
  plStack_1c0 = plVar8 + -0x2a;
  plStack_1c8 = plVar8 + -0x3f;
  plVar11 = plVar13;
LAB_1086f8934:
  plVar13 = plVar11;
  uVar15 = (long)plVar8 - (long)plVar13;
  plVar19 = (long *)((long)uVar15 / 0xa8);
  plVar9 = plVar13;
  plVar11 = plVar10;
  pppppuStack_1e0 = unaff_x29;
  switch(plVar19) {
  case (long *)0x0:
  case (long *)0x1:
    goto LAB_1086f8bc4;
  case (long *)0x2:
    plVar8 = plVar10;
    func_0x0001086f9f9c();
    if ((int)plVar8 != 0) {
      func_0x0001086f9f80();
      uStack_1d8 = unaff_x30;
      goto code_r0x0001086f9374;
    }
    goto LAB_1086f8bc4;
  case (long *)0x3:
    plVar8 = plVar13 + 0x15;
    func_0x0001086f9f80();
    pplVar6 = &plStack_200;
    plVar12 = plVar8;
    plVar19 = plVar8;
    plStack_200 = param_4;
    plStack_1f8 = plVar10;
    plStack_1f0 = plVar13;
    plStack_1e8 = unaff_x19;
    uStack_1d8 = unaff_x30;
    func_0x0001086f9f28();
    plVar13 = plVar12;
    func_0x0001086f9e6c();
    if (((ulong)plVar12 & 1) == 0) {
      if ((int)plVar13 == 0) goto FUN_1086f9e44;
      func_0x0001086f9fd0();
      FUN_1086f9374();
      plVar13 = plVar8;
      func_0x0001086f9f28();
      iVar7 = (int)plVar13;
      plVar10 = plVar9;
      plVar11 = plVar8;
joined_r0x0001086f9010:
      plVar9 = plVar10;
      pplVar6 = &plStack_200;
      if (iVar7 == 0) goto FUN_1086f9e44;
    }
    else if ((int)plVar13 == 0) {
      plVar19 = plVar8;
      FUN_1086f9374(plVar9,plVar8);
      func_0x0001086f9e6c();
      iVar7 = (int)plVar9;
      plVar10 = plVar8;
      plVar13 = plVar9;
      goto joined_r0x0001086f9010;
    }
    goto LAB_1086fa054;
  case (long *)0x4:
    plVar19 = plVar13 + 0x15;
    plVar11 = plVar13 + 0x2a;
    plVar14 = plVar10;
    func_0x0001086f9f80(plVar13,plVar19);
    break;
  case (long *)0x5:
    plVar19 = plVar13 + 0x15;
    plVar9 = plVar13 + 0x2a;
    plVar12 = plVar13 + 0x3f;
    func_0x0001086f9f80(plVar13,plVar19,plVar9,plVar12,plVar10);
    puVar4 = &uStack_210;
    uStack_210 = 0xa8;
    unaff_x29 = &pppppuStack_1e0;
    plVar11 = plVar9;
    plVar14 = plVar12;
    plStack_208 = plVar8;
    plStack_200 = param_4;
    plStack_1f8 = plVar10;
    plStack_1f0 = plVar13;
    plStack_1e8 = unaff_x19;
    func_0x000107c32b58();
    unaff_x30 = 0x1086f90e4;
    plVar10 = plVar9;
    param_4 = plVar12;
    break;
  default:
    goto code_r0x0001086f8948;
  }
  pplVar6 = (long **)((long)puVar4 + -0x30);
  *(long **)((long)puVar4 + -0x30) = param_4;
  *(long **)((long)puVar4 + -0x28) = plVar10;
  *(long **)((long)puVar4 + -0x20) = plVar13;
  *(long **)((long)puVar4 + -0x18) = unaff_x19;
  *(undefined8 *******)((long)puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)((long)puVar4 + -8) = unaff_x30;
  func_0x000107c32b58();
  FUN_1086f8fc0();
  plVar13 = plVar14;
  func_0x0001086f9f28();
  if ((int)plVar13 != 0) {
    FUN_1086f9374(plVar11,plVar14);
    plVar13 = plVar11;
    func_0x0001086f9ed4();
    plVar19 = plVar14;
    if ((int)plVar13 != 0) {
      FUN_1086f9374(unaff_x19);
      func_0x0001086f9f9c();
      plVar13 = unaff_x19;
      plVar19 = plVar11;
      if ((int)unaff_x19 != 0) {
        func_0x0001086f9ec8();
        pppppuStack_1e0 = *(undefined8 ******)((long)puVar4 + -0x10);
        uStack_1d8 = *(undefined8 *)((long)puVar4 + -8);
        plVar9 = unaff_x19;
LAB_1086fa054:
        plVar13 = pplVar6[2];
        unaff_x19 = pplVar6[3];
        pplVar5 = pplVar6 + 6;
        param_4 = *pplVar6;
        plVar10 = pplVar6[1];
code_r0x0001086f9374:
        if (plVar11 == plVar9) {
          auVar22._8_8_ = plVar11;
          auVar22._0_8_ = plVar9;
          return auVar22;
        }
        uVar15 = plVar9[1];
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        uVar16 = plVar11[1];
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        if (uVar15 == uVar16) {
          *(long **)((long)pplVar5 + -0x20) = plVar13;
          *(long **)((long)pplVar5 + -0x18) = unaff_x19;
          *(undefined8 ******)((long)pplVar5 + -0x10) = pppppuStack_1e0;
          *(undefined8 *)((long)pplVar5 + -8) = uStack_1d8;
          func_0x000107c34868();
          func_0x0001088ef054();
          func_0x000107c303a4(plVar9 + 3,plVar11 + 3);
          lVar18 = unaff_x19[6];
          unaff_x19[6] = plVar13[6];
          plVar13[6] = lVar18;
          plVar11 = unaff_x19 + 7;
          plVar10 = plVar11;
          for (plVar8 = plVar13 + 7; plVar8 != (long *)((long)plVar13 + 0xa4U);
              plVar8 = (long *)((long)plVar8 + 1)) {
            lVar18 = *plVar8;
            *(char *)plVar8 = (char)*plVar10;
            *(char *)plVar10 = (char)lVar18;
            plVar11 = (long *)((long)plVar11 + 1);
            plVar10 = (long *)((long)plVar10 + 1);
          }
          auVar20._8_8_ = plVar11;
          auVar20._0_8_ = (long *)((long)plVar13 + 0xa4U);
          return auVar20;
        }
        *(long **)((long)pplVar5 + -0x30) = param_4;
        *(long **)((long)pplVar5 + -0x28) = plVar10;
        *(long **)((long)pplVar5 + -0x20) = plVar13;
        *(long **)((long)pplVar5 + -0x18) = unaff_x19;
        *(undefined8 ******)((long)pplVar5 + -0x10) = pppppuStack_1e0;
        *(undefined8 *)((long)pplVar5 + -8) = uStack_1d8;
        plVar13 = plVar9;
        func_0x00010b4cf4b4();
        (**(code **)(*plVar13 + 0x20))();
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x20))(plVar9,plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x20))(plVar11,plVar13);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar13 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar13);
        auVar24._8_8_ = UNRECOVERED_JUMPTABLE;
        auVar24._0_8_ = plVar13;
        return auVar24;
      }
    }
  }
FUN_1086f9e44:
  auVar23._8_8_ = plVar19;
  auVar23._0_8_ = plVar13;
  return auVar23;
code_r0x0001086f8948:
  if ((long)uVar15 < 0xfc0) {
    if ((param_5 & 1) == 0) {
      if (plVar13 != plVar8) {
        while (plVar11 = plVar13, plVar13 = plVar11 + 0x15, plVar13 != plVar8) {
          func_0x0001086f9e6c();
          if ((int)param_1 != 0) {
            func_0x0001086f9ef4();
            do {
              param_1 = plVar11;
              func_0x0001086f9fc8(param_1 + 0x15);
              uVar15 = 0;
              func_0x0001086f9ed4();
              plVar11 = param_1 + -0x15;
            } while ((uVar15 & 1) != 0);
            param_2 = alStack_110;
            FUN_1086f8530(param_1,param_2);
            func_0x0001086f9f0c();
          }
        }
      }
      goto LAB_1086f8bc4;
    }
    if (plVar13 == plVar8) goto LAB_1086f8bc4;
    lVar18 = 0;
    param_2 = plVar13;
    goto LAB_1086f8c80;
  }
  if (param_4 == (long *)0x0) {
    if (plVar13 == plVar8) goto LAB_1086f8bc4;
    uVar15 = (long)plVar19 - 2U >> 1;
    plVar11 = plVar13 + uVar15 * 0x15;
    do {
      param_2 = plVar19;
      FUN_1086f93b0(plVar13,plVar19,plVar11);
      uVar15 = uVar15 - 1;
      plVar11 = plVar11 + -0x15;
    } while (-1 < (long)uVar15);
    do {
      if ((long)plVar19 < 2) goto LAB_1086f8bc4;
      plVar11 = alStack_1b8;
      FUN_1086f84bc(plVar11,plVar13);
      uVar15 = 0;
      plVar10 = plVar13;
      do {
        iVar7 = (int)plVar11;
        uVar1 = uVar15 << 1 | 1;
        uVar16 = uVar15 * 2 + 2;
        plVar9 = plVar10 + uVar15 * 0x15 + 0x15;
        uVar3 = uVar1;
        if ((long)uVar16 < (long)plVar19) {
          func_0x0001086f9f14();
          plVar9 = plVar10 + uVar15 * 0x15 + 0x2a;
          uVar3 = uVar16;
          if (iVar7 == 0) {
            plVar9 = plVar10 + uVar15 * 0x15 + 0x15;
            uVar3 = uVar1;
          }
        }
        uVar15 = uVar3;
        FUN_1086f8530(plVar10,plVar9);
        plVar11 = plVar10;
        plVar10 = plVar9;
      } while ((long)uVar15 <= (long)((long)plVar19 - 2U >> 1));
      plVar8 = plVar8 + -0x15;
      if (plVar9 == plVar8) {
        param_2 = alStack_1b8;
        FUN_1086f8530(plVar9,param_2);
      }
      else {
        FUN_1086f8530(plVar9,plVar8);
        param_2 = alStack_1b8;
        FUN_1086f8530(plVar8,param_2);
        uVar15 = (long)plVar9 + (0xa8 - (long)plVar13);
        if (0xa8 < (long)uVar15) {
          uVar15 = uVar15 / 0xa8 - 2 >> 1;
          plVar11 = plVar13 + uVar15 * 0x15;
          func_0x0001086f9f28();
          if ((int)plVar11 != 0) {
            func_0x0001086fa024();
            plVar11 = plVar13 + uVar15 * 0x15;
            do {
              plVar10 = plVar11;
              func_0x0001086f9fc8();
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1 >> 1;
              func_0x0001086f9ee8();
              uVar16 = (ulong)plVar9 & 1;
              plVar11 = plVar13 + uVar15 * 0x15;
              plVar9 = plVar10;
            } while (uVar16 != 0);
            param_2 = alStack_110;
            FUN_1086f8530(plVar10,param_2);
            func_0x0001086f9f0c();
          }
        }
      }
      FUN_1088eba94(alStack_1b8);
      plVar19 = (long *)((long)plVar19 - 1);
    } while( true );
  }
  plVar11 = plVar13 + ((ulong)plVar19 >> 1) * 0x15;
  if (uVar15 < 0x5401) {
    func_0x0001086f9fd0();
    FUN_1086f8fc0();
  }
  else {
    func_0x0001086f9ec8();
    FUN_1086f8fc0();
    FUN_1086f8fc0(plVar13 + 0x15,plVar11 + -0x15,plStack_1c0);
    FUN_1086f8fc0(plVar13 + 0x2a,plVar11 + 0x15,plStack_1c8);
    FUN_1086f8fc0(plVar11 + -0x15,plVar11,plVar11 + 0x15);
    func_0x0001086f9ec8();
    FUN_1086f9374();
  }
  param_4 = (long *)((long)param_4 - 1);
  if ((param_5 & 1) == 0) {
    plVar11 = plVar13 + -0x15;
    func_0x0001086f9f9c();
    if (((ulong)plVar11 & 1) == 0) {
      func_0x0001086f9ef4();
      plVar19 = alStack_110;
      func_0x0001086f9f28();
      plVar11 = plVar13;
      if (((ulong)plVar19 & 1) == 0) {
        do {
          plVar11 = plVar11 + 0x15;
          if (plVar8 <= plVar11) break;
          func_0x0001086f9f00();
        } while ((int)plVar19 == 0);
      }
      else {
        do {
          plVar11 = plVar11 + 0x15;
          func_0x0001086f9f00();
        } while (((ulong)plVar19 & 1) == 0);
      }
      plVar9 = plVar8;
      if (plVar11 < plVar8) {
        do {
          plVar9 = plVar9 + -0x15;
          func_0x0001086fa030();
        } while (((ulong)plVar19 & 1) != 0);
      }
      while (plVar11 < plVar9) {
        plVar19 = plVar11;
        FUN_1086f9374(plVar11,plVar9);
        do {
          plVar11 = plVar11 + 0x15;
          func_0x0001086f9f00();
        } while ((int)plVar19 == 0);
        do {
          plVar9 = plVar9 + -0x15;
          func_0x0001086fa030();
        } while (((ulong)plVar19 & 1) != 0);
      }
      unaff_x19 = plVar11 + -0x15;
      if (plVar13 != unaff_x19) {
        func_0x0001086f9ec8();
        FUN_1086f8530();
      }
      param_2 = alStack_110;
      param_1 = unaff_x19;
      FUN_1086f8530(unaff_x19,param_2);
      func_0x0001086f9f0c();
      param_5 = 0;
      goto LAB_1086f8934;
    }
  }
  func_0x0001086f9ef4();
  lVar18 = 0;
  do {
    uVar15 = (long)plVar13 + lVar18 + 0xa8;
    FUN_1086f8ef4(uVar15,alStack_110);
    lVar18 = lVar18 + 0xa8;
  } while ((uVar15 & 1) != 0);
  plVar19 = (long *)((long)plVar13 + lVar18);
  plVar9 = plVar8;
  plVar11 = plVar19;
  if (lVar18 == 0xa8) {
    do {
      unaff_x19 = plVar9;
      if (plVar9 <= plVar19) break;
      plVar9 = plVar9 + -0x15;
      func_0x0001086f9ee8();
      unaff_x19 = plVar9;
    } while ((uVar15 & 1) == 0);
  }
  else {
    do {
      plVar9 = plVar9 + -0x15;
      func_0x0001086f9ee8();
      unaff_x19 = plVar9;
    } while ((int)uVar15 == 0);
  }
  while (plVar11 < plVar9) {
    FUN_1086f9374(plVar11,plVar9);
    do {
      plVar11 = plVar11 + 0x15;
      plVar12 = plVar11;
      FUN_1086f8ef4(plVar11,alStack_110);
    } while (((ulong)plVar12 & 1) != 0);
    do {
      plVar9 = plVar9 + -0x15;
      plVar12 = plVar9;
      FUN_1086f8ef4(plVar9,alStack_110);
    } while (((ulong)plVar12 & 1) == 0);
  }
  plVar9 = plVar11 + -0x15;
  if (plVar13 != plVar9) {
    FUN_1086f8530(plVar13,plVar9);
  }
  FUN_1086f8530(plVar9,alStack_110);
  func_0x0001086f9f0c();
  if (plVar19 < unaff_x19) goto LAB_1086f8ac8;
  unaff_x19 = plVar13;
  FUN_1086f9168(plVar13,plVar9);
  param_1 = plVar11;
  param_2 = plVar8;
  FUN_1086f9168(plVar11,plVar8);
  if ((int)param_1 == 0) goto code_r0x0001086f8ac4;
  plVar8 = plVar9;
  if (((ulong)unaff_x19 & 1) != 0) goto LAB_1086f8bc4;
  goto LAB_1086f8920;
LAB_1086f8c80:
  plVar11 = param_2 + 0x15;
  if (plVar11 == plVar8) {
LAB_1086f8bc4:
    func_0x0001086f9f80(unaff_x30);
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = unaff_x30;
    return auVar21;
  }
  plVar10 = plVar11;
  FUN_1086f8ef4();
  if ((int)plVar10 != 0) {
    func_0x0001086fa024();
    lVar2 = lVar18;
    do {
      lVar17 = lVar2;
      func_0x0001086f9fc8((long)plVar13 + lVar17 + 0xa8);
      plVar10 = plVar13;
      if (lVar17 == 0) goto LAB_1086f8cd4;
      plVar10 = alStack_110;
      FUN_1086f8ef4(plVar10,(long)plVar13 + lVar17 + -0xa8);
      lVar2 = lVar17 + -0xa8;
    } while (((ulong)plVar10 & 1) != 0);
    plVar10 = (long *)((long)plVar13 + lVar17);
LAB_1086f8cd4:
    FUN_1086f8530(plVar10,alStack_110);
    func_0x0001086f9f0c();
  }
  lVar18 = lVar18 + 0xa8;
  param_2 = plVar11;
  goto LAB_1086f8c80;
code_r0x0001086f8ac4:
  if (((ulong)unaff_x19 & 1) == 0) {
LAB_1086f8ac8:
    FUN_1086f88e8(plVar13,plVar9,uStack_1d0,param_4,param_5 & 1);
    param_5 = 0;
    param_1 = plVar13;
    param_2 = plVar9;
  }
  goto LAB_1086f8934;
}



/* Entry: 1086f8ef4; end: 1086f8fbf;  */

byte FUN_1086f8ef4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  byte abStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  byte abStack_50 [8];
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  FUN_1086f9308(abStack_50,param_1);
  FUN_1086f9308(abStack_80,param_2);
  if (abStack_50[0] == abStack_80[0]) {
    bVar2 = SBORROW8(lStack_48,lStack_78);
    lVar1 = lStack_48 - lStack_78;
    if (lStack_48 == lStack_78) {
      bVar2 = SBORROW8(lStack_40,lStack_70);
      lVar1 = lStack_40 - lStack_70;
      if (lStack_40 == lStack_70) {
        puVar3 = auStack_38;
        func_0x000107c27bd4(puVar3,auStack_68);
        abStack_50[0] = (char)puVar3 < '\0';
        goto LAB_1086f8f84;
      }
    }
    abStack_50[0] = lVar1 < 0 == bVar2;
  }
  else {
    abStack_50[0] = abStack_50[0] ^ 1;
  }
LAB_1086f8f84:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return abStack_50[0];
}



/* Entry: 1086f8fc0; end: 1086f90bb;  */

undefined1  [16] FUN_1086f8fc0(long *param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  plVar3 = param_2;
  plVar6 = param_2;
  func_0x0001086f9f28();
  plVar4 = plVar3;
  func_0x0001086f9e6c();
  plVar5 = param_1;
  if (((ulong)plVar3 & 1) == 0) {
    if ((int)plVar4 != 0) {
      func_0x0001086f9fd0();
      FUN_1086f9374();
      plVar4 = param_2;
      func_0x0001086f9f28();
      param_3 = param_2;
      if ((int)plVar4 != 0) goto LAB_1086f903c;
    }
LAB_1086f9044:
    auVar14._8_8_ = plVar6;
    auVar14._0_8_ = plVar4;
    return auVar14;
  }
  if ((int)plVar4 == 0) {
    plVar6 = param_2;
    FUN_1086f9374(param_1,param_2);
    func_0x0001086f9e6c();
    plVar5 = param_2;
    plVar4 = param_1;
    if ((int)param_1 == 0) goto LAB_1086f9044;
  }
LAB_1086f903c:
  if (param_3 == plVar5) {
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = plVar5;
    return auVar13;
  }
  uVar9 = plVar5[1];
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  uVar11 = param_3[1];
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  if (uVar9 == uVar11) {
    func_0x000107c34868();
    func_0x0001088ef054();
    func_0x000107c303a4(plVar5 + 3,param_3 + 3);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar10;
    puVar7 = (undefined1 *)(unaff_x19 + 0x38);
    puVar8 = puVar7;
    for (puVar2 = (undefined1 *)(unaff_x20 + 0x38); puVar2 != (undefined1 *)(unaff_x20 + 0xa4);
        puVar2 = puVar2 + 1) {
      uVar1 = *puVar2;
      *puVar2 = *puVar8;
      *puVar8 = uVar1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    auVar12._8_8_ = puVar7;
    auVar12._0_8_ = (undefined1 *)(unaff_x20 + 0xa4);
    return auVar12;
  }
  plVar3 = plVar5;
  func_0x00010b4cf4b4();
  (**(code **)(*plVar3 + 0x20))();
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x20))(param_3,plVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3);
  auVar15._8_8_ = UNRECOVERED_JUMPTABLE;
  auVar15._0_8_ = plVar3;
  return auVar15;
}



/* Entry: 1086f90bc; end: 1086f9167;  */

undefined1  [16]
FUN_1086f90bc(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  func_0x000107c32b58();
  func_0x0001086f904c();
  plVar3 = param_5;
  plVar4 = param_4;
  FUN_1086f8ef4(param_5,param_4);
  if ((int)plVar3 != 0) {
    FUN_1086f9374(param_4,param_5);
    plVar3 = param_4;
    func_0x0001086f9f28();
    plVar4 = param_5;
    if ((int)plVar3 != 0) {
      FUN_1086f9374(param_3,param_4);
      plVar3 = param_3;
      func_0x0001086f9ed4();
      plVar4 = param_4;
      if ((int)plVar3 != 0) {
        FUN_1086f9374();
        plVar3 = unaff_x19;
        func_0x0001086f9f9c();
        plVar4 = param_3;
        if ((int)plVar3 != 0) {
          func_0x0001086f9ec8();
          if (param_3 == plVar3) {
            auVar10._8_8_ = param_3;
            auVar10._0_8_ = plVar3;
            return auVar10;
          }
          uVar5 = plVar3[1];
          if ((uVar5 & 1) != 0) {
            uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
          }
          uVar7 = param_3[1];
          if ((uVar7 & 1) != 0) {
            uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
          }
          if (uVar5 != uVar7) {
            plVar4 = plVar3;
            func_0x00010b4cf4b4();
            (**(code **)(*plVar4 + 0x20))();
            (**(code **)(*plVar3 + 0x18))(plVar3);
            (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
            (**(code **)(*param_3 + 0x18))(param_3);
            (**(code **)(*param_3 + 0x20))(param_3,plVar4);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar4);
            auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
            auVar11._0_8_ = plVar4;
            return auVar11;
          }
          func_0x000107c34868();
          func_0x0001088ef054();
          func_0x000107c303a4(plVar3 + 3,param_3 + 3);
          lVar6 = unaff_x19[6];
          unaff_x19[6] = *(long *)(unaff_x20 + 0x30);
          *(long *)(unaff_x20 + 0x30) = lVar6;
          plVar3 = unaff_x19 + 7;
          plVar4 = plVar3;
          for (puVar2 = (undefined1 *)(unaff_x20 + 0x38); puVar2 != (undefined1 *)(unaff_x20 + 0xa4)
              ; puVar2 = puVar2 + 1) {
            uVar1 = *puVar2;
            *puVar2 = (char)*plVar4;
            *(undefined1 *)plVar4 = uVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar4 = (long *)((long)plVar4 + 1);
          }
          auVar8._8_8_ = plVar3;
          auVar8._0_8_ = (undefined1 *)(unaff_x20 + 0xa4);
          return auVar8;
        }
      }
    }
  }
  auVar9._8_8_ = plVar4;
  auVar9._0_8_ = plVar3;
  return auVar9;
}



/* Entry: 1086f9168; end: 1086f9307;  */

bool FUN_1086f9168(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_f8 [168];
  
  iVar7 = 1;
  switch((param_2 - param_1) / 0xa8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001086f9e6c();
    if (iVar7 != 0) {
      func_0x0001086f9fd0();
      FUN_1086f9374();
    }
    break;
  case 3:
    FUN_1086f8fc0(param_1,param_1 + 0xa8,param_2 + -0xa8);
    break;
  case 4:
    func_0x0001086f904c(param_1,param_1 + 0xa8,param_1 + 0x150,param_2 + -0xa8);
    break;
  case 5:
    FUN_1086f90bc(param_1,param_1 + 0xa8,param_1 + 0x150,param_1 + 0x1f8,param_2 + -0xa8);
    break;
  default:
    FUN_1086f8fc0(param_1,param_1 + 0xa8,param_1 + 0x150);
    lVar6 = 0;
    iVar7 = 0;
    lVar5 = param_1 + 0x1f8;
    lVar4 = param_1 + 0x150;
    while (lVar3 = lVar5, lVar3 != param_2) {
      lVar5 = lVar3;
      FUN_1086f8ef4(lVar3,lVar4);
      if ((int)lVar5 != 0) {
        FUN_1086f84bc(auStack_f8,lVar3);
        lVar5 = lVar6;
        do {
          lVar4 = param_1 + lVar5;
          FUN_1086f8530(lVar4 + 0x1f8,lVar4 + 0x150);
          lVar2 = param_1;
          if (lVar5 == -0x150) goto LAB_1086f928c;
          puVar1 = auStack_f8;
          FUN_1086f8ef4(puVar1,lVar4 + 0xa8);
          lVar5 = lVar5 + -0xa8;
        } while (((ulong)puVar1 & 1) != 0);
        lVar2 = param_1 + lVar5 + 0x1f8;
LAB_1086f928c:
        FUN_1086f8530(lVar2,auStack_f8);
        iVar7 = iVar7 + 1;
        FUN_1088eba94(auStack_f8);
        if (iVar7 == 8) {
          return lVar3 + 0xa8 == param_2;
        }
      }
      lVar6 = lVar6 + 0xa8;
      lVar4 = lVar3;
      lVar5 = lVar3 + 0xa8;
    }
  }
  return true;
}



/* Entry: 1086f9308; end: 1086f9373;  */

undefined1 * FUN_1086f9308(undefined1 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  *param_1 = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x80);
  ppuVar1 = &PTR_PTR_113278360;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
  }
  ppuVar2 = &PTR_PTR_11326cb58;
  if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[3];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
  return param_1;
}



/* Entry: 1086f9374; end: 1086f93af;  */

undefined1  [16] FUN_1086f9374(long *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 == param_1) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  uVar6 = param_1[1];
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar8 = param_2[1];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (uVar6 != uVar8) {
    plVar3 = param_1;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar3 + 0x20))();
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2,plVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3);
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = plVar3;
    return auVar11;
  }
  func_0x000107c34868();
  func_0x0001088ef054();
  func_0x000107c303a4(param_1 + 3,param_2 + 3);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
  puVar4 = (undefined1 *)(unaff_x19 + 0x38);
  puVar5 = puVar4;
  for (puVar2 = (undefined1 *)(unaff_x20 + 0x38); puVar2 != (undefined1 *)(unaff_x20 + 0xa4);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar5;
    *puVar5 = uVar1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = (undefined1 *)(unaff_x20 + 0xa4);
  return auVar9;
}



/* Entry: 1086f93b0; end: 1086f94ef;  */

void FUN_1086f93b0(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_108 [168];
  
  if (1 < param_2) {
    lVar3 = (param_3 - (long)param_1) / 0xa8;
    uVar8 = param_2 - 2U >> 1;
    if (lVar3 <= (long)uVar8) {
      uVar2 = lVar3 << 1 | 1;
      puVar5 = param_1 + uVar2 * 0xa8;
      uVar1 = lVar3 * 2 + 2;
      puVar6 = param_1;
      puVar7 = puVar5;
      uVar9 = uVar2;
      if ((long)uVar1 < param_2) {
        puVar6 = puVar5;
        FUN_1086f8ef4(puVar5,puVar5 + 0xa8);
        puVar7 = puVar5 + 0xa8;
        uVar9 = uVar1;
        if ((int)puVar6 == 0) {
          puVar7 = puVar5;
          uVar9 = uVar2;
        }
      }
      func_0x0001086f9f14();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = auStack_108;
        FUN_1086f84bc(puVar6,param_3);
        do {
          puVar5 = puVar7;
          iVar4 = (int)puVar6;
          func_0x0001086f9f6c();
          FUN_1086f8530();
          if ((long)uVar8 < (long)uVar9) break;
          uVar2 = uVar9 << 1 | 1;
          puVar6 = param_1 + uVar2 * 0xa8;
          uVar1 = uVar9 * 2 + 2;
          puVar7 = puVar6;
          uVar9 = uVar2;
          if ((long)uVar1 < param_2) {
            func_0x0001086f9f14();
            puVar7 = puVar6 + 0xa8;
            uVar9 = uVar1;
            if (iVar4 == 0) {
              puVar7 = puVar6;
              uVar9 = uVar2;
            }
          }
          puVar6 = puVar7;
          FUN_1086f8ef4(puVar7,auStack_108);
        } while ((int)puVar6 == 0);
        FUN_1086f8530(puVar5,auStack_108);
        FUN_1088eba94(auStack_108);
      }
    }
  }
  return;
}



/* Entry: 1086f94f0; end: 1086f950f;  */

void FUN_1086f94f0(void)

{
  func_0x0001086fa088();
  FUN_1086f9510();
  return;
}



/* Entry: 1086f9510; end: 1086f9553;  */

void FUN_1086f9510(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000100865a50();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0xa8) {
    func_0x0001086f9f6c();
    FUN_1086f8530();
  }
  func_0x0001086f9ec8();
  return;
}



/* Entry: 1086f9554; end: 1086f9573;  */

void FUN_1086f9554(void)

{
  func_0x0001086fa088();
  FUN_1086f9574();
  return;
}



/* Entry: 1086f9574; end: 1086f95b7;  */

void FUN_1086f9574(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000100865a50();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x378) {
    func_0x0001086f9f6c();
    FUN_1086f95b8();
  }
  func_0x0001086f9ec8();
  return;
}



/* Entry: 1086f95b8; end: 1086f9667;  */

long FUN_1086f95b8(long param_1,long param_2)

{
  undefined1 uVar1;
  
  func_0x000107c3194c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c28904(param_1 + 0x20,param_2 + 0x20);
  func_0x000107c27c54(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = uVar1;
  FUN_1086f9668(param_1 + 0x68,param_2 + 0x68);
  FUN_1086f96dc(param_1 + 0x180,param_2 + 0x180);
  _memcpy(param_1 + 0x1c0,param_2 + 0x1c0,0x84);
  func_0x000107c28908(param_1 + 0x248,param_2 + 0x248);
  uVar1 = *(undefined1 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined1 *)(param_1 + 0x270) = uVar1;
  FUN_10869d160(param_1 + 0x278,param_2 + 0x278);
  FUN_10869d378(param_1 + 0x358,param_2 + 0x358);
  return param_1;
}



/* Entry: 1086f9668; end: 1086f96db;  */

void FUN_1086f9668(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32b58();
  *param_1 = *param_2;
  func_0x000107c28904(param_1 + 1,param_2 + 1);
  func_0x000107c28904(unaff_x20 + 0x20,unaff_x19 + 0x20);
  func_0x000107c28908(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000107c28908(unaff_x20 + 0x58,unaff_x19 + 0x58);
  func_0x0001086f9f6c();
  _memcpy();
  return;
}



/* Entry: 1086f96dc; end: 1086f970b;  */

void FUN_1086f96dc(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c32b58();
  FUN_1086f970c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x34);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x2c);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x34) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x2c) = uVar1;
  return;
}



/* Entry: 1086f970c; end: 1086f972f;  */

undefined8 FUN_1086f970c(undefined8 param_1)

{
  FUN_1086f9730();
  return param_1;
}



/* Entry: 1086f9730; end: 1086f9757;  */

void FUN_1086f9730(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000107c27a08();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000100658238();
    func_0x00010069ff84();
    uVar2 = *unaff_x19;
    unaff_x20[1] = unaff_x19[1];
    *unaff_x20 = uVar2;
    unaff_x20[2] = unaff_x19[2];
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    return;
  }
  return;
}



/* Entry: 1086f9758; end: 1086f977b;  */

void FUN_1086f9758(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27a08();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1086f977c; end: 1086f97b7;  */

undefined8 * FUN_1086f977c(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_1086f97b8(param_1,param_2,param_2 + param_3 * 0x10);
  return param_1;
}



/* Entry: 1086f97b8; end: 1086f97ef;  */

void FUN_1086f97b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086f9ffc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
    FUN_1086f97f0();
  }
  return;
}



/* Entry: 1086f97f0; end: 1086f9823;  */

void FUN_1086f97f0(void)

{
  func_0x0001086f9808();
  return;
}



/* Entry: 1086f9824; end: 1086f99f7;  */

undefined1  [16]
FUN_1086f9824(undefined8 param_1,float param_2,long *param_3,int *param_4,long *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_4;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1086f98d8;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) break;
          if ((int)plVar8[2] == *param_4) {
            uVar3 = 0;
            goto LAB_1086f99e0;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar2 * uVar9;
        }
      } while (uVar6 == unaff_x24);
    }
  }
LAB_1086f98d8:
  plVar1 = param_3 + 2;
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar5 = *param_5;
  plVar8[3] = param_5[1];
  plVar8[2] = lVar5;
  func_0x0001086fa09c();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < (float)lVar5)) {
    func_0x0001086fa00c(uVar9 << 1);
    FUN_1086f99f8(param_3);
    uVar9 = param_3[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_3;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar8 = *plVar1;
    *plVar1 = (long)plVar8;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar1;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar5 + uVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  func_0x0001086f9f54();
  uVar3 = 1;
LAB_1086f99e0:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1086f99f8; end: 1086f9b97;  */

void FUN_1086f99f8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1086f9b98(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_1086f9b98(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f9b98; end: 1086f9baf;  */

void FUN_1086f9b98(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f9bb0; end: 1086f9c53;  */

long * FUN_1086f9bb0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086f9c54; end: 1086f9c6b;  */

void FUN_1086f9c54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086f9c6c; end: 1086f9e43;  */

undefined1  [16]
FUN_1086f9c6c(float param_1,float param_2,long *param_3,int *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  uVar10 = (ulong)*param_4;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar6 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1086f9d1c;
          uVar6 = plVar8[1];
          if (uVar6 != uVar10) break;
          if ((int)plVar8[2] == *param_4) {
            uVar3 = 0;
            goto LAB_1086f9e2c;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar6 / uVar9;
          }
          uVar6 = uVar6 - uVar2 * uVar9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_1086f9d1c:
  puVar11 = (undefined4 *)*param_6;
  plVar1 = param_3 + 2;
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *puVar11;
  plVar8[3] = 0;
  func_0x0001086fa09c();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x0001086fa00c(uVar9 << 1);
    FUN_1086f99f8(param_3);
    uVar9 = param_3[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_3;
  plVar7 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar8 = *plVar1;
    *plVar1 = (long)plVar8;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar1;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar5 + uVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  func_0x0001086f9f54();
  uVar3 = 1;
LAB_1086f9e2c:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 1086f9e44; end: 1086fa0c3;  */

void FUN_1086f9e44(void)

{
  return;
}



/* Entry: 1086fa0c4; end: 1086fa153;  */

undefined8 * FUN_1086fa0c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67430;
  param_1[1] = &PTR_DAT_110a67528;
  FUN_10865a95c(param_1 + 0x2e);
  FUN_1086ff228(param_1 + 0x2c);
  func_0x000107c27f98(param_1 + 0x2b);
  func_0x000107c27f9c(param_1 + 0x2a);
  FUN_1086fe8dc(param_1 + 0x1d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1a);
  func_0x000107c29588(param_1 + 0x18);
  func_0x000107c29590(param_1 + 0x16);
  func_0x000107c29550(param_1 + 6);
  func_0x00010087176c();
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1086fa154; end: 1086fa15f;  */

undefined8 * FUN_1086fa154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67430;
  param_1[1] = &PTR_DAT_110a67528;
  FUN_10865a95c(param_1 + 0x2e);
  FUN_1086ff228(param_1 + 0x2c);
  func_0x000107c27f98(param_1 + 0x2b);
  func_0x000107c27f9c(param_1 + 0x2a);
  FUN_1086fe8dc(param_1 + 0x1d);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1a);
  func_0x000107c29588(param_1 + 0x18);
  func_0x000107c29590(param_1 + 0x16);
  func_0x000107c29550(param_1 + 6);
  func_0x00010087176c();
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1086fa160; end: 1086fa173;  */

void FUN_1086fa160(void)

{
  FUN_1086fa0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086fa174; end: 1086fa17b;  */

void FUN_1086fa174(long param_1)

{
  FUN_1086fa0c4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086fa17c; end: 1086fa2a3;  */

void FUN_1086fa17c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x20;
  
  func_0x000107c32bd4();
  func_0x000107c32c88(FUN_108701748);
  func_0x000107c32bec();
  func_0x000107c28850(unaff_x20 + 0x158);
  FUN_108707b0c(*(undefined8 *)(unaff_x20 + 0xc0));
  *(undefined1 *)(unaff_x20 + 0xb8) = 1;
  plVar2 = (long *)(unaff_x20 + 0x170);
  FUN_108659ed0(param_1 + 0x28);
  func_0x000107c32c4c();
  do {
    func_0x000107c32bd0();
  } while (extraout_w10 != 0);
  func_0x000107c32c48();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x000108701ec4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087022a0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108701fac();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108702238();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000108701f38();
        if ((bool)in_ZR) {
          func_0x000108701f9c();
          func_0x000108701f00();
          func_0x000108701e68();
        }
        func_0x000108701e24();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c32c8c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086fa2a4; end: 1086fa2e3;  */

void FUN_1086fa2a4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108702568();
    }
    func_0x0001086fe900();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}


