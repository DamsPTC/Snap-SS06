/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dba3a0; end: 101dba3e7;  */

void FUN_101dba3a0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba3e8,uVar1,0);
  return;
}



/* Entry: 101dba3e8; end: 101dba40b;  */

void FUN_101dba3e8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba40c,0,0);
  return;
}



/* Entry: 101dba40c; end: 101dba69b;  */

void FUN_101dba40c(double param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x22;
  double dVar8;
  float fVar9;
  float fVar10;
  
  uVar7 = *(ulong *)(unaff_x22 + 0xa0);
  if (*(long *)(unaff_x22 + 0xc0) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    func_0x000107c61434(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101dba4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c45af0();
  *(undefined **)(unaff_x22 + 0xd8) = puVar1;
  uVar5 = *(ulong *)(unaff_x22 + 0xa0);
  if (uVar7 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar7 = uVar5;
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0xe0) = uVar7;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x000101dbaf50(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101dba69c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar5 = 0;
    uVar6 = *(ulong *)(unaff_x22 + 0xa0);
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(uVar6 + 0x20 + uVar5 * 8);
        func_0x000107c61174(uVar2);
        dVar8 = param_1;
      }
      else {
        uVar2 = uVar5;
        func_0x000101dbad58(uVar5,*(undefined8 *)(unaff_x22 + 0xa0),&PTR_PTR_1126a9548,0x112e2c678);
        dVar8 = param_1;
      }
      func_0x000107c5e9e0();
      param_1 = (double)(ulong)(uint)(float)dVar8;
      func_0x000107c5e9f0(uVar2);
      fVar9 = (float)dVar8;
      func_0x000107c5e304(uVar2);
      fVar10 = (float)dVar8;
      func_0x000107c44d98(uVar2);
      puVar3 = PTR_PTR_1126a9568;
      func_0x000107c610f8();
      func_0x000107c495fc(param_1,fVar9,fVar10,(float)dVar8);
      func_0x000107c61170(uVar2);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x000101dbaf50(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar4 + uVar2 * 8 + 0x20) = puVar3;
    } while (uVar7 != uVar5);
  }
  *(undefined **)(unaff_x22 + 0xe8) = puVar4;
  if ((ulong)puVar4 >> 0x3e != 0) {
    puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar3 = puVar4;
    }
    func_0x000107c60480(puVar3);
  }
  func_0x000107c61174();
  puVar4 = puVar1;
  FUN_101dbb0d8();
  *(undefined **)(unaff_x22 + 0xf0) = puVar4;
  func_0x000107c61170(puVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dba69c;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_101dbaad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dba69c; end: 101dba6db;  */

void FUN_101dba69c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dba6dc,0,0);
  return;
}



/* Entry: 101dba6dc; end: 101dba8b3;  */

void FUN_101dba6dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  ulong auStack_60 [2];
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c6142c(uVar5);
  lVar7 = *(long *)(unaff_x22 + 0x90);
  lVar4 = lVar7;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c61170(lVar7);
LAB_101dba864:
    func_0x000107c6142c(uVar5);
  }
  else {
    auStack_60[0] = 0;
    uVar5 = 0;
    FUN_101dbb5e4(0,0x112e2c8b8,&PTR_PTR_1126bcad0);
    func_0x000107c5fc50(lVar4,auStack_60,uVar5);
    uVar3 = auStack_60[0];
    if (auStack_60[0] != 0) {
      if (auStack_60[0] >> 0x3e == 0) {
        uVar6 = *(ulong *)((auStack_60[0] & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = auStack_60[0];
        if (-1 < (long)auStack_60[0]) {
          uVar6 = auStack_60[0] & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
      if (uVar6 == *(ulong *)(unaff_x22 + 0xe0)) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
        *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
        uVar8 = uVar9;
        func_0x000107c61434(uVar9);
        FUN_101dbb184();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar1);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar3);
        func_0x000107c615e8(uVar2);
        func_0x000107c6142c(uVar5);
        goto LAB_101dba87c;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(lVar4);
      goto LAB_101dba864;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c615e8(uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61434(uVar8);
LAB_101dba87c:
                    /* WARNING: Could not recover jumptable at 0x000101dba8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 101dba8b4; end: 101dbaa8f;  */

undefined *
FUN_101dba8b4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c5e9e0();
  uVar4 = param_1;
  func_0x000107c5e9f0(param_2);
  uVar7 = uVar4;
  func_0x000107c5e304(param_2);
  uVar8 = uVar7;
  func_0x000107c44d98(param_2);
  puVar2 = PTR_PTR_1126a9548;
  func_0x000107c610f8(PTR_PTR_1126a9548);
  func_0x000107c495fc(param_1,uVar4,uVar7,uVar8);
  puVar3 = param_3;
  func_0x000107c424b4();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101dbb5e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  func_0x000107c5fc54(puVar3,uVar4);
  func_0x000107c61170(puVar3);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar6 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar3 = puVar5;
    }
    func_0x000107c60480();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c6142c(puVar5);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar6 = puVar3;
      FUN_101d18154();
      FUN_101d18318(puVar6 + 0x20,puVar3);
      func_0x000107c6142c();
      if (puVar5 != puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbaa7c);
        (*pcVar1)();
      }
    }
  }
  puVar3 = puVar6;
  func_0x000107c5fc48(puVar6,uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c5445c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c54460(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c40088(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46978(param_1);
  func_0x000107c53728(puVar2);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101dbaa90; end: 101dbaad3;  */

void FUN_101dbaa90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dbaad4; end: 101dbac93;  */

void FUN_101dbaad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  FUN_101dbb5e4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fc48(param_3,uVar2);
  uVar2 = 0;
  FUN_101dbb5e4(0,0x112e2c8c8,&PTR_PTR_1126a9568);
  func_0x000107c5fc48(param_4,uVar2);
  FUN_101dbb5e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar3 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  puVar4 = &UNK_1104848e0;
  func_0x000107c613fc(&UNK_1104848e0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  pcStack_60 = FUN_101dbb598;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101dbac94;
  puStack_68 = &UNK_1104848f8;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_58);
  func_0x000107c42d04(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101dbac94; end: 101dbaf13;  */

void FUN_101dbac94(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101dbaf14; end: 101dbaf8b;  */

void FUN_101dbaf14(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101dbaf8c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101dbaf8c; end: 101dbb0d7;  */

undefined *
FUN_101dbaf8c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb0d8);
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
    func_0x000101dbace0(param_5,param_6,param_7,param_8);
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
    FUN_101dbb5e4(0,param_5,param_6);
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



/* Entry: 101dbb0d8; end: 101dbb177;  */

undefined * FUN_101dbb0d8(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbb178);
    (*pcVar1)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_101dbb5e4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar3 = param_2;
    func_0x000107c5fc70(param_2,uVar2);
    uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
    *(undefined **)(uVar4 + 0x10) = param_2;
    *(undefined8 *)(uVar4 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != (undefined *)0x0) {
      puVar5 = (undefined8 *)(uVar4 + 0x28);
      do {
        *puVar5 = param_1;
        func_0x000107c61174(param_1);
        param_2 = param_2 + -1;
        puVar5 = puVar5 + 1;
      } while (param_2 != (undefined *)0x0);
    }
    func_0x000107c61174(param_1);
  }
  return puVar3;
}



/* Entry: 101dbb178; end: 101dbb183;  */

undefined * FUN_101dbb178(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5e9e0(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = param_1;
  func_0x000107c5e9f0(param_2);
  uVar9 = uVar4;
  func_0x000107c5e304(param_2);
  uVar10 = uVar9;
  func_0x000107c44d98(param_2);
  puVar2 = PTR_PTR_1126a9548;
  func_0x000107c610f8(PTR_PTR_1126a9548);
  func_0x000107c495fc(param_1,uVar4,uVar9,uVar10);
  puVar3 = param_3;
  func_0x000107c424b4();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101dbb5e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  func_0x000107c5fc54(puVar3,uVar4);
  func_0x000107c61170(puVar3);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar7 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  }
  else {
    puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar3 = puVar5;
    }
    func_0x000107c60480();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c6142c(puVar5);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar7 = puVar3;
      FUN_101d18154();
      FUN_101d18318(puVar7 + 0x20,puVar3);
      func_0x000107c6142c();
      if (puVar5 != puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbaa7c);
        (*pcVar1)();
      }
    }
  }
  puVar3 = puVar7;
  func_0x000107c5fc48(puVar7,uVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c5445c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c54460(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c40088(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46978(param_1);
  func_0x000107c53728(puVar2);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101dbb184; end: 101dbb597;  */

undefined * FUN_101dbb184(ulong param_1,ulong param_2,code *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_80;
  ulong uStack_70;
  
  uVar6 = param_1 >> 0x3e;
  if (uVar6 == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  uVar7 = param_2 >> 0x3e;
  if (uVar7 == 0) {
    uVar3 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar3 = param_2;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)uVar8 <= (long)uVar3) {
    uVar3 = uVar8;
  }
  FUN_101dbaf14(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb58c);
    (*pcVar2)();
  }
  if (uVar3 != 0) {
    uVar11 = param_1 & 0xffffffffffffff8;
    uVar8 = uVar11;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    uVar10 = param_2 & 0xffffffffffffff8;
    uVar12 = uVar10;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar12 = param_2;
    }
    lVar13 = 4;
    do {
      if (uVar6 == 0) {
        uVar4 = *(ulong *)(uVar11 + 0x10);
      }
      else {
        uVar4 = uVar8;
        func_0x000107c60480();
      }
      uVar9 = lVar13 - 4;
      if (uVar9 == uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb548);
        (*pcVar2)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb55c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + lVar13 * 8);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar9;
        func_0x000101dbad58(uVar9,param_1,&PTR_PTR_1126a9548,0x112e2c678);
      }
      if (uVar7 == 0) {
        uVar5 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar5 = uVar12;
        func_0x000107c60480();
      }
      if (uVar9 == uVar5) {
        func_0x000107c61170(uVar4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb598);
        (*pcVar2)();
      }
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb54c);
          (*pcVar2)();
        }
        uVar9 = *(ulong *)(param_2 + lVar13 * 8);
        func_0x000107c61174(uVar9);
      }
      else {
        func_0x000101dbad58(uVar9,param_2,&PTR_PTR_1126bcad0,0x112e2c8b8);
      }
      uVar5 = uVar4;
      (*param_3)(uVar4,uVar9);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
        FUN_101dbaf14(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar1 + uVar4 * 8 + 0x20) = uVar5;
      lVar13 = lVar13 + 1;
    } while (lVar13 - uVar3 != 4);
  }
  uStack_70 = param_1 & 0xc000000000000001;
  uStack_80 = param_2 & 0xc000000000000001;
  uVar12 = param_1 & 0xffffffffffffff8;
  uVar11 = param_2 & 0xffffffffffffff8;
  uVar8 = uVar12;
  if ((param_1 & 0x8000000000000000) != 0) {
    uVar8 = param_1;
  }
  uVar10 = uVar11;
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar10 = param_2;
  }
  lVar13 = uVar3 + 4;
  if (uVar6 != 0) goto LAB_101dbb3d8;
  do {
    uVar3 = *(ulong *)(uVar12 + 0x10);
    while( true ) {
      uVar4 = lVar13 - 4;
      if (uVar4 == uVar3) {
        return puVar1;
      }
      if (uStack_70 == 0) {
        if (*(ulong *)(uVar12 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb554);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + lVar13 * 8);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar4;
        func_0x000101dbad58(uVar4,param_1,&PTR_PTR_1126a9548,0x112e2c678);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb550);
        (*pcVar2)();
      }
      if (uVar7 == 0) {
        uVar9 = *(ulong *)(uVar11 + 0x10);
      }
      else {
        uVar9 = uVar10;
        func_0x000107c60480();
      }
      if (uVar4 == uVar9) {
        func_0x000107c61170(uVar3);
        return puVar1;
      }
      if (uStack_80 == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbb558);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_2 + lVar13 * 8);
        func_0x000107c61174(uVar4);
      }
      else {
        func_0x000101dbad58(uVar4,param_2,&PTR_PTR_1126bcad0,0x112e2c8b8);
      }
      uVar9 = uVar3;
      (*param_3)(uVar3,uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_101dbaf14(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar1 + uVar3 * 8 + 0x20) = uVar9;
      lVar13 = lVar13 + 1;
      if (uVar6 == 0) break;
LAB_101dbb3d8:
      uVar3 = uVar8;
      func_0x000107c60480();
    }
  } while( true );
}



