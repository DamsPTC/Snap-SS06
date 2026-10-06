/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c14c18; end: 108c14ddb;  */

void FUN_108c14c18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c2626c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c07be00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c074ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bb3f8;
    _objc_alloc(PTR_PTR_1126bb3f8);
    lVar1 = param_1;
    func_0x00010c262580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c2625a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c2626c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04f5a0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c14ddc; end: 108c14dfb;  */

void FUN_108c14ddc(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc_init(PTR_PTR_1126bb3e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c14dfc; end: 108c153d3;  */

void FUN_108c14dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1c0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1c000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1af40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf147e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf933a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x000100c3702c(uVar1,uVar3,uVar4,uVar5,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x000100c37268(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar3 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf85300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6e0();
  uVar6 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = param_2;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  uStack_d0 = param_2;
  if ((int)puVar11 == 0) {
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102020();
  uVar12 = param_2;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010c2427e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x000100c38020();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x000100c3825c();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_2;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_2;
  func_0x000100c38598();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x000100c38720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bba0();
  func_0x00010c05c0e0();
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uStack_d0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c153d4; end: 108c1594f;  */

void FUN_108c153d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_b8;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf1c0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf1c000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf1af40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf147e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf933a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x000100c3702c(uVar1,uVar3,uVar4,uVar5,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_108c14a3c(0,param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar3 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf85300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6e0();
  uVar6 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = param_1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  uStack_b8 = param_1;
  if ((int)puVar11 == 0) {
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102020();
  uVar12 = param_1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c2427e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x000100c38020();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x000100c3825c();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_1;
  func_0x000100c38598();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bba0();
  func_0x00010c05c0e0();
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uStack_b8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c15950; end: 108c15993;  */

void FUN_108c15950(undefined8 param_1,undefined8 param_2)

{
  FUN_108c14dfc(0,param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c15994; end: 108c15d5b;  */

void FUN_108c15994(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 uStack_1e8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  puVar9 = auStack_250;
  _objc_retain();
  func_0x00010b656760(auStack_250,0);
  uVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_248;
  auStack_250[0] = 0;
  uStack_248 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_240;
  auStack_250[0] = 0;
  uStack_240 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_108;
  auStack_250[0] = 0;
  uStack_108 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_100;
  auStack_250[0] = 0;
  uStack_100 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_238;
  auStack_250[0] = 0;
  uStack_238 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010c07a6c0();
  auStack_250[0] = 0;
  uStack_230 = (undefined1)uVar2;
  uVar1 = param_1;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_1e8;
  auStack_250[0] = 0;
  uStack_1e8 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010bf1acc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1c0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf1c000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf1af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1af40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf147e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf933a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x000100c3702c(uVar2,uVar1,uVar3,uVar4,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6570f8(auStack_250,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = uStack_110;
  auStack_250[0] = 0;
  uStack_110 = uVar1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010c2427e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100c38020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b6572ec(auStack_250,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010b656cf8(auStack_250);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_250);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108c15d5c; end: 108c15ee3;  */

void FUN_108c15d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_240 [496];
  
  puVar5 = auStack_240;
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  FUN_108c15994(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b656760(auStack_240,uVar1);
  uVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    uVar2 = param_2;
    FUN_108c14c18(param_2,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b657278(auStack_240,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010b656cf8(auStack_240);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c0bf38(auStack_240);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c15ee4; end: 108c1626f;  */

void FUN_108c15ee4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf85300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6e0();
  uVar5 = param_1;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000107c31908();
  uVar7 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x000100c3702c(uVar7,uVar8,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_108c14ddc();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010c2427e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x000100c38020();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010c06bb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c05c0e0();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c16270; end: 108c167b3;  */

void FUN_108c16270(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_b0;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c31908();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf1c0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf1c000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf1af40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf147e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf933a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x000100c3702c(uVar1,uVar3,uVar4,uVar5,uVar7,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar10 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf85300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6e0();
  uVar5 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = param_1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  uStack_b0 = param_1;
  if ((int)puVar11 == 0) {
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = param_1;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102020();
  uVar8 = param_1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c2427e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x000100c38020();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x000100c3825c();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x000100c38598();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bba0();
  func_0x00010c05c0e0();
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uStack_b0);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108c167b4; end: 108c16b73;  */

void FUN_108c167b4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = (undefined *)0x0;
    if (puVar3 == (undefined *)0x0) goto LAB_108c16a44;
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  puVar3 = param_1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = param_1;
  func_0x00010bf1c000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,puVar5);
  if (((ulong)puVar2 & 1) == 0) {
    uStack_78 = param_1;
    func_0x00010bf1c000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_78 = (undefined *)0x0;
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = param_1;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar7,param_2,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    uStack_80 = param_1;
    func_0x00010bf1af00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_80 = (undefined *)0x0;
  }
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = param_1;
  func_0x00010bf1af20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf14660();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar12;
  func_0x00010c078c00(puVar12,param_2,puVar9);
  if (((ulong)puVar10 & 1) == 0) {
    uStack_a0 = param_1;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = uStack_a0;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  puVar11 = param_1;
  func_0x00010bfd4a80();
  if ((int)puVar11 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar12 = param_1;
    func_0x00010bf1ad40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bff7be0(puVar1,param_2,puVar3,puVar4,uStack_78,uStack_80,puVar13,puVar14);
  if ((int)puVar11 != 0) {
    _objc_release(puVar14);
    _objc_release(puVar12);
  }
  if (((ulong)puVar10 & 1) == 0) {
    _objc_release(puVar13);
    _objc_release(uStack_a0);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (((ulong)puVar7 & 1) == 0) {
    _objc_release(uStack_80);
  }
  _objc_release(puVar6);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(uStack_78);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_108c16a44:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c16b74; end: 108c16bd7;  */

void FUN_108c16b74(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000107c31908(param_1,&PTR___NSConcreteGlobalBlock_110ab88b0);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c16bd8; end: 108c16cc3;  */

void FUN_108c16bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ba270;
  _objc_alloc(PTR_PTR_1126ba270);
  uVar2 = param_2;
  func_0x00010bf33560(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9c800(param_2);
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b4ca0();
  func_0x00010bffd140((double)(long)puVar4 / 1000.0,puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c16cc4; end: 108c16d6f;  */

void FUN_108c16cc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  if (((param_1 == 0) || (lVar1 = param_1, func_0x00010c0d0e40(), (int)lVar1 < 1)) ||
     (lVar1 = param_1, func_0x00010bf65700(), (int)lVar1 < 1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d78b8;
    _objc_alloc(PTR_PTR_1126d78b8);
    lVar1 = param_1;
    func_0x00010c0d0e40(param_1);
    lVar2 = param_1;
    func_0x00010bf65700(param_1);
    func_0x00010c02c8c0(puVar3,param_2,(uint)lVar1 & 0xff,(uint)lVar2 & 0xff);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c16d70; end: 108c1700b;  */

void FUN_108c16d70(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010beef420();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar5 = param_1;
    func_0x00010bfd3a80();
    _objc_release(uVar1);
    if ((uVar5 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010beef420();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bfda2a0();
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = uVar1;
        func_0x00010c0fa780();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c1303a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c08fa60();
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar7 = uVar1;
          func_0x00010c0fa780(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c1303a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = uVar1;
      func_0x00010bfda2a0();
      if ((int)uVar2 != 0) {
        uVar2 = uVar1;
        func_0x00010c22c660(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe2540();
        _objc_release(uVar2);
      }
      uVar2 = uVar1;
      func_0x00010c0fa780();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf0b4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c08fa60();
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar4 = uVar1;
        func_0x00010c0fa780(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010bf0b4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126db2d0;
      _objc_alloc(PTR_PTR_1126db2d0);
      func_0x00010c0357e0();
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar1);
      goto LAB_108c16f3c;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_108c16f3c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c1700c; end: 108c171e3;  */

void FUN_108c1700c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2427e0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 = param_1, func_0x00010bfdc460(), (uVar2 & 1) == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c117380(uVar1);
    uVar4 = uVar1;
    func_0x00010c1173c0(uVar1);
    uVar5 = uVar1;
    func_0x00010c116600(uVar1);
    uVar6 = uVar1;
    func_0x00010bf699c0(uVar1);
    uVar9 = uVar1;
    func_0x00010bfdaaa0();
    if (((int)uVar9 == 0) || (uVar9 = uVar2, func_0x00010c0b4660(), (int)uVar9 != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar2;
      func_0x00010c0b4540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    uVar7 = uVar1;
    func_0x00010c280020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f2e0(puVar8,param_2,(int)uVar3 == 3,uVar7,uVar3,uVar4,0 < (int)uVar5,uVar6,0);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108c171e4; end: 108c177f3;  */

void FUN_108c171e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c08f840(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar2 & 1) == 0) {
    uStack_80 = param_2;
    func_0x00010c08f840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_80 = 0;
  }
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c0d3e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if ((int)puVar2 == 0) {
    uVar3 = param_2;
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uStack_80);
    uVar3 = uStack_80;
  }
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfb9b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_108c16b74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  FUN_108c167b4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_108c177f4(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar7 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_108c17c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar9 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar2 & 1) == 0) {
    uStack_c8 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_c8 = 0;
  }
  uVar10 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  FUN_108c17c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar12 = param_2;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar13 & 1) == 0) {
    uStack_d0 = param_2;
    func_0x00010c105520();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_d0 = 0;
  }
  uVar14 = param_2;
  FUN_108c1700c();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  FUN_108c16d70();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar16 = param_2;
  func_0x00010c105040(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar17 & 1) == 0) {
    uVar20 = param_2;
    func_0x00010c105040();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar20 = 0;
  }
  uVar18 = param_2;
  FUN_108c17c9c();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_2;
  FUN_108c17d90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar6);
  _objc_release(uVar19);
  _objc_release(uVar18);
  if (((ulong)puVar17 & 1) == 0) {
    _objc_release(uVar20);
  }
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  if (((ulong)puVar13 & 1) == 0) {
    _objc_release(uStack_d0);
  }
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(uStack_c8);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c177f4; end: 108c17bff;  */

void FUN_108c177f4(undefined8 param_1,undefined *param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  double dStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  double dStack_70;
  undefined2 uStack_63;
  undefined1 uStack_61;
  
  puVar6 = auStack_b0;
  _objc_retain();
  func_0x000100c376d4(auStack_b0,0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010befce20(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b4ca0();
  dStack_90 = (double)(long)puVar4 / 1000.0;
  auStack_b0[0] = 0;
  _objc_release(puVar3);
  puVar3 = param_2;
  func_0x00010bf2caa0();
  auStack_b0[0] = 0;
  uStack_88 = SUB81(puVar3,0);
  puVar3 = param_2;
  func_0x00010c07fc80();
  uStack_87 = SUB81(puVar3,0);
  auStack_b0[0] = 0;
  puVar3 = param_2;
  uStack_80 = param_1;
  func_0x00010c080540();
  auStack_b0[0] = 0;
  uStack_78 = SUB81(puVar3,0);
  puVar4 = param_2;
  func_0x00010c06bb80();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  auStack_b0[0] = 0;
  uStack_77 = SUB81(puVar4,0);
  func_0x00010c0996a0(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b4ca0();
  dStack_70 = (double)(long)puVar4 / 1000.0;
  auStack_b0[0] = 0;
  _objc_release(puVar3);
  puVar4 = param_2;
  func_0x00010bfb83c0();
  puVar3 = PTR_PTR_1126bb6d0;
  iVar2 = (int)puVar4;
  if (iVar2 == 2) {
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010bf1a5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_108c16cc4();
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)plVar5 = 0;
    func_0x000100c37a74(&uStack_63,puVar4);
    *(undefined2 *)((long)plVar5 + 1) = uStack_63;
    *(undefined1 *)((long)plVar5 + 3) = uStack_61;
    _objc_release(puVar4);
    _objc_release(puVar3);
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    *(undefined1 *)plVar5 = 0;
    *(undefined1 *)(plVar5 + 1) = param_3;
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c13ff20(param_2);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0b4ca0();
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = (long)((double)(long)puVar4 / 1000.0);
    _objc_release(puVar3);
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010c06dcc0();
    *(undefined1 *)plVar5 = 0;
    *(char *)(plVar5 + 3) = (char)puVar3;
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010c06d440();
    *(undefined1 *)plVar5 = 0;
    *(char *)((long)plVar5 + 0x19) = (char)puVar3;
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010bf28e20();
    *(undefined1 *)plVar5 = 0;
    *(int *)((long)plVar5 + 0x1c) = (int)puVar3;
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010bf8a660();
    *(undefined1 *)plVar5 = 0;
    *(int *)((long)plVar5 + 0x2c) = (int)puVar3;
    plVar5 = &lStack_a8;
    func_0x000100c378bc();
    puVar3 = param_2;
    func_0x00010bf2db00();
    *(undefined1 *)plVar5 = 0;
    *(char *)(plVar5 + 6) = (char)puVar3;
  }
  else {
    if (iVar2 == 3) {
      puVar4 = PTR_PTR_1126db228;
      _objc_opt_new(PTR_PTR_1126db228);
      func_0x00010c0f7600(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b656414(auStack_b0,puVar3);
    }
    else {
      if (iVar2 != 4) goto LAB_108c17b14;
      plVar5 = &lStack_a8;
      func_0x00010b656340();
      puVar4 = param_2;
      func_0x00010bf1a5c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      FUN_108c16cc4();
      _objc_retainAutoreleasedReturnValue();
      *(undefined1 *)plVar5 = 0;
      func_0x000100c37a74(&uStack_63,puVar3);
      *(undefined2 *)((long)plVar5 + 1) = uStack_63;
      *(undefined1 *)((long)plVar5 + 3) = uStack_61;
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
LAB_108c17b14:
  func_0x000100c37c3c(auStack_b0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_98;
  lStack_98 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = lStack_a0;
  lStack_a0 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = lStack_a8;
  lStack_a8 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c17c00; end: 108c17c9b;  */

void FUN_108c17c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c17c9c; end: 108c17d8f;  */

void FUN_108c17c9c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c117320();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) && (uVar2 = param_1, func_0x00010c07a5c0(), (uVar2 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c077ac0();
    if ((uVar1 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_108c17d38;
    }
  }
  else {
    _objc_release(uVar1);
  }
  puVar4 = PTR_PTR_1126db2d8;
  _objc_alloc(PTR_PTR_1126db2d8);
  uVar1 = param_1;
  func_0x00010c117320(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c07a5c0(param_1);
  uVar3 = param_1;
  func_0x00010c077ac0(param_1);
  func_0x00010c03b280(puVar4,param_2,uVar1,uVar2,uVar3);
  _objc_release(uVar1);
LAB_108c17d38:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c17d90; end: 108c17e5f;  */

void FUN_108c17d90(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfdb640();
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126db2e0;
    _objc_alloc(PTR_PTR_1126db2e0);
    uVar1 = param_1;
    func_0x00010c149ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_108c17c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c041480(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c17e60; end: 108c17e83;  */

void FUN_108c17e60(undefined8 param_1,undefined8 param_2)

{
  FUN_108c171e4(0,param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c17e84; end: 108c1843b;  */

void FUN_108c17e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  _objc_retain();
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c08f840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar2 & 1) == 0) {
    uVar20 = param_1;
    func_0x00010c08f840();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar20 = 0;
  }
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0d3e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if ((int)puVar2 == 0) {
    uVar3 = param_1;
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar20);
    uVar3 = uVar20;
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfb9b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_108c16b74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_108c167b4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar6 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_108c17c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar8 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar2 & 1) == 0) {
    uStack_a8 = param_1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_a8 = 0;
  }
  uVar9 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  FUN_108c17c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar11 = param_1;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar12 & 1) == 0) {
    uStack_b0 = param_1;
    func_0x00010c105520();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_b0 = 0;
  }
  uVar13 = param_1;
  FUN_108c1700c();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  FUN_108c16d70();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar15 = param_1;
  func_0x00010c105040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar16 & 1) == 0) {
    uVar19 = param_1;
    func_0x00010c105040();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar19 = 0;
  }
  uVar17 = param_1;
  FUN_108c17c9c();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_1;
  FUN_108c17d90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar5);
  _objc_release(uVar18);
  _objc_release(uVar17);
  if (((ulong)puVar16 & 1) == 0) {
    _objc_release(uVar19);
  }
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  if (((ulong)puVar12 & 1) == 0) {
    _objc_release(uStack_b0);
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(uStack_a8);
  }
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar20);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c1843c; end: 108c18513;  */

void FUN_108c1843c(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c18514; end: 108c187e7;  */

undefined8 * FUN_108c18514(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  func_0x000107c2a7fc();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  func_0x000100c43338();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x000107c310cc(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
  return puVar7;
}



/* Entry: 108c187e8; end: 108c18abb;  */

undefined8 * FUN_108c187e8(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar4 = &uStack_181;
  func_0x000107c2a7fc();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  FUN_108c2e2f8();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x000107c310cc(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
  return puVar7;
}



/* Entry: 108c18abc; end: 108c18c4b;  */

void FUN_108c18abc(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_9dc;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 uStack_9c8;
  undefined **ppuStack_9c0;
  undefined4 uStack_9b8;
  undefined4 uStack_9a8;
  undefined **ppuStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long *plStack_960;
  long *plStack_958;
  undefined1 uStack_949;
  undefined **ppuStack_948;
  undefined4 uStack_940;
  undefined2 uStack_930;
  byte bStack_92e;
  byte bStack_92d;
  undefined1 *puStack_910;
  undefined ***pppuStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  undefined1 uStack_8d1;
  undefined **ppuStack_8d0;
  undefined4 uStack_8c8;
  undefined1 uStack_8b8;
  byte bStack_8b7;
  byte bStack_8b6;
  byte bStack_8b5;
  undefined1 *puStack_898;
  undefined8 uStack_890;
  undefined *puStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  long *plStack_870;
  long *plStack_868;
  undefined1 uStack_859;
  undefined **ppuStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 uStack_840;
  byte bStack_83f;
  byte bStack_83e;
  undefined1 uStack_83d;
  undefined1 *puStack_820;
  undefined8 uStack_818;
  long lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long *plStack_7f8;
  long *plStack_7f0;
  undefined1 uStack_7e1;
  undefined **ppuStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined1 uStack_762;
  undefined1 uStack_761;
  undefined **ppuStack_760;
  undefined4 uStack_758;
  undefined1 uStack_748;
  byte bStack_747;
  byte bStack_746;
  byte bStack_745;
  undefined8 **ppuStack_728;
  undefined1 *puStack_720;
  long lStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined **ppuStack_6f0;
  undefined4 uStack_6e8;
  undefined1 uStack_6d8;
  byte bStack_6d7;
  byte bStack_6d6;
  byte bStack_6d5;
  undefined ***pppuStack_6b8;
  undefined ***pppuStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long *plStack_690;
  long *plStack_688;
  undefined **ppuStack_680;
  undefined4 uStack_678;
  undefined1 uStack_668;
  byte bStack_667;
  byte bStack_666;
  byte bStack_665;
  undefined ***pppuStack_648;
  undefined ***pppuStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined **ppuStack_610;
  undefined4 uStack_608;
  undefined1 uStack_5f8;
  byte bStack_5f7;
  byte bStack_5f6;
  byte bStack_5f5;
  undefined ***pppuStack_5d8;
  undefined ***pppuStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  undefined **ppuStack_5a0;
  undefined4 uStack_598;
  short sStack_588;
  byte bStack_586;
  byte bStack_585;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined **ppuStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined **ppuStack_4c8;
  undefined ***pppuStack_4c0;
  undefined8 uStack_4b8;
  undefined ***pppuStack_4b0;
  undefined *puStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 **ppuStack_490;
  code *pcStack_488;
  long lStack_478;
  undefined4 uStack_470;
  undefined1 uStack_469;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined4 uStack_428;
  undefined1 uStack_418;
  byte bStack_417;
  byte bStack_416;
  undefined1 uStack_415;
  undefined1 *puStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined1 uStack_3b9;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a0;
  byte bStack_39f;
  byte bStack_39e;
  undefined1 uStack_39d;
  undefined1 *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined1 uStack_341;
  undefined **ppuStack_340;
  undefined4 uStack_338;
  undefined1 uStack_328;
  byte bStack_327;
  byte bStack_326;
  byte bStack_325;
  undefined1 *puStack_308;
  undefined ***pppuStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined **ppuStack_2d0;
  undefined4 uStack_2c8;
  undefined1 uStack_2b8;
  byte bStack_2b7;
  byte bStack_2b6;
  byte bStack_2b5;
  undefined ***pppuStack_298;
  undefined ***pppuStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined4 uStack_21c;
  undefined *puStack_218;
  undefined8 uStack_210;
  long alStack_208 [3];
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined4 uStack_190;
  undefined1 uStack_189;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_151;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined4 uStack_10c;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_b9;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    ppuStack_80 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_80,param_1);
  }
  puVar4 = &uStack_81;
  FUN_108c2e2f8();
  puVar5 = &uStack_b9;
  FUN_108c2db04();
  uStack_48 = *(undefined8 *)(puVar5 + 0x10);
  uStack_40 = puVar5[0x19];
  uStack_3f = puVar5[0x18];
  uStack_30 = *(undefined8 *)(puVar5 + 0x28);
  uStack_3c = 1;
  puStack_38 = &UNK_100c43d7c;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_b8 = 0;
  func_0x000100c435d0(&lStack_b8,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&lStack_a0,&lStack_b8);
  uStack_c0 = 0;
  pppuVar6 = &ppuStack_80;
  func_0x000107c310cc(pppuVar6,puVar4,&lStack_a0,&uStack_c0);
  uVar15 = SUB84(puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x000104d96620(&ppuStack_80);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_c8 = FUN_108c18c4c;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar7 == 0) {
      uStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      ppuStack_150 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_150,lVar7);
    }
    puVar4 = &uStack_151;
    FUN_108c2e2f8();
    puVar5 = &uStack_189;
    FUN_108c2db04();
    uStack_118 = *(undefined8 *)(puVar5 + 0x10);
    uStack_110 = puVar5[0x19];
    uStack_10f = puVar5[0x18];
    uStack_100 = *(undefined8 *)(puVar5 + 0x28);
    uStack_10c = 1;
    puStack_108 = &UNK_100c43d7c;
    lStack_180 = 0;
    uStack_178 = 0;
    lStack_188 = 0;
    func_0x000100c435d0(&lStack_188,&uStack_118,&lStack_f8,1);
    func_0x000100c436b8(&lStack_170,&lStack_188);
    pppuVar6 = &ppuStack_150;
    uStack_190 = uVar15;
    func_0x000107c310cc(pppuVar6,puVar4,&lStack_170,&uStack_190);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_170 != 0) {
      lStack_168 = lStack_170;
      __ZdlPv();
    }
    if (lStack_188 != 0) {
      lStack_180 = lStack_188;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_128);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    lVar8 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      func_0x000104d96620(&ppuStack_150);
      _objc_release(lVar7);
      __Unwind_Resume();
      pcStack_198 = FUN_108c18de8;
      alStack_208[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_1a0 = &puStack_d0;
      _objc_retain();
      lStack_478 = lVar8;
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar8 == 0) {
        uStack_230 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_258 = 0;
        ppuStack_260 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_260,lVar8);
      }
      puVar4 = &uStack_341;
      FUN_108c2e2f8();
      puVar5 = &uStack_3b9;
      FUN_108c2dcd4();
      bStack_39f = puVar5[0x19];
      bStack_39e = puVar5[0x1a];
      uStack_3b0 = 0;
      uStack_3a0 = 0;
      uStack_39d = 1;
      ppuStack_3b8 = &PTR_SUB_1108629c8;
      lStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      plStack_350 = (long *)0x0;
      plStack_358 = (long *)0x0;
      bVar2 = puVar4[0x19] | bStack_39f;
      bVar3 = puVar4[0x1a] | bStack_39e;
      bVar1 = puVar4[0x1b];
      uStack_338 = 4;
      uStack_328 = 0;
      ppuStack_340 = &PTR_SUB_1108629c8;
      pppuStack_300 = &ppuStack_3b8;
      plStack_2d8 = (long *)0x0;
      uStack_2f0 = 0;
      lStack_2f8 = 0;
      plStack_2e0 = (long *)0x0;
      uStack_2e8 = 0;
      puVar9 = &uStack_431;
      puStack_380 = puVar5;
      bStack_327 = bVar2;
      bStack_326 = bVar3;
      bStack_325 = bVar1;
      puStack_308 = puVar4;
      func_0x000107c2a7fc();
      bStack_417 = puVar9[0x19];
      bStack_416 = puVar9[0x1a];
      uStack_428 = 0;
      uStack_418 = 0;
      uStack_415 = 1;
      ppuStack_430 = &PTR_SUB_1108629c8;
      lStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      plStack_3c8 = (long *)0x0;
      plStack_3d0 = (long *)0x0;
      bStack_2b7 = bStack_417 | bVar2;
      bStack_2b6 = bStack_416 | bVar3;
      uStack_2c8 = 4;
      uStack_2b8 = 0;
      ppuStack_2d0 = &PTR_SUB_1108629c8;
      pppuStack_298 = &ppuStack_340;
      pppuStack_290 = &ppuStack_430;
      plStack_268 = (long *)0x0;
      plStack_270 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_288 = 0;
      puVar4 = &uStack_469;
      puStack_3f8 = puVar9;
      bStack_2b5 = bVar1;
      FUN_108c2e074();
      uStack_228 = *(undefined8 *)(puVar4 + 0x10);
      uStack_220 = puVar4[0x19];
      uStack_21f = puVar4[0x18];
      uStack_210 = *(undefined8 *)(puVar4 + 0x28);
      uStack_21c = 1;
      puStack_218 = &UNK_100c43d7c;
      lStack_460 = 0;
      uStack_458 = 0;
      lStack_468 = 0;
      func_0x000100c435d0(&lStack_468,&uStack_228,alStack_208,1);
      func_0x000100c436b8(&lStack_450,&lStack_468);
      uStack_470 = 0;
      pppuVar6 = &ppuStack_260;
      pppuVar11 = &ppuStack_2d0;
      plVar17 = &lStack_450;
      func_0x000107c310cc(pppuVar6,pppuVar11,plVar17,&uStack_470);
      uVar15 = SUB84(pppuVar11,0);
      iVar16 = (int)plVar17;
      _objc_retainAutoreleasedReturnValue();
      if (lStack_450 != 0) {
        lStack_448 = lStack_450;
        __ZdlPv();
      }
      lVar7 = lStack_478;
      if (lStack_468 != 0) {
        lStack_460 = lStack_468;
        __ZdlPv();
      }
      plVar17 = plStack_268;
      ppuStack_2d0 = &PTR_SUB_1108629c8;
      plStack_268 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_270;
      plStack_270 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_288 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_3c8;
      ppuStack_430 = &PTR_SUB_1108629c8;
      plStack_3c8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3d0;
      plStack_3d0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3e8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_2d8;
      ppuStack_340 = &PTR_SUB_1108629c8;
      plStack_2d8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_2e0;
      plStack_2e0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_2f8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_350;
      ppuStack_3b8 = &PTR_SUB_1108629c8;
      plStack_350 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_358;
      plStack_358 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_370 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_238);
      _objc_release(uStack_248);
      _objc_release(uStack_250);
      lVar8 = lVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_208[0]) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_2d0);
        func_0x000105007830(&ppuStack_430);
        func_0x000105007830(&ppuStack_340);
        func_0x000105007830(&ppuStack_3b8);
        func_0x000104d96620(&ppuStack_260);
        _objc_release(lStack_478);
        lVar10 = lVar8;
        __Unwind_Resume();
        ppuStack_4c8 = &PTR_SUB_1108629c8;
        uStack_4b8 = 1;
        puStack_4a8 = &UNK_1108629b8;
        lStack_498 = lVar7;
        pcStack_488 = FUN_108c191cc;
        uStack_4e0 = (ulong)bVar1;
        uStack_4d8 = (ulong)bVar3;
        uStack_4d0 = (ulong)bVar2;
        pppuStack_4c0 = &ppuStack_3b8;
        pppuStack_4b0 = &ppuStack_2d0;
        lStack_4a0 = lVar8;
        ppuStack_490 = &ppuStack_1a0;
        _objc_retain();
        pppuStack_5d8 = &ppuStack_680;
        if (iVar16 == 0) {
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (lVar10 == 0) {
            uStack_7b0 = 0;
            uStack_7b8 = 0;
            uStack_7c0 = 0;
            uStack_7c8 = 0;
            uStack_7d0 = 0;
            uStack_7d8 = 0;
            ppuStack_7e0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_7e0,lVar10);
          }
          pppuVar6 = &ppuStack_948;
          FUN_108c2e2f8();
          pppuVar11 = &ppuStack_9c0;
          FUN_108c2d860();
          bStack_665 = *(byte *)((long)pppuVar6 + 0x1b) & *(byte *)((long)pppuVar11 + 0x1b);
          bStack_667 = (*(byte *)((long)pppuVar6 + 0x19) | *(byte *)((long)pppuVar11 + 0x19)) & 1;
          bStack_666 = (*(byte *)((long)pppuVar6 + 0x1a) | *(byte *)((long)pppuVar11 + 0x1a)) & 1;
          uStack_678 = 4;
          uStack_668 = 0;
          ppuStack_680 = &PTR_SUB_1108629c8;
          plStack_618 = (long *)0x0;
          plStack_620 = (long *)0x0;
          uStack_628 = 0;
          uStack_630 = 0;
          lStack_638 = 0;
          pppuVar12 = &ppuStack_530;
          pppuStack_648 = pppuVar6;
          pppuStack_640 = pppuVar11;
          FUN_108c2dcd4();
          bStack_6d7 = *(byte *)((long)pppuVar12 + 0x19);
          bStack_6d6 = *(byte *)((long)pppuVar12 + 0x1a);
          uStack_6e8 = 0;
          uStack_6d8 = 0;
          bStack_6d5 = 1;
          ppuStack_6f0 = &PTR_SUB_1108629c8;
          lStack_6a8 = 0;
          pppuStack_6b0 = (undefined ***)0x0;
          uStack_698 = 0;
          uStack_6a0 = 0;
          plStack_688 = (long *)0x0;
          plStack_690 = (long *)0x0;
          bStack_5f7 = bStack_667 | bStack_6d7;
          bStack_5f6 = bStack_666 | bStack_6d6;
          uStack_608 = 4;
          uStack_5f8 = 0;
          bStack_5f5 = bStack_665;
          ppuStack_610 = &PTR_SUB_1108629c8;
          pppuStack_5d0 = &ppuStack_6f0;
          uStack_5c0 = 0;
          lStack_5c8 = 0;
          plStack_5b0 = (long *)0x0;
          uStack_5b8 = 0;
          plStack_5a8 = (long *)0x0;
          ppuVar13 = &puStack_9d8;
          pppuStack_6b8 = pppuVar12;
          func_0x000107c2a7fc();
          bStack_747 = *(byte *)((long)ppuVar13 + 0x19);
          bStack_746 = *(byte *)((long)ppuVar13 + 0x1a);
          uStack_758 = 0;
          uStack_748 = 0;
          bStack_745 = 1;
          ppuStack_760 = &PTR_SUB_1108629c8;
          lStack_718 = 0;
          puStack_720 = (undefined1 *)0x0;
          uStack_708 = 0;
          uStack_710 = 0;
          plStack_6f8 = (long *)0x0;
          plStack_700 = (long *)0x0;
          bStack_586 = bStack_5f6 | bStack_746;
          uStack_598 = 4;
          sStack_588 = (ushort)(bStack_5f7 | bStack_747) << 8;
          bStack_585 = bStack_5f5;
          ppuStack_5a0 = &PTR_SUB_1108629c8;
          pppuStack_568 = &ppuStack_610;
          pppuStack_560 = &ppuStack_760;
          uStack_550 = 0;
          lStack_558 = 0;
          plStack_540 = (long *)0x0;
          uStack_548 = 0;
          plStack_538 = (long *)0x0;
          ppuStack_858 = (undefined **)0x0;
          uStack_850 = (undefined **)0x0;
          uStack_848 = 0;
          ppuStack_8d0 = (undefined **)CONCAT44(ppuStack_8d0._4_4_,uVar15);
          pppuVar6 = &ppuStack_7e0;
          ppuStack_728 = ppuVar13;
          func_0x000107c310cc(pppuVar6,&ppuStack_5a0,&ppuStack_858,&ppuStack_8d0);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_858 != (undefined **)0x0) {
            uStack_850 = ppuStack_858;
            __ZdlPv();
          }
          plVar17 = plStack_538;
          ppuStack_5a0 = &PTR_SUB_1108629c8;
          plStack_538 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_540;
          plStack_540 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_558 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_6f8;
          ppuStack_760 = &PTR_SUB_1108629c8;
          plStack_6f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_700;
          plStack_700 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_718 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_5a8;
          ppuStack_610 = &PTR_SUB_1108629c8;
          plStack_5a8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_5b0;
          plStack_5b0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_5c8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_688;
          ppuStack_6f0 = &PTR_SUB_1108629c8;
          plStack_688 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_690;
          plStack_690 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_6a8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_618;
          ppuStack_680 = &PTR_SUB_1108629c8;
          plStack_618 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_620;
          plStack_620 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_638 != 0) {
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_7b8);
          _objc_release(uStack_7c8);
          uVar14 = uStack_7d0;
        }
        else {
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (lVar10 == 0) {
            uStack_500 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            uStack_508 = 0;
            uStack_510 = 0;
            uStack_528 = 0;
            ppuStack_530 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_530,lVar10);
          }
          ppuVar13 = (undefined8 **)&uStack_761;
          FUN_108c2e2f8();
          puVar4 = &uStack_762;
          FUN_108c2d860();
          bStack_745 = *(byte *)((long)ppuVar13 + 0x1b) & puVar4[0x1b];
          bStack_747 = (*(byte *)((long)ppuVar13 + 0x19) | puVar4[0x19]) & 1;
          bStack_746 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar4[0x1a]) & 1;
          uStack_758 = 4;
          uStack_748 = 0;
          ppuStack_760 = &PTR_SUB_1108629c8;
          plStack_6f8 = (long *)0x0;
          plStack_700 = (long *)0x0;
          uStack_708 = 0;
          uStack_710 = 0;
          lStack_718 = 0;
          puVar5 = &uStack_7e1;
          ppuStack_728 = ppuVar13;
          puStack_720 = puVar4;
          FUN_108c2dcd4();
          uStack_7d8 = (ulong)uStack_7d8._4_4_ << 0x20;
          uStack_7c8._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar5 + 0x19) << 8);
          ppuStack_7e0 = &PTR_SUB_1108629c8;
          lStack_798 = 0;
          uStack_7a0 = 0;
          uStack_788 = 0;
          uStack_790 = 0;
          plStack_778 = (long *)0x0;
          plStack_780 = (long *)0x0;
          bStack_6d7 = bStack_747 | (byte)*(ushort *)(puVar5 + 0x19);
          bStack_6d6 = bStack_746 | puVar5[0x1a];
          uStack_6e8 = 4;
          uStack_6d8 = 0;
          bStack_6d5 = bStack_745;
          ppuStack_6f0 = &PTR_SUB_1108629c8;
          pppuStack_6b0 = &ppuStack_7e0;
          uStack_6a0 = 0;
          lStack_6a8 = 0;
          plStack_690 = (long *)0x0;
          uStack_698 = 0;
          plStack_688 = (long *)0x0;
          puVar4 = &uStack_859;
          puStack_7a8 = puVar5;
          pppuStack_6b8 = &ppuStack_760;
          func_0x000107c2a7fc();
          bStack_83f = puVar4[0x19];
          bStack_83e = puVar4[0x1a];
          uStack_850 = (undefined **)((ulong)uStack_850._4_4_ << 0x20);
          uStack_840 = 0;
          uStack_83d = 1;
          ppuStack_858 = &PTR_SUB_1108629c8;
          lStack_810 = 0;
          uStack_818 = 0;
          uStack_800 = 0;
          uStack_808 = 0;
          plStack_7f0 = (long *)0x0;
          plStack_7f8 = (long *)0x0;
          bStack_667 = bStack_6d7 | bStack_83f;
          bStack_666 = bStack_6d6 | bStack_83e;
          uStack_678 = 4;
          uStack_668 = 0;
          bStack_665 = bStack_6d5;
          ppuStack_680 = &PTR_SUB_1108629c8;
          pppuStack_648 = &ppuStack_6f0;
          pppuStack_640 = &ppuStack_858;
          uStack_630 = 0;
          lStack_638 = 0;
          plStack_620 = (long *)0x0;
          uStack_628 = 0;
          plStack_618 = (long *)0x0;
          puVar5 = &uStack_8d1;
          puStack_820 = puVar4;
          FUN_108c2d918();
          bStack_8b7 = puVar5[0x19];
          bStack_8b6 = puVar5[0x1a];
          bStack_8b5 = puVar5[0x1b];
          uStack_8c8 = 2;
          uStack_8b8 = 0;
          ppuStack_8d0 = &PTR_SUB_110862700;
          puStack_888 = (undefined *)0x0;
          uStack_890 = 0;
          uStack_878 = 0;
          uStack_880 = 0;
          plStack_868 = (long *)0x0;
          plStack_870 = (long *)0x0;
          bStack_5f7 = bStack_667 | bStack_8b7;
          bStack_5f6 = bStack_666 | bStack_8b6;
          bStack_5f5 = bStack_665 & bStack_8b5;
          uStack_608 = 4;
          uStack_5f8 = 0;
          ppuStack_610 = &PTR_SUB_1108629c8;
          pppuStack_5d0 = &ppuStack_8d0;
          uStack_5c0 = 0;
          lStack_5c8 = 0;
          plStack_5b0 = (long *)0x0;
          uStack_5b8 = 0;
          plStack_5a8 = (long *)0x0;
          puVar4 = &uStack_949;
          puStack_898 = puVar5;
          FUN_108c2d918();
          uStack_9b8 = 0xf;
          uStack_9a8 = 0x100;
          ppuStack_990 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuStack_9c0 = &PTR_DAT_110862760;
          uStack_980 = 0;
          uStack_988 = 0;
          uStack_970 = 0;
          uStack_978 = 0;
          plStack_960 = (long *)0x0;
          uStack_968 = 0;
          plStack_958 = (long *)0x0;
          bStack_92e = puVar4[0x1a];
          bStack_92d = puVar4[0x1b];
          uStack_940 = 0xb;
          uStack_930 = 0x100;
          ppuStack_948 = &PTR_SUB_110862700;
          pppuStack_560 = &ppuStack_948;
          plStack_8e0 = (long *)0x0;
          uStack_8f8 = 0;
          uStack_900 = 0;
          plStack_8e8 = (long *)0x0;
          uStack_8f0 = 0;
          bStack_586 = bStack_5f6 | bStack_92e;
          bStack_585 = bStack_5f5 & bStack_92d;
          uStack_598 = 4;
          sStack_588 = 0x100;
          ppuStack_5a0 = &PTR_SUB_1108629c8;
          pppuStack_568 = &ppuStack_610;
          uStack_550 = 0;
          lStack_558 = 0;
          plStack_540 = (long *)0x0;
          uStack_548 = 0;
          plStack_538 = (long *)0x0;
          puStack_9d8 = (undefined8 *)0x0;
          puStack_9d0 = (undefined8 *)0x0;
          uStack_9c8 = 0;
          pppuVar6 = &ppuStack_530;
          uStack_9dc = uVar15;
          puStack_910 = puVar4;
          pppuStack_908 = &ppuStack_9c0;
          func_0x000107c310cc(pppuVar6,&ppuStack_5a0,&puStack_9d8,&uStack_9dc);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_9d8 != (undefined8 *)0x0) {
            puStack_9d0 = puStack_9d8;
            __ZdlPv();
          }
          plVar17 = plStack_538;
          ppuStack_5a0 = &PTR_SUB_1108629c8;
          plStack_538 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_540;
          plStack_540 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_558 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_8e0;
          ppuStack_948 = &PTR_SUB_110862700;
          plStack_8e0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_8e8;
          plStack_8e8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          puStack_9d8 = &uStack_900;
          func_0x000107c27dd4(&puStack_9d8);
          plVar17 = plStack_958;
          ppuStack_9c0 = &PTR_DAT_110862760;
          plStack_958 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_960;
          plStack_960 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          puStack_9d8 = &uStack_978;
          func_0x000107c27dd4(&puStack_9d8);
          _objc_release(ppuStack_990);
          plVar17 = plStack_5a8;
          ppuStack_610 = &PTR_SUB_1108629c8;
          plStack_5a8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_5b0;
          plStack_5b0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_5c8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_868;
          ppuStack_8d0 = &PTR_SUB_110862700;
          plStack_868 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_870;
          plStack_870 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          ppuStack_948 = &puStack_888;
          func_0x000107c27dd4(&ppuStack_948);
          plVar17 = plStack_618;
          ppuStack_680 = &PTR_SUB_1108629c8;
          plStack_618 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_620;
          plStack_620 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_638 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_7f0;
          ppuStack_858 = &PTR_SUB_1108629c8;
          plStack_7f0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_7f8;
          plStack_7f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_810 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_688;
          ppuStack_6f0 = &PTR_SUB_1108629c8;
          plStack_688 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_690;
          plStack_690 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_6a8 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_778;
          ppuStack_7e0 = &PTR_SUB_1108629c8;
          plStack_778 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_780;
          plStack_780 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_798 != 0) {
            __ZdlPv();
          }
          plVar17 = plStack_6f8;
          ppuStack_760 = &PTR_SUB_1108629c8;
          plStack_6f8 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          plVar17 = plStack_700;
          plStack_700 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 8))();
          }
          if (lStack_718 != 0) {
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_508);
          _objc_release(uStack_518);
          uVar14 = uStack_520;
        }
        _objc_release(uVar14);
        _objc_release(lVar10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar6);
  return;
}



/* Entry: 108c18c4c; end: 108c18de7;  */

void FUN_108c18c4c(long param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_91c;
  undefined8 *puStack_918;
  undefined8 *puStack_910;
  undefined8 uStack_908;
  undefined **ppuStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8e8;
  undefined **ppuStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  undefined1 uStack_889;
  undefined **ppuStack_888;
  undefined4 uStack_880;
  undefined2 uStack_870;
  byte bStack_86e;
  byte bStack_86d;
  undefined1 *puStack_850;
  undefined ***pppuStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long *plStack_828;
  long *plStack_820;
  undefined1 uStack_811;
  undefined **ppuStack_810;
  undefined4 uStack_808;
  undefined1 uStack_7f8;
  byte bStack_7f7;
  byte bStack_7f6;
  byte bStack_7f5;
  undefined1 *puStack_7d8;
  undefined8 uStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  long *plStack_7b0;
  long *plStack_7a8;
  undefined1 uStack_799;
  undefined **ppuStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 uStack_780;
  byte bStack_77f;
  byte bStack_77e;
  undefined1 uStack_77d;
  undefined1 *puStack_760;
  undefined8 uStack_758;
  long lStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long *plStack_738;
  long *plStack_730;
  undefined1 uStack_721;
  undefined **ppuStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined1 uStack_6a2;
  undefined1 uStack_6a1;
  undefined **ppuStack_6a0;
  undefined4 uStack_698;
  undefined1 uStack_688;
  byte bStack_687;
  byte bStack_686;
  byte bStack_685;
  undefined8 **ppuStack_668;
  undefined1 *puStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  long *plStack_638;
  undefined **ppuStack_630;
  undefined4 uStack_628;
  undefined1 uStack_618;
  byte bStack_617;
  byte bStack_616;
  byte bStack_615;
  undefined ***pppuStack_5f8;
  undefined ***pppuStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  undefined **ppuStack_5c0;
  undefined4 uStack_5b8;
  undefined1 uStack_5a8;
  byte bStack_5a7;
  byte bStack_5a6;
  byte bStack_5a5;
  undefined ***pppuStack_588;
  undefined ***pppuStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined **ppuStack_550;
  undefined4 uStack_548;
  undefined1 uStack_538;
  byte bStack_537;
  byte bStack_536;
  byte bStack_535;
  undefined ***pppuStack_518;
  undefined ***pppuStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined **ppuStack_4e0;
  undefined4 uStack_4d8;
  short sStack_4c8;
  byte bStack_4c6;
  byte bStack_4c5;
  undefined ***pppuStack_4a8;
  undefined ***pppuStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined **ppuStack_408;
  undefined ***pppuStack_400;
  undefined8 uStack_3f8;
  undefined ***pppuStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 **ppuStack_3d0;
  code *pcStack_3c8;
  long lStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3a9;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 uStack_371;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined1 uStack_358;
  byte bStack_357;
  byte bStack_356;
  undefined1 uStack_355;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined1 uStack_2f9;
  undefined **ppuStack_2f8;
  undefined4 uStack_2f0;
  undefined1 uStack_2e0;
  byte bStack_2df;
  byte bStack_2de;
  undefined1 uStack_2dd;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined1 uStack_281;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined1 uStack_268;
  byte bStack_267;
  byte bStack_266;
  byte bStack_265;
  undefined1 *puStack_248;
  undefined ***pppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined4 uStack_208;
  undefined1 uStack_1f8;
  byte bStack_1f7;
  byte bStack_1f6;
  byte bStack_1f5;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined8 uStack_150;
  long alStack_148 [3];
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c9;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_91;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    ppuStack_90 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_90,param_1);
  }
  puVar4 = &uStack_91;
  FUN_108c2e2f8();
  puVar5 = &uStack_c9;
  FUN_108c2db04();
  uStack_58 = *(undefined8 *)(puVar5 + 0x10);
  uStack_50 = puVar5[0x19];
  uStack_4f = puVar5[0x18];
  uStack_40 = *(undefined8 *)(puVar5 + 0x28);
  uStack_4c = 1;
  puStack_48 = &UNK_100c43d7c;
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  func_0x000100c435d0(&lStack_c8,&uStack_58,&lStack_38,1);
  func_0x000100c436b8(&lStack_b0,&lStack_c8);
  pppuVar6 = &ppuStack_90;
  uStack_d0 = param_2;
  func_0x000107c310cc(pppuVar6,puVar4,&lStack_b0,&uStack_d0);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000104d96620(&ppuStack_90);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_d8 = FUN_108c18de8;
    alStack_148[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_3b8 = lVar7;
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar7 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,lVar7);
    }
    puVar4 = &uStack_281;
    FUN_108c2e2f8();
    puVar5 = &uStack_2f9;
    FUN_108c2dcd4();
    bStack_2df = puVar5[0x19];
    bStack_2de = puVar5[0x1a];
    uStack_2f0 = 0;
    uStack_2e0 = 0;
    uStack_2dd = 1;
    ppuStack_2f8 = &PTR_SUB_1108629c8;
    lStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    plStack_290 = (long *)0x0;
    plStack_298 = (long *)0x0;
    bVar2 = puVar4[0x19] | bStack_2df;
    bVar3 = puVar4[0x1a] | bStack_2de;
    bVar1 = puVar4[0x1b];
    uStack_278 = 4;
    uStack_268 = 0;
    ppuStack_280 = &PTR_SUB_1108629c8;
    pppuStack_240 = &ppuStack_2f8;
    plStack_218 = (long *)0x0;
    uStack_230 = 0;
    lStack_238 = 0;
    plStack_220 = (long *)0x0;
    uStack_228 = 0;
    puVar8 = &uStack_371;
    puStack_2c0 = puVar5;
    bStack_267 = bVar2;
    bStack_266 = bVar3;
    bStack_265 = bVar1;
    puStack_248 = puVar4;
    func_0x000107c2a7fc();
    bStack_357 = puVar8[0x19];
    bStack_356 = puVar8[0x1a];
    uStack_368 = 0;
    uStack_358 = 0;
    uStack_355 = 1;
    ppuStack_370 = &PTR_SUB_1108629c8;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    plStack_308 = (long *)0x0;
    plStack_310 = (long *)0x0;
    bStack_1f7 = bStack_357 | bVar2;
    bStack_1f6 = bStack_356 | bVar3;
    uStack_208 = 4;
    uStack_1f8 = 0;
    ppuStack_210 = &PTR_SUB_1108629c8;
    pppuStack_1d8 = &ppuStack_280;
    pppuStack_1d0 = &ppuStack_370;
    plStack_1a8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1c8 = 0;
    puVar4 = &uStack_3a9;
    puStack_338 = puVar8;
    bStack_1f5 = bVar1;
    FUN_108c2e074();
    uStack_168 = *(undefined8 *)(puVar4 + 0x10);
    uStack_160 = puVar4[0x19];
    uStack_15f = puVar4[0x18];
    uStack_150 = *(undefined8 *)(puVar4 + 0x28);
    uStack_15c = 1;
    puStack_158 = &UNK_100c43d7c;
    lStack_3a0 = 0;
    uStack_398 = 0;
    lStack_3a8 = 0;
    func_0x000100c435d0(&lStack_3a8,&uStack_168,alStack_148,1);
    func_0x000100c436b8(&lStack_390,&lStack_3a8);
    uStack_3b0 = 0;
    pppuVar6 = &ppuStack_1a0;
    pppuVar11 = &ppuStack_210;
    plVar17 = &lStack_390;
    func_0x000107c310cc(pppuVar6,pppuVar11,plVar17,&uStack_3b0);
    uVar15 = SUB84(pppuVar11,0);
    iVar16 = (int)plVar17;
    _objc_retainAutoreleasedReturnValue();
    if (lStack_390 != 0) {
      lStack_388 = lStack_390;
      __ZdlPv();
    }
    lVar7 = lStack_3b8;
    if (lStack_3a8 != 0) {
      lStack_3a0 = lStack_3a8;
      __ZdlPv();
    }
    plVar17 = plStack_1a8;
    ppuStack_210 = &PTR_SUB_1108629c8;
    plStack_1a8 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_1b0;
    plStack_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_1c8 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_308;
    ppuStack_370 = &PTR_SUB_1108629c8;
    plStack_308 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_310;
    plStack_310 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_328 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_218;
    ppuStack_280 = &PTR_SUB_1108629c8;
    plStack_218 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_238 != 0) {
      __ZdlPv();
    }
    plVar17 = plStack_290;
    ppuStack_2f8 = &PTR_SUB_1108629c8;
    plStack_290 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_298;
    plStack_298 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_2b0 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    lVar9 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_148[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_210);
      func_0x000105007830(&ppuStack_370);
      func_0x000105007830(&ppuStack_280);
      func_0x000105007830(&ppuStack_2f8);
      func_0x000104d96620(&ppuStack_1a0);
      _objc_release(lStack_3b8);
      lVar10 = lVar9;
      __Unwind_Resume();
      ppuStack_408 = &PTR_SUB_1108629c8;
      uStack_3f8 = 1;
      puStack_3e8 = &UNK_1108629b8;
      lStack_3d8 = lVar7;
      pcStack_3c8 = FUN_108c191cc;
      uStack_420 = (ulong)bVar1;
      uStack_418 = (ulong)bVar3;
      uStack_410 = (ulong)bVar2;
      pppuStack_400 = &ppuStack_2f8;
      pppuStack_3f0 = &ppuStack_210;
      lStack_3e0 = lVar9;
      ppuStack_3d0 = &puStack_e0;
      _objc_retain();
      pppuStack_518 = &ppuStack_5c0;
      if (iVar16 == 0) {
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (lVar10 == 0) {
          uStack_6f0 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
          uStack_708 = 0;
          uStack_710 = 0;
          uStack_718 = 0;
          ppuStack_720 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_720,lVar10);
        }
        pppuVar6 = &ppuStack_888;
        FUN_108c2e2f8();
        pppuVar11 = &ppuStack_900;
        FUN_108c2d860();
        bStack_5a5 = *(byte *)((long)pppuVar6 + 0x1b) & *(byte *)((long)pppuVar11 + 0x1b);
        bStack_5a7 = (*(byte *)((long)pppuVar6 + 0x19) | *(byte *)((long)pppuVar11 + 0x19)) & 1;
        bStack_5a6 = (*(byte *)((long)pppuVar6 + 0x1a) | *(byte *)((long)pppuVar11 + 0x1a)) & 1;
        uStack_5b8 = 4;
        uStack_5a8 = 0;
        ppuStack_5c0 = &PTR_SUB_1108629c8;
        plStack_558 = (long *)0x0;
        plStack_560 = (long *)0x0;
        uStack_568 = 0;
        uStack_570 = 0;
        lStack_578 = 0;
        pppuVar12 = &ppuStack_470;
        pppuStack_588 = pppuVar6;
        pppuStack_580 = pppuVar11;
        FUN_108c2dcd4();
        bStack_617 = *(byte *)((long)pppuVar12 + 0x19);
        bStack_616 = *(byte *)((long)pppuVar12 + 0x1a);
        uStack_628 = 0;
        uStack_618 = 0;
        bStack_615 = 1;
        ppuStack_630 = &PTR_SUB_1108629c8;
        lStack_5e8 = 0;
        pppuStack_5f0 = (undefined ***)0x0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        plStack_5c8 = (long *)0x0;
        plStack_5d0 = (long *)0x0;
        bStack_537 = bStack_5a7 | bStack_617;
        bStack_536 = bStack_5a6 | bStack_616;
        uStack_548 = 4;
        uStack_538 = 0;
        bStack_535 = bStack_5a5;
        ppuStack_550 = &PTR_SUB_1108629c8;
        pppuStack_510 = &ppuStack_630;
        uStack_500 = 0;
        lStack_508 = 0;
        plStack_4f0 = (long *)0x0;
        uStack_4f8 = 0;
        plStack_4e8 = (long *)0x0;
        ppuVar13 = &puStack_918;
        pppuStack_5f8 = pppuVar12;
        func_0x000107c2a7fc();
        bStack_687 = *(byte *)((long)ppuVar13 + 0x19);
        bStack_686 = *(byte *)((long)ppuVar13 + 0x1a);
        uStack_698 = 0;
        uStack_688 = 0;
        bStack_685 = 1;
        ppuStack_6a0 = &PTR_SUB_1108629c8;
        lStack_658 = 0;
        puStack_660 = (undefined1 *)0x0;
        uStack_648 = 0;
        uStack_650 = 0;
        plStack_638 = (long *)0x0;
        plStack_640 = (long *)0x0;
        bStack_4c6 = bStack_536 | bStack_686;
        uStack_4d8 = 4;
        sStack_4c8 = (ushort)(bStack_537 | bStack_687) << 8;
        bStack_4c5 = bStack_535;
        ppuStack_4e0 = &PTR_SUB_1108629c8;
        pppuStack_4a8 = &ppuStack_550;
        pppuStack_4a0 = &ppuStack_6a0;
        uStack_490 = 0;
        lStack_498 = 0;
        plStack_480 = (long *)0x0;
        uStack_488 = 0;
        plStack_478 = (long *)0x0;
        ppuStack_798 = (undefined **)0x0;
        uStack_790 = (undefined **)0x0;
        uStack_788 = 0;
        ppuStack_810 = (undefined **)CONCAT44(ppuStack_810._4_4_,uVar15);
        pppuVar6 = &ppuStack_720;
        ppuStack_668 = ppuVar13;
        func_0x000107c310cc(pppuVar6,&ppuStack_4e0,&ppuStack_798,&ppuStack_810);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_798 != (undefined **)0x0) {
          uStack_790 = ppuStack_798;
          __ZdlPv();
        }
        plVar17 = plStack_478;
        ppuStack_4e0 = &PTR_SUB_1108629c8;
        plStack_478 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_480;
        plStack_480 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_498 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_638;
        ppuStack_6a0 = &PTR_SUB_1108629c8;
        plStack_638 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_640;
        plStack_640 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_658 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_4e8;
        ppuStack_550 = &PTR_SUB_1108629c8;
        plStack_4e8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_4f0;
        plStack_4f0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_508 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_5c8;
        ppuStack_630 = &PTR_SUB_1108629c8;
        plStack_5c8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_5d0;
        plStack_5d0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_5e8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_558;
        ppuStack_5c0 = &PTR_SUB_1108629c8;
        plStack_558 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_560;
        plStack_560 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_578 != 0) {
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_6f8);
        _objc_release(uStack_708);
        uVar14 = uStack_710;
      }
      else {
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (lVar10 == 0) {
          uStack_440 = 0;
          uStack_458 = 0;
          uStack_460 = 0;
          uStack_448 = 0;
          uStack_450 = 0;
          uStack_468 = 0;
          ppuStack_470 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_470,lVar10);
        }
        ppuVar13 = (undefined8 **)&uStack_6a1;
        FUN_108c2e2f8();
        puVar4 = &uStack_6a2;
        FUN_108c2d860();
        bStack_685 = *(byte *)((long)ppuVar13 + 0x1b) & puVar4[0x1b];
        bStack_687 = (*(byte *)((long)ppuVar13 + 0x19) | puVar4[0x19]) & 1;
        bStack_686 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar4[0x1a]) & 1;
        uStack_698 = 4;
        uStack_688 = 0;
        ppuStack_6a0 = &PTR_SUB_1108629c8;
        plStack_638 = (long *)0x0;
        plStack_640 = (long *)0x0;
        uStack_648 = 0;
        uStack_650 = 0;
        lStack_658 = 0;
        puVar5 = &uStack_721;
        ppuStack_668 = ppuVar13;
        puStack_660 = puVar4;
        FUN_108c2dcd4();
        uStack_718 = (ulong)uStack_718._4_4_ << 0x20;
        uStack_708._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar5 + 0x19) << 8);
        ppuStack_720 = &PTR_SUB_1108629c8;
        lStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        plStack_6b8 = (long *)0x0;
        plStack_6c0 = (long *)0x0;
        bStack_617 = bStack_687 | (byte)*(ushort *)(puVar5 + 0x19);
        bStack_616 = bStack_686 | puVar5[0x1a];
        uStack_628 = 4;
        uStack_618 = 0;
        bStack_615 = bStack_685;
        ppuStack_630 = &PTR_SUB_1108629c8;
        pppuStack_5f0 = &ppuStack_720;
        uStack_5e0 = 0;
        lStack_5e8 = 0;
        plStack_5d0 = (long *)0x0;
        uStack_5d8 = 0;
        plStack_5c8 = (long *)0x0;
        puVar4 = &uStack_799;
        puStack_6e8 = puVar5;
        pppuStack_5f8 = &ppuStack_6a0;
        func_0x000107c2a7fc();
        bStack_77f = puVar4[0x19];
        bStack_77e = puVar4[0x1a];
        uStack_790 = (undefined **)((ulong)uStack_790._4_4_ << 0x20);
        uStack_780 = 0;
        uStack_77d = 1;
        ppuStack_798 = &PTR_SUB_1108629c8;
        lStack_750 = 0;
        uStack_758 = 0;
        uStack_740 = 0;
        uStack_748 = 0;
        plStack_730 = (long *)0x0;
        plStack_738 = (long *)0x0;
        bStack_5a7 = bStack_617 | bStack_77f;
        bStack_5a6 = bStack_616 | bStack_77e;
        uStack_5b8 = 4;
        uStack_5a8 = 0;
        bStack_5a5 = bStack_615;
        ppuStack_5c0 = &PTR_SUB_1108629c8;
        pppuStack_588 = &ppuStack_630;
        pppuStack_580 = &ppuStack_798;
        uStack_570 = 0;
        lStack_578 = 0;
        plStack_560 = (long *)0x0;
        uStack_568 = 0;
        plStack_558 = (long *)0x0;
        puVar5 = &uStack_811;
        puStack_760 = puVar4;
        FUN_108c2d918();
        bStack_7f7 = puVar5[0x19];
        bStack_7f6 = puVar5[0x1a];
        bStack_7f5 = puVar5[0x1b];
        uStack_808 = 2;
        uStack_7f8 = 0;
        ppuStack_810 = &PTR_SUB_110862700;
        puStack_7c8 = (undefined *)0x0;
        uStack_7d0 = 0;
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        plStack_7a8 = (long *)0x0;
        plStack_7b0 = (long *)0x0;
        bStack_537 = bStack_5a7 | bStack_7f7;
        bStack_536 = bStack_5a6 | bStack_7f6;
        bStack_535 = bStack_5a5 & bStack_7f5;
        uStack_548 = 4;
        uStack_538 = 0;
        ppuStack_550 = &PTR_SUB_1108629c8;
        pppuStack_510 = &ppuStack_810;
        uStack_500 = 0;
        lStack_508 = 0;
        plStack_4f0 = (long *)0x0;
        uStack_4f8 = 0;
        plStack_4e8 = (long *)0x0;
        puVar4 = &uStack_889;
        puStack_7d8 = puVar5;
        FUN_108c2d918();
        uStack_8f8 = 0xf;
        uStack_8e8 = 0x100;
        ppuStack_8d0 = &PTR____CFConstantStringClassReference_110daafd8;
        ppuStack_900 = &PTR_DAT_110862760;
        uStack_8c0 = 0;
        uStack_8c8 = 0;
        uStack_8b0 = 0;
        uStack_8b8 = 0;
        plStack_8a0 = (long *)0x0;
        uStack_8a8 = 0;
        plStack_898 = (long *)0x0;
        bStack_86e = puVar4[0x1a];
        bStack_86d = puVar4[0x1b];
        uStack_880 = 0xb;
        uStack_870 = 0x100;
        ppuStack_888 = &PTR_SUB_110862700;
        pppuStack_4a0 = &ppuStack_888;
        plStack_820 = (long *)0x0;
        uStack_838 = 0;
        uStack_840 = 0;
        plStack_828 = (long *)0x0;
        uStack_830 = 0;
        bStack_4c6 = bStack_536 | bStack_86e;
        bStack_4c5 = bStack_535 & bStack_86d;
        uStack_4d8 = 4;
        sStack_4c8 = 0x100;
        ppuStack_4e0 = &PTR_SUB_1108629c8;
        pppuStack_4a8 = &ppuStack_550;
        uStack_490 = 0;
        lStack_498 = 0;
        plStack_480 = (long *)0x0;
        uStack_488 = 0;
        plStack_478 = (long *)0x0;
        puStack_918 = (undefined8 *)0x0;
        puStack_910 = (undefined8 *)0x0;
        uStack_908 = 0;
        pppuVar6 = &ppuStack_470;
        uStack_91c = uVar15;
        puStack_850 = puVar4;
        pppuStack_848 = &ppuStack_900;
        func_0x000107c310cc(pppuVar6,&ppuStack_4e0,&puStack_918,&uStack_91c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_918 != (undefined8 *)0x0) {
          puStack_910 = puStack_918;
          __ZdlPv();
        }
        plVar17 = plStack_478;
        ppuStack_4e0 = &PTR_SUB_1108629c8;
        plStack_478 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_480;
        plStack_480 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_498 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_820;
        ppuStack_888 = &PTR_SUB_110862700;
        plStack_820 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_828;
        plStack_828 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        puStack_918 = &uStack_840;
        func_0x000107c27dd4(&puStack_918);
        plVar17 = plStack_898;
        ppuStack_900 = &PTR_DAT_110862760;
        plStack_898 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_8a0;
        plStack_8a0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        puStack_918 = &uStack_8b8;
        func_0x000107c27dd4(&puStack_918);
        _objc_release(ppuStack_8d0);
        plVar17 = plStack_4e8;
        ppuStack_550 = &PTR_SUB_1108629c8;
        plStack_4e8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_4f0;
        plStack_4f0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_508 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_7a8;
        ppuStack_810 = &PTR_SUB_110862700;
        plStack_7a8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_7b0;
        plStack_7b0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        ppuStack_888 = &puStack_7c8;
        func_0x000107c27dd4(&ppuStack_888);
        plVar17 = plStack_558;
        ppuStack_5c0 = &PTR_SUB_1108629c8;
        plStack_558 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_560;
        plStack_560 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_578 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_730;
        ppuStack_798 = &PTR_SUB_1108629c8;
        plStack_730 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_738;
        plStack_738 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_750 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_5c8;
        ppuStack_630 = &PTR_SUB_1108629c8;
        plStack_5c8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_5d0;
        plStack_5d0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_5e8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_6b8;
        ppuStack_720 = &PTR_SUB_1108629c8;
        plStack_6b8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_6c0;
        plStack_6c0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_6d8 != 0) {
          __ZdlPv();
        }
        plVar17 = plStack_638;
        ppuStack_6a0 = &PTR_SUB_1108629c8;
        plStack_638 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = plStack_640;
        plStack_640 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        if (lStack_658 != 0) {
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_448);
        _objc_release(uStack_458);
        uVar14 = uStack_460;
      }
      _objc_release(uVar14);
      _objc_release(lVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar6);
  return;
}



