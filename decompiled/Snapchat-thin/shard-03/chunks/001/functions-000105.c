/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025240bc; end: 102524107;  */

undefined8 * FUN_1025240bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102524108; end: 1025241b3;  */

int FUN_102524108(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1025241b4; end: 10252425f;  */

void FUN_1025241b4(void)

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



/* Entry: 102524260; end: 1025242b7;  */

void FUN_102524260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1025242b8; end: 1025242ef;  */

void FUN_1025242b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined8 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1025242f0; end: 10252430b;  */

void FUN_1025242f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252430c,0,0);
  return;
}



/* Entry: 10252430c; end: 102524507;  */

void FUN_10252430c(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_70;
  long alStack_68 [2];
  
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  uVar11 = *(ulong *)(unaff_x22 + 0xb0);
  if (uVar11 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar3 = uVar11;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar9 = *(long *)(unaff_x22 + 0xb0);
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102524498);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(lVar9 + 0x20 + uVar12 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar12;
        func_0x0001011f491c(uVar12,*(undefined8 *)(unaff_x22 + 0xb0));
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102524494);
        (*pcVar2)();
      }
      uVar13 = uVar12 + 1;
      uStack_70 = uVar6;
      FUN_102524868(alStack_68,&uStack_70,(undefined8 *)(unaff_x22 + 0x90));
      func_0x000107c61170(uVar6);
      lVar1 = alStack_68[0];
      if (alStack_68[0] != 0) {
        puVar5 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar7 < 0)) ||
           (puVar5 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar4 = puVar7;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x0001011f467c(0,puVar4 + 1,1,puVar7);
        }
        uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar10 + 0x10);
        puVar7 = puVar5;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x0001011f467c(puVar7,uVar6 + 1,1,puVar5);
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
        *(long *)(uVar10 + uVar6 * 8 + 0x20) = lVar1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar3);
  }
  *(undefined **)(unaff_x22 + 0xd0) = puVar7;
  plVar8 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102524508;
  lVar9 = *(long *)(unaff_x22 + 0xc0);
  plVar8[4] = (long)puVar7;
  plVar8[5] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102524ef4,0,0);
  return;
}



/* Entry: 102524508; end: 10252456f;  */

void FUN_102524508(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xe0) = param_1;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102524570;
  }
  else {
    pcVar1 = FUN_102524778;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102524570; end: 102524777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102524570(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x22 + 0xe0);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11307fc80);
    uVar3 = uVar1;
    func_0x000107c61434();
    FUN_1029c67d8();
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
    func_0x000107c6142c(uVar1);
    uVar1 = *(undefined8 *)(lVar4 + _DAT_11307fc78);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000100083b20(unaff_x22 + 0x98);
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar4 = lVar2;
    func_0x000107c4c3ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x100) = lVar2;
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      FUN_102524c60(uVar3,0x22,*(undefined8 *)(unaff_x22 + 0xb8));
      *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
      func_0x000100083b20(unaff_x22 + 0xa8);
      lVar4 = *(long *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(lVar4 + _DAT_112fa9088);
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
      *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x1025247ac;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar4,0);
      uVar3 = 0x112ea3c70;
      func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11051cdc0;
      *(long *)(unaff_x22 + 0x70) = lVar4;
      func_0x000107c51ddc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c6142c(uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61170(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102524774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0xc);
  return;
}



/* Entry: 102524778; end: 1025247eb;  */

void FUN_102524778(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001025247a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0xc);
  return;
}



/* Entry: 1025247ec; end: 102524867;  */

