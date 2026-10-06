/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107510e44; end: 107510f2f;  */

void FUN_107510e44(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [120];
  
  uStack_d8 = param_4[1];
  uStack_e0 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x00010750edb0(auStack_c8,*(undefined8 *)(param_2 + 8),&uStack_e0);
  uVar1 = 0x5e0;
  __Znwm();
  func_0x00010784e930();
  FUN_10750bcd8(auStack_c8);
  func_0x00010750bd38(&uStack_e0);
  func_0x00010750bd38(&uStack_f0);
  *param_1 = uVar1;
  return;
}



/* Entry: 107510f30; end: 107510f6b;  */

long FUN_107510f30(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b8fd8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107510f6c; end: 107510f7f;  */

undefined ** FUN_107510f6c(void)

{
  return &PTR_DAT_1109b8fd8;
}



/* Entry: 107510f80; end: 10751137f;  */

void FUN_107510f80(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  ulong unaff_x22;
  ulong *puVar8;
  long *unaff_x24;
  ulong uVar9;
  long *unaff_x25;
  long lVar10;
  long *plVar11;
  ulong in_stack_00000000;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  func_0x000107513580();
  func_0x000107513034();
  if ((bool)in_ZR) {
    return;
  }
  func_0x0001075131f8();
  if ((bool)in_ZR) {
    puVar8 = (ulong *)0x0;
    func_0x000107513724();
    lVar10 = extraout_x8_01;
  }
  else {
    func_0x0001075132ac();
    func_0x00010751369c();
    puVar8 = (ulong *)((long)unaff_x19 >> 4);
    func_0x0001075131a0();
    for (uVar7 = 0; uVar7 != in_stack_00000000; uVar7 = uVar7 + 1) {
      func_0x000107513490();
      for (; (long)unaff_x19 <= (long)uVar7; unaff_x19 = unaff_x19 + 2) {
        plVar5 = in_stack_00000060;
        if (unaff_x19 == in_stack_00000058) {
LAB_107510fe8:
          func_0x000107513374();
          lVar10 = *plVar5;
        }
        else {
          cVar3 = SBORROW8(unaff_x19,uVar7);
          cVar4 = (long)(unaff_x19 - uVar7) < 0;
          if (unaff_x19 != uVar7) {
            func_0x0001075132e4(in_stack_00000060,in_stack_00000068);
            func_0x0001075136e4();
            func_0x000107513374();
            func_0x0001075135e4();
            if (cVar4 != cVar3) goto LAB_107510fe8;
          }
          func_0x0001075132e4();
          lVar10 = *plVar5 + 1;
        }
        plVar5 = unaff_x25 + (lVar10 + (long)unaff_x20) * 2;
        plVar11 = unaff_x24 + lVar10 * 2;
        while( true ) {
          cVar3 = SBORROW8(lVar10,(long)puVar8);
          cVar4 = lVar10 - (long)puVar8 < 0;
          if ((long)puVar8 <= lVar10) break;
          if ((long)unaff_x22 <= (long)unaff_x20 + lVar10) {
LAB_107511060:
            func_0x000107513710();
            goto LAB_107511070;
          }
          lVar6 = *plVar11;
          func_0x000104c32db4(lVar6,*plVar5);
          if ((int)lVar6 == 0) goto LAB_107511060;
          lVar10 = lVar10 + 1;
          plVar5 = plVar5 + 2;
          plVar11 = plVar11 + 2;
        }
        func_0x000107513648();
        if (cVar4 == cVar3) {
          func_0x00010751321c();
          goto LAB_10751108c;
        }
LAB_107511070:
        unaff_x20 = (long *)((long)unaff_x20 + -2);
      }
      func_0x00010751321c();
    }
LAB_10751108c:
    func_0x0001075133ac();
    func_0x000107513280();
    uVar9 = 0;
    if (extraout_x9 != 0) {
      uVar9 = extraout_x8 / extraout_x9;
    }
    while (plVar5 = in_stack_00000060, uVar1 = (long)puVar8 < 1 && unaff_x22 == 0,
          unaff_x24 = in_stack_00000068, (long)puVar8 >= 1 || 0 < (long)unaff_x22) {
      uVar9 = uVar9 - 1;
      func_0x0001075136c4(in_stack_000000a0,in_stack_000000a8);
      func_0x000107513730();
      if ((bool)uVar1) {
        lVar10 = 1;
      }
      else if (uVar7 == uVar9) {
        lVar10 = -1;
      }
      else {
        plVar5 = (long *)*unaff_x25;
        func_0x00010751352c(in_stack_00000040,plVar5,unaff_x25[1]);
        lVar6 = *plVar5;
        plVar5 = (long *)*unaff_x25;
        func_0x00010751352c(in_stack_00000030,plVar5,unaff_x25[1]);
        lVar10 = -1;
        if (lVar6 < *plVar5) {
          lVar10 = 1;
        }
      }
      unaff_x22 = lVar10 + uVar7;
      lVar10 = *unaff_x25;
      unaff_x25 = (long *)unaff_x25[1];
      func_0x0001075136b0(lVar10);
      func_0x0001075133bc();
      while( true ) {
        unaff_x25 = unaff_x25 + -2;
        bVar2 = 0xfffffffffffffffe < uVar7;
        uVar7 = uVar7 + 1;
        if (bVar2) break;
        func_0x000107470530(&stack0x00000060);
      }
    }
    while (unaff_x24 != plVar5) {
      func_0x000107470530(&stack0x00000088,unaff_x24 + -2);
      unaff_x24 = unaff_x24 + -2;
    }
    func_0x00010747030c(&stack0x00000060);
    func_0x000107513418();
    func_0x0001075134c4();
    lVar10 = extraout_x8_00;
    unaff_x20 = param_1;
  }
  do {
    bVar2 = unaff_x24 == *(long **)(lVar10 + 8);
    if (bVar2) {
      func_0x0001075136f8();
      plVar5 = extraout_x8_03;
      if (unaff_x25 == extraout_x8_03) {
        func_0x00010747030c(&stack0x00000088);
        return;
      }
LAB_1075111dc:
      bVar2 = unaff_x25 == plVar5;
      if (bVar2) {
LAB_1075111fc:
        lVar10 = *unaff_x25;
        if (*unaff_x24 != lVar10) {
          func_0x00010724ef84(&stack0x000000a0);
          func_0x0001075135c4();
          if (extraout_x8_04 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10 != 0);
          }
          func_0x0001075135b4();
          if (extraout_x8_05 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001075135a4();
          func_0x000107513668();
          func_0x000107513248();
          do {
            func_0x000107513314();
            for (; unaff_x22 != 0; unaff_x22 = unaff_x22 - 1 & unaff_x22) {
              func_0x0001075132c8();
              uVar7 = extraout_x9_00;
              func_0x000107513670();
              if ((uVar7 & 1) != 0) goto LAB_1075112c4;
            }
            func_0x000107513574();
          } while ((extraout_x8_06 & 1) == 0);
          FUN_107512314(in_stack_00000028,lVar10);
          func_0x000107513460();
          func_0x000107513228();
LAB_1075112c4:
          func_0x0001074f7234(&stack0x00000060);
          func_0x0001075136dc();
          func_0x000107513724();
        }
        unaff_x24 = unaff_x24 + 2;
        unaff_x25 = unaff_x25 + 2;
        puVar8 = puVar8 + 2;
      }
      else {
        func_0x000107513704();
        if (!bVar2) {
          uVar7 = *puVar8;
          func_0x000104c32db4(uVar7,*unaff_x25);
          if ((uVar7 & 1) != 0) goto LAB_1075111fc;
        }
        func_0x00010724ef84(&stack0x00000060,*unaff_x25);
        func_0x000107513420();
        FUN_107511c8c();
        func_0x0001075133a4();
        unaff_x25 = unaff_x25 + 2;
      }
    }
    else {
      func_0x000107513704();
      if (!bVar2) {
        uVar7 = *puVar8;
        func_0x000104c32db4(uVar7,*unaff_x24);
        if ((int)uVar7 != 0) {
          func_0x0001075136f8();
          plVar5 = extraout_x8_02;
          goto LAB_1075111dc;
        }
      }
      func_0x00010724ef84(&stack0x00000060,*unaff_x24);
      func_0x000107513744();
      FUN_107511c8c();
      func_0x0001075133a4();
      unaff_x24 = unaff_x24 + 2;
    }
    lVar10 = *unaff_x20;
  } while( true );
}



/* Entry: 107511380; end: 10751177b;  */

void FUN_107511380(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  ulong unaff_x22;
  ulong *puVar8;
  long *unaff_x24;
  ulong uVar9;
  long *unaff_x25;
  long lVar10;
  long *plVar11;
  ulong in_stack_00000000;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  long *in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  func_0x000107513580();
  func_0x000107513034();
  if ((bool)in_ZR) {
    return;
  }
  func_0x0001075131f8();
  if ((bool)in_ZR) {
    puVar8 = (ulong *)0x0;
    func_0x000107513724();
    lVar10 = extraout_x8_01;
  }
  else {
    func_0x0001075132ac();
    func_0x00010751369c();
    puVar8 = (ulong *)((long)unaff_x19 >> 4);
    func_0x0001075131a0();
    for (uVar7 = 0; uVar7 != in_stack_00000000; uVar7 = uVar7 + 1) {
      func_0x000107513490();
      for (; (long)unaff_x19 <= (long)uVar7; unaff_x19 = unaff_x19 + 2) {
        plVar5 = in_stack_00000060;
        if (unaff_x19 == in_stack_00000058) {
LAB_1075113e8:
          func_0x000107513374();
          lVar10 = *plVar5;
        }
        else {
          cVar3 = SBORROW8(unaff_x19,uVar7);
          cVar4 = (long)(unaff_x19 - uVar7) < 0;
          if (unaff_x19 != uVar7) {
            func_0x0001075132e4(in_stack_00000060,in_stack_00000068);
            func_0x0001075136e4();
            func_0x000107513374();
            func_0x0001075135e4();
            if (cVar4 != cVar3) goto LAB_1075113e8;
          }
          func_0x0001075132e4();
          lVar10 = *plVar5 + 1;
        }
        plVar5 = unaff_x25 + (lVar10 + (long)unaff_x20) * 2;
        plVar11 = unaff_x24 + lVar10 * 2;
        while( true ) {
          cVar3 = SBORROW8(lVar10,(long)puVar8);
          cVar4 = lVar10 - (long)puVar8 < 0;
          if ((long)puVar8 <= lVar10) break;
          if ((long)unaff_x22 <= (long)unaff_x20 + lVar10) {
LAB_107511460:
            func_0x000107513710();
            goto LAB_107511470;
          }
          lVar6 = *plVar11;
          FUN_107512428(lVar6,*plVar5);
          if ((int)lVar6 == 0) goto LAB_107511460;
          lVar10 = lVar10 + 1;
          plVar5 = plVar5 + 2;
          plVar11 = plVar11 + 2;
        }
        func_0x000107513648();
        if (cVar4 == cVar3) {
          func_0x00010751321c();
          goto LAB_10751148c;
        }
LAB_107511470:
        unaff_x20 = (long *)((long)unaff_x20 + -2);
      }
      func_0x00010751321c();
    }
LAB_10751148c:
    func_0x0001075133ac();
    func_0x000107513280();
    uVar9 = 0;
    if (extraout_x9 != 0) {
      uVar9 = extraout_x8 / extraout_x9;
    }
    while (plVar5 = in_stack_00000060, uVar1 = (long)puVar8 < 1 && unaff_x22 == 0,
          unaff_x24 = in_stack_00000068, (long)puVar8 >= 1 || 0 < (long)unaff_x22) {
      uVar9 = uVar9 - 1;
      func_0x0001075136c4(in_stack_000000a0,in_stack_000000a8);
      func_0x000107513730();
      if ((bool)uVar1) {
        lVar10 = 1;
      }
      else if (uVar7 == uVar9) {
        lVar10 = -1;
      }
      else {
        plVar5 = (long *)*unaff_x25;
        func_0x00010751352c(in_stack_00000040,plVar5,unaff_x25[1]);
        lVar6 = *plVar5;
        plVar5 = (long *)*unaff_x25;
        func_0x00010751352c(in_stack_00000030,plVar5,unaff_x25[1]);
        lVar10 = -1;
        if (lVar6 < *plVar5) {
          lVar10 = 1;
        }
      }
      unaff_x22 = lVar10 + uVar7;
      lVar10 = *unaff_x25;
      unaff_x25 = (long *)unaff_x25[1];
      func_0x0001075136b0(lVar10);
      func_0x0001075133bc();
      while( true ) {
        unaff_x25 = unaff_x25 + -2;
        bVar2 = 0xfffffffffffffffe < uVar7;
        uVar7 = uVar7 + 1;
        if (bVar2) break;
        FUN_1075124e8(&stack0x00000060);
      }
    }
    while (unaff_x24 != plVar5) {
      FUN_1075124e8(&stack0x00000088,unaff_x24 + -2);
      unaff_x24 = unaff_x24 + -2;
    }
    FUN_1074f9718(&stack0x00000060);
    func_0x000107513418();
    func_0x0001075134c4();
    lVar10 = extraout_x8_00;
    unaff_x20 = param_1;
  }
  do {
    bVar2 = unaff_x24 == *(long **)(lVar10 + 8);
    if (bVar2) {
      func_0x0001075136f8();
      plVar5 = extraout_x8_03;
      if (unaff_x25 == extraout_x8_03) {
        FUN_1074f9718(&stack0x00000088);
        return;
      }
LAB_1075115d8:
      bVar2 = unaff_x25 == plVar5;
      if (bVar2) {
LAB_1075115f8:
        if (*unaff_x24 != *unaff_x25) {
          lVar10 = *unaff_x25 + 0x10;
          func_0x00010724ef84(&stack0x000000a0,lVar10);
          func_0x0001075135c4();
          if (extraout_x8_04 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10 != 0);
          }
          func_0x0001075135b4();
          if (extraout_x8_05 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001075135a4();
          func_0x000107513668();
          func_0x000107513248();
          do {
            func_0x000107513314();
            for (; unaff_x22 != 0; unaff_x22 = unaff_x22 - 1 & unaff_x22) {
              func_0x0001075132c8();
              uVar7 = extraout_x9_00;
              func_0x000107513670();
              if ((uVar7 & 1) != 0) goto LAB_1075116c0;
            }
            func_0x000107513574();
          } while ((extraout_x8_06 & 1) == 0);
          FUN_1075128a8(in_stack_00000028,lVar10);
          func_0x000107513460();
          func_0x000107513228();
LAB_1075116c0:
          func_0x0001074f6f7c(&stack0x00000060);
          func_0x0001075136dc();
          func_0x000107513724();
        }
        unaff_x24 = unaff_x24 + 2;
        unaff_x25 = unaff_x25 + 2;
        puVar8 = puVar8 + 2;
      }
      else {
        func_0x000107513704();
        if (!bVar2) {
          uVar7 = *puVar8;
          FUN_107512428(uVar7,*unaff_x25);
          if ((uVar7 & 1) != 0) goto LAB_1075115f8;
        }
        func_0x000107513690();
        func_0x000107513420();
        FUN_107512460();
        func_0x0001075133a4();
        unaff_x25 = unaff_x25 + 2;
      }
    }
    else {
      func_0x000107513704();
      if (!bVar2) {
        uVar7 = *puVar8;
        FUN_107512428(uVar7,*unaff_x24);
        if ((int)uVar7 != 0) {
          func_0x0001075136f8();
          plVar5 = extraout_x8_02;
          goto LAB_1075115d8;
        }
      }
      func_0x000107513690();
      func_0x000107513744();
      FUN_107512460();
      func_0x0001075133a4();
      unaff_x24 = unaff_x24 + 2;
    }
    lVar10 = *unaff_x20;
  } while( true );
}



/* Entry: 10751177c; end: 107511c3b;  */

void FUN_10751177c(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x9;
  ulong extraout_x9_00;
  undefined4 extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_var;
  long unaff_x19;
  long lVar9;
  long lVar10;
  ulong unaff_x22;
  long lVar11;
  long *unaff_x24;
  long *unaff_x25;
  ulong uVar12;
  long *plVar13;
  long unaff_x27;
  long lVar14;
  long in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000050;
  long *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000088;
  long *in_stack_00000090;
  long *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  func_0x000107513580();
  func_0x000107513034();
  if ((bool)in_ZR) {
    return;
  }
  plVar4 = param_1;
  func_0x0001075131f8();
  if ((bool)in_ZR) {
    plVar13 = (long *)0x0;
    plVar5 = plVar4;
    puVar7 = extraout_x8;
  }
  else {
    func_0x0001075132ac();
    func_0x00010751369c();
    lVar9 = unaff_x19 >> 4;
    func_0x0001075131a0();
    for (lVar10 = 0; lVar10 != in_stack_00000000; lVar10 = lVar10 + 1) {
      unaff_x19 = lVar10;
      for (lVar11 = -lVar10; lVar11 <= lVar10; lVar11 = lVar11 + 2) {
        plVar5 = in_stack_00000060;
        if (lVar11 == -lVar10) {
LAB_107511800:
          func_0x000107513374();
          lVar14 = *plVar5;
        }
        else {
          cVar2 = SBORROW8(lVar11,lVar10);
          cVar3 = lVar11 - lVar10 < 0;
          if (lVar11 != lVar10) {
            func_0x000107513684(in_stack_00000060,in_stack_00000068);
            plVar5 = in_stack_00000060;
            func_0x000107513374(in_stack_00000030,in_stack_00000060,in_stack_00000068);
            func_0x0001075135e4();
            if (cVar3 != cVar2) goto LAB_107511800;
          }
          func_0x000107513684();
          lVar14 = *plVar5 + 1;
        }
        plVar5 = unaff_x24 + lVar14 * 2;
        plVar13 = unaff_x25 + (lVar14 + unaff_x19) * 2;
        for (; unaff_x27 = in_stack_00000050, lVar14 < lVar9; lVar14 = lVar14 + 1) {
          if (((long)unaff_x22 <= unaff_x19 + lVar14) ||
             (plVar8 = plVar5, FUN_1075129bc(plVar5,plVar13), (int)plVar8 == 0)) {
            in_stack_00000060[lVar11 + in_stack_00000050] = lVar14;
            goto LAB_1075118b8;
          }
          plVar5 = plVar5 + 2;
          plVar13 = plVar13 + 2;
        }
        in_stack_00000060[lVar11 + in_stack_00000050] = lVar14;
        if ((long)unaff_x22 <= unaff_x19 + lVar14) {
          func_0x00010751321c();
          goto LAB_1075118d4;
        }
LAB_1075118b8:
        unaff_x19 = unaff_x19 + -2;
      }
      func_0x00010751321c();
    }
LAB_1075118d4:
    func_0x0001075133ac();
    func_0x000107513280();
    lVar10 = 0;
    if (extraout_x9 != 0) {
      lVar10 = extraout_x8_00 / extraout_x9;
    }
    while (plVar5 = in_stack_00000060, plVar13 = in_stack_00000068, 0 < lVar9 || 0 < (long)unaff_x22
          ) {
      lVar14 = lVar10 + -1;
      plVar5 = in_stack_000000a0;
      func_0x0001075136c4(in_stack_000000a0,in_stack_000000a8);
      lVar11 = lVar9 - unaff_x22;
      if (lVar11 == 1 - lVar10) {
        uVar12 = 0;
        lVar10 = 1;
      }
      else if (lVar11 == lVar14) {
        lVar10 = -1;
        uVar12 = 1;
      }
      else {
        plVar13 = (long *)*plVar5;
        func_0x000107511d40(plVar13,plVar5[1],lVar11 + in_stack_00000040);
        lVar9 = *plVar13;
        plVar13 = (long *)*plVar5;
        func_0x000107511d40(plVar13,plVar5[1],lVar11 + in_stack_00000030);
        uVar12 = (ulong)(*plVar13 <= lVar9);
        lVar10 = -1;
        if (lVar9 < *plVar13) {
          lVar10 = 1;
        }
      }
      plVar13 = (long *)*plVar5;
      func_0x0001075136b0(plVar13,plVar5[1]);
      lVar9 = *plVar13;
      unaff_x22 = lVar9 - (lVar10 + lVar11);
      uVar6 = *(ulong *)(*plVar5 + lVar11 * 8 + unaff_x27 * 8);
      uVar12 = ~uVar6 + uVar12 + lVar9;
      lVar11 = unaff_x19 + uVar6 * 0x10;
      while( true ) {
        bVar1 = 0xfffffffffffffffe < uVar12;
        uVar12 = uVar12 + 1;
        lVar10 = lVar14;
        if (bVar1) break;
        FUN_107512a90(&stack0x00000060,lVar11);
        lVar11 = lVar11 + -0x10;
      }
    }
    while (plVar13 != plVar5) {
      FUN_107512a90(&stack0x00000088,plVar13 + -2);
      plVar13 = plVar13 + -2;
    }
    plVar5 = (long *)&stack0x00000060;
    FUN_1074f98ac(plVar5);
    func_0x000107513418();
    puVar7 = (undefined8 *)*plVar4;
    unaff_x24 = (long *)*puVar7;
    unaff_x25 = *(long **)*param_2;
    param_1 = plVar4;
    plVar13 = in_stack_00000088;
  }
  do {
    if (unaff_x24 == (long *)puVar7[1]) {
      plVar8 = *(long **)(*param_2 + 8);
      if (unaff_x25 == plVar8) {
        FUN_1074f98ac(&stack0x00000088);
        return;
      }
LAB_107511a80:
      if ((unaff_x25 == plVar8) ||
         ((plVar13 != in_stack_00000090 &&
          (plVar5 = plVar13, FUN_1075129bc(plVar13,unaff_x25), ((ulong)plVar5 & 1) != 0)))) {
        if (*unaff_x24 != *unaff_x25) {
          func_0x000107513660(&stack0x000000a0);
          func_0x0001075135c4();
          if (extraout_x8_01 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001075135b4();
          if (extraout_x8_02 != 0) {
            do {
              func_0x000107513100();
            } while (extraout_w10_01 != 0);
          }
          func_0x0001075135a4();
          func_0x000107513668();
          func_0x000107513248();
          do {
            func_0x000107513314();
            for (; unaff_x22 != 0; unaff_x22 = unaff_x22 - 1 & unaff_x22) {
              func_0x0001075132c8();
              uVar12 = extraout_x9_00;
              func_0x000107513670();
              if ((uVar12 & 1) != 0) goto LAB_107511b7c;
            }
            func_0x000107513574();
          } while ((extraout_x8_03 & 1) == 0);
          lVar10 = in_stack_00000028;
          FUN_107512e50(in_stack_00000028,plVar5);
          func_0x0001072625b4(*in_stack_00000008 + lVar10 * 0x58,&stack0x000000a0);
          func_0x000107513228();
LAB_107511b7c:
          plVar5 = (long *)&stack0x00000060;
          func_0x0001074f70d8();
          func_0x0001075136dc();
          param_1 = plVar4;
        }
        unaff_x24 = unaff_x24 + 2;
        unaff_x25 = unaff_x25 + 2;
        plVar13 = plVar13 + 2;
      }
      else {
        func_0x000107513660(&stack0x00000060);
        func_0x000107513420();
        FUN_107512a08();
        func_0x0001075133a4();
        unaff_x25 = unaff_x25 + 2;
      }
    }
    else {
      if ((plVar13 != in_stack_00000090) &&
         (plVar5 = plVar13, FUN_1075129bc(plVar13,unaff_x24), (int)plVar5 != 0)) {
        plVar8 = *(long **)(*param_2 + 8);
        goto LAB_107511a80;
      }
      func_0x000107513660(&stack0x00000060);
      plVar5 = (long *)&stack0x000000a0;
      FUN_107512a08(plVar5,CONCAT44(extraout_var,extraout_w10),&stack0x00000060,unaff_x24);
      func_0x0001075133a4();
      unaff_x24 = unaff_x24 + 2;
    }
    puVar7 = (undefined8 *)*param_1;
  } while( true );
}



/* Entry: 107511c3c; end: 107511c8b;  */

void FUN_107511c3c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010751363c();
  FUN_1074f5630();
  if (param_1 == 0) {
    lVar1 = unaff_x20 + 0x40;
    FUN_1074f56f0();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107511c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(unaff_x19 + 0x38) + 0x10))
                (*(long **)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x48));
      return;
    }
  }
  return;
}