/* Entry: 108c18de8; end: 108c191cb;  */

void FUN_108c18de8(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iVar16;
  long *plVar17;
  undefined4 uStack_84c;
  undefined8 *puStack_848;
  undefined8 *puStack_840;
  undefined8 uStack_838;
  undefined **ppuStack_830;
  undefined4 uStack_828;
  undefined4 uStack_818;
  undefined **ppuStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined1 uStack_7b9;
  undefined **ppuStack_7b8;
  undefined4 uStack_7b0;
  undefined2 uStack_7a0;
  byte bStack_79e;
  byte bStack_79d;
  undefined1 *puStack_780;
  undefined ***pppuStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long *plStack_758;
  long *plStack_750;
  undefined1 uStack_741;
  undefined **ppuStack_740;
  undefined4 uStack_738;
  undefined1 uStack_728;
  byte bStack_727;
  byte bStack_726;
  byte bStack_725;
  undefined1 *puStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined1 uStack_6c9;
  undefined **ppuStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 uStack_6b0;
  byte bStack_6af;
  byte bStack_6ae;
  undefined1 uStack_6ad;
  undefined1 *puStack_690;
  undefined8 uStack_688;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  long *plStack_668;
  long *plStack_660;
  undefined1 uStack_651;
  undefined **ppuStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 *puStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined1 uStack_5d2;
  undefined1 uStack_5d1;
  undefined **ppuStack_5d0;
  undefined4 uStack_5c8;
  undefined1 uStack_5b8;
  byte bStack_5b7;
  byte bStack_5b6;
  byte bStack_5b5;
  undefined8 **ppuStack_598;
  undefined1 *puStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined **ppuStack_560;
  undefined4 uStack_558;
  undefined1 uStack_548;
  byte bStack_547;
  byte bStack_546;
  byte bStack_545;
  undefined ***pppuStack_528;
  undefined ***pppuStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  undefined1 uStack_4d8;
  byte bStack_4d7;
  byte bStack_4d6;
  byte bStack_4d5;
  undefined ***pppuStack_4b8;
  undefined ***pppuStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined1 uStack_468;
  byte bStack_467;
  byte bStack_466;
  byte bStack_465;
  undefined ***pppuStack_448;
  undefined ***pppuStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined **ppuStack_410;
  undefined4 uStack_408;
  short sStack_3f8;
  byte bStack_3f6;
  byte bStack_3f5;
  undefined ***pppuStack_3d8;
  undefined ***pppuStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined **ppuStack_338;
  undefined ***pppuStack_330;
  undefined8 uStack_328;
  undefined ***pppuStack_320;
  undefined *puStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  long lStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2d9;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2a1;
  undefined **ppuStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_288;
  byte bStack_287;
  byte bStack_286;
  undefined1 uStack_285;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined1 uStack_229;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined1 uStack_210;
  byte bStack_20f;
  byte bStack_20e;
  undefined1 uStack_20d;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_198;
  byte bStack_197;
  byte bStack_196;
  byte bStack_195;
  undefined1 *puStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined1 uStack_128;
  byte bStack_127;
  byte bStack_126;
  byte bStack_125;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_2e8 = param_1;
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    ppuStack_d0 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_d0,param_1);
  }
  puVar5 = &uStack_1b1;
  FUN_108c2e2f8();
  puVar6 = &uStack_229;
  FUN_108c2dcd4();
  bStack_20f = puVar6[0x19];
  bStack_20e = puVar6[0x1a];
  uStack_220 = 0;
  uStack_210 = 0;
  uStack_20d = 1;
  ppuStack_228 = &PTR_SUB_1108629c8;
  lStack_1e0 = 0;
  uStack_1e8 = 0;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  plStack_1c0 = (long *)0x0;
  plStack_1c8 = (long *)0x0;
  bVar2 = puVar5[0x19] | bStack_20f;
  bVar3 = puVar5[0x1a] | bStack_20e;
  bVar1 = puVar5[0x1b];
  uStack_1a8 = 4;
  uStack_198 = 0;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  pppuStack_170 = &ppuStack_228;
  plStack_148 = (long *)0x0;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  puVar7 = &uStack_2a1;
  puStack_1f0 = puVar6;
  bStack_197 = bVar2;
  bStack_196 = bVar3;
  bStack_195 = bVar1;
  puStack_178 = puVar5;
  func_0x000107c2a7fc();
  bStack_287 = puVar7[0x19];
  bStack_286 = puVar7[0x1a];
  uStack_298 = 0;
  uStack_288 = 0;
  uStack_285 = 1;
  ppuStack_2a0 = &PTR_SUB_1108629c8;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  plStack_238 = (long *)0x0;
  plStack_240 = (long *)0x0;
  bStack_127 = bStack_287 | bVar2;
  bStack_126 = bStack_286 | bVar3;
  uStack_138 = 4;
  uStack_128 = 0;
  ppuStack_140 = &PTR_SUB_1108629c8;
  pppuStack_108 = &ppuStack_1b0;
  pppuStack_100 = &ppuStack_2a0;
  plStack_d8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  puVar5 = &uStack_2d9;
  puStack_268 = puVar7;
  bStack_125 = bVar1;
  FUN_108c2e074();
  uStack_98 = *(undefined8 *)(puVar5 + 0x10);
  uStack_90 = puVar5[0x19];
  uStack_8f = puVar5[0x18];
  uStack_80 = *(undefined8 *)(puVar5 + 0x28);
  uStack_8c = 1;
  puStack_88 = &UNK_100c43d7c;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2d8 = 0;
  func_0x000100c435d0(&lStack_2d8,&uStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_2c0,&lStack_2d8);
  uStack_2e0 = 0;
  pppuVar8 = &ppuStack_d0;
  pppuVar11 = &ppuStack_140;
  plVar17 = &lStack_2c0;
  func_0x000107c310cc(pppuVar8,pppuVar11,plVar17,&uStack_2e0);
  uVar15 = SUB84(pppuVar11,0);
  iVar16 = (int)plVar17;
  _objc_retainAutoreleasedReturnValue();
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  lVar4 = lStack_2e8;
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar17 = plStack_d8;
  ppuStack_140 = &PTR_SUB_1108629c8;
  plStack_d8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_f8 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_238;
  ppuStack_2a0 = &PTR_SUB_1108629c8;
  plStack_238 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_240;
  plStack_240 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_258 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar17 = plStack_1c0;
  ppuStack_228 = &PTR_SUB_1108629c8;
  plStack_1c0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_1c8;
  plStack_1c8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  if (lStack_1e0 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  lVar9 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_78[0]) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_140);
    func_0x000105007830(&ppuStack_2a0);
    func_0x000105007830(&ppuStack_1b0);
    func_0x000105007830(&ppuStack_228);
    func_0x000104d96620(&ppuStack_d0);
    _objc_release(lStack_2e8);
    lVar10 = lVar9;
    __Unwind_Resume();
    ppuStack_338 = &PTR_SUB_1108629c8;
    uStack_328 = 1;
    puStack_318 = &UNK_1108629b8;
    lStack_308 = lVar4;
    pcStack_2f8 = FUN_108c191cc;
    uStack_350 = (ulong)bVar1;
    uStack_348 = (ulong)bVar3;
    uStack_340 = (ulong)bVar2;
    pppuStack_330 = &ppuStack_228;
    pppuStack_320 = &ppuStack_140;
    lStack_310 = lVar9;
    puStack_300 = &stack0xfffffffffffffff0;
    _objc_retain();
    pppuStack_448 = &ppuStack_4f0;
    if (iVar16 == 0) {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar10 == 0) {
        uStack_620 = 0;
        uStack_628 = 0;
        uStack_630 = 0;
        uStack_638 = 0;
        uStack_640 = 0;
        uStack_648 = 0;
        ppuStack_650 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_650,lVar10);
      }
      pppuVar11 = &ppuStack_7b8;
      FUN_108c2e2f8();
      pppuVar8 = &ppuStack_830;
      FUN_108c2d860();
      bStack_4d5 = *(byte *)((long)pppuVar11 + 0x1b) & *(byte *)((long)pppuVar8 + 0x1b);
      bStack_4d7 = (*(byte *)((long)pppuVar11 + 0x19) | *(byte *)((long)pppuVar8 + 0x19)) & 1;
      bStack_4d6 = (*(byte *)((long)pppuVar11 + 0x1a) | *(byte *)((long)pppuVar8 + 0x1a)) & 1;
      uStack_4e8 = 4;
      uStack_4d8 = 0;
      ppuStack_4f0 = &PTR_SUB_1108629c8;
      plStack_488 = (long *)0x0;
      plStack_490 = (long *)0x0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      lStack_4a8 = 0;
      pppuVar12 = &ppuStack_3a0;
      pppuStack_4b8 = pppuVar11;
      pppuStack_4b0 = pppuVar8;
      FUN_108c2dcd4();
      bStack_547 = *(byte *)((long)pppuVar12 + 0x19);
      bStack_546 = *(byte *)((long)pppuVar12 + 0x1a);
      uStack_558 = 0;
      uStack_548 = 0;
      bStack_545 = 1;
      ppuStack_560 = &PTR_SUB_1108629c8;
      lStack_518 = 0;
      pppuStack_520 = (undefined ***)0x0;
      uStack_508 = 0;
      uStack_510 = 0;
      plStack_4f8 = (long *)0x0;
      plStack_500 = (long *)0x0;
      bStack_467 = bStack_4d7 | bStack_547;
      bStack_466 = bStack_4d6 | bStack_546;
      uStack_478 = 4;
      uStack_468 = 0;
      bStack_465 = bStack_4d5;
      ppuStack_480 = &PTR_SUB_1108629c8;
      pppuStack_440 = &ppuStack_560;
      uStack_430 = 0;
      lStack_438 = 0;
      plStack_420 = (long *)0x0;
      uStack_428 = 0;
      plStack_418 = (long *)0x0;
      ppuVar13 = &puStack_848;
      pppuStack_528 = pppuVar12;
      func_0x000107c2a7fc();
      bStack_5b7 = *(byte *)((long)ppuVar13 + 0x19);
      bStack_5b6 = *(byte *)((long)ppuVar13 + 0x1a);
      uStack_5c8 = 0;
      uStack_5b8 = 0;
      bStack_5b5 = 1;
      ppuStack_5d0 = &PTR_SUB_1108629c8;
      lStack_588 = 0;
      puStack_590 = (undefined1 *)0x0;
      uStack_578 = 0;
      uStack_580 = 0;
      plStack_568 = (long *)0x0;
      plStack_570 = (long *)0x0;
      bStack_3f6 = bStack_466 | bStack_5b6;
      uStack_408 = 4;
      sStack_3f8 = (ushort)(bStack_467 | bStack_5b7) << 8;
      bStack_3f5 = bStack_465;
      ppuStack_410 = &PTR_SUB_1108629c8;
      pppuStack_3d8 = &ppuStack_480;
      pppuStack_3d0 = &ppuStack_5d0;
      uStack_3c0 = 0;
      lStack_3c8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3b8 = 0;
      plStack_3a8 = (long *)0x0;
      ppuStack_6c8 = (undefined **)0x0;
      uStack_6c0 = (undefined **)0x0;
      uStack_6b8 = 0;
      ppuStack_740 = (undefined **)CONCAT44(ppuStack_740._4_4_,uVar15);
      pppuVar8 = &ppuStack_650;
      ppuStack_598 = ppuVar13;
      func_0x000107c310cc(pppuVar8,&ppuStack_410,&ppuStack_6c8,&ppuStack_740);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_6c8 != (undefined **)0x0) {
        uStack_6c0 = ppuStack_6c8;
        __ZdlPv();
      }
      plVar17 = plStack_3a8;
      ppuStack_410 = &PTR_SUB_1108629c8;
      plStack_3a8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3b0;
      plStack_3b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3c8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_568;
      ppuStack_5d0 = &PTR_SUB_1108629c8;
      plStack_568 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_570;
      plStack_570 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_588 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_418;
      ppuStack_480 = &PTR_SUB_1108629c8;
      plStack_418 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_420;
      plStack_420 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_438 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_4f8;
      ppuStack_560 = &PTR_SUB_1108629c8;
      plStack_4f8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_518 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_488;
      ppuStack_4f0 = &PTR_SUB_1108629c8;
      plStack_488 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_490;
      plStack_490 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_4a8 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_628);
      _objc_release(uStack_638);
      uVar14 = uStack_640;
    }
    else {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar10 == 0) {
        uStack_370 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_398 = 0;
        ppuStack_3a0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_3a0,lVar10);
      }
      ppuVar13 = (undefined8 **)&uStack_5d1;
      FUN_108c2e2f8();
      puVar5 = &uStack_5d2;
      FUN_108c2d860();
      bStack_5b5 = *(byte *)((long)ppuVar13 + 0x1b) & puVar5[0x1b];
      bStack_5b7 = (*(byte *)((long)ppuVar13 + 0x19) | puVar5[0x19]) & 1;
      bStack_5b6 = (*(byte *)((long)ppuVar13 + 0x1a) | puVar5[0x1a]) & 1;
      uStack_5c8 = 4;
      uStack_5b8 = 0;
      ppuStack_5d0 = &PTR_SUB_1108629c8;
      plStack_568 = (long *)0x0;
      plStack_570 = (long *)0x0;
      uStack_578 = 0;
      uStack_580 = 0;
      lStack_588 = 0;
      puVar6 = &uStack_651;
      ppuStack_598 = ppuVar13;
      puStack_590 = puVar5;
      FUN_108c2dcd4();
      uStack_648 = (ulong)uStack_648._4_4_ << 0x20;
      uStack_638._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar6 + 0x19) << 8);
      ppuStack_650 = &PTR_SUB_1108629c8;
      lStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      plStack_5e8 = (long *)0x0;
      plStack_5f0 = (long *)0x0;
      bStack_547 = bStack_5b7 | (byte)*(ushort *)(puVar6 + 0x19);
      bStack_546 = bStack_5b6 | puVar6[0x1a];
      uStack_558 = 4;
      uStack_548 = 0;
      bStack_545 = bStack_5b5;
      ppuStack_560 = &PTR_SUB_1108629c8;
      pppuStack_520 = &ppuStack_650;
      uStack_510 = 0;
      lStack_518 = 0;
      plStack_500 = (long *)0x0;
      uStack_508 = 0;
      plStack_4f8 = (long *)0x0;
      puVar5 = &uStack_6c9;
      puStack_618 = puVar6;
      pppuStack_528 = &ppuStack_5d0;
      func_0x000107c2a7fc();
      bStack_6af = puVar5[0x19];
      bStack_6ae = puVar5[0x1a];
      uStack_6c0 = (undefined **)((ulong)uStack_6c0._4_4_ << 0x20);
      uStack_6b0 = 0;
      uStack_6ad = 1;
      ppuStack_6c8 = &PTR_SUB_1108629c8;
      lStack_680 = 0;
      uStack_688 = 0;
      uStack_670 = 0;
      uStack_678 = 0;
      plStack_660 = (long *)0x0;
      plStack_668 = (long *)0x0;
      bStack_4d7 = bStack_547 | bStack_6af;
      bStack_4d6 = bStack_546 | bStack_6ae;
      uStack_4e8 = 4;
      uStack_4d8 = 0;
      bStack_4d5 = bStack_545;
      ppuStack_4f0 = &PTR_SUB_1108629c8;
      pppuStack_4b8 = &ppuStack_560;
      pppuStack_4b0 = &ppuStack_6c8;
      uStack_4a0 = 0;
      lStack_4a8 = 0;
      plStack_490 = (long *)0x0;
      uStack_498 = 0;
      plStack_488 = (long *)0x0;
      puVar6 = &uStack_741;
      puStack_690 = puVar5;
      FUN_108c2d918();
      bStack_727 = puVar6[0x19];
      bStack_726 = puVar6[0x1a];
      bStack_725 = puVar6[0x1b];
      uStack_738 = 2;
      uStack_728 = 0;
      ppuStack_740 = &PTR_SUB_110862700;
      puStack_6f8 = (undefined *)0x0;
      uStack_700 = 0;
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      plStack_6d8 = (long *)0x0;
      plStack_6e0 = (long *)0x0;
      bStack_467 = bStack_4d7 | bStack_727;
      bStack_466 = bStack_4d6 | bStack_726;
      bStack_465 = bStack_4d5 & bStack_725;
      uStack_478 = 4;
      uStack_468 = 0;
      ppuStack_480 = &PTR_SUB_1108629c8;
      pppuStack_440 = &ppuStack_740;
      uStack_430 = 0;
      lStack_438 = 0;
      plStack_420 = (long *)0x0;
      uStack_428 = 0;
      plStack_418 = (long *)0x0;
      puVar5 = &uStack_7b9;
      puStack_708 = puVar6;
      FUN_108c2d918();
      uStack_828 = 0xf;
      uStack_818 = 0x100;
      ppuStack_800 = &PTR____CFConstantStringClassReference_110daafd8;
      ppuStack_830 = &PTR_DAT_110862760;
      uStack_7f0 = 0;
      uStack_7f8 = 0;
      uStack_7e0 = 0;
      uStack_7e8 = 0;
      plStack_7d0 = (long *)0x0;
      uStack_7d8 = 0;
      plStack_7c8 = (long *)0x0;
      bStack_79e = puVar5[0x1a];
      bStack_79d = puVar5[0x1b];
      uStack_7b0 = 0xb;
      uStack_7a0 = 0x100;
      ppuStack_7b8 = &PTR_SUB_110862700;
      pppuStack_3d0 = &ppuStack_7b8;
      plStack_750 = (long *)0x0;
      uStack_768 = 0;
      uStack_770 = 0;
      plStack_758 = (long *)0x0;
      uStack_760 = 0;
      bStack_3f6 = bStack_466 | bStack_79e;
      bStack_3f5 = bStack_465 & bStack_79d;
      uStack_408 = 4;
      sStack_3f8 = 0x100;
      ppuStack_410 = &PTR_SUB_1108629c8;
      pppuStack_3d8 = &ppuStack_480;
      uStack_3c0 = 0;
      lStack_3c8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3b8 = 0;
      plStack_3a8 = (long *)0x0;
      puStack_848 = (undefined8 *)0x0;
      puStack_840 = (undefined8 *)0x0;
      uStack_838 = 0;
      pppuVar8 = &ppuStack_3a0;
      uStack_84c = uVar15;
      puStack_780 = puVar5;
      pppuStack_778 = &ppuStack_830;
      func_0x000107c310cc(pppuVar8,&ppuStack_410,&puStack_848,&uStack_84c);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_848 != (undefined8 *)0x0) {
        puStack_840 = puStack_848;
        __ZdlPv();
      }
      plVar17 = plStack_3a8;
      ppuStack_410 = &PTR_SUB_1108629c8;
      plStack_3a8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_3b0;
      plStack_3b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_3c8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_750;
      ppuStack_7b8 = &PTR_SUB_110862700;
      plStack_750 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_758;
      plStack_758 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      puStack_848 = &uStack_770;
      func_0x000107c27dd4(&puStack_848);
      plVar17 = plStack_7c8;
      ppuStack_830 = &PTR_DAT_110862760;
      plStack_7c8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_7d0;
      plStack_7d0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      puStack_848 = &uStack_7e8;
      func_0x000107c27dd4(&puStack_848);
      _objc_release(ppuStack_800);
      plVar17 = plStack_418;
      ppuStack_480 = &PTR_SUB_1108629c8;
      plStack_418 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_420;
      plStack_420 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_438 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_6d8;
      ppuStack_740 = &PTR_SUB_110862700;
      plStack_6d8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_6e0;
      plStack_6e0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      ppuStack_7b8 = &puStack_6f8;
      func_0x000107c27dd4(&ppuStack_7b8);
      plVar17 = plStack_488;
      ppuStack_4f0 = &PTR_SUB_1108629c8;
      plStack_488 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_490;
      plStack_490 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_4a8 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_660;
      ppuStack_6c8 = &PTR_SUB_1108629c8;
      plStack_660 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_668;
      plStack_668 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_680 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_4f8;
      ppuStack_560 = &PTR_SUB_1108629c8;
      plStack_4f8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_518 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_5e8;
      ppuStack_650 = &PTR_SUB_1108629c8;
      plStack_5e8 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_5f0;
      plStack_5f0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_608 != 0) {
        __ZdlPv();
      }
      plVar17 = plStack_568;
      ppuStack_5d0 = &PTR_SUB_1108629c8;
      plStack_568 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      plVar17 = plStack_570;
      plStack_570 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      if (lStack_588 != 0) {
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_378);
      _objc_release(uStack_388);
      uVar14 = uStack_390;
    }
    _objc_release(uVar14);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 108c191cc; end: 108c19bc7;  */

