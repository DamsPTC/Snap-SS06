/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10886f228; end: 10886f3eb;  */

long * FUN_10886f228(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  
  uVar11 = *param_4;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar11;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar11 - uVar10) < 0;
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_10886f2d4;
          uVar8 = plVar9[1];
          if (uVar8 != uVar11) break;
          in_NG = (long)(plVar9[2] - uVar11) < 0;
          if (plVar9[2] == uVar11) goto LAB_10886f3c8;
        }
        if ((uVar10 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar10 <= uVar8) {
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar3 * uVar10;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_10886f2d4:
  plVar1 = param_3 + 2;
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  plVar9[2] = uVar11;
  plVar9[3] = 0;
  func_0x000107c34350();
  if ((uVar10 == 0) || (func_0x000107c34674(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    bVar4 = 2 < uVar10;
    bVar5 = uVar10 == 3;
    func_0x000107c34328(uVar10 << 1);
    uVar2 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar2 = extraout_x9;
    }
    FUN_10886e410(param_3,uVar2);
    uVar10 = param_3[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *param_3;
  if (*(long *)(lVar7 + unaff_x23 * 8) == 0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar6 * uVar10;
      }
      *(long **)(lVar7 + uVar11 * 8) = plVar9;
    }
  }
  else {
    func_0x00010887c2c0();
  }
  func_0x000107c342f4();
  FUN_10886e7ac();
LAB_10886f3c8:
  return plVar9 + 3;
}



/* Entry: 10886f3ec; end: 10886f45f;  */

undefined8 FUN_10886f3ec(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010886f414(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c34688(param_1);
  FUN_10886f460();
  return unaff_x19;
}



/* Entry: 10886f460; end: 10886f477;  */

void FUN_10886f460(long *param_1)

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



/* Entry: 10886f478; end: 10886fb67;  */

void FUN_10886f478(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  ulong uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c343b8();
  do {
    puVar6 = unaff_x20;
LAB_10886f4bc:
    unaff_x20 = puVar6;
    iVar4 = (int)param_1;
    uVar9 = (long)unaff_x19 - (long)unaff_x20;
    uVar14 = (long)uVar9 / 0x18;
    switch(uVar14) {
    case 0:
    case 1:
      goto LAB_10886fae8;
    case 2:
      func_0x000107c34678();
      FUN_10886fb68();
      if (iVar4 == 0) {
        return;
      }
      func_0x000107c345ec();
      FUN_10867c53c();
      return;
    case 3:
      func_0x00010887cf8c(unaff_x20,unaff_x20 + 3);
      return;
    case 4:
      func_0x00010886fc4c(unaff_x20,unaff_x20 + 3,unaff_x20 + 6,unaff_x19 + -3);
      return;
    case 5:
      FUN_10886fcb4(unaff_x20,unaff_x20 + 3,unaff_x20 + 6,unaff_x20 + 9,unaff_x19 + -3);
      goto LAB_10886fae8;
    }
    if ((long)uVar9 < 0x240) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while (puVar6 = unaff_x20, unaff_x20 = puVar6 + 3, unaff_x20 != unaff_x19) {
          puVar8 = unaff_x20;
          func_0x00010887c414();
          if ((int)puVar8 != 0) {
            uStack_78 = puVar6[4];
            uStack_80 = puVar6[3];
            uStack_70 = puVar6[5];
            puVar6[4] = 0;
            puVar6[5] = 0;
            *unaff_x20 = 0;
            do {
              puVar8 = puVar6;
              func_0x00010887cee4(puVar8 + 3);
              uVar14 = 0;
              func_0x00010887c414();
              puVar6 = puVar8 + -3;
            } while ((uVar14 & 1) != 0);
            func_0x000107c3194c(puVar8,&uStack_80);
            func_0x00010887c4ac();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar13 = 0;
      puVar6 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      uVar12 = uVar14 - 2 >> 1;
      uVar9 = uVar12;
      goto LAB_10886f864;
    }
    puVar6 = unaff_x20 + (uVar14 >> 1) * 3;
    if (uVar9 < 0xc01) {
      func_0x00010887cf8c(puVar6,unaff_x20);
    }
    else {
      func_0x00010887cf8c(unaff_x20,puVar6);
      FUN_10886fbc4(unaff_x20 + 3,puVar6 + -3,unaff_x19 + -6);
      FUN_10886fbc4(unaff_x20 + 6,puVar6 + 3,unaff_x19 + -9);
      FUN_10886fbc4(puVar6 + -3,puVar6,puVar6 + 3);
      FUN_10867c53c(unaff_x20,puVar6);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      puVar6 = unaff_x20 + -3;
      FUN_10886fb68(puVar6,unaff_x20);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010887c9e4();
        puVar8 = &uStack_80;
        func_0x00010887c414();
        puVar6 = unaff_x20;
        if (((ulong)puVar8 & 1) == 0) {
          do {
            puVar6 = puVar6 + 3;
            if (unaff_x19 <= puVar6) break;
            func_0x00010887c65c();
          } while ((int)puVar8 == 0);
        }
        else {
          do {
            puVar6 = puVar6 + 3;
            func_0x00010887c65c();
          } while (((ulong)puVar8 & 1) == 0);
        }
        puVar7 = unaff_x19;
        if (puVar6 < unaff_x19) {
          do {
            puVar7 = puVar7 + -3;
            func_0x00010887ceec();
          } while (((ulong)puVar8 & 1) != 0);
        }
        while (puVar6 < puVar7) {
          puVar8 = puVar6;
          FUN_10867c53c(puVar6,puVar7);
          do {
            puVar6 = puVar6 + 3;
            func_0x00010887c65c();
          } while ((int)puVar8 == 0);
          do {
            puVar7 = puVar7 + -3;
            func_0x00010887ceec();
          } while (((ulong)puVar8 & 1) != 0);
        }
        param_1 = puVar6 + -3;
        if (unaff_x20 != param_1) {
          func_0x000107c3194c(unaff_x20,param_1);
        }
        func_0x000107c3194c(param_1,&uStack_80);
        func_0x00010887c4ac();
        param_4 = 0;
        goto LAB_10886f4bc;
      }
    }
    lVar13 = 0;
    func_0x00010887c9e4();
    do {
      uVar14 = (long)unaff_x20 + lVar13 + 0x18;
      FUN_10886fb68(uVar14,&uStack_80);
      lVar13 = lVar13 + 0x18;
    } while ((uVar14 & 1) != 0);
    puVar8 = (undefined8 *)((long)unaff_x20 + lVar13);
    puVar7 = unaff_x19;
    puVar6 = puVar8;
    if (lVar13 == 0x18) {
      do {
        puVar15 = puVar7;
        if (puVar7 <= puVar8) break;
        puVar7 = puVar7 + -3;
        func_0x00010887ccac();
        puVar15 = puVar7;
      } while ((uVar14 & 1) == 0);
    }
    else {
      do {
        puVar7 = puVar7 + -3;
        func_0x00010887ccac();
        puVar15 = puVar7;
      } while ((int)uVar14 == 0);
    }
    while (puVar6 < puVar7) {
      FUN_10867c53c(puVar6,puVar7);
      do {
        puVar6 = puVar6 + 3;
        puVar5 = puVar6;
        FUN_10886fb68(puVar6,&uStack_80);
      } while (((ulong)puVar5 & 1) != 0);
      do {
        puVar7 = puVar7 + -3;
        puVar5 = puVar7;
        FUN_10886fb68(puVar7,&uStack_80);
      } while (((ulong)puVar5 & 1) == 0);
    }
    puVar7 = puVar6 + -3;
    if (unaff_x20 != puVar7) {
      func_0x000107c3194c(unaff_x20,puVar7);
    }
    func_0x000107c3194c(puVar7,&uStack_80);
    func_0x00010887c4ac();
    if (puVar8 < puVar15) goto LAB_10886f654;
    puVar8 = unaff_x20;
    FUN_10886fd4c(unaff_x20,puVar7);
    param_1 = puVar6;
    FUN_10886fd4c(puVar6,unaff_x19);
    if ((int)param_1 == 0) goto code_r0x00010886f650;
    unaff_x19 = puVar7;
    if (((ulong)puVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10886f7c0:
  puVar8 = puVar6 + 3;
  if (puVar8 == unaff_x19) {
    return;
  }
  func_0x00010887c4f0();
  FUN_10886fb68();
  if ((int)param_1 != 0) {
    uStack_78 = puVar6[4];
    uStack_80 = puVar6[3];
    uStack_70 = puVar6[5];
    puVar6[4] = 0;
    puVar6[5] = 0;
    *puVar8 = 0;
    lVar2 = lVar13;
    do {
      lVar11 = lVar2;
      lVar2 = (long)unaff_x20 + lVar11;
      func_0x000107c3194c(lVar2 + 0x18,lVar2);
      param_1 = unaff_x20;
      if (lVar11 == 0) goto LAB_10886f82c;
      puVar6 = &uStack_80;
      FUN_10886fb68(puVar6,lVar2 + -0x18);
      lVar2 = lVar11 + -0x18;
    } while (((ulong)puVar6 & 1) != 0);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar11);
LAB_10886f82c:
    func_0x000107c3194c(param_1,&uStack_80);
    func_0x00010887c4ac();
  }
  lVar13 = lVar13 + 0x18;
  puVar6 = puVar8;
  goto LAB_10886f7c0;
LAB_10886f864:
  do {
    if ((long)uVar9 <= (long)uVar12) {
      uVar3 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      puVar8 = unaff_x20 + uVar3 * 3;
      uVar1 = uVar9 * 2 + 2;
      uVar10 = uVar3;
      puVar6 = puVar8;
      if ((long)uVar1 < (long)uVar14) {
        func_0x00010887c4f0();
        FUN_10886fb68();
        uVar10 = uVar1;
        puVar6 = puVar8 + 3;
        if ((int)param_1 == 0) {
          uVar10 = uVar3;
          puVar6 = puVar8;
        }
      }
      puVar8 = unaff_x20 + uVar9 * 3;
      func_0x00010887c688();
      if (((ulong)param_1 & 1) == 0) {
        uStack_78 = puVar8[1];
        uStack_80 = *puVar8;
        uStack_70 = puVar8[2];
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        do {
          param_1 = puVar6;
          iVar4 = (int)puVar8;
          func_0x00010887cee4();
          if ((long)uVar12 < (long)uVar10) break;
          uVar3 = uVar10 << 1 | 1;
          puVar8 = unaff_x20 + uVar3 * 3;
          uVar1 = uVar10 * 2 + 2;
          uVar10 = uVar3;
          puVar6 = puVar8;
          if ((long)uVar1 < (long)uVar14) {
            func_0x00010887c688();
            uVar10 = uVar1;
            puVar6 = puVar8 + 3;
            if (iVar4 == 0) {
              uVar10 = uVar3;
              puVar6 = puVar8;
            }
          }
          puVar7 = puVar6;
          FUN_10886fb68(puVar6,&uStack_80);
          puVar8 = param_1;
        } while ((int)puVar7 == 0);
        func_0x000107c3194c(param_1,&uStack_80);
        func_0x00010887c4ac();
      }
    }
    uVar9 = uVar9 - 1;
  } while (-1 < (long)uVar9);
  do {
    if ((long)uVar14 < 2) {
LAB_10886fae8:
      return;
    }
    uVar9 = 0;
    uStack_98 = unaff_x20[1];
    uStack_a0 = *unaff_x20;
    uStack_90 = unaff_x20[2];
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    puVar6 = unaff_x20;
    do {
      iVar4 = (int)param_1;
      uVar1 = uVar9 << 1 | 1;
      uVar12 = uVar9 * 2 + 2;
      puVar8 = puVar6 + uVar9 * 3 + 3;
      uVar3 = uVar1;
      if ((long)uVar12 < (long)uVar14) {
        func_0x00010887c688();
        puVar8 = puVar6 + uVar9 * 3 + 6;
        uVar3 = uVar12;
        if (iVar4 == 0) {
          puVar8 = puVar6 + uVar9 * 3 + 3;
          uVar3 = uVar1;
        }
      }
      uVar9 = uVar3;
      func_0x00010887cee4();
      param_1 = puVar6;
      puVar6 = puVar8;
    } while ((long)uVar9 <= (long)(uVar14 - 2 >> 1));
    unaff_x19 = unaff_x19 + -3;
    if (puVar8 == unaff_x19) {
      func_0x000107c3194c(puVar8,&uStack_a0);
    }
    else {
      func_0x00010887c67c();
      func_0x000107c3194c();
      func_0x000107c3194c(unaff_x19,&uStack_a0);
      uVar9 = (long)puVar8 + (0x18 - (long)unaff_x20);
      if (0x18 < (long)uVar9) {
        uVar9 = uVar9 / 0x18 - 2 >> 1;
        puVar6 = unaff_x20 + uVar9 * 3;
        func_0x00010887c414();
        if ((int)puVar6 != 0) {
          uStack_78 = puVar8[1];
          uStack_80 = *puVar8;
          uStack_70 = puVar8[2];
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar6 = unaff_x20 + uVar9 * 3;
          do {
            puVar8 = puVar6;
            func_0x00010887c4f0();
            func_0x000107c3194c();
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar6 = unaff_x20 + uVar9 * 3;
            puVar7 = puVar6;
            FUN_10886fb68(puVar6,&uStack_80);
          } while (((ulong)puVar7 & 1) != 0);
          func_0x000107c3194c(puVar8,&uStack_80);
          func_0x00010887c4ac();
        }
      }
    }
    param_1 = &uStack_a0;
    func_0x000107c27914();
    uVar14 = uVar14 - 1;
  } while( true );
code_r0x00010886f650:
  if (((ulong)puVar8 & 1) == 0) {
LAB_10886f654:
    FUN_10886f478(unaff_x20,puVar7,param_3,param_4 & 1);
    param_4 = 0;
    param_1 = unaff_x20;
  }
  goto LAB_10886f4bc;
}



/* Entry: 10886fb68; end: 10886fbc3;  */

uint FUN_10886fb68(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c29e04(auStack_38);
  func_0x000107c29e04(auStack_50,param_2);
  puVar1 = auStack_38;
  func_0x000107c27bd4(puVar1,auStack_50);
  func_0x000107c34368();
  func_0x000107c34364();
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 10886fbc4; end: 10886fcb3;  */

void FUN_10886fbc4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010887bf0c();
  puVar3 = param_2;
  func_0x00010887c414();
  puVar2 = param_2;
  func_0x00010887c048();
  FUN_10886fb68();
  if (((ulong)param_2 & 1) != 0) {
    if ((int)puVar2 == 0) {
      func_0x00010887c67c();
      iVar1 = (int)puVar2;
      FUN_10867c53c();
      func_0x00010887c048();
      FUN_10886fb68();
      unaff_x21 = unaff_x19;
      if (iVar1 == 0) {
        return;
      }
    }
LAB_10886fc3c:
    uStack_38 = unaff_x21[1];
    uStack_40 = *unaff_x21;
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = 0;
    func_0x000107c3194c();
    func_0x000107c3194c(param_3,&uStack_40);
    func_0x00010867cedc();
    return;
  }
  if ((int)puVar2 != 0) {
    func_0x000107c344c8();
    FUN_10867c53c();
    func_0x000107c344f0();
    FUN_10886fb68();
    if ((int)puVar2 != 0) {
      func_0x00010887c67c();
      unaff_x21 = puVar2;
      param_3 = puVar3;
      goto LAB_10886fc3c;
    }
  }
  return;
}



/* Entry: 10886fcb4; end: 10886fd4b;  */

void FUN_10886fcb4(void)

{
  undefined8 uVar1;
  undefined8 *in_x3;
  undefined8 in_x4;
  
  func_0x000107c343b8();
  func_0x00010886fc4c();
  uVar1 = in_x4;
  FUN_10886fb68(in_x4,in_x3);
  if ((int)uVar1 != 0) {
    FUN_10867c53c(in_x3,in_x4);
    func_0x00010887c414();
    if ((int)in_x3 != 0) {
      func_0x00010887c4f0();
      FUN_10867c53c();
      func_0x00010887c67c();
      FUN_10886fb68();
      if ((int)in_x3 != 0) {
        func_0x000107c344f0();
        FUN_10867c53c();
        func_0x000107c344c8();
        FUN_10886fb68();
        if ((int)in_x3 != 0) {
          func_0x00010887c048();
          in_x3[1] = 0;
          in_x3[2] = 0;
          *in_x3 = 0;
          func_0x000107c3194c();
          func_0x000107c3194c(in_x4,&stack0xffffffffffffffc0);
          func_0x00010867cedc();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10886fd4c; end: 10886feeb;  */

bool FUN_10886fd4c(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c34640();
  func_0x000107c344b4();
  iVar1 = 1;
  switch((param_2 - param_1) / 0x18) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010887c048();
    FUN_10886fb68();
    if (iVar1 != 0) {
      func_0x000107c344c8();
      FUN_10867c53c();
    }
    break;
  case 3:
    FUN_10886fbc4();
    break;
  case 4:
    func_0x00010886fc4c();
    break;
  case 5:
    FUN_10886fcb4();
    break;
  default:
    FUN_10886fbc4();
    lVar7 = 0;
    iVar1 = 0;
    puVar2 = (undefined8 *)(unaff_x19 + 0x48);
    puVar5 = (undefined8 *)(unaff_x19 + 0x30);
    while (puVar4 = puVar2, puVar4 != unaff_x20) {
      puVar2 = puVar4;
      FUN_10886fb68(puVar4,puVar5);
      if ((int)puVar2 != 0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        lVar6 = lVar7;
        do {
          func_0x000107c3194c(unaff_x19 + lVar6 + 0x48,unaff_x19 + lVar6 + 0x30);
          if (lVar6 == -0x30) break;
          uVar3 = 0;
          FUN_10886fb68();
          lVar6 = lVar6 + -0x18;
        } while ((uVar3 & 1) != 0);
        func_0x000107c3194c();
        iVar1 = iVar1 + 1;
        func_0x00010887c094();
        if (iVar1 == 8) {
          return puVar4 + 3 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 0x18;
      puVar5 = puVar4;
      puVar2 = puVar4 + 3;
    }
  }
  return true;
}



/* Entry: 10886feec; end: 10886ff3b;  */

void FUN_10886feec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_10887001c(param_1,&uStack_28);
  return;
}



/* Entry: 10886ff3c; end: 10886ffbb;  */

void FUN_10886ff3c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34590();
  func_0x000107c34610();
  func_0x000107c3457c();
  func_0x000107c34334();
  func_0x000107c34500();
  func_0x000107c34508();
  FUN_10886ffbc();
  *param_1 = &PTR_FUN_110a7ca70;
  *unaff_x19 = param_1;
  func_0x000107c34364();
  func_0x000107c34368();
  return;
}



/* Entry: 10886ffbc; end: 10886ffdb;  */

void FUN_10886ffbc(undefined8 *param_1)

{
  func_0x000107c313f4();
  *param_1 = &PTR_DAT_110a7cb10;
  return;
}



/* Entry: 10886ffdc; end: 10886ffdf;  */

undefined8 * FUN_10886ffdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10886ffe0; end: 10886fff3;  */

void FUN_10886ffe0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10886fff4; end: 108870003;  */

void FUN_10886fff4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108870004; end: 108870017;  */

void FUN_108870004(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108870018; end: 10887001b;  */

void FUN_108870018(void)

{
  return;
}



/* Entry: 10887001c; end: 10887003f;  */

void FUN_10887001c(void)

{
  func_0x000107c34170();
  FUN_108870040();
  return;
}



/* Entry: 108870040; end: 10887006f;  */

void FUN_108870040(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_108746cd4();
  return;
}



/* Entry: 108870070; end: 10887007b;  */

void FUN_108870070(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010887be1c();
  func_0x000107c343b8();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_108870198(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10887007c; end: 1088700fb;  */

void FUN_10887007c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c343b8();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_108870198(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1088700fc; end: 10887016b;  */

long * FUN_1088700fc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108870148();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10887016c; end: 108870197;  */

void FUN_10887016c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010887bd78();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x30) {
    FUN_108870208(param_4,unaff_x21);
    param_4 = lStack_48 + 0x30;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x30) {
    func_0x000107c27914(unaff_x20);
  }
  FUN_108870228(auStack_70);
  return;
}



/* Entry: 108870198; end: 108870207;  */

void FUN_108870198(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010887bd78();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x30) {
    FUN_108870208(in_x3,unaff_x21);
    in_x3 = lStack_38 + 0x30;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x30) {
    func_0x000107c27914(unaff_x20);
  }
  FUN_108870228(auStack_60);
  return;
}



/* Entry: 108870208; end: 108870227;  */

void FUN_108870208(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010887c854();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108870228; end: 10887028b;  */

void FUN_108870228(long param_1)

{
  uint extraout_w8;
  long unaff_x20;
  
  func_0x00010887d168();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010887cc30();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x30;
      func_0x000107c27914();
    }
  }
  return;
}



/* Entry: 10887028c; end: 108870293;  */

void FUN_10887028c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108870294; end: 1088702c7;  */

void FUN_108870294(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1088702c8; end: 1088702ef;  */

void FUN_1088702c8(long param_1)

{
  func_0x000107c34684();
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_1088702f0();
  return;
}



/* Entry: 1088702f0; end: 108870303;  */

void FUN_1088702f0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1086cca88();
    *(undefined1 *)(param_1 + 0x98) = 1;
    return;
  }
  return;
}



/* Entry: 108870304; end: 1088703df;  */

void FUN_108870304(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010887bf00();
  if (extraout_x8 != 0) {
    func_0x00010887b4e8();
    while (unaff_x20 != unaff_x21) {
      func_0x00010887b574();
      func_0x00010887beb4();
      unaff_x20 = unaff_x22;
    }
  }
  func_0x00010887bebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 1088703e0; end: 1088703e3;  */

undefined8 * FUN_1088703e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d998e8;
  _sqlite3_close(param_1[0x31]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x00010bcc5920();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  *param_1 = &PTR_DAT_110d99bf0;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x000107c278a8(param_1 + 8);
  func_0x00010bcc8060(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1088703e4; end: 1088703f7;  */

void FUN_1088703e4(void)

{
  func_0x00010bcc55d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088703f8; end: 1088704a3;  */

void FUN_1088703f8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a7cb68;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1088704a4; end: 108870cdf;  */

void FUN_1088704a4(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010887bf00();
  if (extraout_x8 != 0) {
    func_0x00010887b4e8();
    while (unaff_x20 != unaff_x21) {
      func_0x00010887b574();
      func_0x00010887beb4();
      unaff_x20 = unaff_x22;
    }
  }
  func_0x00010887bebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 108870ce0; end: 108870d0b;  */

void FUN_108870ce0(long param_1)

{
  FUN_108870d0c(param_1 + 0x60);
  func_0x00010887bebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 108870d0c; end: 108870d63;  */

void FUN_108870d0c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_108870d64(param_1);
    }
  }
  return;
}



/* Entry: 108870d64; end: 108870d8f;  */

void FUN_108870d64(undefined8 param_1,long param_2)

{
  (*(code *)**(undefined8 **)(param_2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108870d90; end: 1088713ab;  */

void FUN_108870d90(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010887bf00();
  if (extraout_x8 != 0) {
    func_0x00010887b4e8();
    while (unaff_x20 != unaff_x21) {
      func_0x00010887b574();
      func_0x00010887beb4();
      unaff_x20 = unaff_x22;
    }
  }
  func_0x00010887bebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 1088713ac; end: 10887154f;  */

void FUN_1088713ac(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871550; end: 108871553;  */

undefined8 * FUN_108871550(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108871554; end: 108871567;  */

void FUN_108871554(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871568; end: 10887156b;  */

undefined8 * FUN_108871568(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10887156c; end: 10887157f;  */

void FUN_10887156c(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871580; end: 108871583;  */

void FUN_108871580(void)

{
  return;
}



/* Entry: 108871584; end: 1088715ef;  */

void FUN_108871584(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  uVar1 = *param_2;
  func_0x000107c3138c(auStack_70,param_3);
  func_0x000107c34610();
  func_0x000107c3457c();
  func_0x000107c34334();
  func_0x000105963c30(param_1,uVar1,auStack_58);
  func_0x000107c34364();
  func_0x000107c34368();
  return;
}



/* Entry: 1088715f0; end: 108871607;  */

void FUN_1088715f0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x0001073a8870(*param_1,*param_2,param_2[1]);
  func_0x0001073a86e0();
  func_0x0001073a8a38();
  func_0x0001073a8524();
  func_0x0001073a86d8();
  func_0x0001073a86c0();
  func_0x0001073a86d0();
  return;
}



/* Entry: 108871608; end: 10887161b;  */

void FUN_108871608(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887161c; end: 10887166f;  */

void FUN_10887161c(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c34320();
  return;
}



/* Entry: 108871670; end: 1088716c3;  */

void FUN_108871670(void)

{
  func_0x000107c343c4();
  FUN_1088716c4();
  func_0x000107c34320();
  return;
}



/* Entry: 1088716c4; end: 1088716e7;  */

void FUN_1088716c4(int param_1)

{
  func_0x000107c34200();
  func_0x000107c28208();
  func_0x000107c342bc();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088716e8; end: 10887178f;  */

long FUN_1088716e8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887175c;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887175c:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x00010887181c();
  func_0x000107c343c0();
  func_0x000108871840();
  return param_1;
}



/* Entry: 108871790; end: 1088717e7;  */

void FUN_108871790(void)

{
  func_0x000107c343c4();
  func_0x00010887181c();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 1088717e8; end: 1088717eb;  */

undefined8 * FUN_1088717e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088717ec; end: 1088717ff;  */

void FUN_1088717ec(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871800; end: 108871863;  */

void FUN_108871800(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108871864; end: 108871893;  */

void FUN_108871864(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_108871894();
  return;
}



/* Entry: 108871894; end: 10887191b;  */

void FUN_108871894(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c3445c();
    func_0x00010887bd1c();
    func_0x000107c344b8();
    func_0x000107c28228();
    func_0x000107c34464();
    func_0x000107c29160();
    func_0x00010887c3e4();
    FUN_1086b7fd0();
    func_0x00010887c094();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    func_0x000107c27914();
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10887191c; end: 108871973;  */

void FUN_10887191c(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 108871974; end: 1088719cb;  */

void FUN_108871974(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108871840();
  return;
}



/* Entry: 1088719cc; end: 108871ad7;  */

void FUN_1088719cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int iVar3;
  undefined1 auStack_80 [48];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c34458();
  func_0x000107c34650();
  lVar1 = (param_4 - param_3) / 0x18;
  func_0x000107c3138c(auStack_80);
  func_0x000107c34610();
  puVar2 = (undefined8 *)(unaff_x22 + 8);
  lStack_50 = lVar1;
  uStack_48 = param_2;
  func_0x000107c27e60();
  func_0x000107c34334();
  func_0x000107c34500();
  func_0x000107c34508();
  func_0x000107c29f34();
  *puVar2 = &PTR_FUN_110a7d308;
  func_0x000107c34364();
  func_0x000107c34368();
  iVar3 = 1;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x18) {
    func_0x00010887c390(puVar2,iVar3);
    puVar2[2] = puVar2[2] + 1;
    iVar3 = iVar3 + 1;
  }
  func_0x0001005fc8f4();
  return;
}



/* Entry: 108871ad8; end: 108871adb;  */

undefined8 * FUN_108871ad8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108871adc; end: 108871aef;  */

void FUN_108871adc(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871af0; end: 108871aff;  */

void FUN_108871af0(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108871b00; end: 108871b13;  */

void FUN_108871b00(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871b14; end: 108871b23;  */

void FUN_108871b14(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108871b24; end: 108871b37;  */

void FUN_108871b24(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871b38; end: 108871b3f;  */

void FUN_108871b38(void)

{
  return;
}



/* Entry: 108871b40; end: 108871b53;  */

void FUN_108871b40(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871b54; end: 108871b5f;  */

void FUN_108871b54(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108871b60; end: 108871c63;  */

void FUN_108871b60(long param_1,undefined1 param_2)

{
  long lVar1;
  int extraout_w8;
  long unaff_x19;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [280];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined1 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c3445c();
    func_0x00010887bd1c();
    func_0x000107c344b8(auStack_1a8);
    func_0x000107c2915c();
    func_0x000107c34464(auStack_90);
    func_0x000107c2892c();
    func_0x00010887c434(auStack_78);
    func_0x000107c2892c();
    func_0x000107c345c4();
    func_0x000107c28228();
    lStack_60 = param_1;
    uStack_58 = param_2;
    func_0x000107c345c0();
    func_0x000107c28228();
    lStack_50 = param_1;
    uStack_48 = param_2;
    func_0x00010887c3e4(*(undefined1 *)(unaff_x19 + 0x188));
    if (extraout_w8 == 1) {
      FUN_108871c88();
    }
    else {
      FUN_108871ccc();
    }
    func_0x0001087a572c(auStack_1c0);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x188) == '\x01') {
    func_0x0001087a572c();
    *(undefined1 *)(lVar1 + 0x180) = 0;
  }
  return;
}



/* Entry: 108871c64; end: 108871c87;  */

void FUN_108871c64(long param_1)

{
  if (*(char *)(param_1 + 0x180) == '\x01') {
    func_0x0001087a572c();
    *(undefined1 *)(param_1 + 0x180) = 0;
  }
  return;
}



/* Entry: 108871c88; end: 108871ccb;  */

void FUN_108871c88(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c343b8();
  func_0x000107c3194c();
  func_0x000107c28df0(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x000107c28910(unaff_x20 + 0x130,unaff_x19 + 0x130);
  func_0x000107c28910(unaff_x20 + 0x148,unaff_x19 + 0x148);
  func_0x00010887c94c();
  return;
}



/* Entry: 108871ccc; end: 108871ce7;  */

void FUN_108871ccc(long param_1)

{
  FUN_108871ce8();
  *(undefined1 *)(param_1 + 0x180) = 1;
  return;
}



/* Entry: 108871ce8; end: 108871d53;  */

void FUN_108871ce8(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c343b8();
  func_0x00010887c854();
  func_0x000107c28dec(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x20 + 0x138) = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x140) = *(undefined8 *)(unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x130) = 0;
  *(undefined8 *)(unaff_x19 + 0x138) = 0;
  *(undefined8 *)(unaff_x19 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = *(undefined8 *)(unaff_x19 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x20 + 0x158) = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x150) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x148) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  func_0x00010887c94c();
  return;
}



/* Entry: 108871d54; end: 108871d7f;  */

void FUN_108871d54(long param_1)

{
  if (*(char *)(param_1 + 0x180) == '\x01') {
    func_0x0001087a572c();
  }
  return;
}



/* Entry: 108871d80; end: 108871e4b;  */

void FUN_108871d80(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  long lStack_68;
  
  func_0x000107c344b4();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010887bd78();
      for (; param_3 != unaff_x19; param_3 = param_3 + 0x180) {
        FUN_108871ce8(param_4,param_3);
        param_4 = lStack_68 + 0x180;
        lStack_68 = param_4;
      }
      uStack_78 = 1;
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x180) {
        func_0x0001087a572c(unaff_x20);
      }
      FUN_108871e4c(auStack_90);
      return;
    }
    __Znwm(unaff_x20 * 0x180);
  }
  func_0x00010887c2a8(0x180);
  return;
}



/* Entry: 108871e4c; end: 108871ec3;  */

void FUN_108871e4c(long param_1)

{
  uint extraout_w8;
  long unaff_x20;
  
  func_0x00010887d168();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010887cc30();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x180;
      func_0x0001087a572c();
    }
  }
  return;
}



/* Entry: 108871ec4; end: 108871f2f;  */

void FUN_108871ec4(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_1c0 [400];
  
  func_0x000107c34660();
  _bzero(auStack_1c0,400);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (*(char *)(unaff_x19 + 400) != '\0') {
    FUN_108871c64(unaff_x19 + 0x10);
  }
  FUN_108871d54(unaff_x20 + 8);
  func_0x000107c34534();
  func_0x000107c31408();
  FUN_108871d54(unaff_x19 + 0x10);
  return;
}



/* Entry: 108871f30; end: 108871f47;  */

void FUN_108871f30(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00010887b7d4(*param_1,*param_2,param_2[1],param_2[2]);
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_108871f94();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108871f48; end: 108871f93;  */

void FUN_108871f48(void)

{
  func_0x00010887b7d4();
  func_0x000107c343fc();
  func_0x00010887ba88();
  FUN_108871f94();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108871f94; end: 108871fc7;  */

void FUN_108871f94(int param_1,undefined8 param_2,long param_3)

{
  func_0x00010887b678();
  func_0x000107c287ac();
  func_0x00010887bad4();
  func_0x000107c28230();
  func_0x00010887bae4();
  if (*(char *)(param_3 + 4) == '\x01') {
    func_0x0001005edd44();
    func_0x000107c6132c();
    if (param_1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      func_0x0001003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc();
  return;
}



/* Entry: 108871fc8; end: 108871fcb;  */

undefined8 * FUN_108871fc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108871fcc; end: 108871fdf;  */

void FUN_108871fcc(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108871fe0; end: 108872003;  */

void FUN_108871fe0(int param_1)

{
  func_0x000107c34200();
  func_0x000107c287ac();
  func_0x000107c342bc();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108872004; end: 10887200b;  */

void FUN_108872004(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887200c; end: 10887202b;  */

void FUN_10887200c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000107c34200();
  func_0x000107c28208();
  func_0x000107c342bc();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 10887202c; end: 108872083;  */

void FUN_10887202c(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000107c29f38();
  return;
}



/* Entry: 108872084; end: 10887209f;  */

void FUN_108872084(void)

{
  func_0x00010887bc60();
  FUN_1088720a0();
  return;
}



/* Entry: 1088720a0; end: 1088720a7;  */

void FUN_1088720a0(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_108872108();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 1088720a8; end: 108872107;  */

void FUN_1088720a8(void)

{
  func_0x000107c34640();
  func_0x00010887b5e0();
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_108872108();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x00010887c340();
  return;
}



/* Entry: 108872108; end: 108872187;  */

void FUN_108872108(void)

{
  int unaff_w26;
  
  func_0x000107c34578();
  func_0x00010887b628();
  func_0x00010887bcd0();
  func_0x000107c287ac();
  func_0x00010887c704();
  func_0x000107c28208();
  func_0x00010887c5b0();
  func_0x00010887c6f4();
  FUN_108872188();
  func_0x00010887c714();
  func_0x000107c2a0dc();
  func_0x00010887c6d4();
  func_0x000108872190();
  func_0x000107c34474();
  func_0x00010887c734();
  func_0x000108872194();
  func_0x00010887c724();
  func_0x000108872198();
  func_0x00010887c6e4();
  func_0x00010887c508();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (unaff_w26 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108872188; end: 10887219b;  */

void FUN_108872188(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 10887219c; end: 1088721f3;  */

void FUN_10887219c(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000107c2a0e4();
  return;
}



/* Entry: 1088721f4; end: 1088721f7;  */

undefined8 * FUN_1088721f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088721f8; end: 10887220b;  */

void FUN_1088721f8(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887220c; end: 108872263;  */

void FUN_10887220c(void)

{
  func_0x000107c343c4();
  FUN_108872264();
  func_0x000107c343c0();
  func_0x000107c2a0e4();
  return;
}



/* Entry: 108872264; end: 108872293;  */

void FUN_108872264(int param_1)

{
  func_0x00010887b678();
  func_0x000107c28208();
  func_0x00010887b958();
  func_0x00010887bae4();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108872294; end: 1088722b3;  */

void FUN_108872294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000107c34200();
  func_0x000108872198();
  func_0x000107c342bc();
  func_0x0001005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  func_0x0001005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 1088722b4; end: 1088722d3;  */

void FUN_1088722b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088722d4(param_1,0,param_2,param_3);
  func_0x000107c60d88(param_1 + 0x18);
  func_0x00010054c3a4(param_1);
  func_0x00010062154c();
  func_0x000100621554();
  return;
}



/* Entry: 1088722d4; end: 108872343;  */

void FUN_1088722d4(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c34458();
  func_0x00010887cc68(param_4 - param_3);
  FUN_108871584(&uStack_38);
  while( true ) {
    param_2 = (ulong)((int)param_2 + 1);
    if (unaff_x20 == unaff_x19) break;
    FUN_108872344(uStack_38,param_2,unaff_x20);
    unaff_x20 = unaff_x20 + 0x18;
  }
  return;
}


