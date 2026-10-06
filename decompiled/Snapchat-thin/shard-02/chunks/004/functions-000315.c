/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d72c44; end: 101d72d5b;  */

long FUN_101d72c44(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72d58);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72d5c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000101d737c0(0,0x112e29160,&PTR_PTR_1126e0da8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000101d737c0(0,0x112e29160,&PTR_PTR_1126e0da8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72d54);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101d72d5c; end: 101d72e7f;  */

long FUN_101d72d5c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72e7c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72e80);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d51a30;
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d51a30;
      func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72e78);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101d72e80; end: 101d72f97;  */

long FUN_101d72e80(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72f94);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72f98);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000101d737c0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000101d737c0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72f90);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101d72f98; end: 101d72fdf;  */

void FUN_101d72f98(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d72fe0);
  (*pcVar3)();
}



/* Entry: 101d72fe0; end: 101d733d7;  */

undefined *
FUN_101d72fe0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_68;
  
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar12 = param_2;
    func_0x000107c61174();
    lVar4 = param_3;
    func_0x000107c5db64();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      lVar13 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    func_0x000107c40c70(param_3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c47580();
    func_0x000107f654bc(param_3);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      func_0x000107c5fadc(lVar13,lVar12);
      func_0x000107c6142c(lVar12);
    }
    puVar11 = PTR_PTR_1126e0dd0;
    func_0x000107c610f8(PTR_PTR_1126e0dd0);
    func_0x000107c49438();
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar13);
    func_0x000107c61174(puVar11);
  }
  puVar5 = PTR_PTR_1126d8280;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  puVar9 = puVar5;
  func_0x000107c545ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733c4);
    (*pcVar3)();
  }
  puVar5 = puVar9;
  func_0x000107c58f60();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733c8);
    (*pcVar3)();
  }
  puVar9 = puVar5;
  func_0x000107c564c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar5);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733cc);
    (*pcVar3)();
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
  }
  puVar5 = puVar9;
  func_0x000107c547f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_4);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733d0);
    (*pcVar3)();
  }
  puVar9 = puVar5;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126d84c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar9;
  puStack_68 = puVar9;
  func_0x000107c61174();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c61174();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar8 = puVar9;
        }
        func_0x000107c60480(puVar8);
      }
      puVar9 = (undefined *)0x0;
      FUN_101d72504(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    uVar1 = *(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    uVar2 = *(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x18);
    puVar8 = puVar9;
    if (uVar2 >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < uVar2);
      FUN_101d72504(puVar8,uVar1 + 1,1,puVar9);
    }
    *(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) = uVar1 + 1;
    *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + uVar1 * 8 + 0x20) = puVar7;
  }
  FUN_101d73780(&puStack_68,0x112e29f80,&UNK_10da12330);
  uVar10 = 0;
  func_0x000101d737c0(0,0x112e29160,&PTR_PTR_1126e0da8);
  puVar9 = puVar8;
  func_0x000107c5fc48(puVar8,uVar10);
  func_0x000107c6142c(puVar8);
  puVar8 = puVar5;
  func_0x000107c545dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733d4);
    (*pcVar3)();
  }
  puVar5 = puVar8;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar11);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d733d8);
    (*pcVar3)();
  }
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 101d733d8; end: 101d73453;  */

void FUN_101d733d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d71908(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d73454; end: 101d734ab;  */

void FUN_101d73454(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d734ac;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d71dd0,0,0);
  return;
}



/* Entry: 101d734ac; end: 101d734e7;  */

void FUN_101d734ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d734e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d734e8; end: 101d734ef;  */

void FUN_101d734e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d734f0; end: 101d73527;  */

void FUN_101d734f0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 101d73528; end: 101d7377f;  */

