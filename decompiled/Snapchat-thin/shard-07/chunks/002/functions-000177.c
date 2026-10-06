/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10533f8d4; end: 10533f917;  */

undefined8 * FUN_10533f8d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x000105341b78();
  if (param_1 < (undefined8 *)unaff_x19[2]) {
    uVar2 = *param_2;
    puVar1 = param_1 + 2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar1 = unaff_x19;
    FUN_10533f918();
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10533f918; end: 10533f95f;  */

undefined8 FUN_10533f918(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001053419ac();
  func_0x0001053417cc();
  FUN_10533e2c8();
  func_0x000105341db8();
  func_0x000105341a24();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010534199c();
  return uVar1;
}



/* Entry: 10533f960; end: 10533fddf;  */

void FUN_10533f960(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  int extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  int extraout_w10;
  long extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x11;
  long *unaff_x19;
  long unaff_x22;
  long *plVar6;
  long unaff_x23;
  long *plVar7;
  long lVar8;
  ulong unaff_x25;
  long *plVar9;
  long *unaff_x27;
  long alStack_80 [2];
  long lStack_70;
  long lStack_68;
  
  func_0x0001053420b0();
  plVar5 = param_1;
  do {
    func_0x000105341ddc();
LAB_10533f990:
    while( true ) {
      func_0x00010534209c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010533fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)unaff_x27 + 0x10dd96dc3) * 4 + 0x10533fb94))();
        return;
      }
      if ((long)unaff_x27 < 0x18) {
        if ((unaff_x25 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while( true ) {
            plVar5 = param_1;
            param_1 = plVar5 + 2;
            cVar1 = SBORROW8((long)param_1,(long)param_2);
            cVar2 = (long)param_1 - (long)param_2 < 0;
            uVar3 = param_1 == param_2;
            if ((bool)uVar3) break;
            func_0x000105341838(plVar5[2]);
            if (!(bool)uVar3 && cVar2 == cVar1) {
              lStack_68 = plVar5[3];
              *param_1 = 0;
              plVar5[3] = 0;
              do {
                func_0x0001053418c0();
                func_0x000105341e0c();
              } while (!(bool)uVar3 && cVar2 == cVar1);
              func_0x000105341cc4(plVar5 + 2);
              func_0x0001053418b8();
            }
          }
          return;
        }
        plVar5 = param_1;
        if (param_1 == param_2) {
          return;
        }
        goto LAB_10533fbec;
      }
      if (unaff_x22 == 0) {
        if (param_1 == param_2) {
          return;
        }
        plVar6 = (long *)((long)unaff_x27 - 2U >> 1);
        plVar7 = plVar6;
        goto LAB_10533fc54;
      }
      cVar1 = SBORROW8((long)unaff_x27,0x81);
      cVar2 = (long)unaff_x27 + -0x81 < 0;
      uVar3 = unaff_x27 == (long *)0x81;
      if (unaff_x27 < (long *)0x81) {
        func_0x000105341a08();
        FUN_10533fde0();
      }
      else {
        func_0x000105341a30();
        FUN_10533fde0();
        func_0x000105342088();
        FUN_10533fde0();
        plVar5 = param_1 + 4;
        FUN_10533fde0(plVar5,param_1 + ((ulong)unaff_x27 & 0xfffffffffffffffe) + 2);
        func_0x0001053420bc();
        FUN_10533fde0();
        func_0x000105341fb4();
      }
      unaff_x22 = unaff_x22 + -1;
      if (((unaff_x25 & 1) != 0) || (func_0x000105342074(*param_1), !(bool)uVar3 && cVar2 == cVar1))
      break;
      func_0x000105341a88();
      func_0x000105341fe0();
      plVar6 = param_1;
      if ((bool)uVar3 || cVar2 != cVar1) {
        plVar7 = param_1 + 2;
        do {
          plVar6 = plVar7;
          cVar1 = SBORROW8((long)plVar6,(long)param_2);
          cVar2 = (long)plVar6 - (long)param_2 < 0;
          bVar4 = plVar6 == param_2;
          if (param_2 <= plVar6) break;
          func_0x000105341ae4();
          plVar7 = extraout_x9_00;
        } while (bVar4 || cVar2 != cVar1);
      }
      else {
        do {
          plVar6 = plVar6 + 2;
        } while (extraout_w8 <= *(int *)(*plVar6 + 0x68));
      }
      cVar1 = SBORROW8((long)plVar6,(long)param_2);
      cVar2 = (long)plVar6 - (long)param_2 < 0;
      uVar3 = plVar6 == param_2;
      plVar7 = param_2;
      if (plVar6 < param_2) {
        do {
          func_0x0001053419d0();
          plVar7 = extraout_x9_01;
        } while (!(bool)uVar3 && cVar2 == cVar1);
      }
      while( true ) {
        cVar1 = SBORROW8((long)plVar6,(long)plVar7);
        cVar2 = (long)plVar6 - (long)plVar7 < 0;
        uVar3 = plVar6 == plVar7;
        if (plVar7 <= plVar6) break;
        func_0x000105341bf0();
        do {
          plVar6 = plVar6 + 2;
          func_0x000105341ae4();
        } while ((bool)uVar3 || cVar2 != cVar1);
        do {
          func_0x0001053419d0();
          plVar7 = extraout_x9_02;
        } while (!(bool)uVar3 && cVar2 == cVar1);
      }
      in_CY = plVar6 + -2 <= param_1;
      in_ZR = param_1 == plVar6 + -2;
      if (!(bool)in_ZR) {
        func_0x000105341ec8();
      }
      func_0x000105341f58();
      func_0x0001053418b8();
      unaff_x25 = 0;
    }
    func_0x000105341a88();
    do {
      func_0x000105341d7c();
    } while (!(bool)uVar3 && cVar2 == cVar1);
    plVar6 = (long *)((long)param_1 + extraout_x10);
    cVar1 = SBORROW8(extraout_x10,0x10);
    cVar2 = extraout_x10 + -0x10 < 0;
    uVar3 = 0;
    plVar7 = param_2;
    plVar9 = plVar6;
    if (extraout_x10 == 0x10) {
      do {
        cVar1 = SBORROW8((long)plVar6,(long)param_2);
        cVar2 = (long)plVar6 - (long)param_2 < 0;
        bVar4 = plVar6 == param_2;
        if (param_2 <= plVar6) break;
        func_0x0001053419e0();
      } while (bVar4 || cVar2 != cVar1);
    }
    else {
      do {
        func_0x0001053419e0();
      } while ((bool)uVar3 || cVar2 != cVar1);
    }
    while (plVar9 < plVar7) {
      func_0x000105341bbc();
      do {
        plVar9 = plVar9 + 2;
        plVar7 = extraout_x9;
      } while (extraout_w10 < *(int *)(*plVar9 + 0x68));
      do {
        plVar7 = plVar7 + -2;
      } while (*(int *)(*plVar7 + 0x68) <= extraout_w10);
    }
    unaff_x27 = plVar9 + -2;
    if (param_1 != unaff_x27) {
      func_0x000105341940();
      FUN_10533ea48();
    }
    func_0x000105341f64();
    func_0x0001053418b8();
    in_CY = param_2 <= plVar6;
    in_ZR = plVar6 == param_2;
    unaff_x19 = param_2;
    if (!(bool)in_CY) goto LAB_10533fac0;
    func_0x000105341940();
    FUN_10533feec();
    func_0x000105341ff4();
    FUN_10533feec();
    if ((int)plVar5 == 0) goto code_r0x00010533fabc;
    param_2 = unaff_x27;
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10533fbec:
  do {
    plVar5 = plVar5 + 2;
    cVar1 = SBORROW8((long)plVar5,(long)param_2);
    cVar2 = (long)plVar5 - (long)param_2 < 0;
    uVar3 = plVar5 == param_2;
    if ((bool)uVar3) {
      return;
    }
    func_0x000105341e3c();
  } while ((bool)uVar3 || cVar2 != cVar1);
  func_0x000105342134();
  do {
    func_0x0001053418c0();
    plVar6 = param_1;
    if (unaff_x23 == 0) goto LAB_10533fc28;
    func_0x000105341ba0();
  } while (!(bool)uVar3 && cVar2 == cVar1);
  plVar6 = (long *)((long)param_1 + unaff_x23 + 0x10);
LAB_10533fc28:
  func_0x000105341cc4(plVar6);
  func_0x0001053418b8();
  goto LAB_10533fbec;
LAB_10533fc54:
  do {
    cVar1 = SBORROW8((long)plVar6,(long)plVar7);
    cVar2 = (long)plVar6 - (long)plVar7 < 0;
    uVar3 = plVar6 == plVar7;
    if ((long)plVar7 <= (long)plVar6) {
      func_0x000105341ccc();
      plVar9 = unaff_x19;
      if ((cVar2 != cVar1) &&
         (func_0x000105341b2c(), plVar9 = extraout_x10_00, (bool)uVar3 || cVar2 != cVar1)) {
        plVar9 = unaff_x19;
      }
      unaff_x19 = plVar9;
      func_0x000105341e24();
      if ((bool)uVar3 || cVar2 != cVar1) {
        func_0x000105342120();
        do {
          func_0x000105341f38();
          cVar1 = SBORROW8((long)plVar6,(long)unaff_x19);
          cVar2 = (long)plVar6 - (long)unaff_x19 < 0;
          uVar3 = plVar6 == unaff_x19;
          if ((long)plVar6 < (long)unaff_x19) break;
          func_0x000105341c8c();
          unaff_x19 = extraout_x9_03;
          if ((cVar2 != cVar1) &&
             (func_0x000105341b4c(), unaff_x19 = extraout_x11, (bool)uVar3 || cVar2 != cVar1)) {
            unaff_x19 = extraout_x9_04;
          }
          func_0x00010534210c();
        } while ((bool)uVar3 || cVar2 != cVar1);
        func_0x000105341be8();
        func_0x0001053418b8();
      }
    }
    plVar7 = (long *)((long)plVar7 + -1);
  } while (-1 < (long)plVar7);
  do {
    cVar1 = SBORROW8((long)unaff_x27,2);
    lVar8 = (long)unaff_x27 + -2;
    cVar2 = lVar8 < 0;
    uVar3 = lVar8 == 0;
    if ((long)unaff_x27 < 2) {
      return;
    }
    func_0x000105341c70(lVar8);
    do {
      plVar9 = plVar6;
      plVar7 = plVar5;
      plVar5 = plVar7 + (long)plVar9 * 2 + 2;
      func_0x000105341910();
      plVar6 = extraout_x8;
      if ((cVar2 != cVar1) &&
         (func_0x000105341c54(), plVar6 = extraout_x10_01, (bool)uVar3 || cVar2 != cVar1)) {
        plVar6 = extraout_x8_00;
      }
      FUN_10533ea48();
      cVar1 = SBORROW8((long)plVar6,(long)unaff_x19);
      cVar2 = (long)plVar6 - (long)unaff_x19 < 0;
      uVar3 = plVar6 == unaff_x19;
    } while ((long)plVar6 <= (long)unaff_x19);
    param_2 = param_2 + -2;
    cVar1 = SBORROW8((long)plVar5,(long)param_2);
    cVar2 = (long)plVar5 - (long)param_2 < 0;
    if (plVar5 == param_2) {
      func_0x000105341be8(plVar5,alStack_80);
    }
    else {
      func_0x000105341e94();
      func_0x000105341edc();
      func_0x0001053420f8();
      if (cVar2 == cVar1) {
        func_0x000105341874();
        lVar8 = *plVar5;
        if (*(int *)(lVar8 + 0x68) < extraout_w9) {
          lStack_68 = plVar7[(long)plVar9 * 2 + 3];
          lStack_70 = lVar8;
          *plVar5 = 0;
          plVar7[(long)plVar9 * 2 + 3] = 0;
          do {
            func_0x000105341c44();
            if (unaff_x19 == (long *)0x0) break;
            func_0x000105341874((long)unaff_x19 + -1);
          } while (*(int *)(lVar8 + 0x68) < extraout_w9_00);
          func_0x000105341f4c();
          func_0x0001053418b8();
        }
      }
    }
    plVar5 = alStack_80;
    func_0x000105340f5c();
    unaff_x27 = (long *)((long)unaff_x27 + -1);
  } while( true );
