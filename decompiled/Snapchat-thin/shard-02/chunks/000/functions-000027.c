/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016e6bbc; end: 1016e6c3b;  */

void FUN_1016e6bbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1016ea5a8;
  plVar6[8] = lVar4;
  plVar6[9] = lVar7;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[10] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1016e2ca0;
  plVar5[0xc] = lVar2;
  plVar5[0xd] = lVar1;
  plVar5[10] = (long)(plVar6 + 2);
  plVar5[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e6c3c; end: 1016e6c77;  */

void FUN_1016e6c3c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1016e6c78,*(undefined8 *)(*unaff_x22 + 0xa0),*(undefined8 *)(*unaff_x22 + 0xa8));
  return;
}



/* Entry: 1016e6c78; end: 1016e6d13;  */

/* WARNING: Removing unreachable block (ram,0x0001016e6ccc) */

void FUN_1016e6c78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  if (iVar1 == 0) {
    func_0x000101041ad4();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    *(int *)(unaff_x22 + 0x58) = (int)param_2;
    *(int *)(unaff_x22 + 0x5c) = (int)((ulong)param_2 >> 0x20);
  }
  else {
    func_0x000107c60098(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016e6d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e6d14; end: 1016e6d8b;  */

void FUN_1016e6d14(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001016e9bd4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1016e6d8c; end: 1016e6da3;  */

void FUN_1016e6d8c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e6da4,0,0);
  return;
}



/* Entry: 1016e6da4; end: 1016e6e6b;  */

void FUN_1016e6da4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001016e6dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1016e6e6c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103fb0f8;
  func_0x000107c613fc(&UNK_1103fb0f8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x1016e89c8,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1016e6e6c; end: 1016e6eab;  */

void FUN_1016e6e6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e6eac,0,0);
  return;
}



/* Entry: 1016e6eac; end: 1016e6ed3;  */

void FUN_1016e6eac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001016e6eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1016e6ed4; end: 1016e6f9f;  */

void FUN_1016e6ed4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0x88) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001016e6f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
               *(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1016e6fa0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103fb238;
  func_0x000107c613fc(&UNK_1103fb238,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1016e99b0,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1016e6fa0; end: 1016e6fdf;  */

void FUN_1016e6fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e6fe0,0,0);
  return;
}



/* Entry: 1016e6fe0; end: 1016e700b;  */

void FUN_1016e6fe0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001016e6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined8 *)(unaff_x22 + 0x60),*(undefined1 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 1016e700c; end: 1016e70d3;  */

void FUN_1016e700c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001016e7054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1016e70d4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103fb1c0;
  func_0x000107c613fc(&UNK_1103fb1c0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_1016e8c38,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1016e70d4; end: 1016e7113;  */

void FUN_1016e70d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1016ea544,0,0);
  return;
}



/* Entry: 1016e7114; end: 1016e71a3;  */

void FUN_1016e7114(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1016e71c8(0,uVar1 + 1,1,uVar3,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,
                  &UNK_10d9169a0);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1016e71a4; end: 1016e71c7;  */

ulong FUN_1016e71a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7328);
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
  FUN_1016e7810(uVar2,uVar4,0x112dc2b68,&PTR_PTR_1126bfdb0,0x112dc2b70,&UNK_10d97fa00);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7324);
      (*pcVar1)();
    }
    FUN_1016e78a0(0,uVar2,uVar3 + 0x20,param_4,0x112dc2b68,&PTR_PTR_1126bfdb0);
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



/* Entry: 1016e71c8; end: 1016e7327;  */

ulong FUN_1016e71c8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7328);
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
  FUN_1016e7810(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7324);
      (*pcVar1)();
    }
    FUN_1016e78a0(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1016e7328; end: 1016e744b;  */

undefined * FUN_1016e7328(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e744c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dc2b78;
    func_0x0001000285a8(0x112dc2b78,&UNK_10d97fa08);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110763ca8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016e744c; end: 1016e746f;  */

undefined * FUN_1016e744c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  puVar2 = (undefined *)0x112dc2b80;
  uVar4 = 0x112dc2b88;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e75a0);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(0x112dc2b80,&UNK_10d97fa10);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar7 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar7 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar7 >> 3) << 1;
    puVar7 = puVar2;
  }
  puVar2 = puVar7 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(0x112dc2b88,&UNK_10d9802e0);
    func_0x000107c6140c(puVar2,puVar3,uVar6,uVar4);
  }
  else {
    if (puVar7 != param_4 || puVar3 + uVar6 * 8 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar7;
}



/* Entry: 1016e7470; end: 1016e759f;  */

undefined *
FUN_1016e7470(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e75a0);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 3) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 8 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 1016e75a0; end: 1016e76e3;  */

undefined * FUN_1016e75a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e76e4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112dc2b90;
    func_0x0001000285a8(0x112dc2b90,&UNK_10d97fa18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dc2b98;
    func_0x0001000285a8(0x112dc2b98,&UNK_10d97fa20);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016e76e4; end: 1016e7707;  */

ulong FUN_1016e76e4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7328);
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
  FUN_1016e7810(uVar2,uVar4,0x112dc2b58,&PTR_PTR_1126a79c0,0x112dc2b60,&UNK_10d97f9f8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7324);
      (*pcVar1)();
    }
    FUN_1016e78a0(0,uVar2,uVar3 + 0x20,param_4,0x112dc2b58,&PTR_PTR_1126a79c0);
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



/* Entry: 1016e7708; end: 1016e780f;  */

