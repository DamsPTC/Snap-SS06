/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002a4284; end: 1002a42c3;  */

void FUN_1002a4284(void)

{
  func_0x000107c61168(&PTR_PTR_112df83a0);
  return;
}



/* Entry: 1002a42c4; end: 1002a42df;  */

void FUN_1002a42c4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3d198,&UNK_10da29690);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ef9294,param_1);
  return;
}



/* Entry: 1002a42e0; end: 1002a432f;  */

void FUN_1002a42e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a4330; end: 1002a434f;  */

void FUN_1002a4330(void)

{
  func_0x000107c61168(&PTR_PTR_112e3d210);
  return;
}



/* Entry: 1002a4350; end: 1002a436b;  */

void FUN_1002a4350(undefined8 param_1)

{
  FUN_1000285a8(0x112e3d1a0,&UNK_10da29698);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ef9420,param_1);
  return;
}



/* Entry: 1002a436c; end: 1002a438b;  */

void FUN_1002a436c(void)

{
  func_0x000107c61168(&PTR_PTR_1129218e0);
  return;
}



/* Entry: 1002a438c; end: 1002a440b;  */

void FUN_1002a438c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3d278,&UNK_10da29870);
  puVar1 = &UNK_11049bb80;
  func_0x000107c613fc(&UNK_11049bb80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006dfef8,puVar1);
  return;
}



/* Entry: 1002a440c; end: 1002a442b;  */

void FUN_1002a440c(void)

{
  func_0x000107c61168(&PTR_PTR_112e3d2f0);
  return;
}



/* Entry: 1002a442c; end: 1002a4447;  */

void FUN_1002a442c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3d280,&UNK_10da29878);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006dfe9c,param_1);
  return;
}



/* Entry: 1002a4448; end: 1002a4497;  */

void FUN_1002a4448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a4498; end: 1002a44b7;  */

void FUN_1002a4498(void)

{
  func_0x000107c61168(&PTR_PTR_112938fb0);
  return;
}



/* Entry: 1002a44b8; end: 1002a4537;  */

void FUN_1002a44b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e11120,&UNK_10d9ec1b0);
  puVar1 = &UNK_110464370;
  func_0x000107c613fc(&UNK_110464370,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101c95100,puVar1);
  return;
}



/* Entry: 1002a4538; end: 1002a4583;  */