void FUN_108c191cc(long param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined4 uStack_55c;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined **ppuStack_540;
  undefined4 uStack_538;
  undefined4 uStack_528;
  undefined **ppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined1 uStack_4c9;
  undefined **ppuStack_4c8;
  undefined4 uStack_4c0;
  undefined2 uStack_4b0;
  byte bStack_4ae;
  byte bStack_4ad;
  undefined1 *puStack_490;
  undefined ***pppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long *plStack_468;
  long *plStack_460;
  undefined1 uStack_451;
  undefined **ppuStack_450;
  undefined4 uStack_448;
  undefined1 uStack_438;
  byte bStack_437;
  byte bStack_436;
  byte bStack_435;
  undefined1 *puStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined1 uStack_3d9;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  byte bStack_3bf;
  byte bStack_3be;
  undefined1 uStack_3bd;
  undefined1 *puStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined1 uStack_2e2;
  undefined1 uStack_2e1;
  undefined **ppuStack_2e0;
  undefined4 uStack_2d8;
  undefined1 uStack_2c8;
  byte bStack_2c7;
  byte bStack_2c6;
  byte bStack_2c5;
  undefined8 **ppuStack_2a8;
  undefined1 *puStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined **ppuStack_270;
  undefined4 uStack_268;
  undefined1 uStack_258;
  byte bStack_257;
  byte bStack_256;
  byte bStack_255;
  undefined ***pppuStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  short sStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  pppuStack_158 = &ppuStack_200;
  if (param_3 == 0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_330 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_358 = 0;
      ppuStack_360 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_360,param_1);
    }
    pppuVar4 = &ppuStack_4c8;
    FUN_108c2e2f8();
    pppuVar5 = &ppuStack_540;
    FUN_108c2d860();
    bStack_1e5 = *(byte *)((long)pppuVar4 + 0x1b) & *(byte *)((long)pppuVar5 + 0x1b);
    bStack_1e7 = (*(byte *)((long)pppuVar4 + 0x19) | *(byte *)((long)pppuVar5 + 0x19)) & 1;
    bStack_1e6 = (*(byte *)((long)pppuVar4 + 0x1a) | *(byte *)((long)pppuVar5 + 0x1a)) & 1;
    uStack_1f8 = 4;
    uStack_1e8 = 0;
    ppuStack_200 = &PTR_SUB_1108629c8;
    plStack_198 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1b8 = 0;
    pppuVar6 = &ppuStack_b0;
    pppuStack_1c8 = pppuVar4;
    pppuStack_1c0 = pppuVar5;
    FUN_108c2dcd4();
    bStack_257 = *(byte *)((long)pppuVar6 + 0x19);
    bStack_256 = *(byte *)((long)pppuVar6 + 0x1a);
    uStack_268 = 0;
    uStack_258 = 0;
    bStack_255 = 1;
    ppuStack_270 = &PTR_SUB_1108629c8;
    lStack_228 = 0;
    pppuStack_230 = (undefined ***)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    plStack_208 = (long *)0x0;
    plStack_210 = (long *)0x0;
    bStack_177 = bStack_1e7 | bStack_257;
    bStack_176 = bStack_1e6 | bStack_256;
    uStack_188 = 4;
    uStack_178 = 0;
    bStack_175 = bStack_1e5;
    ppuStack_190 = &PTR_SUB_1108629c8;
    pppuStack_150 = &ppuStack_270;
    uStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    ppuVar7 = &puStack_558;
    pppuStack_238 = pppuVar6;
    func_0x000107c2a7fc();
    bStack_2c7 = *(byte *)((long)ppuVar7 + 0x19);
    bStack_2c6 = *(byte *)((long)ppuVar7 + 0x1a);
    uStack_2d8 = 0;
    uStack_2c8 = 0;
    bStack_2c5 = 1;
    ppuStack_2e0 = &PTR_SUB_1108629c8;
    lStack_298 = 0;
    puStack_2a0 = (undefined1 *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    plStack_278 = (long *)0x0;
    plStack_280 = (long *)0x0;
    bStack_106 = bStack_176 | bStack_2c6;
    uStack_118 = 4;
    sStack_108 = (ushort)(bStack_177 | bStack_2c7) << 8;
    bStack_105 = bStack_175;
    ppuStack_120 = &PTR_SUB_1108629c8;
    pppuStack_e8 = &ppuStack_190;
    pppuStack_e0 = &ppuStack_2e0;
    uStack_d0 = 0;
    lStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    ppuStack_3d8 = (undefined **)0x0;
    uStack_3d0 = (undefined **)0x0;
    uStack_3c8 = 0;
    ppuStack_450 = (undefined **)CONCAT44(ppuStack_450._4_4_,param_2);
    pppuVar4 = &ppuStack_360;
    ppuStack_2a8 = ppuVar7;
    func_0x000107c310cc(pppuVar4,&ppuStack_120,&ppuStack_3d8,&ppuStack_450);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_3d8 != (undefined **)0x0) {
      uStack_3d0 = ppuStack_3d8;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_SUB_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_278;
    ppuStack_2e0 = &PTR_SUB_1108629c8;
    plStack_278 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_280;
    plStack_280 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_298 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_SUB_1108629c8;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_208;
    ppuStack_270 = &PTR_SUB_1108629c8;
    plStack_208 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_210;
    plStack_210 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_228 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_198;
    ppuStack_200 = &PTR_SUB_1108629c8;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1b8 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_338);
    _objc_release(uStack_348);
    uVar8 = uStack_350;
  }
  else {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppuStack_b0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_b0,param_1);
    }
    ppuVar7 = (undefined8 **)&uStack_2e1;
    FUN_108c2e2f8();
    puVar2 = &uStack_2e2;
    FUN_108c2d860();
    bStack_2c5 = *(byte *)((long)ppuVar7 + 0x1b) & puVar2[0x1b];
    bStack_2c7 = (*(byte *)((long)ppuVar7 + 0x19) | puVar2[0x19]) & 1;
    bStack_2c6 = (*(byte *)((long)ppuVar7 + 0x1a) | puVar2[0x1a]) & 1;
    uStack_2d8 = 4;
    uStack_2c8 = 0;
    ppuStack_2e0 = &PTR_SUB_1108629c8;
    plStack_278 = (long *)0x0;
    plStack_280 = (long *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_298 = 0;
    puVar3 = &uStack_361;
    ppuStack_2a8 = ppuVar7;
    puStack_2a0 = puVar2;
    FUN_108c2dcd4();
    uStack_358 = (ulong)uStack_358._4_4_ << 0x20;
    uStack_348._0_4_ = CONCAT13(1,(uint3)*(ushort *)(puVar3 + 0x19) << 8);
    ppuStack_360 = &PTR_SUB_1108629c8;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    plStack_2f8 = (long *)0x0;
    plStack_300 = (long *)0x0;
    bStack_257 = bStack_2c7 | (byte)*(ushort *)(puVar3 + 0x19);
    bStack_256 = bStack_2c6 | puVar3[0x1a];
    uStack_268 = 4;
    uStack_258 = 0;
    bStack_255 = bStack_2c5;
    ppuStack_270 = &PTR_SUB_1108629c8;
    pppuStack_230 = &ppuStack_360;
    uStack_220 = 0;
    lStack_228 = 0;
    plStack_210 = (long *)0x0;
    uStack_218 = 0;
    plStack_208 = (long *)0x0;
    puVar2 = &uStack_3d9;
    puStack_328 = puVar3;
    pppuStack_238 = &ppuStack_2e0;
    func_0x000107c2a7fc();
    bStack_3bf = puVar2[0x19];
    bStack_3be = puVar2[0x1a];
    uStack_3d0 = (undefined **)((ulong)uStack_3d0._4_4_ << 0x20);
    uStack_3c0 = 0;
    uStack_3bd = 1;
    ppuStack_3d8 = &PTR_SUB_1108629c8;
    lStack_390 = 0;
    uStack_398 = 0;
    uStack_380 = 0;
    uStack_388 = 0;
    plStack_370 = (long *)0x0;
    plStack_378 = (long *)0x0;
    bStack_1e7 = bStack_257 | bStack_3bf;
    bStack_1e6 = bStack_256 | bStack_3be;
    uStack_1f8 = 4;
    uStack_1e8 = 0;
    bStack_1e5 = bStack_255;
    ppuStack_200 = &PTR_SUB_1108629c8;
    pppuStack_1c8 = &ppuStack_270;
    pppuStack_1c0 = &ppuStack_3d8;
    uStack_1b0 = 0;
    lStack_1b8 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    plStack_198 = (long *)0x0;
    puVar3 = &uStack_451;
    puStack_3a0 = puVar2;
    FUN_108c2d918();
    bStack_437 = puVar3[0x19];
    bStack_436 = puVar3[0x1a];
    bStack_435 = puVar3[0x1b];
    uStack_448 = 2;
    uStack_438 = 0;
    ppuStack_450 = &PTR_SUB_110862700;
    puStack_408 = (undefined *)0x0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    plStack_3e8 = (long *)0x0;
    plStack_3f0 = (long *)0x0;
    bStack_177 = bStack_1e7 | bStack_437;
    bStack_176 = bStack_1e6 | bStack_436;
    bStack_175 = bStack_1e5 & bStack_435;
    uStack_188 = 4;
    uStack_178 = 0;
    ppuStack_190 = &PTR_SUB_1108629c8;
    pppuStack_150 = &ppuStack_450;
    uStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    puVar2 = &uStack_4c9;
    puStack_418 = puVar3;
    FUN_108c2d918();
    uStack_538 = 0xf;
    uStack_528 = 0x100;
    ppuStack_510 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuStack_540 = &PTR_DAT_110862760;
    uStack_500 = 0;
    uStack_508 = 0;
    uStack_4f0 = 0;
    uStack_4f8 = 0;
    plStack_4e0 = (long *)0x0;
    uStack_4e8 = 0;
    plStack_4d8 = (long *)0x0;
    bStack_4ae = puVar2[0x1a];
    bStack_4ad = puVar2[0x1b];
    uStack_4c0 = 0xb;
    uStack_4b0 = 0x100;
    ppuStack_4c8 = &PTR_SUB_110862700;
    pppuStack_e0 = &ppuStack_4c8;
    plStack_460 = (long *)0x0;
    uStack_478 = 0;
    uStack_480 = 0;
    plStack_468 = (long *)0x0;
    uStack_470 = 0;
    bStack_106 = bStack_176 | bStack_4ae;
    bStack_105 = bStack_175 & bStack_4ad;
    uStack_118 = 4;
    sStack_108 = 0x100;
    ppuStack_120 = &PTR_SUB_1108629c8;
    pppuStack_e8 = &ppuStack_190;
    uStack_d0 = 0;
    lStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    puStack_558 = (undefined8 *)0x0;
    puStack_550 = (undefined8 *)0x0;
    uStack_548 = 0;
    pppuVar4 = &ppuStack_b0;
    uStack_55c = param_2;
    puStack_490 = puVar2;
    pppuStack_488 = &ppuStack_540;
    func_0x000107c310cc(pppuVar4,&ppuStack_120,&puStack_558,&uStack_55c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_558 != (undefined8 *)0x0) {
      puStack_550 = puStack_558;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_SUB_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_460;
    ppuStack_4c8 = &PTR_SUB_110862700;
    plStack_460 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_468;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_558 = &uStack_480;
    func_0x000107c27dd4(&puStack_558);
    plVar1 = plStack_4d8;
    ppuStack_540 = &PTR_DAT_110862760;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4e0;
    plStack_4e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_558 = &uStack_4f8;
    func_0x000107c27dd4(&puStack_558);
    _objc_release(ppuStack_510);
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_SUB_1108629c8;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3e8;
    ppuStack_450 = &PTR_SUB_110862700;
    plStack_3e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3f0;
    plStack_3f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4c8 = &puStack_408;
    func_0x000107c27dd4(&ppuStack_4c8);
    plVar1 = plStack_198;
    ppuStack_200 = &PTR_SUB_1108629c8;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1b8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_370;
    ppuStack_3d8 = &PTR_SUB_1108629c8;
    plStack_370 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_378;
    plStack_378 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_390 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_208;
    ppuStack_270 = &PTR_SUB_1108629c8;
    plStack_208 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_210;
    plStack_210 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_228 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_2f8;
    ppuStack_360 = &PTR_SUB_1108629c8;
    plStack_2f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_300;
    plStack_300 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_318 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_278;
    ppuStack_2e0 = &PTR_SUB_1108629c8;
    plStack_278 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_280;
    plStack_280 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_298 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_88);
    _objc_release(uStack_98);
    uVar8 = uStack_a0;
  }
  _objc_release(uVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
  return;
}



