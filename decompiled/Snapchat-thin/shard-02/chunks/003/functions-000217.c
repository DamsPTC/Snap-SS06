/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101baa8b8; end: 101baa917;  */

void FUN_101baa8b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101baa918;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xc0));
    pcVar1 = FUN_101baab2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101baa918; end: 101baa9e3;  */

void FUN_101baa918(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101baa9e4;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar1 = 0x112e06ea0;
  func_0x0001000285a8(0x112e06ea0,&UNK_10d9dadf0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101bab16c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104506d8;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c449ec(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101baa9e4; end: 101baaa43;  */

void FUN_101baa9e4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_101baaa44;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xc0));
    pcVar1 = FUN_101baab78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101baaa44; end: 101baab2b;  */

void FUN_101baaa44(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  lVar1 = lVar2;
  func_0x000100403a6c();
  func_0x000107c6142c(lVar2);
  lVar2 = lVar3;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(lVar3);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  if (*(ulong *)(lVar2 + 0x10) >> 3 < *(ulong *)(lVar1 + 0x10)) {
    lVar3 = lVar1;
    func_0x000101baba54(lVar1,lVar2);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(uVar4);
    func_0x000107c61574(lVar3);
  }
  else {
    func_0x0001012eef50(lVar1);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101baab28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1);
  return;
}



/* Entry: 101baab2c; end: 101baab77;  */

void FUN_101baab2c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101baab74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101baab78; end: 101baabc7;  */

void FUN_101baab78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101baabc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101baabc8; end: 101baac8b;  */

undefined * FUN_101baabc8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = param_1;
  func_0x000107c449a4();
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c3920;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126a8ba0;
    func_0x000107c610f8(PTR_PTR_1126a8ba0);
    func_0x000107c453e4();
    func_0x000107c56808(puVar4,param_2,puVar3);
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c4d1e4();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101baac8c);
      (*pcVar1)();
    }
    func_0x000107c4d1f0(param_1);
    func_0x000107c61180();
    func_0x000107c56814(puVar3,param_2,param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  return puVar4;
}



/* Entry: 101baac8c; end: 101baadaf;  */

void FUN_101baac8c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if ((param_1 & 1) != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    if (param_7 == 0) {
      func_0x000107c61174(uVar1);
      param_6 = 0;
    }
    else {
      func_0x000107c61174(uVar1);
      func_0x000107c5fadc(param_6,param_7);
    }
    if (param_9 == 0) {
      param_8 = 0;
    }
    else {
      func_0x000107c5fadc(param_8,param_9);
    }
    func_0x000107e675d4(param_3,param_5 & 1,uVar1,param_6,param_8);
    func_0x000107c61574(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_8);
    return;
  }
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101baadb0; end: 101bab16b;  */

void FUN_101baadb0(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar3 = (undefined *)*param_2;
  puVar15 = puVar3;
  func_0x000107c51fa0();
  func_0x000107c61180();
  puVar13 = PTR___sypN_11034f1a8;
  if (puVar15 == (undefined *)0x0) {
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar15 = PTR___sSSN_11034da80;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    param_3 = PTR___sypN_11034f1a8 + 8;
    puVar4 = puVar15;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar15);
    lVar14 = *(long *)(puVar4 + 0x10);
    puVar15 = PTR___sSSN_11034da80;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar11 = puVar4;
  PTR___sSSN_11034da80 = puVar15;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (lVar14 == 0) {
    func_0x000107c6142c(puVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    do {
      func_0x0001000bb420(puVar11 + 0x20,auStack_80);
      func_0x0001000bb420(auStack_80,auStack_a0);
      plVar5 = &lStack_b0;
      param_3 = auStack_a0;
      func_0x000107c6147c(plVar5,param_3,puVar13 + 8,puVar15,6);
      puVar8 = puStack_a8;
      if ((int)plVar5 == 0) {
        FUN_101bacf10(auStack_80);
      }
      else {
        lVar6 = lStack_b0;
        param_3 = puStack_a8;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
        lVar7 = lVar6;
        func_0x000107e69b00();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        FUN_101bacf10(auStack_80);
        if (lVar7 != 0) {
          puVar8 = puVar9;
          func_0x000107c61550();
          if (((((ulong)puVar8 & 1) == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              param_3 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              param_3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                param_3 = puVar9;
              }
              func_0x000107c60480();
            }
            param_3 = param_3 + 1;
            puVar8 = (undefined *)0x0;
            FUN_101b9c3b0(0,param_3,1,puVar9);
          }
          uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar12 + 0x10);
          puVar10 = (undefined *)(uVar2 + 1);
          puVar9 = puVar8;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            param_3 = puVar10;
            FUN_101b9c3b0(puVar9,puVar10,1,puVar8);
            uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar12 + 0x10) = puVar10;
          *(long *)(uVar12 + uVar2 * 8 + 0x20) = lVar7;
        }
      }
      lVar14 = lVar14 + -1;
      puVar11 = puVar11 + 0x20;
    } while (lVar14 != 0);
    func_0x000107c6142c(puVar4);
  }
  puVar15 = puVar3;
  func_0x000107c4c544();
  func_0x000107c61180();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    param_3 = puVar13 + 8;
    puVar4 = puVar15;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar15);
  }
  puVar8 = PTR___sSSN_11034da80;
  puVar15 = puVar4;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  for (lVar14 = *(long *)(puVar4 + 0x10); lVar14 != 0; lVar14 = lVar14 + -1) {
    puVar15 = puVar15 + 0x20;
    func_0x0001000bb420(puVar15,auStack_80);
    func_0x0001000bb420(auStack_80,auStack_a0);
    plVar5 = &lStack_b0;
    param_3 = auStack_a0;
    func_0x000107c6147c(plVar5,param_3,puVar13 + 8,puVar8,6);
    puVar10 = puStack_a8;
    if ((int)plVar5 == 0) {
      FUN_101bacf10(auStack_80);
    }
    else {
      lVar6 = lStack_b0;
      param_3 = puStack_a8;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar10);
      lVar7 = lVar6;
      func_0x000107e65eb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      FUN_101bacf10(auStack_80);
      if (lVar7 != 0) {
        puVar10 = puVar11;
        func_0x000107c61550();
        if (((((ulong)puVar10 & 1) == 0) || ((long)puVar11 < 0)) ||
           (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            param_3 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            param_3 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              param_3 = puVar11;
            }
            func_0x000107c60480();
          }
          param_3 = param_3 + 1;
          puVar10 = (undefined *)0x0;
          FUN_101b9c22c(0,param_3,1,puVar11);
        }
        uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar12 + 0x10);
        puVar1 = (undefined *)(uVar2 + 1);
        puVar11 = puVar10;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          param_3 = puVar1;
          FUN_101b9c22c(puVar11,puVar1,1,puVar10);
          uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar12 + 0x10) = puVar1;
        *(long *)(uVar12 + uVar2 * 8 + 0x20) = lVar7;
      }
    }
  }
  func_0x000107c6142c(puVar4);
  *param_1 = puVar9;
  param_1[1] = puVar11;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    param_3 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
  }
  param_1[2] = puVar13;
  param_1[3] = param_3;
  return;
}



/* Entry: 101bab16c; end: 101bab217;  */