undefined * FUN_1016e7708(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e7810);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dc2b48;
    func_0x0001000285a8(0x112dc2b48,&UNK_10d97f9e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11072d780);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016e7810; end: 1016e789f;  */

undefined *
FUN_1016e7810(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1016e6d14(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1016e78a0; end: 1016e79bb;  */

long FUN_1016e78a0(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016e79b8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016e79bc);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001016e9bd4(0,param_5,param_6);
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
      func_0x0001016e9bd4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016e79b4);
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



/* Entry: 1016e79bc; end: 1016e7a13;  */

void FUN_1016e79bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1016e7a14();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1016e7a14; end: 1016e7b5f;  */

undefined *
FUN_1016e7a14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e7b60);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1016e6d14(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001016e9bd4(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1016e7b60; end: 1016e7c77;  */

undefined * FUN_1016e7b60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e7c78);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112dc2b50;
    func_0x0001000285a8(0x112dc2b50,&UNK_10d97f9e8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_11072d808);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 1016e7c78; end: 1016e7cff;  */

undefined8 FUN_1016e7c78(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = 0;
    func_0x000107c61598(&uStack_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (uStack_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (uStack_28 * param_1 < uVar7) {
        do {
          uStack_28 = 0;
          func_0x000107c61598(&uStack_28,8);
        } while (uStack_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1016e7d00);
  (*pcVar5)();
}



/* Entry: 1016e7d00; end: 1016e7d63;  */

void FUN_1016e7d00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  FUN_1016e99b8(uVar1,uVar2,uVar5,uVar3);
  puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = uVar5;
  *(undefined1 *)(puVar4 + 3) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 1016e7d64; end: 1016e7d7b;  */

void FUN_1016e7d64(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e7d7c,0,0);
  return;
}



/* Entry: 1016e7d7c; end: 1016e7e73;  */

void FUN_1016e7d7c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = 0x112d56380;
  func_0x0001000285a8(0x112d56380,&UNK_10d91d070);
  func_0x000107c5f060();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1016e7e74;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar3,unaff_x22 + 0x138,uVar2,0,0);
    return;
  }
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016e7f24;
                    /* WARNING: Could not recover jumptable at 0x0001016e7e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10104184c)(uVar2,0,0);
  return;
}



/* Entry: 1016e7e74; end: 1016e7f23;  */

void FUN_1016e7e74(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  uVar1 = *(undefined8 *)(lVar2 + 0xc0);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
    func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016e7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  func_0x000107c61574(uVar1);
  *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0x148);
  *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x138);
  *(undefined4 *)(lVar2 + 0x184) = *(undefined4 *)(lVar2 + 0x140);
  *(undefined4 *)(lVar2 + 0x180) = *(undefined4 *)(lVar2 + 0x144);
  *(undefined8 *)(lVar2 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e7fe0,0,0);
  return;
}



/* Entry: 1016e7f24; end: 1016e7fdf;  */

void FUN_1016e7f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  uVar2 = *(undefined8 *)(lVar3 + 0xc0);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
    func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016e7f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  func_0x000107c61574(uVar2);
  *(undefined8 *)(lVar3 + 0xe0) = param_3;
  *(undefined8 *)(lVar3 + 0xe8) = param_1;
  *(int *)(lVar3 + 0x184) = (int)param_2;
  *(int *)(lVar3 + 0x180) = (int)((ulong)param_2 >> 0x20);
  *(undefined8 *)(lVar3 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e7fe0,0,0);
  return;
}



/* Entry: 1016e7fe0; end: 1016e8413;  */