void FUN_101d73528(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar5;
  
  puVar10 = param_1;
  func_0x000107c42940();
  func_0x000107c61180();
  if (puVar10 != (undefined1 *)0x0) {
    uVar6 = 0;
    func_0x000101d737c0(0,0x112e29f28,&PTR_PTR_1126e0db8);
    puVar7 = puVar10;
    func_0x000107c5fc54(puVar10,uVar6);
    func_0x000107c61170(puVar10);
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar10 = *(undefined1 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar10 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar7) {
        puVar10 = puVar7;
      }
      func_0x000107c60480();
    }
    if (puVar10 != (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
      do {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(undefined1 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101d736f4);
            (*pcVar3)();
          }
          puVar8 = *(undefined1 **)(puVar7 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar11;
          FUN_101d720a8(puVar11,puVar7,&PTR_PTR_1126e0db8,0x112e29f28);
        }
        puVar1 = puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101d736f0);
          (*pcVar3)();
        }
        puVar9 = puVar8;
        func_0x000107c5bd14();
        if ((puVar9 != (undefined1 *)0xfa9) && (puVar9 != (undefined1 *)0x7d0)) {
          FUN_101d71f58();
          uVar5 = (uint)puVar9;
          uVar4 = SUB81(puVar9,0);
          FUN_101d71794();
          func_0x000107c613f8(&UNK_11047f130,puVar9,0,0);
          uVar2 = 0x19;
          if ((uVar5 & 0xff) != 0x1b) {
            uVar2 = uVar4;
          }
          *puVar9 = uVar2;
          func_0x000107c61654();
          func_0x000107c6142c(puVar7);
          func_0x000107c61170(puVar8);
          return;
        }
        func_0x000107c61170(puVar8);
        puVar11 = puVar11 + 1;
      } while (puVar1 != puVar10);
      func_0x000107c6142c(puVar7);
      func_0x000107c5200c();
      FUN_101d71f58();
      uVar5 = (uint)param_1 & 0xff;
      if (uVar5 == 7) {
        return;
      }
      if (uVar5 == 0x1b) {
        return;
      }
      puVar10 = param_1;
      FUN_101d71794();
      func_0x000107c613f8(&UNK_11047f130,puVar10,0,0);
      *puVar10 = (char)param_1;
      goto LAB_101d73754;
    }
    func_0x000107c6142c(puVar7);
  }
  func_0x000107c5200c();
  FUN_101d71f58();
  if (((uint)param_1 & 0xff) == 0x1b) {
    return;
  }
  puVar10 = param_1;
  FUN_101d71794();
  func_0x000107c613f8(&UNK_11047f130,puVar10,0,0);
  *puVar10 = (char)param_1;
LAB_101d73754:
  func_0x000107c61654();
  return;
}



/* Entry: 101d73780; end: 101d737ff;  */

undefined8 FUN_101d73780(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101d73800; end: 101d738ff;  */

undefined * FUN_101d73800(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e29f90,&UNK_10da131a0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d738fc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101d73900);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101d73900; end: 101d73913;  */

void FUN_101d73900(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11047f0a0;
  if (lRam0000000112e29fb0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e29fb0 = param_1;
  }
  return;
}



/* Entry: 101d73914; end: 101d73957;  */

void FUN_101d73914(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101d73958; end: 101d73ad3;  */

undefined * FUN_101d73958(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  ulong unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101d73c08();
  puVar1 = PTR_PTR_1126a94b8;
  func_0x000107c610f8(PTR_PTR_1126a94b8);
  func_0x000107c45e78();
  if ((unaff_x20 >> 0x20 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c52b88(puVar1);
    func_0x000107c61170(puVar2);
  }
  (**(code **)(lVar6 + 0x10))(puVar5);
  puVar3 = puVar5;
  func_0x000107c605a0(puVar5,param_1,param_2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar6 + 0x20))(param_2,puVar5,param_1);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,param_1);
    puVar5 = param_1;
  }
  puVar4 = puVar3;
  func_0x000103fbd0c8(puVar3);
  func_0x000107c614ac(puVar3);
  func_0x000107c5fadc(puVar4,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c5662c(puVar1);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101d73ad4; end: 101d73ae7;  */

bool FUN_101d73ad4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d73ae8; end: 101d73b93;  */

void FUN_101d73ae8(void)

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



/* Entry: 101d73b94; end: 101d73bb7;  */

void FUN_101d73b94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d73bb8; end: 101d73bdf;  */

void FUN_101d73bb8(uint *param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = (uint)*unaff_x20;
  func_0x000101d73ba4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d73be0; end: 101d73c07;  */

uint FUN_101d73be0(void)

{
  byte *unaff_x20;
  
  return (uint)(*unaff_x20 < 0x18) & 0xe00200U >> (ulong)(*unaff_x20 & 0x1f);
}



/* Entry: 101d73c08; end: 101d73e33;  */

ulong FUN_101d73c08(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long extraout_x12;
  long extraout_x13;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  ulong auStack_b0 [6];
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  lVar8 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x13;
  pcVar10 = *(code **)(extraout_x12 + 0x10);
  (*pcVar10)(lVar7,param_1,param_2);
  uVar4 = 0x112e29d50;
  func_0x0001000285a8(0x112e29d50,&UNK_10da123a0);
  puVar2 = auStack_b0;
  func_0x000107c6147c(puVar2,lVar7,param_2,uVar4,6);
  if (((ulong)puVar2 & 1) == 0) {
    auStack_b0[4] = 0;
    auStack_b0[1] = 0;
    auStack_b0[0] = 0;
    auStack_b0[3] = 0;
    auStack_b0[2] = 0;
    FUN_101d70a94(auStack_b0);
  }
  else {
    func_0x000101d70af0(auStack_b0,auStack_b0 + 5);
    lVar1 = lStack_68;
    uVar6 = uStack_70;
    func_0x0001000a8868(auStack_b0 + 5,uStack_70);
    lVar3 = 0;
    func_0x000107c614b8(0,lVar1,uVar6,&UNK_10e7ddb68,&UNK_10e7ddb70);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar1 + 0x10))(lVar7 - extraout_x8_00,uVar6,lVar1);
    uVar4 = 0;
    FUN_101d73900(0);
    puVar2 = auStack_b0;
    func_0x000107c6147c(puVar2,lVar7 - extraout_x8_00,lVar3,uVar4,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar9 = auStack_b0[0] & 0xffffffff;
      func_0x0001000a8868(auStack_b0 + 5,uStack_70);
      uVar5 = uStack_70;
      (**(code **)(lStack_68 + 0x18))(uStack_70,lStack_68);
      func_0x0001000834e4(auStack_b0 + 5);
      uVar6 = 0x100000000;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      goto LAB_101d73e10;
    }
    func_0x0001000834e4(auStack_b0 + 5);
  }
  (*pcVar10)(lVar8,param_1,param_2);
  puVar2 = auStack_b0 + 5;
  func_0x000107c6147c(puVar2,lVar8,param_2,&UNK_1107ac098,6);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000101d70adc(auStack_b0[5],uStack_80);
  }
  uVar9 = 0;
  uVar6 = 0;
LAB_101d73e10:
  return uVar6 | uVar9;
}