void FUN_101bab16c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_101bacf60(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101bab218; end: 101bab293;  */

void FUN_101bab218(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101bacf10(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101bab294; end: 101bab37f;  */

undefined8 FUN_101bab294(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_101bab364;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_101bab380(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_101bab364:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 101bab380; end: 101bab4af;  */

void FUN_101bab380(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_101bab6c0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_101bab4b0(uVar3 + 1);
    }
    else {
      FUN_101bab800();
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(&UNK_110450818);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101bab4b0);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bab4a0);
  (*pcVar1)();
}



/* Entry: 101bab4b0; end: 101bab6bf;  */

void FUN_101bab4b0(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112e06ea8;
  func_0x0001000285a8(0x112e06ea8,&UNK_10d9dae00);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101bab688:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101bab6bc);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_101bab688;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar14 >> 6;
    uVar7 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar14 = uVar9 + 1;
        if ((uVar14 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101bab6c0);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar14 != uVar7) {
          uVar9 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar7 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Entry: 101bab6c0; end: 101bab7ff;  */

void FUN_101bab6c0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112e06ea8,&UNK_10d9dae00);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101bab800);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101bab7e0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
    } while( true );
  }
LAB_101bab7e0:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101bab800; end: 101babddb;  */

void FUN_101bab800(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112e06ea8;
  func_0x0001000285a8(0x112e06ea8,&UNK_10d9dae00);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101baba20:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101baba50);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_101baba20;
        }
        uVar12 = puVar14[lVar16];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar16 << 6));
    uVar15 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar15 = uVar15 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar15 >> 6;
    uVar7 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar15 = uVar9 + 1;
        if ((uVar15 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101baba54);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar15 != uVar7) {
          uVar9 = uVar15;
        }
        bVar3 = (bool)(uVar15 == uVar7 | bVar3);
        uVar15 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar7 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar16;
  } while( true );
}



/* Entry: 101babddc; end: 101bac00b;  */

void FUN_101babddc(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  lVar9 = *(long *)(param_3 + 0x10);
  uVar10 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar9 = lVar9 + -1;
  do {
    while( true ) {
      lVar2 = param_5[3];
      uVar10 = param_5[4];
      lVar11 = lVar2;
      if (uVar10 == 0) {
        uVar12 = param_5[2] + 0x40U >> 6;
        lVar13 = lVar2;
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101bac008);
            (*pcVar4)();
          }
          if ((long)uVar12 <= lVar11) {
            if ((long)uVar12 <= lVar2 + 1) {
              uVar12 = lVar2 + 1;
            }
            param_5[3] = uVar12 - 1;
            param_5[4] = 0;
            func_0x000107c6157c(param_3);
            func_0x0001010aeef0(param_1,param_2,lVar9,param_3);
            return;
          }
          uVar10 = *(ulong *)(param_5[1] + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar10 == 0);
      }
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(*param_5 + 0x30) +
                         LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 0x10 + lVar11 * 0x400);
      uVar12 = *puVar1;
      uVar3 = puVar1[1];
      param_5[3] = lVar11;
      param_5[4] = uVar10 - 1 & uVar10;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      func_0x000107c61434(uVar3);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar12,uVar3);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar15 = uVar16 >> 6;
      uVar14 = 1L << (uVar16 & 0x3f);
      if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) != 0) break;
LAB_101babf88:
      func_0x000107c6142c(uVar3);
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    if (uVar7 != uVar12 || uVar8 != uVar3) {
      do {
        func_0x000107c605b8(uVar7,uVar8,uVar12,uVar3,0);
        if ((uVar7 & 1) != 0) break;
        uVar16 = uVar16 + 1 & ~uVar10;
        uVar15 = uVar16 >> 6;
        uVar14 = 1L << (uVar16 & 0x3f);
        if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) == 0) goto LAB_101babf88;
        puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
      } while ((uVar7 != uVar12) || (uVar8 != uVar3));
    }
    func_0x000107c6142c(uVar3);
    uVar10 = *(ulong *)(param_1 + uVar15 * 8);
    *(ulong *)(param_1 + uVar15 * 8) = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    if ((uVar10 & uVar14) != 0) {
      bVar5 = SBORROW8(lVar9,1);
      lVar9 = lVar9 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bac00c);
        (*pcVar4)();
      }
      if (lVar9 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 101bac00c; end: 101bac9bb;  */

undefined * FUN_101bac00c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x000101b9b7a0(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101bac174);
      (*pcVar6)();
    }
    uVar9 = 0;
    do {
      puVar5 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar9) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101bac158);
          (*pcVar6)();
        }
        uVar7 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar9;
        FUN_101b9bcac(uVar9,param_1);
      }
      uStack_98 = uVar7;
      FUN_101baadb0(&uStack_90,&uStack_98);
      func_0x000107c61170(uVar7);
      uVar4 = uStack_78;
      uVar3 = uStack_80;
      uVar2 = uStack_88;
      uVar1 = uStack_90;
      uVar7 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        func_0x000101b9b7a0(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puStack_68 + uVar7 * 0x20 + 0x28) = uVar2;
      *(undefined8 *)(puStack_68 + uVar7 * 0x20 + 0x20) = uVar1;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(puStack_68 + uVar7 * 0x20 + 0x30) = uVar3;
      *(undefined8 *)(puStack_68 + uVar7 * 0x20 + 0x38) = uVar4;
    } while (uVar8 != uVar9);
  }
  return puStack_68;
}



/* Entry: 101bac9bc; end: 101bac9ff;  */

long FUN_101bac9bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101baca00; end: 101baca33;  */

void FUN_101baca00(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101baac8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101baca34; end: 101baca4f;  */

void FUN_101baca34(long param_1,long param_2)

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



/* Entry: 101baca50; end: 101bacab7;  */

void FUN_101baca50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bacab8,0,0);
  return;
}



/* Entry: 101bacab8; end: 101bacea7;  */