void FUN_1016e7fe0(double param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x22;
  ulong uVar14;
  undefined *puVar15;
  double dVar16;
  
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined4 *)(unaff_x22 + 0x158) = *(undefined4 *)(unaff_x22 + 0x184);
  *(undefined4 *)(unaff_x22 + 0x15c) = *(undefined4 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c60a3c(unaff_x22 + 0x150);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  bVar2 = (long)ABS(param_1) + 0xfff0000000000000U >> 0x35 < 0x3ff;
  if (((-1 >= (long)param_1 || !bVar2) && 0xffffffffffffd < (long)param_1 - 1U) &&
      (-1 < (long)param_1 && bVar2 || (long)param_1 - 1U != 0xffffffffffffe)) {
                    /* WARNING: Could not recover jumptable at 0x0001016e8198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  dVar16 = (double)(long)param_1;
  if (0x7fe < (ulong)dVar16 >> 0x34) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e83f4);
    (*pcVar4)();
  }
  if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e83f8);
    (*pcVar4)();
  }
  if (dVar16 < 9.223372036854776e+18) {
    uVar13 = (ulong)dVar16;
    if ((long)uVar13 < 2) {
      uVar13 = 1;
    }
    if (0x1d < (long)uVar13) {
      uVar13 = 0x1e;
    }
    lVar12 = 0;
    uVar11 = uVar13;
    func_0x000100f72b90(0);
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    uVar14 = 0;
    do {
      uVar7 = 600;
      func_0x000107c600d0((double)uVar14);
      *(undefined8 *)(unaff_x22 + 0x168) = uVar7;
      *(int *)(unaff_x22 + 0x170) = (int)uVar11;
      *(int *)(unaff_x22 + 0x174) = (int)(uVar11 >> 0x20);
      *(long *)(unaff_x22 + 0x178) = lVar12;
      lVar12 = unaff_x22 + 0x168;
      puVar15 = puVar6;
      func_0x000107c5dc5c();
      func_0x000107c61180();
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        lVar12 = 1;
        uVar11 = uVar1 + 1;
        func_0x000100f72b90(1 < *(ulong *)(puVar3 + 0x18));
      }
      *(undefined **)(unaff_x22 + 0xf8) = puVar3;
      uVar14 = uVar14 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar3 + uVar1 * 8 + 0x20) = puVar15;
    } while (uVar13 != uVar14);
    puVar6 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    func_0x000107c610f8();
    func_0x000107c457a0();
    *(undefined **)(unaff_x22 + 0x100) = puVar6;
    func_0x000107c52860();
    func_0x000107c563a0(0x4080000000000000,0x4080000000000000,puVar6);
    func_0x0001000285a8(0x112dc2ae8,&UNK_10daa04f0);
    func_0x000107c613fc();
    uVar7 = 0;
    func_0x00010095c380();
    *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar15 = puVar3;
      }
      func_0x000107c60480();
    }
    lVar12 = 0;
    func_0x0001016e65c8();
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0xf0) = lVar12;
    uVar8 = 0;
    func_0x00010006a340();
    func_0x000107c613fc();
    uVar9 = uVar7;
    func_0x000107c6157c();
    func_0x00010006a360();
    *(undefined8 *)(lVar12 + 0x10) = uVar9;
    func_0x000107c613fc(uVar8,0x18,7);
    func_0x00010006a360();
    *(undefined8 *)(lVar12 + 0x18) = uVar8;
    *(undefined1 *)(lVar12 + 0x20) = 0;
    *(undefined **)(lVar12 + 0x40) = puVar3;
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined1 *)(lVar12 + 0x50) = 0;
    *(undefined **)(lVar12 + 0x28) = puVar15;
    *(code **)(lVar12 + 0x30) = FUN_1016e88b4;
    *(undefined8 *)(lVar12 + 0x38) = uVar7;
    *(long *)(unaff_x22 + 0x20) = lVar12;
    *(undefined **)(unaff_x22 + 0x28) = puVar6;
    *(undefined **)(unaff_x22 + 0x30) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
    *(long *)(unaff_x22 + 0xb0) = lVar12;
    *(undefined **)(unaff_x22 + 0xb8) = puVar6;
    iVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      plVar10 = (long *)(ulong)*(uint *)(
                                        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x110) = plVar10;
      uVar7 = 0x112dc2af0;
      func_0x0001000285a8(0x112dc2af0,&UNK_10d97f948);
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_1016e8414;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )(unaff_x22 + 0x68,&UNK_10d97f938,unaff_x22 + 0x10,FUN_1016e898c,unaff_x22 + 0xa0,0,0,uVar7);
      return;
    }
    pcVar4 = FUN_1016e898c;
    func_0x000107c615b4(FUN_1016e898c,unaff_x22 + 0xa0);
    *(code **)(unaff_x22 + 0x118) = pcVar4;
    *(undefined **)(unaff_x22 + 0x50) = puVar6;
    *(undefined **)(unaff_x22 + 0x58) = puVar3;
    *(long *)(unaff_x22 + 0x60) = lVar12;
    *(long *)(unaff_x22 + 0x80) = lVar12;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x1016e8994;
    *(long *)(unaff_x22 + 0x90) = unaff_x22 + 0x40;
    func_0x000100087bd4(FUN_1016e89a0,unaff_x22 + 0x70,PTR___sytN_11034f1b0 + 8);
    plVar10 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1016e8484;
                    /* WARNING: Could not recover jumptable at 0x0001016e83ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_1016e6d8c();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e83fc);
  (*pcVar4)();
}



/* Entry: 1016e8414; end: 1016e8483;  */

void FUN_1016e8414(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0xf8));
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e854c,0,0);
  return;
}



/* Entry: 1016e8484; end: 1016e854b;  */

void FUN_1016e8484(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x128) = param_1;
  *(undefined1 *)(lVar1 + 0x188) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1016e84d8,0,0);
  return;
}



/* Entry: 1016e854c; end: 1016e8593;  */

void FUN_1016e854c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016e8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x130));
  return;
}