/* Entry: 108c19bc8; end: 108c1a097;  */

void FUN_108c19bc8(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_3ec;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined1 uStack_3c9;
  undefined **ppuStack_3c8;
  undefined4 uStack_3c0;
  undefined1 uStack_3b0;
  byte bStack_3af;
  byte bStack_3ae;
  undefined1 uStack_3ad;
  undefined1 *puStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  undefined1 uStack_351;
  undefined **ppuStack_350;
  undefined4 uStack_348;
  undefined1 uStack_338;
  byte bStack_337;
  byte bStack_336;
  undefined1 uStack_335;
  undefined1 *puStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined1 uStack_2d9;
  undefined **ppuStack_2d8;
  undefined4 uStack_2d0;
  undefined1 uStack_2c0;
  byte bStack_2bf;
  byte bStack_2be;
  undefined1 uStack_2bd;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined **ppuStack_260;
  undefined4 uStack_258;
  undefined1 uStack_248;
  byte bStack_247;
  byte bStack_246;
  byte bStack_245;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1d8;
  byte bStack_1d7;
  byte bStack_1d6;
  byte bStack_1d5;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined1 uStack_168;
  byte bStack_167;
  byte bStack_166;
  byte bStack_165;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined1 uStack_f8;
  byte bStack_f7;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_261;
  FUN_108c2e2f8();
  puVar3 = &uStack_262;
  FUN_108c2d860();
  bStack_245 = puVar2[0x1b] & puVar3[0x1b];
  bStack_247 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_246 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_258 = 4;
  uStack_248 = 0;
  ppuStack_260 = &PTR_SUB_1108629c8;
  plStack_1f8 = (long *)0x0;
  plStack_200 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_218 = 0;
  puVar4 = &uStack_2d9;
  puStack_228 = puVar2;
  puStack_220 = puVar3;
  FUN_108c2dcd4();
  bStack_2bf = puVar4[0x19];
  bStack_2be = puVar4[0x1a];
  uStack_2d0 = 0;
  uStack_2c0 = 0;
  uStack_2bd = 1;
  ppuStack_2d8 = &PTR_SUB_1108629c8;
  lStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  plStack_270 = (long *)0x0;
  plStack_278 = (long *)0x0;
  bStack_1d7 = bStack_247 | bStack_2bf;
  bStack_1d6 = bStack_246 | bStack_2be;
  uStack_1e8 = 4;
  uStack_1d8 = 0;
  bStack_1d5 = bStack_245;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  pppuStack_1b0 = &ppuStack_2d8;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  puVar2 = &uStack_351;
  puStack_2a0 = puVar4;
  pppuStack_1b8 = &ppuStack_260;
  func_0x000107c2a7fc();
  bStack_337 = puVar2[0x19];
  bStack_336 = puVar2[0x1a];
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_335 = 1;
  ppuStack_350 = &PTR_SUB_1108629c8;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  plStack_2e8 = (long *)0x0;
  plStack_2f0 = (long *)0x0;
  bStack_167 = bStack_1d7 | bStack_337;
  bStack_166 = bStack_1d6 | bStack_336;
  uStack_178 = 4;
  uStack_168 = 0;
  bStack_165 = bStack_1d5;
  ppuStack_180 = &PTR_SUB_1108629c8;
  pppuStack_148 = &ppuStack_1f0;
  pppuStack_140 = &ppuStack_350;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puVar3 = &uStack_3c9;
  puStack_318 = puVar2;
  FUN_108c2dea4();
  bStack_3af = puVar3[0x19];
  bStack_3ae = puVar3[0x1a];
  uStack_3c0 = 0;
  uStack_3b0 = 0;
  uStack_3ad = 1;
  ppuStack_3c8 = &PTR_SUB_1108629c8;
  lStack_380 = 0;
  uStack_388 = 0;
  uStack_370 = 0;
  uStack_378 = 0;
  plStack_360 = (long *)0x0;
  plStack_368 = (long *)0x0;
  bStack_f7 = bStack_167 | bStack_3af;
  bStack_f6 = bStack_166 | bStack_3ae;
  uStack_108 = 4;
  uStack_f8 = 0;
  bStack_f5 = bStack_165;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d0 = &ppuStack_3c8;
  uStack_c0 = 0;
  lStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  lStack_3e8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  puVar5 = &uStack_a0;
  uStack_3ec = param_2;
  puStack_390 = puVar3;
  pppuStack_d8 = &ppuStack_180;
  func_0x000107c310cc(puVar5,&ppuStack_110,&lStack_3e8,&uStack_3ec);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_360;
  ppuStack_3c8 = &PTR_SUB_1108629c8;
  plStack_360 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_368;
  plStack_368 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_380 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2e8;
  ppuStack_350 = &PTR_SUB_1108629c8;
  plStack_2e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2f0;
  plStack_2f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_308 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_SUB_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_270;
  ppuStack_2d8 = &PTR_SUB_1108629c8;
  plStack_270 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_278;
  plStack_278 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_290 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1f8;
  ppuStack_260 = &PTR_SUB_1108629c8;
  plStack_1f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_218 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c1a098; end: 108c1a527;  */

void FUN_108c1a098(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_3f4;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3c0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined1 uStack_361;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined2 uStack_348;
  byte bStack_346;
  byte bStack_345;
  undefined1 *puStack_328;
  undefined ***pppuStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  func_0x000100c43338();
  puVar3 = &uStack_202;
  func_0x000100c486cc();
  bStack_1e5 = puVar2[0x1b] & puVar3[0x1b];
  bStack_1e7 = (puVar2[0x19] | puVar3[0x19]) & 1;
  bStack_1e6 = (puVar2[0x1a] | puVar3[0x1a]) & 1;
  uStack_1f8 = 4;
  uStack_1e8 = 0;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  puVar4 = &uStack_279;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar3;
  FUN_108c2d4c4();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  uStack_2c0 = 1;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  uStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  bStack_176 = bStack_1e6 | bStack_25e;
  bStack_175 = bStack_1e5 & bStack_25d;
  uStack_188 = 4;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_SUB_1108629c8;
  pppuStack_150 = &ppuStack_278;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_361;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  pppuStack_158 = &ppuStack_200;
  func_0x000107c2a7fc();
  uStack_3d0 = 0xf;
  uStack_3c0 = 0x100;
  uStack_3a8 = 0;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  lStack_390 = 0;
  plStack_378 = (long *)0x0;
  uStack_380 = 0;
  plStack_370 = (long *)0x0;
  bStack_346 = puVar2[0x1a];
  bStack_345 = puVar2[0x1b];
  uStack_358 = 10;
  uStack_348 = 0x100;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  uStack_310 = 0;
  lStack_318 = 0;
  plStack_300 = (long *)0x0;
  uStack_308 = 0;
  bStack_106 = bStack_176 | bStack_346;
  bStack_105 = bStack_175 & bStack_345;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_360;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3f4 = 0;
  puVar5 = &uStack_b0;
  puStack_328 = puVar2;
  pppuStack_320 = &ppuStack_3d8;
  func_0x000107c310cc(puVar5,&ppuStack_120,&lStack_3f0,&uStack_3f4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3f0 != 0) {
    lStack_3e8 = lStack_3f0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  ppuStack_360 = &PTR_SUB_1108629c8;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_318 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_370;
  ppuStack_3d8 = &PTR_SUB_1108629c8;
  plStack_370 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_378;
  plStack_378 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_390 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_SUB_1108629c8;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c1a528; end: 108c1aa4b;  */

void FUN_108c1a528(long param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_28c [4];
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 auStack_182 [2];
  undefined **ppuStack_180;
  undefined4 uStack_178;
  short sStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_268 = 0;
      ppuStack_270 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_270,param_1);
    }
    pppuVar5 = (undefined ***)auStack_28c;
    FUN_108c2e798();
    puVar6 = auStack_182 + 1;
    func_0x000107c2a7fc();
    uStack_1f0 = 0xf;
    uStack_1e0 = 0x100;
    uStack_1c8 = 0;
    ppuStack_1f8 = &PTR_SUB_1108629c8;
    pppuStack_1b8 = (undefined ***)0x0;
    puStack_1c0 = (undefined1 *)0x0;
    uStack_1a8 = 0;
    lStack_1b0 = 0;
    plStack_198 = (long *)0x0;
    uStack_1a0 = 0;
    plStack_190 = (long *)0x0;
    bStack_166 = puVar6[0x1a];
    bStack_165 = puVar6[0x1b];
    uStack_178 = 10;
    sStack_168 = 0x100;
    ppuStack_180 = &PTR_SUB_1108629c8;
    pppuStack_140 = &ppuStack_1f8;
    uStack_130 = 0;
    lStack_138 = 0;
    plStack_120 = (long *)0x0;
    uStack_128 = 0;
    plStack_118 = (long *)0x0;
    ppuStack_110 = &PTR_SUB_1108629c8;
    bStack_f6 = *(byte *)((long)pppuVar5 + 0x1a) | bStack_166;
    bStack_f5 = *(byte *)((long)pppuVar5 + 0x1b) & bStack_165;
    uStack_108 = 4;
    uStack_f8 = 0x100;
    uStack_c0 = 0;
    lStack_c8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    ppuStack_a0 = (undefined **)0x0;
    ppuStack_98 = (undefined **)0x0;
    uStack_90 = 0;
    uStack_288 = (ulong)uStack_288._4_4_ << 0x20;
    pppuVar7 = &ppuStack_270;
    puStack_148 = puVar6;
    pppuStack_d8 = pppuVar5;
    pppuStack_d0 = &ppuStack_180;
    func_0x000107c310cc(pppuVar7,&ppuStack_110,&ppuStack_a0,&uStack_288);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_a0 != (undefined **)0x0) {
      ppuStack_98 = ppuStack_a0;
      __ZdlPv();
    }
    plVar3 = plStack_a8;
    ppuStack_110 = &PTR_SUB_1108629c8;
    plStack_a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_c8 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_118;
    ppuStack_180 = &PTR_SUB_1108629c8;
    plStack_118 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_120;
    plStack_120 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_138 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_190;
    ppuStack_1f8 = &PTR_SUB_1108629c8;
    plStack_190 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_198;
    plStack_198 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_1b0 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_248);
    _objc_release(uStack_258);
    uVar8 = uStack_260;
  }
  else {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      ppuStack_98 = (undefined **)0x0;
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_a0,param_1);
    }
    puVar6 = auStack_182 + 1;
    FUN_108c2e798();
    pppuVar5 = (undefined ***)auStack_182;
    FUN_108c2d860();
    bVar2 = puVar6[0x1b] & *(byte *)((long)pppuVar5 + 0x1b);
    bVar1 = (puVar6[0x1a] | *(byte *)((long)pppuVar5 + 0x1a)) & 1;
    uStack_178 = 4;
    sStack_168 = ((puVar6[0x19] | *(byte *)((long)pppuVar5 + 0x19)) & 1) << 8;
    ppuStack_180 = &PTR_SUB_1108629c8;
    plStack_118 = (long *)0x0;
    plStack_120 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_138 = 0;
    puVar4 = &uStack_1f9;
    bStack_166 = bVar1;
    bStack_165 = bVar2;
    puStack_148 = puVar6;
    pppuStack_140 = pppuVar5;
    func_0x000107c2a7fc();
    uStack_268 = CONCAT44(uStack_268._4_4_,0xf);
    uStack_258 = CONCAT44(uStack_258._4_4_,0x100);
    uStack_240 = uStack_240 & 0xffffffffffffff00;
    ppuStack_270 = &PTR_SUB_1108629c8;
    uStack_230 = 0;
    uStack_238 = 0;
    uStack_220 = 0;
    lStack_228 = 0;
    plStack_210 = (long *)0x0;
    uStack_218 = 0;
    plStack_208 = (long *)0x0;
    uStack_1f0 = 10;
    uStack_1e0 = CONCAT13(puVar4[0x1b],CONCAT12(puVar4[0x1a],0x100));
    ppuStack_1f8 = &PTR_SUB_1108629c8;
    plStack_190 = (long *)0x0;
    uStack_1a8 = 0;
    lStack_1b0 = 0;
    plStack_198 = (long *)0x0;
    uStack_1a0 = 0;
    bStack_f6 = puVar4[0x1a] | bVar1;
    bStack_f5 = puVar4[0x1b] & bVar2;
    uStack_108 = 4;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_SUB_1108629c8;
    pppuStack_d0 = &ppuStack_1f8;
    uStack_c0 = 0;
    lStack_c8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    uStack_288 = 0;
    lStack_280 = 0;
    uStack_278 = 0;
    auStack_28c = (undefined1  [4])0x0;
    pppuVar7 = &ppuStack_a0;
    puStack_1c0 = puVar4;
    pppuStack_1b8 = &ppuStack_270;
    pppuStack_d8 = &ppuStack_180;
    func_0x000107c310cc(pppuVar7,&ppuStack_110,&uStack_288,auStack_28c);
    _objc_retainAutoreleasedReturnValue();
    if (uStack_288 != 0) {
      lStack_280 = uStack_288;
      __ZdlPv();
    }
    plVar3 = plStack_a8;
    ppuStack_110 = &PTR_SUB_1108629c8;
    plStack_a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_c8 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_190;
    ppuStack_1f8 = &PTR_SUB_1108629c8;
    plStack_190 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_198;
    plStack_198 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_1b0 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_208;
    ppuStack_270 = &PTR_SUB_1108629c8;
    plStack_208 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_210;
    plStack_210 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_228 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_118;
    ppuStack_180 = &PTR_SUB_1108629c8;
    plStack_118 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_120;
    plStack_120 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_138 != 0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_78);
    _objc_release(uStack_88);
    uVar8 = uStack_90;
  }
  _objc_release(uVar8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar7);
  return;
}