void FUN_101bacab8(double param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *apuStack_70 [2];
  
  puVar5 = *(undefined1 **)(unaff_x22 + 0x18);
  func_0x000107c51f98();
  func_0x000107c61180();
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
    *puVar5 = 0x38;
    func_0x000107c61654();
  }
  else {
    puVar6 = puVar5;
    func_0x000107c44b08();
    if ((int)puVar6 != 0) {
      puVar7 = puVar5;
      func_0x000107c5b198();
      func_0x000107c61180();
      puVar6 = (undefined1 *)0x0;
      if (puVar7 != (undefined1 *)0x0) {
        puVar6 = puVar7;
        func_0x000107c44bb8();
        if (((ulong)puVar6 & 1) == 0) {
          lVar1 = *(long *)(unaff_x22 + 0x48);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x40);
          func_0x000107c5eea0(uVar9);
          func_0x000107c5ee8c();
          (**(code **)(lVar1 + 8))(uVar9,uVar17);
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101bace08);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101bace0c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101bace10);
            (*UNRECOVERED_JUMPTABLE)();
          }
          puVar8 = PTR_PTR_1126bcf30;
          func_0x000107c610f8(PTR_PTR_1126bcf30);
          func_0x000107c453e4();
          func_0x000107c563fc();
          func_0x000107c59340(puVar8);
          func_0x000107c59df8(puVar7);
          func_0x000107c61170(puVar8);
        }
        puVar6 = puVar5;
        func_0x000107c5b2dc();
        func_0x000107c61180();
        if (puVar6 == (undefined1 *)0x0) {
LAB_101bacdec:
          puVar16 = (undefined *)0x0;
        }
        else {
          apuStack_70[0] = (undefined *)0x0;
          uVar9 = 0;
          FUN_101bacea8(0,0x112e06c30,&PTR_PTR_1126a8b98);
          func_0x000107c5fc50(puVar6,apuStack_70,uVar9);
          func_0x000107c61170(puVar6);
          puVar8 = apuStack_70[0];
          if (apuStack_70[0] == (undefined *)0x0) goto LAB_101bacdec;
          if ((ulong)apuStack_70[0] >> 0x3e == 0) {
            puVar18 = *(undefined **)
                       ((undefined *)((ulong)apuStack_70[0] & 0xffffffffffffff8) + 0x10);
            if (puVar18 != (undefined *)0x0) goto LAB_101bacc38;
LAB_101bace28:
            func_0x000107c6142c(puVar8);
            puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar18 = apuStack_70[0];
            if (-1 < (long)apuStack_70[0]) {
              puVar18 = (undefined *)((ulong)apuStack_70[0] & 0xffffffffffffff8);
            }
            func_0x000107c60480();
            if (puVar18 == (undefined *)0x0) goto LAB_101bace28;
LAB_101bacc38:
            apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000100403514(0,(ulong)puVar18 & ((long)puVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)puVar18 < 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101bacea8);
              (*UNRECOVERED_JUMPTABLE)();
            }
            puVar19 = (undefined *)0x0;
            do {
              puVar16 = apuStack_70[0];
              if (((ulong)puVar8 & 0xc000000000000001) == 0) {
                puVar10 = *(undefined **)(puVar8 + (long)puVar19 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar10 = puVar19;
                func_0x000101b9bea4();
              }
              puVar11 = puVar10;
              func_0x000107c44e64();
              puVar12 = puVar10;
              func_0x000107c4c0fc();
              func_0x000103ee3894();
              puVar13 = puVar10;
              func_0x000107c49b30();
              puVar14 = puVar12;
              if ((int)puVar13 == 0) {
                func_0x000107c5fb1c();
                func_0x000107c61170(puVar10);
                func_0x000107c6142c(puVar12);
              }
              else {
                func_0x000107c61170(puVar10);
              }
              uVar2 = *(ulong *)(puVar16 + 0x10);
              apuStack_70[0] = puVar16;
              if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar2) {
                func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar2 + 1,1);
              }
              puVar16 = apuStack_70[0];
              puVar19 = puVar19 + 1;
              *(ulong *)(apuStack_70[0] + 0x10) = uVar2 + 1;
              *(undefined **)(apuStack_70[0] + uVar2 * 0x10 + 0x20) = puVar11;
              *(undefined **)(apuStack_70[0] + uVar2 * 0x10 + 0x28) = puVar14;
            } while (puVar18 != puVar19);
            func_0x000107c6142c(puVar8);
          }
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x20);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
        puVar20 = *(undefined8 **)(unaff_x22 + 0x10);
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar4);
        puVar6 = puVar5;
        FUN_101baabc8();
        func_0x000107c61170(puVar5);
        *puVar20 = uVar17;
        puVar20[1] = uVar4;
        *(undefined1 *)(puVar20 + 2) = 1;
        puVar20[3] = puVar7;
        puVar20[4] = puVar16;
        puVar20[5] = uVar9;
        puVar20[6] = uVar3;
        puVar20[7] = 0;
        puVar20[8] = 0;
        puVar20[9] = puVar6;
        func_0x000107c615c0(uVar15);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_101bacdc8;
      }
    }
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar6,0,0);
    *puVar6 = 0x39;
    func_0x000107c61654();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101bacdc8:
                    /* WARNING: Could not recover jumptable at 0x000101bacde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bacea8; end: 101bacee7;  */

void FUN_101bacea8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bacee8; end: 101bacef7;  */

long FUN_101bacee8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101bacef8; end: 101bacf0f;  */

void FUN_101bacef8(long param_1)

{
  FUN_101bacf10(param_1 + 0x20);
  return;
}



/* Entry: 101bacf10; end: 101bacf2f;  */

void FUN_101bacf10(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bacf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101bacf30; end: 101bacf5f;  */

void FUN_101bacf30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_101babddc(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101bacf60; end: 101bacf83;  */

long * FUN_101bacf60(long *param_1,long param_2)

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



/* Entry: 101bacf84; end: 101bacff7;  */

long FUN_101bacf84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bacff8; end: 101bad083;  */

undefined8 * FUN_101bacff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar5 = param_2[9];
  param_1[9] = uVar5;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar5);
  return param_1;
}



/* Entry: 101bad084; end: 101bad15f;  */

undefined8 * FUN_101bad084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101bad160; end: 101bad1e3;  */

undefined8 * FUN_101bad160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61170(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  func_0x000107c6142c(param_1[8]);
  uVar2 = param_1[9];
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 101bad1e4; end: 101bad3f7;  */

int FUN_101bad1e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bad3f8; end: 101bad437;  */

void FUN_101bad3f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e06eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dae74;
  func_0x000107c61520(&UNK_10d9dae74,&UNK_110450818);
  puRam0000000112e06eb0 = puVar1;
  return;
}



/* Entry: 101bad438; end: 101bad6bf;  */

undefined * FUN_101bad438(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  func_0x000107c4455c();
  func_0x000107c61180();
  puVar12 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 != 0) {
    uVar3 = 0;
    FUN_101bad6c0(0);
    uVar4 = param_1;
    func_0x000107c5fc54(param_1,uVar3);
    func_0x000107c61170(param_1);
    puStack_68 = puVar12;
    if (uVar4 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar13 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar13 == 0) {
      func_0x000107c6142c(uVar4);
    }
    else {
      uVar14 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101bad678);
            (*pcVar1)();
          }
          uVar5 = *(ulong *)(uVar4 + 0x20 + uVar14 * 8);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar14;
          FUN_101b9bcac(uVar14,uVar4);
        }
        bVar2 = SCARRY8(uVar14,1);
        uVar14 = uVar14 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101bad674);
          (*pcVar1)();
        }
        uVar6 = uVar5;
        func_0x000107c51fa0();
        func_0x000107c61180();
        if (uVar6 != 0) {
          uVar16 = uVar6;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar6);
          uVar6 = uVar16;
          func_0x000101158fcc();
          func_0x000107c6142c(uVar16);
          if (uVar6 != 0) {
            uVar16 = *(ulong *)(uVar6 + 0x10);
            if (uVar16 != 0) {
              uVar11 = 0;
              puVar15 = (ulong *)(uVar6 + 0x28);
              do {
                if (*(ulong *)(uVar6 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bad670);
                  (*pcVar1)();
                }
                uVar8 = puVar15[-1];
                uVar10 = *puVar15;
                uVar9 = uVar8 & 0xffffffffffff;
                if ((uVar10 & 0x2000000000000000) != 0) {
                  uVar9 = uVar10 >> 0x38 & 0xf;
                }
                if (uVar9 != 0) {
                  func_0x000107c61434(uVar10);
                  func_0x000107c5fadc(uVar8,uVar10);
                  func_0x000107c6142c(uVar10);
                  uVar9 = uVar8;
                  func_0x000107e69b00();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar8);
                  if (uVar9 != 0) {
                    uVar8 = uVar9;
                    func_0x000107c51f9c();
                    func_0x000107c61180();
                    if (uVar8 == 0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bad6c0);
                      (*pcVar1)();
                    }
                    uVar10 = uVar8;
                    func_0x000107c5b420();
                    func_0x000107c61170(uVar8);
                    if ((int)uVar10 == 6) {
                      puVar7 = &uStack_69;
                      uVar3 = 1;
LAB_101bad594:
                      FUN_101bab294(puVar7,uVar3);
                    }
                    else if ((int)uVar10 == 4) {
                      puVar7 = &uStack_6a;
                      uVar3 = 0;
                      goto LAB_101bad594;
                    }
                    func_0x000107c61170(uVar9);
                  }
                }
                uVar11 = uVar11 + 1;
                puVar15 = puVar15 + 2;
              } while (uVar16 != uVar11);
            }
            func_0x000107c6142c(uVar6);
          }
        }
        func_0x000107c61170(uVar5);
      } while (uVar14 != uVar13);
      func_0x000107c6142c(uVar4);
      puVar12 = puStack_68;
    }
  }
  return puVar12;
}