/* Entry: 101dbb598; end: 101dbb5c7;  */

void FUN_101dbb598(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101dbb5c8; end: 101dbb5e3;  */

void FUN_101dbb5c8(long param_1,long param_2)

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



/* Entry: 101dbb5e4; end: 101dbb623;  */

void FUN_101dbb5e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dbb624; end: 101dbb6ff;  */

void FUN_101dbb624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  func_0x000107c61474();
  puVar1 = &UNK_1104849b8;
  func_0x000107c613fc(&UNK_1104849b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_1);
  uVar3 = 0x112e2c8b0;
  func_0x0001000285a8(0x112e2c8b0,&UNK_10da15c50);
  uVar2 = 0x81;
  func_0x0001001ca524(0x81,0,0x48,3,0,0,&UNK_10da15cf0,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  unaff_x20[0xe] = uVar2;
  return;
}



/* Entry: 101dbb700; end: 101dbb71b;  */

void FUN_101dbb700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbb71c,0,0);
  return;
}



/* Entry: 101dbb71c; end: 101dbb7f3;  */

void FUN_101dbb71c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x38) = lVar5;
  lVar1 = lVar5;
  func_0x000107c42d1c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c61170(lVar1);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  *(long *)(unaff_x22 + 0x48) = param_2;
  func_0x000107c42d18();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dbb7f4;
  lVar5 = *(long *)(unaff_x22 + 0x30);
  plVar3[0xe] = lVar1;
  plVar3[0xf] = lVar4;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = param_2;
  plVar3[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbbdd8,0,0);
  return;
}



/* Entry: 101dbb7f4; end: 101dbb8ab;  */

void FUN_101dbb7f4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dbb84c,0,0);
  return;
}



/* Entry: 101dbb8ac; end: 101dbba3b;  */

void FUN_101dbb8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x0001000295c4(0);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_1104849e0;
  func_0x000107c613fc(&UNK_1104849e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_70 = FUN_101dbbf30;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101dbbaa4;
  puStack_78 = &UNK_1104849f8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_68);
  func_0x000107c4d0a0(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 101dbba3c; end: 101dbbaa3;  */

void FUN_101dbba3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c3dd58();
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c42d14();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  **(long **)(*(long *)(param_3 + 0x40) + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 101dbbaa4; end: 101dbbb1b;  */

/* WARNING: Possible PIC construction at 0x000101dbbb00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbbb04) */

void FUN_101dbbaa4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101dbbb1c; end: 101dbbb5f;  */

void FUN_101dbbb1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101dbbb60; end: 101dbbbc3;  */

void FUN_101dbbb60(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 101dbbbc4; end: 101dbbc27;  */

undefined8 * FUN_101dbbbc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101dbbc28; end: 101dbbc6b;  */

undefined8 * FUN_101dbbc28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101dbbc6c; end: 101dbbd0f;  */

int FUN_101dbbc6c(ulong *param_1,int param_2)

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



/* Entry: 101dbbd10; end: 101dbbd7b;  */

void FUN_101dbbd10(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dbbd7c;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
  plVar3[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbb71c,0,0,uVar4);
  return;
}



/* Entry: 101dbbd7c; end: 101dbbdb7;  */

void FUN_101dbbd7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dbbdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dbbdb8; end: 101dbbdd7;  */

void FUN_101dbbdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbbdd8,0,0);
  return;
}



/* Entry: 101dbbdd8; end: 101dbbebb;  */

void FUN_101dbbdd8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x60) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x68) & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0x68) >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x58);
    func_0x000107c4d090();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x80) = lVar3;
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101dbbebc;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_101dbb8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101dbbeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101dbbebc; end: 101dbbf2f;  */

void FUN_101dbbebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dbbefc,0,0);
  return;
}



/* Entry: 101dbbf30; end: 101dbbf5b;  */