void FUN_1002a4538(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a4584; end: 1002a471f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1002a4584(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  FUN_10029b2d4(param_1 + 0x30);
  FUN_10029b2d4(param_1 + 0x38);
  FUN_10029b2d4(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c304f4(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c30648(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c30630(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107c31560(*(undefined8 *)(param_1 + 0x60));
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  func_0x0001002a463c(param_1);
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1002a4720; end: 1002a4727;  */

void FUN_1002a4720(void)

{
  return;
}



/* Entry: 1002a4728; end: 1002a4813;  */

void FUN_1002a4728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e13c18,&UNK_10d9efd70);
  puVar1 = &UNK_1104678c0;
  func_0x000107c613fc(&UNK_1104678c0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_101cb85e0,puVar1);
  return;
}



/* Entry: 1002a4814; end: 1002a488f;  */

void FUN_1002a4814(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a4890; end: 1002a490f;  */

void FUN_1002a4890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3a970,&UNK_10da25a80);
  puVar1 = &UNK_110498d18;
  func_0x000107c613fc(&UNK_110498d18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ed7688,puVar1);
  return;
}



/* Entry: 1002a4910; end: 1002a495b;  */

void FUN_1002a4910(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a495c; end: 1002a4977;  */

void FUN_1002a495c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a978,&UNK_10da25a88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed78c8,param_1);
  return;
}



/* Entry: 1002a4978; end: 1002a49c7;  */

void FUN_1002a4978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a49c8; end: 1002a49cf;  */

undefined1 FUN_1002a49c8(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1002a49d0; end: 1002a4a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1002a49d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da0eb8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112da0eb8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10006a340();
    func_0x000107c613fc();
    FUN_10006a360();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 1002a4a48; end: 1002a4a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1002a4a48(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112da10e0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10e0,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1002a4a88; end: 1002a4a93;  */

undefined ** FUN_1002a4a88(void)

{
  return &PTR_DAT_110d12950;
}



/* Entry: 1002a4a94; end: 1002a4ae3; -[SCCameraSynchronousOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a4a94(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + _DAT_1127246c4) = param_1;
  puStack_28 = PTR_PTR_1126e8a50;
  lStack_30 = param_2;
  func_0x000107c61154(&lStack_30,PTR_s_start_112671080);
  return;
}



/* Entry: 1002a4ae4; end: 1002a4b73; -[SCCameraHardwareOperationBase main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a4ae4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_1127246a0;
  lVar1 = param_1 + lVar3;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3f3c0();
  func_0x000107c61170(lVar1);
  if ((int)lVar2 != 0) {
    puStack_38 = PTR_PTR_1126e8a40;
    lStack_40 = param_1;
    func_0x000107c61154(&lStack_40,PTR_s_main_11260b378);
    param_1 = param_1 + lVar3;
    func_0x000107c61148(param_1);
    func_0x000107c41b88();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1002a4b74; end: 1002a4caf; -[SCCameraHardwareRequestHandler canExecuteOperation:] */

undefined * FUN_1002a4b74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c42ba8();
  func_0x000107c61180();
  lVar4 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      puVar8 = (undefined *)0x0;
LAB_1002a4c6c:
      func_0x000107c61170(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return puVar8;
      }
      func_0x000107c60e78();
      puVar5 = (undefined8 *)0x112dd8570;
      plVar6 = (long *)&UNK_10d99bce8;
      iVar2 = 2;
      FUN_100029b9c(2,0x10,0,0);
      if (iVar2 != 0) {
        lVar4 = 0;
        FUN_1002a4e04(0,0x112dd8540,&PTR_PTR_1126b9d70);
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)0x112d36e60;
          plVar6 = (long *)&UNK_10d901170;
        }
      }
      puVar8 = (undefined *)*puVar5;
      if (puVar8 == (undefined *)0x0 || ((ulong)puVar8 & 1) != 0) {
        puVar8 = (undefined *)((long)plVar6 + (long)(int)*plVar6);
        func_0x000107c61518(puVar8,*plVar6 >> 0x20,0,0);
        *puVar5 = puVar8;
      }
      return puVar8;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar3 = param_1;
      func_0x000107c4a9c0(param_1);
      func_0x000107c61180();
      func_0x000107c49cec();
      func_0x000107c61170(uVar3);
      if ((uVar9 & 1) != 0) {
        puVar8 = (undefined *)0x1;
        goto LAB_1002a4c6c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = param_3;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 1002a4cb0; end: 1002a4cd3;  */

void FUN_1002a4cb0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112dd8570;
  plVar5 = (long *)&UNK_10d99bce8;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1002a4e04(0,0x112dd8540,&PTR_PTR_1126b9d70);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1002a4cd4; end: 1002a4e03; -[SCCameraHardwareInitOperation expectedStates] */

void FUN_1002a4cd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_1002a4cb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x10) = 2;
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c41dc4();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x20) = puVar2;
  func_0x000107c41a00();
  func_0x000107c61180();
  *(undefined **)(param_1 + 0x28) = puVar1;
  uVar3 = 0;
  func_0x0001002a4e90(0,0x112dd8540,&PTR_PTR_1126b9d70);
  lVar4 = param_1;
  func_0x000107c5fc48(param_1,uVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1002a4e04; end: 1002a4e43;  */

void FUN_1002a4e04(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1002a4e44; end: 1002a4ecf; +[SCCameraRequestHandlerEvent didBecomeIdle] */

void FUN_1002a4e44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9d70;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1002a4ed0; end: 1002a4eeb;  */

void FUN_1002a4ed0(undefined8 param_1)

{
  FUN_1000285a8(0x112e3f838,&UNK_10da2d630);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e9a2c,param_1);
  return;
}



/* Entry: 1002a4eec; end: 1002a4f3b;  */

void FUN_1002a4eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a4f3c; end: 1002a4f5b;  */

void FUN_1002a4f3c(void)

{
  func_0x000107c61168(&PTR_PTR_112e3f8b0);
  return;
}



/* Entry: 1002a4f5c; end: 1002a4f83; -[SCCameraHardwareRequestHandler lastEvent] */

void FUN_1002a4f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002a4f84; end: 1002a500b; -[SCCameraRequestHandlerEvent isEqual:] */

bool FUN_1002a4f84(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 1002a500c; end: 1002a50eb; -[SCCameraSynchronousOperation main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a500c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c42b40();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127246c0);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_58 = 0xc2000000;
    puStack_50 = &UNK_100c3c8c8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_2;
    func_0x000107c61174(lVar1);
    lStack_38 = lVar1;
    func_0x000107c4e524(uVar2,param_3,&puStack_60);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c6071c();
  func_0x000107c41b8c((param_1 - *(double *)(param_2 + _DAT_1127246c4)) * 1000.0,
                      (*(double *)(param_2 + _DAT_1127246c4) - *(double *)(param_2 + _DAT_1127246bc)
                      ) * 1000.0,param_2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1002a50ec; end: 1002a511f; -[SCCameraHardwareInitOperation execute] */

void FUN_1002a50ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1002a5120();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002a5120; end: 1002a54f7;  */

/* WARNING: Removing unreachable block (ram,0x0001002a54d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002a5120(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000027;
  FUN_1000a9a18(0xd000000000000027,0x800000010efc2290);
  func_0x000107c61170(uVar2);
  lVar6 = _DAT_112dd8718;
  lVar10 = unaff_x20 + _DAT_112dd8718;
  func_0x000107c61618();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    lVar4 = lVar10;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    uVar9 = *(undefined1 *)(lVar4 + _DAT_113075c70);
    func_0x000107c61170();
    lVar10 = lVar4;
  }
  lVar4 = _DAT_112dd8728;
  *(undefined1 *)(unaff_x20 + _DAT_112dd8728) = uVar9;
  FUN_1002a54f8();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd8740);
  *(long *)(unaff_x20 + _DAT_112dd8740) = lVar10;
  func_0x000107c6142c(uVar2);
  if (*(char *)(unaff_x20 + lVar4) == '\x01') {
    lVar10 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar10 == 0) goto LAB_1002a525c;
    lVar5 = lVar10;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    uVar2 = *(undefined8 *)(lVar5 + _DAT_113075bb0);
    func_0x000107c61170(lVar5);
  }
  else {
LAB_1002a525c:
    uVar2 = 0xffffffffffffffff;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112dd8750) = uVar2;
  if (*(char *)(unaff_x20 + lVar4) == '\x01') {
    lVar10 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar10 == 0) goto LAB_1002a52bc;
    lVar5 = lVar10;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    uVar2 = *(undefined8 *)(lVar5 + _DAT_113075bb8);
    func_0x000107c61170(lVar5);
  }
  else {
LAB_1002a52bc:
    uVar2 = 0;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112dd8758) = uVar2;
  bVar1 = *(byte *)(unaff_x20 + _DAT_112dd8778);
  lVar10 = unaff_x20 + _DAT_112dd8710;
  func_0x000107c61618();
  if (lVar10 == 0) {
    if ((bVar1 & 1) == 0) goto LAB_1002a5310;
LAB_1002a5334:
    *(undefined1 *)(unaff_x20 + _DAT_112dd8730) = 1;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd8788);
    func_0x000107c4db98(uVar2);
    FUN_1002ab608();
    FUN_1002c3574();
    FUN_10034cc10();
    FUN_10034cd58();
    FUN_100352c2c();
    lVar10 = *(long *)(unaff_x20 + _DAT_112dd8738);
    if (lVar10 != 0) {
      lVar4 = unaff_x20 + lVar6;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar7 = 1;
        func_0x0001002ed16c(1);
        func_0x000107c61174(lVar10);
        lVar5 = lVar10;
        FUN_1000c033c();
        func_0x000107c61170(uVar7);
        func_0x000107c59840(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar10);
      }
    }
    func_0x000107c4db98(uVar2);
    lVar6 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar6 == 0) {
LAB_1002a5480:
      uStack_a0 = 0;
      goto LAB_1002a5484;
    }
    lVar10 = lVar6;
    func_0x000107c5bcc0();
  }
  else {
    lVar5 = lVar10;
    func_0x000107c4a09c();
    func_0x000107c615e8(lVar10);
    if ((uint)bVar1 != (uint)lVar5) goto LAB_1002a5334;
LAB_1002a5310:
    if ((*(byte *)(unaff_x20 + lVar4) & 1) == 0) goto LAB_1002a5334;
    lVar6 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar6 == 0) goto LAB_1002a5480;
    lVar10 = lVar6;
    func_0x000107c5bcc0();
  }
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = lVar10;
  func_0x000107c40794(lVar10);
  func_0x000107c61170(lVar10);
  func_0x000107c60234(auStack_98,lVar6);
  func_0x000107c615e8(lVar6);
  uVar2 = 0;
  FUN_1000c0a74(0);
  puVar8 = &uStack_a0;
  func_0x000107c6147c(puVar8,auStack_98,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if ((int)puVar8 == 0) {
    uStack_a0 = 0;
  }
LAB_1002a5484:
  func_0x000107c61428(param_1,auStack_98,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return uStack_a0;
}



/* Entry: 1002a54f8; end: 1002a566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1002a54f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  undefined *apuStack_80 [6];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000038;
  FUN_1000a9a18(0xd000000000000038,0x800000010efc23f0);
  func_0x000107c61170(uVar1);
  lVar3 = unaff_x20 + _DAT_112dd8718;
  func_0x000107c61618();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar5 = *(ulong *)(lVar4 + _DAT_113075bb0);
    FUN_1002a566c(uVar5);
    uVar7 = *(ulong *)(lVar4 + _DAT_113075bb8);
    FUN_1002a5a2c(0);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dd8790);
    func_0x000107c615f0(uVar1);
    FUN_1002a5a4c(apuStack_80,uVar7 | uVar5,uVar1);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(lVar4);
    puVar6 = apuStack_80[0];
  }
  func_0x000107c61428(param_1,apuStack_80,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return puVar6;
}



/* Entry: 1002a566c; end: 1002a56c3;  */

void FUN_1002a566c(long param_1)

{
  if (param_1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0db150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afed0,PTR_s_none_112614668);
    return;
  }
  if (param_1 != 0) {
    if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf13830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afed0,PTR_s_back_1125a27b0);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afed0,PTR_s_front_1125cc5f8);
  return;
}



/* Entry: 1002a56c4; end: 1002a56e3;  */

void FUN_1002a56c4(void)

{
  func_0x000107c61168(&PTR_PTR_112942fb0);
  return;
}



/* Entry: 1002a56e4; end: 1002a56ff;  */

void FUN_1002a56e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e19140,&UNK_10d9f8820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007127b8,param_1);
  return;
}