/* Entry: 107511c8c; end: 107511d13;  */

void FUN_107511c8c(ulong param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  int extraout_w10;
  long unaff_x25;
  
  func_0x000107513534();
  func_0x0001075130dc();
  func_0x000107513158();
  do {
    func_0x0001075132fc();
    while (unaff_x25 != 0) {
      func_0x000107513110();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_107511cdc;
      }
      func_0x0001075135d4();
    }
    func_0x000107513574();
  } while ((extraout_x8 & 1) == 0);
  FUN_107512210();
  func_0x0001075131d4();
  func_0x000107513404();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107513100();
    } while (extraout_w10 != 0);
  }
  uVar1 = 1;
LAB_107511cdc:
  func_0x000107513264(uVar1);
  return;
}



/* Entry: 107511d14; end: 107511d5f;  */

/* WARNING: Possible PIC construction at 0x000107511e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107511e80) */
/* WARNING: Removing unreachable block (ram,0x000107511e94) */
/* WARNING: Removing unreachable block (ram,0x000107511e8c) */

undefined1  [16] FUN_107511d14(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long **pplStack_150;
  undefined1 uStack_148;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 < (ulong)(((long)param_2 - (long)param_1) / 0x18)) {
    auVar14._0_8_ = param_1 + param_3 * 3;
    auVar14._8_8_ = param_2;
    return auVar14;
  }
  FUN_1075121ac();
  if (param_3 < (ulong)((long)param_2 - (long)param_1 >> 3)) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = param_1 + param_3;
    return auVar15;
  }
  uStack_18 = 0x107511d40;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_107511edc();
  pcStack_28 = FUN_107511d60;
  ppuStack_70 = &puStack_30;
  lVar8 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  uVar12 = (long)puVar1 - lVar8;
  plVar10 = (long *)((long)uVar12 >> 3);
  if (plVar10 < param_2) {
    uVar13 = (long)param_2 - (long)plVar10;
    plVar3 = param_1 + 2;
    if ((ulong)(*plVar3 - (long)puVar1 >> 3) < uVar13) {
      if ((ulong)param_2 >> 0x3d != 0) {
        uStack_68 = 0x107511e80;
        plVar10 = param_2;
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x0001075132f0();
        pcStack_78 = FUN_107511eac;
        plStack_90 = param_2;
        plStack_88 = param_1;
        if ((ulong)plVar10 >> 0x3d == 0) {
          lVar8 = (long)plVar10 << 3;
          puStack_80 = (undefined1 *)&ppuStack_70;
          __Znwm(lVar8);
          auVar19._8_8_ = plVar10;
          auVar19._0_8_ = lVar8;
          return auVar19;
        }
        puStack_80 = (undefined1 *)&ppuStack_70;
        func_0x000104bd35f4();
        pcStack_98 = FUN_107511edc;
        ppuStack_a0 = &puStack_80;
        func_0x0001075136b8();
        pcStack_a8 = FUN_107511ee8;
        plVar7 = plVar3 + 2;
        pplVar11 = (long **)plVar3[1];
        if (pplVar11 < (long **)*plVar7) {
          pplVar4 = pplVar11;
          puStack_b0 = (undefined1 *)&ppuStack_a0;
          FUN_107512048(pplVar11,plVar10);
          pplVar11 = pplVar11 + 3;
          plVar3[1] = (long)pplVar11;
        }
        else {
          lVar8 = (long)pplVar11 - *plVar3;
          uVar13 = lVar8 / 0x18 + 1;
          plVar5 = plVar3;
          if (0xaaaaaaaaaaaaaaa < uVar13) {
            puStack_b0 = (undefined1 *)&ppuStack_a0;
            FUN_107512158();
LAB_107512028:
            func_0x000104bd35f4();
            pplVar11 = &plStack_108;
            FUN_107512164();
            func_0x0001075134e0();
            pcStack_118 = FUN_107512048;
            uStack_140 = uVar12;
            lStack_138 = lVar8;
            plStack_130 = plVar5;
            plStack_128 = plVar3;
            ppuStack_120 = &puStack_b0;
            *pplVar11 = (long *)0x0;
            pplVar11[1] = (long *)0x0;
            pplVar11[2] = (long *)0x0;
            plVar3 = (long *)*plVar10;
            uStack_148 = 0;
            lVar8 = plVar10[1] - (long)plVar3;
            pplStack_150 = pplVar11;
            if (lVar8 != 0) {
              FUN_1075120dc(pplVar11,lVar8 >> 3);
              plVar10 = pplVar11[1];
              _memmove(plVar10,plVar3,lVar8);
              pplVar11[1] = (long *)((long)plVar10 + lVar8);
              plVar10 = plVar3;
            }
            uStack_148 = 1;
            func_0x000107512114(&pplStack_150);
            auVar18._8_8_ = plVar10;
            auVar18._0_8_ = pplVar11;
            return auVar18;
          }
          uVar6 = (*plVar7 - *plVar3) / 0x18;
          uVar12 = uVar6 * 2;
          if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
            uVar12 = uVar13;
          }
          if (0x555555555555554 < uVar6) {
            uVar12 = 0xaaaaaaaaaaaaaaa;
          }
          plStack_e8 = plVar7;
          if (uVar12 == 0) {
            plVar7 = (long *)0x0;
            puStack_b0 = (undefined1 *)&ppuStack_a0;
          }
          else {
            puStack_b0 = (undefined1 *)&ppuStack_a0;
            if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_107512028;
            plVar7 = (long *)(uVar12 * 0x18);
            puStack_b0 = (undefined1 *)&ppuStack_a0;
            __Znwm();
          }
          lVar8 = (long)plVar7 + lVar8;
          plStack_108 = plVar7;
          plStack_100 = (long *)lVar8;
          plStack_f8 = (long *)lVar8;
          plStack_f0 = plVar7 + uVar12 * 3;
          FUN_107512048(lVar8,plVar10);
          pplVar11 = (long **)(lVar8 + 0x18);
          plVar5 = (long *)*plVar3;
          lVar8 = lVar8 + ((plVar3[1] - (long)plVar5) / -0x18) * 0x18;
          plVar10 = plVar5;
          _memcpy(lVar8,plVar5);
          *plVar3 = lVar8;
          plVar3[1] = (long)pplVar11;
          plStack_f0 = (long *)plVar3[2];
          plVar3[2] = (long)(plVar7 + uVar12 * 3);
          pplVar4 = &plStack_108;
          plStack_108 = plVar5;
          plStack_100 = plVar5;
          plStack_f8 = plVar5;
          FUN_107512164(pplVar4);
        }
        plVar3[1] = (long)pplVar11;
        auVar17._8_8_ = plVar10;
        auVar17._0_8_ = pplVar4;
        return auVar17;
      }
      uVar6 = *plVar3 - lVar8;
      plVar7 = (long *)((long)uVar6 >> 2);
      if (plVar7 <= param_2) {
        plVar7 = param_2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        plVar7 = (long *)0x1fffffffffffffff;
      }
      puStack_30 = (undefined1 *)&puStack_20;
      FUN_107511eac();
      puVar1 = (undefined8 *)((long)plVar3 + uVar12);
      puVar2 = puVar1;
      for (lVar8 = (long)param_2 * 8 + (long)plVar10 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      param_2 = (long *)*param_1;
      lVar9 = (long)puVar1 - (param_1[1] - (long)param_2);
      _memcpy(lVar9);
      lVar8 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)(puVar1 + uVar13);
      param_1[2] = (long)(plVar3 + (long)plVar7);
      param_1 = (long *)0x0;
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        auVar20._8_8_ = param_2;
        auVar20._0_8_ = lVar8;
        return auVar20;
      }
    }
    else {
      puVar2 = puVar1;
      for (lVar8 = (long)param_2 * 8 + (long)plVar10 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      param_1[1] = (long)(puVar1 + uVar13);
      param_1 = plVar3;
    }
  }
  else if (param_2 < plVar10) {
    param_1[1] = lVar8 + (long)param_2 * 8;
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 107511d60; end: 107511e7f;  */

/* WARNING: Possible PIC construction at 0x000107511e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107511e80) */
/* WARNING: Removing unreachable block (ram,0x000107511e94) */
/* WARNING: Removing unreachable block (ram,0x000107511e8c) */

undefined1  [16] FUN_107511d60(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long **pplStack_130;
  undefined1 uStack_128;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = &stack0xfffffffffffffff0;
  lVar8 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  uVar12 = (long)puVar1 - lVar8;
  plVar10 = (long *)((long)uVar12 >> 3);
  if (plVar10 < param_2) {
    uVar13 = (long)param_2 - (long)plVar10;
    plVar3 = param_1 + 2;
    if ((ulong)(*plVar3 - (long)puVar1 >> 3) < uVar13) {
      if ((ulong)param_2 >> 0x3d != 0) {
        uStack_48 = 0x107511e80;
        plVar10 = param_2;
        func_0x0001075132f0();
        pcStack_58 = FUN_107511eac;
        plStack_70 = param_2;
        plStack_68 = param_1;
        if ((ulong)plVar10 >> 0x3d == 0) {
          lVar8 = (long)plVar10 << 3;
          puStack_60 = (undefined1 *)&puStack_50;
          __Znwm(lVar8);
          auVar17._8_8_ = plVar10;
          auVar17._0_8_ = lVar8;
          return auVar17;
        }
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x000104bd35f4();
        pcStack_78 = FUN_107511edc;
        ppuStack_80 = &puStack_60;
        func_0x0001075136b8();
        pcStack_88 = FUN_107511ee8;
        plVar7 = plVar3 + 2;
        pplVar11 = (long **)plVar3[1];
        if (pplVar11 < (long **)*plVar7) {
          pplVar4 = pplVar11;
          puStack_90 = (undefined1 *)&ppuStack_80;
          FUN_107512048(pplVar11,plVar10);
          pplVar11 = pplVar11 + 3;
          plVar3[1] = (long)pplVar11;
        }
        else {
          lVar8 = (long)pplVar11 - *plVar3;
          uVar13 = lVar8 / 0x18 + 1;
          plVar5 = plVar3;
          if (0xaaaaaaaaaaaaaaa < uVar13) {
            puStack_90 = (undefined1 *)&ppuStack_80;
            FUN_107512158();
LAB_107512028:
            func_0x000104bd35f4();
            pplVar11 = &plStack_e8;
            FUN_107512164();
            func_0x0001075134e0();
            pcStack_f8 = FUN_107512048;
            uStack_120 = uVar12;
            lStack_118 = lVar8;
            plStack_110 = plVar5;
            plStack_108 = plVar3;
            ppuStack_100 = &puStack_90;
            *pplVar11 = (long *)0x0;
            pplVar11[1] = (long *)0x0;
            pplVar11[2] = (long *)0x0;
            plVar3 = (long *)*plVar10;
            uStack_128 = 0;
            lVar8 = plVar10[1] - (long)plVar3;
            pplStack_130 = pplVar11;
            if (lVar8 != 0) {
              FUN_1075120dc(pplVar11,lVar8 >> 3);
              plVar10 = pplVar11[1];
              _memmove(plVar10,plVar3,lVar8);
              pplVar11[1] = (long *)((long)plVar10 + lVar8);
              plVar10 = plVar3;
            }
            uStack_128 = 1;
            func_0x000107512114(&pplStack_130);
            auVar16._8_8_ = plVar10;
            auVar16._0_8_ = pplVar11;
            return auVar16;
          }
          uVar6 = (*plVar7 - *plVar3) / 0x18;
          uVar12 = uVar6 * 2;
          if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
            uVar12 = uVar13;
          }
          if (0x555555555555554 < uVar6) {
            uVar12 = 0xaaaaaaaaaaaaaaa;
          }
          plStack_c8 = plVar7;
          if (uVar12 == 0) {
            plVar7 = (long *)0x0;
            puStack_90 = (undefined1 *)&ppuStack_80;
          }
          else {
            puStack_90 = (undefined1 *)&ppuStack_80;
            if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_107512028;
            plVar7 = (long *)(uVar12 * 0x18);
            puStack_90 = (undefined1 *)&ppuStack_80;
            __Znwm();
          }
          lVar8 = (long)plVar7 + lVar8;
          plStack_e8 = plVar7;
          plStack_e0 = (long *)lVar8;
          plStack_d8 = (long *)lVar8;
          plStack_d0 = plVar7 + uVar12 * 3;
          FUN_107512048(lVar8,plVar10);
          pplVar11 = (long **)(lVar8 + 0x18);
          plVar5 = (long *)*plVar3;
          lVar8 = lVar8 + ((plVar3[1] - (long)plVar5) / -0x18) * 0x18;
          plVar10 = plVar5;
          _memcpy(lVar8,plVar5);
          *plVar3 = lVar8;
          plVar3[1] = (long)pplVar11;
          plStack_d0 = (long *)plVar3[2];
          plVar3[2] = (long)(plVar7 + uVar12 * 3);
          pplVar4 = &plStack_e8;
          plStack_e8 = plVar5;
          plStack_e0 = plVar5;
          plStack_d8 = plVar5;
          FUN_107512164(pplVar4);
        }
        plVar3[1] = (long)pplVar11;
        auVar15._8_8_ = plVar10;
        auVar15._0_8_ = pplVar4;
        return auVar15;
      }
      uVar6 = *plVar3 - lVar8;
      plVar7 = (long *)((long)uVar6 >> 2);
      if (plVar7 <= param_2) {
        plVar7 = param_2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        plVar7 = (long *)0x1fffffffffffffff;
      }
      FUN_107511eac();
      puVar1 = (undefined8 *)((long)plVar3 + uVar12);
      puVar2 = puVar1;
      for (lVar8 = (long)param_2 * 8 + (long)plVar10 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      param_2 = (long *)*param_1;
      lVar9 = (long)puVar1 - (param_1[1] - (long)param_2);
      _memcpy(lVar9);
      lVar8 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)(puVar1 + uVar13);
      param_1[2] = (long)(plVar3 + (long)plVar7);
      param_1 = (long *)0x0;
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        auVar18._8_8_ = param_2;
        auVar18._0_8_ = lVar8;
        return auVar18;
      }
    }
    else {
      puVar2 = puVar1;
      for (lVar8 = (long)param_2 * 8 + (long)plVar10 * -8; lVar8 != 0; lVar8 = lVar8 + -8) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      param_1[1] = (long)(puVar1 + uVar13);
      param_1 = plVar3;
    }
  }
  else if (param_2 < plVar10) {
    param_1[1] = lVar8 + (long)param_2 * 8;
  }
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 107511e80; end: 107511eab;  */

undefined1  [16] FUN_107511e80(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  ulong unaff_x22;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long **pplStack_100;
  undefined1 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 < (ulong)((long)param_2 - (long)param_1 >> 3)) {
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1 + param_3;
    return auVar8;
  }
  FUN_107511edc();
  uStack_18 = 0x107511ea0;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001075132f0();
  pcStack_28 = FUN_107511eac;
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    puStack_30 = (undefined1 *)&puStack_20;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  puStack_30 = (undefined1 *)&puStack_20;
  func_0x000104bd35f4();
  pcStack_48 = FUN_107511edc;
  ppuStack_50 = &puStack_30;
  func_0x0001075136b8();
  pcStack_58 = FUN_107511ee8;
  plVar4 = param_1 + 2;
  pplVar6 = (long **)param_1[1];
  if (pplVar6 < (long **)*plVar4) {
    pplVar5 = pplVar6;
    puStack_60 = (undefined1 *)&ppuStack_50;
    FUN_107512048(pplVar6,param_2);
    pplVar6 = pplVar6 + 3;
    param_1[1] = (long)pplVar6;
  }
  else {
    lVar3 = (long)pplVar6 - *param_1;
    uVar1 = lVar3 / 0x18 + 1;
    plVar7 = param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      puStack_60 = (undefined1 *)&ppuStack_50;
      FUN_107512158();
LAB_107512028:
      func_0x000104bd35f4();
      pplVar6 = &plStack_b8;
      FUN_107512164();
      func_0x0001075134e0();
      pcStack_c8 = FUN_107512048;
      uStack_f0 = unaff_x22;
      lStack_e8 = lVar3;
      plStack_e0 = plVar7;
      plStack_d8 = param_1;
      ppuStack_d0 = &puStack_60;
      *pplVar6 = (long *)0x0;
      pplVar6[1] = (long *)0x0;
      pplVar6[2] = (long *)0x0;
      plVar4 = (long *)*param_2;
      uStack_f8 = 0;
      lVar3 = param_2[1] - (long)plVar4;
      pplStack_100 = pplVar6;
      if (lVar3 != 0) {
        FUN_1075120dc(pplVar6,lVar3 >> 3);
        plVar7 = pplVar6[1];
        _memmove(plVar7,plVar4,lVar3);
        pplVar6[1] = (long *)((long)plVar7 + lVar3);
        param_2 = plVar4;
      }
      uStack_f8 = 1;
      func_0x000107512114(&pplStack_100);
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = pplVar6;
      return auVar10;
    }
    uVar2 = (*plVar4 - *param_1) / 0x18;
    unaff_x22 = uVar2 * 2;
    if (unaff_x22 < uVar1 || unaff_x22 - uVar1 == 0) {
      unaff_x22 = uVar1;
    }
    if (0x555555555555554 < uVar2) {
      unaff_x22 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_98 = plVar4;
    if (unaff_x22 == 0) {
      plVar4 = (long *)0x0;
      puStack_60 = (undefined1 *)&ppuStack_50;
    }
    else {
      puStack_60 = (undefined1 *)&ppuStack_50;
      if (0xaaaaaaaaaaaaaaa < unaff_x22) goto LAB_107512028;
      plVar4 = (long *)(unaff_x22 * 0x18);
      puStack_60 = (undefined1 *)&ppuStack_50;
      __Znwm();
    }
    lVar3 = (long)plVar4 + lVar3;
    plStack_b8 = plVar4;
    plStack_b0 = (long *)lVar3;
    plStack_a8 = (long *)lVar3;
    plStack_a0 = plVar4 + unaff_x22 * 3;
    FUN_107512048(lVar3,param_2);
    pplVar6 = (long **)(lVar3 + 0x18);
    plVar7 = (long *)*param_1;
    lVar3 = lVar3 + ((param_1[1] - (long)plVar7) / -0x18) * 0x18;
    param_2 = plVar7;
    _memcpy(lVar3,plVar7);
    *param_1 = lVar3;
    param_1[1] = (long)pplVar6;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + unaff_x22 * 3);
    pplVar5 = &plStack_b8;
    plStack_b8 = plVar7;
    plStack_b0 = plVar7;
    plStack_a8 = plVar7;
    FUN_107512164(pplVar5);
  }
  param_1[1] = (long)pplVar6;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = pplVar5;
  return auVar9;
}