void FUN_101dbbf30(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c3dd58();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c42d14();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101dbbf5c; end: 101dbc0df;  */

void FUN_101dbbf5c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar6 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c4ca1c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    (*param_3)(0);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f72738;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72738);
    lVar1 = lVar2;
    func_0x000107c507c4(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(ppuVar3);
    puVar4 = &UNK_110484a58;
    func_0x000107c613fc(&UNK_110484a58,0x28,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    pcStack_60 = FUN_101dbc634;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101dbc3f0;
    puStack_68 = &UNK_110484a70;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar4);
    func_0x000107c5c320(lVar1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101dbc0e0; end: 101dbc2bb;  */

void FUN_101dbc0e0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  puVar5 = &UNK_110484aa8;
  func_0x000107c613fc(&UNK_110484aa8,0x20,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_68;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  puVar6 = &UNK_110484ad0;
  func_0x000107c613fc(&UNK_110484ad0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x101dbc65c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_101dbc664;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = (undefined *)0x101dbcb60;
  puStack_80 = &UNK_110484ae8;
  ppuVar7 = &puStack_98;
  puStack_70 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_70;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  pcStack_78 = FUN_101dbc3ec;
  puStack_70 = (undefined *)0x0;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100e27b38;
  puStack_80 = &UNK_110484b10;
  ppuVar8 = &puStack_98;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_70);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  uVar3 = uStack_68;
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  (*param_2)(uVar3);
  func_0x000107c61170(uVar9);
  uVar3 = uStack_68;
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar3);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x88,0x22,0x21,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbc2b8);
    (*pcVar4)();
  }
  uVar10 = 0;
  func_0x000107c61544(0,"",0x88,0x2a,0x19,1);
  if ((uVar10 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101dbc2bc);
  (*pcVar4)();
}



/* Entry: 101dbc2bc; end: 101dbc3eb;  */

/* WARNING: Possible PIC construction at 0x000101dbc300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbc350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbc3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbc354) */
/* WARNING: Removing unreachable block (ram,0x000101dbc304) */
/* WARNING: Removing unreachable block (ram,0x000101dbc370) */
/* WARNING: Removing unreachable block (ram,0x000101dbc31c) */
/* WARNING: Removing unreachable block (ram,0x000101dbc3b4) */
/* WARNING: Removing unreachable block (ram,0x000101dbc3c0) */

void FUN_101dbc2bc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c41214();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5ee30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 101dbc3ec; end: 101dbc3ef;  */

void FUN_101dbc3ec(void)

{
  return;
}



/* Entry: 101dbc3f0; end: 101dbc43b;  */

void FUN_101dbc3f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101dbc43c; end: 101dbc5ef;  */

void FUN_101dbc43c(undefined1 *param_1,char *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar5 = (int)((ulong)param_4 >> 0x20);
  iVar4 = (int)param_4;
  cVar1 = *param_2;
  if (cVar1 == -0x77) {
    if (((param_2[1] == 'P') && (param_2[2] == 'N')) && (param_2[3] == 'G')) goto LAB_101dbc5cc;
  }
  else if (((cVar1 == -1) && (param_2[1] == -0x28)) && (param_2[2] == -1)) goto LAB_101dbc5cc;
  uVar2 = (uint)(param_5 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar7 = param_5 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar5,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc5e8);
        (*pcVar3)();
      }
      uVar7 = (ulong)(iVar5 - iVar4);
    }
  }
  else {
    if (uVar6 != 2) goto LAB_101dbc5d8;
    uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc5e4);
      (*pcVar3)();
    }
  }
  if (((cVar1 == 'R') && (0xb < (long)uVar7)) &&
     ((param_2[1] == 'I' && ((param_2[2] == 'F' && (param_2[3] == 'F')))))) {
    if (((param_2[8] == 'W') && (param_2[9] == 'E')) && (param_2[10] == 'B')) {
      *param_1 = param_2[0xb] == 'P';
      return;
    }
  }
  else {
    if (uVar6 == 2) {
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc5f0);
        (*pcVar3)();
      }
      if (*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) < 8) goto LAB_101dbc5d8;
    }
    else if (uVar6 == 1) {
      if (SBORROW4(iVar5,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc5ec);
        (*pcVar3)();
      }
      if (iVar5 - iVar4 < 8) goto LAB_101dbc5d8;
    }
    else if ((param_5 >> 0x30 & 0xff) < 8) goto LAB_101dbc5d8;
    if ((((param_2[4] == 'f') && (param_2[5] == 't')) && (param_2[6] == 'y')) && (param_2[7] == 'p')
       ) {
LAB_101dbc5cc:
      *param_1 = 1;
      return;
    }
  }
LAB_101dbc5d8:
  *param_1 = 0;
  return;
}



/* Entry: 101dbc5f0; end: 101dbc633;  */

void FUN_101dbc5f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dbc634; end: 101dbc663;  */

void FUN_101dbc634(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = 0;
  puVar4 = &UNK_110484aa8;
  func_0x000107c613fc(&UNK_110484aa8,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_68;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  puVar5 = &UNK_110484ad0;
  func_0x000107c613fc(&UNK_110484ad0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x101dbc65c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_78 = FUN_101dbc664;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = (undefined *)0x101dbcb60;
  puStack_80 = &UNK_110484ae8;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_70;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_78 = FUN_101dbc3ec;
  puStack_70 = (undefined *)0x0;
  puStack_98 = puVar1;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_100e27b38;
  puStack_80 = &UNK_110484b10;
  ppuVar7 = &puStack_98;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_70);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar10 = uStack_68;
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  (*pcVar3)(uVar10);
  func_0x000107c61170(uVar8);
  uVar10 = uStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(uVar10);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x88,0x22,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc2b8);
    (*pcVar3)();
  }
  uVar9 = 0;
  func_0x000107c61544(0,"",0x88,0x2a,0x19,1);
  if ((uVar9 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc2bc);
  (*pcVar3)();
}



/* Entry: 101dbc664; end: 101dbc683;  */

void FUN_101dbc664(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dbc684; end: 101dbcb4f;  */

void FUN_101dbc684(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  byte bStack_6f;
  byte abStack_6e [4];
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = (uint)(param_2 >> 0x20);
  uVar10 = uVar11 >> 0x1e;
  uVar4 = (uint)param_1;
  iVar5 = (int)(param_1 >> 0x20);
  if (uVar11 >> 0x1e < 2) {
    if (uVar10 != 0) {
      if (SBORROW4(iVar5,uVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcae8);
        (*pcVar3)();
      }
      if (3 < (int)(iVar5 - uVar4)) goto LAB_101dbc70c;
      goto LAB_101dbca90;
    }
    if ((param_2 >> 0x30 & 0xff) < 4) goto LAB_101dbca90;
LAB_101dbc70c:
    uVar11 = uVar11 >> 0x1e;
    if (uVar11 == 2) {
      uVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc740);
        (*pcVar3)();
      }
    }
    else if (uVar11 == 1) {
      if (SBORROW4(iVar5,uVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcaec);
        (*pcVar3)();
      }
      uVar6 = (ulong)(int)(iVar5 - uVar4);
    }
    else {
      uVar6 = param_2 >> 0x30 & 0xff;
    }
    lVar12 = (long)param_1 >> 0x20;
    uVar7 = param_1;
    uVar2 = uVar4;
    if ((long)uVar6 < 4) {
      if (uVar11 != 0) {
        uVar6 = param_1;
        if (uVar11 == 2) goto LAB_101dbc838;
LAB_101dbc944:
        lVar9 = (long)(int)uVar4;
        if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcaf0);
          (*pcVar3)();
        }
        func_0x000107c5ec30();
        if (uVar6 == 0) {
          func_0x000107c5ec38();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb34);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar9,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcaf8);
          (*pcVar3)();
        }
        puVar8 = (uint *)((lVar9 - uVar7) + uVar6);
        func_0x000107c5ec38();
        if (puVar8 == (uint *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb38);
          (*pcVar3)();
        }
LAB_101dbc970:
        uVar7 = (ulong)*puVar8;
        uVar2 = *puVar8;
      }