/* Entry: 1002a5700; end: 1002a574f;  */

void FUN_1002a5700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a5750; end: 1002a576f;  */

void FUN_1002a5750(void)

{
  func_0x000107c61168(&PTR_PTR_112e191b8);
  return;
}



/* Entry: 1002a5770; end: 1002a578b;  */

void FUN_1002a5770(undefined8 param_1)

{
  FUN_1000285a8(0x112e1bc98,&UNK_10d9fd240);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce77d0,param_1);
  return;
}



/* Entry: 1002a578c; end: 1002a57db;  */

void FUN_1002a578c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a57dc; end: 1002a57fb;  */

void FUN_1002a57dc(void)

{
  func_0x000107c61168(&PTR_PTR_112e1bd10);
  return;
}



/* Entry: 1002a57fc; end: 1002a5817;  */

void FUN_1002a57fc(undefined8 param_1)

{
  FUN_1000285a8(0x112e1bca0,&UNK_10d9fd248);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce795c,param_1);
  return;
}



/* Entry: 1002a5818; end: 1002a592b;  */

void FUN_1002a5818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e39c80,&UNK_10da24430);
  puVar1 = &UNK_110498210;
  func_0x000107c613fc(&UNK_110498210,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(&UNK_101ed1818,puVar1);
  return;
}