/* Entry: 101d73e34; end: 101d73f9b;  */

int FUN_101d73e34(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1a) {
      iVar2 = 4;
    }
    if (param_2 + 0x1a >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d73eb0;
        goto LAB_101d73e94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d73e94:
      return ((uint)*param_1 | uVar1 << 8) - 0x1a;
    }
  }
LAB_101d73eb0:
  iVar2 = *param_1 - 0x1b;
  if (*param_1 < 0x1b) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d73f9c; end: 101d73fdb;  */

void FUN_101d73f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da12408;
  func_0x000107c61520(&UNK_10da12408,&UNK_11047f130);
  puRam0000000112e29fe0 = puVar1;
  return;
}



/* Entry: 101d73fdc; end: 101d74003;  */

void FUN_101d73fdc(undefined4 *param_1)

{
  undefined4 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x4b;
  if (*unaff_x20 != '\0') {
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101d74004; end: 101d747a7;  */

void FUN_101d74004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  return;
}



/* Entry: 101d747a8; end: 101d74823;  */

/* WARNING: Possible PIC construction at 0x000101d74800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74804) */

void FUN_101d747a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_101d79788();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047f890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d74824; end: 101d7482f;  */

/* WARNING: Possible PIC construction at 0x000101d74800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74804) */

void FUN_101d74824(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_101d79788();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11047f890;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d74830; end: 101d748e7;  */

void FUN_101d74830(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar1 = -0x2fffffffffffffe3;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f00efa0);
    lVar2 = lVar1;
    func_0x000107b50e0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4f7fc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101d748e8; end: 101d748ef;  */

void FUN_101d748e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3e270();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar1 = -0x2fffffffffffffe3;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f00efa0);
    lVar2 = lVar1;
    func_0x000107b50e0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4f7fc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101d748f0; end: 101d74977;  */

/* WARNING: Possible PIC construction at 0x000101d7494c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d7495c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74950) */
/* WARNING: Removing unreachable block (ram,0x000101d74960) */

void FUN_101d748f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d7be6c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047fa10;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d74978; end: 101d74983;  */

/* WARNING: Possible PIC construction at 0x000101d7494c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d7495c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74950) */
/* WARNING: Removing unreachable block (ram,0x000101d74960) */

void FUN_101d74978(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000101d7be6c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047fa10;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d74984; end: 101d74b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74984(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c41258();
  func_0x000107c61180();
  func_0x000107c61428(param_12 + 0x10,auStack_78,0,0);
  param_12 = param_12 + 0x10;
  func_0x000107c61648();
  if (param_12 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = *(long *)(param_12 + 0x48);
    func_0x000107c61174();
    func_0x000107c61574(param_12);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_1130807f0);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
  }
  lVar1 = 0;
  FUN_101d7e88c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar4 = _DAT_112e2a698;
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2 + lVar4,1,1,lVar3);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_8;
  *(undefined8 *)(lVar2 + 0x48) = param_9;
  *(undefined8 *)(lVar2 + 0x50) = param_10;
  *(undefined8 *)(lVar2 + 0x58) = param_11;
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  *(undefined8 *)(lVar2 + 0x68) = param_13;
  *(undefined8 *)(lVar2 + 0x70) = param_14;
  FUN_101d74b7c(param_15,lVar2 + 0x78);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047fcb0;
  *param_1 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c615f0(param_14);
  return;
}