/* Entry: 1016e8594; end: 1016e887f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1016e8594(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  long alStack_e0 [4];
  undefined1 auStack_c0 [8];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 *puStack_88;
  
  lVar6 = 0;
  func_0x000107c5eb9c();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_c0 + lVar2;
  uVar15 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(param_2 + 0x40);
  if (uVar20 == 0) {
    lVar13 = 0;
    uVar15 = uVar15 + 0x3f >> 6;
    lVar16 = 0;
    do {
      if (uVar15 - 1 == lVar16) goto LAB_1016e884c;
      lVar19 = lVar16 + 1;
      uVar20 = *(ulong *)(param_2 + 0x48 + lVar16 * 8);
      lVar13 = lVar13 + -0x40;
      lVar16 = lVar19;
    } while (uVar20 == 0);
    uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar20 - 1 & uVar20;
    lVar13 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) - lVar13;
  }
  else {
    lVar19 = 0;
    uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    lVar13 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
    uVar20 = uVar20 - 1 & uVar20;
    uVar15 = uVar15 + 0x3f >> 6;
  }
  puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + lVar13 * 0x10);
  uVar1 = *puVar8;
  puVar8 = (undefined8 *)puVar8[1];
  dVar21 = *(double *)(*(long *)(param_2 + 0x38) + lVar13 * 8);
  func_0x000107c61434(param_2);
  func_0x000107c61434(puVar8);
  while( true ) {
    while (uVar20 != 0) {
      uVar14 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 - 1 & uVar20;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar19 << 6;
      dVar22 = *(double *)(*(long *)(param_2 + 0x38) + uVar14 * 8);
      if (dVar21 < dVar22) {
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
        uVar1 = *puVar9;
        puStack_b8 = (undefined8 *)puVar9[1];
        func_0x000107c61434();
        func_0x000107c6142c(puVar8);
        puVar8 = puStack_b8;
        dVar21 = dVar22;
      }
    }
    bVar5 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e8880);
      (*pcVar4)();
    }
    if ((long)uVar15 <= lVar19) break;
    uVar20 = ((ulong *)(param_2 + 0x40))[lVar19];
  }
  func_0x000107c61574();
  if (param_1 <= dVar21) {
    puStack_90 = (undefined1 *)uVar1;
    puStack_88 = puVar8;
    func_0x000107c5eb88(puVar17);
    func_0x000100e8b654();
    puVar3 = PTR___sSSN_11034da80;
    puVar7 = puVar17;
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c601f0(puVar17,PTR___sSSN_11034da80,param_2);
    (**(code **)(lVar18 + 8))(puVar17,lVar6);
    puVar11 = puVar10;
    func_0x000107c5fb1c();
    func_0x000107c6142c(puVar10);
    uStack_a0 = 0x5f6e6f6974706163;
    uStack_98 = 0xe800000000000000;
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    puStack_90 = puVar7;
    puStack_88 = (undefined8 *)puVar11;
    *(long *)((long)alStack_e0 + lVar2 + 0x10) = param_2;
    *(long *)((long)alStack_e0 + lVar2 + 0x18) = param_2;
    puVar9 = &uStack_a0;
    puVar12 = &uStack_b0;
    *(undefined **)((long)alStack_e0 + lVar2) = puVar3;
    *(long *)((long)alStack_e0 + lVar2 + 8) = param_2;
    func_0x000107c601fc(puVar9,puVar12,8,0,0,1,puVar3,puVar3);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar8);
    uVar20 = (ulong)puVar9 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar20 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    puVar8 = puVar12;
    if (uVar20 != 0) goto LAB_1016e8854;
  }
  func_0x000107c6142c(puVar8);
LAB_1016e884c:
  puVar9 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
LAB_1016e8854:
  auVar23._8_8_ = puVar12;
  auVar23._0_8_ = puVar9;
  return auVar23;
}



/* Entry: 1016e8880; end: 1016e88b3;  */

undefined8 FUN_1016e8880(undefined8 param_1)

{
  FUN_1016eb778();
  return param_1;
}



/* Entry: 1016e88b4; end: 1016e88d7;  */

void FUN_1016e88b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 1016e88d8; end: 1016e894f;  */

void FUN_1016e88d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1016e8950;
  plVar5[0x10] = lVar2;
  plVar5[0x11] = lVar4;
  plVar5[0xe] = lVar1;
  plVar5[0xf] = lVar3;
  plVar5[0xd] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e51e4,0,0);
  return;
}



/* Entry: 1016e8950; end: 1016e898b;  */