/* Entry: 101bad6c0; end: 101bad727;  */

void FUN_101bad6c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e06c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e0d80;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e06c70 = puVar1;
  return;
}



/* Entry: 101bad728; end: 101bad743;  */

void FUN_101bad728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_3;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bad744,0,0);
  return;
}



/* Entry: 101bad744; end: 101bad7cf;  */

void FUN_101bad744(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x140) + 0x10);
  uVar1 = 0x112e06e98;
  func_0x0001000285a8(0x112e06e98,&UNK_10d9dade8);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x148) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x150) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bad7d0;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x120;
  plVar2[9] = unaff_x22 + 0x118;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x110;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bad7d0; end: 101bad827;  */

void FUN_101bad7d0(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bad828;
  }
  else {
    pcVar1 = FUN_101bade60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bad828; end: 101bad8fb;  */

void FUN_101bad828(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar3;
  uVar1 = **(undefined8 **)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x168) = (*(undefined8 **)(unaff_x22 + 0x130))[1];
  func_0x000107c5fadc();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar1;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x1c8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bad8fc;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar1 = 0x112e06f60;
  func_0x0001000285a8(0x112e06f60,&UNK_10dab9b20);
  *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_101badfb8;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110450918;
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c449e4(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bad8fc; end: 101bad953;  */

void FUN_101bad8fc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x178) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101bad954;
  }
  else {
    pcVar1 = FUN_101badeb0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bad954; end: 101badd67;  */

void FUN_101bad954(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  
  bVar1 = *(byte *)(unaff_x22 + 0x1c8);
  *(byte *)(unaff_x22 + 0x1c9) = bVar1;
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x170));
  if ((bVar1 & 1) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    puVar2 = PTR_PTR_1126d7f28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0x180) = puVar2;
    puVar3 = PTR_PTR_1126b1df0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0x188) = puVar3;
    uVar4 = uVar7;
    func_0x000107c5cab0(uVar7);
    func_0x000107c61180();
    func_0x000107c5a494(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c54620(puVar2);
    puVar5 = PTR_PTR_1126a8ba8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 400) = puVar5;
    func_0x000107c5a1bc();
    func_0x000107c5fadc(uVar11,uVar14);
    func_0x000107c55218(puVar5);
    func_0x000107c61170(uVar11);
    uVar11 = uVar7;
    func_0x000107c42950(uVar7);
    func_0x000107c61180();
    func_0x000107c54940(puVar5);
    func_0x000107c61170(uVar11);
    puVar6 = PTR_PTR_1126bfab0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0x198) = puVar6;
    func_0x000107c3fba8();
    if ((int)uVar7 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101badd68);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar15 = *(long *)(unaff_x22 + 0x130);
    func_0x000107c5a494(puVar6);
    func_0x000107c5347c(puVar5);
    puVar8 = *(undefined **)(lVar15 + 0x20);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
    }
    func_0x000107c61434();
    puVar8 = puVar9;
    func_0x00010102c3b8(puVar9);
    func_0x000107c6142c(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar8);
    func_0x000107c45788(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c59588(puVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c54878(puVar5);
    if (*(long *)(lVar15 + 0x30) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x130) + 0x28);
      func_0x000107c5fadc(uVar11);
    }
    lVar15 = *(long *)(unaff_x22 + 0x130);
    func_0x000107c57b8c(puVar5);
    func_0x000107c61170(uVar11);
    lVar15 = *(long *)(lVar15 + 0x40);
    if (lVar15 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x130) + 0x38);
      func_0x000107c5fadc(uVar11);
    }
    func_0x000107c53570(puVar5);
    func_0x000107c61170(uVar11);
    func_0x000107c5356c(puVar5);
    func_0x000107c593e0(puVar2);
    puVar12 = puVar2;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar12 != (undefined1 *)0x0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x158);
      puVar13 = puVar12;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar12);
      *(undefined1 **)(unaff_x22 + 0x1a0) = puVar13;
      *(long *)(unaff_x22 + 0x1a8) = lVar15;
      func_0x000107c5fadc(uVar11,uVar7);
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar11;
      func_0x000107c5ee20(puVar13,lVar15);
      *(undefined1 **)(unaff_x22 + 0x1b8) = puVar13;
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_101badd68;
      lVar15 = unaff_x22 + 0x50;
      func_0x000107c61448(lVar15,1);
      uVar11 = 0x112d61d38;
      func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
      *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xe0) = &UNK_10117968c;
      *(undefined **)(unaff_x22 + 0xe8) = &UNK_110450940;
      *(long *)(unaff_x22 + 0xf0) = lVar15;
      func_0x000107c3d864(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar12,0,0);
    *puVar12 = 0x24;
    func_0x000107c61654();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(unaff_x22 + 0x1c9);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x158));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000101badd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(bVar1);
  return;
}



/* Entry: 101badd68; end: 101baddbf;  */

void FUN_101badd68(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x1c0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101baddc0;
  }
  else {
    pcVar1 = FUN_101badf04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101baddc0; end: 101bade5f;  */

void FUN_101baddc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x188));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x00010006c090(uVar2,uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  bVar8 = *(byte *)(unaff_x22 + 0x1c9);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x000101bade5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))((bVar8 ^ 0xff) & 1);
  return;
}



/* Entry: 101bade60; end: 101badeaf;  */