/* Entry: 1002a592c; end: 1002a59b7;  */

void FUN_1002a592c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a59b8; end: 1002a59db; +[SCManagedCaptureDevicePositionOption front] */

undefined8 FUN_1002a59b8(void)

{
  return 1;
}



/* Entry: 1002a59dc; end: 1002a5a2b;  */

void FUN_1002a59dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a5a2c; end: 1002a5a4b;  */

void FUN_1002a5a2c(void)

{
  func_0x000107c61168(&PTR_PTR_112967440);
  return;
}



/* Entry: 1002a5a4c; end: 1002a5bd7;  */

void FUN_1002a5a4c(ulong *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_2 & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    lVar1 = param_3;
    func_0x000107c418b4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c49e28();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      uVar5 = *param_1;
      uVar3 = uVar5;
      func_0x000107c61558();
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x0001002a5edc(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x0001002a5edc(uVar5,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
      *(undefined8 *)(uVar5 + uVar3 * 8 + 0x20) = 0;
      *param_1 = uVar5;
    }
  }
  if (((param_2 >> 1 & 1) != 0) && (param_3 != 0)) {
    func_0x000107c418b4();
    func_0x000107c61180();
    lVar1 = param_3;
    func_0x000107c49a84();
    func_0x000107c615e8(param_3);
    if ((int)lVar1 != 0) {
      uVar5 = *param_1;
      uVar3 = uVar5;
      func_0x000107c61558();
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x0001002a5edc(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x0001002a5edc(uVar5,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
      *(undefined8 *)(uVar5 + uVar3 * 8 + 0x20) = 1;
      *param_1 = uVar5;
    }
  }
  return;
}



/* Entry: 1002a5bd8; end: 1002a5c0b; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl deviceAvailabilityHandler] */

void FUN_1002a5bd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1002a5c0c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1002a5c0c; end: 1002a5cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1002a5c0c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar3 = _DAT_112da0d60;
  plVar7 = &lStack_60;
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112da0d60);
  puVar9 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112da0d10);
    FUN_1000db838();
    lVar5 = 0;
    FUN_1002a5d00();
    lVar6 = lVar5;
    func_0x000107c610f8();
    lVar2 = _DAT_112da0a20;
    func_0x000107c61614(lVar6 + _DAT_112da0a20,0);
    *(undefined8 *)(lVar6 + _DAT_112da0a10) = uVar8;
    *(undefined1 **)(lVar6 + _DAT_112da0a18) = puVar4;
    func_0x000107c61604(lVar6 + lVar2);
    puVar1 = PTR_s_init_1125d9248;
    lStack_60 = lVar6;
    lStack_58 = lVar5;
    func_0x000107c615f0(uVar8);
    func_0x000107c61154(&lStack_60,puVar1);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long **)(unaff_x20 + lVar3) = plVar7;
    func_0x000107c61174();
    func_0x000107c615e8(uVar8);
    puVar4 = (undefined1 *)0x0;
    puVar9 = (undefined1 *)plVar7;
  }
  func_0x000107c615f0(puVar4);
  return puVar9;
}



/* Entry: 1002a5d00; end: 1002a5d1f;  */

void FUN_1002a5d00(void)

{
  func_0x000107c61168(&PTR_PTR_1127d81f0);
  return;
}



/* Entry: 1002a5d20; end: 1002a5da3; -[_TtC26SCCaptureDeviceManagerImpl36CaptureDeviceAvailabilityHandlerImpl isFrontDeviceAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002a5d20(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + _DAT_112da0a10);
  func_0x000107c61174();
  func_0x000107c49be8();
  uVar1 = (uint)uVar3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0xd000000000000065;
    func_0x000107c5fadc(0xd000000000000065,0x800000010ef81d40);
    func_0x000107c318e8();
    func_0x000107c61170(uVar2);
    uVar1 = (uint)uVar2;
  }
  FUN_1002a5da4();
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 1002a5da4; end: 1002a5fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002a5da4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000033;
  FUN_1000a9a18(0xd000000000000033,0x800000010ef82cb0);
  func_0x000107c61170(uVar1);
  FUN_1002a49d0();
  FUN_10006c804();
  func_0x000107c61574(uVar1);
  if (*(long *)(unaff_x20 + _DAT_112da0ed0) == 0) {
    lVar3 = 0;
    FUN_1000dbbe8(0,1);
    if (lVar3 == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
      func_0x000107c6157c(uVar1);
      FUN_100070bfc();
      func_0x000107c61574(uVar1);
      uVar1 = 0;
      goto LAB_1002a5e6c;
    }
    func_0x000107c615e8();
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112da0eb8);
  func_0x000107c6157c(uVar1);
  FUN_100070bfc();
  func_0x000107c61574(uVar1);
  uVar1 = 1;
LAB_1002a5e6c:
  func_0x000107c61428(param_1,auStack_60,0,0);
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar4);
  return uVar1;
}



/* Entry: 1002a5fdc; end: 1002a5feb;  */