joined_r0x000101dbc900:
      if (uVar2 != 0) {
        if (uVar11 == 2) {
          uVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbc9b0);
            (*pcVar3)();
          }
        }
        else if (uVar11 == 1) {
          if (SBORROW4(iVar5,uVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb04);
            (*pcVar3)();
          }
          uVar6 = (ulong)(int)(iVar5 - uVar4);
        }
        else {
          uVar6 = param_2 >> 0x30 & 0xff;
        }
        lVar9 = (uVar7 & 0xffffffff) * 4 + 4;
        if (lVar9 <= (long)uVar6) {
          if (uVar10 == 0) {
            uVar7 = param_1 >> 0x20;
            uVar6 = param_2 >> 0x30 & 0xff;
          }
          else if (uVar10 == 2) {
            lVar12 = *(long *)(param_1 + 0x10);
            uVar6 = param_1;
            func_0x000107c5ec30();
            if (uVar6 == 0) {
              func_0x000107c5ec38();
LAB_101dbcb40:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb44);
              (*pcVar3)();
            }
            uVar7 = uVar6;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar12,uVar7)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb14);
              (*pcVar3)();
            }
            lVar12 = (lVar12 - uVar7) + uVar6;
            func_0x000107c5ec38();
            if (lVar12 == 0) goto LAB_101dbcb40;
            uVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
            if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb1c);
              (*pcVar3)();
            }
            uVar7 = (ulong)*(uint *)(lVar12 + 4);
          }
          else {
            lVar13 = (long)(int)uVar4;
            if (lVar12 < lVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb10);
              (*pcVar3)();
            }
            uVar6 = param_1;
            func_0x000107c5ec30();
            if (uVar6 == 0) {
              func_0x000107c5ec38();
LAB_101dbcb4c:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb50);
              (*pcVar3)();
            }
            uVar7 = uVar6;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar13,uVar7)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb18);
              (*pcVar3)();
            }
            lVar12 = (lVar13 - uVar7) + uVar6;
            func_0x000107c5ec38();
            if (lVar12 == 0) goto LAB_101dbcb4c;
            if (SBORROW4(iVar5,uVar4)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb20);
              (*pcVar3)();
            }
            uVar7 = (ulong)*(uint *)(lVar12 + 4);
            uVar6 = (ulong)(int)(iVar5 - uVar4);
          }
          if ((long)(uVar7 + lVar9) <= (long)uVar6) {
            func_0x000107c5ee48(lVar9,uVar7 + lVar9,param_1,param_2);
          }
        }
      }
      goto LAB_101dbca90;
    }
    if (uVar11 != 2) {
      if (uVar11 != 1) {
        abStack_6e[0] = (byte)param_1;
        abStack_6e[1] = (byte)(param_1 >> 8);
        abStack_6e[2] = (byte)(param_1 >> 0x10);
        abStack_6e[3] = (byte)(param_1 >> 0x18);
        uStack_6a = (undefined1)(param_1 >> 0x20);
        uStack_69 = (undefined1)(param_1 >> 0x28);
        uStack_68 = (undefined1)(param_1 >> 0x30);
        uStack_67 = (undefined1)(param_1 >> 0x38);
        uStack_66 = (undefined1)param_2;
        uStack_65 = (undefined1)(param_2 >> 8);
        uStack_64 = (undefined1)(param_2 >> 0x10);
        uStack_63 = (undefined1)(param_2 >> 0x18);
        uStack_62 = (undefined1)(param_2 >> 0x20);
        uStack_61 = (undefined1)(param_2 >> 0x28);
        FUN_101dbc43c(&bStack_6f,abStack_6e,abStack_6e + (param_2 >> 0x30 & 0xff),param_1,param_2);
        if ((bStack_6f & 1) == 0) goto joined_r0x000101dbc900;
        goto LAB_101dbc930;
      }
      lVar9 = (long)(int)uVar4;
      if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcafc);
        (*pcVar3)();
      }
      uVar6 = param_1;
      func_0x000107c5ec30();
      if (uVar6 == 0) {
        func_0x000107c5ec38();
        uVar6 = 0;
LAB_101dbc910:
        lVar9 = 0;
      }
      else {
        uVar7 = uVar6;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar9,uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb0c);
          (*pcVar3)();
        }
        uVar6 = (lVar9 - uVar7) + uVar6;
        func_0x000107c5ec38();
        if (uVar6 == 0) goto LAB_101dbc910;
        if (lVar12 - lVar9 <= (long)uVar7) {
          uVar7 = lVar12 - lVar9;
        }
        lVar9 = uVar7 + uVar6;
      }
      FUN_101dbc43c(abStack_6e,uVar6,lVar9,param_1,param_2);
      if ((abStack_6e[0] & 1) == 0) goto LAB_101dbc944;
LAB_101dbc930:
      func_0x00010006c00c(param_1,param_2);
      goto LAB_101dbca90;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    lVar13 = *(long *)(param_1 + 0x18);
    uVar6 = param_1;
    func_0x000107c5ec30();
    uVar7 = uVar6;
    if (uVar6 != 0) {
      func_0x000107c5ec3c();
      if (SBORROW8(lVar9,uVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb08);
        (*pcVar3)();
      }
      uVar6 = (lVar9 - uVar7) + uVar6;
    }
    uVar1 = lVar13 - lVar9;
    if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb00);
      (*pcVar3)();
    }
    func_0x000107c5ec38();
    if ((long)uVar1 <= (long)uVar7) {
      uVar7 = uVar1;
    }
    lVar9 = 0;
    if (uVar6 != 0) {
      lVar9 = uVar7 + uVar6;
    }
    FUN_101dbc43c(abStack_6e,uVar6,lVar9,param_1,param_2);
    if (abStack_6e[0] == 1) goto LAB_101dbc930;
LAB_101dbc838:
    lVar9 = *(long *)(param_1 + 0x10);
    uVar6 = param_1;
    func_0x000107c5ec30();
    if (uVar6 != 0) {
      uVar7 = uVar6;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar9,uVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcaf4);
        (*pcVar3)();
      }
      puVar8 = (uint *)((lVar9 - uVar7) + uVar6);
      func_0x000107c5ec38();
      if (puVar8 == (uint *)0x0) goto LAB_101dbcb28;
      goto LAB_101dbc970;
    }
  }
  else {
    if (uVar10 == 2) {
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcae4);
        (*pcVar3)();
      }
      if (3 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_101dbc70c;
    }
LAB_101dbca90:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    func_0x000107c60e78();
  }
  func_0x000107c5ec38();
LAB_101dbcb28:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbcb2c);
  (*pcVar3)();
}



/* Entry: 101dbcb50; end: 101dbcb63;  */

void FUN_101dbcb50(long param_1,long param_2)

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



/* Entry: 101dbcb64; end: 101dbcd53;  */

undefined1  [16] FUN_101dbcb64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auVar9 [16];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c41258();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = uVar3;
    func_0x000107c431bc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar2 == 0) {
      func_0x000107c615e8(uVar3);
    }
    else {
      uVar4 = uVar2;
      func_0x000107c43c4c(uVar2);
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c431c8();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = 0;
      FUN_101dbd5fc(0,0x112e28b08,&PTR_PTR_1126bc7d8);
      uVar5 = uVar6;
      func_0x000107c5fc54(uVar6,uVar4);
      func_0x000107c61170(uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) {
        func_0x000107c615e8(uVar3);
        func_0x000107c61170(uVar2);
        func_0x000107c6142c(uVar5);
      }
      else {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbcd54);
            (*pcVar1)();
          }
          lVar7 = *(long *)(uVar5 + 0x20);
          func_0x000107c61174();
        }
        else {
          lVar7 = 0;
          uVar4 = uVar5;
          FUN_101d6ffd4(0,uVar5);
        }
        func_0x000107c6142c(uVar5);
        lVar8 = lVar7;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar8 != 0) {
          lVar7 = lVar8;
          func_0x000107c5faec(lVar8);
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(uVar2);
          goto LAB_101dbcd2c;
        }
        func_0x000107c615e8(uVar3);
        func_0x000107c61170(uVar2);
      }
    }
  }
  lVar7 = 0;
  uVar4 = 0;
LAB_101dbcd2c:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = lVar7;
  return auVar9;
}



/* Entry: 101dbcd54; end: 101dbcd9f;  */

void FUN_101dbcd54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dbcda0; end: 101dbcfa7;  */