/* Entry: 101d74b7c; end: 101d74bbf;  */

long FUN_101d74b7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101d74bc0; end: 101d74bff;  */

void FUN_101d74bc0(void)

{
  long unaff_x20;
  
  FUN_101d74984(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),unaff_x20 + 0x78);
  return;
}



/* Entry: 101d74c00; end: 101d74cbb;  */

/* WARNING: Possible PIC construction at 0x000101d74c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74c84) */
/* WARNING: Removing unreachable block (ram,0x000101d74c94) */

void FUN_101d74c00(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d71338();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  FUN_101d74b7c(param_7,lVar2 + 0x38);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047ef90;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d74cbc; end: 101d74ccf;  */

/* WARNING: Possible PIC construction at 0x000101d74c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74c84) */
/* WARNING: Removing unreachable block (ram,0x000101d74c94) */

void FUN_101d74cbc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101d71338();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  FUN_101d74b7c(unaff_x20 + 0x38,lVar6 + 0x38);
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047ef90;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d74cd0; end: 101d74d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74cd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101d74fac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e2a160) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e2a168) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101d74d58; end: 101d74d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74d58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_101d74fac();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e2a160) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e2a168) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101d74d60; end: 101d74eef;  */

/* WARNING: Possible PIC construction at 0x000101d74d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d74dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74db0) */
/* WARNING: Removing unreachable block (ram,0x000101d74da0) */
/* WARNING: Removing unreachable block (ram,0x000101d74d90) */
/* WARNING: Removing unreachable block (ram,0x000101d74d80) */
/* WARNING: Removing unreachable block (ram,0x000101d74d70) */
/* WARNING: Removing unreachable block (ram,0x000101d74dc0) */

void FUN_101d74d60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d74ef0; end: 101d74f13;  */

void FUN_101d74ef0(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101d74140();
  *param_1 = param_2;
  return;
}



/* Entry: 101d74f14; end: 101d74f73; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService init] */

void FUN_101d74f14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupMemoriesServicesImpl.MemoriesService",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d74f40);
  (*pcVar1)();
}



/* Entry: 101d74f74; end: 101d74fab; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d74f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d74f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2a160));
  return;
}



/* Entry: 101d74fac; end: 101d74fcb;  */

void FUN_101d74fac(void)

{
  func_0x000107c61168(&PTR_PTR_112803598);
  return;
}



/* Entry: 101d74fcc; end: 101d74fdf; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService updateEntriesWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = param_3;
  FUN_101d7e978(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d74fe0; end: 101d74ff3; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService deleteEntriesWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d74fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = param_3;
  FUN_101d71358(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d74ff4; end: 101d75083;  */

void FUN_101d74ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = param_3;
  (*param_5)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d75084; end: 101d7512f; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService uploadTagsWithStepData:] */