/* Entry: 107511eac; end: 107511edb;  */

undefined1  [16] FUN_107511eac(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  ulong unaff_x22;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long **pplStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar3;
    return auVar10;
  }
  func_0x000104bd35f4();
  pcStack_28 = FUN_107511edc;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x0001075136b8();
  pcStack_38 = FUN_107511ee8;
  plVar4 = param_1 + 2;
  pplVar6 = (long **)param_1[1];
  if (pplVar6 < (long **)*plVar4) {
    pplVar5 = pplVar6;
    puStack_40 = (undefined1 *)&puStack_30;
    FUN_107512048(pplVar6,param_2);
    pplVar6 = pplVar6 + 3;
    param_1[1] = (long)pplVar6;
  }
  else {
    lVar3 = (long)pplVar6 - *param_1;
    uVar1 = lVar3 / 0x18 + 1;
    plVar7 = param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      puStack_40 = (undefined1 *)&puStack_30;
      FUN_107512158();
LAB_107512028:
      func_0x000104bd35f4();
      pplVar6 = &plStack_98;
      FUN_107512164();
      func_0x0001075134e0();
      pcStack_a8 = FUN_107512048;
      uStack_d0 = unaff_x22;
      lStack_c8 = lVar3;
      plStack_c0 = plVar7;
      plStack_b8 = param_1;
      ppuStack_b0 = &puStack_40;
      *pplVar6 = (long *)0x0;
      pplVar6[1] = (long *)0x0;
      pplVar6[2] = (long *)0x0;
      plVar4 = (long *)*param_2;
      uStack_d8 = 0;
      lVar3 = param_2[1] - (long)plVar4;
      pplStack_e0 = pplVar6;
      if (lVar3 != 0) {
        FUN_1075120dc(pplVar6,lVar3 >> 3);
        plVar7 = pplVar6[1];
        _memmove(plVar7,plVar4,lVar3);
        pplVar6[1] = (long *)((long)plVar7 + lVar3);
        param_2 = plVar4;
      }
      uStack_d8 = 1;
      func_0x000107512114(&pplStack_e0);
      auVar9._8_8_ = param_2;
      auVar9._0_8_ = pplVar6;
      return auVar9;
    }
    uVar2 = (*plVar4 - *param_1) / 0x18;
    unaff_x22 = uVar2 * 2;
    if (unaff_x22 < uVar1 || unaff_x22 - uVar1 == 0) {
      unaff_x22 = uVar1;
    }
    if (0x555555555555554 < uVar2) {
      unaff_x22 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_78 = plVar4;
    if (unaff_x22 == 0) {
      plVar4 = (long *)0x0;
      puStack_40 = (undefined1 *)&puStack_30;
    }
    else {
      puStack_40 = (undefined1 *)&puStack_30;
      if (0xaaaaaaaaaaaaaaa < unaff_x22) goto LAB_107512028;
      plVar4 = (long *)(unaff_x22 * 0x18);
      puStack_40 = (undefined1 *)&puStack_30;
      __Znwm();
    }
    lVar3 = (long)plVar4 + lVar3;
    plStack_98 = plVar4;
    plStack_90 = (long *)lVar3;
    plStack_88 = (long *)lVar3;
    plStack_80 = plVar4 + unaff_x22 * 3;
    FUN_107512048(lVar3,param_2);
    pplVar6 = (long **)(lVar3 + 0x18);
    plVar7 = (long *)*param_1;
    lVar3 = lVar3 + ((param_1[1] - (long)plVar7) / -0x18) * 0x18;
    param_2 = plVar7;
    _memcpy(lVar3,plVar7);
    *param_1 = lVar3;
    param_1[1] = (long)pplVar6;
    plStack_80 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + unaff_x22 * 3);
    pplVar5 = &plStack_98;
    plStack_98 = plVar7;
    plStack_90 = plVar7;
    plStack_88 = plVar7;
    FUN_107512164(pplVar5);
  }
  param_1[1] = (long)pplVar6;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = pplVar5;
  return auVar8;
}



/* Entry: 107511edc; end: 107511ee7;  */

long * FUN_107511edc(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong unaff_x22;
  long lVar7;
  long *plStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  func_0x0001075136b8();
  pcStack_18 = FUN_107511ee8;
  plVar4 = param_1 + 2;
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)*plVar4) {
    plVar4 = plVar5;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_107512048(plVar5,param_2);
    plVar5 = plVar5 + 3;
    param_1[1] = (long)plVar5;
  }
  else {
    lVar6 = (long)plVar5 - *param_1;
    uVar1 = lVar6 / 0x18 + 1;
    plVar5 = param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_107512158();
LAB_107512028:
      func_0x000104bd35f4();
      plVar4 = &lStack_78;
      FUN_107512164();
      func_0x0001075134e0();
      pcStack_88 = FUN_107512048;
      uStack_b0 = unaff_x22;
      lStack_a8 = lVar6;
      plStack_a0 = plVar5;
      plStack_98 = param_1;
      ppuStack_90 = &puStack_20;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar6 = *param_2;
      uStack_b8 = 0;
      lVar3 = param_2[1] - lVar6;
      plStack_c0 = plVar4;
      if (lVar3 != 0) {
        FUN_1075120dc(plVar4,lVar3 >> 3);
        lVar7 = plVar4[1];
        _memmove(lVar7,lVar6,lVar3);
        plVar4[1] = lVar7 + lVar3;
      }
      uStack_b8 = 1;
      func_0x000107512114(&plStack_c0);
      return plVar4;
    }
    uVar2 = (*plVar4 - *param_1) / 0x18;
    unaff_x22 = uVar2 * 2;
    if (unaff_x22 < uVar1 || unaff_x22 - uVar1 == 0) {
      unaff_x22 = uVar1;
    }
    if (0x555555555555554 < uVar2) {
      unaff_x22 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_58 = plVar4;
    if (unaff_x22 == 0) {
      lVar3 = 0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      puStack_20 = &stack0xfffffffffffffff0;
      if (0xaaaaaaaaaaaaaaa < unaff_x22) goto LAB_107512028;
      lVar3 = unaff_x22 * 0x18;
      puStack_20 = &stack0xfffffffffffffff0;
      __Znwm();
    }
    lVar6 = lVar3 + lVar6;
    lVar7 = lVar3 + unaff_x22 * 0x18;
    lStack_78 = lVar3;
    lStack_70 = lVar6;
    lStack_68 = lVar6;
    lStack_60 = lVar7;
    FUN_107512048(lVar6,param_2);
    plVar5 = (long *)(lVar6 + 0x18);
    lVar3 = *param_1;
    lVar6 = lVar6 + ((param_1[1] - lVar3) / -0x18) * 0x18;
    _memcpy(lVar6,lVar3);
    *param_1 = lVar6;
    param_1[1] = (long)plVar5;
    lStack_60 = param_1[2];
    param_1[2] = lVar7;
    plVar4 = &lStack_78;
    lStack_78 = lVar3;
    lStack_70 = lVar3;
    lStack_68 = lVar3;
    FUN_107512164(plVar4);
  }
  param_1[1] = (long)plVar5;
  return plVar4;
}



/* Entry: 107511ee8; end: 107512047;  */

long * FUN_107511ee8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong unaff_x22;
  long lVar7;
  long *plStack_b0;
  undefined1 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = param_1 + 2;
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)*plVar4) {
    plVar4 = plVar5;
    FUN_107512048(plVar5,param_2);
    plVar5 = plVar5 + 3;
    param_1[1] = (long)plVar5;
  }
  else {
    lVar6 = (long)plVar5 - *param_1;
    uVar1 = lVar6 / 0x18 + 1;
    plVar5 = param_1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_107512158();
LAB_107512028:
      func_0x000104bd35f4();
      plVar4 = &lStack_68;
      FUN_107512164();
      func_0x0001075134e0();
      pcStack_78 = FUN_107512048;
      uStack_a0 = unaff_x22;
      lStack_98 = lVar6;
      plStack_90 = plVar5;
      plStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar6 = *param_2;
      uStack_a8 = 0;
      lVar3 = param_2[1] - lVar6;
      plStack_b0 = plVar4;
      if (lVar3 != 0) {
        FUN_1075120dc(plVar4,lVar3 >> 3);
        lVar7 = plVar4[1];
        _memmove(lVar7,lVar6,lVar3);
        plVar4[1] = lVar7 + lVar3;
      }
      uStack_a8 = 1;
      func_0x000107512114(&plStack_b0);
      return plVar4;
    }
    uVar2 = (*plVar4 - *param_1) / 0x18;
    unaff_x22 = uVar2 * 2;
    if (unaff_x22 < uVar1 || unaff_x22 - uVar1 == 0) {
      unaff_x22 = uVar1;
    }
    if (0x555555555555554 < uVar2) {
      unaff_x22 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = plVar4;
    if (unaff_x22 == 0) {
      lVar3 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < unaff_x22) goto LAB_107512028;
      lVar3 = unaff_x22 * 0x18;
      __Znwm();
    }
    lVar6 = lVar3 + lVar6;
    lVar7 = lVar3 + unaff_x22 * 0x18;
    lStack_68 = lVar3;
    lStack_60 = lVar6;
    lStack_58 = lVar6;
    lStack_50 = lVar7;
    FUN_107512048(lVar6,param_2);
    plVar5 = (long *)(lVar6 + 0x18);
    lVar3 = *param_1;
    lVar6 = lVar6 + ((param_1[1] - lVar3) / -0x18) * 0x18;
    _memcpy(lVar6,lVar3);
    *param_1 = lVar6;
    param_1[1] = (long)plVar5;
    lStack_50 = param_1[2];
    param_1[2] = lVar7;
    plVar4 = &lStack_68;
    lStack_68 = lVar3;
    lStack_60 = lVar3;
    lStack_58 = lVar3;
    FUN_107512164(plVar4);
  }
  param_1[1] = (long)plVar5;
  return plVar4;
}



/* Entry: 107512048; end: 1075120db;  */

undefined8 * FUN_107512048(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  uStack_38 = 0;
  lVar2 = param_2[1] - lVar1;
  puStack_40 = param_1;
  if (lVar2 != 0) {
    FUN_1075120dc(param_1,lVar2 >> 3);
    lVar3 = param_1[1];
    _memmove(lVar3,lVar1,lVar2);
    param_1[1] = lVar3 + lVar2;
  }
  uStack_38 = 1;
  func_0x000107512114(&puStack_40);
  return param_1;
}



/* Entry: 1075120dc; end: 10751213f;  */

long * FUN_1075120dc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_107511eac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return plVar1;
  }
  func_0x000107511ea0();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_107512140(*param_1);
  }
  return param_1;
}



/* Entry: 107512140; end: 107512157;  */

void FUN_107512140(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107512158; end: 107512163;  */

long * FUN_107512158(long *param_1)

{
  long lVar1;
  
  func_0x0001075132f0();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    FUN_107512140();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107512164; end: 1075121ab;  */

long * FUN_107512164(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    FUN_107512140();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1075121ac; end: 1075121b7;  */

long * FUN_1075121ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001075136b8();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_107512140(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1075121b8; end: 10751220f;  */

long * FUN_1075121b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_107512140(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 107512210; end: 10751227b;  */

void FUN_107512210(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107512ff0();
  func_0x0001075134b8();
  if ((extraout_x9 == 0) && (func_0x000107513504(), !(bool)in_ZR)) {
    func_0x000107513484();
    if (((bool)in_CY) && (func_0x000107513130(), (bool)in_CY)) {
      func_0x0001075131ec();
    }
    else {
      func_0x00010751329c();
      FUN_10751227c();
    }
    func_0x0001075131c8();
  }
  func_0x000107512f64();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107513780();
  func_0x000107513144();
  FUN_107324d80();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_1075122e4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10751227c; end: 1075122e3;  */

void FUN_10751227c(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_107324d80();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_1075122e4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1075122e4; end: 107512303;  */

long FUN_1075122e4(long param_1)

{
  func_0x0001075133fc();
  func_0x000107513354();
  func_0x00010725af58(param_1 + 0x38);
  func_0x00010748020c();
  return param_1;
}



/* Entry: 107512304; end: 107512313;  */

long FUN_107512304(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107512314; end: 10751237f;  */

void FUN_107512314(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107512ff0();
  func_0x0001075134b8();
  if ((extraout_x9 == 0) && (func_0x000107513504(), !(bool)in_ZR)) {
    func_0x000107513484();
    if (((bool)in_CY) && (func_0x000107513130(), (bool)in_CY)) {
      func_0x0001075131ec();
    }
    else {
      func_0x00010751329c();
      FUN_107512380();
    }
    func_0x0001075131c8();
  }
  func_0x000107512f64();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_1075123e8();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512380; end: 1075123e7;  */

void FUN_107512380(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_1075123e8();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1075123e8; end: 107512413;  */

long FUN_1075123e8(long param_1)

{
  long unaff_x19;
  
  func_0x0001075133fc();
  FUN_107512414(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x0001074febf0();
  func_0x0001074f7234();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 107512414; end: 107512427;  */

void FUN_107512414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 107512428; end: 10751245f;  */

void FUN_107512428(long param_1,long param_2)

{
  func_0x00010751363c();
  func_0x000104c32db4(param_1 + 0x10,param_2 + 0x10);
  return;
}



/* Entry: 107512460; end: 1075124e7;  */

void FUN_107512460(ulong param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  int extraout_w10;
  long unaff_x25;
  
  func_0x000107513534();
  func_0x0001075130dc();
  func_0x000107513158();
  do {
    func_0x0001075132fc();
    while (unaff_x25 != 0) {
      func_0x000107513110();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_1075124b0;
      }
      func_0x0001075135d4();
    }
    func_0x000107513574();
  } while ((extraout_x8 & 1) == 0);
  func_0x0001075127a4();
  func_0x0001075131d4();
  func_0x000107513404();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107513100();
    } while (extraout_w10 != 0);
  }
  uVar1 = 1;
LAB_1075124b0:
  func_0x000107513264(uVar1);
  return;
}



/* Entry: 1075124e8; end: 107512593;  */

void FUN_1075124e8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long unaff_x19;
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  func_0x000107513558();
  if ((bool)in_CY) {
    func_0x000107513624();
    FUN_107512594();
    func_0x0001075134e8();
    FUN_1075125c8();
    func_0x0001075133ec(uStack_48);
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107513100();
      } while (extraout_w10 != 0);
    }
    func_0x000107513510();
    FUN_10751263c();
    func_0x00010751337c();
    func_0x00010751273c();
  }
  else {
    func_0x0001075133ec();
    if (extraout_x9 != 0) {
      plVar1 = (long *)(extraout_x9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_70 = extraout_x8 + 0x10;
    *(long *)(unaff_x19 + 8) = uStack_70;
  }
  *(long *)(unaff_x19 + 8) = uStack_70;
  return;
}



/* Entry: 107512594; end: 1075125c7;  */

/* WARNING: Possible PIC construction at 0x0001075125b8: Changing call to branch */

undefined8 FUN_107512594(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107513758();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x0001075132f0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107512600(param_4);
  }
  func_0x00010751360c();
  return param_4;
}



/* Entry: 1075125c8; end: 10751261f;  */

void FUN_1075125c8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107512600(param_4);
  }
  func_0x00010751360c();
  return;
}



/* Entry: 107512620; end: 10751263b;  */

void FUN_107512620(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107513434();
  lVar1 = extraout_x9;
  while (lVar1 != param_3) {
    func_0x0001075135f4();
    lVar1 = extraout_x9_00;
  }
  uStack_48 = 1;
  FUN_10751268c();
  FUN_1075126bc(auStack_60);
  return;
}



/* Entry: 10751263c; end: 10751268b;  */

void FUN_10751263c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x000107513434();
  lVar1 = extraout_x9;
  while (lVar1 != param_3) {
    func_0x0001075135f4();
    lVar1 = extraout_x9_00;
  }
  uStack_38 = 1;
  FUN_10751268c();
  FUN_1075126bc(auStack_50);
  return;
}



/* Entry: 10751268c; end: 1075126bb;  */

void FUN_10751268c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_1074f7454();
  }
  return;
}



/* Entry: 1075126bc; end: 1075126eb;  */

long FUN_1075126bc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1075126ec(param_1);
  }
  return param_1;
}



/* Entry: 1075126ec; end: 10751270b;  */

void FUN_1075126ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_1074f7454();
  }
  return;
}



/* Entry: 10751270c; end: 107512767;  */

void FUN_10751270c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    FUN_1074f7454();
  }
  return;
}



/* Entry: 107512768; end: 10751276f;  */

void FUN_107512768(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010751363c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1074f7454();
  }
  return;
}



/* Entry: 107512770; end: 10751280f;  */

void FUN_107512770(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010751363c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1074f7454();
  }
  return;
}



/* Entry: 107512810; end: 107512877;  */

void FUN_107512810(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_107324d80();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_107512878();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512878; end: 107512897;  */

undefined8 FUN_107512878(void)

{
  undefined8 unaff_x19;
  
  func_0x0001075133fc();
  func_0x000107513354();
  func_0x0001074febf0();
  FUN_1074f7454();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 107512898; end: 1075128a7;  */

long FUN_107512898(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1075128a8; end: 107512913;  */

void FUN_1075128a8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107512ff0();
  func_0x0001075134b8();
  if ((extraout_x9 == 0) && (func_0x000107513504(), !(bool)in_ZR)) {
    func_0x000107513484();
    if (((bool)in_CY) && (func_0x000107513130(), (bool)in_CY)) {
      func_0x0001075131ec();
    }
    else {
      func_0x00010751329c();
      FUN_107512914();
    }
    func_0x0001075131c8();
  }
  func_0x000107512f64();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_10751297c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512914; end: 10751297b;  */

void FUN_107512914(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_10751297c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10751297c; end: 1075129a7;  */

long FUN_10751297c(long param_1)

{
  long unaff_x19;
  
  func_0x0001075133fc();
  FUN_1075129a8(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x0001074febf0();
  func_0x0001074f6f7c();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 1075129a8; end: 1075129bb;  */

void FUN_1075129a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1075129bc; end: 107512a07;  */

void FUN_1075129bc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010751363c();
  lVar1 = *param_1 + 8;
  func_0x000104c32db4(lVar1,*param_2 + 8);
  if ((int)lVar1 != 0) {
    func_0x0001075136a4(*unaff_x20);
    func_0x0001075136a4(*unaff_x19);
  }
  return;
}



/* Entry: 107512a08; end: 107512a8f;  */

void FUN_107512a08(ulong param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  int extraout_w10;
  long unaff_x25;
  
  func_0x000107513534();
  func_0x0001075130dc();
  func_0x000107513158();
  do {
    func_0x0001075132fc();
    while (unaff_x25 != 0) {
      func_0x000107513110();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_107512a58;
      }
      func_0x0001075135d4();
    }
    func_0x000107513574();
  } while ((extraout_x8 & 1) == 0);
  func_0x000107512d4c();
  func_0x0001075131d4();
  func_0x000107513404();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107513100();
    } while (extraout_w10 != 0);
  }
  uVar1 = 1;
LAB_107512a58:
  func_0x000107513264(uVar1);
  return;
}



/* Entry: 107512a90; end: 107512b3b;  */

void FUN_107512a90(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long unaff_x19;
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  func_0x000107513558();
  if ((bool)in_CY) {
    func_0x000107513624();
    FUN_107512b3c();
    func_0x0001075134e8();
    FUN_107512b70();
    func_0x0001075133ec(uStack_48);
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107513100();
      } while (extraout_w10 != 0);
    }
    func_0x000107513510();
    FUN_107512be4();
    func_0x00010751337c();
    func_0x000107512ce4();
  }
  else {
    func_0x0001075133ec();
    if (extraout_x9 != 0) {
      plVar1 = (long *)(extraout_x9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_70 = extraout_x8 + 0x10;
    *(long *)(unaff_x19 + 8) = uStack_70;
  }
  *(long *)(unaff_x19 + 8) = uStack_70;
  return;
}



/* Entry: 107512b3c; end: 107512b6f;  */

/* WARNING: Possible PIC construction at 0x000107512b60: Changing call to branch */

undefined8 FUN_107512b3c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107513758();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x0001075132f0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107512ba8(param_4);
  }
  func_0x00010751360c();
  return param_4;
}