code_r0x00010533fabc:
  if (((ulong)plVar6 & 1) == 0) {
LAB_10533fac0:
    func_0x000105341824();
    FUN_10533f960();
    unaff_x25 = 0;
  }
  goto LAB_10533f990;
}



/* Entry: 10533fde0; end: 10533fe47;  */

void FUN_10533fde0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar7;
  long extraout_x10;
  long lVar8;
  
  iVar1 = *(int *)(*param_2 + 0x68);
  lVar6 = *param_1;
  iVar2 = *(int *)(*param_3 + 0x68);
  if (*(int *)(lVar6 + 0x68) < iVar1) {
    cVar3 = SBORROW4(iVar2,iVar1);
    cVar4 = iVar2 - iVar1 < 0;
    bVar5 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      lVar7 = param_1[1];
      lVar8 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = lVar8;
      *param_3 = lVar6;
      param_3[1] = lVar7;
      return;
    }
    func_0x000105342170();
    if (!bVar5 && cVar4 == cVar3) {
      lVar6 = param_3[1];
      *param_2 = extraout_x9_00;
      param_2[1] = lVar6;
      *param_3 = extraout_x8_00;
      param_3[1] = extraout_x10;
    }
  }
  else {
    cVar3 = SBORROW4(iVar2,iVar1);
    cVar4 = iVar2 - iVar1 < 0;
    bVar5 = iVar2 == iVar1;
    if ((iVar1 < iVar2) && (func_0x000105341f88(), !bVar5 && cVar4 == cVar3)) {
      lVar6 = param_1[1];
      lVar7 = param_2[1];
      *param_1 = extraout_x8;
      param_1[1] = lVar7;
      *param_2 = extraout_x9;
      param_2[1] = lVar6;
      return;
    }
  }
  return;
}



/* Entry: 10533fe48; end: 10533fe87;  */

void FUN_10533fe48(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *unaff_x22;
  
  func_0x000105341764();
  FUN_10533fde0();
  func_0x00010534184c(*unaff_x22);
  if (((!(bool)in_ZR && in_NG == in_OV) && (func_0x00010534170c(), !(bool)in_ZR && in_NG == in_OV))
     && (func_0x000105341738(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x000105341860();
  }
  return;
}



/* Entry: 10533fe88; end: 10533feeb;  */

void FUN_10533fe88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x22;
  
  func_0x000105341764();
  FUN_10533fe48();
  func_0x000105341da0();
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    uVar1 = *unaff_x22;
    uVar2 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar2;
    func_0x00010534184c(uVar1);
    if (((!(bool)in_ZR && in_NG == in_OV) && (func_0x00010534170c(), !(bool)in_ZR && in_NG == in_OV)
        ) && (func_0x000105341738(), !(bool)in_ZR && in_NG == in_OV)) {
      func_0x000105341860();
    }
  }
  return;
}



/* Entry: 10533feec; end: 105340003;  */

/* WARNING: Removing unreachable block (ram,0x00010533fff8) */

void FUN_10533feec(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x000105341a98();
  lVar5 = param_2 - param_1 >> 4;
  cVar2 = SBORROW8(lVar5,5);
  cVar3 = lVar5 + -5 < 0;
  bVar4 = lVar5 == 5;
  switch(lVar5) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000105341778(unaff_x20[-2]);
    if (!bVar4 && cVar3 == cVar2) {
      func_0x000105342060();
    }
    break;
  case 3:
    FUN_10533fde0();
    break;
  case 4:
    func_0x000105342000();
    FUN_10533fe48();
    break;
  case 5:
    func_0x000105341d64(1);
    FUN_10533fe88();
    break;
  default:
    func_0x00010534204c();
    FUN_10533fde0();
    puVar1 = (undefined8 *)(unaff_x19 + 0x30);
    while( true ) {
      puVar6 = puVar1;
      cVar2 = SBORROW8((long)puVar6,(long)unaff_x20);
      cVar3 = (long)puVar6 - (long)unaff_x20 < 0;
      bVar4 = puVar6 == unaff_x20;
      if (bVar4) break;
      func_0x000105341838(*puVar6);
      if (!bVar4 && cVar3 == cVar2) {
        func_0x000105342020();
        do {
          func_0x000105341bd8();
          cVar2 = SCARRY8((long)unaff_x21,0x20);
          cVar3 = (long)(unaff_x21 + 4) < 0;
          bVar4 = unaff_x21 == (undefined8 *)0xffffffffffffffe0;
          if (bVar4) break;
          func_0x000105341b84();
        } while (!bVar4 && cVar3 == cVar2);
        FUN_10533ea48();
        func_0x000105341e88();
      }
      puVar1 = puVar6 + 2;
      unaff_x21 = puVar6;
    }
  }
  return;
}



/* Entry: 105340004; end: 10534002f;  */

undefined8 * FUN_105340004(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_105340030();
  return param_1;
}



/* Entry: 105340030; end: 1053400a7;  */

void FUN_105340030(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000105341a98();
    func_0x00010002b958();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  func_0x00010002b9fc(&uStack_40);
  return;
}



/* Entry: 1053400a8; end: 1053400b3;  */

void FUN_1053400a8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&UNK_10029f890);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&UNK_10029f890);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1053400b4; end: 10534012f;  */

void FUN_1053400b4(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  func_0x000105341a98();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2 = puVar1 + 2;
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000105341c24((long)puVar1 - *unaff_x19);
    func_0x0001053417cc();
    FUN_105340188();
    func_0x000105341db8();
    func_0x000105341ebc();
    puVar2 = (undefined8 *)unaff_x19[1];
    func_0x000105341c1c();
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 105340130; end: 105340157;  */

undefined8 FUN_105340130(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000105342148();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10534017c();
  func_0x0001053418ac();
  func_0x000105341a58();
  func_0x0001053418cc();
  return param_1;
}



/* Entry: 105340158; end: 10534017b;  */

void FUN_105340158(void)

{
  func_0x0001053418ac();
  func_0x000105341a58();
  func_0x0001053418cc();
  return;
}



/* Entry: 10534017c; end: 105340187;  */

void FUN_10534017c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000105341a40();
  func_0x000105341fd4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001053401bc(param_4);
  }
  func_0x000105341df4();
  return;
}



/* Entry: 105340188; end: 1053401df;  */

void FUN_105340188(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000105341fd4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001053401bc(param_4);
  }
  func_0x000105341df4();
  return;
}



/* Entry: 1053401e0; end: 1053401fb;  */

long * FUN_1053401e0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_105340228();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053401fc; end: 105340227;  */

long * FUN_1053401fc(long *param_1)

{
  FUN_105340228();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105340228; end: 10534022f;  */

void FUN_105340228(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001053418ac(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000105341250();
  }
  return;
}



/* Entry: 105340230; end: 105340263;  */

void FUN_105340230(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001053418ac();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000105341250();
  }
  return;
}



/* Entry: 105340264; end: 10534030f;  */

void FUN_105340264(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  long lVar1;
  undefined8 uStack_48;
  
  func_0x000105341a98();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x000105341d3c();
    lVar1 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x000105341eac();
        lVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    lVar1 = lVar1 + 0x10;
    unaff_x19[1] = lVar1;
  }
  else {
    func_0x000105341c24(*(ulong *)(param_1 + 8) - *unaff_x19);
    func_0x0001053417cc();
    FUN_105340188();
    func_0x000105341d3c(uStack_48);
    if (extraout_x9_00 != 0) {
      do {
        func_0x0001053417ac();
      } while (extraout_w10 != 0);
    }
    func_0x000105341ebc();
    lVar1 = unaff_x19[1];
    func_0x000105341c1c();
  }
  unaff_x19[1] = lVar1;
  return;
}



/* Entry: 105340310; end: 10534098f;  */