void FUN_101bade60(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101badeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101badeb0; end: 101badf03;  */

void FUN_101badeb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101badf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101badf04; end: 101badfb7;  */

void FUN_101badf04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x00010006c090(uVar6,uVar2);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101badfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101badfb8; end: 101bae053;  */

void FUN_101badfb8(long param_1,undefined1 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined1 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101bae054; end: 101bae06b;  */

void FUN_101bae054(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bae06c,0,0);
  return;
}



/* Entry: 101bae06c; end: 101bae103;  */

void FUN_101bae06c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0xb0) + 0x10);
  uVar1 = 0x112e06e98;
  func_0x0001000285a8(0x112e06e98,&UNK_10d9dade8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bae104;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0xa0;
  plVar2[9] = unaff_x22 + 0x98;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x90;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bae104; end: 101bae15b;  */

void FUN_101bae104(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bae15c;
  }
  else {
    pcVar1 = (code *)0x101bae2b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bae15c; end: 101bae21f;  */

void FUN_101bae15c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bae220;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar1 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104508c8;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c51910(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bae220; end: 101bae2ff;  */

void FUN_101bae220(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xd8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x101bae278;
  }
  else {
    pcVar1 = FUN_101bae300;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bae300; end: 101bae34f;  */

void FUN_101bae300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bae34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bae350; end: 101bae367;  */

void FUN_101bae350(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bae368,0,0);
  return;
}



/* Entry: 101bae368; end: 101bae3ff;  */

void FUN_101bae368(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  uVar1 = 0x112e06e98;
  func_0x0001000285a8(0x112e06e98,&UNK_10d9dade8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bae400;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0xa0;
  plVar2[9] = unaff_x22 + 0x98;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x90;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bae400; end: 101bae457;  */

void FUN_101bae400(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bae458;
  }
  else {
    pcVar1 = (code *)0x101bae584;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bae458; end: 101bae4f7;  */

void FUN_101bae458(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bae4f8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104508a0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c51914(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bae4f8; end: 101bae5cf;  */

void FUN_101bae4f8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x101bae550;
  }
  else {
    pcVar1 = FUN_101bae5d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bae5d0; end: 101bae613;  */

void FUN_101bae5d0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bae610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bae614; end: 101bae643;  */

long FUN_101bae614(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101bae644; end: 101bae6db;  */

void FUN_101bae644(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  uVar1 = 0x112e06e98;
  func_0x0001000285a8(0x112e06e98,&UNK_10d9dade8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bae6dc;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0xa0;
  plVar2[9] = unaff_x22 + 0x98;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x90;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101bae6dc; end: 101bae733;  */

void FUN_101bae6dc(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bae734;
  }
  else {
    pcVar1 = (code *)0x101bae83c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bae734; end: 101bae7d3;  */

void FUN_101bae734(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bae7d4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104508f0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c51914(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bae7d4; end: 101bae82b;  */

void FUN_101bae7d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    uVar1 = 0x101bae840;
  }
  else {
    uVar1 = 0x101bae844;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bae82c; end: 101bae86f;  */

void FUN_101bae82c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 101bae870; end: 101bae983;  */

/* WARNING: Removing unreachable block (ram,0x000101bae898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bae870(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000107c5fd64();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + _DAT_112e06f68);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bb142c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  func_0x0001000d224c(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar2 = &UNK_110450a98;
  func_0x000107c613fc(&UNK_110450a98,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(long *)(puVar2 + 0x18) = lVar1;
  uVar3 = 0;
  FUN_101bb12e4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar4);
  func_0x00010090569c(FUN_101bb1078,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bae984; end: 101baeacf;  */

void FUN_101bae984(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puStack_38;
  
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined1 *)0x0) {
    func_0x00010118a534();
    puVar4 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
    *param_1 = 0;
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar4;
    func_0x000107c61454(param_2,uVar5);
    return;
  }
  puVar2 = puStack_38;
  func_0x000107c432fc();
  puVar3 = puVar2;
  func_0x000107c5eac8();
  if ((long)puVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101baead0);
    (*pcVar1)();
  }
  if (puVar3 == (undefined1 *)0x0) {
    if (puVar2 == (undefined1 *)0x0) goto LAB_101bae9d0;
  }
  else if (puVar2 == puVar3) {
LAB_101bae9d0:
    func_0x00010118a534();
    puVar4 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,puVar3,0,0);
    *puVar3 = 0;
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar6 = puVar4;
    func_0x000107c61454(param_2,uVar5);
    goto LAB_101baeab0;
  }
  **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = puVar2;
  func_0x000107c61450(param_2);
LAB_101baeab0:
  func_0x000107c615e8(puStack_38);
  return;
}



/* Entry: 101baead0; end: 101baeb1b;  */

void FUN_101baead0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101baeb1c;
  plVar1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bae870,0,0);
  return;
}



/* Entry: 101baeb1c; end: 101baeb8f;  */

void FUN_101baeb1c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101baeb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baeb90,0,0);
  return;
}



/* Entry: 101baeb90; end: 101baebdb;  */

void FUN_101baeb90(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *puVar2 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000101baebd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101baebdc; end: 101baed07; -[_TtC24MemoriesDataServicesImpl24MemoriesCoreDataProvider fetchTotalMemoryEntryCountFuture:] */

void FUN_101baebdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = &UNK_10d905070;
  uVar5 = param_3;
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x00010007c020(param_3);
  puVar2 = &UNK_110450bd8;
  func_0x000107c613fc(&UNK_110450bd8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  uVar3 = uVar1;
  func_0x000104887c7c(uVar1,puVar4,uVar5,4,0xd000000000000024,0x800000010f002030,&UNK_10d9db048,
                      puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010007d980(uVar1,puVar4,uVar5);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101baed08; end: 101baed4f;  */

void FUN_101baed08(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baed50,0,0);
  return;
}



/* Entry: 101baed50; end: 101baee33;  */

/* WARNING: Removing unreachable block (ram,0x000101baed78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101baed50(void)

{
  long unaff_x22;
  
  func_0x000107c5fd64();
  if (*(long *)(*(long *)(unaff_x22 + 0x58) + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101baee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x101bb1430;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101baee34();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101baee34; end: 101baef0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101baee34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_110450a70;
  func_0x000107c613fc(&UNK_110450a70,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  puVar1[0x28] = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0;
  FUN_101bb12e4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_4);
  func_0x00010090569c(FUN_101bb0cc4,puVar1,uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101baef10; end: 101baf59f;  */

/* WARNING: Removing unreachable block (ram,0x000101baf58c) */

void FUN_101baef10(undefined1 *param_1,long param_2,long param_3,uint param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  ulong *puVar28;
  undefined1 *puVar29;
  ulong uVar30;
  undefined4 uStack_a4;
  undefined1 *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  puVar7 = puStack_68;
  if (puStack_68 != (undefined1 *)0x0) {
    lVar22 = param_2;
    func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
    puVar2 = puVar7;
    func_0x000107c4310c();
    func_0x000107c61180();
    func_0x000107c61170(lVar22);
    if (puVar2 != (undefined1 *)0x0) {
      puVar21 = (undefined1 *)0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      puVar3 = puVar2;
      func_0x000107c5fc54();
      if ((ulong)puVar3 >> 0x3e == 0) {
        puVar25 = *(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar25 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < puVar3) {
          puVar25 = puVar3;
        }
        func_0x000107c60480();
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
      if (puVar25 == (undefined1 *)0x0) {
        func_0x000107c6142c(puVar3);
        func_0x000107c61170(puVar2);
        **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar6;
        func_0x000107c61450(param_3);
      }
      else {
        puVar5 = (undefined1 *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar3 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101baf51c);
                (*pcVar1)();
              }
              puVar27 = *(undefined1 **)(puVar3 + (long)puVar5 * 8 + 0x20);
              func_0x000107c615f0(puVar27);
              puVar15 = puVar21;
            }
            else {
              puVar27 = puVar5;
              puVar15 = puVar3;
              func_0x000100fb0ba0();
            }
            if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101baf518);
              (*pcVar1)();
            }
            puVar29 = puVar5 + 1;
            puVar4 = puVar27;
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (puVar4 == (undefined1 *)0x0) break;
            puVar5 = puVar4;
            func_0x000107c5faec();
            puVar21 = puVar15;
            func_0x000107c61170(puVar4);
            puVar14 = puVar6;
            func_0x000107c61558();
            puVar13 = puVar6;
            if (((ulong)puVar14 & 1) == 0) {
              puVar21 = (undefined1 *)(*(long *)(puVar6 + 0x10) + 1);
              puVar13 = (undefined *)0x0;
              func_0x000100fb4d7c(0,puVar21,1,puVar6);
            }
            uVar20 = *(ulong *)(puVar13 + 0x10);
            puVar4 = (undefined1 *)(uVar20 + 1);
            puVar6 = puVar13;
            if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
              puVar21 = puVar4;
              func_0x000100fb4d7c(puVar6,puVar4,1,puVar13);
            }
            *(undefined1 **)(puVar6 + 0x10) = puVar4;
            *(undefined1 **)(puVar6 + uVar20 * 0x18 + 0x20) = puVar5;
            *(undefined1 **)(puVar6 + uVar20 * 0x18 + 0x28) = puVar15;
            *(undefined1 **)(puVar6 + uVar20 * 0x18 + 0x30) = puVar27;
            puVar5 = puVar29;
            if (puVar29 == puVar25) goto LAB_101baf0f0;
          }
          func_0x000107c615e8(puVar27);
          puVar21 = puVar15;
          puVar5 = puVar5 + 1;
        } while (puVar29 != puVar25);
LAB_101baf0f0:
        puVar21 = *(undefined1 **)(puVar6 + 0x10);
        puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (puVar21 != (undefined1 *)0x0) {
          func_0x0001000285a8(0x112d508b8,&UNK_10d9172e0);
          func_0x000107c60498();
          puStack_68 = puVar21;
        }
        FUN_101bb0cd8(puVar6,1,&puStack_68);
        func_0x000107c6142c(puVar3);
        func_0x000107c6142c(puVar6);
        puVar21 = puStack_68;
        if ((param_4 & 1) == 0) {
          func_0x000107c61170(puVar2);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_101bb0f7c();
        }
        else {
          puVar3 = puVar7;
          func_0x000107c42f94();
          func_0x000107c61180();
          func_0x000107c61170(puVar2);
          uVar26 = 0x112d511e8;
          func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
          puVar6 = puVar3;
          func_0x000107c5f9e8(puVar3,PTR___sSSN_11034da80,uVar26,PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(puVar3);
        }
        uVar20 = *(ulong *)(param_2 + 0x10);
        puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar20 != 0) {
          uVar30 = 0;
LAB_101baf268:
          uVar9 = uVar30;
          if (uVar30 <= uVar20) {
            uVar9 = uVar20;
          }
          puVar28 = (ulong *)(param_2 + 0x28 + uVar30 * 0x10);
          uVar30 = uVar30 + 1;
          do {
            if (uVar30 - uVar9 == 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101baf520);
              (*pcVar1)();
            }
            if (*(long *)(puVar21 + 0x10) != 0) {
              uVar11 = puVar28[-1];
              uVar19 = *puVar28;
              func_0x000107c61434(uVar19);
              func_0x000107c6157c(puVar21);
              uVar8 = uVar11;
              uVar17 = uVar19;
              func_0x000100029284();
              if ((uVar17 & 1) != 0) goto LAB_101baf2f4;
              func_0x000107c6142c(uVar19);
              func_0x000107c61574(puVar21);
            }
            uVar30 = uVar30 + 1;
            puVar28 = puVar28 + 2;
            if (uVar30 - uVar20 == 1) break;
          } while( true );
        }
LAB_101baf4e8:
        func_0x000107c6142c(puVar6);
        func_0x000107c61574(puVar21);
        **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar14;
        func_0x000107c61450();
      }
      func_0x000107c615e8(puVar7);
      return;
    }
    func_0x000107c615e8();
    param_1 = puVar7;
  }
  func_0x00010118a534();
  puVar6 = &UNK_1106c4d48;
  func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
  *param_1 = 0;
  uVar26 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar16 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar16 = puVar6;
  func_0x000107c61454(param_3,uVar26);
  return;
LAB_101baf2f4:
  uVar26 = *(undefined8 *)(*(long *)(puVar21 + 0x38) + uVar8 * 8);
  func_0x000107c615f0(uVar26);
  func_0x000107c61574(puVar21);
  if ((param_4 & 1) == 0) {
    func_0x000107c615f0(uVar26);
  }
  else {
    lVar22 = *(long *)(puVar6 + 0x10);
    func_0x000107c615f0(uVar26);
    if (lVar22 != 0) {
      func_0x000107c61434(puVar6);
      uVar9 = uVar11;
      uVar8 = uVar19;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        func_0x000107c6142c(puVar6);
        uStack_a4 = 2;
      }
      else {
        uVar23 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar9 * 8);
        func_0x000107c615f0(uVar23);
        func_0x000107c6142c(puVar6);
        uVar10 = uVar23;
        func_0x000107c42998();
        uStack_a4 = (undefined4)uVar10;
        func_0x000107c307b0();
        func_0x000107c615e8(uVar23);
      }
      goto LAB_101baf3ac;
    }
  }
  uStack_a4 = 2;