/* Entry: 107512b70; end: 107512bc7;  */

void FUN_107512b70(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000107512ba8(param_4);
  }
  func_0x00010751360c();
  return;
}



/* Entry: 107512bc8; end: 107512be3;  */

void FUN_107512bc8(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107513434();
  lVar1 = extraout_x9;
  while (lVar1 != param_3) {
    func_0x0001075135f4();
    lVar1 = extraout_x9_00;
  }
  uStack_48 = 1;
  FUN_107512c34();
  FUN_107512c64(auStack_60);
  return;
}



/* Entry: 107512be4; end: 107512c33;  */

void FUN_107512be4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x000107513434();
  lVar1 = extraout_x9;
  while (lVar1 != param_3) {
    func_0x0001075135f4();
    lVar1 = extraout_x9_00;
  }
  uStack_38 = 1;
  FUN_107512c34();
  FUN_107512c64(auStack_50);
  return;
}



/* Entry: 107512c34; end: 107512c63;  */

void FUN_107512c34(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x0001073ad4c4();
  }
  return;
}



/* Entry: 107512c64; end: 107512c93;  */

long FUN_107512c64(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107512c94(param_1);
  }
  return param_1;
}



/* Entry: 107512c94; end: 107512cb3;  */

void FUN_107512c94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073ad4c4();
  }
  return;
}



/* Entry: 107512cb4; end: 107512d0f;  */

void FUN_107512cb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x0001073ad4c4();
  }
  return;
}



/* Entry: 107512d10; end: 107512d17;  */

void FUN_107512d10(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010751363c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001073ad4c4();
  }
  return;
}



/* Entry: 107512d18; end: 107512db7;  */

void FUN_107512d18(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010751363c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001073ad4c4();
  }
  return;
}



/* Entry: 107512db8; end: 107512e1f;  */