void FUN_105340310(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  long lVar11;
  ulong uVar12;
  ulong unaff_x25;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_178 [136];
  undefined1 auStack_f0 [104];
  int iStack_88;
  
  func_0x0001053420b0();
  func_0x0001053418ac();
  do {
LAB_105340350:
    while( true ) {
      uVar9 = unaff_x19 - unaff_x20;
      uVar14 = (long)uVar9 / 0x88;
      cVar3 = SBORROW8(uVar14,5);
      cVar4 = (long)(uVar14 - 5) < 0;
      bVar5 = uVar14 == 5;
      switch(uVar14) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x0001053420ec(*(undefined4 *)(unaff_x19 - 0x20));
        if (bVar5 || cVar4 != cVar3) {
          return;
        }
        FUN_105340c9c(unaff_x20,unaff_x19 - 0x88);
        return;
      case 3:
        func_0x0001053420d4();
        FUN_105340990();
        return;
      case 4:
        func_0x0001053420c8();
        func_0x000105340a20();
        return;
      case 5:
        FUN_105340a80(unaff_x20,unaff_x20 + 0x88,unaff_x20 + 0x110,unaff_x20 + 0x198,
                      unaff_x19 - 0x88);
        return;
      }
      if ((long)uVar9 < 0xcc0) {
        if ((unaff_x25 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar14 = unaff_x20;
            unaff_x20 = uVar14 + 0x88;
            cVar3 = SBORROW8(unaff_x20,unaff_x19);
            cVar4 = (long)(unaff_x20 - unaff_x19) < 0;
            bVar5 = unaff_x20 == unaff_x19;
            if (bVar5) break;
            func_0x000105341d4c(*(undefined4 *)(uVar14 + 0xf0));
            if (!bVar5 && cVar4 == cVar3) {
              func_0x000105341a70();
              do {
                uVar9 = uVar14;
                FUN_10533b178(uVar9 + 0x88,uVar9);
                uVar14 = uVar9 - 0x88;
              } while (*(int *)(uVar9 - 0x20) < iStack_88);
              FUN_10533b178(uVar9,auStack_f0);
              func_0x0001053419a4();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar15 = 0;
        uVar14 = unaff_x20;
        goto LAB_105340668;
      }
      if (unaff_x22 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar13 = uVar14 - 2 >> 1;
        uVar9 = uVar13;
        goto LAB_1053406fc;
      }
      lVar15 = unaff_x20 + (uVar14 >> 1) * 0x88;
      cVar3 = SBORROW8(uVar9,0x4401);
      cVar4 = (long)(uVar9 - 0x4401) < 0;
      uVar6 = uVar9 == 0x4401;
      if (uVar9 < 0x4401) {
        func_0x000105341a08();
        FUN_105340990();
      }
      else {
        func_0x000105341a30();
        FUN_105340990();
        FUN_105340990(unaff_x20 + 0x88,lVar15 + -0x88,unaff_x19 - 0x110);
        FUN_105340990(unaff_x20 + 0x110,lVar15 + 0x88,unaff_x19 - 0x198);
        func_0x0001053420bc();
        FUN_105340990();
        FUN_105340c9c(unaff_x20,lVar15);
      }
      unaff_x22 = unaff_x22 + -1;
      if (((unaff_x25 & 1) != 0) ||
         (func_0x0001053420ec(*(undefined4 *)(unaff_x20 - 0x20)), !(bool)uVar6 && cVar4 == cVar3))
      break;
      func_0x000105341a70();
      uVar14 = unaff_x20;
      if (*(int *)(unaff_x19 - 0x20) < iStack_88) {
        do {
          uVar9 = uVar14 + 0x88;
          piVar2 = (int *)(uVar14 + 0xf0);
          uVar14 = uVar9;
        } while (iStack_88 <= *piVar2);
      }
      else {
        do {
          uVar9 = uVar14 + 0x88;
          if (unaff_x19 <= uVar9) break;
          piVar2 = (int *)(uVar14 + 0xf0);
          uVar14 = uVar9;
        } while (iStack_88 <= *piVar2);
      }
      uVar14 = unaff_x19;
      uVar13 = unaff_x19;
      if (uVar9 < unaff_x19) {
        do {
          uVar13 = uVar14 - 0x88;
          piVar2 = (int *)(uVar14 - 0x20);
          uVar14 = uVar13;
        } while (*piVar2 < iStack_88);
      }
      while (uVar9 < uVar13) {
        FUN_105340c9c(uVar9,uVar13);
        do {
          piVar2 = (int *)(uVar9 + 0xf0);
          uVar9 = uVar9 + 0x88;
        } while (iStack_88 <= *piVar2);
        do {
          piVar2 = (int *)(uVar13 - 0x20);
          uVar13 = uVar13 - 0x88;
        } while (*piVar2 < iStack_88);
      }
      uVar14 = uVar9 - 0x88;
      if (unaff_x20 != uVar14) {
        FUN_10533b178(unaff_x20,uVar14);
      }
      FUN_10533b178(uVar14,auStack_f0);
      func_0x0001053419a4();
      unaff_x25 = 0;
      unaff_x20 = uVar9;
    }
    func_0x000105341a70();
    lVar15 = 0;
    do {
      lVar11 = unaff_x20 + lVar15;
      lVar15 = lVar15 + 0x88;
    } while (iStack_88 < *(int *)(lVar11 + 0xf0));
    uVar9 = unaff_x20 + lVar15;
    uVar13 = unaff_x19;
    uVar14 = uVar9;
    if (lVar15 == 0x88) {
      do {
        uVar12 = uVar13;
        if (uVar13 <= uVar9) break;
        uVar12 = uVar13 - 0x88;
        piVar2 = (int *)(uVar13 - 0x20);
        uVar13 = uVar12;
      } while (*piVar2 <= iStack_88);
    }
    else {
      do {
        uVar12 = uVar13 - 0x88;
        piVar2 = (int *)(uVar13 - 0x20);
        uVar13 = uVar12;
      } while (*piVar2 <= iStack_88);
    }
    while (uVar14 < uVar12) {
      FUN_105340c9c(uVar14,uVar12);
      do {
        piVar2 = (int *)(uVar14 + 0xf0);
        uVar14 = uVar14 + 0x88;
      } while (iStack_88 < *piVar2);
      do {
        piVar2 = (int *)(uVar12 - 0x20);
        uVar12 = uVar12 - 0x88;
      } while (*piVar2 <= iStack_88);
    }
    uVar12 = uVar14 - 0x88;
    if (unaff_x20 != uVar12) {
      func_0x000105341940();
      FUN_10533b178();
    }
    uVar8 = uVar12;
    FUN_10533b178(uVar12,auStack_f0);
    iVar7 = (int)uVar8;
    func_0x0001053419a4();
    if (uVar9 < uVar13) goto LAB_1053404e4;
    func_0x000105341940();
    FUN_105340b10();
    func_0x000105341ff4();
    FUN_105340b10();
    if (iVar7 == 0) goto code_r0x0001053404e0;
    unaff_x19 = uVar12;
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
LAB_105340668:
  if (uVar14 + 0x88 == unaff_x19) {
    return;
  }
  if (*(int *)(uVar14 + 0x68) < *(int *)(uVar14 + 0xf0)) {
    func_0x000105341e80(auStack_f0);
    lVar11 = lVar15;
    do {
      lVar16 = unaff_x20 + lVar11;
      FUN_10533b178(lVar16 + 0x88,lVar16);
      uVar9 = unaff_x20;
      if (lVar11 == 0) goto LAB_1053406c8;
      lVar11 = lVar11 + -0x88;
    } while (*(int *)(lVar16 + -0x20) < iStack_88);
    uVar9 = unaff_x20 + lVar11 + 0x88;
LAB_1053406c8:
    FUN_10533b178(uVar9,auStack_f0);
    func_0x0001053419a4();
  }
  lVar15 = lVar15 + 0x88;
  uVar14 = uVar14 + 0x88;
  goto LAB_105340668;
LAB_1053406fc:
  do {
    if ((long)uVar9 <= (long)uVar13) {
      uVar8 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      lVar15 = unaff_x20 + uVar8 * 0x88;
      uVar12 = uVar9 * 2 + 2;
      uVar10 = uVar8;
      if ((long)uVar12 < (long)uVar14) {
        piVar2 = (int *)(lVar15 + 0x68);
        piVar1 = (int *)(lVar15 + 0xf0);
        lVar11 = 0x88;
        if (*piVar2 <= *piVar1) {
          lVar11 = 0;
        }
        lVar15 = lVar15 + lVar11;
        uVar10 = uVar12;
        if (*piVar2 <= *piVar1) {
          uVar10 = uVar8;
        }
      }
      lVar11 = unaff_x20 + uVar9 * 0x88;
      if (*(int *)(lVar15 + 0x68) <= *(int *)(lVar11 + 0x68)) {
        FUN_10533b16c(auStack_f0,lVar11);
        do {
          lVar16 = lVar15;
          FUN_10533b178(lVar11,lVar16);
          if ((long)uVar13 < (long)uVar10) break;
          uVar8 = uVar10 << 1 | 1;
          lVar15 = unaff_x20 + uVar8 * 0x88;
          uVar12 = uVar10 * 2 + 2;
          uVar10 = uVar8;
          if ((long)uVar12 < (long)uVar14) {
            piVar2 = (int *)(lVar15 + 0x68);
            piVar1 = (int *)(lVar15 + 0xf0);
            lVar11 = 0x88;
            if (*piVar2 <= *piVar1) {
              lVar11 = 0;
            }
            lVar15 = lVar15 + lVar11;
            uVar10 = uVar12;
            if (*piVar2 <= *piVar1) {
              uVar10 = uVar8;
            }
          }
          lVar11 = lVar16;
        } while (*(int *)(lVar15 + 0x68) <= iStack_88);
        FUN_10533b178(lVar16,auStack_f0);
        func_0x0001053419a4();
      }
    }
    uVar9 = uVar9 - 1;
  } while (-1 < (long)uVar9);
  do {
    if ((long)uVar14 < 2) {
      return;
    }
    FUN_10533b16c(auStack_178,unaff_x20);
    uVar13 = 0;
    uVar9 = unaff_x20;
    do {
      lVar15 = uVar9 + uVar13 * 0x88;
      uVar8 = uVar13 << 1 | 1;
      uVar12 = uVar13 * 2 + 2;
      uVar10 = lVar15 + 0x88U;
      uVar13 = uVar8;
      if (((long)uVar12 < (long)uVar14) &&
         (uVar10 = lVar15 + 0x110, uVar13 = uVar12,
         *(int *)(lVar15 + 0xf0) <= *(int *)(lVar15 + 0x178))) {
        uVar10 = lVar15 + 0x88U;
        uVar13 = uVar8;
      }
      FUN_10533b178(uVar9,uVar10);
      uVar9 = uVar10;
    } while ((long)uVar13 <= (long)(uVar14 - 2 >> 1));
    unaff_x19 = unaff_x19 - 0x88;
    if (uVar10 == unaff_x19) {
      FUN_10533b178(uVar10,auStack_178);
    }
    else {
      func_0x000105341d58();
      FUN_10533b178();
      FUN_10533b178(unaff_x19,auStack_178);
      uVar9 = (uVar10 - unaff_x20) + 0x88;
      cVar3 = SBORROW8(uVar9,0x89);
      cVar4 = (long)((uVar10 - unaff_x20) + -1) < 0;
      bVar5 = uVar9 == 0x89;
      if (0x88 < (long)uVar9) {
        uVar13 = uVar9 / 0x88 - 2 >> 1;
        uVar9 = unaff_x20 + uVar13 * 0x88;
        func_0x000105341d4c(*(undefined4 *)(uVar9 + 0x68));
        if (!bVar5 && cVar4 == cVar3) {
          func_0x000105341e80(auStack_f0);
          do {
            uVar12 = uVar9;
            FUN_10533b178(uVar10,uVar12);
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            uVar9 = unaff_x20 + uVar13 * 0x88;
            uVar10 = uVar12;
          } while (iStack_88 < *(int *)(uVar9 + 0x68));
          FUN_10533b178(uVar12,auStack_f0);
          func_0x0001053419a4();
        }
      }
    }
    func_0x0001002a1b38(auStack_178);
    uVar14 = uVar14 - 1;
  } while( true );
code_r0x0001053404e0:
  unaff_x20 = uVar14;
  if ((uVar9 & 1) == 0) {
LAB_1053404e4:
    func_0x000105341824();
    FUN_105340310();
    unaff_x25 = 0;
    unaff_x20 = uVar14;
  }
  goto LAB_105340350;
}



/* Entry: 105340990; end: 105340a7f;  */

undefined1  [16] FUN_105340990(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar1 = (int)param_2[0xd];
  iVar2 = (int)param_3[0xd];
  plVar6 = param_2;
  if (iVar1 <= (int)param_1[0xd]) {
    cVar3 = SBORROW4(iVar2,iVar1);
    cVar4 = iVar2 - iVar1 < 0;
    uVar5 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      param_1 = param_2;
      FUN_105340c9c();
      func_0x000105341d4c((int)param_2[0xd]);
      plVar6 = param_3;
      if (!(bool)uVar5 && cVar4 == cVar3) {
        func_0x000105341d58();
        plVar7 = param_1;
        goto LAB_105340a10;
      }
    }
LAB_105340a18:
    auVar14._8_8_ = plVar6;
    auVar14._0_8_ = param_1;
    return auVar14;
  }
  cVar3 = SBORROW4(iVar2,iVar1);
  cVar4 = iVar2 - iVar1 < 0;
  uVar5 = iVar2 == iVar1;
  plVar7 = param_1;
  if (iVar2 <= iVar1) {
    FUN_105340c9c(param_1,param_2);
    func_0x000105341fc8((int)param_3[0xd]);
    plVar7 = param_2;
    if ((bool)uVar5 || cVar4 != cVar3) goto LAB_105340a18;
  }
LAB_105340a10:
  if (param_3 == plVar7) {
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = plVar7;
    return auVar13;
  }
  uVar9 = plVar7[1];
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  uVar11 = param_3[1];
  if ((uVar11 & 1) != 0) {
    uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
  }
  if (uVar9 == uVar11) {
    lVar10 = plVar7[1];
    plVar7[1] = param_3[1];
    param_3[1] = lVar10;
    lVar10 = plVar7[2];
    *(int *)(plVar7 + 2) = (int)param_3[2];
    *(int *)(param_3 + 2) = (int)lVar10;
    func_0x000107c303a4(plVar7 + 3,param_3 + 3);
    lVar10 = param_3[6];
    param_3[6] = plVar7[6];
    plVar7[6] = lVar10;
    lVar10 = param_3[7];
    param_3[7] = plVar7[7];
    plVar7[7] = lVar10;
    lVar10 = param_3[8];
    param_3[8] = plVar7[8];
    plVar7[8] = lVar10;
    param_3 = param_3 + 9;
    plVar8 = param_3;
    for (plVar6 = plVar7 + 9; plVar6 != plVar7 + 0x11; plVar6 = (long *)((long)plVar6 + 1)) {
      lVar10 = *plVar6;
      *(char *)plVar6 = (char)*plVar8;
      *(char *)plVar8 = (char)lVar10;
      param_3 = (long *)((long)param_3 + 1);
      plVar8 = (long *)((long)plVar8 + 1);
    }
    auVar12._8_8_ = param_3;
    auVar12._0_8_ = plVar7 + 0x11;
    return auVar12;
  }
  plVar6 = plVar7;
  func_0x00010b4cf4b4();
  (**(code **)(*plVar6 + 0x20))();
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x20))(param_3,plVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6);
  auVar15._8_8_ = UNRECOVERED_JUMPTABLE;
  auVar15._0_8_ = plVar6;
  return auVar15;
}



/* Entry: 105340a80; end: 105340b0f;  */