/* Entry: 108c1aa4c; end: 108c1b05b;  */

void FUN_108c1aa4c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_121;
  FUN_108c2d0fc();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_2);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar3 = &uStack_b0;
  uStack_168 = param_2;
  puStack_e8 = puVar2;
  pppuStack_e0 = &ppuStack_198;
  func_0x000107c310cc(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000107c27dd4(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000107c27dd4(&puStack_1b0);
  _objc_release(uStack_168);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_b0,param_1);
    }
    puVar2 = &uStack_121;
    FUN_108c2d274();
    uStack_190 = 0xf;
    uStack_180 = 0x100;
    _objc_retain(param_2);
    uStack_1a0 = 0;
    ppuStack_198 = &PTR_DAT_110862760;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    plStack_130 = (long *)0x0;
    uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_118 = 10;
    uStack_108 = 0x100;
    ppuStack_120 = &PTR_SUB_110862700;
    pppuStack_e0 = &ppuStack_198;
    uStack_d0 = 0;
    uStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    puStack_1b0 = (undefined8 *)0x0;
    puStack_1a8 = (undefined8 *)0x0;
    uStack_1b4 = 0;
    puVar4 = &uStack_b0;
    uStack_168 = param_2;
    puStack_e8 = puVar2;
    func_0x000107c310cc(puVar4,&ppuStack_120,&puStack_1b0,&uStack_1b4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puStack_1b0 != (undefined8 *)0x0) {
      puStack_1a8 = puStack_1b0;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_SUB_110862700;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1b0 = &uStack_d8;
    func_0x000107c27dd4(&puStack_1b0);
    plVar1 = plStack_130;
    ppuStack_198 = &PTR_DAT_110862760;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1b0 = &uStack_150;
    func_0x000107c27dd4(&puStack_1b0);
    _objc_release(uStack_168);
    func_0x000107c27da8(&uStack_88);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    puVar3 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined8 *)0x0) {
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (param_1 == 0) {
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_b0,param_1);
      }
      puVar2 = &uStack_121;
      FUN_108c2cf84();
      uStack_190 = 0xf;
      uStack_180 = 0x100;
      _objc_retain(param_2);
      uStack_1a0 = 0;
      ppuStack_198 = &PTR_DAT_110862760;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      plStack_138 = (long *)0x0;
      uStack_140 = 0;
      plStack_130 = (long *)0x0;
      uStack_106 = *(undefined2 *)(puVar2 + 0x1a);
      uStack_118 = 10;
      uStack_108 = 0x100;
      ppuStack_120 = &PTR_SUB_110862700;
      pppuStack_e0 = &ppuStack_198;
      uStack_d0 = 0;
      uStack_d8 = 0;
      plStack_c0 = (long *)0x0;
      uStack_c8 = 0;
      plStack_b8 = (long *)0x0;
      puStack_1b0 = (undefined8 *)0x0;
      puStack_1a8 = (undefined8 *)0x0;
      uStack_1b4 = 0;
      puVar3 = &uStack_b0;
      uStack_168 = param_2;
      puStack_e8 = puVar2;
      func_0x000107c310cc(puVar3,&ppuStack_120,&puStack_1b0,&uStack_1b4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puStack_1b0 != (undefined8 *)0x0) {
        puStack_1a8 = puStack_1b0;
        __ZdlPv();
      }
      plVar1 = plStack_b8;
      ppuStack_120 = &PTR_SUB_110862700;
      plStack_b8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_c0;
      plStack_c0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1b0 = &uStack_d8;
      func_0x000107c27dd4(&puStack_1b0);
      plVar1 = plStack_130;
      ppuStack_198 = &PTR_DAT_110862760;
      plStack_130 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_138;
      plStack_138 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1b0 = &uStack_150;
      func_0x000107c27dd4(&puStack_1b0);
      _objc_release(uStack_168);
      func_0x000107c27da8(&uStack_88);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      puVar5 = puVar3;
      func_0x00010bfb1920(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar4;
      func_0x00010bfb1920(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
    }
  }
  else {
    puVar5 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c1b05c; end: 108c1b1ef;  */

void FUN_108c1b05c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  func_0x000107c2a7f8(puVar2);
  func_0x000100c48938(auStack_110,param_2);
  func_0x000107c281a0(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x000107c310cc(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000107c27dd4(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000107c27dd4(&puStack_128);
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c1b1f0; end: 108c1b5bf;  */

void FUN_108c1b1f0(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_32c;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined *apuStack_228 [3];
  undefined1 uStack_209;
  undefined **appuStack_208 [3];
  byte bStack_1ef;
  byte bStack_1ee;
  byte bStack_1ed;
  undefined *apuStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  func_0x000100c43338();
  puVar5 = &uStack_209;
  func_0x000107c2a7f8(puVar5);
  func_0x000100c48938(apuStack_228,param_2);
  func_0x000107c281a0(appuStack_208,0xc,puVar5,apuStack_228);
  bVar2 = puVar4[0x1b];
  bStack_177 = (puVar4[0x19] | bStack_1ef) & 1;
  bVar1 = (puVar4[0x1a] | bStack_1ee) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_299;
  bStack_176 = bVar1;
  bStack_175 = bVar2 & bStack_1ed;
  puStack_158 = puVar4;
  pppuStack_150 = appuStack_208;
  func_0x000107c2a7fc();
  uStack_308 = 0xf;
  uStack_2f8 = 0x100;
  uStack_2e0 = 0;
  ppuStack_310 = &PTR_SUB_1108629c8;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  bStack_27e = puVar5[0x1a];
  bStack_27d = puVar5[0x1b];
  uStack_290 = 10;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  uStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  bStack_106 = bStack_27e | bVar1;
  bStack_105 = bStack_27d & bVar2 & bStack_1ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_298;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_32c = 0;
  puVar6 = &uStack_b0;
  puStack_260 = puVar5;
  pppuStack_258 = &ppuStack_310;
  pppuStack_e8 = &ppuStack_190;
  func_0x000107c310cc(puVar6,&ppuStack_120,&lStack_328,&uStack_32c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_2a8;
  ppuStack_310 = &PTR_SUB_1108629c8;
  plStack_2a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  appuStack_208[0] = &PTR_SUB_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_298 = apuStack_1c0;
  func_0x000107c27dd4(&ppuStack_298);
  ppuStack_298 = apuStack_228;
  func_0x000107c27dd4(&ppuStack_298);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c1b5c0; end: 108c1b98f;  */

void FUN_108c1b5c0(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_32c;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined *apuStack_228 [3];
  undefined1 uStack_209;
  undefined **appuStack_208 [3];
  byte bStack_1ef;
  byte bStack_1ee;
  byte bStack_1ed;
  undefined *apuStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  func_0x000100c43338();
  puVar5 = &uStack_209;
  func_0x000107c2a7f8(puVar5);
  func_0x000100c48938(apuStack_228,param_2);
  func_0x000107c281a0(appuStack_208,0xd,puVar5,apuStack_228);
  bVar2 = puVar4[0x1b];
  bStack_177 = (puVar4[0x19] | bStack_1ef) & 1;
  bVar1 = (puVar4[0x1a] | bStack_1ee) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_299;
  bStack_176 = bVar1;
  bStack_175 = bVar2 & bStack_1ed;
  puStack_158 = puVar4;
  pppuStack_150 = appuStack_208;
  func_0x000107c2a7fc();
  uStack_308 = 0xf;
  uStack_2f8 = 0x100;
  uStack_2e0 = 0;
  ppuStack_310 = &PTR_SUB_1108629c8;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  bStack_27e = puVar5[0x1a];
  bStack_27d = puVar5[0x1b];
  uStack_290 = 10;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  uStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  bStack_106 = bStack_27e | bVar1;
  bStack_105 = bStack_27d & bVar2 & bStack_1ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_298;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_32c = 0;
  puVar6 = &uStack_b0;
  puStack_260 = puVar5;
  pppuStack_258 = &ppuStack_310;
  pppuStack_e8 = &ppuStack_190;
  func_0x000107c310cc(puVar6,&ppuStack_120,&lStack_328,&uStack_32c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_2a8;
  ppuStack_310 = &PTR_SUB_1108629c8;
  plStack_2a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  appuStack_208[0] = &PTR_SUB_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_298 = apuStack_1c0;
  func_0x000107c27dd4(&ppuStack_298);
  ppuStack_298 = apuStack_228;
  func_0x000107c27dd4(&ppuStack_298);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c1b990; end: 108c1bd5f;  */

void FUN_108c1b990(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_32c;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined *apuStack_228 [3];
  undefined1 uStack_209;
  undefined **appuStack_208 [3];
  byte bStack_1ef;
  byte bStack_1ee;
  byte bStack_1ed;
  undefined *apuStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  FUN_108c2e2f8();
  puVar5 = &uStack_209;
  func_0x000107c2a7f8(puVar5);
  func_0x000100c48938(apuStack_228,param_2);
  func_0x000107c281a0(appuStack_208,0xd,puVar5,apuStack_228);
  bVar2 = puVar4[0x1b];
  bStack_177 = (puVar4[0x19] | bStack_1ef) & 1;
  bVar1 = (puVar4[0x1a] | bStack_1ee) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_299;
  bStack_176 = bVar1;
  bStack_175 = bVar2 & bStack_1ed;
  puStack_158 = puVar4;
  pppuStack_150 = appuStack_208;
  func_0x000107c2a7fc();
  uStack_308 = 0xf;
  uStack_2f8 = 0x100;
  uStack_2e0 = 0;
  ppuStack_310 = &PTR_SUB_1108629c8;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  bStack_27e = puVar5[0x1a];
  bStack_27d = puVar5[0x1b];
  uStack_290 = 10;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  uStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  bStack_106 = bStack_27e | bVar1;
  bStack_105 = bStack_27d & bVar2 & bStack_1ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_298;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_32c = 0;
  puVar6 = &uStack_b0;
  puStack_260 = puVar5;
  pppuStack_258 = &ppuStack_310;
  pppuStack_e8 = &ppuStack_190;
  func_0x000107c310cc(puVar6,&ppuStack_120,&lStack_328,&uStack_32c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_2a8;
  ppuStack_310 = &PTR_SUB_1108629c8;
  plStack_2a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  appuStack_208[0] = &PTR_SUB_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_298 = apuStack_1c0;
  func_0x000107c27dd4(&ppuStack_298);
  ppuStack_298 = apuStack_228;
  func_0x000107c27dd4(&ppuStack_298);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c1bd60; end: 108c1be43;  */

void FUN_108c1bd60(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  puVar1 = &uStack_71;
  FUN_108c2e464(puVar1);
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_94 = 0;
  puVar2 = &uStack_70;
  func_0x000107c310cc(puVar2,puVar1,&lStack_90,&uStack_94);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c1be44; end: 108c1c5ff;  */

void FUN_108c1be44(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_39c [4];
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined1 uStack_309;
  undefined **ppuStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2f0;
  undefined1 uStack_2d8;
  undefined1 *puStack_2d0;
  undefined ***pppuStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined1 uStack_1e8;
  byte bStack_1e7;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  pppuStack_e8 = &ppuStack_190;
  if (param_3 == 0) {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_350 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_378 = 0;
      ppuStack_380 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_380,param_1);
    }
    pppuVar6 = (undefined ***)auStack_39c;
    FUN_108c2e464();
    puVar7 = &uStack_201;
    func_0x000107c2a7f8(puVar7);
    func_0x000100c48938(&ppuStack_b0,param_2);
    func_0x000107c281a0(&ppuStack_200,0xc,puVar7,&ppuStack_b0);
    bVar2 = *(byte *)((long)pppuVar6 + 0x1b) & bStack_1e5;
    bStack_177 = (*(byte *)((long)pppuVar6 + 0x19) | bStack_1e7) & 1;
    bVar1 = (*(byte *)((long)pppuVar6 + 0x1a) | bStack_1e6) & 1;
    uStack_188 = 4;
    uStack_178 = 0;
    ppuStack_190 = &PTR_SUB_1108629c8;
    uStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    puVar7 = &uStack_202;
    bStack_176 = bVar1;
    bStack_175 = bVar2;
    pppuStack_158 = pppuVar6;
    pppuStack_150 = &ppuStack_200;
    func_0x000107c2a7fc();
    uStack_300 = 0xf;
    uStack_2f0 = 0x100;
    uStack_2d8 = 0;
    ppuStack_308 = &PTR_SUB_1108629c8;
    pppuStack_2c8 = (undefined ***)0x0;
    puStack_2d0 = (undefined1 *)0x0;
    uStack_2b8 = 0;
    lStack_2c0 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    plStack_2a0 = (long *)0x0;
    bStack_25e = puVar7[0x1a];
    bStack_25d = puVar7[0x1b];
    uStack_270 = 10;
    uStack_260 = 0x100;
    ppuStack_278 = &PTR_SUB_1108629c8;
    pppuStack_238 = &ppuStack_308;
    plStack_210 = (long *)0x0;
    plStack_218 = (long *)0x0;
    uStack_220 = 0;
    uStack_228 = 0;
    puStack_230 = (undefined *)0x0;
    bStack_106 = bStack_25e | bVar1;
    bStack_105 = bStack_25d & bVar2;
    uStack_118 = 4;
    uStack_108 = 0x100;
    ppuStack_120 = &PTR_SUB_1108629c8;
    pppuStack_e0 = &ppuStack_278;
    uStack_d0 = 0;
    lStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    puStack_298 = (undefined *)0x0;
    puStack_290 = (undefined *)0x0;
    uStack_288 = 0;
    uStack_398 = (ulong)uStack_398._4_4_ << 0x20;
    pppuVar6 = &ppuStack_380;
    puStack_240 = puVar7;
    func_0x000107c310cc(pppuVar6,&ppuStack_120,&puStack_298,&uStack_398);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_298 != (undefined *)0x0) {
      puStack_290 = puStack_298;
      __ZdlPv();
    }
    plVar3 = plStack_b8;
    ppuStack_120 = &PTR_SUB_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_d8 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_210;
    ppuStack_278 = &PTR_SUB_1108629c8;
    plStack_210 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_218;
    plStack_218 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (puStack_230 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar3 = plStack_2a0;
    ppuStack_308 = &PTR_SUB_1108629c8;
    plStack_2a0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_2a8;
    plStack_2a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_2c0 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_128;
    ppuStack_190 = &PTR_SUB_1108629c8;
    plStack_128 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_198;
    ppuStack_200 = &PTR_SUB_110862700;
    plStack_198 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    ppuStack_278 = &puStack_1b8;
    func_0x000107c27dd4(&ppuStack_278);
    ppuStack_278 = (undefined **)&ppuStack_b0;
    func_0x000107c27dd4(&ppuStack_278);
    func_0x000107c27da8(&uStack_358);
    _objc_release(uStack_368);
    uVar8 = uStack_370;
  }
  else {
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (param_1 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      ppuStack_b0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_b0,param_1);
    }
    puVar7 = &uStack_201;
    FUN_108c2e464();
    puVar4 = &uStack_202;
    FUN_108c2d860();
    bStack_1e5 = puVar7[0x1b] & puVar4[0x1b];
    bStack_1e7 = (puVar7[0x19] | puVar4[0x19]) & 1;
    bStack_1e6 = (puVar7[0x1a] | puVar4[0x1a]) & 1;
    uStack_1f8 = 4;
    uStack_1e8 = 0;
    ppuStack_200 = &PTR_SUB_1108629c8;
    plStack_198 = (long *)0x0;
    uStack_1b0 = 0;
    puStack_1b8 = (undefined *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    puVar5 = &uStack_279;
    puStack_1c8 = puVar7;
    puStack_1c0 = puVar4;
    func_0x000107c2a7f8(puVar5);
    func_0x000100c48938(&puStack_298,param_2);
    func_0x000107c281a0(&ppuStack_278,0xc,puVar5,&puStack_298);
    bStack_175 = bStack_1e5 & bStack_25d;
    bStack_177 = (bStack_1e7 | uStack_260._1_1_) & 1;
    bStack_176 = (bStack_1e6 | bStack_25e) & 1;
    uStack_188 = 4;
    uStack_178 = 0;
    ppuStack_190 = &PTR_SUB_1108629c8;
    pppuStack_158 = &ppuStack_200;
    uStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    puVar7 = &uStack_309;
    pppuStack_150 = &ppuStack_278;
    func_0x000107c2a7fc();
    uStack_378 = CONCAT44(uStack_378._4_4_,0xf);
    uStack_368 = CONCAT44(uStack_368._4_4_,0x100);
    uStack_350 = uStack_350 & 0xffffffffffffff00;
    ppuStack_380 = &PTR_SUB_1108629c8;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_330 = 0;
    lStack_338 = 0;
    plStack_320 = (long *)0x0;
    uStack_328 = 0;
    plStack_318 = (long *)0x0;
    uStack_300 = 10;
    uStack_2f0 = CONCAT13(puVar7[0x1b],CONCAT12(puVar7[0x1a],0x100));
    ppuStack_308 = &PTR_SUB_1108629c8;
    plStack_2a0 = (long *)0x0;
    uStack_2b8 = 0;
    lStack_2c0 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    bStack_106 = bStack_176 | puVar7[0x1a];
    bStack_105 = bStack_175 & puVar7[0x1b];
    uStack_118 = 4;
    uStack_108 = 0x100;
    ppuStack_120 = &PTR_SUB_1108629c8;
    pppuStack_e0 = &ppuStack_308;
    uStack_d0 = 0;
    lStack_d8 = 0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    plStack_b8 = (long *)0x0;
    uStack_398 = 0;
    lStack_390 = 0;
    uStack_388 = 0;
    auStack_39c = (undefined1  [4])0x0;
    pppuVar6 = &ppuStack_b0;
    puStack_2d0 = puVar7;
    pppuStack_2c8 = &ppuStack_380;
    func_0x000107c310cc(pppuVar6,&ppuStack_120,&uStack_398,auStack_39c);
    _objc_retainAutoreleasedReturnValue();
    if (uStack_398 != 0) {
      lStack_390 = uStack_398;
      __ZdlPv();
    }
    plVar3 = plStack_b8;
    ppuStack_120 = &PTR_SUB_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_d8 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_2a0;
    ppuStack_308 = &PTR_SUB_1108629c8;
    plStack_2a0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_2a8;
    plStack_2a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_2c0 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_318;
    ppuStack_380 = &PTR_SUB_1108629c8;
    plStack_318 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_320;
    plStack_320 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_338 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_128;
    ppuStack_190 = &PTR_SUB_1108629c8;
    plStack_128 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    plVar3 = plStack_210;
    ppuStack_278 = &PTR_SUB_110862700;
    plStack_210 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_218;
    plStack_218 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    ppuStack_308 = &puStack_230;
    func_0x000107c27dd4(&ppuStack_308);
    ppuStack_308 = &puStack_298;
    func_0x000107c27dd4(&ppuStack_308);
    plVar3 = plStack_198;
    ppuStack_200 = &PTR_SUB_1108629c8;
    plStack_198 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (puStack_1b8 != (undefined *)0x0) {
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_88);
    _objc_release(uStack_98);
    uVar8 = uStack_a0;
  }
  _objc_release(uVar8);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar6);
  return;
}



/* Entry: 108c1c600; end: 108c1c9cf;  */

void FUN_108c1c600(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_32c;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_2f8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined1 uStack_299;
  undefined **ppuStack_298;
  undefined4 uStack_290;
  undefined2 uStack_280;
  byte bStack_27e;
  byte bStack_27d;
  undefined1 *puStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  long *plStack_230;
  undefined *apuStack_228 [3];
  undefined1 uStack_209;
  undefined **appuStack_208 [3];
  byte bStack_1ef;
  byte bStack_1ee;
  byte bStack_1ed;
  undefined *apuStack_1c0 [3];
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar4 = &uStack_191;
  FUN_108c2e464();
  puVar5 = &uStack_209;
  func_0x000107c2a7f8(puVar5);
  func_0x000100c48938(apuStack_228,param_2);
  func_0x000107c281a0(appuStack_208,0xd,puVar5,apuStack_228);
  bVar2 = puVar4[0x1b];
  bStack_177 = (puVar4[0x19] | bStack_1ef) & 1;
  bVar1 = (puVar4[0x1a] | bStack_1ee) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_299;
  bStack_176 = bVar1;
  bStack_175 = bVar2 & bStack_1ed;
  puStack_158 = puVar4;
  pppuStack_150 = appuStack_208;
  func_0x000107c2a7fc();
  uStack_308 = 0xf;
  uStack_2f8 = 0x100;
  uStack_2e0 = 0;
  ppuStack_310 = &PTR_SUB_1108629c8;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  bStack_27e = puVar5[0x1a];
  bStack_27d = puVar5[0x1b];
  uStack_290 = 10;
  uStack_280 = 0x100;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  uStack_248 = 0;
  lStack_250 = 0;
  plStack_238 = (long *)0x0;
  uStack_240 = 0;
  bStack_106 = bStack_27e | bVar1;
  bStack_105 = bStack_27d & bVar2 & bStack_1ed;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e0 = &ppuStack_298;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_32c = 0;
  puVar6 = &uStack_b0;
  puStack_260 = puVar5;
  pppuStack_258 = &ppuStack_310;
  pppuStack_e8 = &ppuStack_190;
  func_0x000107c310cc(puVar6,&ppuStack_120,&lStack_328,&uStack_32c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_328 != 0) {
    lStack_320 = lStack_328;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_230;
  ppuStack_298 = &PTR_SUB_1108629c8;
  plStack_230 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_238;
  plStack_238 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_250 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_2a8;
  ppuStack_310 = &PTR_SUB_1108629c8;
  plStack_2a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_2c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  appuStack_208[0] = &PTR_SUB_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_298 = apuStack_1c0;
  func_0x000107c27dd4(&ppuStack_298);
  ppuStack_298 = apuStack_228;
  func_0x000107c27dd4(&ppuStack_298);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c1c9d0; end: 108c1cf3f;  */

void FUN_108c1c9d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_484;
  long lStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined **ppuStack_468;
  undefined4 uStack_460;
  undefined4 uStack_450;
  undefined1 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  long *plStack_400;
  undefined1 uStack_3f1;
  undefined **ppuStack_3f0;
  undefined4 uStack_3e8;
  undefined2 uStack_3d8;
  byte bStack_3d6;
  byte bStack_3d5;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined *apuStack_380 [3];
  undefined1 uStack_361;
  undefined **appuStack_360 [3];
  byte bStack_347;
  byte bStack_346;
  byte bStack_345;
  undefined *apuStack_318 [3];
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined2 uStack_1e8;
  byte bStack_1e6;
  byte bStack_1e5;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  byte bStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar2 = &uStack_201;
  FUN_108c2e798();
  puVar3 = &uStack_279;
  FUN_108c2e51c();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110ab8940;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar3[0x1a];
  bStack_25d = puVar3[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110ab88e0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_1e6 = puVar2[0x1a] | bStack_25e;
  bStack_1e5 = puVar2[0x1b] & bStack_25d;
  uStack_1f8 = 4;
  uStack_1e8 = 0x100;
  ppuStack_200 = &PTR_SUB_1108629c8;
  pppuStack_1c0 = &ppuStack_278;
  uStack_1b0 = 0;
  lStack_1b8 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_1a8 = 0;
  plStack_198 = (long *)0x0;
  puVar4 = &uStack_361;
  uStack_2c0 = param_2;
  puStack_240 = puVar3;
  pppuStack_238 = &ppuStack_2f0;
  puStack_1c8 = puVar2;
  func_0x000107c2a7f8(puVar4);
  func_0x000100c48938(apuStack_380,param_3);
  func_0x000107c281a0(appuStack_360,0xd,puVar4,apuStack_380);
  bStack_175 = bStack_1e5 & bStack_345;
  bStack_177 = (uStack_1e8._1_1_ | bStack_347) & 1;
  bStack_176 = (bStack_1e6 | bStack_346) & 1;
  uStack_188 = 4;
  uStack_178 = 0;
  ppuStack_190 = &PTR_SUB_1108629c8;
  uStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar2 = &uStack_3f1;
  pppuStack_158 = &ppuStack_200;
  pppuStack_150 = appuStack_360;
  func_0x000107c2a7fc();
  uStack_460 = 0xf;
  uStack_450 = 0x100;
  uStack_438 = 0;
  ppuStack_468 = &PTR_SUB_1108629c8;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  lStack_420 = 0;
  plStack_408 = (long *)0x0;
  uStack_410 = 0;
  plStack_400 = (long *)0x0;
  bStack_3d6 = puVar2[0x1a];
  bStack_3d5 = puVar2[0x1b];
  uStack_3e8 = 10;
  uStack_3d8 = 0x100;
  ppuStack_3f0 = &PTR_SUB_1108629c8;
  plStack_388 = (long *)0x0;
  uStack_3a0 = 0;
  lStack_3a8 = 0;
  plStack_390 = (long *)0x0;
  uStack_398 = 0;
  bStack_106 = bStack_176 | bStack_3d6;
  bStack_105 = bStack_175 & bStack_3d5;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_3f0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  lStack_480 = 0;
  lStack_478 = 0;
  uStack_470 = 0;
  uStack_484 = 0;
  puVar5 = &uStack_b0;
  puStack_3b8 = puVar2;
  pppuStack_3b0 = &ppuStack_468;
  func_0x000107c310cc(puVar5,&ppuStack_120,&lStack_480,&uStack_484);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_480 != 0) {
    lStack_478 = lStack_480;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_388;
  ppuStack_3f0 = &PTR_SUB_1108629c8;
  plStack_388 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_390;
  plStack_390 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_400;
  ppuStack_468 = &PTR_SUB_1108629c8;
  plStack_400 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_408;
  plStack_408 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_420 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_SUB_1108629c8;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_2f8;
  appuStack_360[0] = &PTR_SUB_110862700;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3f0 = apuStack_318;
  func_0x000107c27dd4(&ppuStack_3f0);
  ppuStack_3f0 = apuStack_380;
  func_0x000107c27dd4(&ppuStack_3f0);
  plVar1 = plStack_198;
  ppuStack_200 = &PTR_SUB_1108629c8;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110ab88e0;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110ab8940;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c1cf40; end: 108c1d01b;  */

undefined8 * FUN_108c1cf40(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab88e0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c1d01c; end: 108c1d0a7;  */

void FUN_108c1d01c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2820;
  FUN_108c2ff54(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1d0a8; end: 108c1d12f;  */

void FUN_108c1d0a8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108c30468(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1d130; end: 108c1d493;  */

void FUN_108c1d130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_240 [8];
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_210;
  undefined1 uStack_1c8;
  undefined8 uStack_198;
  
  puVar4 = auStack_240;
  puVar5 = auStack_240;
  _objc_retain();
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010b656760(auStack_240,param_3);
    uStack_1c8 = 0;
    uStack_198 = param_1;
    func_0x00010b656cf8(auStack_240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2820;
    FUN_108c2ff54(PTR_PTR_1126c2820,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    FUN_108c0bf38(auStack_240);
  }
  else {
    uVar3 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0d3e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c08f840(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c07a6a0();
    puVar2[0x14] = (char)uVar3;
    uVar3 = param_3;
    func_0x00010bfb9b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c06d560();
    puVar2[0x15] = (char)uVar3;
    uVar3 = param_3;
    func_0x00010bfb8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c376d4(auStack_240,uVar3);
    _objc_release(uVar3);
    auStack_240[0] = 0;
    uStack_210 = param_1;
    func_0x000100c37c3c(auStack_240);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_228;
    lStack_228 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    lVar1 = lStack_230;
    lStack_230 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    lVar1 = lStack_238;
    lStack_238 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(puVar4);
    uVar3 = param_3;
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar2);
    _objc_release(uVar3);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108c1d494; end: 108c1d523;  */

void FUN_108c1d494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2820;
  FUN_108c303f4(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1d524; end: 108c1d6df;  */

void FUN_108c1d524(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b655f68(auStack_78,lVar3);
      _objc_release(lVar3);
      _objc_retain(param_3);
      uVar1 = uStack_70;
      auStack_78[0] = 0;
      uStack_70 = param_3;
      _objc_release(uVar1);
      puVar4 = auStack_78;
      func_0x00010b65608c(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(puVar4);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1d6e0; end: 108c1d72f;  */

long FUN_108c1d6e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108c1d730; end: 108c1d9d3;  */

void FUN_108c1d730(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      lVar5 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c07a0c0();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (param_3 != (int)lVar8) {
        lVar2 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100c376d4(auStack_a8,lVar2);
        _objc_release(lVar2);
        plVar9 = &lStack_a0;
        func_0x000100c378bc();
        *(undefined1 *)plVar9 = 0;
        *(char *)(plVar9 + 5) = (char)param_3;
        puVar10 = auStack_a8;
        func_0x000100c37c3c(puVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_90;
        lStack_90 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_98;
        lStack_98 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_a0;
        lStack_a0 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        _objc_setProperty_nonatomic_copy(puVar1);
        _objc_release(puVar10);
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1d9d4; end: 108c1dbab;  */

void FUN_108c1d9d4(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *(long *)(puVar1 + 0x58);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar2 = param_2;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar6);
      }
      else {
        lVar3 = param_2;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0737e0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar6);
        if (param_3 != (int)lVar4) {
          uVar7 = *(undefined8 *)(puVar1 + 0x58);
          _objc_retain(uVar7);
          func_0x00010b6564bc(auStack_88,uVar7);
          _objc_release(uVar7);
          auStack_88[0] = 0;
          uStack_70 = (undefined1)param_3;
          puVar5 = auStack_88;
          func_0x00010b65659c(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_80);
          _objc_setProperty_nonatomic_copy(puVar1);
          _objc_release(puVar5);
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1dbac; end: 108c1dd83;  */

void FUN_108c1dbac(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_6f;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *(long *)(puVar1 + 0x58);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar2 = param_2;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar6);
      }
      else {
        lVar3 = param_2;
        func_0x00010bfebe20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c073820();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar6);
        if (param_3 != (int)lVar4) {
          uVar7 = *(undefined8 *)(puVar1 + 0x58);
          _objc_retain(uVar7);
          func_0x00010b6564bc(auStack_88,uVar7);
          _objc_release(uVar7);
          auStack_88[0] = 0;
          uStack_6f = (undefined1)param_3;
          puVar5 = auStack_88;
          func_0x00010b65659c(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_80);
          _objc_setProperty_nonatomic_copy(puVar1);
          _objc_release(puVar5);
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1dd84; end: 108c1df6b;  */

void FUN_108c1dd84(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_6f;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c07fc80();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (param_3 != (int)lVar4) {
        lVar2 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100c376d4(auStack_98,lVar2);
        _objc_release(lVar2);
        auStack_98[0] = 0;
        uStack_6f = (undefined1)param_3;
        puVar5 = auStack_98;
        func_0x000100c37c3c(puVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_80;
        lStack_80 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_88;
        lStack_88 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_90;
        lStack_90 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        _objc_setProperty_nonatomic_copy(puVar1);
        _objc_release(puVar5);
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1df6c; end: 108c1e067;  */

void FUN_108c1df6c(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != param_3) {
      _objc_setProperty_nonatomic_copy(puVar1);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1e068; end: 108c1e163;  */

void FUN_108c1e068(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x00010c105040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != param_3) {
      _objc_setProperty_nonatomic_copy(puVar1);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1e164; end: 108c1e34b;  */

void FUN_108c1e164(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf2d540();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (param_3 != (int)lVar4) {
        lVar2 = param_2;
        func_0x00010bfb8280(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100c376d4(auStack_98,lVar2);
        _objc_release(lVar2);
        auStack_98[0] = 0;
        uStack_70 = (undefined1)param_3;
        puVar5 = auStack_98;
        func_0x000100c37c3c(puVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_80;
        lStack_80 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_88;
        lStack_88 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_90;
        lStack_90 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        _objc_setProperty_nonatomic_copy(puVar1);
        _objc_release(puVar5);
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1e34c; end: 108c1e52b;  */

void FUN_108c1e34c(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  double dStack_68;
  
  dVar6 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_3;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010bfb8280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0891c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (dVar6 != param_1) {
        uVar5 = *(undefined8 *)(puVar1 + 0x50);
        _objc_retain(uVar5);
        func_0x000100c376d4(auStack_98,uVar5);
        _objc_release(uVar5);
        auStack_98[0] = 0;
        puVar4 = auStack_98;
        dStack_68 = param_1;
        func_0x000100c37c3c(puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lStack_80;
        lStack_80 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_88;
        lStack_88 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        lVar2 = lStack_90;
        lStack_90 = 0;
        if (lVar2 != 0) {
          __ZdlPv();
        }
        _objc_setProperty_nonatomic_copy(puVar1);
        _objc_release(puVar4);
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108c1e52c; end: 108c1e743;  */

void FUN_108c1e52c(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c2820;
    func_0x000100c36048(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar4);
      lVar1 = param_2;
      func_0x00010bfb8280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100c376d4(auStack_98,lVar1);
      _objc_release(lVar1);
      plVar5 = &lStack_90;
      func_0x000100c378bc();
      *(undefined1 *)plVar5 = 0;
      *(undefined4 *)((long)plVar5 + 4) = param_3;
      puVar6 = auStack_98;
      func_0x000100c37c3c(puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_80;
      lStack_80 = 0;
      if (lVar1 != 0) {
        __ZdlPv();
      }
      lVar1 = lStack_88;
      lStack_88 = 0;
      if (lVar1 != 0) {
        __ZdlPv();
      }
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        __ZdlPv();
      }
      _objc_setProperty_nonatomic_copy(puVar4);
      _objc_release(puVar6);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1e744; end: 108c1ed27;  */

void FUN_108c1e744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c0d3e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf85300(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c07a6e0();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010bfb9b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c31908();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf1c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf1c000(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf1af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf1af40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf147e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf933a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x000100c3702c(uVar2,uVar3,uVar4,uVar5,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c073820();
    uVar4 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfdadc0();
    uVar6 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fc60();
    uVar7 = param_2;
    FUN_108c14a3c(param_2,uVar3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c102020();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_2;
    func_0x00010c105520(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c2427e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100c38020();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c3825c(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c105040(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c38598(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c38720(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c06bba0();
    puVar1[0x16] = (char)uVar2;
    puVar1[0x15] = 0;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1ed28; end: 108c1eec3;  */

void FUN_108c1ed28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  puVar5 = auStack_70;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c083540();
    _objc_release(uVar2);
    func_0x00010b656608(auStack_70,param_2);
    if ((uVar3 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c083540();
      uStack_50 = (undefined1)uVar4;
    }
    else {
      uStack_50 = 1;
    }
    auStack_70[0] = 0;
    func_0x00010b656700(auStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1eec4; end: 108c1eefb;  */

long FUN_108c1eec4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 108c1eefc; end: 108c1f3f7;  */

void FUN_108c1eefc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  puVar3 = auStack_70;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c2820;
    FUN_108c2ff54(PTR_PTR_1126c2820,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) goto LAB_108c1f300;
    lVar4 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c0d3e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c07a6a0();
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x14] = (char)lVar4;
    }
    lVar4 = param_2;
    func_0x00010bf8e9c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010bf5b820(param_2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar1);
    }
  }
  else {
    lVar4 = *(long *)(puVar1 + 0x50);
    _objc_retain(lVar4);
    _objc_release(lVar4);
    if ((param_2 != 0) && (lVar4 == 0)) {
      lVar4 = param_2;
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010c0d3e20(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010c07a6a0();
      puVar1[0x14] = (char)lVar4;
      lVar4 = param_2;
      func_0x00010bf8e9c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010c242760(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
      lVar4 = param_2;
      func_0x00010bf5b820(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar1);
      _objc_release(lVar4);
    }
    lVar4 = param_3;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b656608(auStack_70,lVar4);
    lVar2 = lVar4;
    func_0x00010c083540();
    auStack_70[0] = 0;
    uStack_50 = (undefined1)lVar2;
    func_0x00010b656700(auStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(lVar4);
LAB_108c1f300:
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1f3f8; end: 108c1f5e3;  */

void FUN_108c1f3f8(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  puVar5 = auStack_80;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *(long *)(puVar1 + 0x60);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar2 = param_2;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        _objc_release(lVar6);
      }
      else {
        lVar3 = param_2;
        func_0x00010c262240();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c083540();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar6);
        if (param_3 != (int)lVar4) {
          uVar7 = *(undefined8 *)(puVar1 + 0x60);
          _objc_retain(uVar7);
          func_0x00010b656608(auStack_80,uVar7);
          _objc_release(uVar7);
          auStack_80[0] = 0;
          uStack_60 = (undefined1)param_3;
          func_0x00010b656700(auStack_80);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uStack_68);
          _objc_release(uStack_70);
          _objc_release(uStack_78);
          _objc_setProperty_nonatomic_copy(puVar1);
          _objc_release(puVar5);
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1f5e4; end: 108c1f79b;  */

void FUN_108c1f5e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  puVar3 = auStack_70;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar4 = *(long *)(puVar1 + 0x60);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      lVar2 = param_2;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar2 != 0) {
        uVar5 = *(undefined8 *)(puVar1 + 0x60);
        _objc_retain(uVar5);
        func_0x00010b656608(auStack_70,uVar5);
        _objc_release(uVar5);
        lVar4 = param_2;
        func_0x00010c262240();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010bfea820();
        lStack_48 = lVar2 + 1;
        auStack_70[0] = 0;
        _objc_release(lVar4);
        func_0x00010b656700(auStack_70);
        _objc_retainAutoreleasedReturnValue();
        _objc_setProperty_nonatomic_copy(puVar1);
        _objc_release(puVar3);
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uStack_58);
        _objc_release(uStack_60);
        _objc_release(uStack_68);
      }
    }
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 108c1f79c; end: 108c1f85b;  */

void FUN_108c1f79c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar1 != (undefined *)0x0) &&
     (uVar2 = param_2, func_0x00010c06d560(), param_3 != (int)uVar2)) {
    puVar1[0x15] = (char)param_3;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1f85c; end: 108c1f96f;  */

void FUN_108c1f85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_2;
    FUN_108c14ddc(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c06bb80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    puVar1[0x16] = (char)uVar3;
    _objc_release(uVar2);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1f970; end: 108c1fea3;  */

void FUN_108c1f970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c0d3e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf85300(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c07a6e0();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_2;
    func_0x00010bfb9b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c31908();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf1acc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf1c0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf1c000(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf1af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf1af40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf147e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bf933a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x000100c3702c(uVar2,uVar3,uVar4,uVar5,uVar7,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1[0x15] = 1;
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    uVar2 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c102020();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_2;
    func_0x00010c105520(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c2427e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100c38020();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c3825c(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c105040(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c38598(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x000100c38720(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c06bba0();
    puVar1[0x16] = (char)uVar2;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1fea4; end: 108c1fff7;  */

void FUN_108c1fea4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto LAB_108c1ff58;
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108c1ff58;
  lVar2 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto LAB_108c1ff30;
    lVar2 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_108c1ff34;
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c303f4(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
LAB_108c1ff30:
    _objc_release();
LAB_108c1ff34:
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c1ff58:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c1fff8; end: 108c20147;  */

void FUN_108c1fff8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto LAB_108c200c8;
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108c200c8;
  lVar2 = param_2;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_108c20094;
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c303f4(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_release();
LAB_108c20094:
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c200c8:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c20148; end: 108c20263;  */

void FUN_108c20148(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      _objc_setProperty_nonatomic_copy(puVar1);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c20264; end: 108c203b7;  */

void FUN_108c20264(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto LAB_108c20318;
  lVar2 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108c20318;
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto LAB_108c202f0;
    lVar2 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_108c202f4;
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c303f4(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
LAB_108c202f0:
    _objc_release();
LAB_108c202f4:
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c20318:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c203b8; end: 108c2050b;  */

void FUN_108c203b8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto LAB_108c2046c;
  lVar2 = param_2;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108c2046c;
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto LAB_108c20444;
    lVar2 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_108c20448;
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c303f4(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
LAB_108c20444:
    _objc_release();
LAB_108c20448:
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c2046c:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c2050c; end: 108c2065f;  */

void FUN_108c2050c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto LAB_108c205c0;
  lVar2 = param_2;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_108c205c0;
  lVar2 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto LAB_108c20598;
    lVar2 = param_2;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_108c2059c;
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c303f4(PTR_PTR_1126c2820,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
LAB_108c20598:
    _objc_release();
LAB_108c2059c:
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c205c0:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c20660; end: 108c2074f;  */

void FUN_108c20660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c20750; end: 108c208a3;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108c207c4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_108c20750(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_108c1bd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      FUN_108c203b8(param_1,*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar8 = lVar2;
  FUN_108c1a528(lVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      FUN_108c1d494(lVar2,*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  _objc_release(lVar8);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  _objc_release(lVar8);
  _objc_release(lVar2);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar8 = lVar3;
  FUN_108c1843c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      FUN_108c1d494(lVar3,*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  _objc_release(lVar8);
  lVar2 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  _objc_release(lVar8);
  _objc_release(lVar3);
  __Unwind_Resume();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26e7a0(lVar2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c116d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_108c09008(puVar4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b15c8;
  _objc_alloc();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(lVar2);
  lVar9 = lVar2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c208a4; end: 108c209fb;  */

void FUN_108c208a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_108c1a528(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar1);
      }
      FUN_108c1d494(param_1,*(undefined8 *)(lVar9 * 8));
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar8 = lVar2;
  FUN_108c1843c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      FUN_108c1d494(lVar2,*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  _objc_release(lVar8);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar8);
  _objc_release(lVar8);
  _objc_release(lVar2);
  __Unwind_Resume();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26e7a0(lVar3);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c116d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_108c09008(puVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b15c8;
  _objc_alloc();
  lVar2 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(lVar3);
  lVar9 = lVar3;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c209fc; end: 108c20b4f;  */

void FUN_108c209fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  FUN_108c1843c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar1);
      }
      FUN_108c1d494(param_1,*(undefined8 *)(lVar10 * 8));
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26e7a0(lVar2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c116d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_108c09008(puVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b15c8;
  _objc_alloc();
  lVar4 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(lVar2);
  lVar10 = lVar2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c20b50; end: 108c20dff;  */

void FUN_108c20b50(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26e7a0(param_1);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c116d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_108c09008(puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(param_1);
  uVar6 = param_1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c20e00; end: 108c21493;  */

void FUN_108c20e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_5;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c08f840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uStack_88 = param_3;
      func_0x00010c08f840();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_88 = 0;
    }
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010c0d3e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar12 = param_3;
      func_0x00010c0d3e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar12 = 0;
    }
    _objc_release(uVar2);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar13 = param_3;
      func_0x00010bf85d80(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar13 = 0;
    }
    _objc_setProperty_nonatomic_copy(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(uVar13);
    }
    _objc_release(uVar2);
    puVar1[0x14] = 0;
    uVar2 = param_3;
    func_0x00010bfb9b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    FUN_108c16b74();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar13);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_108c167b4(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06d240();
    uVar6 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0891c0();
    uVar7 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c243560();
    uVar11 = param_3;
    FUN_108c177f4(param_1,param_3,uVar5,uVar10,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    FUN_108c21494();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar13);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c102000();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010c105520(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_108c1700c(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_108c16d70(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c105040(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_108c17c9c(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_108c17d90(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c06bb80();
    puVar1[0x16] = (char)uVar2;
    puVar1[0x15] = 0;
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uStack_88);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c21494; end: 108c2152f;  */

void FUN_108c21494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c21530; end: 108c219e7;  */

void FUN_108c21530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_4;
    func_0x00010bf05fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_2;
    func_0x00010c08f840(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = param_2;
      func_0x00010c08f840(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_2;
    func_0x00010c0d3e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar5 = param_2;
      func_0x00010c0d3e20(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    if (((ulong)puVar3 & 1) == 0) {
      uVar6 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = 0;
    }
    _objc_setProperty_nonatomic_copy(puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(uVar6);
    }
    _objc_release(uVar2);
    puVar1[0x14] = 0;
    uVar2 = param_2;
    func_0x00010bfb9b60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    FUN_108c16b74();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_2;
    FUN_108c167b4(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    puVar1[0x15] = 1;
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    uVar2 = param_2;
    func_0x00010c242760(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    FUN_108c21494();
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c102000();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_2;
    func_0x00010c105520(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    FUN_108c1700c(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    FUN_108c16d70(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c105040(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_setProperty_nonatomic_copy(puVar1);
    uVar2 = param_2;
    func_0x00010c06bb80();
    puVar1[0x16] = (char)uVar2;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c219e8; end: 108c21a57;  */

void FUN_108c219e8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110ab8940;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c21a58; end: 108c22113;  */

void FUN_108c21a58(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c220b8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c220d8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c220d8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c2204c:
                    /* WARNING: Could not recover jumptable at 0x000108c22070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c2204c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c220d8;
    }
    goto code_r0x000108c220cc;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c220cc;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c220d8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c220d8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c220e8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c220b8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c220cc:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c220d8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c220e8:
  return;
}



/* Entry: 108c22114; end: 108c2219b;  */

void FUN_108c22114(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c22188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c2219c; end: 108c222cf;  */

void FUN_108c2219c(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c222c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c222d0; end: 108c2237f;  */

ulong FUN_108c222d0(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108c22380; end: 108c223bb;  */

undefined8 FUN_108c22380(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108c223bc(uVar1,param_1);
  return uVar1;
}



/* Entry: 108c223bc; end: 108c22567;  */

void FUN_108c223bc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000108c225fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000108c22568(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_108c224a8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_108c226fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_108c224a8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab8940;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 108c22568; end: 108c226fb;  */

undefined8 * FUN_108c22568(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab8940;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c226fc; end: 108c22793;  */

undefined8 * FUN_108c226fc(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab8940;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108c22794(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c22794; end: 108c2280b;  */

void FUN_108c22794(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108c2280c(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108c2280c; end: 108c22847;  */

void FUN_108c2280c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1 + 2;
    FUN_108c2285c();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_108c22848();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab88e0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c22848; end: 108c2285b;  */

void FUN_108c22848(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab88e0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c2285c; end: 108c228fb;  */

void FUN_108c2285c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab88e0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c228fc; end: 108c22fb7;  */

void FUN_108c228fc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c22f5c;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c22f7c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c22f7c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c22ef0:
                    /* WARNING: Could not recover jumptable at 0x000108c22f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c22ef0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c22f7c;
    }
    goto code_r0x000108c22f70;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c22f70;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c22f7c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c22f7c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c22f8c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c22f5c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c22f70:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c22f7c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c22f8c:
  return;
}



/* Entry: 108c22fb8; end: 108c2303f;  */

void FUN_108c22fb8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c2302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c23040; end: 108c23173;  */

void FUN_108c23040(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c23168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c23174; end: 108c2337f;  */

uint FUN_108c23174(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_108c23358;
      }
      goto LAB_108c232a4;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_108c23358;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_108c23358;
    }
LAB_108c232a4:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_108c23358;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_108c23358:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 108c23380; end: 108c235fb;  */

undefined8 * FUN_108c23380(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110ab88e0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_108c22794(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110ab88e0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110ab88e0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_108c234a8;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_108c234a8;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_108c234a8:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110ab88e0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 108c235fc; end: 108c23753;  */

void FUN_108c235fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bfb8280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfb9b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100c53b08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c23754; end: 108c238f7;  */

void FUN_108c23754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb8280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfb9b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108c16b74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfb9b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000100c53b08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}