LAB_101baf3ac:
  iVar24 = (int)uVar26;
  func_0x000107c307a8();
  func_0x000103a76890(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar19);
  uVar18 = 1;
  if (iVar24 != 0) {
    uVar18 = 2;
  }
  func_0x000103a765a4(uVar11,uVar19,0,0xf000000000000000,uVar18,uStack_a4);
  func_0x000107c6142c(uVar19);
  func_0x000107c615ec(uVar26,2);
  puVar13 = puVar14;
  func_0x000107c61550();
  if (((((ulong)puVar13 & 1) == 0) || ((long)puVar14 < 0)) ||
     (puVar13 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar14) {
        puVar12 = puVar14;
      }
      func_0x000107c60480(puVar12);
    }
    puVar13 = (undefined *)0x0;
    func_0x000100fb5154(0,puVar12 + 1,1,puVar14);
  }
  uVar19 = (ulong)puVar13 & 0xffffffffffffff8;
  uVar9 = *(ulong *)(uVar19 + 0x10);
  puVar14 = puVar13;
  if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar9) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
    func_0x000100fb5154(puVar14,uVar9 + 1,1,puVar13);
    uVar19 = (ulong)puVar14 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar19 + 0x10) = uVar9 + 1;
  *(ulong *)(uVar19 + uVar9 * 8 + 0x20) = uVar11;
  if (uVar30 == uVar20) goto LAB_101baf4e8;
  goto LAB_101baf268;
}



/* Entry: 101baf5a0; end: 101baf5fb;  */

void FUN_101baf5a0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101baf5fc;
  *(undefined1 *)(plVar1 + 0xe) = 0;
  plVar1[0xb] = param_3;
  plVar1[0xc] = param_2;
  func_0x000107c614f0();
  plVar1[0xd] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baed50,0,0);
  return;
}



/* Entry: 101baf5fc; end: 101baf66f;  */

void FUN_101baf5fc(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101baf644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baf670,0,0);
  return;
}



/* Entry: 101baf670; end: 101baf70b;  */