void FUN_1025247ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c615e8(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102524864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 102524868; end: 102524b2f;  */

/* WARNING: Removing unreachable block (ram,0x000102524b2c) */
/* WARNING: Removing unreachable block (ram,0x000102524b28) */

void FUN_102524868(ulong *param_1,ulong *param_2,long *param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  ppuVar10 = (undefined **)*param_2;
  ppuVar8 = ppuVar10;
  plVar3 = param_3;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = ppuVar8;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar8;
  func_0x000107c5faec();
  plVar4 = plVar3;
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar10;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar9 = ppuVar8;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar9;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  ppuVar9 = ppuVar8;
  func_0x000107c5faec();
  plVar5 = plVar4;
  func_0x000107c61170(ppuVar8);
  ppuVar7 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar8 = ppuVar7;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar8);
  if ((ppuVar2 == ppuVar7) && (plVar3 == plVar5)) {
    func_0x000107c6142c(plVar3);
    plVar3 = plVar5;
LAB_1025249d0:
    func_0x000107c6142c(plVar3);
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102524b24);
      (*pcVar1)();
    }
    *param_3 = *param_3 + 1;
    func_0x000104522c9c(0);
    func_0x00010452281c(ppuVar9,plVar4);
  }
  else {
    ppuVar8 = ppuVar2;
    plVar6 = plVar3;
    func_0x000107c605b8(ppuVar2,plVar3,ppuVar7,plVar5,0);
    func_0x000107c6142c(plVar5);
    if (((ulong)ppuVar8 & 1) != 0) goto LAB_1025249d0;
    ppuVar7 = &PTR____CFConstantStringClassReference_110f52c98;
    ppuVar8 = ppuVar7;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar8);
    if ((ppuVar2 == ppuVar7) && (plVar3 == plVar6)) {
      func_0x000107c6142c(plVar3);
      func_0x000107c6142c(plVar6);
    }
    else {
      func_0x000107c605b8(ppuVar2,plVar3,ppuVar7,plVar6,0);
      func_0x000107c6142c(plVar3);
      func_0x000107c6142c(plVar6);
      if (((ulong)ppuVar2 & 1) == 0) {
        func_0x000107c6142c(plVar4);
        ppuVar9 = (undefined **)0x0;
        goto LAB_102524a0c;
      }
    }
    func_0x000107c4e3a4();
    func_0x000107c61180();
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = ppuVar10;
      func_0x000107c40808();
      func_0x000107c61170(ppuVar10);
    }
    if (SCARRY8(*param_3,(long)ppuVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102524b28);
      (*pcVar1)();
    }
    *param_3 = (long)ppuVar8 + *param_3;
    func_0x000104522c9c(0);
    func_0x00010452292c(ppuVar9,plVar4);
  }
  func_0x000107c6142c(plVar4);
LAB_102524a0c:
  *param_1 = (ulong)ppuVar9;
  return;
}



/* Entry: 102524b30; end: 102524b47;  */

void FUN_102524b30(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102524b48,0,0);
  return;
}



/* Entry: 102524b48; end: 102524c0f;  */

void FUN_102524b48(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000102524b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102524c10;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11051cdf8;
  func_0x000107c613fc(&UNK_11051cdf8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1025251d0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102524c10; end: 102524c4f;  */

void FUN_102524c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102524c50,0,0);
  return;
}



/* Entry: 102524c50; end: 102524c5f;  */