void FUN_107512db8(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_107324d80();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_107512e20();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512e20; end: 107512e3f;  */

undefined8 FUN_107512e20(void)

{
  undefined8 unaff_x19;
  
  func_0x0001075133fc();
  func_0x000107513354();
  func_0x0001074febf0();
  func_0x0001073ad4c4();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 107512e40; end: 107512e4f;  */

long FUN_107512e40(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107512e50; end: 107512ebb;  */

void FUN_107512e50(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x9;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107512ff0();
  func_0x0001075134b8();
  if ((extraout_x9 == 0) && (func_0x000107513504(), !(bool)in_ZR)) {
    func_0x000107513484();
    if (((bool)in_CY) && (func_0x000107513130(), (bool)in_CY)) {
      func_0x0001075131ec();
    }
    else {
      func_0x00010751329c();
      FUN_107512ebc();
    }
    func_0x0001075131c8();
  }
  func_0x000107512f64();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_107512f24();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512ebc; end: 107512f23;  */

void FUN_107512ebc(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107513780();
  func_0x000107513144();
  FUN_10732f6dc();
  func_0x0001075134ac();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001075133b4();
      func_0x000107513084();
      func_0x000107512fc0();
      FUN_107512f24();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107512f24; end: 107512f4f;  */

long FUN_107512f24(long param_1)

{
  long unaff_x19;
  
  func_0x0001075133fc();
  func_0x000107512f50(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x0001074febf0();
  func_0x0001074f70d8();
  func_0x0001074fea00();
  return unaff_x19;
}



/* Entry: 107512f50; end: 107513793;  */

void FUN_107512f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 107513794; end: 107513833;  */

long FUN_107513794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  FUN_107516ee4(lVar1 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x50) = (undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 **)(param_1 + 0x68) = (undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(long *)(param_1 + 0x80) = param_1 + 0x80;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x88) = param_1 + 0x80;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0xa8) = param_4[1];
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 **)(param_1 + 0xb0) = (undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined ***)(param_1 + 200) = &PTR_PTR_1131ad8c0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return param_1;
}



/* Entry: 107513834; end: 107513907;  */

long FUN_107513834(long param_1)

{
  FUN_107517004(param_1 + 0xb0);
  FUN_1074f9d98(param_1 + 0xa0);
  FUN_107516198(param_1 + 0x68);
  func_0x000107516ec0(param_1 + 0x50);
  func_0x00010750bd38(param_1 + 0x40);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107513908; end: 107514617;  */

void FUN_107513908(undefined1 *param_1,ulong *****param_2,undefined8 *param_3,ulong param_4,
                  int param_5,long param_6,long param_7,ulong param_8,undefined8 *param_9,
                  ulong *****param_10,long param_11,undefined8 param_12)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ulong ***pppuVar8;
  ulong ***pppuVar9;
  long lVar10;
  undefined1 in_ZR;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  ulong ****ppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *****pppppuVar18;
  ulong *****pppppuVar19;
  ulong ****ppppuVar20;
  uint uVar21;
  undefined8 extraout_x8;
  ulong uVar22;
  ulong ****ppppuVar23;
  ulong ****ppppuVar24;
  ulong *****pppppuVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  ulong *****unaff_x21;
  long lVar29;
  ulong ****unaff_x23;
  int iVar30;
  ulong ****unaff_x24;
  ulong ****unaff_x25;
  ulong *****unaff_x26;
  ulong *****unaff_x27;
  uint uVar31;
  float fVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  double dVar38;
  float fVar39;
  undefined8 uVar40;
  ulong ***pppuStack_610;
  ulong ***pppuStack_608;
  ulong ***pppuStack_600;
  ulong ***pppuStack_5f8;
  ulong ***pppuStack_5f0;
  ulong ***pppuStack_5e8;
  ulong ***pppuStack_5e0;
  ulong ***pppuStack_5d8;
  ulong ***pppuStack_5d0;
  ulong ***pppuStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5b0;
  ulong ****ppppuStack_5a8;
  ulong ****ppppuStack_5a0;
  ulong ***pppuStack_598;
  ulong ***pppuStack_590;
  ulong ***pppuStack_588;
  undefined8 *puStack_580;
  ulong ****ppppuStack_578;
  ulong ****ppppuStack_570;
  ulong ****ppppuStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  int iStack_54c;
  uint uStack_548;
  uint uStack_544;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  long lStack_530;
  undefined8 *puStack_528;
  uint uStack_51c;
  ulong ****ppppuStack_518;
  long lStack_510;
  uint uStack_504;
  ulong ****ppppuStack_500;
  ulong ****ppppuStack_4f8;
  uint uStack_4ec;
  uint uStack_4e8;
  uint uStack_4e4;
  ulong ***pppuStack_4e0;
  ulong ****ppppuStack_4d8;
  undefined1 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined1 uStack_4b8;
  undefined1 uStack_4b7;
  undefined2 uStack_4b6;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  ulong ****ppppuStack_498;
  ulong ***pppuStack_490;
  ulong ***pppuStack_488;
  ulong ***pppuStack_480;
  ulong ***pppuStack_478;
  undefined4 uStack_470;
  char cStack_46c;
  ulong ***pppuStack_460;
  undefined8 *puStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  undefined8 *puStack_440;
  ulong **ppuStack_438;
  ulong auStack_430 [2];
  ulong ****ppppuStack_420;
  ulong ****ppppuStack_418;
  undefined8 uStack_410;
  ulong ****ppppuStack_408;
  ulong ****ppppuStack_400;
  long lStack_3f8;
  undefined1 uStack_3e9;
  undefined8 uStack_3e8;
  ulong ****ppppuStack_3e0;
  undefined1 uStack_3d1;
  ulong ****ppppuStack_3d0;
  ulong ****ppppuStack_3c8;
  undefined1 uStack_3c0;
  undefined1 uStack_3bf;
  undefined2 uStack_3be;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  ulong ****ppppuStack_3b0;
  ulong ****ppppuStack_3a8;
  undefined8 uStack_3a0;
  ulong ***pppuStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  ulong uStack_2b8;
  ulong ***pppuStack_210;
  ulong ***pppuStack_208;
  ulong ****ppppuStack_200;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  ulong ***pppuStack_1d0;
  ulong ***pppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_80;
  
  puStack_538 = param_1;
  lStack_530 = param_7;
  puStack_528 = param_3;
  func_0x000107517f5c();
  uStack_3d1 = (undefined1)param_5;
  lStack_510 = param_6;
  uStack_80 = extraout_x8;
  if (param_5 == 0) {
    if ((param_4 & 1) != 0) goto LAB_10751398c;
    pppppuVar19 = (ulong *****)param_2[10];
    while (in_ZR = pppppuVar19 == param_2 + 0xb, !(bool)in_ZR) {
      func_0x000107518284();
      func_0x00010751820c();
      ppppuStack_3e0 = (ulong ****)*param_9;
      *param_9 = 0;
      func_0x00010784ad74(param_2 + 0xd,param_9 + -2,&ppppuStack_3e0);
      pppppuVar19 = (ulong *****)ppppuStack_3e0;
      ppppuStack_3e0 = (ulong ****)0x0;
      if (pppppuVar19 != (ulong *****)0x0) {
        func_0x000107517f0c();
      }
      func_0x000107518054();
    }
  }
  else {
    func_0x00010784aef0(param_2 + 0xd);
    pppppuVar19 = unaff_x21;
    if ((param_4 & 1) != 0) {
LAB_10751398c:
      lVar29 = lStack_510;
      iVar30 = (int)*(undefined8 *)(lStack_510 + 8);
      FUN_107418388();
      if (iVar30 != 0) {
        func_0x00010741657c(*(undefined8 *)(lVar29 + 8),0);
        func_0x000107518200();
      }
      lVar10 = lStack_530;
      bVar3 = *(byte *)(lStack_530 + 8);
      unaff_x23 = (ulong ****)(ulong)bVar3;
      dVar33 = (double)_log2(*(undefined8 *)(*(long *)(lVar29 + 8) + 0x78));
      dVar38 = (double)NEON_ucvtf((ulong)*(byte *)(lVar10 + 0x50));
      uStack_548 = (uint)param_9;
      func_0x00010787c690((double)((int)(dVar33 - dVar38) &
                                  ((int)(dVar33 - dVar38) >> 0x1f ^ 0xffffffffU)),unaff_x23,param_9)
      ;
      uVar4 = *(ushort *)(lVar10 + 0x48);
      uStack_51c = (uint)*(ushort *)(lVar10 + 0x4a);
      uStack_3e8 = *(undefined8 *)(lVar10 + 0x58);
      uStack_3e9 = *(undefined1 *)(lVar10 + 0x60);
      ppppuStack_408 = (ulong ****)0x0;
      ppppuStack_400 = (ulong ****)0x0;
      lStack_3f8 = 0;
      ppppuStack_420 = (ulong ****)0x0;
      ppppuStack_418 = (ulong ****)0x0;
      uStack_410 = 0;
      ppppuVar14 = unaff_x23;
      func_0x00010785f1f4();
      pppuStack_210 = (ulong ***)((ulong)pppuStack_210 & 0xffffffffffffff00);
      ppppuVar14 = ppppuVar14 + 0x14e;
      pppppuVar19 = (ulong *****)&pppuStack_210;
      func_0x00010724e2c8();
      uVar31 = (uint)param_10;
      uVar6 = uVar31 >> 8 & 0xff;
      param_9 = (undefined8 *)(ulong)uVar6;
      uStack_4e4 = uVar31 & 0xff;
      uStack_4ec = (uint)unaff_x23;
      iVar30 = (int)ppppuVar14;
      iStack_54c = iVar30;
      if ((int)uStack_4ec < (int)(uVar31 & 0xff)) {
        uStack_544 = 0;
        unaff_x24 = unaff_x23;
      }
      else {
        uVar1 = uStack_4ec;
        if (uVar6 <= uStack_4ec) {
          uVar1 = uVar6;
        }
        uVar21 = uVar1;
        if (bVar3 != 1) {
          uVar21 = uStack_4ec;
        }
        unaff_x23 = (ulong ****)(ulong)uVar21;
        if ((bVar3 != 2 && *(int *)(lStack_510 + 0x20) == 0) && ((ulong)ppppuVar14 & 1) == 0) {
          uVar5 = (uint)*(byte *)(lStack_510 + 0x48);
          if ((uVar4 & 0x100) != 0) {
            uVar5 = (uint)uVar4;
          }
          if ((uVar5 & 0xff) != 0) {
            uVar5 = uVar21 - (uVar5 & 0xff);
            if ((int)uVar5 <= (int)uStack_4e4) {
              uVar5 = uStack_4e4;
            }
            if (uVar5 < uVar1) {
              uStack_3a0 = (ulong ****)((ulong)uStack_3a0 & 0xffffffffffff0000);
              func_0x00010787c6e8(&pppuStack_210,*(undefined8 *)(lStack_510 + 8),uVar5,&uStack_3a0);
              func_0x000107516218(&ppppuStack_420,&pppuStack_210);
              func_0x0001072ba1a8(&pppuStack_210);
            }
          }
        }
        if (iVar30 == 0) {
          uStack_3a0._0_2_ = CONCAT11(1,(char)uVar21);
          func_0x00010787c6e8(&pppuStack_210,*(undefined8 *)(lStack_510 + 8),uVar1,&uStack_3a0);
        }
        else {
          uStack_3a0 = (ulong ****)CONCAT44(uStack_3a0._4_4_,0x100);
          uStack_3a0 = (ulong ****)CONCAT71(uStack_3a0._1_7_,(char)uVar21);
          lVar29 = *(long *)(lStack_510 + 8);
          dVar33 = (double)FUN_1074163dc(lVar29);
          dVar38 = *(double *)(lVar29 + 0x40) * 57.29577951308232;
          bVar11 = false;
          bVar12 = false;
          if (30.0 < dVar33 * 57.29577951308232) {
            bVar11 = false;
            bVar12 = true;
            if (!NAN(dVar38)) {
              bVar11 = dVar38 == 30.0;
              bVar12 = 30.0 <= dVar38;
            }
          }
          uVar21 = uVar1;
          if (bVar12 && !bVar11) {
            dVar33 = (double)NEON_fminnm((dVar33 * 57.29577951308232 + -30.0) / (dVar38 + -30.0),
                                         0x3ff0000000000000);
            if (dVar33 <= 0.0) {
              dVar33 = 0.0;
            }
            uVar21 = uVar1 - (int)(dVar33 + dVar33);
            if ((int)uVar21 <= (int)uStack_4e4) {
              uVar21 = uStack_4e4;
            }
          }
          uStack_3a0 = (ulong ****)
                       (CONCAT44(uStack_3a0._4_4_,CONCAT22((short)uVar21,(undefined2)uStack_3a0)) &
                        0xffffffff00ffffff | 0x1000000);
          pppuStack_398 = (ulong ***)0x4000000000000000;
          func_0x00010787c9c4(&pppuStack_210,*(undefined8 *)(lStack_510 + 8),uVar1,&uStack_3a0);
        }
        func_0x000107516218(&ppppuStack_408,&pppuStack_210);
        func_0x0001072ba1a8(&pppuStack_210);
        func_0x0001077512dc(&uStack_3a0);
        pppppuVar19 = (ulong *****)&uStack_3a0;
        uStack_544 = uVar1;
        uStack_2b8 = param_8;
        func_0x000107751334(&pppuStack_210);
        func_0x000107267da8(&uStack_3a0);
        plVar2 = (long *)puStack_528[1];
        plVar26 = (long *)*puStack_528;
        dVar33 = 0.0;
        while (dVar38 = dVar33, plVar26 != plVar2) {
          plVar27 = plVar26 + 2;
          pppppuVar19 = (ulong *****)&pppuStack_210;
          dVar33 = (double)(**(code **)(**(long **)(*plVar26 + 8) + 0x50))();
          plVar26 = plVar27;
          if (dVar33 <= dVar38) {
            dVar33 = dVar38;
          }
        }
        unaff_x24 = (ulong ****)(ulong)uStack_4ec;
        if (0.0 < dVar38) {
          func_0x00010787ce40(&uStack_3a0,dVar38,&ppppuStack_408,*(undefined8 *)(lStack_510 + 8),
                              uStack_544);
          pppppuVar19 = (ulong *****)&uStack_3a0;
          func_0x000107516218(&ppppuStack_408);
          func_0x0001072ba1a8(&uStack_3a0);
        }
        if ((bVar3 != 1 && *(int *)(lStack_510 + 0x20) == 2) &&
           (0x10 < (ulong)((long)ppppuStack_400 - (long)ppppuStack_408))) {
          uStack_3a0 = (ulong ****)*ppppuStack_408;
          pppuStack_398 = ppppuStack_408[1];
          pppppuVar16 = (ulong *****)ppppuStack_408;
          if ((ulong)(lStack_3f8 - (long)ppppuStack_408) < 0x10) {
            func_0x00010751624c(&ppppuStack_408);
            pppppuVar19 = (ulong *****)(lStack_3f8 - (long)ppppuStack_408 >> 3);
            if (pppppuVar19 < (ulong *****)0x2) {
              pppppuVar19 = (ulong *****)0x1;
            }
            if (0x7fffffffffffffef < (ulong)(lStack_3f8 - (long)ppppuStack_408)) {
              pppppuVar19 = (ulong *****)0xfffffffffffffff;
            }
            func_0x000107516278(&ppppuStack_408);
            ppppuStack_400[1] = pppuStack_398;
            *ppppuStack_400 = (ulong ***)uStack_3a0;
            pppppuVar16 = (ulong *****)ppppuStack_400;
          }
          ppppuStack_400 = (ulong ****)(pppppuVar16 + 2);
        }
        func_0x000107267da8(&pppuStack_210);
      }
      pppuStack_460 = &ppuStack_438;
      ppuStack_438 = (ulong **)auStack_430;
      auStack_430[0] = 0;
      auStack_430[1] = 0;
      puStack_458 = &uStack_3e8;
      puStack_450 = &uStack_3e9;
      puStack_448 = &uStack_3d1;
      puStack_440 = puStack_528;
      pppuStack_480 = (ulong ***)((ulong)pppuStack_480 & 0xffffffffffffff00);
      cStack_46c = '\0';
      if (*(char *)(param_11 + 0x28) == '\x01') {
        if ((int)(uint)unaff_x23 <= (int)uVar6) {
          uVar6 = (uint)unaff_x23;
        }
        pppppuVar19 = (ulong *****)(ulong)(uVar31 & 0xff);
        func_0x00010726b68c(&pppuStack_210,param_11,pppppuVar19,uVar6 & 0xff);
        if (cStack_46c == '\x01') {
          pppuStack_478 = pppuStack_208;
          pppuStack_480 = pppuStack_210;
          uStack_470 = CONCAT22(uStack_470._2_2_,ppppuStack_200._0_2_);
        }
        else {
          pppuStack_478 = pppuStack_208;
          pppuStack_480 = pppuStack_210;
          uStack_470 = ppppuStack_200._0_4_;
          cStack_46c = '\x01';
        }
      }
      ppppuStack_518 = (ulong ****)(param_2 + 0x16);
      pppppuVar25 = (ulong *****)*ppppuStack_518;
      ppppuStack_500 = &pppuStack_490;
      pppppuVar16 = param_2 + 0x17;
      pppuStack_490 = (ulong ***)*pppppuVar16;
      pppuStack_488 = (ulong ***)param_2[0x18];
      ppppuStack_498 = ppppuStack_500;
      if ((ulong ****)pppuStack_488 != (ulong ****)0x0) {
        pppuStack_490[2] = (ulong **)ppppuStack_500;
        *ppppuStack_518 = (ulong ***)pppppuVar16;
        *pppppuVar16 = (ulong ****)0x0;
        param_2[0x18] = (ulong ****)0x0;
        ppppuStack_498 = (ulong ****)pppppuVar25;
      }
      uStack_504 = uVar31 >> 8 & 0xff;
      func_0x0001075171a8(ppppuStack_518);
      ppppuStack_4f8 = ppppuStack_418;
      uStack_540 = param_12;
      if (ppppuStack_420 == ppppuStack_418) {
        param_8 = (ulong)(uStack_51c >> 8);
        uStack_4e8 = uStack_51c & 0xff;
      }
      else {
        pppuStack_4e0 = (ulong ***)&pppuStack_480;
        puStack_4d0 = (undefined1 *)param_12;
        puStack_4c8 = puStack_528;
        pppuStack_398 = (ulong ***)0x0;
        uStack_3a0 = (ulong ****)0x0;
        uStack_388 = 0;
        uStack_390 = 0;
        param_10 = (ulong *****)(ulong)uStack_51c;
        uStack_4e8 = uStack_51c & 0xff;
        unaff_x23 = &pppuStack_210;
        uStack_380 = 0x3f800000;
        ppppuStack_4d8 = (ulong ****)param_2;
        for (pppppuVar16 = (ulong *****)ppppuStack_420; pppppuVar16 != (ulong *****)ppppuStack_4f8;
            pppppuVar16 = pppppuVar16 + 2) {
          pppppuVar25 = pppppuVar16;
          FUN_1073b724c();
          pppppuVar19 = pppppuVar25;
          func_0x000107518234();
          if (pppppuVar19 == (ulong *****)0x0) {
            pppppuVar19 = (ulong *****)&pppuStack_4e0;
            FUN_107517560(pppppuVar19,pppppuVar16);
            if (pppppuVar19 != (ulong *****)0x0) goto LAB_107513ea8;
          }
          else {
LAB_107513ea8:
            if (*(byte *)(pppppuVar19 + 0x22) == 1) {
              func_0x00010751811c(&pppuStack_460);
            }
            else {
              uVar31 = (uint)*(byte *)(pppppuVar19 + 0x11);
              param_9 = (undefined8 *)(ulong)*(byte *)((long)pppppuVar19 + 0x8a);
              pppppuVar15 = (ulong *****)&pppuStack_460;
              func_0x00010751811c();
              uVar6 = *(byte *)pppppuVar16 + 1;
              if (*(byte *)pppppuVar16 < uStack_504) {
                func_0x000107517fa4();
                for (lVar29 = 0; lVar29 != 0x30; lVar29 = lVar29 + 0xc) {
                  uStack_4ac = *(undefined4 *)((long)&pppuStack_208 + lVar29);
                  uStack_4b8 = (undefined1)uVar6;
                  uStack_4b6 = SUB82(pppppuVar25,0);
                  uStack_4b4 = (undefined4)*(undefined8 *)((long)unaff_x23 + lVar29);
                  uStack_4b0 = (undefined4)
                               ((ulong)*(undefined8 *)((long)unaff_x23 + lVar29) >> 0x20);
                  pppppuVar15 = param_2;
                  FUN_107517530(param_2,&uStack_4b8);
                  pppppuVar19 = pppppuVar15;
                  if ((pppppuVar15 == (ulong *****)0x0) || (*(byte *)(pppppuVar15 + 0x22) != 1)) {
                    unaff_x24 = (ulong ****)0x0;
                  }
                  else {
                    func_0x0001075181e8();
                    pppppuVar15 = (ulong *****)&uStack_4b8;
                    FUN_1073b724c();
                  }
                }
                param_10 = (ulong *****)(ulong)uStack_51c;
                if (((ulong)unaff_x24 & 1) == 0) {
LAB_107513f8c:
                  bVar3 = *(byte *)pppppuVar16;
                  iVar30 = -(uint)bVar3;
                  while( true ) {
                    iVar30 = iVar30 + 1;
                    uVar13 = bVar3 == uStack_4e4;
                    if ((bool)uVar13 || (int)(uint)bVar3 < (int)uStack_4e4) break;
                    func_0x0001075180ec();
                    func_0x000107518278();
                    if (((((uint)param_10 >> 8 & 1) != 0) &&
                        (uVar13 = iVar30 + (uint)*(byte *)pppppuVar16 == uStack_4e8,
                        !(bool)uVar13 &&
                        (int)uStack_4e8 <= (int)(iVar30 + (uint)*(byte *)pppppuVar16))) ||
                       (func_0x000107518254(), pppppuVar15 != (ulong *****)0x0)) break;
                    func_0x000107518260();
                    func_0x000107518000();
                    pppppuVar25 = pppppuVar15;
                    if (pppppuVar15 == (ulong *****)0x0) {
                      if (((uVar31 | (uint)param_9) & 1) == 0) {
                        param_9 = (undefined8 *)0x0;
                        uVar31 = 0;
                      }
                      else {
                        pppppuVar15 = (ulong *****)&pppuStack_4e0;
                        pppppuVar19 = (ulong *****)&pppuStack_210;
                        FUN_107517560();
                        pppppuVar25 = pppppuVar15;
                        if (pppppuVar15 != (ulong *****)0x0) goto LAB_107513fdc;
                      }
                    }
                    else {
LAB_107513fdc:
                      pppppuVar15 = (ulong *****)&pppuStack_460;
                      func_0x0001075181d4();
                      func_0x00010751819c();
                      if ((bool)uVar13) {
                        FUN_1073b724c(&pppuStack_210);
                        break;
                      }
                      uVar31 = (uint)*(byte *)(pppppuVar25 + 0x11);
                      param_9 = (undefined8 *)(ulong)*(byte *)((long)pppppuVar25 + 0x8a);
                    }
                  }
                }
              }
              else {
                pppppuVar15 = pppppuVar16;
                FUN_1075176a4(pppppuVar16,uVar6 & 0xff);
                func_0x000107518278();
                func_0x000107518000();
                pppppuVar19 = pppppuVar15;
                if ((pppppuVar15 == (ulong *****)0x0) || (*(byte *)(pppppuVar15 + 0x22) != 1))
                goto LAB_107513f8c;
                func_0x0001075181e8();
                pppppuVar19 = pppppuVar15;
              }
            }
          }
          unaff_x24 = (ulong ****)(ulong)uStack_4ec;
        }
        param_8 = (ulong)param_10 >> 8;
        func_0x00010751824c();
      }
      uStack_4b8 = SUB81(&pppuStack_480,0);
      uStack_4b7 = (undefined1)((ulong)&pppuStack_480 >> 8);
      uStack_4b6 = (undefined2)((ulong)&pppuStack_480 >> 0x10);
      uStack_4b4 = (undefined4)((ulong)&pppuStack_480 >> 0x20);
      uStack_4b0 = SUB84(param_2,0);
      uStack_4ac = (undefined4)((ulong)param_2 >> 0x20);
      uStack_4a8 = uStack_540;
      puStack_4a0 = puStack_528;
      ppppuStack_4d8 = (ulong ****)puStack_458;
      pppuStack_4e0 = pppuStack_460;
      puStack_4c8 = (undefined8 *)puStack_448;
      puStack_4d0 = puStack_450;
      puStack_4c0 = puStack_440;
      pppuStack_398 = (ulong ***)0x0;
      uStack_3a0 = (ulong ****)0x0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_380 = 0x3f800000;
      unaff_x25 = &pppuStack_210;
      ppppuStack_4f8 = ppppuStack_400;
      for (unaff_x27 = (ulong *****)ppppuStack_408;
          uVar13 = unaff_x27 == (ulong *****)ppppuStack_4f8, !(bool)uVar13;
          unaff_x27 = unaff_x27 + 2) {
        pppppuVar16 = unaff_x27;
        FUN_1073b724c();
        ppppuStack_3b0 = (ulong ****)pppppuVar16;
        ppppuStack_3a8 = (ulong ****)pppppuVar19;
        func_0x000107518234();
        if (pppppuVar16 == (ulong *****)0x0) {
          pppppuVar16 = (ulong *****)&uStack_4b8;
          pppppuVar19 = unaff_x27;
          FUN_107517560();
          if (pppppuVar16 != (ulong *****)0x0) goto LAB_1075140c8;
        }
        else {
LAB_1075140c8:
          pppppuVar19 = pppppuVar16;
          func_0x00010751819c();
          if ((bool)uVar13) {
            func_0x00010751811c(&pppuStack_4e0,pppppuVar19);
            pppppuVar19 = &ppppuStack_498;
            func_0x00010751800c();
          }
          else {
            unaff_x23 = (ulong ****)(ulong)*(byte *)(pppppuVar19 + 0x11);
            param_9 = (undefined8 *)(ulong)*(byte *)((long)pppppuVar19 + 0x8a);
            pppppuVar16 = (ulong *****)&pppuStack_4e0;
            func_0x00010751811c();
            bVar3 = *(byte *)unaff_x27;
            uVar6 = bVar3 + 1;
            param_10 = (ulong *****)(ulong)uVar6;
            uVar13 = bVar3 == uStack_504;
            if (bVar3 < uStack_504) {
              func_0x000107517fa4();
              for (lVar29 = 0; uVar13 = lVar29 == 0x30, !(bool)uVar13; lVar29 = lVar29 + 0xc) {
                uStack_3b4 = *(undefined4 *)((long)&pppuStack_208 + lVar29);
                uStack_3c0 = (undefined1)uVar6;
                uStack_3be = ppppuStack_3b0._0_2_;
                uStack_3bc = (undefined4)*(undefined8 *)((long)unaff_x25 + lVar29);
                uStack_3b8 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x25 + lVar29) >> 0x20);
                pppppuVar25 = (ulong *****)&uStack_3c0;
                pppppuVar16 = param_2;
                FUN_107517530();
                pppppuVar19 = pppppuVar25;
                if ((pppppuVar16 == (ulong *****)0x0) ||
                   (func_0x00010751819c(), pppppuVar19 = pppppuVar25, !(bool)uVar13)) {
                  unaff_x24 = (ulong ****)0x0;
                }
                else {
                  func_0x000107518064(&pppuStack_4e0);
                  pppppuVar16 = (ulong *****)&uStack_3c0;
                  FUN_1073b724c();
                  pppppuVar19 = &ppppuStack_498;
                  ppppuStack_3d0 = (ulong ****)pppppuVar16;
                  ppppuStack_3c8 = (ulong ****)pppppuVar25;
                  func_0x00010751800c();
                }
              }
              if (((ulong)unaff_x24 & 1) == 0) {
LAB_1075141dc:
                bVar3 = *(byte *)unaff_x27;
                uVar6 = -(uint)bVar3;
                while( true ) {
                  uVar6 = uVar6 + 1;
                  param_10 = (ulong *****)(ulong)uVar6;
                  uVar13 = bVar3 == uStack_4e4;
                  if ((bool)uVar13 || (int)(uint)bVar3 < (int)uStack_4e4) break;
                  func_0x0001075180ec();
                  func_0x000107518278();
                  if ((((param_8 & 1) != 0) &&
                      (uVar13 = uVar6 + *(byte *)unaff_x27 == uStack_4e8,
                      !(bool)uVar13 && (int)uStack_4e8 <= (int)(uVar6 + *(byte *)unaff_x27))) ||
                     (func_0x000107518254(), pppppuVar16 != (ulong *****)0x0)) break;
                  func_0x000107518260();
                  func_0x000107518000();
                  pppppuVar25 = pppppuVar16;
                  if (pppppuVar16 == (ulong *****)0x0) {
                    if ((((uint)unaff_x23 | (uint)param_9) & 1) == 0) {
                      param_9 = (undefined8 *)0x0;
                      unaff_x23 = (ulong ****)0x0;
                    }
                    else {
                      pppppuVar16 = (ulong *****)&uStack_4b8;
                      pppppuVar19 = (ulong *****)&pppuStack_210;
                      FUN_107517560();
                      pppppuVar25 = pppppuVar16;
                      if (pppppuVar16 != (ulong *****)0x0) goto LAB_10751422c;
                    }
                  }
                  else {
LAB_10751422c:
                    pppppuVar16 = (ulong *****)&pppuStack_4e0;
                    func_0x0001075181d4();
                    func_0x00010751819c();
                    if ((bool)uVar13) {
                      ppppuVar14 = &pppuStack_210;
                      FUN_1073b724c();
                      uStack_3c0 = SUB81(ppppuVar14,0);
                      uStack_3bf = (undefined1)((ulong)ppppuVar14 >> 8);
                      uStack_3be = (undefined2)((ulong)ppppuVar14 >> 0x10);
                      uStack_3bc = (undefined4)((ulong)ppppuVar14 >> 0x20);
                      uStack_3b8 = SUB84(pppppuVar19,0);
                      uStack_3b4 = (undefined4)((ulong)pppppuVar19 >> 0x20);
                      pppppuVar19 = &ppppuStack_498;
                      func_0x00010751800c();
                      break;
                    }
                    unaff_x23 = (ulong ****)(ulong)*(byte *)(pppppuVar25 + 0x11);
                    param_9 = (undefined8 *)(ulong)*(byte *)((long)pppppuVar25 + 0x8a);
                  }
                }
              }
            }
            else {
              pppppuVar19 = (ulong *****)(ulong)(uVar6 & 0xff);
              pppppuVar16 = unaff_x27;
              FUN_1075176a4();
              func_0x000107518278();
              func_0x000107518000();
              if ((pppppuVar16 == (ulong *****)0x0) || (func_0x00010751819c(), !(bool)uVar13))
              goto LAB_1075141dc;
              func_0x000107518064(&pppuStack_4e0);
              pppppuVar19 = &ppppuStack_498;
              func_0x00010751800c();
            }
          }
        }
        unaff_x24 = (ulong ****)(ulong)uStack_4ec;
      }
      func_0x00010751824c();
      unaff_x26 = (ulong *****)ppppuStack_498;
      while (unaff_x26 != (ulong *****)ppppuStack_500) {
        pppuStack_210 = (ulong ***)unaff_x26[4];
        pppuStack_208 = (ulong ***)unaff_x26[5];
        pppppuVar19 = (ulong *****)unaff_x26[6];
        ppppuStack_200 = (ulong ****)pppppuVar19;
        (*(code *)(*pppppuVar19)[0x11])(pppppuVar19);
        unaff_x26 = pppppuVar19;
        (*(code *)(*pppppuVar19)[0xf])();
        if ((int)unaff_x26 != 0) {
          func_0x000107518064(&pppuStack_460);
          unaff_x26 = (ulong *****)ppppuStack_518;
          FUN_107515b50(ppppuStack_518,&pppuStack_210,pppppuVar19);
        }
        func_0x000107518124();
      }
      if (*(int *)(lStack_530 + 100) == 1) {
        uVar28 = *(ulong *)(*(long *)(lStack_510 + 8) + 0x4c);
        uVar40 = *(undefined8 *)(*(long *)(lStack_510 + 8) + 0x30);
        dVar33 = (double)FUN_1074169e0();
        dVar38 = (double)_log2(uVar40);
        fVar37 = (float)(uVar28 & 0xffffffff) / (float)uStack_548;
        fVar32 = 1.0;
        if (1.0 <= fVar37) {
          fVar32 = fVar37;
        }
        fVar39 = (float)(uVar28 >> 0x20) / (float)uStack_548;
        fVar37 = 1.0;
        if (1.0 <= fVar39) {
          fVar37 = fVar39;
        }
        uVar22 = (ulong)(((dVar38 - dVar33) + 1.0) * (double)(fVar32 * fVar37) * 0.5);
        uVar28 = (ulong)*(uint *)(lStack_530 + 0x4c) & 0xffff;
        if (uVar22 <= uVar28) {
          uVar28 = uVar22;
        }
        if ((*(uint *)(lStack_530 + 0x4c) & 0x10000) != 0) {
          uVar22 = uVar28;
        }
        func_0x00010784ac44(param_2 + 0xd,uVar22);
      }
      FUN_1075148bc(param_2,uStack_3d1,&ppuStack_438);
      FUN_107514a5c(&uStack_3a0,param_2,lStack_510);
      FUN_107514c04(param_2,puStack_528);
      FUN_107514cac(param_2);
      in_ZR = (uint)unaff_x24 == uStack_4e4;
      if ((int)(uint)unaff_x24 < (int)uStack_4e4) {
        *puStack_538 = 0;
        puStack_538[0x58] = 0;
      }
      else {
        func_0x000104c2fe00(&pppuStack_210,lStack_530 + 0x10);
        uStack_1d8 = uStack_544;
        if (iStack_54c == 0) {
          uStack_1d4 = (undefined4)((ulong)((long)ppppuStack_400 - (long)ppppuStack_408) >> 4);
        }
        else {
          uVar28 = 0;
          for (pppppuVar19 = (ulong *****)ppppuStack_408; pppppuVar19 != (ulong *****)ppppuStack_400
              ; pppppuVar19 = pppppuVar19 + 2) {
            uVar31 = uStack_544 - *(byte *)((long)pppppuVar19 + 4);
            uVar6 = uVar31;
            if (0x1d < uVar31) {
              uVar6 = 0x1e;
            }
            lVar29 = 1L << ((ulong)(uVar6 << 1) & 0x3f);
            if ((int)uVar31 < 1) {
              lVar29 = 1;
            }
            uVar28 = lVar29 + uVar28;
          }
          in_ZR = uVar28 == 0x7fffffff;
          if (0x7ffffffe < uVar28) {
            uVar28 = 0x7fffffff;
          }
          uStack_1d4 = (undefined4)uVar28;
        }
        pppuStack_1c8 = pppuStack_398;
        pppuStack_1d0 = (ulong ***)uStack_3a0;
        uStack_1c0 = uStack_390;
        uStack_3a0 = (ulong ****)0x0;
        pppuStack_398 = (ulong ***)0x0;
        uStack_390 = 0;
        FUN_1075164a4(puStack_538,&pppuStack_210);
        func_0x000107411320(&pppuStack_210);
      }
      func_0x00010741134c(&uStack_3a0);
      FUN_107517004(&ppppuStack_498);
      func_0x0001075171d8(&ppuStack_438);
      func_0x0001072ba1a8(&ppppuStack_420);
      pppppuVar19 = &ppppuStack_408;
      func_0x0001072ba1a8();
      goto LAB_1075144d0;
    }
  }
  param_10 = pppppuVar19;
  func_0x000107517178(param_2 + 10);
  pppppuVar19 = param_2 + 0x16;
  func_0x0001075171a8();
  *puStack_538 = 0;
  puStack_538[0x58] = 0;
LAB_1075144d0:
  func_0x000107517f18(uStack_80);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107267da8(&pppuStack_210);
  func_0x0001072ba1a8(&ppppuStack_420);
  pppppuVar16 = &ppppuStack_408;
  func_0x0001072ba1a8();
  fVar32 = (float)func_0x000107518018();
  uStack_5b0 = param_8;
  ppppuStack_5a8 = (ulong ****)unaff_x27;
  ppppuStack_5a0 = (ulong ****)unaff_x26;
  pppuStack_598 = (ulong ***)unaff_x25;
  pppuStack_590 = (ulong ***)unaff_x24;
  pppuStack_588 = (ulong ***)unaff_x23;
  puStack_580 = param_9;
  ppppuStack_578 = (ulong ****)param_10;
  ppppuStack_570 = (ulong ****)param_2;
  ppppuStack_568 = (ulong ****)pppppuVar19;
  puStack_560 = &stack0xfffffffffffffff0;
  pcStack_558 = FUN_107514618;
  fVar37 = (fVar32 - *(float *)(pppppuVar16 + 0x1a)) / 360.0;
  ppppuVar14 = (ulong ****)(ulong)(uint)fVar37;
  iVar30 = (int)fVar37;
  *(float *)(pppppuVar16 + 0x1a) = fVar32;
  if (iVar30 != 0) {
    pppuStack_5e0 = (ulong ***)0x0;
    pppuStack_5d8 = (ulong ***)0x0;
    pppuStack_5f0 = (ulong ***)0x0;
    pppppuVar15 = pppppuVar16 + 10;
    pppppuVar19 = pppppuVar16 + 0xb;
    pppuStack_5f8 = (ulong ***)0x0;
    pppppuVar25 = (ulong *****)*pppppuVar15;
    pppuStack_600 = (ulong ***)&pppuStack_5f8;
    pppuStack_5e8 = (ulong ***)&pppuStack_5e0;
    while (sVar7 = (short)iVar30, pppppuVar25 != pppppuVar19) {
      ppppuVar20 = (ulong ****)
                   (ulong)(uint)(int)(short)(*(short *)((long)pppppuVar25[6] + 0xe) + sVar7);
      ppppuVar24 = (ulong ****)((long)pppppuVar25[6] + 0xc);
      FUN_107515534();
      ppppuVar23 = pppppuVar25[6];
      *(ulong *****)((long)ppppuVar23 + 0x14) = ppppuVar20;
      *(ulong *****)((long)ppppuVar23 + 0xc) = ppppuVar24;
      pppppuVar17 = (ulong *****)&pppuStack_5e8;
      pppuStack_610 = (ulong ***)ppppuVar24;
      pppuStack_608 = (ulong ***)ppppuVar20;
      FUN_107517320(pppppuVar17,&uStack_5b8,&pppuStack_610);
      if (*pppppuVar17 == (ulong ****)0x0) {
        pppppuVar18 = pppppuVar17;
        func_0x000107518090();
        pppuVar8 = pppuStack_610;
        pppuStack_5c8 = (ulong ***)&pppuStack_5e0;
        uStack_5c0 = 1;
        pppppuVar18[5] = (ulong ****)pppuStack_608;
        pppppuVar18[4] = (ulong ****)pppuVar8;
        ppppuVar24 = pppppuVar25[6];
        pppppuVar25[6] = (ulong ****)0x0;
        pppppuVar18[6] = ppppuVar24;
        FUN_1075173e0(&pppuStack_5e8,uStack_5b8,pppppuVar17,pppppuVar18);
        pppuStack_5d0 = (ulong ***)0x0;
        pppppuVar17 = (ulong *****)&pppuStack_5d0;
        func_0x000107517408();
      }
      func_0x000107518054();
      pppppuVar25 = pppppuVar17;
    }
    FUN_1075164c0(pppppuVar15,pppppuVar16[0xb]);
    pppuVar8 = pppuStack_5e0;
    pppppuVar16[10] = (ulong ****)pppuStack_5e8;
    pppppuVar16[0xb] = (ulong ****)pppuVar8;
    pppuVar9 = pppuStack_5d8;
    pppppuVar16[0xc] = (ulong ****)pppuStack_5d8;
    if ((ulong ****)pppuVar9 == (ulong ****)0x0) {
      *pppppuVar15 = (ulong ****)pppppuVar19;
    }
    else {
      pppuVar8[2] = (ulong **)pppppuVar19;
      pppuStack_5e0 = (ulong ***)0x0;
      pppuStack_5d8 = (ulong ***)0x0;
      pppuStack_5e8 = (ulong ***)&pppuStack_5e0;
    }
    pppppuVar15 = pppppuVar16 + 0x16;
    pppppuVar19 = pppppuVar16 + 0x17;
    pppppuVar25 = (ulong *****)*pppppuVar15;
    while (pppppuVar25 != pppppuVar19) {
      auVar34._0_8_ = *(ulong *)((long)pppppuVar25 + 0x24);
      auVar34._8_8_ = 0;
      auVar34 = NEON_ext(auVar34,auVar34,0xc,1);
      auVar35._4_12_ = auVar34._4_12_;
      auVar35._0_4_ =
           (int)CONCAT62((int6)((ulong)ppppuVar14 >> 0x10),*(short *)(pppppuVar25 + 4) + sVar7);
      auVar36._0_12_ = auVar35._0_12_;
      auVar36._12_4_ = *(undefined4 *)((long)pppppuVar25 + 0x2c);
      pppuStack_608 = auVar36._8_8_;
      ppppuVar14 = auVar35._0_8_;
      pppppuVar17 = (ulong *****)&pppuStack_600;
      pppuStack_610 = (ulong ***)ppppuVar14;
      func_0x000107517dc8(pppppuVar17,&uStack_5b8,&pppuStack_610);
      if (*pppppuVar17 == (ulong ****)0x0) {
        pppppuVar18 = pppppuVar17;
        func_0x000107518090();
        pppuVar8 = pppuStack_610;
        pppuStack_5c8 = (ulong ***)&pppuStack_5f8;
        uStack_5c0 = 1;
        pppppuVar18[5] = (ulong ****)pppuStack_608;
        pppppuVar18[4] = (ulong ****)pppuVar8;
        pppppuVar18[6] = pppppuVar25[6];
        FUN_107517e3c(&pppuStack_600,uStack_5b8,pppppuVar17,pppppuVar18);
        pppuStack_5d0 = (ulong ***)0x0;
        pppppuVar17 = (ulong *****)&pppuStack_5d0;
        func_0x000107517e64();
      }
      func_0x000107518054();
      pppppuVar25 = pppppuVar17;
    }
    func_0x0001075164fc(pppppuVar15,pppppuVar16[0x17]);
    pppuVar8 = pppuStack_5f8;
    pppppuVar16[0x16] = (ulong ****)pppuStack_600;
    pppppuVar16[0x17] = (ulong ****)pppuVar8;
    pppuVar9 = pppuStack_5f0;
    pppppuVar16[0x18] = (ulong ****)pppuStack_5f0;
    if ((ulong ****)pppuVar9 == (ulong ****)0x0) {
      *pppppuVar15 = (ulong ****)pppppuVar19;
    }
    else {
      pppuVar8[2] = (ulong **)pppppuVar19;
      pppuStack_5f8 = (ulong ***)0x0;
      pppuStack_5f0 = (ulong ***)0x0;
      pppuStack_600 = (ulong ***)&pppuStack_5f8;
    }
    FUN_107517004(&pppuStack_600);
    func_0x000107516ec0(&pppuStack_5e8);
  }
  return;
}



/* Entry: 107514618; end: 107514873;  */

void FUN_107514618(float param_1,long param_2)

{
  long **pplVar1;
  short sVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  int iVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  fVar16 = (param_1 - *(float *)(param_2 + 0xd0)) / 360.0;
  plVar12 = (long *)(ulong)(uint)fVar16;
  iVar11 = (int)fVar16;
  *(float *)(param_2 + 0xd0) = param_1;
  if (iVar11 != 0) {
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    plVar9 = (long *)(param_2 + 0x50);
    pplVar1 = (long **)(param_2 + 0x58);
    lStack_a8 = 0;
    pplVar10 = (long **)*plVar9;
    plStack_b0 = &lStack_a8;
    plStack_98 = &lStack_90;
    while (sVar2 = (short)iVar11, pplVar10 != pplVar1) {
      plVar6 = (long *)(ulong)(uint)(int)(short)(*(short *)((long)pplVar10[6] + 0xe) + sVar2);
      plVar8 = (long *)((long)pplVar10[6] + 0xc);
      FUN_107515534();
      plVar7 = pplVar10[6];
      *(long **)((long)plVar7 + 0x14) = plVar6;
      *(long **)((long)plVar7 + 0xc) = plVar8;
      pplVar4 = &plStack_98;
      puStack_c0 = plVar8;
      puStack_b8 = plVar6;
      FUN_107517320(pplVar4,&uStack_68,&puStack_c0);
      if (*pplVar4 == (long *)0x0) {
        pplVar5 = pplVar4;
        func_0x000107518090();
        puVar3 = puStack_c0;
        plStack_78 = &lStack_90;
        uStack_70 = 1;
        pplVar5[5] = puStack_b8;
        pplVar5[4] = puVar3;
        plVar8 = pplVar10[6];
        pplVar10[6] = (long *)0x0;
        pplVar5[6] = plVar8;
        FUN_1075173e0(&plStack_98,uStack_68,pplVar4,pplVar5);
        puStack_80 = (long *)0x0;
        pplVar4 = &puStack_80;
        func_0x000107517408();
      }
      func_0x000107518054();
      pplVar10 = pplVar4;
    }
    FUN_1075164c0(plVar9,*(undefined8 *)(param_2 + 0x58));
    *(long **)(param_2 + 0x50) = plStack_98;
    *(long *)(param_2 + 0x58) = lStack_90;
    *(long *)(param_2 + 0x60) = lStack_88;
    if (lStack_88 == 0) {
      *plVar9 = (long)pplVar1;
    }
    else {
      *(long ***)(lStack_90 + 0x10) = pplVar1;
      lStack_90 = 0;
      lStack_88 = 0;
      plStack_98 = &lStack_90;
    }
    plVar9 = (long *)(param_2 + 0xb0);
    pplVar1 = (long **)(param_2 + 0xb8);
    pplVar10 = (long **)*plVar9;
    while (pplVar10 != pplVar1) {
      auVar13._0_8_ = *(ulong *)((long)pplVar10 + 0x24);
      auVar13._8_8_ = 0;
      auVar13 = NEON_ext(auVar13,auVar13,0xc,1);
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = (int)CONCAT62((int6)((ulong)plVar12 >> 0x10),*(short *)(pplVar10 + 4) + sVar2)
      ;
      auVar15._0_12_ = auVar14._0_12_;
      auVar15._12_4_ = *(undefined4 *)((long)pplVar10 + 0x2c);
      puStack_b8 = auVar15._8_8_;
      plVar12 = auVar14._0_8_;
      pplVar4 = &plStack_b0;
      puStack_c0 = plVar12;
      func_0x000107517dc8(pplVar4,&uStack_68,&puStack_c0);
      if (*pplVar4 == (long *)0x0) {
        pplVar5 = pplVar4;
        func_0x000107518090();
        puVar3 = puStack_c0;
        plStack_78 = &lStack_a8;
        uStack_70 = 1;
        pplVar5[5] = puStack_b8;
        pplVar5[4] = puVar3;
        pplVar5[6] = pplVar10[6];
        FUN_107517e3c(&plStack_b0,uStack_68,pplVar4,pplVar5);
        puStack_80 = (long *)0x0;
        pplVar4 = &puStack_80;
        func_0x000107517e64();
      }
      func_0x000107518054();
      pplVar10 = pplVar4;
    }
    func_0x0001075164fc(plVar9,*(undefined8 *)(param_2 + 0xb8));
    *(long **)(param_2 + 0xb0) = plStack_b0;
    *(long *)(param_2 + 0xb8) = lStack_a8;
    *(long *)(param_2 + 0xc0) = lStack_a0;
    if (lStack_a0 == 0) {
      *plVar9 = (long)pplVar1;
    }
    else {
      *(long ***)(lStack_a8 + 0x10) = pplVar1;
      lStack_a8 = 0;
      lStack_a0 = 0;
      plStack_b0 = &lStack_a8;
    }
    FUN_107517004(&plStack_b0);
    func_0x000107516ec0(&plStack_98);
  }
  return;
}



/* Entry: 107514874; end: 1075148bb;  */

void FUN_107514874(uint param_1)

{
  long unaff_x20;
  
  func_0x000107518048();
  func_0x00010751826c();
  if ((param_1 & 1) != 0) {
    func_0x000107518020();
    func_0x0001075180bc();
  }
  if (**(char **)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001075180d0();
  }
  return;
}



/* Entry: 1075148bc; end: 107514a5b;  */

void FUN_1075148bc(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plStack_2e0;
  undefined4 auStack_2d8 [6];
  undefined4 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long alStack_268 [33];
  undefined1 auStack_160 [264];
  undefined8 uStack_58;
  
  pplVar10 = (long **)param_3;
  func_0x000107517f5c();
  auStack_2d8[0] = 0x78;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  ppuStack_2b8 = &PTR_DAT_110996720;
  uStack_2b0 = 0;
  uStack_298 = 0x78;
  uStack_290 = 0;
  uStack_28c = 1;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_288 = 0;
  uStack_58 = extraout_x8;
  FUN_10743cc34(alStack_268,auStack_2d8,7);
  plVar9 = alStack_268;
  FUN_10743d7bc(auStack_160);
  func_0x000107288cd8(alStack_268);
  plVar7 = (long *)auStack_2d8;
  func_0x000107262330();
  plVar19 = (long *)*param_3;
  plVar18 = *(long **)(param_1 + 0x50);
  do {
    while( true ) {
      uVar6 = plVar18 == (long *)(param_1 + 0x58);
      if ((bool)uVar6) {
        FUN_10743d7e4();
        func_0x000107517f18(uStack_58);
        if ((bool)uVar6) {
          return;
        }
        ___stack_chk_fail();
        plVar7 = (long *)auStack_2d8;
        func_0x000107262330();
        func_0x000107518018();
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = 0;
        plVar18 = (long *)plVar9[10];
        do {
          if (plVar18 == plVar9 + 0xb) {
            return;
          }
          plVar19 = (long *)plVar18[6];
          (**(code **)(*plVar19 + 0x38))(plVar19,*(uint *)((long)pplVar10 + 4) >> 4 & 1);
          lVar13 = plVar18[6];
          uVar14 = *(undefined8 *)(lVar13 + 0x10);
          uVar4 = *(undefined4 *)(lVar13 + 0x18);
          if (*(char *)(lVar13 + 0x8a) == '\x01') {
            bVar12 = *(byte *)(lVar13 + 0x89) ^ 1;
          }
          else {
            bVar12 = 0;
          }
          puVar20 = (undefined8 *)plVar7[1];
          if (puVar20 < (undefined8 *)plVar7[2]) {
            uVar14 = *(undefined8 *)(lVar13 + 0x10);
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(lVar13 + 0x18);
            *puVar20 = uVar14;
            *(byte *)((long)puVar20 + 0xc) = bVar12 & 1;
            puVar20 = puVar20 + 2;
            plVar18 = plVar19;
          }
          else {
            lVar13 = (long)puVar20 - *plVar7;
            uVar1 = (lVar13 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_107411210();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x107514bec);
              (*pcVar5)();
            }
            uVar11 = plVar7[2] - *plVar7;
            uVar15 = (long)uVar11 >> 3;
            if (uVar15 <= uVar1) {
              uVar15 = uVar1;
            }
            if (0x7fffffffffffffef < uVar11) {
              uVar15 = 0xfffffffffffffff;
            }
            plVar18 = plVar7 + 2;
            FUN_10741121c();
            puVar20 = (undefined8 *)((long)plVar18 + lVar13);
            *(undefined4 *)(puVar20 + 1) = uVar4;
            *puVar20 = uVar14;
            *(byte *)((long)puVar20 + 0xc) = bVar12 & 1;
            puVar16 = (undefined8 *)*plVar7;
            puVar3 = (undefined8 *)plVar7[1];
            puVar2 = (undefined8 *)((long)puVar20 + ((long)puVar16 - (long)puVar3));
            puVar17 = puVar2;
            for (; puVar16 != puVar3; puVar16 = puVar16 + 2) {
              uVar14 = *puVar16;
              puVar17[1] = puVar16[1];
              *puVar17 = uVar14;
              puVar17 = puVar17 + 2;
            }
            puVar20 = puVar20 + 2;
            plVar19 = (long *)*plVar7;
            *plVar7 = (long)puVar2;
            plVar7[1] = (long)puVar20;
            plVar7[2] = (long)(plVar18 + uVar15 * 2);
            if (plVar19 != (long *)0x0) {
              __ZdlPv();
              plVar18 = plVar19;
            }
          }
          plVar7[1] = (long)puVar20;
          func_0x0001075180ac();
        } while( true );
      }
      plVar8 = plVar7;
      if (plVar19 != param_3 + 1) break;
LAB_10751497c:
      if ((param_2 & 1) == 0) {
        func_0x00010751820c(*(undefined8 *)(*(long *)plVar18[6] + 0x18));
        plStack_2e0 = (long *)plVar18[6];
        plVar18[6] = 0;
        pplVar10 = &plStack_2e0;
        func_0x00010784ad74(param_1 + 0x68,plVar18 + 4);
        plVar8 = plStack_2e0;
        plStack_2e0 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          func_0x000107517f0c();
        }
      }
      func_0x0001075180ac();
      plVar7 = (long *)(param_1 + 0x50);
      FUN_107517d44();
      plVar9 = plVar18;
      plVar18 = plVar8;
    }
    plVar8 = plVar18 + 4;
    FUN_1075153a0(plVar8,(undefined1 *)((long)plVar19 + 0x1c));
    if (((uint)plVar8 >> 7 & 1) != 0) goto LAB_10751497c;
    plVar7 = (long *)((long)plVar19 + 0x1c);
    plVar9 = plVar18 + 4;
    FUN_1075153a0();
    if (((uint)plVar7 >> 7 & 1) == 0) {
      func_0x0001075180ac();
      plVar18 = plVar7;
    }
    func_0x00010002c7d4();
    plVar7 = plVar19;
  } while( true );
}