void FUN_101baf670(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  FUN_101bb1708(uVar3);
  func_0x000107c6142c(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788();
  func_0x000107c61170(uVar3);
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000101baf708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101baf70c; end: 101baf857; -[_TtC24MemoriesDataServicesImpl24MemoriesCoreDataProvider fetchSnapsFuture:snapIds:] */

void FUN_101baf70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = param_3;
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  puVar4 = &UNK_10d91cd60;
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x00010007c020(param_3);
  puVar2 = &UNK_110450bb0;
  func_0x000107c613fc(&UNK_110450bb0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  uVar3 = uVar1;
  func_0x000104887c7c(uVar1,puVar4,uVar5,4,0xd00000000000001c,0x800000010f002010,&UNK_10d9db030,
                      puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010007d980(uVar1,puVar4,uVar5);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101baf858; end: 101baf89f;  */

void FUN_101baf858(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baf8a0,0,0);
  return;
}



/* Entry: 101baf8a0; end: 101baf94f;  */

/* WARNING: Removing unreachable block (ram,0x000101baf8c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101baf8a0(void)

{
  long unaff_x22;
  
  func_0x000107c5fd64();
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101baf950;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101baf9b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101baf950; end: 101baf9b7;  */

void FUN_101baf950(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101baf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101baf9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 101baf9b8; end: 101bafa8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101baf9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_110450a48;
  func_0x000107c613fc(&UNK_110450a48,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0;
  FUN_101bb12e4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x00010090569c(FUN_101bb06e4,puVar1,uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101bafa90; end: 101bafe87;  */

void FUN_101bafa90(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puStack_68;
  
  func_0x0001000d224c(&puStack_68);
  if (puStack_68 == (undefined1 *)0x0) {
    func_0x00010118a534();
    puVar10 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,param_1,0,0);
    *param_1 = 0;
    uVar8 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar12 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar12 = puVar10;
    func_0x000107c61454(param_2,uVar8);
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    puVar4 = puStack_68;
    func_0x000107c430e4();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (puVar4 == (undefined1 *)0x0) {
      **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61450(param_2);
    }
    else {
      puVar16 = puVar4;
      func_0x000107c42998();
      uVar3 = SUB84(puVar16,0);
      func_0x000107c307b0();
      puVar16 = puStack_68;
      func_0x000107c43100();
      func_0x000107c61180();
      if (puVar16 == (undefined1 *)0x0) {
        func_0x00010118a534();
        puVar10 = &UNK_1106c4d48;
        func_0x000107c613f8(&UNK_1106c4d48,puVar16,0,0);
        *puVar16 = 0;
        uVar8 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar12 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar12 = puVar10;
        func_0x000107c61454(param_2,uVar8);
      }
      else {
        puVar5 = (undefined1 *)0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        puVar6 = puVar16;
        func_0x000107c5fc54(puVar16,puVar5);
        func_0x000107c61170(puVar16);
        puVar16 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar15 = *(undefined1 **)(puVar16 + 0x10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar15 = puVar16;
          if ((undefined1 *)0x7fffffffffffffff < puVar6) {
            puVar15 = puVar6;
          }
          func_0x000107c60480();
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
        if (puVar15 != (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar6 & 0xc000000000000001) == 0) {
                if (*(undefined1 **)(puVar16 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bafe1c);
                  (*pcVar2)();
                }
                puVar17 = *(undefined1 **)(puVar6 + (long)puVar7 * 8 + 0x20);
                func_0x000107c615f0(puVar17);
                puVar11 = puVar5;
              }
              else {
                puVar17 = puVar7;
                puVar11 = puVar6;
                func_0x000100fb0ba0(puVar7,puVar6);
              }
              if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101bafe18);
                (*pcVar2)();
              }
              puVar18 = puVar7 + 1;
              puVar5 = puVar17;
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (puVar5 == (undefined1 *)0x0) break;
              puVar7 = puVar5;
              func_0x000107c5faec();
              func_0x000107c61170(puVar5);
              func_0x000107c61434(puVar11);
              puVar5 = puVar17;
              func_0x000107c307a8();
              uVar8 = 0;
              func_0x000103a76890(0);
              func_0x000107c610f8();
              uVar13 = 1;
              if ((int)puVar5 != 0) {
                uVar13 = 2;
              }
              puVar5 = puVar11;
              func_0x000103a765a4(puVar7,puVar11,0,0xf000000000000000,uVar13,uVar3,uVar8);
              func_0x000107c615e8(puVar17);
              func_0x000107c6142c(puVar11);
              puVar9 = puVar10;
              func_0x000107c61550();
              if (((((ulong)puVar9 & 1) == 0) || ((long)puVar10 < 0)) ||
                 (((ulong)puVar10 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar10 >> 0x3e == 0) {
                  puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar10) {
                    puVar9 = puVar10;
                  }
                  func_0x000107c60480();
                }
                puVar5 = puVar9 + 1;
                puVar9 = (undefined *)0x0;
                func_0x000100fb5154(0,puVar5,1,puVar10);
                puVar10 = puVar9;
              }
              uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar14 + 0x10);
              puVar17 = (undefined1 *)(uVar1 + 1);
              if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
                puVar5 = puVar17;
                func_0x000100fb5154(puVar10,puVar17,1);
                uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
              }
              *(undefined1 **)(uVar14 + 0x10) = puVar17;
              *(undefined1 **)(uVar14 + uVar1 * 8 + 0x20) = puVar7;
              puVar7 = puVar18;
              if (puVar18 == puVar15) goto LAB_101bafe3c;
            }
            func_0x000107c615e8(puVar17);
            puVar5 = puVar11;
            puVar7 = puVar7 + 1;
          } while (puVar18 != puVar15);
        }
LAB_101bafe3c:
        func_0x000107c6142c(puVar6);
        **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = puVar10;
        func_0x000107c61450();
      }
      func_0x000107c615e8(puStack_68);
      puStack_68 = puVar4;
    }
    func_0x000107c615e8(puStack_68);
  }
  return;
}



/* Entry: 101bafe88; end: 101baffdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101bafe88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e06f68);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e06f70);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_110450ac0;
  func_0x000107c613fc(&UNK_110450ac0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110450ae8;
  func_0x000107c613fc(&UNK_110450ae8,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uStack_50 = 0x101bb1080;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011ea2b4;
  puStack_58 = &UNK_110450b00;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c41654(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x0001000d224c(&puStack_70);
  puVar2 = puStack_70;
  puVar3 = puVar1;
  func_0x000107c5c328(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101baffdc; end: 101bb02c7;  */

undefined * FUN_101baffdc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_98);
    puVar1 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      puVar3 = &UNK_110450b38;
      func_0x000107c613fc(&UNK_110450b38,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar1;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x000107c61174(puVar2);
      puVar9 = puVar1;
      func_0x000107c615f0(puVar1);
      func_0x000107c4da40();
      func_0x000107c61180();
      func_0x0001000d224c(&puStack_98);
      puVar4 = puVar9;
      func_0x000107c4da88(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puStack_98);
      puVar9 = &UNK_110450b60;
      func_0x000107c613fc(&UNK_110450b60,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x101bb10a8;
      *(undefined **)(puVar9 + 0x18) = puVar3;
      pcStack_78 = FUN_101bb10b0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_101bb03b8;
      puStack_80 = &UNK_110450b78;
      ppuVar5 = &puStack_98;
      puStack_70 = puVar9;
      func_0x000107c60bc4(ppuVar5);
      puVar9 = puStack_70;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar9);
      puVar6 = puVar4;
      func_0x000107c3feb8(puVar4);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar4);
      puVar9 = puVar1;
      func_0x000107c43060();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
LAB_101bb0210:
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c453e4();
      }
      else {
        uVar7 = 0x112d511e8;
        func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
        puVar4 = puVar9;
        func_0x000107c5fc54(puVar9,uVar7);
        func_0x000107c61170(puVar9);
        puVar9 = puVar1;
        FUN_101bb1108(puVar1,puVar4,1);
        func_0x000107c6142c(puVar4);
        puVar4 = puVar9;
        FUN_101bb1708(puVar9);
        func_0x000107c6142c(puVar9);
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c610f8();
        puVar9 = puVar4;
        func_0x000107c5fc48(puVar4,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar4);
        func_0x000107c45788();
        func_0x000107c61170(puVar9);
        if (puVar8 == (undefined *)0x0) goto LAB_101bb0210;
      }
      puVar9 = puVar6;
      func_0x000107c5bc40(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      func_0x000107c615e8(puVar1);
      func_0x000107c61574(puVar3);
      goto LAB_101bb02a0;
    }
    func_0x000107c61170(puVar2);
  }
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c453e4();
  func_0x000107c4a8a4(puVar9);
  func_0x000107c61180();
LAB_101bb02a0:
  func_0x000107c61170(puVar2);
  return puVar9;
}



/* Entry: 101bb02c8; end: 101bb03b7;  */