undefined1  [16] FUN_1002a5fdc(void)

{
  return ZEXT816(0x11077dd00);
}



/* Entry: 1002a5fec; end: 1002a60ff;  */

void FUN_1002a5fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e362e8,&UNK_10da1ff30);
  puVar1 = &UNK_1104931e8;
  func_0x000107c613fc(&UNK_1104931e8,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(FUN_10045fb64,puVar1);
  return;
}



/* Entry: 1002a6100; end: 1002a611f;  */

void FUN_1002a6100(void)

{
  func_0x000107c61168(&PTR_PTR_112e36360);
  return;
}



/* Entry: 1002a6120; end: 1002a6157; -[SCManagedCaptureSessionImpl isMultiCam] */

uint FUN_1002a6120(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
  func_0x000107c61158(PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0);
  func_0x000107c6115c(uVar2,puVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1002a6158; end: 1002a6177;  */

void FUN_1002a6158(void)

{
  func_0x000107c61168(&PTR_PTR_112df8668);
  return;
}



/* Entry: 1002a6178; end: 1002a620f;  */

void FUN_1002a6178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e30938,&UNK_10da196b0);
  puVar1 = &UNK_11048b308;
  func_0x000107c613fc(&UNK_11048b308,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101e23780,puVar1);
  return;
}



/* Entry: 1002a6210; end: 1002a6263;  */

void FUN_1002a6210(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a6264; end: 1002a62e3;  */

void FUN_1002a6264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e36418,&UNK_10da20110);
  puVar1 = &UNK_1104932b0;
  func_0x000107c613fc(&UNK_1104932b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007608b4,puVar1);
  return;
}



/* Entry: 1002a62e4; end: 1002a6303;  */

void FUN_1002a62e4(void)

{
  func_0x000107c61168(&PTR_PTR_112e36490);
  return;
}



/* Entry: 1002a6304; end: 1002a631f;  */

void FUN_1002a6304(undefined8 param_1)

{
  FUN_1000285a8(0x112e36420,&UNK_10da20118);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100760858,param_1);
  return;
}



/* Entry: 1002a6320; end: 1002a63ef;  */

void FUN_1002a6320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a63f0; end: 1002a643b;  */

void FUN_1002a63f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a643c; end: 1002a6443; -[_TtC28SCFeatureStartupSignalerImpl26FeatureStartupSignalerImpl onCustomPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a643c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c6106c();
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  FUN_1002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1002a6444; end: 1002a64a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a6444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c6106c();
  uStack_40 = 0;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  uStack_38 = param_4;
  FUN_1002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1002a64a8; end: 1002a64ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a64a8(void)

{
  FUN_100087f24();
  return;
}



/* Entry: 1002a64f0; end: 1002a6593;  */

void FUN_1002a64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0f218,&UNK_10d9ea360);
  puVar1 = &UNK_110461840;
  func_0x000107c613fc(&UNK_110461840,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10048c878,puVar1);
  return;
}



/* Entry: 1002a6594; end: 1002a662b;  */

void FUN_1002a6594(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = param_2[2];
  bVar3 = *(byte *)(param_2 + 3);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      param_2 = (undefined8 *)0x0;
      uVar5 = 0x4000000000000000;
    }
    else {
      FUN_1000aa068();
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002a662c);
        (*pcVar4)();
      }
      uVar5 = 0x6000000000000001;
    }
  }
  else if (bVar3 == 2) {
    param_2 = (undefined8 *)0x0;
    uVar5 = 0x8000000000000002;
  }
  else {
    func_0x000107c61434(uVar6);
    param_2 = (undefined8 *)0x0;
    uVar5 = 0xa000000000000003;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}



/* Entry: 1002a662c; end: 1002a664b;  */

void FUN_1002a662c(void)

{
  func_0x000107c61168(&PTR_PTR_112e0f290);
  return;
}



/* Entry: 1002a664c; end: 1002a6653;  */

void FUN_1002a664c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_10006c804();
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_1002a6760(&uStack_60);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_100070bfc();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1002a6654; end: 1002a675f;  */