void FUN_102524c50(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102524c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102524c60; end: 102524edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102524c60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000100083b20(&lStack_68);
  uVar2 = *(undefined8 *)(lStack_68 + _DAT_112fa9088);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_68);
  uVar3 = uVar2;
  func_0x000107c42340(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126aaa08;
  func_0x000107c610f8(PTR_PTR_1126aaa08);
  uVar3 = param_2;
  func_0x000107c5fadc(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c47e9c(puVar4);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5e4a4(puVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
  }
  puVar7 = puVar5;
  func_0x000107c5e870(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar5 = puVar7;
  func_0x000107c5e500(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar6 = puVar5;
  func_0x000107c5e690(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee70();
  (**(code **)(lVar8 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar7 = puVar6;
  func_0x000107c5e5b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  puVar5 = puVar7;
  func_0x000107c3ecc8(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  return puVar5;
}



/* Entry: 102524edc; end: 102524ef3;  */

void FUN_102524edc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102524ef4,0,0);
  return;
}



/* Entry: 102524ef4; end: 10252506b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102524ef4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  puVar1 = *(undefined1 **)(lVar6 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x30) = puVar2;
  func_0x000107c61170();
  if (puVar2 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x0001000285a8(0x112ea3c80,&UNK_10dab6860);
    uVar3 = 0;
    func_0x000104522c9c(0);
    func_0x000107c5fc48(uVar5,uVar3);
    func_0x000107c5b59c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar1 = puVar2;
    func_0x000100759c94(puVar2,0);
    *(undefined1 **)(unaff_x22 + 0x38) = puVar1;
    func_0x000107c61170(puVar2);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10252506c;
                    /* WARNING: Could not recover jumptable at 0x000102525020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_102524b30();
    return;
  }
  FUN_102525190();
  func_0x000107c613f8(&UNK_11051ce90,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102525068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252506c; end: 1025250bf;  */

void FUN_10252506c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(undefined1 *)(lVar1 + 0x50) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025250c0,0,0);
  return;
}



/* Entry: 1025250c0; end: 102525177;  */

void FUN_1025250c0(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x18,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102525148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102525174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 102525178; end: 10252518f;  */

long FUN_102525178(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102525190; end: 1025251cf;  */

void FUN_102525190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab6924;
  func_0x000107c61520(&UNK_10dab6924,&UNK_11051ce90);
  puRam0000000112ea3c78 = puVar1;
  return;
}



/* Entry: 1025251d0; end: 10252521b;  */

void FUN_1025251d0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_10252521c(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 10252521c; end: 10252539b;  */

void FUN_10252521c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10252539c; end: 1025253db;  */

void FUN_10252539c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea3c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dab68fc;
  func_0x000107c61520(&UNK_10dab68fc,&UNK_11051ce90);
  puRam0000000112ea3c88 = puVar1;
  return;
}



/* Entry: 1025253dc; end: 1025253e3;  */

undefined8 * FUN_1025253dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1025253e4; end: 10252542f;  */

void FUN_1025253e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025254bc,param_1);
  return;
}



/* Entry: 102525430; end: 1025254bb;  */

void FUN_102525430(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e50c28;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025254bc; end: 1025254c3;  */

void FUN_1025254bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e50c28;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025254c4; end: 10252565b;  */

void FUN_1025254c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3c90,&UNK_10dab6968);
  puVar1 = &UNK_11051cf40;
  func_0x000107c613fc(&UNK_11051cf40,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_10252565c,puVar1);
  return;
}



/* Entry: 10252565c; end: 10252566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252565c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1025264c0();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112ea3c98) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112ea3ca0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ea3ca8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ea3cb0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ea3cb8) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 10252566c; end: 1025257e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252566c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3c98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3ca0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3ca8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3cb0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3cb8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025257e8; end: 102525b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025257e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lStack_58;
  
  uVar4 = param_2;
  func_0x000100083b20(&lStack_58);
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_58);
  uVar3 = uVar1;
  func_0x000107c5d984(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  FUN_1029c626c(param_3,uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  if (param_3 == 0) {
    FUN_102525b68(0);
  }
  else {
    puVar2 = &UNK_11051cfd0;
    func_0x000107c613fc(&UNK_11051cfd0,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    *(long *)(puVar2 + 0x28) = param_3;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    uVar3 = 0x50;
    func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6a08,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102525b40; end: 102525b67; -[_TtC27MapDropsShareImplementation18DropsShareWorkflow sendDropShareToChat] */

void FUN_102525b40(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102525708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102525b68; end: 102525c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102525b68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long alStack_48 [3];
  
  FUN_10252612c();
  func_0x000100083b20(alStack_48);
  lVar1 = _DAT_112fa90a8;
  plVar4 = alStack_48;
  func_0x000107c61428(alStack_48[0] + _DAT_112fa90a8,plVar4,0,0);
  lVar1 = alStack_48[0] + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(alStack_48[0]);
  if (lVar1 != 0) {
    func_0x000100083b20(&lStack_50);
    lVar2 = *(long *)(lStack_50 + _DAT_112fa9088);
    func_0x000107c61174();
    func_0x000107c61170(lStack_50);
    lVar3 = lVar2;
    func_0x000107c42340();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(plVar4);
    }
    func_0x000107c41b68(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102525c70; end: 102525cdf;  */

void FUN_102525c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102525ce0,uVar1,uVar2);
  return;
}



/* Entry: 102525ce0; end: 102525d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102525ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000100083b20(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102525d84,0,0);
  return;
}



/* Entry: 102525d84; end: 102525f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102525d84(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  lVar4 = lVar2;
  func_0x000107c4c3ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xf0) = lVar2;
  func_0x000107c61170(lVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_102524c60(uVar1,0x9d,uVar3);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar4 = *(long *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(lVar4 + _DAT_112fa9088);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar5;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102525f48;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,0);
    uVar3 = 0x112ea3c70;
    func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(long *)(unaff_x22 + 0x70) = lVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051cfe8;
    func_0x000107c51ddc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
  *(undefined1 *)(unaff_x22 + 0x110) = 0;
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102526024,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200));
  return;
}



/* Entry: 102525f48; end: 102525f87;  */

void FUN_102525f48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102525f88,0,0);
  return;
}