undefined * FUN_101bb02c8(uint param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_2;
  func_0x000107c43060();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
    FUN_101bb1108(param_2,lVar3,param_1 & 1);
    func_0x000107c6142c(lVar3);
    lVar1 = param_2;
    FUN_101bb1708(param_2);
    func_0x000107c6142c(param_2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar1);
    func_0x000107c45788(puVar4);
    func_0x000107c61170(lVar3);
  }
  return puVar4;
}



/* Entry: 101bb03b8; end: 101bb04a7;  */

void FUN_101bb03b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101bb04a8; end: 101bb04db; -[_TtC24MemoriesDataServicesImpl24MemoriesCoreDataProvider observeMemoryPhotoSnaps] */

void FUN_101bb04a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101bafe88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101bb04dc; end: 101bb053b; -[_TtC24MemoriesDataServicesImpl24MemoriesCoreDataProvider init] */

void FUN_101bb04dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDataServicesImpl.MemoriesCoreDataProvider",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb0508);
  (*pcVar1)();
}



/* Entry: 101bb053c; end: 101bb0573; -[_TtC24MemoriesDataServicesImpl24MemoriesCoreDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101bb0558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb055c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb053c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e06f68));
  return;
}



/* Entry: 101bb0574; end: 101bb05db;  */

void FUN_101bb0574(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbc28);
  return;
}



/* Entry: 101bb05dc; end: 101bb063b;  */

void FUN_101bb05dc(long param_1,undefined1 param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bb1420;
  *(undefined1 *)(plVar1 + 0xe) = param_2;
  plVar1[0xb] = param_1;
  plVar1[0xc] = lVar2;
  func_0x000107c614f0();
  plVar1[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baed50,0,0);
  return;
}



/* Entry: 101bb063c; end: 101bb069b;  */

void FUN_101bb063c(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bb069c;
  plVar1[0xc] = param_2;
  plVar1[0xd] = lVar2;
  plVar1[0xb] = param_1;
  func_0x000107c614f0();
  plVar1[0xe] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101baf8a0,0,0);
  return;
}



/* Entry: 101bb069c; end: 101bb06e3;  */

void FUN_101bb069c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb06e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb06e4; end: 101bb06f3;  */

void FUN_101bb06e4(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puStack_68;
  
  puVar6 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&puStack_68);
  if (puStack_68 == (undefined1 *)0x0) {
    func_0x00010118a534();
    puVar12 = &UNK_1106c4d48;
    func_0x000107c613f8(&UNK_1106c4d48,puVar6,0,0);
    *puVar6 = 0;
    uVar10 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar14 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar14 = puVar12;
    func_0x000107c61454(lVar2,uVar10);
  }
  else {
    func_0x000107c5fadc(uVar10,uVar3);
    puVar6 = puStack_68;
    func_0x000107c430e4();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (puVar6 == (undefined1 *)0x0) {
      **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61450(lVar2);
    }
    else {
      puVar18 = puVar6;
      func_0x000107c42998();
      uVar5 = SUB84(puVar18,0);
      func_0x000107c307b0();
      puVar18 = puStack_68;
      func_0x000107c43100();
      func_0x000107c61180();
      if (puVar18 == (undefined1 *)0x0) {
        func_0x00010118a534();
        puVar12 = &UNK_1106c4d48;
        func_0x000107c613f8(&UNK_1106c4d48,puVar18,0,0);
        *puVar18 = 0;
        uVar10 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar14 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8();
        *puVar14 = puVar12;
        func_0x000107c61454(lVar2,uVar10);
      }
      else {
        puVar7 = (undefined1 *)0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        puVar8 = puVar18;
        func_0x000107c5fc54(puVar18,puVar7);
        func_0x000107c61170(puVar18);
        puVar18 = (undefined1 *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar17 = *(undefined1 **)(puVar18 + 0x10);
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar17 = puVar18;
          if ((undefined1 *)0x7fffffffffffffff < puVar8) {
            puVar17 = puVar8;
          }
          func_0x000107c60480();
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
        if (puVar17 != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar8 & 0xc000000000000001) == 0) {
                if (*(undefined1 **)(puVar18 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101bafe1c);
                  (*pcVar4)();
                }
                puVar19 = *(undefined1 **)(puVar8 + (long)puVar9 * 8 + 0x20);
                func_0x000107c615f0(puVar19);
                puVar13 = puVar7;
              }
              else {
                puVar19 = puVar9;
                puVar13 = puVar8;
                func_0x000100fb0ba0(puVar9,puVar8);
              }
              if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101bafe18);
                (*pcVar4)();
              }
              puVar20 = puVar9 + 1;
              puVar7 = puVar19;
              func_0x000107c5b2d0();
              func_0x000107c61180();
              if (puVar7 == (undefined1 *)0x0) break;
              puVar9 = puVar7;
              func_0x000107c5faec();
              func_0x000107c61170(puVar7);
              func_0x000107c61434(puVar13);
              puVar7 = puVar19;
              func_0x000107c307a8();
              uVar10 = 0;
              func_0x000103a76890(0);
              func_0x000107c610f8();
              uVar15 = 1;
              if ((int)puVar7 != 0) {
                uVar15 = 2;
              }
              puVar7 = puVar13;
              func_0x000103a765a4(puVar9,puVar13,0,0xf000000000000000,uVar15,uVar5,uVar10);
              func_0x000107c615e8(puVar19);
              func_0x000107c6142c(puVar13);
              puVar11 = puVar12;
              func_0x000107c61550();
              if (((((ulong)puVar11 & 1) == 0) || ((long)puVar12 < 0)) ||
                 (((ulong)puVar12 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar12 >> 0x3e == 0) {
                  puVar11 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar11 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar12) {
                    puVar11 = puVar12;
                  }
                  func_0x000107c60480();
                }
                puVar7 = puVar11 + 1;
                puVar11 = (undefined *)0x0;
                func_0x000100fb5154(0,puVar7,1,puVar12);
                puVar12 = puVar11;
              }
              uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar16 + 0x10);
              puVar19 = (undefined1 *)(uVar1 + 1);
              if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
                puVar7 = puVar19;
                func_0x000100fb5154(puVar12,puVar19,1);
                uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
              }
              *(undefined1 **)(uVar16 + 0x10) = puVar19;
              *(undefined1 **)(uVar16 + uVar1 * 8 + 0x20) = puVar9;
              puVar9 = puVar20;
              if (puVar20 == puVar17) goto LAB_101bafe3c;
            }
            func_0x000107c615e8(puVar19);
            puVar7 = puVar13;
            puVar9 = puVar9 + 1;
          } while (puVar20 != puVar17);
        }
LAB_101bafe3c:
        func_0x000107c6142c(puVar8);
        **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar12;
        func_0x000107c61450();
      }
      func_0x000107c615e8(puStack_68);
      puStack_68 = puVar6;
    }
    func_0x000107c615e8(puStack_68);
  }
  return;
}



/* Entry: 101bb06f4; end: 101bb08b7;  */

ulong FUN_101bb06f4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb07d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb07dc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a8bb0;
    func_0x000107c61168(PTR_PTR_1126a8bb0);
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
    puVar4 = PTR_PTR_1126a8bb0;
    func_0x000107c61168(PTR_PTR_1126a8bb0);
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
  FUN_101bb12e4(0,0x112e06fa8,&PTR_PTR_1126a8bb0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb08b8);
  (*pcVar2)();
}



/* Entry: 101bb08b8; end: 101bb0a27;  */

void FUN_101bb08b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112e06fa0,&UNK_10d9db0e0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101bb0994;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_101bb0994:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101bb0a28);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101bb0a00;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101bb0a00:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}