void FUN_101dbcda0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  puVar1 = (undefined8 *)(param_4 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_101db5fa0();
    puVar5 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,puVar1,0,0);
    *puVar1 = 0x8000000000000000;
    (*param_5)();
    func_0x000107c614ac(puVar5);
  }
  else if (param_3 == 0) {
    (*param_5)(0,0);
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000107c4077c();
    func_0x000103b3e210();
    if ((uVar2 & 1) != 0) {
      func_0x000107c4077c(param_3);
      func_0x000107c4077c(param_3);
      lVar3 = puVar1[7];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar5 = &UNK_110484c38;
        func_0x000107c613fc(&UNK_110484c38,0x40,7);
        *(undefined8 *)(puVar5 + 0x10) = param_7;
        *(undefined8 *)(puVar5 + 0x18) = param_8;
        *(undefined8 *)(puVar5 + 0x20) = param_9;
        *(undefined8 *)(puVar5 + 0x28) = param_10;
        *(code **)(puVar5 + 0x30) = param_5;
        *(undefined8 *)(puVar5 + 0x38) = param_6;
        pcStack_98 = FUN_101dbd63c;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_101036d40;
        puStack_a0 = &UNK_110484c50;
        ppuVar4 = &puStack_b8;
        puStack_90 = puVar5;
        func_0x000107c60bc4(ppuVar4);
        puVar5 = puStack_90;
        func_0x000107c61434(param_8);
        func_0x000107c61434(param_10);
        func_0x000107c6157c(param_6);
        func_0x000107c61574(puVar5);
        func_0x000107c42f9c(param_1,param_2,lVar3);
        func_0x000107c61574(puVar1);
        func_0x000107c61170(param_3);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(lVar3);
        return;
      }
    }
    (*param_5)();
    func_0x000107c61574(puVar1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101dbcfa8; end: 101dbd0fb;  */

/* WARNING: Possible PIC construction at 0x000101dbd010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbd0c4) */
/* WARNING: Removing unreachable block (ram,0x000101dbd074) */
/* WARNING: Removing unreachable block (ram,0x000101dbd014) */
/* WARNING: Removing unreachable block (ram,0x000101dbd0e4) */

void FUN_101dbcfa8(long *param_1,long param_2)

{
  undefined *puVar1;
  code *in_x6;
  long *plVar2;
  
  if (param_2 != 0) {
    FUN_101db5fa0();
    puVar1 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,param_1,0,0);
    *param_1 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000107c614b0(param_2);
    (*in_x6)(puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  puVar1 = PTR_PTR_1126a9558;
  func_0x000107c610f8(PTR_PTR_1126a9558);
  func_0x000107c453e4();
  if (param_1 == (long *)0x0) {
    func_0x000107c53a20(puVar1);
LAB_101dbd0ac:
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    func_0x000107c40898();
    func_0x000107c61180();
    if (plVar2 != (long *)0x0) {
      func_0x000107c53a20(puVar1);
      goto code_r0x000107c61170;
    }
    func_0x000107c53a20(puVar1);
    func_0x000107c3d9d4();
    func_0x000107c61180();
    plVar2 = param_1;
    if (param_1 == (long *)0x0) goto LAB_101dbd0ac;
  }
  func_0x000107c52538(puVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar2);
  return;
}



/* Entry: 101dbd0fc; end: 101dbd147;  */

void FUN_101dbd0fc(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dbd148; end: 101dbd5a3;  */

/* WARNING: Possible PIC construction at 0x000101dbd2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbd420) */
/* WARNING: Removing unreachable block (ram,0x000101dbd2d8) */
/* WARNING: Removing unreachable block (ram,0x000101dbd474) */
/* WARNING: Removing unreachable block (ram,0x000101dbd520) */
/* WARNING: Removing unreachable block (ram,0x000101dbd498) */
/* WARNING: Removing unreachable block (ram,0x000101dbd4fc) */
/* WARNING: Removing unreachable block (ram,0x000101dbd2dc) */
/* WARNING: Removing unreachable block (ram,0x000101dbd564) */
/* WARNING: Removing unreachable block (ram,0x000101dbd500) */

void FUN_101dbd148(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &UNK_110484b70;
  func_0x000107c613fc(&UNK_110484b70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x0001000a8868(param_3 + 0x10,*(undefined8 *)(param_3 + 0x28));
  func_0x000107c61174();
  uVar3 = param_1;
  lVar1 = param_2;
  FUN_101dbcb64();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126a9558;
    func_0x000107c610f8(PTR_PTR_1126a9558);
    func_0x000107c453e4();
    func_0x000107c43b74(param_4);
    func_0x000107c61574(puVar2);
  }
  else {
    plVar4 = (long *)(param_3 + 0x10);
    func_0x0001000a8868(plVar4,*(undefined8 *)(param_3 + 0x28));
    puVar5 = &UNK_110484b98;
    func_0x000107c613fc(&UNK_110484b98,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,param_3);
    puVar6 = &UNK_110484bc0;
    func_0x000107c613fc(&UNK_110484bc0,0x48,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(code **)(puVar6 + 0x18) = FUN_101dbd5a4;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    *(undefined8 *)(puVar6 + 0x28) = param_1;
    *(long *)(puVar6 + 0x30) = param_2;
    *(undefined8 *)(puVar6 + 0x38) = uVar3;
    *(long *)(puVar6 + 0x40) = lVar1;
    puVar6 = *(undefined **)(*plVar4 + 0x18);
    func_0x000107c61580(puVar5,2);
    func_0x000107c61580(puVar2,2);
    func_0x000107c61438(param_2,2);
    func_0x000107c61438(lVar1,2);
    func_0x000107c4cb80(puVar6);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 101dbd5a4; end: 101dbd5bf;  */

void FUN_101dbd5a4(undefined *param_1,char param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == '\x01') {
    func_0x000107c5ed2c();
    func_0x000107c43b70(uVar2);
    puVar1 = param_1;
  }
  else {
    puVar1 = param_1;
    if (param_1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126a9558;
      func_0x000107c610f8(PTR_PTR_1126a9558);
      func_0x000107c453e4();
    }
    func_0x000107c61174(param_1);
    func_0x000107c43b74(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101dbd5c0; end: 101dbd5df;  */

void FUN_101dbd5c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dbd5e0; end: 101dbd5fb;  */

void FUN_101dbd5e0(long param_1,long param_2)

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



/* Entry: 101dbd5fc; end: 101dbd63b;  */

void FUN_101dbd5fc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101dbd63c; end: 101dbd653;  */

/* WARNING: Possible PIC construction at 0x000101dbd010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbd0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbd0c4) */
/* WARNING: Removing unreachable block (ram,0x000101dbd074) */
/* WARNING: Removing unreachable block (ram,0x000101dbd014) */
/* WARNING: Removing unreachable block (ram,0x000101dbd0e4) */

void FUN_101dbd63c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  long *plVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  if (param_2 != 0) {
    FUN_101db5fa0();
    puVar2 = &UNK_110484368;
    func_0x000107c613f8(&UNK_110484368,param_1,0,0);
    *param_1 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000107c614b0(param_2);
    (*pcVar1)(puVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
    return;
  }
  puVar2 = PTR_PTR_1126a9558;
  func_0x000107c610f8(PTR_PTR_1126a9558,0,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),pcVar1,*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c453e4();
  if (param_1 == (long *)0x0) {
    func_0x000107c53a20(puVar2);
LAB_101dbd0ac:
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    func_0x000107c40898();
    func_0x000107c61180();
    if (plVar3 != (long *)0x0) {
      func_0x000107c53a20(puVar2);
      goto code_r0x000107c61170;
    }
    func_0x000107c53a20(puVar2);
    func_0x000107c3d9d4();
    func_0x000107c61180();
    plVar3 = param_1;
    if (param_1 == (long *)0x0) goto LAB_101dbd0ac;
  }
  func_0x000107c52538(puVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar3);
  return;
}



/* Entry: 101dbd654; end: 101dbd69b;  */

long FUN_101dbd654(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined **)(unaff_x20 + 0x80) = puVar1;
  return unaff_x20;
}



/* Entry: 101dbd69c; end: 101dbd6b7;  */

void FUN_101dbd69c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd6b8);
  return;
}



/* Entry: 101dbd6b8; end: 101dbd747;  */

void FUN_101dbd6b8(undefined8 param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  if (*(long *)(lVar2 + 0x78) != 0) {
    FUN_101dbd898();
    func_0x000107c614f0(lVar2);
    func_0x000107c5fca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd748,lVar2,param_1);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(lVar2 + 0x78) = uVar1;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x000101dbd744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101dbd748; end: 101dbd84f;  */

void FUN_101dbd748(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dbd850;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,0);
  func_0x000107c61428(lVar2 + 0x80,unaff_x22 + 0x50,0x21,0);
  uVar8 = *(ulong *)(lVar2 + 0x80);
  func_0x000107c61434(uVar1);
  uVar5 = uVar8;
  func_0x000107c61558();
  *(ulong *)(lVar2 + 0x80) = uVar8;
  uVar6 = uVar8;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    FUN_101dbdee4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar2 + 0x80) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_101dbdee4(uVar8,uVar5 + 1,1,uVar6);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
  lVar7 = uVar8 + uVar5 * 0x18;
  *(undefined8 *)(lVar7 + 0x20) = uVar1;
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  *(long *)(lVar7 + 0x30) = lVar4;
  *(ulong *)(lVar2 + 0x80) = uVar8;
  func_0x000107c614a8(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dbd850; end: 101dbd88f;  */

void FUN_101dbd850(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd890,*(undefined8 *)(*unaff_x22 + 0x78),0);
  return;
}



/* Entry: 101dbd890; end: 101dbd897;  */

void FUN_101dbd890(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dbd894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbd898; end: 101dbd8f7;  */

void FUN_101dbd898(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam0000000112e2cb78 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam0000000112e2cb78;
  func_0x000101dbd8d8();
  puVar2 = &UNK_10da15e48;
  func_0x000107c61520(&UNK_10da15e48,lVar1);
  puRam0000000112e2cb78 = puVar2;
  return;
}



/* Entry: 101dbd8f8; end: 101dbd913;  */

void FUN_101dbd8f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd914);
  return;
}



/* Entry: 101dbd914; end: 101dbdbcf;  */

void FUN_101dbd914(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x22;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  puVar12 = (ulong *)(lVar1 + 0x70);
  uVar5 = *puVar12;
  lVar9 = *(long *)(lVar1 + 0x78);
  uVar10 = *(ulong *)(unaff_x22 + 0x40);
  if (lVar9 == 0) {
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar10,lVar6);
    func_0x000107c6142c(0x800000010f010780);
    func_0x000107c61428(lVar1 + 0x80,unaff_x22 + 0x10,1,0);
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined **)(lVar1 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar4);
    puVar8 = *(undefined1 **)(lVar1 + 0x78);
    *(ulong *)(lVar1 + 0x70) = uVar5;
    *(undefined8 *)(lVar1 + 0x78) = 0;
LAB_101dbdb78:
    func_0x000107c6142c();
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar8,0,0);
    *puVar8 = 0x22;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar11 = lVar1;
    if (uVar5 != uVar10 || lVar9 != lVar6) {
      uVar3 = uVar5;
      func_0x000107c605b8(uVar5,lVar9,uVar10,lVar6,0);
      lVar11 = *(long *)(unaff_x22 + 0x50);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
        func_0x000107c61434(lVar9);
        func_0x000107c602fc(0x24);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(uVar5,lVar9);
        func_0x000107c5fb78(0x203a746f67202c,0xe700000000000000);
        func_0x000107c5fb78(uVar4,uVar2);
        func_0x000107c6142c(0x800000010f0107b0);
        func_0x000107c61428(lVar11 + 0x80,unaff_x22 + 0x28,1,0);
        uVar4 = *(undefined8 *)(lVar11 + 0x80);
        *(undefined **)(lVar11 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c6142c(uVar4);
        puVar8 = *(undefined1 **)(lVar1 + 0x78);
        *puVar12 = 0;
        *(undefined8 *)(lVar1 + 0x78) = 0;
        func_0x000107c6142c(lVar9);
        goto LAB_101dbdb78;
      }
    }
    *puVar12 = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    func_0x000107c6142c(lVar9);
    func_0x000107c61428(lVar11 + 0x80,unaff_x22 + 0x10,0,0);
    lVar6 = *(long *)(lVar11 + 0x80);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61428(lVar11 + 0x80,unaff_x22 + 0x28,0x21,0);
      uVar4 = *(undefined8 *)(lVar6 + 0x20);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      lVar6 = *(long *)(lVar6 + 0x30);
      func_0x000107c61434(uVar2);
      FUN_101dbe110(0,1);
      func_0x000107c614a8(unaff_x22 + 0x28);
      uVar7 = *(undefined8 *)(lVar1 + 0x78);
      *(undefined8 *)(lVar1 + 0x70) = uVar4;
      *(undefined8 *)(lVar1 + 0x78) = uVar2;
      func_0x000107c61434(uVar2);
      func_0x000107c6142c(uVar7);
      **(undefined1 **)(*(long *)(lVar6 + 0x40) + 0x28) = 1;
      func_0x000107c6144c(lVar6);
      func_0x000107c6142c(uVar2);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101dbdbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101dbdbd0; end: 101dbdc27;  */

void FUN_101dbdbd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101dbdc28; end: 101dbdc3f;  */

void FUN_101dbdc28(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbe1cc);
  return;
}



/* Entry: 101dbdc40; end: 101dbdc73;  */

void FUN_101dbdc40(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101dbdc74; end: 101dbdc7f;  */

void FUN_101dbdc74(void)

{
  return;
}



/* Entry: 101dbdc80; end: 101dbdcdf;  */

void FUN_101dbdc80(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dbdce0;
  plVar1[0xe] = param_2;
  plVar1[0xf] = lVar2;
  plVar1[0xd] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd6b8,lVar2,0);
  return;
}



/* Entry: 101dbdce0; end: 101dbdd1b;  */

void FUN_101dbdce0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dbdd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dbdd1c; end: 101dbdd7b;  */

void FUN_101dbdd1c(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dbdd7c;
  plVar1[9] = param_2;
  plVar1[10] = lVar2;
  plVar1[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbd914,lVar2,0);
  return;
}



/* Entry: 101dbdd7c; end: 101dbddb7;  */

void FUN_101dbdd7c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dbddb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dbddb8; end: 101dbddd3;  */

void FUN_101dbddb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbddd4,uVar1,0);
  return;
}