/* Entry: 102525f88; end: 102526023;  */

void FUN_102525f88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615e8(uVar2);
  lVar6 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  *(bool *)(unaff_x22 + 0x110) = lVar6 == 0;
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102526024,*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200));
  return;
}



/* Entry: 102526024; end: 102526063;  */

void FUN_102526024(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  FUN_102525b68(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102526060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102526064; end: 1025260c3; -[_TtC27MapDropsShareImplementation18DropsShareWorkflow init] */

void FUN_102526064(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDropsShareImplementation.DropsShareWorkflow",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102526090);
  (*pcVar1)();
}



/* Entry: 1025260c4; end: 10252612b; -[_TtC27MapDropsShareImplementation18DropsShareWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025260e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102526100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025260e4) */
/* WARNING: Removing unreachable block (ram,0x000102526104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025260c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea3ca8));
  return;
}



/* Entry: 10252612c; end: 102526217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252612c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  lVar2 = *(long *)(lStack_38 + _DAT_112fa9090);
  func_0x000107c615f0(lVar2);
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c41864(lVar2,param_2,0);
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  lVar2 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_38);
    lVar1 = lStack_38;
    func_0x000107c4ffe8(lStack_38);
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102526218; end: 102526283;  */

void FUN_102526218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102526284,uVar1,uVar2);
  return;
}



/* Entry: 102526284; end: 102526317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526284(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar4 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  lVar5 = *(long *)(lVar5 + _DAT_113034f28);
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102526318;
  plVar3[0x18] = lVar2;
  plVar3[0x19] = lVar4;
  plVar3[0x16] = lVar5;
  plVar3[0x17] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252430c,0,0);
  return;
}



/* Entry: 102526318; end: 102526387;  */

void FUN_102526318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x58);
  *(undefined8 *)(lVar4 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x68));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102526388,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48));
  return;
}



/* Entry: 102526388; end: 1025263cb;  */

void FUN_102526388(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_102525b68(lVar1 == 0);
                    /* WARNING: Could not recover jumptable at 0x0001025263c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025263cc; end: 10252649f; -[_TtC27MapDropsShareImplementation18DropsShareWorkflow didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x000102526484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102526488) */

void FUN_1025263cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_10252612c();
  puVar1 = &UNK_11051cfa8;
  func_0x000107c613fc(&UNK_11051cfa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dab69f8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025264a0; end: 1025264bf;  */

undefined1  [16] FUN_1025264a0(void)

{
  return ZEXT816(0x11051cf68);
}



/* Entry: 1025264c0; end: 1025264df;  */

void FUN_1025264c0(void)

{
  func_0x000107c61168(&PTR_PTR_11284c000);
  return;
}



/* Entry: 1025264e0; end: 102526563; -[_TtC27MapDropsShareImplementation18DropsShareWorkflow didDismissWithSelectedItems:sendToDismissSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025264e0(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    FUN_102525b68(0);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102526564; end: 1025265c7;  */

void FUN_102526564(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1025265c8;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102526284,lVar1,lVar2);
  return;
}



/* Entry: 1025265c8; end: 102526603;  */

void FUN_1025265c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102526600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102526604; end: 10252667b;  */

void FUN_102526604(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102526694;
  plVar5[0x15] = lVar3;
  plVar5[0x16] = lVar2;
  plVar5[0x13] = lVar4;
  plVar5[0x14] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x17] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x18] = lVar3;
  plVar5[0x19] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102525ce0,lVar3,lVar4);
  return;
}