/* Entry: 107514a5c; end: 107514c03;  */

void FUN_107514a5c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar14 = *(long **)(param_2 + 0x50);
  do {
    if (plVar14 == (long *)(param_2 + 0x58)) {
      return;
    }
    plVar6 = (long *)plVar14[6];
    (**(code **)(*plVar6 + 0x38))(plVar6,*(uint *)(param_3 + 4) >> 4 & 1);
    lVar9 = plVar14[6];
    uVar10 = *(undefined8 *)(lVar9 + 0x10);
    uVar4 = *(undefined4 *)(lVar9 + 0x18);
    if (*(char *)(lVar9 + 0x8a) == '\x01') {
      bVar8 = *(byte *)(lVar9 + 0x89) ^ 1;
    }
    else {
      bVar8 = 0;
    }
    puVar15 = (undefined8 *)param_1[1];
    if (puVar15 < (undefined8 *)param_1[2]) {
      uVar10 = *(undefined8 *)(lVar9 + 0x10);
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(lVar9 + 0x18);
      *puVar15 = uVar10;
      *(byte *)((long)puVar15 + 0xc) = bVar8 & 1;
      puVar15 = puVar15 + 2;
      plVar14 = plVar6;
    }
    else {
      lVar9 = (long)puVar15 - *param_1;
      uVar1 = (lVar9 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_107411210();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x107514bec);
        (*pcVar5)();
      }
      uVar7 = param_1[2] - *param_1;
      uVar11 = (long)uVar7 >> 3;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar11 = 0xfffffffffffffff;
      }
      plVar14 = param_1 + 2;
      FUN_10741121c();
      puVar15 = (undefined8 *)((long)plVar14 + lVar9);
      *(undefined4 *)(puVar15 + 1) = uVar4;
      *puVar15 = uVar10;
      *(byte *)((long)puVar15 + 0xc) = bVar8 & 1;
      puVar12 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)((long)puVar15 + ((long)puVar12 - (long)puVar3));
      puVar13 = puVar2;
      for (; puVar12 != puVar3; puVar12 = puVar12 + 2) {
        uVar10 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar10;
        puVar13 = puVar13 + 2;
      }
      puVar15 = puVar15 + 2;
      plVar6 = (long *)*param_1;
      *param_1 = (long)puVar2;
      param_1[1] = (long)puVar15;
      param_1[2] = (long)(plVar14 + uVar11 * 2);
      if (plVar6 != (long *)0x0) {
        __ZdlPv();
        plVar14 = plVar6;
      }
    }
    param_1[1] = (long)puVar15;
    func_0x0001075180ac();
  } while( true );
}



/* Entry: 107514c04; end: 107514cab;  */

void FUN_107514c04(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)param_1[0x16];
  plVar2 = param_1;
  while (plVar3 != param_1 + 0x17) {
    plVar4 = (long *)plVar3[6];
    *(undefined1 *)(plVar4 + 0xf) = 0;
    func_0x00010751810c();
    plVar1 = (long *)param_2[1];
    plVar3 = plVar2;
    for (plVar5 = (long *)*param_2; plVar5 != plVar1; plVar5 = plVar5 + 2) {
      plVar3 = *(long **)(*plVar5 + 8);
      (**(code **)(*plVar3 + 0x30))();
      if (((int)plVar2 == 0) || ((int)plVar3[2] != 1)) {
        plVar3 = plVar4;
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar5);
        *(byte *)(plVar4 + 0xf) = *(byte *)(plVar4 + 0xf) | (byte)plVar3;
      }
    }
    func_0x00010751812c();
    plVar2 = plVar3;
  }
  return;
}



/* Entry: 107514cac; end: 107514eb3;  */