/* Entry: 101dbddd4; end: 101dbde17;  */

void FUN_101dbddd4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(lVar2 + 0x88) = uVar4;
  func_0x000107c61434(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101dbde14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbde18; end: 101dbde2f;  */

void FUN_101dbde18(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbde30,uVar1,0);
  return;
}



/* Entry: 101dbde30; end: 101dbde77;  */

void FUN_101dbde30(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x88);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x90);
  func_0x000107c61434(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101dbde74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2);
  return;
}



/* Entry: 101dbde78; end: 101dbde8f;  */

void FUN_101dbde78(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbde90,uVar1,0);
  return;
}



/* Entry: 101dbde90; end: 101dbdee3;  */

void FUN_101dbde90(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(lVar2 + 0x78);
  func_0x000107c61428(lVar2 + 0x80,unaff_x22 + 0x10,0,0);
  lVar2 = *(long *)(*(long *)(lVar2 + 0x80) + 0x10);
  if (lVar1 != 0) {
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000101dbdee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 101dbdee4; end: 101dbe027;  */

undefined * FUN_101dbdee4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe028);
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
    puVar3 = (undefined *)0x112e2ccb8;
    func_0x0001000285a8(0x112e2ccb8,&UNK_10da15f30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e2ccb0;
    func_0x0001000285a8(0x112e2ccb0,&UNK_10da15f28);
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



/* Entry: 101dbe028; end: 101dbe10f;  */

void FUN_101dbe028(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbe100);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x18;
  uVar4 = 0x112e2ccb0;
  func_0x0001000285a8(0x112e2ccb0,&UNK_10da15f28);
  func_0x000107c61408(lVar8,lVar1,uVar4);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbe104);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbe108);
      (*pcVar3)();
    }
    uVar5 = lVar8 + param_3 * 0x18;
    uVar6 = lVar7 + 0x20 + param_2 * 0x18;
    if ((uVar5 != uVar6) || (uVar6 + lVar1 * 0x18 <= uVar5)) {
      func_0x000107c610b8(uVar5,uVar6,lVar1 * 0x18);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbe10c);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101dbe110);
  (*pcVar3)();
}



/* Entry: 101dbe110; end: 101dbe1cb;  */

void FUN_101dbe110(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe1bc);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe1c0);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe1c4);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_101dbdee4();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_101dbe028(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe1cc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101dbe1c8);
  (*pcVar2)();
}



/* Entry: 101dbe1cc; end: 101dbe1cf;  */

void FUN_101dbe1cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(lVar2 + 0x78);
  func_0x000107c61428(lVar2 + 0x80,unaff_x22 + 0x10,0,0);
  lVar2 = *(long *)(*(long *)(lVar2 + 0x80) + 0x10);
  if (lVar1 != 0) {
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000101dbdee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 101dbe1d0; end: 101dbe1ef;  */

void FUN_101dbe1d0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101dbe1f0; end: 101dbe257;  */

void FUN_101dbe1f0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  func_0x000101dbd8d8();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined **)(lVar3 + 0x80) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110484cf8;
  *param_1 = lVar3;
  return;
}



/* Entry: 101dbe258; end: 101dbe267;  */

void FUN_101dbe258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dbe268; end: 101dbe2db;  */

void FUN_101dbe268(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e2ccc0,&UNK_10da15f40);
  func_0x000107c613fc();
  pcVar1 = FUN_101dbe1f0;
  func_0x0001000bdd8c(FUN_101dbe1f0,0);
  uVar2 = 0;
  func_0x000100289ffc(0);
  func_0x000107c610f8();
  func_0x0001007a58ac(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101dbe2dc; end: 101dbe62b;  */

void FUN_101dbe2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

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
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  return;
}



/* Entry: 101dbe62c; end: 101dbe773;  */