void FUN_1016e8950(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016e8988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016e898c; end: 1016e899f;  */

void FUN_1016e898c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  char acStack_39 [9];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100087bd4(FUN_1016e8a48,lVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000100087bd4(acStack_39,FUN_1016e8a54,lVar1,PTR___sSbN_11034dd40);
  if (acStack_39[0] == '\x01') {
    (**(code **)(lVar1 + 0x30))(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  func_0x000107c3f480(uVar2);
  return;
}



/* Entry: 1016e89a0; end: 1016e89b3;  */

void FUN_1016e89a0(void)

{
  FUN_1016e8a90();
  return;
}



/* Entry: 1016e89b4; end: 1016e89e7;  */

void FUN_1016e89b4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1016e89e8; end: 1016e8a13;  */

void FUN_1016e89e8(void)

{
  FUN_1016e5484();
  return;
}



/* Entry: 1016e8a14; end: 1016e8a2f;  */

void FUN_1016e8a14(long param_1,long param_2)

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



/* Entry: 1016e8a30; end: 1016e8a47;  */

void FUN_1016e8a30(void)

{
  long unaff_x20;
  
  FUN_1016e59c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1016e8a48; end: 1016e8a53;  */

void FUN_1016e8a48(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  return;
}



/* Entry: 1016e8a54; end: 1016e8a6b;  */

void FUN_1016e8a54(void)

{
  FUN_1016e5948();
  return;
}



/* Entry: 1016e8a6c; end: 1016e8a8f;  */

long * FUN_1016e8a6c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1016e8a90; end: 1016e8ac7;  */

void FUN_1016e8a90(void)

{
  long unaff_x20;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + 0x20) & 1) == 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 1016e8ac8; end: 1016e8ae3;  */

void FUN_1016e8ac8(void)

{
  long unaff_x20;
  
  FUN_1016eb4e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1016e8ae4; end: 1016e8b17;  */

undefined8 FUN_1016e8ae4(undefined8 param_1,undefined8 param_2)

{
  FUN_1016e9fd4(param_2,param_1,&UNK_1103fb4f8);
  return param_2;
}



/* Entry: 1016e8b18; end: 1016e8b43;  */

void FUN_1016e8b18(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001016e8b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1016e8b44; end: 1016e8b77;  */

undefined8 FUN_1016e8b44(undefined8 param_1)

{
  (*(code *)(undefined *)0x101c28f78)();
  return param_1;
}



/* Entry: 1016e8b78; end: 1016e8bbf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1016e8b78(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1016e9418();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  func_0x000107c60e78();
  if ((uVar1 >> 0x1e != 1) && (uVar1 >> 0x1e != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016e8bc0; end: 1016e8bcf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1016e8bc0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1016e8bd0; end: 1016e8be7;  */

void FUN_1016e8bd0(void)

{
  long unaff_x20;
  
  FUN_1016e5f88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1016e8be8; end: 1016e8bfb;  */

void FUN_1016e8be8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1016e8bfc; end: 1016e8c37;  */

void FUN_1016e8bfc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x48);
  if (lVar1 != 0 && *(long *)(unaff_x20 + 0x18) == lVar1) {
    *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x48) = 0;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1016e8c38; end: 1016e8c43;  */

void FUN_1016e8c38(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_1016e8c94(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1016e8c44; end: 1016e8c93;  */

void FUN_1016e8c44(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1016e8c94; end: 1016e8ca7;  */

void FUN_1016e8c94(undefined8 param_1,char param_2)

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



/* Entry: 1016e8ca8; end: 1016e9023;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1016e8ca8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe67c();
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      lVar16 = *(long *)(param_1 + 0x20 + lVar10 * 8);
      lVar10 = lVar10 + 1;
      uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
      uVar17 = 0xffffffffffffffff;
      if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
        uVar17 = ~(-1L << (uVar13 & 0x3f));
      }
      uVar17 = uVar17 & *(ulong *)(lVar16 + 0x40);
      func_0x000107c61434(lVar16);
      lVar11 = 0;
joined_r0x0001016e8d64:
      while (uVar17 != 0) {
        uVar3 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        uVar12 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar11 << 6;
        puVar1 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x10);
        uVar3 = *puVar1;
        uVar2 = puVar1[1];
        dVar18 = *(double *)(*(long *)(lVar16 + 0x38) + uVar12 * 8);
        lVar15 = *(long *)(puVar6 + 0x10);
        func_0x000107c61434(uVar2);
        uVar12 = uVar3;
        if (lVar15 == 0) {
LAB_1016e8e88:
          puVar8 = puVar6;
          func_0x000107c61558();
          uVar7 = uVar2;
          func_0x000100029284();
          uVar14 = (ulong)~(uint)uVar7 & 1;
          lVar15 = *(long *)(puVar6 + 0x10) + uVar14;
          if (SCARRY8(*(long *)(puVar6 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e9008);
            (*pcVar4)();
          }
          if (*(long *)(puVar6 + 0x18) < lVar15) {
            func_0x000101432e00(lVar15,puVar8);
            uVar12 = uVar3;
            uVar14 = uVar2;
            func_0x000100029284();
            if (((uint)uVar7 & 1) != ((uint)uVar14 & 1)) {
LAB_1016e9014:
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e9024);
              (*pcVar4)();
            }
          }
          else if (((ulong)puVar8 & 1) == 0) {
            func_0x000101432c98();
          }
          if ((uVar7 & 1) == 0) {
            *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
            puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar12 * 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar2;
            *(double *)(*(long *)(puVar6 + 0x38) + uVar12 * 8) = dVar18;
            lVar15 = *(long *)(puVar6 + 0x10);
            if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e900c);
              (*pcVar4)();
            }
            goto LAB_1016e8f90;
          }
LAB_1016e8d6c:
          *(double *)(*(long *)(puVar6 + 0x38) + uVar12 * 8) = dVar18;
          func_0x000107c6142c(uVar2);
        }
        else {
          func_0x000107c61434(puVar6);
          uVar7 = uVar3;
          uVar14 = uVar2;
          func_0x000100029284();
          if ((uVar14 & 1) == 0) {
            func_0x000107c6142c(puVar6);
            goto LAB_1016e8e88;
          }
          dVar19 = *(double *)(*(long *)(puVar6 + 0x38) + uVar7 * 8);
          func_0x000107c6142c(puVar6);
          if (dVar18 < dVar19) {
            dVar18 = dVar19;
          }
          puVar8 = puVar6;
          func_0x000107c61558();
          uVar7 = uVar2;
          func_0x000100029284();
          uVar14 = (ulong)~(uint)uVar7 & 1;
          lVar15 = *(long *)(puVar6 + 0x10) + uVar14;
          if (SCARRY8(*(long *)(puVar6 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e9010);
            (*pcVar4)();
          }
          if (*(long *)(puVar6 + 0x18) < lVar15) {
            func_0x000101432e00(lVar15,puVar8);
            uVar12 = uVar3;
            uVar14 = uVar2;
            func_0x000100029284();
            if (((uint)uVar7 & 1) != ((uint)uVar14 & 1)) goto LAB_1016e9014;
          }
          else if (((ulong)puVar8 & 1) == 0) {
            func_0x000101432c98();
          }
          if ((uVar7 & 1) != 0) goto LAB_1016e8d6c;
          *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar12 * 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar2;
          *(double *)(*(long *)(puVar6 + 0x38) + uVar12 * 8) = dVar18;
          lVar15 = *(long *)(puVar6 + 0x10);
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e9014);
            (*pcVar4)();
          }
LAB_1016e8f90:
          *(long *)(puVar6 + 0x10) = lVar15 + 1;
        }
      }
      bVar5 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e9004);
        (*pcVar4)();
      }
      if (lVar11 < (long)(uVar13 + 0x3f >> 6)) {
        uVar17 = ((ulong *)(lVar16 + 0x40))[lVar11];
        goto joined_r0x0001016e8d64;
      }
      func_0x000107c61574(lVar16);
    } while (lVar10 != lVar9);
  }
  return puVar6;
}



/* Entry: 1016e9024; end: 1016e9353;  */

/* WARNING: Removing unreachable block (ram,0x0001016e92b4) */

undefined * FUN_1016e9024(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4ecb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5fc54(puVar4,PTR___sSSN_11034da80);
  func_0x000107c61170(puVar4);
  if (*(long *)(puVar3 + 0x10) == 0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    puVar4 = *(undefined **)(puVar3 + 0x20);
    uVar7 = *(undefined8 *)(puVar3 + 0x28);
    func_0x000107c61434(uVar7);
    func_0x000107c6142c(puVar3);
    puStack_1f0 = puVar4;
    uStack_1e8 = uVar7;
    func_0x000107c61434(uVar7);
    func_0x000107c5fb78(0x313d713b,0xe400000000000000);
    func_0x000107c6142c(uVar7);
    uVar7 = uStack_1e8;
    puVar3 = puStack_1f0;
    puVar4 = puVar2;
    func_0x000107c61558(puVar2);
    puStack_1f0 = puVar2;
    func_0x00010018433c(puVar3,uVar7,0x4c2d747065636341,0xef65676175676e61,puVar4);
    puVar2 = puStack_1f0;
  }
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_158 = 0;
      uStack_150 = 0xe000000000000000;
      uStack_148 = 0;
      uStack_140 = 0xe000000000000000;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_118 = 0xc000000000000000;
      uStack_120 = 0;
      uStack_f8 = 0xe000000000000000;
      uStack_100 = 0;
      lStack_d0 = (ulong)uStack_124 << 0x20;
      uStack_c8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0xe000000000000000;
      uStack_f0 = 0;
      uStack_c0 = 0xc000000000000000;
      uStack_1e8 = 0xc000000000000000;
      puStack_1f0 = (undefined *)0x0;
      lStack_1a0 = (ulong)uStack_124 << 0x20;
      uStack_178 = 0xf000000000000000;
      uStack_190 = 0xc000000000000000;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1c8 = 0xe000000000000000;
      uStack_1d0 = 0;
      uStack_1b8 = 0xe000000000000000;
      uStack_1c0 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_1e0 = param_1;
      uStack_1d8 = param_2;
      uStack_168 = param_1;
      uStack_160 = param_2;
      uStack_110 = param_1;
      uStack_108 = param_2;
      func_0x000107c61434(param_2);
      FUN_1016e97b4(&uStack_110,&puStack_270);
      puVar5 = &uStack_b0;
      func_0x0001016e97f0(puVar5,0x112dc2b10,&UNK_10d97f990);
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_228 = uStack_1a8;
      uStack_230 = uStack_1b0;
      uStack_218 = uStack_198;
      lStack_220 = lStack_1a0;
      uStack_208 = 0;
      uStack_210 = uStack_190;
      uStack_1f8 = uStack_178;
      uStack_200 = 0;
      uStack_268 = uStack_1e8;
      puStack_270 = puStack_1f0;
      uStack_258 = uStack_1d8;
      uStack_260 = uStack_1e0;
      uStack_248 = uStack_1c8;
      uStack_250 = uStack_1d0;
      uStack_238 = uStack_1b8;
      uStack_240 = uStack_1c0;
      FUN_1016e9830();
      func_0x000100075890(&uStack_280,0,0,&UNK_110458d48,PTR___s10Foundation4DataVN_110350ae0,puVar5
                          ,&PTR_DAT_110789f58);
      uVar6 = 0;
      uVar7 = uStack_280;
      func_0x000107c5ee24(0,uStack_280,uStack_278);
      func_0x00010006c090(uStack_280,uStack_278);
      puVar3 = puVar2;
      func_0x000107c61558(puVar2);
      puStack_270 = puVar2;
      func_0x00010018433c(uVar6,uVar7,0xd000000000000011,0x800000010efb8050,puVar3);
      puVar2 = puStack_270;
      FUN_1016e9870(&puStack_1f0);
      func_0x0001016e98a4(&uStack_168);
    }
  }
  return puVar2;
}



/* Entry: 1016e9354; end: 1016e9397;  */

long FUN_1016e9354(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1016e9398; end: 1016e93af;  */

undefined8 * FUN_1016e9398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1016e93b0; end: 1016e9417;  */

void FUN_1016e93b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016ea5a0;
  plVar3[2] = param_1;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  plVar3[3] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1016e6164;
  plVar2[8] = unaff_x20 + 0x10;
  plVar2[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e94f0,0,0);
  return;
}



/* Entry: 1016e9418; end: 1016e94d7;  */

code * FUN_1016e9418(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  code *unaff_x20;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == (code *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    lVar2 = lVar1;
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    lVar2 = lVar1;
    lVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  pcVar3 = FUN_1016e94f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e94f0,0,0);
  return pcVar3;
}



/* Entry: 1016e94d8; end: 1016e94ef;  */

void FUN_1016e94d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e94f0,0,0);
  return;
}



/* Entry: 1016e94f0; end: 1016e9663;  */

void FUN_1016e94f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x22;
  int *piVar9;
  
  puVar6 = PTR_PTR_1126a79b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x50) = puVar6;
  puVar7 = puVar6;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    lVar2 = *(long *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    puVar6 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
    *(undefined **)(unaff_x22 + 0x58) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x60) = param_2;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar5 = *(long *)(lVar2 + 0x20);
    FUN_1016e8a6c(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000026;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010efb7fe0;
    *(undefined **)(unaff_x22 + 0x20) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x28) = param_2;
    *(undefined1 *)(unaff_x22 + 0x30) = 1;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
    piVar9 = *(int **)(lVar5 + 0x10);
    func_0x00010006c00c(puVar6,param_2);
    iVar1 = *piVar9;
    plVar8 = (long *)(ulong)(uint)piVar9[1];
    func_0x000107c61434(uVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1016e9664;
                    /* WARNING: Could not recover jumptable at 0x0001016e9630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar9))
              (plVar8,unaff_x22 + 0x10,0xd000000000000038,0x800000010efb8010,0x40f5180000000000,
               uVar3,lVar5);
    return;
  }
  func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x0001016e9660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016e9664; end: 1016e96cf;  */

void FUN_1016e9664(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  *(undefined8 *)(lVar2 + 0x78) = param_2;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  FUN_1016e8b44(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016e96d0;
  }
  else {
    pcVar1 = (code *)0x1016ea534;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016e96d0; end: 1016e97b3;  */

void FUN_1016e96d0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c610f8(PTR_PTR_1126a79b8);
  FUN_1016e8bc0(uVar7,uVar1);
  uVar6 = uVar7;
  FUN_1016e9418(uVar7,uVar1 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(uVar7,uVar1);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  if (lVar3 == 0) {
    func_0x0001016e8bc8(uVar7,uVar4);
    func_0x00010006c090(uVar2,uVar5);
    func_0x000107c61170(uVar8);
  }
  else {
    func_0x00010006c090(uVar2,uVar5);
    func_0x000107c61170(uVar8);
    func_0x0001016e8bc8(uVar7,uVar4);
    func_0x000107c614ac(lVar3);
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001016e97b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 1016e97b4; end: 1016e982f;  */

undefined8 FUN_1016e97b4(undefined8 param_1,undefined8 param_2)

{
  FUN_101c2d3e0(param_2,param_1);
  return param_2;
}



/* Entry: 1016e9830; end: 1016e986f;  */

void FUN_1016e9830(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc2b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e0e48;
  func_0x000107c61520(&DAT_10d9e0e48,&UNK_110458d48);
  puRam0000000112dc2b18 = puVar1;
  return;
}



/* Entry: 1016e9870; end: 1016e98d7;  */

undefined8 FUN_1016e9870(undefined8 param_1)

{
  FUN_101c2cdb8();
  return param_1;
}



/* Entry: 1016e98d8; end: 1016e994f;  */

void FUN_1016e98d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1016ea5a4;
  plVar5[0x1f] = lVar2;
  plVar5[0x20] = lVar4;
  plVar5[0x1d] = lVar1;
  plVar5[0x1e] = lVar3;
  plVar5[0x1c] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e4034,0,0);
  return;
}



/* Entry: 1016e9950; end: 1016e998f;  */

void FUN_1016e9950(void)

{
  func_0x000100075034(FUN_1016e4bb0,0,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1016e9990; end: 1016e99af;  */

void FUN_1016e9990(void)

{
  long unaff_x20;
  
  FUN_1016e426c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20
                ,*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 1016e99b0; end: 1016e99b7;  */

void FUN_1016e99b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  uVar3 = *(undefined1 *)(param_1 + 3);
  FUN_1016e99b8(uVar1,uVar2,uVar6,uVar3);
  puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28);
  *puVar5 = uVar1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar6;
  *(undefined1 *)(puVar5 + 3) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar4);
  return;
}



/* Entry: 1016e99b8; end: 1016e99eb;  */

/* WARNING: Possible PIC construction at 0x0001016e99d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016e99dc) */

void FUN_1016e99b8(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1016e99ec; end: 1016e9a47;  */

void FUN_1016e99ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1016e8b18(unaff_x20 + 0x20);
  FUN_1016e8b18(unaff_x20 + 0x48);
  FUN_1016e8b18(unaff_x20 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016e9a48; end: 1016e9a4f;  */

void FUN_1016e9a48(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x20;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  long alStack_98 [3];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lStack_d8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar15 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(puVar15);
  func_0x000107c5ed4c(auStack_80);
  if (lStack_68 != 0) {
    uVar6 = 0;
    func_0x0001016e9bd4(0,0x112dc2b28,&PTR_PTR_1126bcad8);
    puVar13 = PTR___sypN_11034f1a8;
    uStack_c8 = uVar6;
    puStack_c0 = puVar15;
    do {
      plVar7 = alStack_98;
      func_0x000107c6147c(plVar7,auStack_80,puVar13 + 8,uVar6,6);
      lVar5 = alStack_98[0];
      if (((ulong)plVar7 & 1) != 0) {
        lVar16 = alStack_98[0];
        func_0x000107c519d0();
        func_0x000107c61180();
        uVar6 = 0;
        func_0x0001016e9bd4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar8 = lVar16;
        func_0x000107c5f9e8(lVar16,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(lVar16);
        func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
        lVar9 = lVar8;
        func_0x000107c6048c();
        lVar16 = 0;
        uVar12 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
        uVar17 = 0xffffffffffffffff;
        if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
          uVar17 = ~(-1L << (uVar12 & 0x3f));
        }
        uVar17 = uVar17 & *(ulong *)(lVar8 + 0x40);
        if (uVar17 == 0) goto LAB_1016e4ed4;
        do {
          uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar17 = uVar17 - 1 & uVar17;
          while( true ) {
            uVar10 = LZCOUNT(uVar10);
            uVar14 = uVar10 | lVar16 << 6;
            puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
            uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar14 * 8);
            uVar6 = *puVar2;
            uVar3 = puVar2[1];
            func_0x000107c61434(uVar3);
            func_0x000107c4223c(uVar18);
            uVar11 = (uVar10 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
            *(ulong *)(lVar9 + 0x40 + uVar11) =
                 *(ulong *)(lVar9 + 0x40 + uVar11) | 1L << (uVar10 & 0x3f);
            puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
            *puVar2 = uVar6;
            puVar2[1] = uVar3;
            *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar14 * 8) = param_1;
            if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e507c);
              (*pcVar4)();
            }
            *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
            if (uVar17 != 0) break;
LAB_1016e4ed4:
            do {
              lVar1 = lVar16 + 1;
              if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e5078);
                (*pcVar4)();
              }
              if ((long)(uVar12 + 0x3f >> 6) <= lVar1) {
                func_0x000107c6142c(lVar8);
                func_0x000107c61428(unaff_x20 + 0x10,alStack_98,0x21,0);
                uVar10 = *(ulong *)(unaff_x20 + 0x10);
                uVar17 = uVar10;
                func_0x000107c61558();
                *(ulong *)(unaff_x20 + 0x10) = uVar10;
                uVar12 = uVar10;
                if ((uVar17 & 1) == 0) {
                  uVar12 = 0;
                  FUN_1016e7470(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10,0x112dc2b30,&UNK_10d97f9b8,
                                0x112d5e228,&UNK_10d97f9c0);
                  *(ulong *)(unaff_x20 + 0x10) = uVar12;
                }
                puVar15 = puStack_c0;
                uVar6 = uStack_c8;
                uVar17 = *(ulong *)(uVar12 + 0x10);
                uVar10 = uVar12;
                if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar17) {
                  uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
                  FUN_1016e7470(uVar10,uVar17 + 1,1,uVar12,0x112dc2b30,&UNK_10d97f9b8,0x112d5e228,
                                &UNK_10d97f9c0);
                }
                *(ulong *)(uVar10 + 0x10) = uVar17 + 1;
                *(long *)(uVar10 + uVar17 * 8 + 0x20) = lVar9;
                *(ulong *)(unaff_x20 + 0x10) = uVar10;
                func_0x000107c614a8(alStack_98);
                func_0x000107c61170(lVar5);
                puVar13 = PTR___sypN_11034f1a8;
                goto LAB_1016e4dcc;
              }
              uVar17 = ((ulong *)(lVar8 + 0x40))[lVar1];
              lVar16 = lVar16 + 1;
            } while (uVar17 == 0);
            uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
            uVar17 = uVar17 - 1 & uVar17;
            lVar16 = lVar1;
          }
        } while( true );
      }
LAB_1016e4dcc:
      func_0x000107c5ed4c(auStack_80);
    } while (lStack_68 != 0);
  }
  (**(code **)(lStack_d8 + 8))(puVar15,lStack_d0);
  return;
}



/* Entry: 1016e9a50; end: 1016e9af7;  */

void FUN_1016e9a50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1016e8b18(unaff_x20 + 0x30);
  FUN_1016e8b18(unaff_x20 + 0x58);
  FUN_1016e8b18(unaff_x20 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016e9af8; end: 1016e9b77;  */

void FUN_1016e9af8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1016e9b78;
  plVar6[8] = lVar4;
  plVar6[9] = lVar7;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[10] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1016e2ca0;
  plVar5[0xc] = lVar2;
  plVar5[0xd] = lVar1;
  plVar5[10] = (long)(plVar6 + 2);
  plVar5[0xb] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e9b78; end: 1016e9bb3;  */

void FUN_1016e9b78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016e9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016e9bb4; end: 1016e9d23;  */

void FUN_1016e9bb4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016e9d24; end: 1016e9ddf;  */

int FUN_1016e9d24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016e9de0; end: 1016e9e43;  */

/* WARNING: Possible PIC construction at 0x0001016e9df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016e9df8) */

void FUN_1016e9de0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1016e9e44; end: 1016e9ea7;  */

undefined8 * FUN_1016e9e44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016e9ea8; end: 1016e9eeb;  */

undefined8 * FUN_1016e9ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1016e9eec; end: 1016e9f83;  */

int FUN_1016e9eec(ulong *param_1,int param_2)

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



/* Entry: 1016e9f84; end: 1016e9fd3;  */

/* WARNING: Possible PIC construction at 0x0001016e9fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016e9fc4) */

void FUN_1016e9f84(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
  FUN_1016e8b18(param_1 + 2);
  FUN_1016e8b18(param_1 + 7);
  FUN_1016e8b18(param_1 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[0x11]);
  return;
}



/* Entry: 1016e9fd4; end: 1016ea09f;  */

undefined8 * FUN_1016e9fd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar3);
  lVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar3;
  (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 7,param_2 + 7);
  lVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = lVar3;
  (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 0xc,param_2 + 0xc);
  uVar1 = param_2[0x13];
  uVar4 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar4;
  param_1[0x13] = uVar1;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1016ea0a0; end: 1016ea153;  */

undefined8 * FUN_1016ea0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100083374(param_1 + 2,param_2 + 2);
  func_0x000100083374(param_1 + 7,param_2 + 7);
  func_0x000100083374(param_1 + 0xc,param_2 + 0xc);
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar2 = param_1[0x13];
  uVar1 = param_2[0x13];
  uVar3 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1016ea154; end: 1016ea1ff;  */

undefined8 * FUN_1016ea154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar1);
  FUN_1016e8b18(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  FUN_1016e8b18(param_1 + 7);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  FUN_1016e8b18(param_1 + 0xc);
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x13];
  uVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016ea200; end: 1016ea2bf;  */

int FUN_1016ea200(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016ea2c0; end: 1016ea2ef;  */

/* WARNING: Possible PIC construction at 0x0001016ea2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ea2e0) */

void FUN_1016ea2c0(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 1016ea2f0; end: 1016ea3c7;  */

undefined8 * FUN_1016ea2f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}