void FUN_107514cac(long param_1,long *param_2,ulong param_3,int param_4,long param_5,
                  undefined8 *param_6,byte *param_7,long param_8)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  byte *pbStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  long *plStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_271;
  undefined8 uStack_270;
  long *plStack_268;
  undefined1 uStack_259;
  byte *pbStack_258;
  long *plStack_250;
  uint uStack_220;
  undefined4 uStack_21c;
  byte *pbStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_190;
  undefined4 uStack_188;
  long lStack_180;
  undefined4 uStack_178;
  long lStack_100;
  undefined4 uStack_f8;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  lVar4 = param_1;
  func_0x000107517f5c();
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar9 = lVar4 - *(long *)(param_1 + 0xd8);
  uVar2 = lVar9 == 0xb2dfa040;
  if (0xb2dfa03f < lVar9) {
    lVar9 = 0;
    plVar11 = *(long **)(param_1 + 0x38);
    plVar12 = *(long **)(param_1 + 0x50);
    while (uVar2 = plVar12 == (long *)(param_1 + 0x58), !(bool)uVar2) {
      plVar12 = (long *)plVar12[6];
      (**(code **)(*plVar12 + 0xc0))();
      lVar9 = (long)plVar12 + lVar9;
      func_0x0001075180ac();
    }
    lVar5 = param_1 + 0x68;
    func_0x00010784af6c();
    func_0x00010751816c(0x79);
    func_0x000107517f38();
    puVar6 = auStack_90;
    func_0x0001075181cc(puVar6);
    func_0x00010751815c();
    FUN_107371bc4();
    lStack_c8 = lVar5 + lVar9;
    uStack_c0 = 3;
    lStack_100 = *plVar11;
    uStack_f8 = 3;
    func_0x00010751805c(plVar11,puVar6,&lStack_c8,&lStack_100);
    func_0x000104c2f714(auStack_90);
    func_0x0001075180e4();
    func_0x00010751816c(0x7a);
    func_0x000107517f38();
    plVar12 = &lStack_c8;
    func_0x0001075181cc(plVar12);
    func_0x00010751815c();
    FUN_107371bc4();
    uStack_f8 = 3;
    lStack_180 = *plVar11;
    uStack_178 = 3;
    lStack_100 = lVar9;
    func_0x00010751805c(plVar11,plVar12,&lStack_100,&lStack_180);
    func_0x000104c2f714(&lStack_c8);
    func_0x0001075180e4();
    func_0x00010751816c(0x7b);
    func_0x000107517f38();
    param_2 = &lStack_100;
    func_0x0001075181cc();
    func_0x00010751815c();
    FUN_107371bc4();
    uStack_178 = 3;
    lStack_190 = *plVar11;
    uStack_188 = 3;
    param_3 = 0;
    lStack_180 = lVar5;
    param_4 = (int)&lStack_190;
    func_0x00010751805c(plVar11);
    func_0x000104c2f714();
    func_0x0001075180e4();
    *(long *)(param_1 + 0xd8) = lVar4;
  }
  func_0x000107517f18(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  plVar12 = &lStack_100;
  func_0x000104c2f714();
  func_0x0001075180e4();
  func_0x000107518018();
  func_0x000107517f5c();
  uStack_259 = (undefined1)param_4;
  uStack_200 = extraout_x8_01;
  if (param_4 == 0) {
    if ((param_3 & 1) != 0) goto LAB_107514f34;
    plVar11 = (long *)plVar12[10];
    while (uVar2 = plVar11 == plVar12 + 0xb, !(bool)uVar2) {
      func_0x000107518284();
      func_0x00010751820c();
      plStack_268 = (long *)*param_6;
      *param_6 = 0;
      func_0x00010784ad74(plVar12 + 0xd,param_6 + -2,&plStack_268);
      plVar11 = plStack_268;
      plStack_268 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        func_0x000107517f0c();
      }
      func_0x000107518054();
    }
  }
  else {
    func_0x00010784aef0(plVar12 + 0xd);
    if ((param_3 & 1) != 0) {
LAB_107514f34:
      iVar3 = (int)*(undefined8 *)(param_5 + 8);
      FUN_107418388();
      if (iVar3 != 0) {
        func_0x00010741657c(*(undefined8 *)(param_5 + 8),0);
        func_0x000107518200();
      }
      uStack_270 = param_6[0xb];
      uStack_271 = *(undefined1 *)(param_6 + 0xc);
      ppuStack_2b8 = &puStack_290;
      puStack_290 = &uStack_288;
      uStack_288 = 0;
      uStack_280 = 0;
      puStack_2b0 = &uStack_270;
      puStack_2a8 = &uStack_271;
      puStack_2a0 = &uStack_259;
      plVar13 = plVar12 + 0x16;
      plStack_2d0 = (long *)*plVar13;
      plVar14 = plVar12 + 0x17;
      lStack_2c8 = *plVar14;
      lStack_2c0 = plVar12[0x18];
      plVar11 = &lStack_2c8;
      plStack_298 = param_2;
      if (lStack_2c0 != 0) {
        *(long **)(lStack_2c8 + 0x10) = &lStack_2c8;
        *plVar13 = (long)plVar14;
        *plVar14 = 0;
        plVar12[0x18] = 0;
        plVar11 = plStack_2d0;
      }
      plStack_2d0 = plVar11;
      func_0x0001075171a8(plVar13);
      plVar11 = plVar12 + 10;
      FUN_107517028(plVar11,param_7);
      if (plVar12 + 0xb == plVar11) {
        func_0x00010784ae48(&pbStack_258,plVar12 + 0xd,param_7);
        if (pbStack_258 == (byte *)0x0) {
          lStack_2d8 = plVar12[9];
          lStack_2e0 = plVar12[8];
          if (plVar12[9] != 0) {
            plVar11 = (long *)(plVar12[9] + 8);
            do {
              cVar1 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar10) {
                *plVar11 = *plVar11 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          func_0x000107517234(&pbStack_300,*(undefined8 *)(param_8 + 0x18),param_7,&lStack_2e0,
                              plVar12 + 0x14);
          pbVar7 = pbStack_258;
          pbStack_258 = pbStack_300;
          pbStack_300 = (byte *)0x0;
          if (pbVar7 != (byte *)0x0) {
            func_0x000107517f0c();
            pbVar7 = pbStack_300;
            pbStack_300 = (byte *)0x0;
            if (pbVar7 != (byte *)0x0) {
              func_0x000107517f0c();
            }
          }
          func_0x00010750bd38(&lStack_2e0);
          if (pbStack_258 != (byte *)0x0) {
            *(long *)(pbStack_258 + 0x90) = plVar12[0x19];
            (**(code **)(*(long *)pbStack_258 + 0x40))(pbStack_258,param_2);
            if (pbStack_258 != (byte *)0x0) goto LAB_107515054;
          }
        }
        else {
LAB_107515054:
          plVar11 = plVar12 + 10;
          FUN_107515340(plVar11,param_7,&pbStack_258);
          pbVar7 = pbStack_258;
          plVar11 = (long *)plVar11[6];
          pbStack_258 = (byte *)0x0;
          if (pbVar7 != (byte *)0x0) {
            func_0x000107517f0c();
          }
          if (plVar11 != (long *)0x0) goto LAB_10751507c;
        }
LAB_107515174:
        bVar10 = false;
        plVar11 = plStack_2d0;
      }
      else {
        plVar11 = (long *)plVar11[6];
        if (plVar11 == (long *)0x0) goto LAB_107515174;
LAB_10751507c:
        plVar14 = plVar11;
        FUN_107515358(&ppuStack_2b8,plVar11,1);
        if ((char)plVar11[0x22] != '\x01') goto LAB_107515174;
        pbVar7 = param_7;
        FUN_1073b724c();
        pbStack_258 = pbVar7;
        plStack_250 = plVar14;
        FUN_107515b50(plVar13,&pbStack_258,plVar11);
        FUN_10751747c(&plStack_2d0,&pbStack_258);
        (**(code **)(*plVar11 + 0x80))(plVar11);
        bVar10 = true;
        plVar11 = plStack_2d0;
      }
      while (uVar2 = plVar11 == &lStack_2c8, !(bool)uVar2) {
        plVar14 = (long *)plVar11[6];
        if (bVar10) {
          (**(code **)(*plVar14 + 0x88))(plVar14);
          plVar8 = plVar14;
          (**(code **)(*plVar14 + 0x78))();
          if ((int)plVar8 != 0) goto LAB_1075151b0;
        }
        else {
LAB_1075151b0:
          FUN_107515358(&ppuStack_2b8,plVar14,0);
          plVar8 = plVar13;
          FUN_107515b50(plVar13,plVar11 + 4,plVar14);
        }
        func_0x000107518124();
        plVar11 = plVar8;
      }
      func_0x00010784ac44(plVar12 + 0xd,2);
      FUN_1075148bc(plVar12,uStack_259,&puStack_290);
      FUN_107514a5c(&pbStack_300,plVar12,param_5);
      FUN_107514c04(plVar12,param_2);
      FUN_107514cac(plVar12);
      func_0x000104c2fe00(&pbStack_258,param_6 + 2);
      uStack_220 = (uint)*param_7;
      uStack_21c = 1;
      uStack_210 = uStack_2f8;
      pbStack_218 = pbStack_300;
      uStack_208 = uStack_2f0;
      pbStack_300 = (byte *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      FUN_1075164a4(extraout_x8_00,&pbStack_258);
      func_0x000107411320(&pbStack_258);
      func_0x00010741134c(&pbStack_300);
      FUN_107517004(&plStack_2d0);
      func_0x0001075171d8(&puStack_290);
      goto LAB_107515278;
    }
  }
  func_0x000107517178(plVar12 + 10);
  func_0x0001075171a8(plVar12 + 0x16);
  *extraout_x8_00 = 0;
  extraout_x8_00[0x58] = 0;
LAB_107515278:
  func_0x000107517f18(uStack_200);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  pbVar7 = pbStack_258;
  pbStack_258 = (byte *)0x0;
  if (pbVar7 != (byte *)0x0) {
    func_0x000107517f0c();
  }
  FUN_107517004(&plStack_2d0);
  func_0x0001075171d8(&puStack_290);
  func_0x000107518018();
  func_0x000107517264();
  return;
}



/* Entry: 107514eb4; end: 10751533f;  */

void FUN_107514eb4(undefined1 *param_1,long param_2,undefined8 param_3,ulong param_4,int param_5,
                  long param_6,long *param_7,byte *param_8,long param_9)

{
  char cVar1;
  undefined1 in_ZR;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 **ppuStack_128;
  long *plStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e1;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_c9;
  byte *pbStack_c8;
  long *plStack_c0;
  uint uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107517f5c();
  uStack_c9 = (undefined1)param_5;
  uStack_70 = extraout_x8;
  if (param_5 == 0) {
    if ((param_4 & 1) != 0) goto LAB_107514f34;
    lVar8 = *(long *)(param_2 + 0x50);
    while (in_ZR = lVar8 == param_2 + 0x58, !(bool)in_ZR) {
      func_0x000107518284();
      func_0x00010751820c();
      lStack_d8 = *param_7;
      *param_7 = 0;
      func_0x00010784ad74(param_2 + 0x68,param_7 + -2,&lStack_d8);
      lVar8 = lStack_d8;
      lStack_d8 = 0;
      if (lVar8 != 0) {
        func_0x000107517f0c();
      }
      func_0x000107518054();
    }
  }
  else {
    func_0x00010784aef0(param_2 + 0x68);
    if ((param_4 & 1) != 0) {
LAB_107514f34:
      iVar2 = (int)*(undefined8 *)(param_6 + 8);
      FUN_107418388();
      if (iVar2 != 0) {
        func_0x00010741657c(*(undefined8 *)(param_6 + 8),0);
        func_0x000107518200();
      }
      lStack_e0 = param_7[0xb];
      uStack_e1 = (undefined1)param_7[0xc];
      ppuStack_128 = &puStack_100;
      puStack_100 = &uStack_f8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      plStack_120 = &lStack_e0;
      puStack_118 = &uStack_e1;
      puStack_110 = &uStack_c9;
      plVar9 = (long *)(param_2 + 0xb0);
      plVar6 = (long *)*plVar9;
      plVar5 = (long *)(param_2 + 0xb8);
      lStack_138 = *plVar5;
      lStack_130 = *(long *)(param_2 + 0xc0);
      plStack_140 = &lStack_138;
      if (lStack_130 != 0) {
        *(long **)(lStack_138 + 0x10) = &lStack_138;
        *plVar9 = (long)plVar5;
        *plVar5 = 0;
        *(undefined8 *)(param_2 + 0xc0) = 0;
        plStack_140 = plVar6;
      }
      uStack_108 = param_3;
      func_0x0001075171a8(plVar9);
      lVar8 = param_2 + 0x50;
      FUN_107517028(lVar8,param_8);
      if (param_2 + 0x58 == lVar8) {
        func_0x00010784ae48(&pbStack_c8,param_2 + 0x68,param_8);
        if (pbStack_c8 == (byte *)0x0) {
          uStack_148 = *(undefined8 *)(param_2 + 0x48);
          uStack_150 = *(undefined8 *)(param_2 + 0x40);
          if (*(long *)(param_2 + 0x48) != 0) {
            plVar5 = (long *)(*(long *)(param_2 + 0x48) + 8);
            do {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar7) {
                *plVar5 = *plVar5 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          func_0x000107517234(&pbStack_170,*(undefined8 *)(param_9 + 0x18),param_8,&uStack_150,
                              param_2 + 0xa0);
          pbVar3 = pbStack_c8;
          pbStack_c8 = pbStack_170;
          pbStack_170 = (byte *)0x0;
          if (pbVar3 != (byte *)0x0) {
            func_0x000107517f0c();
            pbVar3 = pbStack_170;
            pbStack_170 = (byte *)0x0;
            if (pbVar3 != (byte *)0x0) {
              func_0x000107517f0c();
            }
          }
          func_0x00010750bd38(&uStack_150);
          if (pbStack_c8 != (byte *)0x0) {
            *(undefined8 *)(pbStack_c8 + 0x90) = *(undefined8 *)(param_2 + 200);
            (**(code **)(*(long *)pbStack_c8 + 0x40))(pbStack_c8,param_3);
            if (pbStack_c8 != (byte *)0x0) goto LAB_107515054;
          }
        }
        else {
LAB_107515054:
          lVar8 = param_2 + 0x50;
          FUN_107515340(lVar8,param_8,&pbStack_c8);
          pbVar3 = pbStack_c8;
          plVar5 = *(long **)(lVar8 + 0x30);
          pbStack_c8 = (byte *)0x0;
          if (pbVar3 != (byte *)0x0) {
            func_0x000107517f0c();
          }
          if (plVar5 != (long *)0x0) goto LAB_10751507c;
        }
LAB_107515174:
        bVar7 = false;
        plVar5 = plStack_140;
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x30);
        if (plVar5 == (long *)0x0) goto LAB_107515174;
LAB_10751507c:
        plVar6 = plVar5;
        FUN_107515358(&ppuStack_128,plVar5,1);
        if ((char)plVar5[0x22] != '\x01') goto LAB_107515174;
        pbVar3 = param_8;
        FUN_1073b724c();
        pbStack_c8 = pbVar3;
        plStack_c0 = plVar6;
        FUN_107515b50(plVar9,&pbStack_c8,plVar5);
        FUN_10751747c(&plStack_140,&pbStack_c8);
        (**(code **)(*plVar5 + 0x80))(plVar5);
        bVar7 = true;
        plVar5 = plStack_140;
      }
      while (in_ZR = plVar5 == &lStack_138, !(bool)in_ZR) {
        plVar6 = (long *)plVar5[6];
        if (bVar7) {
          (**(code **)(*plVar6 + 0x88))(plVar6);
          plVar4 = plVar6;
          (**(code **)(*plVar6 + 0x78))();
          if ((int)plVar4 != 0) goto LAB_1075151b0;
        }
        else {
LAB_1075151b0:
          FUN_107515358(&ppuStack_128,plVar6,0);
          plVar4 = plVar9;
          FUN_107515b50(plVar9,plVar5 + 4,plVar6);
        }
        func_0x000107518124();
        plVar5 = plVar4;
      }
      func_0x00010784ac44(param_2 + 0x68,2);
      FUN_1075148bc(param_2,uStack_c9,&puStack_100);
      FUN_107514a5c(&pbStack_170,param_2,param_6);
      FUN_107514c04(param_2,param_3);
      FUN_107514cac(param_2);
      func_0x000104c2fe00(&pbStack_c8,param_7 + 2);
      uStack_90 = (uint)*param_8;
      uStack_8c = 1;
      uStack_80 = uStack_168;
      pbStack_88 = pbStack_170;
      uStack_78 = uStack_160;
      pbStack_170 = (byte *)0x0;
      uStack_168 = 0;
      uStack_160 = 0;
      FUN_1075164a4(param_1,&pbStack_c8);
      func_0x000107411320(&pbStack_c8);
      func_0x00010741134c(&pbStack_170);
      FUN_107517004(&plStack_140);
      func_0x0001075171d8(&puStack_100);
      goto LAB_107515278;
    }
  }
  func_0x000107517178(param_2 + 0x50);
  func_0x0001075171a8(param_2 + 0xb0);
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_107515278:
  func_0x000107517f18(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pbVar3 = pbStack_c8;
  pbStack_c8 = (byte *)0x0;
  if (pbVar3 != (byte *)0x0) {
    func_0x000107517f0c();
  }
  FUN_107517004(&plStack_140);
  func_0x0001075171d8(&puStack_100);
  func_0x000107518018();
  func_0x000107517264();
  return;
}



/* Entry: 107515340; end: 107515357;  */

void FUN_107515340(void)

{
  func_0x000107517264();
  return;
}



/* Entry: 107515358; end: 10751539f;  */

void FUN_107515358(uint param_1)

{
  long unaff_x20;
  
  func_0x000107518048();
  func_0x00010751826c();
  if ((param_1 & 1) != 0) {
    func_0x000107518020();
    func_0x0001075180bc();
  }
  if (**(char **)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001075180d0();
  }
  return;
}



/* Entry: 1075153a0; end: 1075153eb;  */

uint FUN_1075153a0(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  uVar8 = (uint)(bVar4 < bVar3);
  if (bVar3 < bVar4) {
    uVar8 = 0xffffffff;
  }
  if (bVar3 == bVar4) {
    sVar5 = *(short *)(param_1 + 2);
    sVar6 = *(short *)(param_2 + 2);
    uVar8 = (uint)(sVar6 < sVar5);
    if (sVar5 < sVar6) {
      uVar8 = 0xffffffff;
    }
    if (sVar5 == sVar6) {
      bVar3 = param_1[4];
      bVar4 = param_2[4];
      uVar8 = (uint)(bVar4 < bVar3);
      if (bVar3 < bVar4) {
        uVar8 = 0xffffffff;
      }
      if (bVar3 == bVar4) {
        uVar7 = *(uint *)(param_1 + 8);
        uVar1 = *(uint *)(param_2 + 8);
        uVar8 = (uint)(uVar1 < uVar7);
        if (uVar7 < uVar1) {
          uVar8 = 0xffffffff;
        }
        if (uVar7 == uVar1) {
          uVar1 = *(uint *)(param_1 + 0xc);
          uVar2 = *(uint *)(param_2 + 0xc);
          uVar7 = (uint)(uVar2 < uVar1);
          if (uVar1 < uVar2) {
            uVar7 = 0xffffffff;
          }
          uVar8 = 0;
          if (uVar1 != uVar2) {
            uVar8 = uVar7;
          }
        }
      }
      return uVar8;
    }
  }
  return uVar8;
}



/* Entry: 1075153ec; end: 107515533;  */

undefined1  [16] FUN_1075153ec(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 in_ZR;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined8 extraout_x8;
  undefined1 auVar8 [16];
  undefined1 uStack_13f;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 auStack_118 [2];
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined4 auStack_f0 [6];
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  lVar4 = param_1;
  func_0x000107517f5c();
  puVar2 = *(undefined8 **)(lVar4 + 0x38);
  uVar1 = **(undefined4 **)(lVar4 + 0x40);
  auStack_f0[0] = 0xb9;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  ppuStack_d0 = &PTR_DAT_110996720;
  uStack_c8 = 0;
  uStack_b0 = 0xb9;
  uStack_a8 = 0;
  uStack_a4 = 1;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_48 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108);
  puVar5 = auStack_f0;
  func_0x00010726e300(puVar5,&UNK_10f415ff2,auStack_108);
  func_0x000104c2fe00(auStack_80,param_1);
  FUN_107371bc4(puVar5,&UNK_10f415feb,auStack_80);
  uStack_110 = 1;
  uStack_128 = *puVar2;
  uStack_120 = 3;
  auStack_118[0] = uVar1;
  func_0x00010751805c(puVar2,puVar5,auStack_118,&uStack_128);
  func_0x000104c2f714(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar6 = auStack_f0;
  func_0x000107262330(puVar6);
  func_0x000107517f18(uStack_48);
  if ((bool)in_ZR) {
    auVar8._8_8_ = puVar5;
    auVar8._0_8_ = puVar6;
    return auVar8;
  }
  ___stack_chk_fail();
  uVar7 = SUB82(puVar5,0);
  func_0x000104c2f714(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar5 = auStack_f0;
  func_0x000107262330();
  func_0x000107518018();
  auVar3[1] = uStack_13f;
  auVar3[0] = *(undefined1 *)puVar5;
  auVar3._2_2_ = uVar7;
  auVar3._4_8_ = *(undefined8 *)(puVar5 + 1);
  auVar3._12_4_ = puVar5[3];
  return auVar3;
}



/* Entry: 107515534; end: 107515557;  */

undefined1  [16] FUN_107515534(undefined1 *param_1,undefined2 param_2)

{
  undefined1 auVar1 [16];
  undefined1 uStack_f;
  
  auVar1[1] = uStack_f;
  auVar1[0] = *param_1;
  auVar1._2_2_ = param_2;
  auVar1._4_8_ = *(undefined8 *)(param_1 + 4);
  auVar1._12_4_ = *(undefined4 *)(param_1 + 0xc);
  return auVar1;
}



/* Entry: 107515558; end: 1075159ab;  */

void FUN_107515558(undefined8 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  long *****ppppplVar3;
  long *******ppppppplVar4;
  bool bVar5;
  bool bVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  undefined8 *puVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 uStack_10c;
  long ******pppppplStack_108;
  long ******pppppplStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [16];
  double dStack_e0;
  double dStack_d8;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  undefined8 uStack_b8;
  long *****ppppplStack_b0;
  long ******pppppplStack_a8;
  undefined8 uStack_a0;
  
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(long *)(param_2 + 0xc0) != 0) {
    if (*param_3 != param_3[1]) {
      ppppplStack_c8 = (long *****)0x0;
      ppppplStack_c0 = (long *****)0x0;
      uStack_b8 = 0;
      ppppppplVar7 = (long *******)&ppppplStack_c8;
      FUN_10740ed44(ppppppplVar7,param_3[1] - *param_3 >> 4);
      puVar1 = (undefined8 *)param_3[1];
      for (puVar12 = (undefined8 *)*param_3; puVar12 != puVar1; puVar12 = puVar12 + 2) {
        dVar18 = (double)NEON_ucvtf((ulong)*(uint *)(param_4 + 0x50));
        ppppplStack_b0 = (long *****)*puVar12;
        dVar19 = (double)puVar12[1];
        pppppplStack_a8 = (long ******)(dVar18 - dVar19);
        auVar20 = FUN_1073c2238(param_4,0,&ppppplStack_b0);
        ppppppplVar7 = (long *******)&ppppplStack_c8;
        dStack_e0 = dVar19;
        auStack_f0 = auVar20;
        func_0x000104c31a04(ppppppplVar7,auStack_f0);
      }
      dStack_d8 = -INFINITY;
      dStack_e0 = -INFINITY;
      auStack_f0._8_8_ = INFINITY;
      auStack_f0._0_8_ = INFINITY;
      for (pppppplVar9 = (long ******)ppppplStack_c8; pppppplVar9 != (long ******)ppppplStack_c0;
          pppppplVar9 = pppppplVar9 + 2) {
        auStack_f0._0_8_ =
             auStack_f0._0_8_ ^
             (auStack_f0._0_8_ ^ (ulong)*pppppplVar9) &
             -(ulong)((double)*pppppplVar9 < (double)auStack_f0._0_8_);
        auStack_f0._8_8_ =
             auStack_f0._8_8_ ^
             (auStack_f0._8_8_ ^ (ulong)pppppplVar9[1]) &
             -(ulong)((double)pppppplVar9[1] < (double)auStack_f0._8_8_);
        dStack_e0 = (double)((ulong)dStack_e0 ^
                            ((ulong)dStack_e0 ^ (ulong)*pppppplVar9) &
                            -(ulong)(dStack_e0 < (double)*pppppplVar9));
        dStack_d8 = (double)((ulong)dStack_d8 ^
                            ((ulong)dStack_d8 ^ (ulong)pppppplVar9[1]) &
                            -(ulong)(dStack_d8 < (double)pppppplVar9[1]));
      }
      pppppplStack_100 = (long ******)0x0;
      lStack_f8 = 0;
      ppppppplVar10 = *(long ********)(param_2 + 0xb0);
      pppppplStack_108 = (long ******)&pppppplStack_100;
      while (ppppppplVar10 != (long *******)(param_2 + 0xb8)) {
        ppppppplVar8 = &pppppplStack_100;
        ppppppplVar13 = &pppppplStack_100;
        ppppppplVar14 = &pppppplStack_100;
        if (&pppppplStack_100 == (long *******)pppppplStack_108) {
LAB_107515708:
          if ((long *******)pppppplStack_100 == (long *******)0x0) goto LAB_107515724;
          ppppppplVar14 = ppppppplVar8 + 1;
LAB_10751571c:
          ppppppplVar13 = ppppppplVar8;
          if (*ppppppplVar14 == (long ******)0x0) goto LAB_107515724;
        }
        else {
          func_0x00010002c810();
          ppppppplVar7 = ppppppplVar8 + 4;
          FUN_107517e8c(ppppppplVar7,ppppppplVar10 + 4);
          ppppppplVar4 = (long *******)pppppplStack_100;
          if ((int)ppppppplVar7 != 0) goto LAB_107515708;
          while (ppppppplVar4 != (long *******)0x0) {
            while( true ) {
              ppppppplVar8 = ppppppplVar4;
              ppppppplVar7 = ppppppplVar10 + 4;
              FUN_107517e8c(ppppppplVar7,ppppppplVar8 + 4);
              ppppppplVar13 = ppppppplVar8;
              if ((int)ppppppplVar7 == 0) break;
              ppppppplVar4 = (long *******)*ppppppplVar8;
              ppppppplVar14 = ppppppplVar8;
              if ((long *******)*ppppppplVar8 == (long *******)0x0) goto LAB_107515724;
            }
            ppppppplVar7 = ppppppplVar8 + 4;
            FUN_107517e8c(ppppppplVar7,ppppppplVar10 + 4);
            if ((int)ppppppplVar7 == 0) goto LAB_10751571c;
            ppppppplVar14 = ppppppplVar8 + 1;
            ppppppplVar4 = (long *******)ppppppplVar8[1];
          }
LAB_107515724:
          func_0x000107518090();
          pppppplStack_a8 = (long ******)&pppppplStack_100;
          uStack_a0 = 1;
          pppppplVar11 = ppppppplVar10[6];
          pppppplVar9 = ppppppplVar10[4];
          ppppppplVar7[5] = ppppppplVar10[5];
          ppppppplVar7[4] = pppppplVar9;
          ppppppplVar7[6] = pppppplVar11;
          *ppppppplVar7 = (long ******)0x0;
          ppppppplVar7[1] = (long ******)0x0;
          ppppppplVar7[2] = (long ******)ppppppplVar13;
          *ppppppplVar14 = (long ******)ppppppplVar7;
          if ((long *******)*pppppplStack_108 != (long *******)0x0) {
            pppppplStack_108 = (long ******)*pppppplStack_108;
          }
          func_0x00010002c5b0(pppppplStack_100);
          lStack_f8 = lStack_f8 + 1;
          ppppplStack_b0 = (long *****)0x0;
          ppppppplVar7 = (long *******)&ppppplStack_b0;
          func_0x000107517e64();
        }
        func_0x000107518124();
        ppppppplVar10 = ppppppplVar7;
      }
      fVar15 = (float)func_0x0001074182d8(param_4);
      ppppppplVar7 = (long *******)pppppplStack_108;
      while (ppppppplVar7 != &pppppplStack_100) {
        pppppplVar11 = ppppppplVar7[6];
        dVar18 = *(double *)(param_4 + 0x78);
        bVar2 = *(byte *)((long)ppppppplVar7 + 0x24);
        fVar16 = (float)(*(code *)(*pppppplVar11)[0xd])(pppppplVar11,param_5);
        pppppplVar9 = pppppplVar11;
        (*(code *)(*pppppplVar11)[0xe])();
        fVar16 = (fVar15 * fVar16 * 8192.0 * 0.001953125) /
                 (float)(dVar18 / (double)(1 << (ulong)(bVar2 & 0x1f)));
        if ((int)pppppplVar9 == 0) {
          fVar16 = fVar16 + 8064.0;
        }
        ppppppplVar10 = ppppppplVar7 + 4;
        func_0x000107518214(ppppppplVar10,auStack_f0);
        fVar17 = (float)((int)ppppppplVar10 >> 0x10) - fVar16;
        bVar5 = false;
        bVar6 = false;
        if ((float)(int)(short)ppppppplVar10 - fVar16 < 8192.0) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar17)) {
            bVar5 = fVar17 < 8192.0;
            bVar6 = false;
          }
        }
        if (bVar5 != bVar6) {
          ppppppplVar10 = ppppppplVar7 + 4;
          func_0x000107518214(ppppppplVar10,&dStack_e0);
          if ((0.0 <= fVar16 + (float)(int)(short)ppppppplVar10) &&
             (0.0 <= fVar16 + (float)((int)ppppppplVar10 >> 0x10))) {
            ppppplStack_b0 = (long *****)0x0;
            pppppplStack_a8 = (long ******)0x0;
            uStack_a0 = 0;
            func_0x000104c33d24(&ppppplStack_b0,(long)ppppplStack_c0 - (long)ppppplStack_c8 >> 4);
            ppppplVar3 = ppppplStack_c0;
            for (pppppplVar9 = (long ******)ppppplStack_c8; pppppplVar9 != (long ******)ppppplVar3;
                pppppplVar9 = pppppplVar9 + 2) {
              ppppppplVar10 = ppppppplVar7 + 4;
              func_0x000107518214(ppppppplVar10,pppppplVar9);
              uStack_10c = SUB84(ppppppplVar10,0);
              func_0x0001072c7768(&ppppplStack_b0,&uStack_10c);
            }
            (*(code *)(*pppppplVar11)[10])
                      (pppppplVar11,param_1,&ppppplStack_b0,param_4,param_5,param_6,param_7,param_8)
            ;
            ppppppplVar10 = (long *******)&ppppplStack_b0;
            func_0x000104c336c8();
          }
        }
        func_0x000107518124();
        ppppppplVar7 = ppppppplVar10;
      }
      FUN_107517edc(pppppplStack_100);
      func_0x000104c31c5c(&ppppplStack_c8);
    }
  }
  return;
}



/* Entry: 1075159ac; end: 107515a17;  */

void FUN_1075159ac(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = *(long **)(param_2 + 0x50);
  while (plVar1 != (long *)(param_2 + 0x58)) {
    plVar1 = (long *)plVar1[6];
    (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_3);
    func_0x000107518054();
  }
  return;
}



/* Entry: 107515a18; end: 107515adf;  */

void FUN_107515a18(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d0 [72];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [72];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = *(undefined1 **)(param_2 + 0x50);
  while (puVar1 != (undefined1 *)(param_2 + 0x58)) {
    (**(code **)(**(long **)(puVar1 + 0x30) + 0x60))(auStack_78);
    FUN_107440ae8(auStack_d0,auStack_78);
    uStack_80 = *(undefined8 *)(puVar1 + 0x28);
    uStack_88 = *(undefined8 *)(puVar1 + 0x20);
    func_0x000107516534(param_1,auStack_d0);
    func_0x0001073ebef4(auStack_d0);
    puVar1 = auStack_78;
    func_0x0001073ebef4();
    func_0x00010751812c();
  }
  return;
}



/* Entry: 107515ae0; end: 107515b4f;  */

void FUN_107515ae0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  while (lVar1 != param_1 + 0x58) {
    func_0x00010784ab24(*(undefined8 *)(lVar1 + 0x30));
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 107515b50; end: 107515c43;  */

void FUN_107515b50(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x000107517dc8(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    plVar2 = plVar1;
    func_0x000107518090();
    uStack_50 = 1;
    lVar3 = *param_2;
    plVar2[5] = param_2[1];
    plVar2[4] = lVar3;
    plVar2[6] = param_3;
    plStack_58 = param_1 + 1;
    FUN_107517e3c(param_1,uStack_48,plVar1,plVar2);
    uStack_60 = 0;
    func_0x000107517e64(&uStack_60);
  }
  return;
}



/* Entry: 107515c44; end: 107515cc3;  */

long * FUN_107515c44(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x000107518084();
  if (unaff_x19 + 0x58 != param_1) {
    plVar1 = *(long **)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000107515c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 107515cc4; end: 107515d93;  */

void FUN_107515cc4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long *plVar2;
  long alStack_60 [4];
  undefined4 uStack_40;
  
  func_0x000107518048();
  alStack_60[1] = 0;
  alStack_60[0] = 0;
  alStack_60[3] = 0;
  alStack_60[2] = 0;
  uStack_40 = 0x3f800000;
  plVar2 = *(long **)(param_1 + 0xb0);
  while (plVar2 != (long *)(param_1 + 0xb8)) {
    FUN_10738ca84(alStack_60,(long)plVar2 + 0x24);
    plVar2 = (long *)plVar2[6];
    func_0x0001075181c0(*(undefined8 *)(*plVar2 + 0xa8));
    func_0x000107518054();
  }
  plVar2 = *(long **)(unaff_x20 + 0x50);
  while (plVar2 != (long *)(unaff_x20 + 0x58)) {
    plVar1 = alStack_60;
    func_0x00010726bce4(alStack_60,(undefined1 *)((long)plVar2 + 0x24));
    if (((ulong)plVar1 & 1) == 0) {
      plVar1 = (long *)plVar2[6];
      func_0x0001075181c0(*(undefined8 *)(*plVar1 + 0xa8));
    }
    func_0x000107518054();
    plVar2 = plVar1;
  }
  func_0x00010784af18(unaff_x20 + 0x68);
  func_0x000107272920(alStack_60);
  return;
}



/* Entry: 107515d94; end: 107516187;  */

void FUN_107515d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined4 *puStack_138;
  long lStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined4 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint auStack_a8 [2];
  undefined4 uStack_a0;
  undefined8 uStack_70;
  
  uVar12 = 0;
  lVar3 = param_1;
  func_0x000107517f5c();
  plVar10 = *(long **)(lVar3 + 0x38);
  puStack_170 = &UNK_10e52b660;
  puStack_168 = (undefined4 *)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  puStack_190 = &UNK_10e52b660;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  plVar11 = *(long **)(lVar3 + 0x50);
  uStack_70 = extraout_x8;
  while (plVar11 != (long *)(lVar3 + 0x58)) {
    if (*(char *)(plVar11[6] + 0x8a) == '\x01') {
      auStack_a8[0] = (uint)*(byte *)(plVar11[6] + 0x10);
      ppuVar5 = &puStack_170;
      puVar7 = auStack_a8;
      FUN_1075169c8();
      if (ppuVar5 == (undefined **)0x0) {
        FUN_107516a98(&uStack_120,&puStack_170,auStack_a8);
        *(undefined4 *)((long)puStack_118 + 4) = 1;
      }
      else {
        puVar7[1] = puVar7[1] + 1;
      }
      lVar9 = plVar11[6];
      ppuVar5 = &puStack_190;
      lVar8 = lVar9 + 0x20;
      FUN_1074fd058();
      uVar12 = uVar12 + 1;
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar5 = &puStack_190;
        FUN_1074f8038(ppuVar5,lVar9 + 0x20);
        *(undefined4 *)ppuVar5 = 1;
      }
      else {
        *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
      }
    }
    func_0x00010002c7d4();
  }
  uStack_120 = (undefined *)CONCAT44(uStack_120._4_4_,0x26);
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_100 = &PTR_DAT_110996720;
  uStack_f8 = 0;
  uStack_e0 = 0x26;
  uStack_d8 = 0;
  uStack_d4 = 1;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_a0 = 1;
  lStack_130 = *plVar10;
  uStack_128 = 3;
  puVar4 = &uStack_120;
  auStack_a8[0] = uVar12;
  func_0x00010751805c(plVar10,puVar4,auStack_a8,&lStack_130);
  func_0x000107518154();
  puStack_118 = puStack_168;
  uStack_120 = puStack_170;
  func_0x000107516e3c(&uStack_120);
  puVar1 = puStack_118;
  puStack_140 = uStack_120;
  while (puStack_138 = puVar1, puStack_140 != (undefined *)0x0) {
    uStack_120._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
    uStack_120 = (undefined *)CONCAT44(uStack_120._4_4_,0x27);
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    ppuStack_100 = &PTR_DAT_110996720;
    uStack_e0 = 0x27;
    uStack_d8 = 0;
    uStack_d4 = 1;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puVar4 = &uStack_120;
    func_0x0001072a0318(puVar4,&DAT_10f34b835,*puVar1);
    auStack_a8[0] = puVar1[1];
    uStack_a0 = 1;
    lStack_130 = *plVar10;
    uStack_128 = 3;
    func_0x00010751805c(plVar10,puVar4,auStack_a8,&lStack_130);
    func_0x000107518154();
    puStack_140 = puStack_140 + 1;
    puStack_138 = puStack_138 + 2;
    func_0x000107516e3c(&puStack_140);
    puVar1 = puStack_138;
  }
  ppuVar5 = &puStack_190;
  FUN_1074f5fc8();
  ppuStack_150 = ppuVar5;
  while (puStack_148 = puVar4, ppuStack_150 != (undefined **)0x0) {
    uStack_120._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
    uStack_120 = (undefined *)CONCAT44(uStack_120._4_4_,0x28);
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    ppuStack_100 = &PTR_DAT_110996720;
    uStack_e0 = 0x28;
    uStack_d8 = 0;
    uStack_d4 = 1;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    func_0x000104c2fe00(auStack_a8,puVar4);
    puVar6 = &uStack_120;
    FUN_107371bc4(puVar6,&UNK_10f415feb,auStack_a8);
    lStack_130 = CONCAT44(lStack_130._4_4_,*(undefined4 *)(puVar4 + 7));
    uStack_128 = 1;
    puStack_140 = (undefined *)*plVar10;
    puStack_138 = (undefined4 *)CONCAT44(puStack_138._4_4_,3);
    func_0x00010751805c(plVar10,puVar6,&lStack_130,&puStack_140);
    func_0x000104c2f714(auStack_a8);
    func_0x000107518154();
    FUN_1074f5fe8(&ppuStack_150);
    puVar4 = puStack_148;
  }
  FUN_1074f8344(&puStack_190);
  FUN_107516e90(&puStack_170);
  plVar11 = *(long **)(param_1 + 0x50);
  while (uVar2 = plVar11 == (long *)(lVar3 + 0x58), !(bool)uVar2) {
    plVar11 = (long *)plVar11[6];
    (**(code **)(*plVar11 + 0xb8))(plVar11,param_2,param_3);
    func_0x0001075180ac();
  }
  func_0x00010002b838(&uStack_120,&DAT_10f34bce8);
  FUN_1075153ec(param_1,&uStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
  func_0x000107517f18(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
    do {
      func_0x000107518018();
    } while( true );
  }
  return;
}



/* Entry: 107516188; end: 107516197;  */

void FUN_107516188(void)

{
  return;
}



/* Entry: 107516198; end: 1075162af;  */

long FUN_107516198(long param_1)

{
  func_0x0001075161c0(param_1 + 0x18);
  FUN_1075164c0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1075162b0; end: 1075162fb;  */

/* WARNING: Possible PIC construction at 0x0001075162ec: Changing call to branch */

undefined1  [16] FUN_1075162b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x0001075181f4();
  FUN_107516320();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1075162fc; end: 10751631f;  */

void FUN_1075162fc(void)

{
  FUN_107516320();
  return;
}



/* Entry: 107516320; end: 10751633b;  */

ulong FUN_107516320(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  if (param_2 >> 0x3c != 0) {
    func_0x000104bd35f4();
    func_0x0001075181a8();
    FUN_1075163d0();
    lVar2 = *param_1;
    if (lVar2 == 0) {
      lVar1 = 0x30;
      __Znwm();
      uStack_60 = 1;
      uVar3 = *unaff_x20;
      *(undefined8 *)(lVar1 + 0x24) = unaff_x20[1];
      *(undefined8 *)(lVar1 + 0x1c) = uVar3;
      lStack_68 = unaff_x19 + 8;
      FUN_107516444();
      uStack_70 = 0;
      func_0x00010751646c(&uStack_70);
    }
    return (ulong)(lVar2 == 0);
  }
  param_2 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2);
  return param_2;
}



/* Entry: 10751633c; end: 1075163cf;  */

bool FUN_10751633c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  func_0x0001075181a8();
  FUN_1075163d0();
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar1 = 0x30;
    __Znwm();
    uStack_50 = 1;
    uVar3 = *unaff_x20;
    *(undefined8 *)(lVar1 + 0x24) = unaff_x20[1];
    *(undefined8 *)(lVar1 + 0x1c) = uVar3;
    lStack_58 = unaff_x19 + 8;
    FUN_107516444();
    uStack_60 = 0;
    func_0x00010751646c(&uStack_60);
  }
  return lVar2 == 0;
}



/* Entry: 1075163d0; end: 107516443;  */

long * FUN_1075163d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  long *plVar5;
  
  func_0x000107518048();
  plVar4 = (long *)(unaff_x20 + 8);
  plVar3 = (long *)*plVar4;
  plVar5 = plVar4;
  while (plVar3 != (long *)0x0) {
    while (plVar5 = plVar3, uVar2 = param_3, FUN_1075153a0(param_3,(long)plVar5 + 0x1c),
          ((uint)uVar2 >> 7 & 1) != 0) {
      plVar3 = (long *)*plVar5;
      plVar4 = plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_107516434;
    }
    uVar1 = (int)plVar5 + 0x1c;
    func_0x00010751821c();
    if ((uVar1 >> 7 & 1) == 0) break;
    plVar4 = plVar5 + 1;
    plVar3 = (long *)*plVar4;
  }
LAB_107516434:
  *unaff_x19 = plVar5;
  return plVar4;
}



/* Entry: 107516444; end: 10751648b;  */

void FUN_107516444(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107517f80();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107518070();
  func_0x00010751817c();
  return;
}