/* WARNING: Possible PIC construction at 0x000101dbe638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbe648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbe658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101dbe668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dbe65c) */
/* WARNING: Removing unreachable block (ram,0x000101dbe64c) */
/* WARNING: Removing unreachable block (ram,0x000101dbe63c) */
/* WARNING: Removing unreachable block (ram,0x000101dbe66c) */

void FUN_101dbe62c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dbe774; end: 101dbe797;  */

void FUN_101dbe774(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101dbe3c8();
  *param_1 = param_2;
  return;
}



/* Entry: 101dbe798; end: 101dbe833;  */

void FUN_101dbe798(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101dbe834; end: 101dbe84b;  */

void FUN_101dbe834(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbe84c,0,0);
  return;
}



/* Entry: 101dbe84c; end: 101dbed3b;  */

void FUN_101dbe84c(undefined1 *param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte **ppbVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long unaff_x22;
  uint uVar17;
  byte *pbStack_58;
  ulong uStack_50;
  
  func_0x0001000d224c(unaff_x22 + 0x80);
  puVar14 = *(undefined1 **)(unaff_x22 + 0x80);
  *(undefined1 **)(unaff_x22 + 0xb8) = puVar14;
  if (puVar14 != (undefined1 *)0x0) {
    func_0x0001000d224c(unaff_x22 + 0x88);
    lVar15 = *(long *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0xc0) = lVar15;
    if (lVar15 != 0) {
      puVar3 = *(undefined1 **)(unaff_x22 + 0xa8);
      func_0x000107c5b67c();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 200) = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
LAB_101dbe9dc:
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar3,0,0);
        *puVar3 = 0x2f;
        func_0x000107c61654();
      }
      else {
        func_0x000107c61174();
        puVar4 = puVar3;
        func_0x000107c40808();
        if ((long)puVar4 < 1) {
          func_0x000107c61170(puVar3);
          func_0x000107c61170();
          goto LAB_101dbe9dc;
        }
        pbVar5 = *(byte **)(unaff_x22 + 0xa8);
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbed3c);
          (*pcVar1)();
        }
        pbVar11 = pbVar5;
        func_0x000107c5faec();
        func_0x000107c61170(pbVar5);
        uVar8 = (ulong)pbVar11 & 0xffffffffffff;
        uVar10 = param_2 >> 0x38 & 0xf;
        uVar9 = uVar8;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar9 = uVar10;
        }
        if (uVar9 == 0) {
          func_0x000107c6142c(param_2);
        }
        else {
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
                uVar8 = param_2;
                func_0x000107c60358();
              }
              else {
                pbVar11 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
              }
              if (*pbVar11 == 0x2b) {
                if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbed34);
                  (*pcVar1)();
                }
                lVar16 = uVar8 - 1;
                if (lVar16 == 0) goto LAB_101dbebcc;
                pbVar5 = (byte *)0x0;
                do {
                  pbVar11 = pbVar11 + 1;
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = (long)pbVar5 * 10,
                      SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar9 = (ulong)(byte)(*pbVar11 - 0x30), pbVar5 = (byte *)(lVar13 + uVar9),
                     SCARRY8(lVar13,uVar9))) goto LAB_101dbebcc;
                  uVar17 = 0;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
              else if (*pbVar11 == 0x2d) {
                if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbed2c);
                  (*pcVar1)();
                }
                lVar16 = uVar8 - 1;
                if (lVar16 == 0) {
LAB_101dbebcc:
                  uVar17 = 1;
                  pbVar5 = (byte *)0x0;
                }
                else {
                  pbVar5 = (byte *)0x0;
                  do {
                    pbVar11 = pbVar11 + 1;
                    if (((9 < *pbVar11 - 0x30) ||
                        (lVar13 = (long)pbVar5 * 10,
                        SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar9 = (ulong)(byte)(*pbVar11 - 0x30), pbVar5 = (byte *)(lVar13 - uVar9),
                       SBORROW8(lVar13,uVar9))) goto LAB_101dbebcc;
                    uVar17 = 0;
                    lVar16 = lVar16 + -1;
                  } while (lVar16 != 0);
                }
              }
              else {
                if (uVar8 == 0) goto LAB_101dbebcc;
                pbVar5 = (byte *)0x0;
                if (pbVar11 == (byte *)0x0) {
                  uVar17 = 0;
                }
                else {
                  do {
                    if (((9 < *pbVar11 - 0x30) ||
                        (lVar16 = (long)pbVar5 * 10,
                        SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                       (uVar9 = (ulong)(byte)(*pbVar11 - 0x30), pbVar5 = (byte *)(lVar16 + uVar9),
                       SCARRY8(lVar16,uVar9))) goto LAB_101dbebcc;
                    uVar17 = 0;
                    uVar8 = uVar8 - 1;
                    pbVar11 = pbVar11 + 1;
                  } while (uVar8 != 0);
                }
              }
            }
            else {
              pbStack_58 = pbVar11;
              uStack_50 = param_2 & 0xffffffffffffff;
              uVar17 = (uint)pbVar11 & 0xff;
              if (uVar17 == 0x2b) {
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbed38);
                  (*pcVar1)();
                }
                lVar16 = uVar10 - 1;
                if (lVar16 == 0) goto LAB_101dbebcc;
                pbVar5 = (byte *)0x0;
                pbVar11 = (byte *)((ulong)&pbStack_58 | 1);
                do {
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = (long)pbVar5 * 10,
                      SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar9 = (ulong)(byte)(*pbVar11 - 0x30), pbVar5 = (byte *)(lVar13 + uVar9),
                     SCARRY8(lVar13,uVar9))) goto LAB_101dbebcc;
                  uVar17 = 0;
                  lVar16 = lVar16 + -1;
                  pbVar11 = pbVar11 + 1;
                } while (lVar16 != 0);
              }
              else if (uVar17 == 0x2d) {
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbed30);
                  (*pcVar1)();
                }
                lVar16 = uVar10 - 1;
                if (lVar16 == 0) goto LAB_101dbebcc;
                pbVar5 = (byte *)0x0;
                pbVar11 = (byte *)((ulong)&pbStack_58 | 1);
                do {
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = (long)pbVar5 * 10,
                      SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar9 = (ulong)(byte)(*pbVar11 - 0x30), pbVar5 = (byte *)(lVar13 - uVar9),
                     SBORROW8(lVar13,uVar9))) goto LAB_101dbebcc;
                  uVar17 = 0;
                  lVar16 = lVar16 + -1;
                  pbVar11 = pbVar11 + 1;
                } while (lVar16 != 0);
              }
              else {
                if (uVar10 == 0) goto LAB_101dbebcc;
                pbVar5 = (byte *)0x0;
                ppbVar12 = &pbStack_58;
                do {
                  if (((9 < *(byte *)ppbVar12 - 0x30) ||
                      (lVar16 = (long)pbVar5 * 10,
                      SUB168(SEXT816((long)pbVar5) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                     (uVar9 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30),
                     pbVar5 = (byte *)(lVar16 + uVar9), SCARRY8(lVar16,uVar9))) goto LAB_101dbebcc;
                  uVar17 = 0;
                  uVar10 = uVar10 - 1;
                  ppbVar12 = (byte **)((long)ppbVar12 + 1);
                } while (uVar10 != 0);
              }
            }
          }
          else {
            uVar9 = param_2;
            func_0x000100edba6c(pbVar11,param_2,10);
            uVar17 = (uint)uVar9;
            pbVar5 = pbVar11;
          }
          func_0x000107c6142c(param_2);
          *(byte **)(unaff_x22 + 0xd0) = pbVar5;
          if (((uVar17 & 0xff) != 1) && (0 < (long)pbVar5)) {
            iVar2 = (int)*(undefined8 *)(unaff_x22 + 0xa8);
            func_0x000107c447ac();
            if (iVar2 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
              func_0x000107c3fd50();
              func_0x000107c61180();
            }
            *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
            lVar13 = *(long *)(*(long *)(unaff_x22 + 0xb0) + 0x40);
            *(long *)(unaff_x22 + 0xe0) = lVar13;
            lVar15 = *(long *)(*(long *)(unaff_x22 + 0xb0) + 0x38);
            plVar7 = (long *)0xc0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0xe8) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101dbed3c;
            lVar16 = *(long *)(unaff_x22 + 0xb0);
            plVar7[0x13] = lVar15;
            plVar7[0x14] = lVar16;
            plVar7[0x11] = (long)puVar3;
            plVar7[0x12] = lVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbfc24,0,0);
            return;
          }
        }
        puVar4 = puVar3;
        func_0x000107c61170();
        func_0x000101b9d5ac();
        func_0x000107c613f8(&UNK_1106c31f8,puVar4,0,0);
        *puVar4 = 0x30;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
      }
      func_0x000107c615e8(lVar15);
      func_0x000107c615e8(puVar14);
      goto LAB_101dbecd8;
    }
    func_0x000107c615e8();
    param_1 = puVar14;
  }
  func_0x000101b9d5ac();
  func_0x000107c613f8(&UNK_1106c31f8,param_1,0,0);
  *param_1 = 0x2e;
  func_0x000107c61654();