void FUN_1002a6654(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_10006c804();
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    FUN_1002a6760(&uStack_60);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    FUN_100070bfc();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1002a6760; end: 1002a6d0b;  */

/* WARNING: Possible PIC construction at 0x0001002a690c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a69a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a69b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002a69b8) */
/* WARNING: Removing unreachable block (ram,0x0001002a69a8) */
/* WARNING: Removing unreachable block (ram,0x0001002a6cf8) */
/* WARNING: Removing unreachable block (ram,0x0001002a6ce8) */
/* WARNING: Removing unreachable block (ram,0x0001002a6c50) */
/* WARNING: Removing unreachable block (ram,0x0001002a6d04) */
/* WARNING: Removing unreachable block (ram,0x0001002a6c40) */
/* WARNING: Removing unreachable block (ram,0x0001002a6c30) */
/* WARNING: Removing unreachable block (ram,0x0001002a6cc0) */
/* WARNING: Removing unreachable block (ram,0x0001002a6b0c) */
/* WARNING: Removing unreachable block (ram,0x0001002a6cd8) */
/* WARNING: Removing unreachable block (ram,0x0001002a6a64) */
/* WARNING: Removing unreachable block (ram,0x0001002a6b10) */
/* WARNING: Removing unreachable block (ram,0x0001002a6b14) */
/* WARNING: Removing unreachable block (ram,0x0001002a6a54) */
/* WARNING: Removing unreachable block (ram,0x0001002a6c60) */
/* WARNING: Removing unreachable block (ram,0x0001002a6910) */
/* WARNING: Removing unreachable block (ram,0x0001002a6b4c) */
/* WARNING: Removing unreachable block (ram,0x0001002a6b50) */
/* WARNING: Removing unreachable block (ram,0x0001002a6c8c) */

void FUN_1002a6760(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar15 = *(long *)(unaff_x20 + 0x30);
  lVar11 = *(long *)(lVar15 + 0x10);
  if (lVar11 != 0) {
    pcVar12 = (char *)(lVar15 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
    bVar5 = *(byte *)(unaff_x20 + 0x18);
    uVar17 = (ulong)bVar5;
    do {
      cVar6 = *pcVar12;
      cVar7 = pcVar12[1];
      if (bVar5 < 2) {
        if (bVar5 == 0) {
          if (cVar6 == '\x01') {
LAB_1002a67f4:
            uVar1 = (uint)((ulong)param_1[3] >> 0x20);
            uVar14 = uVar1 >> 0x1d;
            if (uVar1 >> 0x1d < 2) {
              if (uVar14 == 0) {
                if (cVar7 == '\0') {
LAB_1002a6844:
                  pcVar2 = *(code **)(pcVar12 + 8);
                  uVar10 = *(undefined8 *)(pcVar12 + 0x10);
                  func_0x000107c61434(lVar15);
                  func_0x000107c6157c(uVar10);
                  (*pcVar2)(uVar16,uVar17,param_1);
                  *(undefined8 *)(unaff_x20 + 0x10) = uVar16;
                  *(char *)(unaff_x20 + 0x18) = (char)uVar17;
                  uVar3 = *param_1;
                  uVar4 = param_1[1];
                  uVar18 = param_1[2];
                  uVar19 = param_1[3];
                  uVar13 = uVar19 >> 0x3d;
                  if (uVar13 == 2) {
                    lVar11 = unaff_x20 + 0x38;
                    func_0x000107c61618();
                    if (lVar11 == 0) goto code_r0x000107c6142c;
                    uVar16 = 0;
                    uVar10 = 1;
                  }
                  else {
                    if (uVar13 == 5) {
                      uVar17 = unaff_x20 + 0x38;
                      func_0x000107c61618();
                      if (uVar17 != 0) {
                        uVar13 = uVar17 + 0x40;
                        func_0x000107c61618();
                        if (uVar13 != 0) {
                          uVar9 = uVar13;
                          func_0x0001002a6ed0();
                          if (((uVar9 & 1) != 0) && ((uVar19 & 0xff) == 3)) {
                            uStack_80 = uVar3;
                            uStack_78 = uVar4;
                            uStack_70 = uVar18;
                            FUN_100075034(FUN_10038f940,auStack_90,PTR___sytN_11034f1b0 + 8);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar17);
                            return;
                          }
                          func_0x000107c615e8(uVar13);
                        }
                        goto code_r0x000107c61574;
                      }
                      goto code_r0x000107c6142c;
                    }
                    if (uVar13 != 3) {
                      uVar1 = (uint)uVar17 & 0xff;
                      if (uVar1 == 1 || (uVar17 & 0xff) == 0) {
                        if ((((uVar17 & 0xff) != 0) && (cVar6 != '\0')) && (uVar13 == 1)) {
                          lVar11 = unaff_x20 + 0x38;
                          func_0x000107c61618();
                          if (lVar11 == 0) goto code_r0x000107c6142c;
                          uVar17 = lVar11 + 0x40;
                          func_0x000107c61618();
                          if (uVar17 != 0) {
                            uVar13 = uVar17;
                            func_0x0001002a6ed0();
                            if ((uVar13 & 1) == 0) {
                              func_0x000107c615e8(uVar17);
                            }
                            else {
                              uStack_80 = uVar16;
                              uStack_78 = uVar4;
                              FUN_100075034(FUN_1008779e4,auStack_90,PTR___sytN_11034f1b0 + 8);
                              func_0x0001000c74f0(auStack_90);
                              FUN_1008779fc(auStack_90[0]);
                              uVar10 = auStack_90[0];
                            }
                          }
                        }
                        goto code_r0x000107c61574;
                      }
                      if (uVar1 == 2) {
                        if ((cVar6 == '\x02') || (uVar13 != 1)) goto code_r0x000107c61574;
                        lVar11 = unaff_x20 + 0x38;
                        func_0x000107c61618();
                        if (lVar11 == 0) goto code_r0x000107c6142c;
                        uVar17 = lVar11 + 0x40;
                        func_0x000107c61618();
                        if (uVar17 == 0) goto code_r0x000107c61574;
                        uVar13 = uVar17;
                        func_0x0001002a6ed0();
                        if ((uVar13 & 1) != 0) {
                          uStack_80 = uVar4;
                          uStack_78 = uVar3;
                          FUN_100075034(&UNK_1040b7260,auStack_90,PTR___sytN_11034f1b0 + 8);
                          func_0x0001000c74f0(auStack_90);
                          func_0x0001040b5900(auStack_90[0]);
                          uVar10 = auStack_90[0];
                          goto code_r0x000107c61574;
                        }
                      }
                      else {
                        if ((cVar6 == '\x03') || (uVar13 != 4)) goto code_r0x000107c61574;
                        lVar11 = unaff_x20 + 0x38;
                        func_0x000107c61618();
                        if (lVar11 == 0) goto code_r0x000107c6142c;
                        if ((uVar19 & 0xff) != 2) goto code_r0x000107c61574;
                        uVar17 = lVar11 + 0x40;
                        func_0x000107c61618();
                        if (uVar17 == 0) goto code_r0x000107c61574;
                        uVar13 = uVar17;
                        func_0x0001002a6ed0();
                        puVar8 = PTR___sytN_11034f1b0;
                        if ((uVar13 & 1) != 0) {
                          uStack_80 = uVar3;
                          uStack_78 = uVar4;
                          FUN_100075034(&UNK_100c6d850,auStack_90,PTR___sytN_11034f1b0 + 8);
                          uVar13 = *(ulong *)(lVar11 + 0x10) | 2;
                          *(ulong *)(lVar11 + 0x10) = uVar13;
                          if (uVar13 == 7) {
                            uVar13 = lVar11 + 0x40;
                            func_0x000107c61618();
                            if (uVar13 != 0) {
                              func_0x0001002a6ed0();
                              if ((uVar13 & 1) == 0) goto code_r0x000107c615e8;
                              FUN_100075034(&UNK_100c87308,0,puVar8 + 8);
                              func_0x0001000c74f0(auStack_90);
                              func_0x000100c8731c(auStack_90[0]);
                              goto code_r0x000107c61574;
                            }
                          }
                          func_0x000107c615e8(uVar17);
                          goto code_r0x000107c61574;
                        }
                      }
                      func_0x000107c615e8(uVar17);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR__swift_release_11034f4c0)(uVar10);
                      return;
                    }
                    uVar16 = param_1[4];
                    lVar11 = unaff_x20 + 0x38;
                    func_0x000107c61618();
                    if (lVar11 == 0) goto code_r0x000107c6142c;
                    uVar10 = 0;
                  }
                  FUN_1002a6d14(uVar3,uVar4,uVar18,uVar19,uVar16,uVar10);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar15);
                  return;
                }
              }
              else if (cVar7 == '\x01') goto LAB_1002a6844;
            }
            else if (uVar14 - 2 < 2) {
              if (cVar7 == '\x03') goto LAB_1002a6844;
            }
            else if (uVar14 == 4) {
              if (cVar7 == '\x02') goto LAB_1002a6844;
            }
            else if (cVar7 == '\x04') goto LAB_1002a6844;
          }
        }
        else if (cVar6 == '\0') goto LAB_1002a67f4;
      }
      else if (bVar5 == 2) {
        if (cVar6 == '\x02') goto LAB_1002a67f4;
      }
      else if (cVar6 == '\x03') goto LAB_1002a67f4;
      pcVar12 = pcVar12 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



/* Entry: 1002a6d0c; end: 1002a6d13;  */

void FUN_1002a6d0c(void)

{
  return;
}



/* Entry: 1002a6d14; end: 1002a7193;  */

/* WARNING: Possible PIC construction at 0x0001002a6e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002a6ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002a6e8c) */
/* WARNING: Removing unreachable block (ram,0x0001002a6ec8) */

void FUN_1002a6d14(long param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,char param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 auStack_80 [2];
  long lStack_70;
  undefined8 uStack_68;
  
  uVar2 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x0001002a6ed0();
    puVar1 = PTR___sytN_11034f1b0;
    if ((uVar3 & 1) != 0) {
      if (param_4 == '\x01') {
        lStack_70 = param_1;
        uStack_68 = param_2;
        FUN_100075034(FUN_1005b23e8,auStack_80,PTR___sytN_11034f1b0 + 8);
        if (param_6 != '\x01') {
          lStack_70 = param_1;
          uStack_68 = param_5;
          FUN_100075034(FUN_1005b24c0,auStack_80,puVar1 + 8);
        }
        if ((param_1 == 0x41) &&
           (uVar3 = *(ulong *)(unaff_x20 + 0x10) | 4, *(ulong *)(unaff_x20 + 0x10) = uVar3,
           uVar3 == 7)) {
          uVar3 = unaff_x20 + 0x40;
          func_0x000107c61618();
          if ((uVar3 != 0) && (func_0x0001002a6ed0(), (uVar3 & 1) != 0)) {
            FUN_100075034(&UNK_100c87308,0,puVar1 + 8);
            func_0x0001000c74f0(auStack_80);
            func_0x000100c8731c(auStack_80[0]);
          }
        }
      }
      else if (param_4 == '\0') {
        lStack_70 = param_1;
        uStack_68 = param_2;
        FUN_100075034(FUN_1002a72a0,auStack_80,PTR___sytN_11034f1b0 + 8);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 1002a7194; end: 1002a71df;  */

void FUN_1002a7194(undefined8 param_1)

{
  FUN_1000285a8(0x112e05f18,&UNK_10d9d92f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b74460,param_1);
  return;
}



/* Entry: 1002a71e0; end: 1002a729f;  */

void FUN_1002a71e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  puVar1 = auStack_58;
  func_0x000107c61428(lVar4 + 0x70,puVar1,0x21,0);
  lVar3 = *(long *)(lVar4 + 0x90);
  if (*(long *)(lVar3 + 0x10) != 0) {
    FUN_100086b70(param_2);
    if (((ulong)puVar1 & 1) != 0) goto LAB_1002a727c;
    lVar3 = *(long *)(lVar4 + 0x90);
  }
  func_0x000107c61558(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x90);
  FUN_1002a72b8(param_3,param_2,lVar3,0x11305f7d8,&UNK_10dcd4bc0,FUN_1002a741c);
  *(undefined8 *)(lVar4 + 0x90) = uVar2;
LAB_1002a727c:
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1002a72a0; end: 1002a72b7;  */

void FUN_1002a72a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002a71e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1002a72b8; end: 1002a73fb;  */

void FUN_1002a72b8(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100086b70();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a7380);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_100086c4c(lVar5,param_3,param_4,param_5);
    uVar2 = param_2;
    FUN_100086b70();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      (*param_6)(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a7364);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1000898b0(param_4,param_5);
    lVar5 = *unaff_x20;
    goto joined_r0x0001002a739c;
  }
  lVar5 = *unaff_x20;
joined_r0x0001002a739c:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a73fc);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 1002a73fc; end: 1002a741b;  */

void FUN_1002a73fc(void)

{
  func_0x000107c61168(&PTR_PTR_112914318);
  return;
}



/* Entry: 1002a741c; end: 1002a742f;  */

void FUN_1002a741c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110743208;
  if (lRam000000011305f400 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011305f400 = param_1;
  }
  return;
}



/* Entry: 1002a7430; end: 1002a7687;  */

void FUN_1002a7430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e01a18,&UNK_10d9d3020);
  puVar1 = &UNK_110445d58;
  func_0x000107c613fc(&UNK_110445d58,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_25;
  *(undefined8 *)(puVar1 + 0x18) = param_20;
  *(undefined8 *)(puVar1 + 0x20) = param_15;
  *(undefined8 *)(puVar1 + 0x28) = param_14;
  *(undefined8 *)(puVar1 + 0x30) = param_13;
  *(undefined8 *)(puVar1 + 0x38) = param_12;
  *(undefined8 *)(puVar1 + 0x40) = param_23;
  *(undefined8 *)(puVar1 + 0x48) = param_1;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_2;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_19;
  *(undefined8 *)(puVar1 + 0x80) = param_18;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_24;
  *(undefined8 *)(puVar1 + 0x98) = param_8;
  *(undefined8 *)(puVar1 + 0xa0) = param_4;
  *(undefined8 *)(puVar1 + 0xa8) = param_22;
  *(undefined8 *)(puVar1 + 0xb0) = param_27;
  *(undefined8 *)(puVar1 + 0xb8) = param_21;
  *(undefined8 *)(puVar1 + 0xc0) = param_5;
  *(undefined8 *)(puVar1 + 200) = param_11;
  *(undefined8 *)(puVar1 + 0xd0) = param_16;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_3;
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10074ffd8,puVar1);
  return;
}