void FUN_101d75084(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126a94c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a94c8;
  func_0x000107c610f8(PTR_PTR_1126a94c8);
  func_0x000107c45e78();
  func_0x000107c54654(puVar1);
  func_0x000107c61170(puVar2);
  func_0x0001000285a8(0x112e2a198,&UNK_10da125d8);
  ppuVar3 = &puStack_38;
  puStack_38 = puVar1;
  func_0x000104888f7c(ppuVar3);
  ppuVar4 = ppuVar3;
  func_0x000103edf0bc();
  func_0x000107c61170(puVar1);
  func_0x000107c61574(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 101d75130; end: 101d75137; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101d75130(void)

{
  return 0;
}



/* Entry: 101d75138; end: 101d75143; -[_TtC35SCMemPlatBackupMemoriesServicesImpl15MemoriesService pushToValdiMarshaller:] */

void FUN_101d75138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101d75144; end: 101d753c3;  */

long FUN_101d75144(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101d753c4; end: 101d75447;  */

/* WARNING: Possible PIC construction at 0x000101d753d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d753dc) */

void FUN_101d753c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101d75448; end: 101d754e3;  */

undefined8 * FUN_101d75448(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 101d754e4; end: 101d75507;  */

void FUN_101d754e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 101d75508; end: 101d7556b;  */

undefined8 * FUN_101d75508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 101d7556c; end: 101d75647;  */

int FUN_101d7556c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101d75648; end: 101d75683;  */

undefined8 * FUN_101d75648(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101d75684; end: 101d756e7;  */

undefined8 * FUN_101d75684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101d756e8; end: 101d7572b;  */

undefined8 * FUN_101d756e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 101d7572c; end: 101d757cf;  */

int FUN_101d7572c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101d757d0; end: 101d75823;  */

undefined8 * FUN_101d757d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 101d75824; end: 101d75867;  */

undefined8 * FUN_101d75824(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 101d75868; end: 101d75927;  */

int FUN_101d75868(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101d75928; end: 101d75a8b;  */

void FUN_101d75928(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x800000010f00f010;
  uVar2 = 0xd000000000000013;
  if (cVar1 != '\x01') {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x73656972746e65;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d75a8c; end: 101d75b33;  */

void FUN_101d75a8c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101d75b34; end: 101d75b83;  */

void FUN_101d75b34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101d77fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101d75b84; end: 101d75d03;  */

void FUN_101d75b84(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_58;
  
  lVar1 = 0x112e2a210;
  uStack_68 = param_4;
  func_0x0001000285a8(0x112e2a210,&UNK_10da127d8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_101d77fb8();
  func_0x000107c606ec(puVar5,&UNK_11047f690,&UNK_11047f690,param_1,uVar2,uVar3);
  uStack_61 = 0;
  uVar2 = 0x112e2a1b0;
  uStack_58 = param_2;
  func_0x0001000285a8(0x112e2a1b0,&UNK_10da127a8);
  uVar3 = 0x112e2a218;
  FUN_101d7891c(0x112e2a218,FUN_101d7898c,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60530(&uStack_58,&uStack_61,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_62 = 1;
    func_0x000107c60528(param_3,uStack_68,&uStack_62,lVar1);
    (**(code **)(lVar4 + 8))(puVar5,lVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar5,lVar1);
  }
  return;
}



/* Entry: 101d75d04; end: 101d75f0b;  */

/* WARNING: Removing unreachable block (ram,0x000101d75e8c) */

void FUN_101d75d04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [15];
  undefined1 uStack_81;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  lVar1 = 0x112e2a3d0;
  func_0x0001000285a8(0x112e2a3d0,&UNK_10da12c60);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000101d792a8();
  func_0x000107c606ec(puVar4,&UNK_11047f7b0,&UNK_11047f7b0,param_1,uVar2,uVar3);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  func_0x000107c60520(*unaff_x20,unaff_x20[1],&uStack_80,lVar1);
  if (unaff_x21 == 0) {
    uStack_80._0_1_ = 1;
    func_0x000107c60538(unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&uStack_80,lVar1);
    uVar2 = unaff_x20[4];
    uStack_80 = CONCAT71(uStack_80._1_7_,2);
    func_0x000107c60528(uVar2,*(undefined1 *)(unaff_x20 + 5),&uStack_80,lVar1);
    uStack_78 = unaff_x20[7];
    uStack_80 = unaff_x20[6];
    uStack_68 = unaff_x20[9];
    uStack_70 = unaff_x20[8];
    uStack_60 = *(undefined1 *)(unaff_x20 + 10);
    uStack_81 = 3;
    FUN_101d7889c();
    func_0x000107c60530(&uStack_80,&uStack_81,lVar1,&UNK_11047f450,uVar2);
    uStack_80 = unaff_x20[0xb];
    uStack_81 = 4;
    uVar2 = 0x112e2a2e8;
    func_0x0001000285a8(0x112e2a2e8,&UNK_10da12c58);
    uVar3 = uVar2;
    FUN_101d79428();
    func_0x000107c60530(&uStack_80,&uStack_81,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 101d75f0c; end: 101d7605b;  */

void FUN_101d75f0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [13];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e2a208;
  func_0x0001000285a8(0x112e2a208,&UNK_10da127d0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000101d788dc();
  func_0x000107c606ec(puVar4,&UNK_11047f570,&UNK_11047f570,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6055c(unaff_x20[2],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60528(unaff_x20[3],*(undefined1 *)(unaff_x20 + 4),&uStack_53,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 101d7605c; end: 101d761cb;  */

void FUN_101d7605c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_90 [15];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  lVar3 = 0x112e2a1e0;
  func_0x0001000285a8(0x112e2a1e0,&UNK_10da127b8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_101d787b8();
  puVar4 = &UNK_11047f600;
  func_0x000107c606ec(puVar5,&UNK_11047f600,&UNK_11047f600,param_1,uVar1,uVar2);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_60 = *(undefined1 *)(unaff_x20 + 4);
  uStack_81 = 0;
  FUN_101d7889c();
  func_0x000107c60530(&uStack_80,&uStack_81,lVar3,&UNK_11047f450,puVar4);
  if (unaff_x21 == 0) {
    uStack_78 = unaff_x20[6];
    uStack_80 = unaff_x20[5];
    uStack_68 = unaff_x20[8];
    uStack_70 = unaff_x20[7];
    uStack_60 = *(undefined1 *)(unaff_x20 + 9);
    uStack_81 = 1;
    func_0x000107c60530(&uStack_80,&uStack_81,lVar3,&UNK_11047f450,puVar4);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 101d761cc; end: 101d761f7;  */

void FUN_101d761cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_101d77df8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 101d761f8; end: 101d76213;  */

void FUN_101d761f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101d75b84(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 101d76214; end: 101d7622f;  */

undefined8 FUN_101d76214(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  lVar1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  uVar5 = param_1[2];
  if (uVar6 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    func_0x000107c61434(lVar1);
    FUN_101d76f50(uVar6,lVar1);
    func_0x000107c6142c(lVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if ((char)uVar5 == '\x01') {
    if ((char)lVar4 == '\x01') {
      return 1;
    }
  }
  else if (((char)lVar4 != '\x01') && (uVar2 == uVar3)) {
    return 1;
  }
  return 0;
}



/* Entry: 101d76230; end: 101d7650f;  */

void FUN_101d76230(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x617461645f6d656d;
  uVar1 = 0xeb0000000064695f;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000011;
    uVar1 = 0x800000010f00f0c0;
  }
  uVar2 = 0xeb0000000065646f;
  uVar4 = 0x635f737574617473;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0x64695f7972746e65;
  if (bVar3 != 0) {
    uVar5 = 0x6d756e5f716573;
  }
  uVar1 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe700000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d76510; end: 101d76673;  */

void FUN_101d76510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x617461645f6d656d;
  uVar1 = 0xeb0000000064695f;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000011;
    uVar1 = 0x800000010f00f0c0;
  }
  uVar2 = 0xeb0000000065646f;
  uVar4 = 0x635f737574617473;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0x64695f7972746e65;
  if (bVar3 != 0) {
    uVar5 = 0x6d756e5f716573;
  }
  uVar1 = 0xe800000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe700000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101d76674; end: 101d76697;  */

void FUN_101d76674(undefined1 *param_1,undefined1 param_2)

{
  FUN_101d78038();
  *param_1 = param_2;
  return;
}



/* Entry: 101d76698; end: 101d766af;  */

undefined1  [16] FUN_101d76698(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101d766b0; end: 101d766ff;  */

void FUN_101d766b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101d792a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101d76700; end: 101d76747;  */

void FUN_101d76700(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101d7809c(&uStack_80);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
    param_1[9] = uStack_38;
    param_1[8] = uStack_40;
    param_1[0xb] = uStack_28;
    param_1[10] = uStack_30;
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
  }
  return;
}



/* Entry: 101d76748; end: 101d767b3;  */

void FUN_101d76748(void)

{
  FUN_101d75d04();
  return;
}



/* Entry: 101d767b4; end: 101d76997;  */

void FUN_101d767b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x800000010f00f070;
  uVar2 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar4 = 0xea00000000006570;
    uVar2 = 0x79745f7972746e65;
  }
  uVar1 = 0x64697575;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d76998; end: 101d76a53;  */

void FUN_101d76998(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x800000010f00f070;
  uVar2 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar4 = 0xea00000000006570;
    uVar2 = 0x79745f7972746e65;
  }
  uVar1 = 0x64697575;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101d76a54; end: 101d76a77;  */

void FUN_101d76a54(undefined1 *param_1,undefined1 param_2)

{
  FUN_101d78380();
  *param_1 = param_2;
  return;
}



/* Entry: 101d76a78; end: 101d76a8f;  */

undefined1  [16] FUN_101d76a78(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101d76a90; end: 101d76adf;  */

void FUN_101d76a90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101d788dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101d76ae0; end: 101d76b23;  */

void FUN_101d76ae0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_101d783e4(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 101d76b24; end: 101d76b7f;  */

void FUN_101d76b24(void)

{
  FUN_101d75f0c();
  return;
}



/* Entry: 101d76b80; end: 101d76cbf;  */

void FUN_101d76b80(void)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0xd000000000000010;
  pcVar1 = "entry_mem_data_id";
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000011;
    pcVar1 = "service_status_code";
  }
  func_0x000107c5fb58(auStack_68,uVar3,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d76cc0; end: 101d76ccb;  */

void FUN_101d76cc0(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101d76ccc; end: 101d76d43;  */

void FUN_101d76ccc(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101d76d44; end: 101d76dc3;  */

void FUN_101d76d44(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0xd000000000000010;
  pcVar1 = "entry_mem_data_id";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000011;
    pcVar1 = "service_status_code";
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 101d76dc4; end: 101d76e3f;  */

void FUN_101d76dc4(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101d76e40; end: 101d76e4b;  */

undefined1  [16] FUN_101d76e40(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101d76e4c; end: 101d76e9b;  */

void FUN_101d76e4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101d787b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101d76e9c; end: 101d76ee3;  */

void FUN_101d76e9c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_101d7859c(&uStack_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
    param_1[7] = CONCAT71(uStack_37,uStack_38);
    param_1[6] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x41) = uStack_2f;
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Entry: 101d76ee4; end: 101d76f4f;  */

void FUN_101d76ee4(void)

{
  FUN_101d7605c();
  return;
}



/* Entry: 101d76f50; end: 101d7799b;  */

undefined8 FUN_101d76f50(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 auStack_180 [96];
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar7 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar8 = (ulong *)(param_1 + 0x20);
  puVar9 = (ulong *)(param_2 + 0x20);
  do {
    lVar7 = lVar7 + -1;
    uStack_f8 = puVar8[5];
    uStack_100 = puVar8[4];
    uStack_e8 = puVar8[7];
    uStack_f0 = puVar8[6];
    uStack_d8 = puVar8[9];
    uStack_e0 = puVar8[8];
    uStack_c8 = puVar8[0xb];
    uStack_d0 = puVar8[10];
    uStack_118 = puVar8[1];
    uVar10 = *puVar8;
    uStack_108 = puVar8[3];
    uStack_110 = puVar8[2];
    uStack_98 = puVar9[5];
    uStack_a0 = puVar9[4];
    uStack_88 = puVar9[7];
    uStack_90 = puVar9[6];
    uStack_78 = puVar9[9];
    uStack_80 = puVar9[8];
    uStack_68 = puVar9[0xb];
    uStack_70 = puVar9[10];
    uStack_b8 = puVar9[1];
    uStack_c0 = *puVar9;
    uStack_a8 = puVar9[3];
    uStack_b0 = puVar9[2];
    uStack_120 = uVar10;
    if (uStack_118 == 0) {
      if (uStack_b8 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_b8 == 0) {
        return 0;
      }
      if (((uVar10 != uStack_c0) || (uStack_118 != uStack_b8)) &&
         (func_0x000107c605b8(), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    uVar4 = uStack_78;
    uVar3 = uStack_80;
    uVar1 = uStack_d8;
    uVar10 = uStack_e0;
    if ((char)uStack_108 == '\x01') {
      if ((char)uStack_a8 != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)uStack_a8 == '\x01') {
        return 0;
      }
      if (uStack_110 != uStack_b0) {
        return 0;
      }
    }
    if ((char)uStack_f8 == '\x01') {
      if ((char)uStack_98 != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)uStack_98 == '\x01') {
        return 0;
      }
      if (uStack_100 != uStack_a0) {
        return 0;
      }
    }
    if (uStack_e8 == 0) {
      if (uStack_88 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_88 == 0) {
        return 0;
      }
      cVar2 = (char)uStack_d0;
      cVar5 = (char)uStack_70;
      if ((uStack_f0 == uStack_90) && (uStack_e8 == uStack_88)) {
        if (uStack_e0 != uStack_80) {
          return 0;
        }
      }
      else {
        uVar6 = uStack_f0;
        func_0x000107c605b8();
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        if (uVar10 != uVar3) {
          return 0;
        }
      }
      if (cVar2 == '\x01') {
        if (cVar5 != '\x01') {
          return 0;
        }
      }
      else {
        if (cVar5 == '\x01') {
          return 0;
        }
        if (uVar1 != uVar4) {
          return 0;
        }
      }
    }
    uVar1 = uStack_68;
    uVar10 = uStack_c8;
    if (uStack_c8 == 0) {
      if (uStack_68 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_68 == 0) {
        return 0;
      }
      FUN_101d789cc(&uStack_120,auStack_180);
      FUN_101d789cc(&uStack_c0,auStack_180);
      func_0x000107c61434(uVar1);
      func_0x000101d771b8(uVar10,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000101d78a00(&uStack_c0);
      func_0x000101d78a00(&uStack_120);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
    }
    if (lVar7 == 0) {
      return 1;
    }
    puVar8 = puVar8 + 0xc;
    puVar9 = puVar9 + 0xc;
  } while( true );
}



/* Entry: 101d7799c; end: 101d77a27;  */

undefined8 FUN_101d7799c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    if ((char)param_1[4] == '\x01') {
      if ((char)param_2[4] == '\x01') {
        return 1;
      }
    }
    else if ((char)param_2[4] != '\x01' && param_1[3] == param_2[3]) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 101d77a28; end: 101d77bb7;  */

undefined8 FUN_101d77a28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  char cStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  char cStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar7 = *param_1;
  uVar9 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  cVar6 = (char)param_1[4];
  uStack_b0 = *param_2;
  uStack_a8 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  cVar5 = (char)param_2[4];
  uStack_a0 = uVar2;
  uStack_98 = uVar4;
  cStack_90 = cVar5;
  if (uVar9 == 0) {
    if (uStack_a8 != 0) goto LAB_101d77ac8;
  }
  else {
    if (uStack_a8 == 0) goto LAB_101d77ac8;
    if (uVar7 == uStack_b0 && uVar9 == uStack_a8) {
      if (uVar1 != uVar2) {
        return 0;
      }
    }
    else {
      func_0x000107c605b8(uVar7,uVar9,uStack_b0,uStack_a8,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      if (uVar1 != uVar2) {
        return 0;
      }
    }
    if (cVar6 == '\x01') {
      if (cVar5 != '\x01') {
        return 0;
      }
    }
    else {
      if (cVar5 == '\x01') {
        return 0;
      }
      if (uVar3 != uVar4) {
        return 0;
      }
    }
  }
  uStack_88 = param_1[5];
  uVar9 = param_1[6];
  uStack_78 = param_1[7];
  uStack_70 = param_1[8];
  cStack_68 = (char)param_1[9];
  uStack_d8 = param_2[5];
  uStack_a8 = param_2[6];
  uStack_c8 = param_2[7];
  uStack_c0 = param_2[8];
  cStack_b8 = (char)param_2[9];
  uVar7 = uStack_88;
  uVar1 = uStack_78;
  uVar3 = uStack_70;
  cVar6 = cStack_68;
  uStack_b0 = uStack_d8;
  uStack_a0 = uStack_c8;
  uStack_98 = uStack_c0;
  cStack_90 = cStack_b8;
  if (uVar9 == 0) {
    if (uStack_a8 == 0) {
      return 1;
    }
  }
  else if (uStack_a8 != 0) {
    puVar8 = &uStack_88;
    uStack_d0 = uStack_a8;
    uStack_80 = uVar9;
    FUN_101d7799c(puVar8,&uStack_d8);
    if (((ulong)puVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
LAB_101d77ac8:
  cStack_b8 = cVar6;
  uStack_c0 = uVar3;
  uStack_c8 = uVar1;
  uStack_d8 = uVar7;
  uStack_d0 = uVar9;
  func_0x000107c61434(uStack_a8);
  func_0x000107c61434(uVar9);
  func_0x000101d78a7c(&uStack_d8,0x112e2a1f0,&UNK_10da127c0);
  return 0;
}



/* Entry: 101d77bb8; end: 101d77d47;  */

undefined8 FUN_101d77bb8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined1 uStack_28;
  
  uVar4 = 0;
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = *param_1;
    if ((uVar3 != *param_2 || uVar2 != uVar1) &&
       (func_0x000107c605b8(uVar3,uVar2,*param_2,uVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  if ((char)param_1[3] == '\x01') {
    if ((char)param_2[3] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[3] == '\x01' || param_1[2] != param_2[2]) {
    return 0;
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[5] == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  uVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_50 = (undefined1)param_1[10];
    uStack_48 = param_2[6];
    uStack_30 = param_2[9];
    uStack_38 = param_2[8];
    uStack_28 = (undefined1)param_2[10];
    uStack_68 = param_1[7];
    uStack_40 = uVar1;
    FUN_101d7799c(&uStack_70,&uStack_48);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar4 = param_1[0xb];
  uVar1 = param_2[0xb];
  if (uVar4 == 0) {
    if (uVar1 == 0) {
      return 1;
    }
  }
  else if (uVar1 != 0) {
    func_0x000107c61434(uVar1);
    func_0x000101d771b8(uVar4,uVar1);
    func_0x000107c6142c(uVar1);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