undefined1  [16]
FUN_105340a80(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  func_0x000105341764();
  func_0x000105340a20();
  iVar1 = (int)param_5[0xd];
  iVar2 = (int)unaff_x22[0xd];
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  uVar5 = iVar1 == iVar2;
  if (iVar2 < iVar1) {
    param_1 = unaff_x22;
    FUN_105340c9c();
    func_0x000105341d4c((int)unaff_x22[0xd]);
    param_2 = param_5;
    if (!(bool)uVar5 && cVar4 == cVar3) {
      func_0x000105342014();
      FUN_105340c9c();
      func_0x000105341fc8(*(undefined4 *)(unaff_x21 + 0x68));
      param_2 = param_5;
      if (!(bool)uVar5 && cVar4 == cVar3) {
        func_0x000105341cb8();
        FUN_105340c9c();
        func_0x0001053420ec(*(undefined4 *)(unaff_x19 + 0x68));
        param_2 = param_5;
        if (!(bool)uVar5 && cVar4 == cVar3) {
          func_0x0001053420e0();
          if (param_5 == param_1) {
            auVar12._8_8_ = param_5;
            auVar12._0_8_ = param_1;
            return auVar12;
          }
          uVar8 = param_1[1];
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          uVar10 = param_5[1];
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          if (uVar8 != uVar10) {
            plVar6 = param_1;
            func_0x00010b4cf4b4();
            (**(code **)(*plVar6 + 0x20))();
            (**(code **)(*param_1 + 0x18))(param_1);
            (**(code **)(*param_1 + 0x20))(param_1,param_5);
            (**(code **)(*param_5 + 0x18))(param_5);
            (**(code **)(*param_5 + 0x20))(param_5,plVar6);
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(plVar6);
            auVar14._8_8_ = UNRECOVERED_JUMPTABLE;
            auVar14._0_8_ = plVar6;
            return auVar14;
          }
          lVar9 = param_1[1];
          param_1[1] = param_5[1];
          param_5[1] = lVar9;
          lVar9 = param_1[2];
          *(int *)(param_1 + 2) = (int)param_5[2];
          *(int *)(param_5 + 2) = (int)lVar9;
          func_0x000107c303a4(param_1 + 3,param_5 + 3);
          lVar9 = param_5[6];
          param_5[6] = param_1[6];
          param_1[6] = lVar9;
          lVar9 = param_5[7];
          param_5[7] = param_1[7];
          param_1[7] = lVar9;
          lVar9 = param_5[8];
          param_5[8] = param_1[8];
          param_1[8] = lVar9;
          param_5 = param_5 + 9;
          plVar7 = param_5;
          for (plVar6 = param_1 + 9; plVar6 != param_1 + 0x11; plVar6 = (long *)((long)plVar6 + 1))
          {
            lVar9 = *plVar6;
            *(char *)plVar6 = (char)*plVar7;
            *(char *)plVar7 = (char)lVar9;
            param_5 = (long *)((long)param_5 + 1);
            plVar7 = (long *)((long)plVar7 + 1);
          }
          auVar11._8_8_ = param_5;
          auVar11._0_8_ = param_1 + 0x11;
          return auVar11;
        }
      }
    }
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 105340b10; end: 105340c9b;  */

void FUN_105340b10(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_d8 [104];
  int iStack_70;
  
  func_0x000105341a98();
  lVar7 = (param_2 - param_1) / 0x88;
  cVar1 = SBORROW8(lVar7,5);
  cVar2 = lVar7 + -5 < 0;
  bVar3 = lVar7 == 5;
  switch(lVar7) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000105341fc8(*(undefined4 *)(unaff_x20 + -0x20),1);
    if (!bVar3 && cVar2 == cVar1) {
      FUN_105340c9c();
    }
    break;
  case 3:
    FUN_105340990();
    break;
  case 4:
    func_0x000105340a20();
    break;
  case 5:
    FUN_105340a80();
    break;
  default:
    FUN_105340990();
    lVar7 = 0;
    iVar8 = 0;
    lVar6 = unaff_x19 + 0x198;
    lVar5 = unaff_x19 + 0x110;
    while (lVar4 = lVar6, lVar4 != unaff_x20) {
      if (*(int *)(lVar5 + 0x68) < *(int *)(lVar4 + 0x68)) {
        func_0x000105341e80(auStack_d8);
        lVar6 = lVar7;
        do {
          lVar5 = unaff_x19 + lVar6;
          FUN_10533b178(lVar5 + 0x198,lVar5 + 0x110);
          if (lVar6 == -0x110) break;
          lVar6 = lVar6 + -0x88;
        } while (*(int *)(lVar5 + 0xf0) < iStack_70);
        FUN_10533b178();
        iVar8 = iVar8 + 1;
        func_0x0001002a1b38(auStack_d8);
        if (iVar8 == 8) {
          func_0x000105342040(lVar4 + 0x88);
          return;
        }
      }
      lVar7 = lVar7 + 0x88;
      lVar5 = lVar4;
      lVar6 = lVar4 + 0x88;
    }
  }
  return;
}



/* Entry: 105340c9c; end: 105340cd7;  */

undefined1  [16] FUN_105340c9c(long *param_1,long *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 == param_1) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  uVar3 = param_1[1];
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = param_2[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (uVar3 != uVar5) {
    plVar1 = param_1;
    func_0x00010b4cf4b4();
    (**(code **)(*plVar1 + 0x20))();
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2,plVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b4cf40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1);
    auVar8._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar8._0_8_ = plVar1;
    return auVar8;
  }
  lVar4 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar4;
  lVar4 = param_1[2];
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_2 + 2) = (int)lVar4;
  func_0x000107c303a4(param_1 + 3,param_2 + 3);
  lVar4 = param_2[6];
  param_2[6] = param_1[6];
  param_1[6] = lVar4;
  lVar4 = param_2[7];
  param_2[7] = param_1[7];
  param_1[7] = lVar4;
  lVar4 = param_2[8];
  param_2[8] = param_1[8];
  param_1[8] = lVar4;
  param_2 = param_2 + 9;
  plVar2 = param_2;
  for (plVar1 = param_1 + 9; plVar1 != param_1 + 0x11; plVar1 = (long *)((long)plVar1 + 1)) {
    lVar4 = *plVar1;
    *(char *)plVar1 = (char)*plVar2;
    *(char *)plVar2 = (char)lVar4;
    param_2 = (long *)((long)param_2 + 1);
    plVar2 = (long *)((long)plVar2 + 1);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1 + 0x11;
  return auVar6;
}



/* Entry: 105340cd8; end: 105340d3b;  */

long FUN_105340cd8(long param_1)