/* Entry: 1002a7688; end: 1002a76bf;  */

void FUN_1002a7688(undefined8 param_1)

{
  if (lRam000000011306d6d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7f9fd4);
  return;
}



/* Entry: 1002a76c0; end: 1002a7763;  */

void FUN_1002a76c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_50 = &UNK_10dce9530;
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dce9548;
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dce9560;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1002a7764; end: 1002a784f;  */

void FUN_1002a7764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e02588,&UNK_10d9d4410);
  puVar1 = &UNK_110446a80;
  func_0x000107c613fc(&UNK_110446a80,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b313d4,puVar1);
  return;
}



/* Entry: 1002a7850; end: 1002a7853;  */

void FUN_1002a7850(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a7854; end: 1002a7873;  */

void FUN_1002a7854(void)

{
  func_0x000107c61168(&PTR_PTR_11299a048);
  return;
}



/* Entry: 1002a7874; end: 1002a7883;  */

undefined1  [16] FUN_1002a7874(void)

{
  return ZEXT816(0x1106dac20);
}



/* Entry: 1002a7884; end: 1002a794b;  */

void FUN_1002a7884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0c398,&UNK_10d9e6230);
  puVar1 = &UNK_11045e118;
  func_0x000107c613fc(&UNK_11045e118,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101c59e64,puVar1);
  return;
}



/* Entry: 1002a794c; end: 1002a794f;  */

void FUN_1002a794c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a7950; end: 1002a799b;  */

void FUN_1002a7950(undefined8 param_1)

{
  FUN_1000285a8(0x112e40990,&UNK_10da2ec90);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100b7c004,param_1);
  return;
}