LAB_101dbecd8:
                    /* WARNING: Could not recover jumptable at 0x000101dbecf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dbed3c; end: 101dbeda3;  */

void FUN_101dbed3c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xf0) = param_1;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101dbeda4;
  }
  else {
    func_0x000107c61170(*(undefined8 *)(lVar2 + 200));
    pcVar1 = FUN_101dbfbac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dbeda4; end: 101dbf243;  */

void FUN_101dbeda4(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  
  uVar14 = *(ulong *)(unaff_x22 + 0xf0);
  uVar7 = *(ulong *)(unaff_x22 + 200);
  uVar6 = uVar7;
  func_0x000107c40808();
  func_0x000107c61170(uVar7);
  if (uVar14 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar14 & 0xffffffffffffff8;
    if ((uVar14 & 0x8000000000000000) != 0) {
      uVar7 = *(ulong *)(unaff_x22 + 0xf0);
    }
    func_0x000107c60480();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
  if (uVar6 != uVar7) {
    if (uVar7 == 0) {
      puVar9 = *(undefined1 **)(unaff_x22 + 0xf0);
    }
    else {
      uVar6 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
      func_0x0001011bf650(0,uVar6,0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dbf244);
        (*pcVar1)();
      }
      if ((uVar14 & 0xc000000000000001) == 0) {
        plVar21 = (long *)(*(long *)(unaff_x22 + 0xf0) + 0x20);
        do {
          lVar8 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar8;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar8);
            lVar13 = 0;
            uVar15 = 0;
            uVar14 = uVar6;
          }
          else {
            lVar13 = lVar5;
            func_0x000107c5faec();
            uVar14 = uVar6;
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar8);
            func_0x000107c61170(lVar8);
            uVar15 = uVar6;
          }
          uVar6 = uVar14;
          uVar19 = *(ulong *)(puVar4 + 0x10);
          uVar14 = uVar19 + 1;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar19) {
            uVar6 = uVar14;
            func_0x0001011bf650(1 < *(ulong *)(puVar4 + 0x18),uVar14,1);
          }
          *(ulong *)(puVar4 + 0x10) = uVar14;
          *(long *)(puVar4 + uVar19 * 0x10 + 0x20) = lVar13;
          *(ulong *)(puVar4 + uVar19 * 0x10 + 0x28) = uVar15;
          uVar7 = uVar7 - 1;
          plVar21 = plVar21 + 1;
        } while (uVar7 != 0);
      }
      else {
        uVar6 = 0;
        do {
          uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar14 = uVar6;
          FUN_101dc0444(uVar6,uVar10,&PTR_PTR_1126af4d0,0x112d63638);
          uVar15 = uVar14;
          func_0x000107c615f0();
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (uVar15 == 0) {
            func_0x000107c615ec(uVar14,2);
            uVar19 = 0;
            uVar10 = 0;
          }
          else {
            uVar19 = uVar15;
            func_0x000107c5faec();
            func_0x000107c61170(uVar15);
            func_0x000107c615ec(uVar14,2);
          }
          uVar14 = *(ulong *)(puVar4 + 0x10);
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
            func_0x0001011bf650(1 < *(ulong *)(puVar4 + 0x18),uVar14 + 1,1);
          }
          uVar6 = uVar6 + 1;
          *(ulong *)(puVar4 + 0x10) = uVar14 + 1;
          *(ulong *)(puVar4 + uVar14 * 0x10 + 0x20) = uVar19;
          *(undefined8 *)(puVar4 + uVar14 * 0x10 + 0x28) = uVar10;
        } while (uVar7 != uVar6);
      }
      puVar9 = *(undefined1 **)(unaff_x22 + 0xf0);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c6142c();
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar9,0,0);
    *puVar9 = 0x34;
    func_0x000107c61654();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar10);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101dbf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x18);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dbf244;
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar5,1);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xf0);
  if (uVar14 >> 0x3e == 0) {
    func_0x000107c61434();
    func_0x000107c605f8();
    puVar17 = *(undefined8 **)(unaff_x22 + 0xf0);
  }
  else {
    puVar17 = (undefined8 *)(uVar14 & 0xffffffffffffff8);
    if ((uVar14 & 0x8000000000000000) != 0) {
      puVar17 = puVar2;
    }
    func_0x000107c61434();
    uVar3 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    func_0x000107c60458(puVar17,uVar3);
    func_0x000107c6142c(puVar2);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar8 = *(long *)(unaff_x22 + 0xb0);
  uVar3 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  puVar2 = puVar17;
  func_0x000107c5fc48(puVar17,uVar3);
  func_0x000107c6142c();
  uVar22 = *(undefined8 *)(lVar8 + 0x20);
  uVar18 = *(undefined8 *)(lVar8 + 0x30);
  uVar20 = *(undefined8 *)(lVar8 + 0x50);
  func_0x000103bcb688();
  uVar3 = *puVar17;
  uVar12 = puVar17[1];
  func_0x000107c61434(uVar12);
  func_0x000107c5fadc(uVar3,uVar12);
  func_0x000107c6142c(uVar12);
  puVar4 = &UNK_110484e70;
  func_0x000107c613fc(&UNK_110484e70,0x18,7);
  puVar17 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar4 + 0x10) = lVar5;
  *(code **)(unaff_x22 + 0x70) = FUN_101dc0600;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101dc0188;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110484e88;
  func_0x000107c60bc4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107e614a0(puVar2,0,uVar16,uVar10,uVar22,uVar11,uVar18,uVar20,0x101);
  func_0x000107c60bd0(puVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dbf244; end: 101dbf2af;  */

void FUN_101dbf244(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x100) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar2 + 0x90);
    pcVar1 = FUN_101dbf2b0;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101dbf6c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dbf2b0; end: 101dbf3a3;  */

void FUN_101dbf2b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar1 = 0;
  FUN_101dc06a0(0,0x112d62390,&PTR_PTR_1126aff40);
  uVar2 = uVar5;
  func_0x000107c5fc48(uVar5,uVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c442d0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d55e78;
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  func_0x000100759c94(uVar4,0,uVar2);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101dbf3a4;
                    /* WARNING: Could not recover jumptable at 0x000101dbf3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101dc0324)();
  return;
}



/* Entry: 101dbf3a4; end: 101dbf3f7;  */

void FUN_101dbf3a4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x128) = param_1;
  *(undefined1 *)(lVar1 + 0x168) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dbf3f8,0,0);
  return;
}



/* Entry: 101dbf3f8; end: 101dbf6bf;  */

/* WARNING: Removing unreachable block (ram,0x000101dbf508) */
/* WARNING: Removing unreachable block (ram,0x000101dbf514) */
/* WARNING: Removing unreachable block (ram,0x000101dbf604) */
/* WARNING: Removing unreachable block (ram,0x000101dbf608) */
/* WARNING: Removing unreachable block (ram,0x000101dbf520) */
/* WARNING: Removing unreachable block (ram,0x000101dbf618) */

void FUN_101dbf3f8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x22 + 0x128);
  if (*(char *)(unaff_x22 + 0x168) == '\x01') {
    *(long *)(unaff_x22 + 0x98) = lVar7;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x98,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar1);
    func_0x000107c615e8(uVar9);
    func_0x000107c61170(uVar8);
  }
  else {
    puVar5 = *(undefined1 **)(unaff_x22 + 0x118);
    func_0x000107c61574();
    if (lVar7 != 0) {
      puVar5 = *(undefined1 **)(unaff_x22 + 0x128);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x168);
      FUN_101dc06a0(0,0x112d50c78,&PTR_PTR_1126b25c0);
      func_0x000107c61174(puVar5);
      func_0x000107c5fc50();
      func_0x000101dc0624(puVar5,uVar2);
      *(undefined8 *)(unaff_x22 + 0x130) = 0;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x168);
    func_0x000101b9d5ac();
    func_0x000107c613f8(&UNK_1106c31f8,puVar5,0,0);
    *puVar5 = 0x31;
    func_0x000107c61654();
    func_0x000101dc0624(uVar8,uVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(uVar10);
  }
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101dbf6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