{
  func_0x000105340cfc(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 105340d3c; end: 105340d9b;  */

long FUN_105340d3c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001053417ec();
  FUN_105340d9c(auStack_40,1);
  FUN_105340df0();
  func_0x000105341928();
  func_0x000105340e54();
  func_0x000105341888(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x000105341e54();
  func_0x000105340e54();
  lVar1 = lStack_30;
  func_0x0001053418a4();
  *(undefined8 *)(lVar1 + 8) = unaff_x20;
  lVar2 = lVar1;
  FUN_105340dc4();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 105340d9c; end: 105340dc3;  */

long FUN_105340d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105340dc4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105340dc4; end: 105340def;  */

void FUN_105340dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_11087c7e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 105340df0; end: 105340e27;  */

void FUN_105340df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_11087c7e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 105340e28; end: 105340e3b;  */

void FUN_105340e28(void)

{
  func_0x000105340e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105340e3c; end: 105340e63;  */

long FUN_105340e3c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105340e64; end: 105340ebf;  */

long FUN_105340e64(long param_1)

{
  func_0x000105340e88(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 105340ec0; end: 105340f37;  */

long FUN_105340ec0(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(int *)(param_3 + 0x1c)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 105340f38; end: 105340fcb;  */

void FUN_105340f38(long param_1)

{
  func_0x000105341b78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105340fcc; end: 105340fe3;  */

void FUN_105340fcc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10533e0c8(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 105340fe4; end: 105341023;  */

void FUN_105340fe4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10533e0c8(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 105341024; end: 105341057;  */

void FUN_105341024(void)

{
  func_0x00010534103c();
  return;
}



/* Entry: 105341058; end: 1053410e3;  */

void FUN_105341058(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_1053410e4(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x20;
    __Znwm();
    uStack_50 = 1;
    *(undefined4 *)(lVar2 + 0x1c) = *param_3;
    plStack_58 = param_1 + 1;
    FUN_105341130(param_1,uStack_48,plVar1,lVar2);
    uStack_60 = 0;
    func_0x000105341158(&uStack_60);
  }
  func_0x000105341cb8();
  return;
}



/* Entry: 1053410e4; end: 10534112f;  */

long * FUN_1053410e4(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *(int *)((long)plVar3 + 0x1c) <= *param_3) {
        if (*param_3 <= *(int *)((long)plVar3 + 0x1c)) goto LAB_10534112c;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10534112c;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10534112c:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 105341130; end: 10534117b;  */

void FUN_105341130(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000105341808();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000105341aa4();
  func_0x000105341d1c();
  return;
}



/* Entry: 10534117c; end: 105341197;  */

void FUN_10534117c(long *param_1,long param_2)

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



/* Entry: 105341198; end: 1053411ab;  */

void FUN_105341198(void)

{
  func_0x0001053411b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053411ac; end: 1053411c7;  */

long FUN_1053411ac(long param_1)

{
  func_0x0001053411ec(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return param_1 + 0x18;
}



/* Entry: 1053411c8; end: 105341273;  */

long FUN_1053411c8(long param_1)

{
  func_0x0001053411ec(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 105341274; end: 1053412bf;  */

long * FUN_105341274(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_1053412bc;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1053412bc;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_1053412bc:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1053412c0; end: 10534130b;  */

void FUN_1053412c0(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000105341808();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000105341aa4();
  func_0x000105341d1c();
  return;
}



/* Entry: 10534130c; end: 105341323;  */

void FUN_10534130c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010533e168(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 105341324; end: 105341363;  */

void FUN_105341324(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010533e168(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 105341364; end: 1053413fb;  */

void FUN_105341364(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x000105340eec(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x40;
    __Znwm();
    uStack_50 = 1;
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)*param_4;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    plStack_58 = param_1 + 1;
    func_0x000105340f80(param_1,uStack_48,plVar1,lVar2);
    uStack_60 = 0;
    func_0x000105340fa8(&uStack_60);
  }
  func_0x000105341cb8();
  return;
}



/* Entry: 1053413fc; end: 105341443;  */

void FUN_1053413fc(long param_1)

{
  func_0x000105341b78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105341444; end: 105341447;  */

void FUN_105341444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c798;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105341448; end: 10534145b;  */

void FUN_105341448(void)

{
  func_0x000105341468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10534145c; end: 105341477;  */

long FUN_10534145c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x00010533e0f4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105341478; end: 1053414d7;  */

long FUN_105341478(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001053417ec();
  FUN_1053414d8(auStack_40,1);
  FUN_10534152c();
  func_0x000105341928();
  func_0x0001053415a4();
  func_0x000105341888(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x000105341e54();
  func_0x0001053415a4();
  lVar1 = lStack_30;
  func_0x0001053418a4();
  *(undefined8 *)(lVar1 + 8) = unaff_x20;
  lVar2 = lVar1;
  FUN_105341500();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 1053414d8; end: 1053414ff;  */

long FUN_1053414d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105341500();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105341500; end: 10534152b;  */

undefined8 * FUN_105341500(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087c888;
  param_1[1] = 0;
  func_0x0001002a0cb4(param_1 + 3);
  return param_1;
}



/* Entry: 10534152c; end: 105341573;  */

undefined8 * FUN_10534152c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087c888;
  param_1[1] = 0;
  func_0x0001002a0cb4(param_1 + 3);
  return param_1;
}



/* Entry: 105341574; end: 105341577;  */

void FUN_105341574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105341578; end: 10534158b;  */

void FUN_105341578(void)

{
  func_0x000105341598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10534158c; end: 1053415b3;  */

long FUN_10534158c(long param_1)

{
  func_0x0001002a1a84();
  func_0x0001002a1b78(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 1053415b4; end: 105341613;  */

long FUN_1053415b4(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001053417ec();
  FUN_105341614(auStack_40,1);
  FUN_10534166c();
  func_0x000105341928();
  func_0x0001053416fc();
  func_0x000105341888(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x000105341e54();
  func_0x0001053416fc();
  lVar1 = lStack_30;
  func_0x0001053418a4();
  *(undefined8 *)(lVar1 + 8) = unaff_x20;
  lVar2 = lVar1;
  FUN_10534163c();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 105341614; end: 10534163b;  */

long FUN_105341614(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10534163c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10534163c; end: 10534166b;  */

undefined8 * FUN_10534163c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087c838;
  param_1[1] = 0;
  func_0x0001053416c4(param_1 + 3);
  return param_1;
}



/* Entry: 10534166c; end: 10534169f;  */

undefined8 * FUN_10534166c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11087c838;
  param_1[1] = 0;
  func_0x0001053416c4(param_1 + 3);
  return param_1;
}



/* Entry: 1053416a0; end: 1053416a3;  */

void FUN_1053416a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c838;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053416a4; end: 1053416b7;  */

void FUN_1053416a4(void)

{
  func_0x0001053416f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053416b8; end: 105342193;  */

long FUN_1053416b8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x20;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x20;
}



/* Entry: 105342194; end: 10534290b;  */

void FUN_105342194(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  undefined1 *puVar12;
  ulong uVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  byte *pbVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  long *plVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****ppppuVar21;
  undefined4 uStack_1ec;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_198;
  undefined1 auStack_190 [8];
  long lStack_188;
  int *piStack_180;
  long lStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  ulong auStack_140 [4];
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 uStack_110;
  int iStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  
  FUN_10534290c(&ppppuStack_170,param_2,param_3 + 0x60);
  FUN_10533d2a4(&piStack_180,&ppppuStack_170);
  func_0x000100100fec(&ppppuStack_170);
  iVar2 = piStack_180[2];
  iVar3 = *piStack_180;
  FUN_105345b24(&puStack_198,param_3);
  if (lStack_188 == 0) {
    uStack_1ec = 0;
  }
  else {
    puVar9 = auStack_190;
    func_0x00010002c810();
    uStack_1ec = *(undefined4 *)(puVar9 + 0x20);
  }
  pppuStack_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  puVar9 = auStack_190;
  puVar12 = puStack_198;
  ppppuStack_b0 = &pppuStack_a8;
  do {
    if (puVar12 == puVar9) {
      func_0x00010002c810();
      ppppuStack_170 = (undefined8 ****)0x0;
      ppppuStack_168 = (undefined8 ****)0x0;
      ppppuStack_90 = (undefined8 ****)0x0;
      ppppuStack_88 = (undefined8 ****)0x0;
      FUN_105344fd0(&uStack_1b0,&ppppuStack_b0,*(undefined4 *)(puVar9 + 0x20),0,&ppppuStack_170,
                    &ppppuStack_90,3,iVar2 - iVar3,0);
      func_0x000105341420(&ppppuStack_90);
      func_0x0001053413fc(&ppppuStack_170);
      func_0x0001053411c8(&ppppuStack_b0);
      FUN_1053456e0(&ppppuStack_170,uStack_1ec,uStack_1b0,3,iVar2 - iVar3);
      FUN_1053429a4(&ppppuStack_90);
      FUN_105342bf4(&ppppuStack_b0);
      param_1[1] = lStack_1a8;
      *param_1 = uStack_1b0;
      if (lStack_1a8 != 0) {
        do {
          func_0x000105343a00();
          param_1 = extraout_x11;
        } while (extraout_w10_01 != 0);
      }
      param_1[3] = ppppuStack_168;
      param_1[2] = ppppuStack_170;
      if (ppppuStack_168 != (undefined8 ****)0x0) {
        do {
          func_0x000105343a00();
          param_1 = extraout_x11_00;
        } while (extraout_w10_02 != 0);
      }
      param_1[5] = ppppuStack_88;
      param_1[4] = ppppuStack_90;
      if (ppppuStack_88 != (undefined8 ****)0x0) {
        do {
          func_0x000105343a00();
          param_1 = extraout_x11_01;
        } while (extraout_w10_03 != 0);
      }
      param_1[7] = pppuStack_a8;
      param_1[6] = ppppuStack_b0;
      if ((undefined8 ****)pppuStack_a8 != (undefined8 ****)0x0) {
        do {
          func_0x000105343a00();
          param_1 = extraout_x11_02;
        } while (extraout_w10_04 != 0);
      }
      param_1[9] = lStack_178;
      param_1[8] = piStack_180;
      if (lStack_178 != 0) {
        do {
          func_0x000105343a00();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010533acc0(&ppppuStack_b0);
      func_0x00010533ace4(&ppppuStack_90);
      func_0x00010533ad08(&ppppuStack_170);
      func_0x00010533ad2c(&uStack_1b0);
      FUN_105340cd8(&puStack_198);
      func_0x00010533ac9c(&piStack_180);
      return;
    }
    uStack_c0 = 0;
    uStack_b8 = 0;
    plVar1 = *(long **)(puVar12 + 0x30);
    puStack_c8 = &uStack_c0;
    for (plVar17 = *(long **)(puVar12 + 0x28); plVar17 != plVar1; plVar17 = plVar17 + 2) {
      iVar14 = *(int *)(*plVar17 + 0x84);
      if (iVar14 == 0) {
        pbVar16 = (byte *)(*(ulong *)(*plVar17 + 0x30) & 0xfffffffffffffffc);
        uVar13 = *(ulong *)(pbVar16 + 8);
        pbVar6 = *(byte **)pbVar16;
        if (-1 < (char)pbVar16[0x17]) {
          uVar13 = (ulong)pbVar16[0x17];
          pbVar6 = pbVar16;
        }
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          iVar14 = (uint)*pbVar6 + iVar14 * 0x1f;
          pbVar6 = pbVar6 + 1;
        }
      }
      ppppuStack_170 = (undefined8 ****)CONCAT44(ppppuStack_170._4_4_,iVar14);
      FUN_10533d7e4(&puStack_c8,&ppppuStack_170);
      func_0x00010533e198();
    }
    ppppuStack_e0 = (undefined8 *****)0x0;
    ppppuStack_d8 = (undefined8 *****)0x0;
    ppppuStack_d0 = (undefined8 *****)0x0;
    puVar10 = puStack_c8;
    while (ppppuVar18 = ppppuStack_d8, pppppuVar11 = (undefined8 *****)ppppuStack_e0,
          puVar10 != &uStack_c0) {
      func_0x00010533ea84(&lStack_f8,puVar10 + 5);
      if (lStack_f8 != lStack_f0) {
        FUN_105342d20(lStack_f8,lStack_f0,LZCOUNT(lStack_f0 - lStack_f8 >> 4) << 1 ^ 0x7e,1);
      }
      lVar7 = lStack_f0;
      ppppuStack_170 = (undefined8 ****)&PTR_DAT_110cf7ec0;
      ppppuStack_168 = (undefined8 ****)0x0;
      uStack_158 = 0;
      uStack_150 = 0;
      ppppuStack_160 = (undefined8 ****)0x0;
      puStack_148 = &DAT_11383d918;
      auStack_140[0] = auStack_140[0] & 0xffffffff00000000;
      for (lVar19 = lStack_f8; lVar19 != lVar7; lVar19 = lVar19 + 0x10) {
        FUN_1053400a8(&ppppuStack_160);
        func_0x00010b50c058();
      }
      pppppuVar11 = &ppppuStack_170;
      func_0x00010b50c1f0(pppppuVar11);
      func_0x000100291d50(&uStack_110,pppppuVar11);
      func_0x00010b4d1758(&ppppuStack_170,uStack_110,iStack_108 - (int)uStack_110);
      ppppuStack_90 = (undefined8 ****)CONCAT44(ppppuStack_90._4_4_,*(undefined4 *)(puVar10 + 4));
      func_0x00010054f8dc(&ppppuStack_88,&uStack_110);
      func_0x00010533de88(&pppuStack_120,&ppppuStack_90);
      func_0x000100100fec(&ppppuStack_88);
      if (ppppuStack_d8 < ppppuStack_d0) {
        ppppuStack_d8[1] = pppuStack_118;
        *ppppuStack_d8 = pppuStack_120;
        if ((undefined8 ****)pppuStack_118 != (undefined8 ****)0x0) {
          ppppuVar18 = (undefined8 ****)(pppuStack_118 + 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppppuVar18,0x10);
            if (bVar5) {
              *ppppuVar18 = (undefined8 ***)((long)*ppppuVar18 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppuVar11 = (undefined8 *****)(ppppuStack_d8 + 2);
      }
      else {
        pppppuVar11 = &ppppuStack_e0;
        FUN_105340130(pppppuVar11,((long)ppppuStack_d8 - (long)ppppuStack_e0 >> 4) + 1);
        FUN_105340188(&ppppuStack_90,pppppuVar11,(long)ppppuStack_d8 - (long)ppppuStack_e0 >> 4,
                      &ppppuStack_d0);
        pppppuVar11 = (undefined8 *****)ppppuStack_80;
        ppppuStack_80[1] = pppuStack_118;
        *pppppuVar11 = (undefined8 ****)pppuStack_120;
        if ((undefined8 ****)pppuStack_118 != (undefined8 ****)0x0) {
          do {
            func_0x000105343a00();
            pppppuVar11 = (undefined8 *****)ppppuStack_80;
          } while (extraout_w10 != 0);
        }
        ppppuStack_80 = pppppuVar11 + 2;
        pppppuVar20 = (undefined8 *****)
                      ((long)ppppuStack_88 - ((long)ppppuStack_d8 - (long)ppppuStack_e0));
        _memcpy(pppppuVar20);
        pppppuVar11 = (undefined8 *****)ppppuStack_80;
        ppppuVar18 = ppppuStack_d0;
        ppppuStack_d0 = ppppuStack_78;
        ppppuStack_d8 = ppppuStack_80;
        ppppuStack_80 = ppppuStack_e0;
        ppppuStack_78 = ppppuVar18;
        ppppuStack_90 = ppppuStack_e0;
        ppppuStack_88 = ppppuStack_e0;
        ppppuStack_e0 = pppppuVar20;
        FUN_1053401fc(&ppppuStack_90);
      }
      ppppuStack_d8 = pppppuVar11;
      func_0x000105341250(&pppuStack_120);
      func_0x000100100fec(&uStack_110);
      func_0x0001002a1a8c(&ppppuStack_170);
      FUN_10533e0c8(&lStack_f8);
      func_0x00010002c7d4();
    }
    ppppuStack_170 = (undefined8 *****)0x0;
    ppppuStack_168 = (undefined8 *****)0x0;
    ppppuStack_160 = (undefined8 *****)0x0;
    ppppuStack_88 = (undefined8 ****)((ulong)ppppuStack_88 & 0xffffffffffffff00);
    pppppuVar20 = (undefined8 *****)ppppuStack_168;
    ppppuStack_90 = &ppppuStack_170;
    if ((long)ppppuStack_d8 - (long)ppppuStack_e0 != 0) {
      uVar13 = (long)ppppuStack_d8 - (long)ppppuStack_e0 >> 4;
      if (uVar13 >> 0x3c != 0) {
        FUN_10534017c();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x105342800);
        (*pcVar8)();
      }
      pppppuVar20 = &ppppuStack_160;
      func_0x0001053401bc();
      ppppuStack_160 = pppppuVar20 + uVar13 * 2;
      ppppuStack_170 = pppppuVar20;
      ppppuStack_168 = pppppuVar20;
      for (; pppppuVar11 != (undefined8 *****)ppppuVar18; pppppuVar11 = pppppuVar11 + 2) {
        ppppuVar15 = pppppuVar11[1];
        ppppuVar21 = *pppppuVar11;
        pppppuVar20[1] = pppppuVar11[1];
        *pppppuVar20 = ppppuVar21;
        if (ppppuVar15 != (undefined8 ****)0x0) {
          do {
            func_0x000105343a00();
          } while (extraout_w10_00 != 0);
        }
        pppppuVar20 = pppppuVar20 + 2;
      }
    }
    ppppuStack_168 = pppppuVar20;
    ppppuStack_88 = (undefined8 ****)CONCAT71(ppppuStack_88._1_7_,1);
    FUN_105343748(&ppppuStack_90);
    auStack_140[2] = 0;
    auStack_140[1] = 0;
    auStack_140[0] = 0;
    puStack_148 = (undefined *)0x0;
    uStack_150 = 0;
    uStack_158 = 0;
    pppppuVar11 = &ppppuStack_b0;
    FUN_105341274(pppppuVar11,&lStack_f8,puVar12 + 0x20);
    ppppuVar18 = *pppppuVar11;
    if (ppppuVar18 == (undefined8 ****)0x0) {
      ppppuVar18 = (undefined8 ****)0x70;
      __Znwm();
      ppppuStack_80 = (undefined8 *****)0x1;
      *(undefined4 *)(ppppuVar18 + 4) = *(undefined4 *)(puVar12 + 0x20);
      ppppuVar18[0xd] = (undefined8 ***)0x0;
      ppppuVar18[0xc] = (undefined8 ***)0x0;
      ppppuVar18[0xb] = (undefined8 ***)0x0;
      ppppuVar18[10] = (undefined8 ***)0x0;
      ppppuVar18[9] = (undefined8 ***)0x0;
      ppppuVar18[8] = (undefined8 ***)0x0;
      ppppuVar18[7] = (undefined8 ***)0x0;
      ppppuVar18[6] = (undefined8 ***)0x0;
      ppppuVar18[5] = (undefined8 ***)0x0;
      ppppuStack_88 = &pppuStack_a8;
      FUN_1053412c0(&ppppuStack_b0,lStack_f8,pppppuVar11,ppppuVar18);
      ppppuStack_90 = (undefined8 *****)0x0;
      func_0x0001053412e8(&ppppuStack_90);
    }
    ppppuVar15 = ppppuVar18 + 5;
    if (*ppppuVar15 != (undefined8 ***)0x0) {
      FUN_10533f83c(ppppuVar15);
      __ZdlPv(*ppppuVar15);
      *ppppuVar15 = (undefined8 ***)0x0;
      ppppuVar18[6] = (undefined8 ***)0x0;
      ppppuVar18[7] = (undefined8 ***)0x0;
    }
    ppppuVar18[6] = ppppuStack_168;
    ppppuVar18[5] = ppppuStack_170;
    ppppuVar18[7] = ppppuStack_160;
    ppppuStack_168 = (undefined8 ****)0x0;
    ppppuStack_160 = (undefined8 ****)0x0;
    ppppuStack_170 = (undefined8 ****)0x0;
    func_0x00010065acbc(ppppuVar18 + 8,&uStack_158);
    func_0x00010065acbc(ppppuVar18 + 0xb,auStack_140);
    func_0x00010533e168(&ppppuStack_170);
    func_0x00010533f7d8(&ppppuStack_e0);
    FUN_105340cd8(&puStack_c8);
    func_0x00010002c7d4();
  } while( true );
}



/* Entry: 10534290c; end: 1053429a3;  */

undefined1 * FUN_10534290c(undefined8 *param_1,undefined1 *param_2,long *param_3)

{
  undefined1 *unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_3 != param_3[1]) {
    if ((ulong)(param_3[1] - *param_3) < 0x186a1) {
      func_0x00010054f8c8(param_1);
      func_0x000100292164();
      return unaff_x19;
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010002b838(auStack_38,"oversize");
    FUN_1053386ac(uVar1,auStack_38,1);
    param_2 = auStack_38;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 1053429a4; end: 105342bf3;  */

void FUN_1053429a4(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6,int param_7,undefined4 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  int **ppiVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0x5e;
  if (param_7 < 3) {
    uVar1 = 0x5a;
  }
  uStack_80 = 0;
  ppiVar5 = &piStack_68;
  func_0x00010002b8a8(ppiVar5,uVar1,&uStack_80);
  *piStack_68 = param_7;
  piStack_68[1] = param_3;
  piStack_68[2] = param_4;
  func_0x00010054f908();
  *(int ***)(piStack_68 + 3) = ppiVar5;
  uStack_98 = 0;
  func_0x00010002b8a8(&uStack_80,0x10,&uStack_98);
  lVar8 = CONCAT71(uStack_7f,uStack_80);
  lVar7 = lVar8;
  if (lStack_78 - lVar8 != 0) {
    _memmove(piStack_68 + 5,lVar8,lStack_78 - lVar8);
    lVar8 = CONCAT71(uStack_7f,uStack_80);
    lVar7 = lStack_78;
  }
  uVar2 = param_5[1];
  puVar6 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar6 = param_5;
  }
  func_0x00010069648c(&uStack_98,puVar6,(long)puVar6 + uVar2);
  uStack_b0 = 0;
  FUN_105342cd4(&uStack_98,0x34,&uStack_b0);
  lVar7 = lVar7 - lVar8;
  lStack_90 = lStack_90 - CONCAT71(uStack_97,uStack_98);
  if (lStack_90 != 0) {
    _memmove(lVar7 + 0x14 + (long)piStack_68,CONCAT71(uStack_97,uStack_98),lStack_90);
  }
  uVar2 = param_6[1];
  puVar6 = (undefined8 *)*param_6;
  if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_6 + 0x17);
    puVar6 = param_6;
  }
  func_0x00010069648c(&uStack_b0,puVar6,(long)puVar6 + uVar2);
  uStack_c8 = uStack_c8 & 0xffffffffffffff00;
  FUN_105342cd4(&uStack_b0,2,&uStack_c8);
  lStack_a8 = lStack_a8 - CONCAT71(uStack_af,uStack_b0);
  if (lStack_a8 != 0) {
    _memmove(lVar7 + 0x48 + (long)piStack_68,CONCAT71(uStack_af,uStack_b0),lStack_a8);
  }
  uVar4 = uStack_58;
  uVar1 = uStack_60;
  piVar3 = piStack_68;
  if (2 < param_7) {
    *(undefined4 *)((long)piStack_68 + lVar7 + 0x4a) = param_8;
  }
  uStack_c0 = uStack_60;
  uStack_b8 = uStack_58;
  piStack_68 = (int *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_11087c8d8;
  puVar6[3] = piVar3;
  puVar6[4] = uVar1;
  puVar6[5] = uVar4;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  *param_1 = puVar6 + 3;
  param_1[1] = puVar6;
  func_0x000100100fec(&uStack_c8);
  func_0x000105343a8c();
  func_0x000100100fec(&uStack_98);
  func_0x000100100fec(&uStack_80);
  func_0x000100100fec(&piStack_68);
  return;
}



/* Entry: 105342bf4; end: 105342cd3;  */

void FUN_105342bf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  func_0x00010002b8a8(&uStack_40,(long)(*(int *)(param_3 + 0x18) << 4),&uStack_60);
  lVar1 = 0;
  plVar2 = (long *)(param_3 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    *(undefined4 *)(uStack_40 + lVar1) = *(undefined4 *)(plVar2 + 2);
    *(undefined4 *)(uStack_40 + lVar1 + 4) = *(undefined4 *)((long)plVar2 + 0x1c);
    *(undefined4 *)(uStack_40 + lVar1 + 8) = *(undefined4 *)((long)plVar2 + 0x14);
    *(int *)(uStack_40 + lVar1 + 0xc) = *(int *)(plVar2 + 3) + *(int *)((long)plVar2 + 0x14);
    lVar1 = lVar1 + 0x10;
  }
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_50 = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_105342cfc(param_1,&uStack_60);
  func_0x000100100fec(&uStack_60);
  func_0x000105343a8c();
  return;
}



/* Entry: 105342cd4; end: 105342cfb;  */

void FUN_105342cd4(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  uVar7 = param_1[1] - *param_1;
  uVar8 = param_2 - uVar7;
  if (param_2 < uVar7 || uVar8 == 0) {
    if (param_2 < uVar7) {
      param_1[1] = *param_1 + param_2;
    }
    return;
  }
  plVar6 = param_1 + 2;
  if (uVar8 <= (ulong)(*plVar6 - param_1[1])) {
    puVar1 = (undefined1 *)param_1[1] + uVar8;
    puVar4 = (undefined1 *)param_1[1];
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = (long)puVar1;
    return;
  }
  plVar5 = param_1;
  func_0x0001001e7ae4(param_1,(uVar8 + param_1[1]) - *param_1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plStack_68 = (long *)0x0;
  plStack_48 = plVar6;
  if (plVar5 != (long *)0x0) {
    func_0x00010002b988();
    plStack_68 = plVar6;
  }
  puStack_60 = (undefined1 *)((long)plStack_68 + (lVar3 - lVar2));
  lStack_50 = (long)plStack_68 + (long)plVar5;
  puStack_58 = puStack_60 + uVar8;
  puVar1 = puStack_60;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  func_0x0001001e7b2c(param_1,&plStack_68);
  func_0x0001001e7bb8(&plStack_68);
  return;
}



/* Entry: 105342cfc; end: 105342d1f;  */

void FUN_105342cfc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1053438a0(&uStack_11,param_1);
  return;
}



/* Entry: 105342d20; end: 105343417;  */

void FUN_105342d20(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long extraout_x8;
  long *plVar11;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  long *plVar12;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long extraout_x9_02;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  do {
    plVar11 = param_2 + -2;
    plVar9 = param_1;
LAB_105342d64:
    while( true ) {
      param_1 = plVar9;
      uVar18 = (long)param_2 - (long)param_1 >> 4;
      cVar3 = SBORROW8(uVar18,5);
      cVar4 = (long)(uVar18 - 5) < 0;
      bVar5 = uVar18 == 5;
      switch(uVar18) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x000105343a80();
        if (bVar5 || cVar4 != cVar3) {
          return;
        }
        *param_1 = extraout_x8;
        param_2[-2] = extraout_x9_02;
        lVar13 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = lVar13;
        return;
      case 3:
        func_0x000105343a78(param_1,param_1 + 2);
        return;
      case 4:
        FUN_1053434d4(param_1,param_1 + 2,param_1 + 4,plVar11);
        return;
      case 5:
        FUN_105343524(param_1,param_1 + 2,param_1 + 4,param_1 + 6,plVar11);
        return;
      }
      if ((long)uVar18 < 0x18) {
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while( true ) {
            plVar9 = param_1;
            param_1 = plVar9 + 2;
            cVar3 = SBORROW8((long)param_1,(long)param_2);
            cVar4 = (long)param_1 - (long)param_2 < 0;
            bVar5 = param_1 == param_2;
            if (bVar5) break;
            func_0x000105343abc(plVar9[2]);
            if (!bVar5 && cVar4 == cVar3) {
              lStack_68 = plVar9[3];
              *param_1 = 0;
              plVar9[3] = 0;
              lStack_70 = extraout_x8_02;
              do {
                plVar11 = plVar9;
                func_0x000105343a94(plVar11 + 2);
                plVar9 = plVar11 + -2;
              } while (*(int *)(plVar11[-2] + 0x68) < *(int *)(lStack_70 + 0x68));
              FUN_10533ea48(plVar11,&lStack_70);
              func_0x000105343a70();
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        lVar13 = 0;
        plVar9 = param_1;
        goto LAB_1053430c8;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar15 = uVar18 - 2 >> 1;
        uVar17 = uVar15;
        goto LAB_105343168;
      }
      plVar9 = param_1 + (uVar18 & 0xfffffffffffffffe);
      if (uVar18 < 0x81) {
        func_0x000105343a78(plVar9,param_1);
      }
      else {
        func_0x000105343a78(param_1,plVar9);
        FUN_105343418(param_1 + 2,plVar9 + -2,param_2 + -4);
        FUN_105343418(param_1 + 4,plVar9 + 2,param_2 + -6);
        FUN_105343418(plVar9 + -2,plVar9,plVar9 + 2);
        lVar10 = param_1[1];
        lVar13 = *param_1;
        lVar19 = *plVar9;
        param_1[1] = plVar9[1];
        *param_1 = lVar19;
        plVar9[1] = lVar10;
        *plVar9 = lVar13;
      }
      param_3 = param_3 + -1;
      lStack_70 = *param_1;
      if (((param_4 & 1) != 0) || (*(int *)(lStack_70 + 0x68) < *(int *)(param_1[-2] + 0x68)))
      break;
      lStack_68 = param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      plVar9 = param_1;
      if (*(int *)(*plVar11 + 0x68) < *(int *)(lStack_70 + 0x68)) {
        do {
          plVar9 = plVar9 + 2;
        } while (*(int *)(lStack_70 + 0x68) <= *(int *)(*plVar9 + 0x68));
      }
      else {
        plVar7 = param_1 + 2;
        do {
          plVar9 = plVar7;
          cVar3 = SBORROW8((long)plVar9,(long)param_2);
          cVar4 = (long)plVar9 - (long)param_2 < 0;
          bVar5 = plVar9 == param_2;
          if (param_2 <= plVar9) break;
          func_0x000105343ab0();
          plVar7 = extraout_x9;
        } while (bVar5 || cVar4 != cVar3);
      }
      cVar3 = SBORROW8((long)plVar9,(long)param_2);
      cVar4 = (long)plVar9 - (long)param_2 < 0;
      uVar6 = plVar9 == param_2;
      plVar7 = param_2;
      if (plVar9 < param_2) {
        do {
          func_0x000105343ab0();
          plVar7 = extraout_x9_00;
        } while (!(bool)uVar6 && cVar4 == cVar3);
      }
      while( true ) {
        cVar3 = SBORROW8((long)plVar9,(long)plVar7);
        cVar4 = (long)plVar9 - (long)plVar7 < 0;
        uVar6 = plVar9 == plVar7;
        if (plVar7 <= plVar9) break;
        lVar13 = *plVar7;
        lVar19 = plVar9[1];
        lVar10 = *plVar9;
        plVar9[1] = plVar7[1];
        *plVar9 = lVar13;
        plVar7[1] = lVar19;
        *plVar7 = lVar10;
        do {
          plVar9 = plVar9 + 2;
          func_0x000105343ab0();
        } while ((bool)uVar6 || cVar4 != cVar3);
        do {
          func_0x000105343ab0();
          plVar7 = extraout_x9_01;
        } while (!(bool)uVar6 && cVar4 == cVar3);
      }
      plVar7 = plVar9 + -2;
      if (param_1 != plVar7) {
        FUN_10533ea48(param_1,plVar7);
      }
      FUN_10533ea48(plVar7,&lStack_70);
      func_0x000105343a70();
      param_4 = 0;
    }
    lVar13 = 0;
    lStack_68 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = *(int *)(lStack_70 + 0x68);
    do {
      lVar10 = *(long *)((long)param_1 + lVar13 + 0x10);
      lVar13 = lVar13 + 0x10;
    } while (iVar2 < *(int *)(lVar10 + 0x68));
    plVar7 = (long *)((long)param_1 + lVar13);
    plVar12 = param_2;
    plVar9 = plVar7;
    if (lVar13 == 0x10) {
      do {
        plVar8 = plVar12;
        if (plVar12 <= plVar7) break;
        plVar12 = plVar12 + -2;
        plVar8 = plVar12;
      } while (*(int *)(*plVar12 + 0x68) <= iVar2);
    }
    else {
      do {
        plVar12 = plVar12 + -2;
        plVar8 = plVar12;
      } while (*(int *)(*plVar12 + 0x68) <= iVar2);
    }
    while (plVar9 < plVar12) {
      lVar13 = plVar9[1];
      lVar19 = *plVar12;
      plVar9[1] = plVar12[1];
      *plVar9 = lVar19;
      *plVar12 = lVar10;
      plVar12[1] = lVar13;
      do {
        plVar9 = plVar9 + 2;
        lVar10 = *plVar9;
      } while (*(int *)(lStack_70 + 0x68) < *(int *)(lVar10 + 0x68));
      do {
        plVar12 = plVar12 + -2;
      } while (*(int *)(*plVar12 + 0x68) <= *(int *)(lStack_70 + 0x68));
    }
    plVar12 = plVar9 + -2;
    if (param_1 != plVar12) {
      FUN_10533ea48(param_1,plVar12);
    }
    FUN_10533ea48(plVar12,&lStack_70);
    func_0x000105343a70();
    if (plVar7 < plVar8) goto LAB_105342f20;
    plVar7 = param_1;
    FUN_1053435a8(param_1,plVar12);
    plVar8 = plVar9;
    FUN_1053435a8(plVar9,param_2);
    if ((int)plVar8 == 0) goto code_r0x000105342f1c;
    param_2 = plVar12;
    if (((ulong)plVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1053430c8:
  plVar11 = plVar9 + 2;
  if (plVar11 == param_2) {
    return;
  }
  lStack_70 = plVar9[2];
  if (*(int *)(*plVar9 + 0x68) < *(int *)(lStack_70 + 0x68)) {
    lStack_68 = plVar9[3];
    *plVar11 = 0;
    plVar9[3] = 0;
    lVar10 = lVar13;
    do {
      lVar19 = lVar10;
      func_0x000105343a94((long)param_1 + lVar19 + 0x10);
      plVar9 = param_1;
      if (lVar19 == 0) goto LAB_105343138;
      lVar10 = lVar19 + -0x10;
    } while (*(int *)(*(long *)((long)param_1 + lVar19 + -0x10) + 0x68) < *(int *)(lStack_70 + 0x68)
            );
    plVar9 = (long *)((long)param_1 + lVar19);
LAB_105343138:
    FUN_10533ea48(plVar9,&lStack_70);
    func_0x000105343a70();
  }
  lVar13 = lVar13 + 0x10;
  plVar9 = plVar11;
  goto LAB_1053430c8;
LAB_105343168:
  do {
    if ((long)uVar17 <= (long)uVar15) {
      uVar1 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
      plVar9 = param_1 + uVar1 * 2;
      uVar14 = uVar17 * 2 + 2;
      if ((long)uVar14 < (long)uVar18) {
        lVar13 = plVar9[2];
        plVar11 = plVar9 + 2;
        if (*(int *)(*plVar9 + 0x68) <= *(int *)(lVar13 + 0x68)) {
          plVar11 = plVar9;
          lVar13 = *plVar9;
          uVar14 = uVar1;
        }
      }
      else {
        plVar11 = plVar9;
        lVar13 = *plVar9;
        uVar14 = uVar1;
      }
      plVar9 = param_1 + uVar17 * 2;
      lVar10 = *plVar9;
      if (*(int *)(lVar13 + 0x68) <= *(int *)(lVar10 + 0x68)) {
        lStack_68 = plVar9[1];
        *plVar9 = 0;
        plVar9[1] = 0;
        lStack_70 = lVar10;
        do {
          plVar7 = plVar11;
          FUN_10533ea48(plVar9,plVar7);
          if ((long)uVar15 < (long)uVar14) break;
          uVar1 = uVar14 << 1 | 1;
          plVar9 = param_1 + uVar1 * 2;
          uVar14 = uVar14 * 2 + 2;
          if ((long)uVar14 < (long)uVar18) {
            lVar13 = plVar9[2];
            plVar11 = plVar9 + 2;
            if (*(int *)(*plVar9 + 0x68) <= *(int *)(lVar13 + 0x68)) {
              plVar11 = plVar9;
              lVar13 = *plVar9;
              uVar14 = uVar1;
            }
          }
          else {
            plVar11 = plVar9;
            lVar13 = *plVar9;
            uVar14 = uVar1;
          }
          plVar9 = plVar7;
        } while (*(int *)(lVar13 + 0x68) <= *(int *)(lVar10 + 0x68));
        FUN_10533ea48(plVar7,&lStack_70);
        func_0x000105343a70();
      }
    }
    uVar17 = uVar17 - 1;
  } while (-1 < (long)uVar17);
  do {
    if ((long)uVar18 < 2) {
      return;
    }
    lStack_78 = param_1[1];
    lStack_80 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar15 = uVar18 - 2 >> 1;
    plVar9 = param_1;
    uVar17 = 0;
    do {
      uVar1 = uVar17 << 1 | 1;
      uVar14 = uVar17 * 2 + 2;
      plVar11 = plVar9 + uVar17 * 2 + 2;
      uVar16 = uVar1;
      if (((long)uVar14 < (long)uVar18) &&
         (plVar11 = plVar9 + uVar17 * 2 + 4, uVar16 = uVar14,
         *(int *)(plVar9[uVar17 * 2 + 2] + 0x68) <= *(int *)(plVar9[uVar17 * 2 + 4] + 0x68))) {
        plVar11 = plVar9 + uVar17 * 2 + 2;
        uVar16 = uVar1;
      }
      plVar9 = plVar11;
      func_0x000105343a94();
      uVar17 = uVar16;
    } while ((long)uVar16 <= (long)uVar15);
    param_2 = param_2 + -2;
    if (plVar9 == param_2) {
      FUN_10533ea48(plVar9,&lStack_80);
    }
    else {
      FUN_10533ea48(plVar9,param_2);
      FUN_10533ea48(param_2,&lStack_80);
      lVar13 = (long)plVar9 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar13) {
        func_0x000105343a9c(lVar13 + -2);
        lVar13 = *plVar9;
        if (*(int *)(lVar13 + 0x68) < extraout_w9) {
          lStack_68 = plVar9[1];
          *plVar9 = 0;
          plVar9[1] = 0;
          plVar11 = extraout_x8_00;
          lStack_70 = lVar13;
          do {
            plVar7 = plVar11;
            FUN_10533ea48(plVar9,plVar7);
            if (uVar15 == 0) break;
            func_0x000105343a9c(uVar15 - 1);
            plVar11 = extraout_x8_01;
            plVar9 = plVar7;
          } while (*(int *)(lVar13 + 0x68) < extraout_w9_00);
          FUN_10533ea48(plVar7,&lStack_70);
          func_0x000105343a70();
        }
      }
    }
    func_0x000105340f5c(&lStack_80);
    uVar18 = uVar18 - 1;
  } while( true );
code_r0x000105342f1c:
  if (((ulong)plVar7 & 1) == 0) {
LAB_105342f20:
    FUN_105342d20(param_1,plVar12,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_105342d64;
}



/* Entry: 105343418; end: 1053434d3;  */

void FUN_105343418(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x9;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_2;
  iVar1 = *(int *)(lVar7 + 0x68);
  lVar6 = *param_1;
  lVar8 = *param_3;
  iVar2 = *(int *)(lVar8 + 0x68);
  if (*(int *)(lVar6 + 0x68) < iVar1) {
    if (iVar1 < iVar2) {
      lVar7 = param_1[1];
      lVar9 = param_3[1];
      *param_1 = lVar8;
      param_1[1] = lVar9;
      *param_3 = lVar6;
      param_3[1] = lVar7;
      return;
    }
    lVar8 = param_1[1];
    lVar9 = param_2[1];
    *param_1 = lVar7;
    param_1[1] = lVar9;
    *param_2 = lVar6;
    param_2[1] = lVar8;
    if (*(int *)(lVar6 + 0x68) < *(int *)(*param_3 + 0x68)) {
      lVar7 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = lVar7;
      *param_3 = lVar6;
      param_3[1] = lVar8;
    }
  }
  else {
    cVar3 = SBORROW4(iVar2,iVar1);
    cVar4 = iVar2 - iVar1 < 0;
    bVar5 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      *param_2 = lVar8;
      *param_3 = lVar7;
      lVar6 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar6;
      func_0x000105343a80();
      if (!bVar5 && cVar4 == cVar3) {
        lVar6 = param_1[1];
        lVar7 = param_2[1];
        *param_1 = extraout_x8;
        param_1[1] = lVar7;
        *param_2 = extraout_x9;
        param_2[1] = lVar6;
        return;
      }
    }
  }
  return;
}



/* Entry: 1053434d4; end: 105343523;  */

void FUN_1053434d4(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000105343ae4();
  FUN_105343418();
  func_0x000105343a80();
  if (((!(bool)in_ZR && in_NG == in_OV) && (func_0x000105343a44(), !(bool)in_ZR && in_NG == in_OV))
     && (func_0x000105343a18(), !(bool)in_ZR && in_NG == in_OV)) {
    func_0x000105343ad0();
  }
  return;
}



/* Entry: 105343524; end: 1053435a7;  */

void FUN_105343524(void)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x22;
  
  func_0x000105343ae4();
  FUN_1053434d4();
  func_0x000105343a80();
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    uVar1 = unaff_x22[1];
    unaff_x22[1] = in_x4[1];
    in_x4[1] = uVar1;
    func_0x000105343a80();
    if (((!(bool)in_ZR && in_NG == in_OV) && (func_0x000105343a44(), !(bool)in_ZR && in_NG == in_OV)
        ) && (func_0x000105343a18(), !(bool)in_ZR && in_NG == in_OV)) {
      func_0x000105343ad0();
    }
  }
  return;
}



/* Entry: 1053435a8; end: 105343747;  */

void FUN_1053435a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  long extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar6 = (long)param_2 - (long)param_1 >> 4;
  cVar2 = SBORROW8(lVar6,5);
  cVar3 = lVar6 + -5 < 0;
  bVar4 = lVar6 == 5;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000105343a80(1);
    if (!bVar4 && cVar3 == cVar2) {
      uVar8 = param_1[1];
      uVar9 = param_2[-1];
      *param_1 = extraout_x8;
      param_1[1] = uVar9;
      param_2[-2] = extraout_x9;
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_105343418(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_1053434d4(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_105343524(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    func_0x000105343a78(param_1,param_1 + 2);
    lVar6 = 0;
    iVar11 = 0;
    puVar7 = param_1 + 6;
    while( true ) {
      cVar2 = SBORROW8((long)puVar7,(long)param_2);
      cVar3 = (long)puVar7 - (long)param_2 < 0;
      bVar4 = puVar7 == param_2;
      if (bVar4) break;
      func_0x000105343abc(*puVar7);
      if (!bVar4 && cVar3 == cVar2) {
        uStack_58 = puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar1 = lVar6;
        lStack_60 = extraout_x8_00;
        do {
          lVar10 = lVar1;
          FUN_10533ea48((long)param_1 + lVar10 + 0x30,(long)param_1 + lVar10 + 0x20);
          puVar5 = param_1;
          if (lVar10 == -0x20) goto LAB_1053436d8;
          lVar1 = lVar10 + -0x10;
        } while (*(int *)(*(long *)((long)param_1 + lVar10 + 0x10) + 0x68) <
                 *(int *)(lStack_60 + 0x68));
        puVar5 = (undefined8 *)((long)param_1 + lVar10 + 0x20);
LAB_1053436d8:
        FUN_10533ea48(puVar5,&lStack_60);
        iVar11 = iVar11 + 1;
        func_0x000105340f5c(&lStack_60);
        if (iVar11 == 8) {
          return;
        }
      }
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + 0x10;
    }
  }
  return;
}



/* Entry: 105343748; end: 105343773;  */

long FUN_105343748(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010533f804(param_1);
  }
  return param_1;
}



/* Entry: 105343774; end: 10534386b;  */

void FUN_105343774(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar6 = param_1 + 2;
  if (param_2 <= (ulong)(*plVar6 - param_1[1])) {
    puVar1 = (undefined1 *)param_1[1] + param_2;
    puVar4 = (undefined1 *)param_1[1];
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *puVar4 = *param_3;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = (long)puVar1;
    return;
  }
  plVar5 = param_1;
  func_0x0001001e7ae4(param_1,(param_2 + param_1[1]) - *param_1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plStack_68 = (long *)0x0;
  plStack_48 = plVar6;
  if (plVar5 != (long *)0x0) {
    func_0x00010002b988();
    plStack_68 = plVar6;
  }
  puStack_60 = (undefined1 *)((long)plStack_68 + (lVar3 - lVar2));
  lStack_50 = (long)plStack_68 + (long)plVar5;
  puStack_58 = puStack_60 + param_2;
  puVar1 = puStack_60;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  func_0x0001001e7b2c(param_1,&plStack_68);
  func_0x0001001e7bb8(&plStack_68);
  return;
}



/* Entry: 10534386c; end: 10534386f;  */

void FUN_10534386c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087c8d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105343870; end: 105343883;  */

void FUN_105343870(void)

{
  func_0x000105343890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105343884; end: 10534389f;  */

long FUN_105343884(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1053438a0; end: 105343937;  */

undefined1 * FUN_1053438a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_105343938(auStack_40,1);
  FUN_10534398c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001053439f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001053439f0();
  func_0x000105343a10();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_105343960();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 105343938; end: 10534395f;  */

long FUN_105343938(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105343960();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105343960; end: 10534398b;  */

void FUN_105343960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_11087c928;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10534398c; end: 1053439bf;  */

void FUN_10534398c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_11087c928;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  param_1[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1053439c0; end: 1053439d3;  */

void FUN_1053439c0(void)

{
  func_0x0001053439e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053439d4; end: 105343af7;  */

long FUN_1053439d4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 105343af8; end: 105343beb;  */

void FUN_105343af8(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  long lStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  piStack_40 = (int *)0x0;
  uStack_38 = 0;
  lStack_48 = param_1 + 0x68;
  _pthread_rwlock_rdlock();
  if ((*(long *)(param_1 + 0x140) != 0) && (*(long *)(*(long *)(param_1 + 0x140) + 0x28) != 0)) {
    func_0x0001000e1148(auStack_58);
    func_0x0001000e12d8(&piStack_40,auStack_58);
    func_0x0001000e12fc(auStack_58);
  }
  func_0x000100107b84(&lStack_48);
  piVar1 = piStack_40;
  if ((piStack_40 != (int *)0x0) && (*piStack_40 == 2)) {
    if (*(char *)((long)piStack_40 + 0x47) < '\0') {
      if (*(long *)(piStack_40 + 0xe) == 0) goto LAB_105343bac;
    }
    else if (*(char *)((long)piStack_40 + 0x47) == '\0') goto LAB_105343bac;
    FUN_10533a360(auStack_70,param_1);
    FUN_105343bec(param_1,piVar1,auStack_70,0,param_2);
    func_0x000105344570();
  }
LAB_105343bac:
  func_0x0001000e12fc(&piStack_40);
  return;
}



/* Entry: 105343bec; end: 105343d33;  */

void FUN_105343bec(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_2 == 2) {
    uVar1 = *(ulong *)(param_2 + 0xe);
    if (-1 < (char)*(byte *)((long)param_2 + 0x47)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x47);
    }
    if (uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      __ZNSt3__19to_stringEi(auStack_58,2);
      FUN_1053385a4(uVar3,auStack_58,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_d0,param_2 + 0xc);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(&uStack_b8,"");
      FUN_1053442b4(&uStack_a0,param_3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_88,param_2 + 0x12);
      func_0x0001006202b4(&uStack_70,param_5);
      lVar2 = param_1;
      FUN_10533898c(param_1,&uStack_d0,param_4,2);
      FUN_1053384c0(*(undefined8 *)(param_1 + 8),(int)lVar2 == 0,1);
      func_0x000105344328(&uStack_d0);
    }
  }
  return;
}



/* Entry: 105343d34; end: 105343e47;  */

void FUN_105343d34(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_80;
  long lStack_78;
  undefined1 auStack_70 [40];
  int *piStack_48;
  long lStack_40;
  char cStack_28;
  
  FUN_105339ec8(auStack_70,param_1,0);
  if (cStack_28 != '\x01') goto LAB_105343e04;
  piStack_80 = piStack_48;
  lStack_78 = lStack_40;
  if (lStack_40 != 0) {
    plVar1 = (long *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*piStack_48 == 2) {
    if (*(char *)((long)piStack_48 + 0x47) < '\0') {
      if (*(long *)(piStack_48 + 0xe) != 0) goto LAB_105343da8;
    }
    else if (*(char *)((long)piStack_48 + 0x47) != '\0') {
LAB_105343da8:
      FUN_10533a3f4(&uStack_a0,param_1,auStack_70);
      FUN_10533ad9c(auStack_70);
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      uStack_b0 = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      FUN_105343bec(param_1,piStack_80,&uStack_c0,1,param_2);
      func_0x000105344570();
      FUN_10533adc0(&uStack_a0);
    }
  }
  func_0x0001000e12fc(&piStack_80);
LAB_105343e04:
  func_0x0001000e2f30(auStack_70);
  return;
}



/* Entry: 105343e48; end: 105343eaf;  */

char * FUN_105343e48(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = "staged_migration";
  if (param_2 == 0) {
    pcVar4 = "migration";
  }
  pcVar3 = "staged_delta";
  if (param_2 == 0) {
    pcVar3 = "delta";
  }
  pcVar1 = "staged_full";
  if (param_2 == 0) {
    pcVar1 = "full";
  }
  pcVar2 = "unknown";
  if (param_1 == 0) {
    pcVar2 = pcVar1;
  }
  if (param_1 != 1) {
    pcVar3 = pcVar2;
  }
  if (param_1 != 2) {
    pcVar4 = pcVar3;
  }
  return pcVar4;
}



/* Entry: 105343eb0; end: 105343ffb;  */

void FUN_105343eb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long *aplStack_70 [2];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_105343e48(param_3,param_4);
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_48,param_3);
    func_0x00010002b838(auStack_60,"skipped");
    func_0x000105344568(uVar1,auStack_48,auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  else {
    FUN_105343ffc(aplStack_70,param_6,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10));
    pcVar2 = "failure";
    if ((aplStack_70[0] != (long *)0x0) && (*aplStack_70[0] != aplStack_70[0][1])) {
      pcVar2 = "success";
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_88,param_3);
    func_0x00010002b838(auStack_a0,pcVar2);
    func_0x000105344568(uVar1,auStack_88,auStack_a0);
    func_0x000105344540();
    func_0x000105344550();
    FUN_10533b344(aplStack_70);
  }
  return;
}



/* Entry: 105343ffc; end: 10534401f;  */

void FUN_105343ffc(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_105344368(param_1,&uStack_14);
  return;
}



/* Entry: 105344020; end: 1053440cb;  */

void FUN_105344020(undefined8 param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [72];
  byte bStack_128;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002b838(auStack_70,"primary read path");
  ppuStack_58 = &PTR_FUN_11087c978;
  pppuStack_40 = &ppuStack_58;
  puVar6 = (undefined1 *)0x0;
  lVar4 = param_2;
  uStack_50 = param_1;
  FUN_105343eb0(param_1,param_2,param_3);
  pppuVar1 = &ppuStack_58;
  FUN_105344434();
  func_0x000105344540();
  func_0x000105344584(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar2 = &ppuStack_58;
  FUN_105344434();
  func_0x000105344540();
  func_0x000105344538();
  pcStack_78 = FUN_1053440cc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = param_2;
  pppuStack_88 = pppuVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar4 + 0x38) == 0) {
    ppuVar7 = pppuVar2[1];
    FUN_105343e48(puVar6,param_5);
    func_0x00010002b838(auStack_d0,puVar6);
    func_0x00010002b838(auStack_e8,"failure");
    param_3 = auStack_d0;
    puVar6 = auStack_e8;
    func_0x000105344568(ppuVar7,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    ppuStack_b8 = &PTR_FUN_11087ca08;
    pppuStack_a0 = &ppuStack_b8;
    pppuStack_b0 = pppuVar2;
    lStack_a8 = lVar4;
    FUN_105343eb0();
    FUN_105344434();
  }
  func_0x000105344584(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  puVar3 = auStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000105344538();
  FUN_105339ec8(auStack_170);
  if ((bStack_128 & 1) == 0) {
    if ((uint)puVar6 < 3) {
      pcVar5 = (&PTR_s_staged_full_11087ca78)[(ulong)puVar6 & 0xffffffff];
    }
    else {
      pcVar5 = "unknown";
    }
    uVar8 = *(undefined8 *)(puVar3 + 8);
    func_0x00010002b838(auStack_188,pcVar5);
    func_0x00010002b838(auStack_1a0,"failure");
    func_0x000105344568(uVar8,auStack_188,auStack_1a0);
    func_0x000105344540();
    func_0x000105344550();
  }
  else {
    FUN_1053440cc(puVar3,auStack_170,param_3,puVar6,1);
  }
  func_0x0001000e2f30(auStack_170);
  return;
}



/* Entry: 1053440cc; end: 1053441cb;  */

void FUN_1053440cc(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [72];
  byte bStack_b8;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x38) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    FUN_105343e48(param_4,param_5);
    func_0x00010002b838(auStack_60,param_4);
    func_0x00010002b838(auStack_78,"failure");
    param_3 = auStack_60;
    param_4 = auStack_78;
    func_0x000105344568(uVar3,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    ppuStack_48 = &PTR_FUN_11087ca08;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_1;
    lStack_38 = param_2;
    FUN_105343eb0(param_1,param_3,param_4,param_5,param_5,&ppuStack_48);
    FUN_105344434();
  }
  func_0x000105344584(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  puVar1 = auStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000105344538();
  FUN_105339ec8(auStack_100);
  if ((bStack_b8 & 1) == 0) {
    if ((uint)param_4 < 3) {
      pcVar2 = (&PTR_s_staged_full_11087ca78)[(ulong)param_4 & 0xffffffff];
    }
    else {
      pcVar2 = "unknown";
    }
    uVar3 = *(undefined8 *)(puVar1 + 8);
    func_0x00010002b838(auStack_118,pcVar2);
    func_0x00010002b838(auStack_130,"failure");
    func_0x000105344568(uVar3,auStack_118,auStack_130);
    func_0x000105344540();
    func_0x000105344550();
  }
  else {
    FUN_1053440cc(puVar1,auStack_100,param_3,param_4,1);
  }
  func_0x0001000e2f30(auStack_100);
  return;
}



/* Entry: 1053441cc; end: 1053442b3;  */

void FUN_1053441cc(long param_1,undefined8 param_2,ulong param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [72];
  byte bStack_38;
  
  FUN_105339ec8(auStack_80,param_1,1);
  if ((bStack_38 & 1) == 0) {
    if ((uint)param_3 < 3) {
      pcVar1 = (&PTR_s_staged_full_11087ca78)[param_3 & 0xffffffff];
    }
    else {
      pcVar1 = "unknown";
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010002b838(auStack_98,pcVar1);
    func_0x00010002b838(auStack_b0,"failure");
    func_0x000105344568(uVar2,auStack_98,auStack_b0);
    func_0x000105344540();
    func_0x000105344550();
  }
  else {
    FUN_1053440cc(param_1,auStack_80,param_2,param_3,1);
  }
  func_0x0001000e2f30(auStack_80);
  return;
}



/* Entry: 1053442b4; end: 105344367;  */

void FUN_1053442b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001053442f0();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