/* Entry: 10252667c; end: 102526697;  */

long FUN_10252667c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102526698; end: 102526703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526698(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102526860();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea3cf0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102526704; end: 10252670b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526704(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102526860();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3cf0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10252670c; end: 102526757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252670c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3cf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102526758; end: 1025267df; -[_TtC27MapDropsShareImplementation20MapDropsShareBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1025267e0; end: 10252683f; -[_TtC27MapDropsShareImplementation20MapDropsShareBuilder init] */

void FUN_1025267e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDropsShareImplementation.MapDropsShareBuilder",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10252680c);
  (*pcVar1)();
}



/* Entry: 102526840; end: 10252684f;  */

undefined1  [16] FUN_102526840(void)

{
  return ZEXT816(0x11051d020);
}



/* Entry: 102526850; end: 10252685f; -[_TtC27MapDropsShareImplementation20MapDropsShareBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea3cf0));
  return;
}



/* Entry: 102526860; end: 10252687f;  */

void FUN_102526860(void)

{
  func_0x000107c61168(&PTR_PTR_11284c0e0);
  return;
}



/* Entry: 102526880; end: 10252695b;  */

/* WARNING: Possible PIC construction at 0x000102526924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102526934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102526928) */
/* WARNING: Removing unreachable block (ram,0x000102526938) */

void FUN_102526880(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11051d130;
  func_0x000107c613fc(&UNK_11051d130,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ea3d28;
  func_0x0001000285a8(0x112ea3d28,&UNK_10dab6af0);
  func_0x000107c613fc();
  pcVar6 = FUN_1025269b0;
  func_0x0001000841fc(FUN_1025269b0,puVar4,uVar5);
  func_0x000100084214(&UNK_10dab6ac0,0x2a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10252695c; end: 10252696b;  */

undefined1  [16] FUN_10252695c(void)

{
  return ZEXT816(0x11051d110);
}



/* Entry: 10252696c; end: 1025269af;  */

void FUN_10252696c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1025269b0; end: 102526a67;  */

void FUN_1025269b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *param_2;
  func_0x0001000285a8(0x112ea3d30,&UNK_10dab6af8);
  puVar4 = &uStack_58;
  uStack_58 = uVar7;
  func_0x0001000838ec(puVar4);
  FUN_102526bbc(uVar5,uVar2,uVar1,puVar4,uVar3,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000100082720("MapReactionPickerEntryPointProvider",0x23,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 102526a68; end: 102526ab3;  */

void FUN_102526a68(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102526b9c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 102526ab4; end: 102526abb;  */

void FUN_102526ab4(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102526b9c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102526abc; end: 102526aeb;  */

void FUN_102526abc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102526aec; end: 102526b67; -[_TtC28MapEmojiPickerImplementation24MapReactionPickerBuilder build:] */

void FUN_102526aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102526b68; end: 102526b8b;  */

void FUN_102526b68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102526b8c; end: 102526b9b;  */

undefined1  [16] FUN_102526b8c(void)

{
  return ZEXT816(0x11051d200);
}



/* Entry: 102526b9c; end: 102526bbb;  */

void FUN_102526b9c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea3d80);
  return;
}



/* Entry: 102526bbc; end: 102526d83;  */

void FUN_102526bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3de0,&UNK_10dab6b80);
  puVar1 = &UNK_11051d220;
  func_0x000107c613fc(&UNK_11051d220,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102526d84,puVar1);
  return;
}



/* Entry: 102526d84; end: 102526d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526d84(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_102527a0c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112ea3de8) = 0;
  *(long *)(lVar9 + _DAT_112ea3df0) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112ea3df8) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112ea3e00) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112ea3e08) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112ea3e10) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112ea3e18) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102526d94; end: 102526e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3de8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3df0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3df8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3e00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3e08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3e10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3e18) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102526e54; end: 102526ebf;  */

void FUN_102526e54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102526ec0,uVar1,uVar2);
  return;
}



/* Entry: 102526ec0; end: 10252745f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102526ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  puVar1 = PTR_PTR_1126aaa10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar6 = lVar5;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar5;
  if (lVar5 != 0) {
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c5fb14(lVar6);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
  }
  func_0x000107c52ae0(puVar1);
  func_0x000107c61170(lVar6);
  func_0x000100083b20(unaff_x22 + 0x10);
  func_0x000107c61170();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55358(puVar1);
  func_0x000107c61170(puVar2);
  puVar3 = PTR_PTR_1126b0d28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c51c60();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c57698(puVar1);
  func_0x000107c61170(puVar2);
  puVar4 = PTR_PTR_1126aaa18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar10 = uVar7;
  func_0x000107c5dec8(uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar10;
  func_0x000107c5c734(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c52704(puVar4);
  func_0x000107c615e8(uVar7);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar10 = uVar7;
  func_0x000107c3ff84(uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar10;
  func_0x000107c5c734(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c57b50(puVar4);
  func_0x000107c615e8(uVar7);
  puVar2 = &UNK_11051d2b8;
  func_0x000107c613fc(&UNK_11051d2b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar8);
  *(code **)(unaff_x22 + 0x30) = FUN_102527b24;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0x20) = 0x10252755c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11051d2d0;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c60bc4(lVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c56e20(puVar4);
  func_0x000107c60bd0(lVar6);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar6 = lVar5;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 != 0) {
    func_0x0001000285a8(0x112ea3e48,&UNK_10daddbf0);
    lVar6 = lVar5;
    func_0x000107c5d6fc(lVar5);
    func_0x000107c61180();
    lVar9 = lVar6;
    func_0x0001000b637c();
    func_0x000107c61170(lVar6);
    uVar7 = 0;
    func_0x0001002ed07c(0);
    uVar10 = 0x1025275a8;
    func_0x0001000bfde0(0x1025275a8,0,uVar7);
    func_0x000107c61574(lVar9);
    func_0x0001004575f0();
    func_0x000107c61574(uVar10);
    lVar6 = lVar9;
    func_0x000107c5cb24(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c594b0(puVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
  }
  lVar9 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar5 = 0;
  FUN_102528088();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined **)(lVar6 + _DAT_112ea3e50) = puVar1;
  *(undefined **)(lVar6 + _DAT_112ea3e58) = puVar4;
  *(undefined8 *)(lVar6 + _DAT_112ea3e60) = uVar10;
  *(long *)(unaff_x22 + 0x40) = lVar6;
  *(long *)(unaff_x22 + 0x48) = lVar5;
  lVar6 = unaff_x22 + 0x40;
  func_0x000107c61154(lVar6,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  puVar2 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e88();
  lVar5 = _DAT_112ea3de8;
  uVar10 = *(undefined8 *)(lVar9 + _DAT_112ea3de8);
  *(undefined **)(lVar9 + _DAT_112ea3de8) = puVar2;
  func_0x000107c61170(uVar10);
  if ((((*(long *)(lVar9 + lVar5) != 0) && (func_0x000107c5a070(), *(long *)(lVar9 + lVar5) != 0))
      && (func_0x000107c52684(), *(long *)(lVar9 + lVar5) != 0)) &&
     (func_0x000107c5921c(), *(long *)(lVar9 + lVar5) != 0)) {
    func_0x000107c5a074();
    lVar5 = *(long *)(lVar9 + lVar5);
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
      puVar2 = PTR_PTR_1126b1c10;
      func_0x000107c610f8(PTR_PTR_1126b1c10);
      func_0x000107c61174(lVar5);
      func_0x000107c495dc(uVar10,puVar2);
      func_0x000107c4ef3c(0x3fe6666666666666,lVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar5);
    }
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010252745c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102527460; end: 1025275ef;  */

void FUN_102527460(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_11051d308;
    func_0x000107c613fc(&UNK_11051d308,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    puVar2 = &UNK_11051d330;
    func_0x000107c613fc(&UNK_11051d330,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dab6bf8;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_1);
    uVar3 = 0x81;
    func_0x0001001ca524(0x81,0,0x3c,4,0,0,&UNK_10dab6c00,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1025275f0; end: 10252762b;  */

void FUN_1025275f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102527628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10252762c; end: 1025276f7; -[_TtC28MapEmojiPickerImplementation17MapReactionPicker presentTray] */

void FUN_10252762c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051d268;
  func_0x000107c613fc(&UNK_11051d268,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051d290;
  func_0x000107c613fc(&UNK_11051d290,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab6bd8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x81;
  func_0x0001001ca524(0x81,0,0x3c,4,0,0,&UNK_10dab6be0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025276f8; end: 102527763;  */

void FUN_1025276f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102527764,uVar1,uVar2);
  return;
}



/* Entry: 102527764; end: 102527817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102527764(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar1 = _DAT_112fa8f90;
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112fa8f90,unaff_x22 + 0x10,0,0);
  lVar1 = lVar2 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c42510(lVar1);
    func_0x000107c615e8(lVar1);
  }
  if (*(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112ea3de8) != 0) {
    func_0x000107c42018();
  }
                    /* WARNING: Could not recover jumptable at 0x000102527814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102527818; end: 102527877; -[_TtC28MapEmojiPickerImplementation17MapReactionPicker init] */

void FUN_102527818(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapEmojiPickerImplementation.MapReactionPicker",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102527844);
  (*pcVar1)();
}



/* Entry: 102527878; end: 1025278ff; -[_TtC28MapEmojiPickerImplementation17MapReactionPicker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102527878(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3e08));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3df0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3df8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3e00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3e18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3e10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea3de8));
  return;
}



/* Entry: 102527900; end: 1025279fb; -[_TtC28MapEmojiPickerImplementation17MapReactionPicker tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010252793c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102527940) */

void FUN_102527900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102527954(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025279fc; end: 102527a0b;  */

undefined1  [16] FUN_1025279fc(void)

{
  return ZEXT816(0x11051d248);
}



/* Entry: 102527a0c; end: 102527ab3;  */

void FUN_102527a0c(void)

{
  func_0x000107c61168(&PTR_PTR_11284c1a0);
  return;
}



/* Entry: 102527ab4; end: 102527b23;  */

void FUN_102527ab4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102527c08;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102527b24; end: 102527b47;  */

void FUN_102527b24(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11051d308;
    func_0x000107c613fc(&UNK_11051d308,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    puVar3 = &UNK_11051d330;
    func_0x000107c613fc(&UNK_11051d330,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dab6bf8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_1);
    uVar4 = 0x81;
    func_0x0001001ca524(0x81,0,0x3c,4,0,0,&UNK_10dab6c00,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102527b48; end: 102527b97;  */

void FUN_102527b48(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102527c0c;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102527764,lVar1,lVar2);
  return;
}



/* Entry: 102527b98; end: 102527c07;  */

void FUN_102527b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102527c10;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102527c08; end: 102527c13;  */

void FUN_102527c08(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102527ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102527c14; end: 102527c6b; -[_TtC28MapEmojiPickerImplementation31MapReactionPickerViewController initWithCoder:] */

void FUN_102527c14(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapEmojiPickerImplementation/MapReactionPickerViewController.swift",0x42,2,
                      0x19,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102527c6c);
  (*pcVar1)();
}



/* Entry: 102527c6c; end: 102527fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102527c6c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3e60);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aaa20;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102527fa8);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    puVar5 = puVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102527fac);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x20) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102527fb0);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x28) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102527fb4);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x30) = puVar8;
    puVar5 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102527fb8);
      (*pcVar1)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar9 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x38) = puVar9;
    uVar10 = 0;
    func_0x000100847984(0);
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102527fb8; end: 102527fdf; -[_TtC28MapEmojiPickerImplementation31MapReactionPickerViewController viewDidLoad] */

void FUN_102527fb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102527c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102527fe0; end: 10252803f; -[_TtC28MapEmojiPickerImplementation31MapReactionPickerViewController initWithNibName:bundle:] */

void FUN_102527fe0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapEmojiPickerImplementation.MapReactionPickerViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10252800c);
  (*pcVar1)();
}


