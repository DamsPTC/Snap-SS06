/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c10ca0; end: 101c10fc7;  */

undefined1  [16] FUN_101c10ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((uint)param_3 & 0xff) == 1) {
    func_0x000107c6157c(param_2);
  }
  else {
    uVar2 = param_1;
    func_0x000107c6157c();
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar5 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar5 != 0) {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar6 = 0xd000000000000015;
      uStack_70 = uVar5;
      func_0x0001014bfa20(0xd000000000000015,0x800000010f0036b0,&uStack_70);
      *(undefined8 *)(puVar4 + 1) = uVar6;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar4,0xc);
      FUN_101c11044(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(lVar7);
    func_0x000107c614bc(&uStack_70,lVar7,param_1);
    func_0x000100cca050(param_1,param_2,param_3);
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
    param_2 = uStack_68;
    param_1 = uStack_70;
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 101c10fc8; end: 101c10fd7;  */

void FUN_101c10fc8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5f438();
  *param_1 = uVar1;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e09000;
  func_0x0001000285a8(0x112e09000,&UNK_10d9deaa0);
  FUN_101c0ebac((long)param_1 + (long)*(int *)(lVar2 + 0x2c),uVar3);
  return;
}



/* Entry: 101c10fd8; end: 101c1102b;  */

void FUN_101c10fd8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101c114cc;
  plVar5[0xe] = unaff_x20 + 0x10;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xf] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar5[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0x11] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x13] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c11214(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0x14] = lVar4;
  plVar5[0x15] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0fd80,lVar4,lVar3);
  return;
}



/* Entry: 101c1102c; end: 101c11043;  */

void FUN_101c1102c(void)

{
  long unaff_x20;
  
  FUN_101c1003c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101c11044; end: 101c1106b;  */

void FUN_101c11044(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c11058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c1106c; end: 101c110db;  */

void FUN_101c1106c(void)

{
  long unaff_x20;
  
  FUN_101c015ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21));
  func_0x000100cca050(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c110dc; end: 101c11107;  */

void FUN_101c110dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000101c107ec(pcVar1,uVar2,*(undefined1 *)(unaff_x20 + 0x38));
  (*pcVar1)(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101c11108; end: 101c1117f;  */

void FUN_101c11108(void)

{
  long unaff_x20;
  
  FUN_101c015ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21));
  func_0x000100cca050(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_101c11044(unaff_x20 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c11180; end: 101c111d7;  */

void FUN_101c11180(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c111d8;
  plVar4[0xe] = unaff_x20 + 0x10;
  plVar4[0xf] = unaff_x20 + 0xb0;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c11214(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x11] = lVar2;
  plVar4[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1012c,lVar2,lVar3);
  return;
}



/* Entry: 101c111d8; end: 101c11213;  */

void FUN_101c111d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c11210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c11214; end: 101c114c7;  */

void FUN_101c11214(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101c114c8; end: 101c114cf;  */

void FUN_101c114c8(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 101c114d0; end: 101c11547;  */

long FUN_101c114d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c11548; end: 101c11707;  */

undefined8 * FUN_101c11548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  func_0x000100cca210(uVar5,uVar1,uVar2);
  *param_1 = uVar5;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  uVar5 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  func_0x000100cca210(uVar5,uVar1,uVar2);
  param_1[3] = uVar5;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  lVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  func_0x000107c6157c();
  (*pcVar3)(param_1 + 8,param_2 + 8,lVar4);
  param_1[0xd] = param_2[0xd];
  uVar5 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101c11708; end: 101c1173b;  */

void FUN_101c11708(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 101c1173c; end: 101c117f3;  */

undefined8 * FUN_101c1173c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100cca220(uVar3,uVar4,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x000100cca220(uVar3,uVar4,uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61574(uVar3);
  func_0x0001000834e4(param_1 + 8);
  uVar3 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  uVar3 = param_2[0xd];
  uVar4 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined2 *)((long)param_1 + 0x71) = *(undefined2 *)((long)param_2 + 0x71);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  return param_1;
}



/* Entry: 101c117f4; end: 101c118bf;  */

int FUN_101c117f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x81) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x16);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c118c0; end: 101c118fb;  */

void FUN_101c118c0(undefined8 param_1,undefined8 param_2)

{
  FUN_101c020d8();
  func_0x000107c5f3fc(param_1,&UNK_110455e30,&UNK_110455e30,param_2);
  return;
}



/* Entry: 101c118fc; end: 101c11957;  */

void FUN_101c118fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uStack_38 = uVar1;
  FUN_101c020d8();
  func_0x000107c6157c(uVar1);
  func_0x000107c5f400(&uStack_38,&UNK_110455e30,&UNK_110455e30,param_1);
  return;
}



/* Entry: 101c11958; end: 101c1205b;  */

void FUN_101c11958(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  undefined3 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined *puVar22;
  ulong uVar23;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined2 uStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  ulong uStack_458;
  undefined *puStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined1 uStack_418;
  undefined1 uStack_417;
  undefined1 uStack_416;
  undefined8 uStack_410;
  undefined1 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  ulong uStack_388;
  undefined *puStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  code *pcStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined8 uStack_2ef;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined6 uStack_2c6;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined8 uStack_280;
  long lStack_278;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 uStack_26e;
  undefined5 uStack_26d;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined *puStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  code *pcStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_140 = *(undefined1 *)(unaff_x20 + 0x30);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&puStack_210);
  if ((char)puStack_210 == '\x01') {
    puVar22 = *(undefined **)(unaff_x20 + 0x68);
    uVar6 = *(undefined3 *)(unaff_x20 + 0x70);
    uVar5 = *(undefined3 *)(unaff_x20 + 0x70);
    uVar23 = *(ulong *)(unaff_x20 + 0x78);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x80);
    puVar15 = &UNK_10d9decc8;
    func_0x000107c614e0();
    func_0x000107c61434(puVar22);
    uVar8 = 3;
    func_0x000107c5f2dc();
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2b8 = CONCAT53(uStack_2b8._3_5_,uVar5);
    puStack_2a8 = (undefined *)CONCAT71(puStack_2a8._1_7_,uVar1);
    uStack_478 = 0;
    uStack_470 = (ushort)uStack_470._1_1_ << 8;
    uStack_460 = CONCAT53(uStack_460._3_5_,uVar6);
    puStack_450 = (undefined *)CONCAT71(puStack_450._1_7_,uVar1);
    uVar12 = 0x112e09068;
    puStack_480 = puVar15;
    puStack_468 = puVar22;
    uStack_458 = uVar23;
    uStack_448 = uVar8;
    puStack_2d8 = puVar15;
    puStack_2c0 = puVar22;
    uStack_2b0 = uVar23;
    uStack_2a0 = uVar8;
    func_0x000101c122d4(&puStack_2d8,&uStack_140,0x112e09068,&UNK_10d9ded20);
    func_0x000101c1231c(&puStack_480,0x112e09068,&UNK_10d9ded20);
    uStack_200 = CONCAT62(uStack_2c6,CONCAT11(uStack_2c7,uStack_2c8));
    uStack_208 = uStack_2d0;
    puStack_210 = puStack_2d8;
    puStack_1f8 = puStack_2c0;
    uStack_1e8 = uStack_2b0;
    lStack_1f0 = uStack_2b8;
    uStack_1d8 = uStack_2a0;
    puStack_1e0 = puStack_2a8;
    FUN_101c1235c(&puStack_210);
    lStack_308 = lStack_168;
    lStack_310 = lStack_170;
    pcStack_300 = pcStack_160;
    uStack_348 = uStack_1a8;
    lStack_350 = lStack_1b0;
    uStack_338 = uStack_198;
    uStack_340 = uStack_1a0;
    lStack_328 = lStack_188;
    lStack_330 = lStack_190;
    uStack_318 = uStack_178;
    uStack_320 = uStack_180;
    uStack_388 = uStack_1e8;
    lStack_390 = lStack_1f0;
    uStack_378 = uStack_1d8;
    puStack_380 = puStack_1e0;
    uStack_368 = uStack_1c8;
    uStack_370 = uStack_1d0;
    uStack_358 = uStack_1b8;
    uStack_360 = uStack_1c0;
    uStack_3a8 = uStack_208;
    puStack_3b0 = puStack_210;
    puStack_398 = puStack_1f8;
    uStack_3a0 = uStack_200;
    func_0x0001000285a8(0x112e09068,&UNK_10d9ded20);
    uVar13 = 0x112e09060;
    func_0x0001000285a8(0x112e09060,&UNK_10d9ded18);
    uVar21 = uVar13;
    FUN_101c12154();
    uVar18 = uVar21;
    func_0x000101c1225c();
    func_0x000107c5f490(&uStack_140,&puStack_3b0,uVar12,uVar13,uVar21,uVar18);
  }
  else {
    lVar9 = 0x112e08d88;
    func_0x0001000285a8(0x112e08d88,&UNK_10d9dec90);
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 2;
    *(undefined8 *)(lVar9 + 0x10) = 1;
    lVar10 = unaff_x20 + 0x40;
    lVar14 = lVar9 + 0x20;
    func_0x0001011225e0();
    uVar1 = *(undefined1 *)(unaff_x20 + 0x70);
    uVar2 = *(undefined1 *)(unaff_x20 + 0x71);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x72);
    uVar21 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar4 = *(undefined1 *)(unaff_x20 + 0x80);
    func_0x000101c129c8();
    lVar11 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar11 + 0x18) = 2;
    *(undefined8 *)(lVar11 + 0x10) = 1;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    lVar20 = *(long *)(unaff_x20 + 0x60);
    func_0x0001000a8868(unaff_x20 + 0x40,uVar12);
    (**(code **)(lVar20 + 0x18))(&uStack_140,uVar12,lVar20);
    lVar20 = lStack_120;
    uVar12 = uStack_128;
    func_0x0001000a8868(&uStack_140,uStack_128);
    (**(code **)(lVar20 + 8))();
    *(undefined **)(lVar11 + 0x38) = PTR___sSSN_11034da80;
    uVar13 = uVar12;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar11 + 0x40) = uVar13;
    *(undefined8 *)(lVar11 + 0x20) = uVar12;
    *(long *)(lVar11 + 0x28) = lVar20;
    func_0x0001000834e4(&uStack_140);
    lVar20 = lVar14;
    func_0x000107c5fb00(lVar10,lVar14,lVar11);
    lVar11 = lVar20;
    func_0x000107c6142c();
    if (*(ulong *)(*(long *)(unaff_x20 + 0x68) + 0x10) < 2) {
      func_0x000101c12698();
    }
    else {
      func_0x000101c128fc();
    }
    FUN_101c0b6e4();
    puVar15 = &UNK_110456858;
    func_0x000107c613fc(&UNK_110456858,0x91,7);
    *(undefined8 *)(puVar15 + 0x78) = uStack_d8;
    *(undefined8 *)(puVar15 + 0x70) = uStack_e0;
    *(undefined8 *)(puVar15 + 0x88) = uStack_c8;
    *(undefined8 *)(puVar15 + 0x80) = uStack_d0;
    puVar15[0x90] = uStack_c0;
    *(undefined8 *)(puVar15 + 0x38) = uStack_118;
    *(long *)(puVar15 + 0x30) = lStack_120;
    *(undefined8 *)(puVar15 + 0x48) = uStack_108;
    *(undefined8 *)(puVar15 + 0x40) = uStack_110;
    *(undefined8 *)(puVar15 + 0x58) = uStack_f8;
    *(undefined8 *)(puVar15 + 0x50) = uStack_100;
    *(undefined8 *)(puVar15 + 0x68) = uStack_e8;
    *(undefined8 *)(puVar15 + 0x60) = uStack_f0;
    *(undefined8 *)(puVar15 + 0x18) = uStack_138;
    *(ulong *)(puVar15 + 0x10) = CONCAT71(uStack_13f,uStack_140);
    *(undefined8 *)(puVar15 + 0x28) = uStack_128;
    *(undefined8 *)(puVar15 + 0x20) = uStack_130;
    puVar22 = &UNK_10d9deca0;
    func_0x000107c614e0();
    puVar16 = &UNK_10d9decc8;
    func_0x000107c614e0();
    puVar17 = &UNK_10d9decf0;
    func_0x000107c614e0();
    uVar18 = 0;
    FUN_101c0c8a0();
    uVar13 = uVar18;
    FUN_101c0cf40();
    func_0x000107c5f398();
    puStack_210 = (undefined *)((ulong)puStack_210 & 0xffffffffffffff00);
    func_0x000107c5f728(&uStack_140,&puStack_210,PTR___sSbN_11034dd40);
    uVar12 = uStack_138;
    uVar7 = uStack_140;
    uVar19 = 1;
    func_0x000107c5f2dc();
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c7 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    uStack_288 = uVar7;
    uStack_280 = uVar12;
    uStack_240 = 0;
    uStack_248 = 0;
    pcStack_228 = FUN_101c12128;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_460 = 0;
    uStack_458 = uStack_458 & 0xffffffffffffff00;
    uStack_448 = uStack_448 & 0xffffffffffffff00;
    uStack_430 = uVar7;
    uStack_428 = uVar12;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    pcStack_3d0 = FUN_101c12128;
    uVar12 = 0x112e09060;
    puStack_480 = puVar22;
    puStack_468 = puVar16;
    puStack_450 = puVar17;
    uStack_440 = uVar18;
    uStack_438 = uVar13;
    lStack_420 = lVar9;
    uStack_418 = uVar1;
    uStack_417 = uVar2;
    uStack_416 = uVar3;
    uStack_410 = uVar21;
    uStack_408 = uVar4;
    lStack_400 = lVar10;
    lStack_3f8 = lVar20;
    lStack_3e0 = lVar14;
    lStack_3d8 = lVar11;
    puStack_3c8 = puVar15;
    uStack_3c0 = uVar19;
    puStack_2d8 = puVar22;
    puStack_2c0 = puVar16;
    puStack_2a8 = puVar17;
    uStack_298 = uVar18;
    uStack_290 = uVar13;
    lStack_278 = lVar9;
    uStack_270 = uVar1;
    uStack_26f = uVar2;
    uStack_26e = uVar3;
    uStack_268 = uVar21;
    uStack_260 = uVar4;
    lStack_258 = lVar10;
    lStack_250 = lVar20;
    lStack_238 = lVar14;
    lStack_230 = lVar11;
    puStack_220 = puVar15;
    uStack_218 = uVar19;
    func_0x000101c122d4(&puStack_2d8,&uStack_140,0x112e09060,&UNK_10d9ded18);
    func_0x000101c1231c(&puStack_480,0x112e09060,&UNK_10d9ded18);
    lStack_168 = lStack_230;
    lStack_170 = lStack_238;
    uStack_158 = SUB81(puStack_220,0);
    uStack_157 = (undefined7)((ulong)puStack_220 >> 8);
    pcStack_160 = pcStack_228;
    uStack_150 = (undefined1)uStack_218;
    uStack_14f = (undefined7)((ulong)uStack_218 >> 8);
    uStack_1a8 = CONCAT53(uStack_26d,CONCAT12(uStack_26e,CONCAT11(uStack_26f,uStack_270)));
    uStack_198 = CONCAT71(uStack_25f,uStack_260);
    lStack_1b0 = lStack_278;
    uStack_1a0 = uStack_268;
    lStack_188 = lStack_250;
    lStack_190 = lStack_258;
    uStack_178 = uStack_240;
    uStack_180 = uStack_248;
    uStack_1e8 = uStack_2b0;
    lStack_1f0 = uStack_2b8;
    uStack_1d8 = uStack_2a0;
    puStack_1e0 = puStack_2a8;
    uStack_1c0 = CONCAT71(uStack_287,uStack_288);
    uStack_1c8 = uStack_290;
    uStack_1d0 = uStack_298;
    uStack_1b8 = uStack_280;
    uStack_200 = CONCAT62(uStack_2c6,CONCAT11(uStack_2c7,uStack_2c8));
    uStack_208 = uStack_2d0;
    puStack_210 = puStack_2d8;
    puStack_1f8 = puStack_2c0;
    FUN_101c12148(&puStack_210);
    lStack_308 = lStack_168;
    lStack_310 = lStack_170;
    uStack_2f8 = uStack_158;
    pcStack_300 = pcStack_160;
    uStack_2ef = CONCAT17(uStack_148,uStack_14f);
    uStack_2f7 = uStack_157;
    uStack_2f0 = uStack_150;
    uStack_348 = uStack_1a8;
    lStack_350 = lStack_1b0;
    uStack_338 = uStack_198;
    uStack_340 = uStack_1a0;
    lStack_328 = lStack_188;
    lStack_330 = lStack_190;
    uStack_318 = uStack_178;
    uStack_320 = uStack_180;
    uStack_388 = uStack_1e8;
    lStack_390 = lStack_1f0;
    uStack_378 = uStack_1d8;
    puStack_380 = puStack_1e0;
    uStack_368 = uStack_1c8;
    uStack_370 = uStack_1d0;
    uStack_358 = uStack_1b8;
    uStack_360 = uStack_1c0;
    uStack_3a8 = uStack_208;
    puStack_3b0 = puStack_210;
    puStack_398 = puStack_1f8;
    uStack_3a0 = uStack_200;
    uVar13 = 0x112e09068;
    func_0x0001000285a8(0x112e09068,&UNK_10d9ded20);
    func_0x0001000285a8(0x112e09060,&UNK_10d9ded18);
    uVar21 = uVar12;
    FUN_101c12154();
    uVar18 = uVar21;
    func_0x000101c1225c();
    func_0x000107c5f490(&uStack_140,&puStack_3b0,uVar13,uVar12,uVar21,uVar18);
  }
  lStack_308 = uStack_98;
  lStack_310 = uStack_a0;
  pcStack_300 = (code *)uStack_90;
  uStack_2ef = uStack_7f;
  uStack_348 = uStack_d8;
  lStack_350 = uStack_e0;
  uStack_338 = uStack_c8;
  uStack_340 = uStack_d0;
  lStack_328 = uStack_b8;
  uStack_318 = uStack_a8;
  uStack_320 = uStack_b0;
  uStack_388 = uStack_118;
  lStack_390 = lStack_120;
  uStack_378 = uStack_108;
  puStack_380 = (undefined *)uStack_110;
  uStack_368 = uStack_f8;
  uStack_370 = uStack_100;
  uStack_358 = uStack_e8;
  uStack_360 = uStack_f0;
  puStack_3b0 = (undefined *)CONCAT71(uStack_13f,uStack_140);
  puStack_210 = (undefined *)CONCAT71(uStack_13f,uStack_140);
  uStack_3a8 = uStack_138;
  puStack_398 = (undefined *)uStack_128;
  uStack_3a0 = uStack_130;
  param_1[0x15] = uStack_98;
  param_1[0x14] = uStack_a0;
  param_1[0x17] = CONCAT71(uStack_87,uStack_88);
  param_1[0x16] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xc1) = uStack_7f;
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_80,uStack_87);
  param_1[0xd] = uStack_d8;
  param_1[0xc] = uStack_e0;
  param_1[0xf] = uStack_c8;
  param_1[0xe] = uStack_d0;
  param_1[0x11] = uStack_b8;
  param_1[0x10] = CONCAT71(uStack_bf,uStack_c0);
  param_1[0x13] = uStack_a8;
  param_1[0x12] = uStack_b0;
  param_1[5] = uStack_118;
  param_1[4] = lStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[1] = uStack_138;
  *param_1 = CONCAT71(uStack_13f,uStack_140);
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  lStack_168 = uStack_98;
  lStack_170 = uStack_a0;
  pcStack_160 = (code *)uStack_90;
  uStack_14f = (undefined7)uStack_7f;
  uStack_148 = (undefined1)((ulong)uStack_7f >> 0x38);
  uStack_1a8 = uStack_d8;
  lStack_1b0 = uStack_e0;
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  lStack_188 = uStack_b8;
  uStack_178 = uStack_a8;
  uStack_180 = uStack_b0;
  uStack_1e8 = uStack_118;
  lStack_1f0 = lStack_120;
  uStack_1d8 = uStack_108;
  puStack_1e0 = (undefined *)uStack_110;
  uStack_1c8 = uStack_f8;
  uStack_1d0 = uStack_100;
  uStack_1b8 = uStack_e8;
  uStack_1c0 = uStack_f0;
  uStack_208 = uStack_138;
  puStack_1f8 = (undefined *)uStack_128;
  uStack_200 = uStack_130;
  func_0x000101c122d4(&puStack_3b0,&puStack_480,0x112e09098,&UNK_10d9ded30);
  func_0x000101c1231c(&puStack_210,0x112e09098,&UNK_10d9ded30);
  return;
}



/* Entry: 101c1205c; end: 101c12117;  */

/* WARNING: Possible PIC construction at 0x000101c120b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c120cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c120b4) */
/* WARNING: Removing unreachable block (ram,0x000101c120d0) */

void FUN_101c1205c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *unaff_x20;
  
  if (*(ulong *)(unaff_x20[0xd] + 0x10) < 2) {
    pcVar1 = (code *)*unaff_x20;
    param_1 = unaff_x20[1];
    func_0x000101c107ec(pcVar1,param_1,*(undefined1 *)(unaff_x20 + 2));
    (*pcVar1)(1);
  }
  else {
    func_0x000107c5f7cc();
    func_0x000107c5f300();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101c12118; end: 101c12127;  */

void FUN_101c12118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c12128; end: 101c12147;  */

void FUN_101c12128(void)

{
  FUN_101c1205c();
  return;
}



/* Entry: 101c12148; end: 101c12153;  */

void FUN_101c12148(long param_1)

{
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 101c12154; end: 101c121cb;  */

void FUN_101c12154(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e09070 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e09068;
  func_0x00010002969c(0x112e09068,&UNK_10d9ded20);
  uVar2 = uVar1;
  FUN_101c121cc();
  uVar3 = uVar2;
  func_0x000101c1220c();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e09070 = puVar4;
  return;
}



/* Entry: 101c121cc; end: 101c1225b;  */

void FUN_101c121cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9de7c8;
  func_0x000107c61520(&UNK_10d9de7c8,&UNK_110456368);
  puRam0000000112e09078 = puVar1;
  return;
}



/* Entry: 101c1225c; end: 101c1235b;  */

void FUN_101c1225c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e09090 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e09060;
  func_0x00010002969c(0x112e09060,&UNK_10d9ded18);
  uVar2 = uVar1;
  func_0x000101c0cf84();
  uVar3 = uVar2;
  func_0x000101c1220c();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e09090 = puVar4;
  return;
}



/* Entry: 101c1235c; end: 101c12363;  */

void FUN_101c1235c(long param_1)

{
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 101c12364; end: 101c12433;  */

void FUN_101c12364(void)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_21,uVar1);
  return;
}



/* Entry: 101c12434; end: 101c12a93;  */

undefined1  [16] FUN_101c12434(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0037b0);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0036f0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c12500);
  (*pcVar1)();
}



/* Entry: 101c12a94; end: 101c12aa7;  */

bool FUN_101c12a94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c12aa8; end: 101c12ba3;  */

void FUN_101c12aa8(void)

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



/* Entry: 101c12ba4; end: 101c12f93;  */

void FUN_101c12ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  func_0x000107c5f4ec();
  uVar5 = 5;
  func_0x0001026ff85c();
  puVar6 = &UNK_10d9ded70;
  func_0x000107c614e0();
  lVar7 = 0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = uVar5;
  uVar5 = 0xbb;
  func_0x0001026ff7d0();
  puVar6 = &UNK_10d9deda8;
  func_0x000107c614e0();
  lVar7 = 0x112e090a8;
  func_0x0001000285a8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = uVar5;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_168,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar7 = 0x112e090b0;
  func_0x0001000285a8(0x112e090b0,&UNK_10d9dede0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar1[9] = uStack_120;
  puVar1[8] = uStack_128;
  puVar1[0xb] = uStack_110;
  puVar1[10] = uStack_118;
  puVar1[0xd] = uStack_100;
  puVar1[0xc] = uStack_108;
  puVar1[1] = uStack_160;
  *puVar1 = uStack_168;
  puVar1[3] = uStack_150;
  puVar1[2] = uStack_158;
  puVar1[5] = uStack_140;
  puVar1[4] = uStack_148;
  puVar1[7] = uStack_130;
  puVar1[6] = uStack_138;
  func_0x000107c5f56c();
  uVar14 = 0x4028000000000000;
  uVar5 = uStack_148;
  func_0x000107c5f280();
  lVar9 = 0x112e090b8;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar9 + 0x24));
  *puVar2 = (char)lVar7;
  *(undefined8 *)(puVar2 + 8) = uVar14;
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_f8,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar7 = 0x112e090c0;
  func_0x0001000285a8(0x112e090c0,&UNK_10d9dedf0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = uStack_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = uStack_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = uStack_98;
  puVar1[1] = uStack_f0;
  *puVar1 = uStack_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = uStack_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = uStack_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = uStack_c8;
  lVar7 = 0x112e090c8;
  func_0x0001000285a8(0x112e090c8,&UNK_10d9dedf8);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar8 = 0;
  func_0x000107c5f41c();
  pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x68);
  lVar9 = lVar7;
  (*pcVar13)(lVar7,uVar4,lVar8);
  if (((uint)param_8 & 0xff00) == 0x100) {
    func_0x000107c5f6cc();
    uVar5 = uStack_d8;
  }
  else {
    lVar9 = 0x6b;
    func_0x0001026ff7d0();
    uVar5 = uStack_d8;
  }
  lVar10 = 0x112e02d80;
  puVar6 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(long *)(lVar7 + *(int *)(lVar10 + 0x34)) = lVar9;
  *(undefined2 *)(lVar7 + *(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar9 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar3 = (long *)(lVar7 + *(int *)(lVar9 + 0x24));
  *plVar3 = lVar10;
  plVar3[1] = (long)puVar6;
  lVar7 = 0x112e090d0;
  func_0x0001000285a8(0x112e090d0,&UNK_10d9dee10);
  lVar7 = param_1 + *(int *)(lVar7 + 0x24);
  (*pcVar13)(lVar7,uVar4,lVar8);
  uVar11 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar7 + *(int *)(uVar11 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar12 = 0x3fee666666666666;
  uVar14 = uVar12;
  if ((uVar11 & 1) == 0) {
    uVar14 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  uVar11 = 0x112e090d8;
  func_0x0001000285a8(0x112e090d8,&UNK_10d9dee20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(uVar11 + 0x24));
  *puVar1 = uVar14;
  puVar1[1] = uVar14;
  puVar1[2] = uVar12;
  puVar1[3] = uVar5;
  func_0x000107c5f4f0();
  uVar5 = 0x3fe0000000000000;
  if ((uVar11 & 1) == 0) {
    uVar5 = 0x3ff0000000000000;
  }
  lVar7 = 0x112e090e0;
  func_0x0001000285a8(0x112e090e0,&UNK_10d9dee28);
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x24)) = uVar5;
  FUN_101c13094(param_7,param_8);
  uVar5 = 0x3ff0000000000000;
  if ((param_7 & 1) == 0) {
    uVar5 = 0x3fe0000000000000;
  }
  lVar7 = 0x112e090e8;
  func_0x0001000285a8(0x112e090e8,&UNK_10d9dee30);
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x24)) = uVar5;
  return;
}



/* Entry: 101c12f94; end: 101c12f9f;  */

void FUN_101c12f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *unaff_x20;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar13 = *unaff_x20;
  uVar5 = unaff_x20[1];
  func_0x000107c5f4ec();
  uVar6 = 5;
  func_0x0001026ff85c();
  puVar7 = &UNK_10d9ded70;
  func_0x000107c614e0();
  lVar8 = 0x112e02d48;
  func_0x0001000285a8(0x112e02d48,&UNK_10d9d52f0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = uVar6;
  uVar6 = 0xbb;
  func_0x0001026ff7d0();
  puVar7 = &UNK_10d9deda8;
  func_0x000107c614e0();
  lVar8 = 0x112e090a8;
  func_0x0001000285a8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = uVar6;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_168,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar8 = 0x112e090b0;
  func_0x0001000285a8(0x112e090b0,&UNK_10d9dede0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x24));
  puVar1[9] = uStack_120;
  puVar1[8] = uStack_128;
  puVar1[0xb] = uStack_110;
  puVar1[10] = uStack_118;
  puVar1[0xd] = uStack_100;
  puVar1[0xc] = uStack_108;
  puVar1[1] = uStack_160;
  *puVar1 = uStack_168;
  puVar1[3] = uStack_150;
  puVar1[2] = uStack_158;
  puVar1[5] = uStack_140;
  puVar1[4] = uStack_148;
  puVar1[7] = uStack_130;
  puVar1[6] = uStack_138;
  func_0x000107c5f56c();
  uVar16 = 0x4028000000000000;
  uVar6 = uStack_148;
  func_0x000107c5f280();
  lVar10 = 0x112e090b8;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar10 + 0x24));
  *puVar2 = (char)lVar8;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_f8,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar8 = 0x112e090c0;
  func_0x0001000285a8(0x112e090c0,&UNK_10d9dedf0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = uStack_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = uStack_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = uStack_98;
  puVar1[1] = uStack_f0;
  *puVar1 = uStack_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = uStack_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = uStack_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = uStack_c8;
  lVar8 = 0x112e090c8;
  func_0x0001000285a8(0x112e090c8,&UNK_10d9dedf8);
  lVar8 = param_1 + *(int *)(lVar8 + 0x24);
  uVar4 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  pcVar15 = *(code **)(*(long *)(lVar9 + -8) + 0x68);
  lVar10 = lVar8;
  (*pcVar15)(lVar8,uVar4,lVar9);
  if (((ushort)uVar5 & 0xff00) == 0x100) {
    func_0x000107c5f6cc();
    uVar6 = uStack_d8;
  }
  else {
    lVar10 = 0x6b;
    func_0x0001026ff7d0();
    uVar6 = uStack_d8;
  }
  lVar11 = 0x112e02d80;
  puVar7 = &UNK_10d9dee00;
  func_0x0001000285a8();
  *(long *)(lVar8 + *(int *)(lVar11 + 0x34)) = lVar10;
  *(undefined2 *)(lVar8 + *(int *)(lVar11 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar10 = 0x112e02d88;
  func_0x0001000285a8(0x112e02d88,&UNK_10d9d5330);
  plVar3 = (long *)(lVar8 + *(int *)(lVar10 + 0x24));
  *plVar3 = lVar11;
  plVar3[1] = (long)puVar7;
  lVar8 = 0x112e090d0;
  func_0x0001000285a8(0x112e090d0,&UNK_10d9dee10);
  lVar8 = param_1 + *(int *)(lVar8 + 0x24);
  (*pcVar15)(lVar8,uVar4,lVar9);
  uVar12 = 0x112e02d98;
  func_0x0001000285a8(0x112e02d98,&UNK_10d9d5340);
  *(undefined1 *)(lVar8 + *(int *)(uVar12 + 0x24)) = 0;
  func_0x000107c5f4f0();
  uVar14 = 0x3fee666666666666;
  uVar16 = uVar14;
  if ((uVar12 & 1) == 0) {
    uVar16 = 0x3ff0000000000000;
  }
  func_0x000107c5f7e4();
  uVar12 = 0x112e090d8;
  func_0x0001000285a8(0x112e090d8,&UNK_10d9dee20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(uVar12 + 0x24));
  *puVar1 = uVar16;
  puVar1[1] = uVar16;
  puVar1[2] = uVar14;
  puVar1[3] = uVar6;
  func_0x000107c5f4f0();
  uVar6 = 0x3fe0000000000000;
  if ((uVar12 & 1) == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  lVar8 = 0x112e090e0;
  func_0x0001000285a8(0x112e090e0,&UNK_10d9dee28);
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x24)) = uVar6;
  FUN_101c13094(uVar13,(ushort)uVar5);
  uVar6 = 0x3ff0000000000000;
  if ((uVar13 & 1) == 0) {
    uVar6 = 0x3fe0000000000000;
  }
  lVar8 = 0x112e090e8;
  func_0x0001000285a8(0x112e090e8,&UNK_10d9dee30);
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x24)) = uVar6;
  return;
}



/* Entry: 101c12fa0; end: 101c12fdf;  */

void FUN_101c12fa0(void)

{
  func_0x000107c614e0(&UNK_10d9ded40);
  return;
}



/* Entry: 101c12fe0; end: 101c12fff;  */

void FUN_101c12fe0(void)

{
  func_0x000107c5f3cc();
  return;
}



/* Entry: 101c13000; end: 101c13093;  */

void FUN_101c13000(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0x112e09148;
  func_0x0001000285a8(0x112e09148,&UNK_10d9def40);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000101c13cec(param_1,&stack0xffffffffffffffc0 + -extraout_x8,0x112e09148,&UNK_10d9def40);
  func_0x000107c5f3d0(&stack0xffffffffffffffc0 + -extraout_x8);
  return;
}



/* Entry: 101c13094; end: 101c13413;  */

uint FUN_101c13094(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  byte bStack_61;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((uint)param_2 & 0xff) != 1) {
    uVar2 = param_1;
    func_0x000107c6157c();
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar4 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x6c6f6f42;
      uStack_70 = uVar6;
      func_0x0001014bfa20(0x6c6f6f42,0xe400000000000000,&uStack_70);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar5,0xc);
      func_0x000100183ab8(uVar6);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(lVar8);
    func_0x000107c614bc(&bStack_61,lVar8,param_1);
    FUN_101c01914(param_1,param_2);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    param_1 = (ulong)bStack_61;
  }
  return (uint)param_1 & 1;
}



/* Entry: 101c13414; end: 101c13443;  */

void FUN_101c13414(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e67acb4,1);
  return;
}



/* Entry: 101c13444; end: 101c134ef;  */

undefined8 * FUN_101c13444(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101c13424(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 101c134f0; end: 101c13537;  */

undefined8 * FUN_101c134f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_101c01914(uVar3,uVar2);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 101c13538; end: 101c135d3;  */

int FUN_101c13538(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 10) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c135d4; end: 101c13a6b;  */

void FUN_101c135d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e090f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e090e8;
  func_0x00010002969c(0x112e090e8,&UNK_10d9dee30);
  uVar2 = uVar1;
  func_0x000101c1364c();
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_1103489e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e090f8 = puVar3;
  return;
}



/* Entry: 101c13a6c; end: 101c13aaf;  */

void FUN_101c13a6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e02e00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f4e8(0xff);
  puVar2 = PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVAA4ViewAAMc_110349068;
  func_0x000107c61520(PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVAA4ViewAAMc_110349068,uVar1);
  puRam0000000112e02e00 = puVar2;
  return;
}



/* Entry: 101c13ab0; end: 101c13af3;  */

void FUN_101c13ab0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101c13af4; end: 101c13c5b;  */

int FUN_101c13af4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c13b70;
        goto LAB_101c13b54;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c13b54:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c13b70:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c13c5c; end: 101c13c9b;  */

void FUN_101c13c5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9def18;
  func_0x000107c61520(&UNK_10d9def18,&UNK_110456a28);
  puRam0000000112e09140 = puVar1;
  return;
}



/* Entry: 101c13c9c; end: 101c13d33;  */

undefined8 FUN_101c13c9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e09148;
  func_0x0001000285a8(0x112e09148,&UNK_10d9def40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c13d34; end: 101c13d3b;  */

undefined8 * FUN_101c13d34(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101c13424(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  return param_1;
}



/* Entry: 101c13d3c; end: 101c13e03;  */

void FUN_101c13d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = 0;
  FUN_101c13e04(0,param_10,param_11);
  iVar1 = *(int *)(lVar2 + 0x30);
  puVar3 = &UNK_10d9def50;
  func_0x000107c614e0();
  *(undefined **)((long)param_1 + (long)iVar1) = puVar3;
  uVar4 = 0x112e090f0;
  func_0x0001000285a8(0x112e090f0,&UNK_10d9def80);
  func_0x000107c6159c((long)param_1 + (long)iVar1,uVar4,0);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  (*param_8)((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  return;
}



/* Entry: 101c13e04; end: 101c13e0f;  */

void FUN_101c13e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e67acf8);
  return;
}



/* Entry: 101c13e10; end: 101c14b67;  */

void FUN_101c13e10(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  long lVar19;
  long extraout_x8_04;
  long lVar20;
  long lVar21;
  long extraout_x8_05;
  long lVar22;
  long lVar23;
  long extraout_x8_06;
  long lVar24;
  long lVar25;
  long extraout_x8_07;
  long lVar26;
  long lVar27;
  long extraout_x8_08;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar32;
  code *pcVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  code *pcVar38;
  long lVar39;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  long alStack_1f0 [4];
  long lStack_1d0;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  func_0x000107c5f4dc();
  lVar17 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar35 = (long)&lStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar36 = 0x112e09150;
  lStack_1d0 = lVar35;
  func_0x0001000285a8(0x112e09150,&UNK_10d9def88);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar36 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar35 = lVar35 - extraout_x8_00;
  lVar7 = 0x112e09148;
  func_0x0001000285a8(0x112e09148,&UNK_10d9def40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar29 = lVar35 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_1c8 = uVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = uVar29 - extraout_x12;
  lStack_1b8 = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_00;
  uVar5 = 0x112e09158;
  func_0x00010002969c(0x112e09158,&UNK_10d9def98);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = 0x112e09160;
  func_0x00010002969c(0x112e09160,&UNK_10d9defa0);
  uVar2 = 0xff;
  func_0x000107c61510(0xff,uVar34,uVar3,0,0);
  uVar3 = 0xff;
  func_0x000107c5f7dc(0xff,uVar2);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  puVar4 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar3);
  uVar2 = 0xff;
  func_0x000107c5f760(0xff,uVar3,puVar4);
  uVar3 = 0xff;
  func_0x000107c61510(0xff,uVar5,uVar2,0,0);
  uVar5 = 0xff;
  func_0x000107c5f7dc(0xff,uVar3);
  func_0x000107c61520(puVar6,uVar5);
  lVar7 = 0;
  func_0x000107c5f760(0,uVar5,puVar6);
  lVar39 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar39 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = lVar30 - extraout_x8_02;
  uVar5 = 0x112e09168;
  func_0x00010002969c(0x112e09168,&UNK_10d9defa8);
  lVar8 = 0;
  func_0x000107c5f34c(0,lVar7,uVar5);
  lVar18 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar37 = lVar32 - extraout_x8_03;
  lVar9 = 0;
  func_0x000107c5f34c();
  lVar19 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar37 - extraout_x8_04;
  lVar10 = 0;
  func_0x000107c5f34c();
  lVar21 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar20 - extraout_x8_05;
  lVar11 = 0;
  func_0x000107c5f34c();
  lVar23 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar22 - extraout_x8_06;
  lVar12 = 0;
  func_0x000107c5f34c();
  lVar25 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar24 - extraout_x8_07;
  lVar13 = 0;
  func_0x000107c5f34c();
  lVar27 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  lVar31 = lVar26 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar31 - extraout_x12_01;
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_80 = uVar34;
  func_0x000107c5f438();
  func_0x000107c5f75c(lVar32);
  puVar6 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,lVar7);
  puStack_1c0 = puVar6;
  func_0x000107c5f670(lVar37,1,lVar7);
  (**(code **)(lVar39 + 8))(lVar32,lVar7);
  lVar7 = lStack_1b8;
  func_0x000101c1321c(lVar30);
  (**(code **)(lVar17 + 0x68))
            (lVar7,*(undefined4 *)PTR___s7SwiftUI22UserInterfaceSizeClassO7regularyA2CmFWC_110349018
             ,lVar1);
  (**(code **)(lVar17 + 0x38))(lVar7,0,1,lVar1);
  lVar36 = (long)*(int *)(lVar36 + 0x30);
  func_0x000101c165e8(lVar30,lVar35,0x112e09148,&UNK_10d9def40);
  func_0x000101c165e8(lVar7,lVar35 + lVar36,0x112e09148,&UNK_10d9def40);
  pcVar38 = *(code **)(lVar17 + 0x30);
  lVar32 = lVar35;
  (*pcVar38)(lVar35,1,lVar1);
  uVar29 = uStack_1c8;
  if ((int)lVar32 == 1) {
    func_0x000101c16630(lVar7,0x112e09148,&UNK_10d9def40);
    func_0x000101c16630(lVar30,0x112e09148,&UNK_10d9def40);
    lVar36 = lVar35 + lVar36;
    (*pcVar38)(lVar36,1,lVar1);
    if ((int)lVar36 == 1) {
      uVar3 = 0x4078600000000000;
      uVar5 = 0x112e09148;
      func_0x000101c16630(lVar35,0x112e09148,&UNK_10d9def40);
      goto LAB_101c14540;
    }
  }
  else {
    func_0x000101c165e8(lVar35,uStack_1c8,0x112e09148,&UNK_10d9def40);
    lVar32 = lVar35 + lVar36;
    (*pcVar38)(lVar32,1,lVar1);
    lVar39 = lStack_1d0;
    if ((int)lVar32 != 1) {
      lVar32 = lStack_1d0;
      (**(code **)(lVar17 + 0x20))(lStack_1d0,lVar35 + lVar36,lVar1);
      FUN_101c152d0();
      uVar14 = uVar29;
      func_0x000107c5fab8(uVar29,lVar39,lVar1,lVar32);
      pcVar38 = *(code **)(lVar17 + 8);
      (*pcVar38)(lVar39,lVar1);
      uVar5 = 0x112e09148;
      func_0x000101c16630(lVar7,0x112e09148,&UNK_10d9def40);
      func_0x000101c16630(lVar30,0x112e09148,&UNK_10d9def40);
      (*pcVar38)(uVar29,lVar1);
      func_0x000101c16630(lVar35,0x112e09148,&UNK_10d9def40);
      uVar3 = 0x4078600000000000;
      if ((uVar14 & 1) == 0) {
        uVar3 = 0x7ff0000000000000;
      }
      goto LAB_101c14540;
    }
    func_0x000101c16630(lVar7,0x112e09148,&UNK_10d9def40);
    func_0x000101c16630(lVar30,0x112e09148,&UNK_10d9def40);
    (**(code **)(lVar17 + 8))(uVar29,lVar1);
  }
  uVar5 = 0x112e09150;
  func_0x000101c16630(lVar35,0x112e09150,&UNK_10d9def88);
  uVar3 = 0x7ff0000000000000;
LAB_101c14540:
  func_0x000107c5f7ac();
  uVar2 = 0x112e09170;
  FUN_101c1667c(0x112e09170,0x112e09168,&UNK_10d9defa8,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_a0 = puStack_1c0;
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_98 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar8,&puStack_a0);
  *(long *)(lVar28 + -0x10) = lVar8;
  *(undefined **)(lVar28 + -8) = puVar6;
  *(long *)(lVar28 + -0x20) = lVar35;
  *(undefined8 *)(lVar28 + -0x18) = uVar5;
  *(undefined1 *)(lVar28 + -0x28) = 1;
  *(undefined8 *)(lVar28 + -0x30) = 0;
  *(undefined1 *)(lVar28 + -0x38) = 1;
  *(undefined8 *)(lVar28 + -0x40) = 0;
  func_0x000107c5f684(lVar20,0,1,0,1,uVar3,0,0,1);
  (**(code **)(lVar18 + 8))(lVar37,lVar8);
  func_0x000107c5f568();
  puStack_a8 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar15 = puVar4;
  puStack_b0 = puVar6;
  func_0x000107c61520(puVar4,lVar9,&puStack_b0);
  func_0x000107c5f6a0(lVar22,lVar37,0x4038000000000000,0,lVar9,puVar15);
  (**(code **)(lVar19 + 8))(lVar20,lVar9);
  func_0x000107c5f570();
  puVar6 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puStack_b8 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar16 = puVar4;
  puStack_c0 = puVar15;
  func_0x000107c61520(puVar4,lVar10,&puStack_c0);
  func_0x000107c5f6a0(lVar24,lVar20,0x4032000000000000,0,lVar10,puVar16);
  (**(code **)(lVar21 + 8))(lVar22,lVar10);
  func_0x000107c5f574();
  puStack_c8 = puVar6;
  puVar15 = puVar4;
  puStack_d0 = puVar16;
  func_0x000107c61520(puVar4,lVar11,&puStack_d0);
  func_0x000107c5f6a0(lVar26,lVar22,0x4028000000000000,0,lVar11,puVar15);
  (**(code **)(lVar23 + 8))(lVar24,lVar11);
  puStack_d8 = puVar6;
  puVar6 = puVar4;
  puStack_e0 = puVar15;
  func_0x000107c61520(puVar4,lVar12,&puStack_e0);
  func_0x000107c5f6bc(lVar31,0,1,lVar12,puVar6);
  (**(code **)(lVar25 + 8))(lVar26,lVar12);
  puStack_e8 = PTR___s7SwiftUI16_FixedSizeLayoutVAA12ViewModifierAAWP_110348ba8;
  puStack_f0 = puVar6;
  func_0x000107c61520(puVar4,lVar13,&puStack_f0);
  pcVar38 = *(code **)(lVar27 + 0x10);
  (*pcVar38)(lVar28,lVar31,lVar13);
  pcVar33 = *(code **)(lVar27 + 8);
  (*pcVar33)(lVar31,lVar13);
  (*pcVar38)(param_1,lVar28,lVar13);
  (*pcVar33)(lVar28,lVar13);
  return;
}



/* Entry: 101c14b68; end: 101c14b73;  */

void FUN_101c14b68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  long *plStack_1d0;
  undefined1 *puStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [64];
  long lStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long alStack_c8 [2];
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 uStack_af;
  undefined8 uStack_a7;
  undefined8 uStack_9f;
  undefined8 uStack_97;
  undefined8 uStack_8f;
  undefined8 uStack_87;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = 0x112e09160;
  uStack_258 = uVar8;
  uStack_240 = param_1;
  func_0x00010002969c(0x112e09160,&UNK_10d9defa0);
  uVar3 = 0xff;
  func_0x000107c61510(0xff,uVar1,uVar4,0,0);
  uVar4 = 0xff;
  func_0x000107c5f7dc(0xff,uVar3);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar4);
  lVar6 = 0;
  puStack_248 = puVar5;
  func_0x000107c5f760(0,uVar4,puVar5);
  lVar10 = *(long *)(lVar6 + -8);
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_260 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_250 = (long)puVar9 - extraout_x12;
  func_0x000107c5f438();
  FUN_101c14b74(auStack_160,uVar8,uVar1,uVar2);
  uStack_209 = (undefined1)auStack_160._24_8_;
  uStack_208 = SUB87(auStack_160._24_8_,1);
  uStack_211 = (undefined1)auStack_160._16_8_;
  uStack_210 = SUB87(auStack_160._16_8_,1);
  uStack_219 = (undefined1)auStack_160._8_8_;
  uStack_218 = SUB87(auStack_160._8_8_,1);
  uStack_221 = (undefined1)auStack_160._0_8_;
  uStack_220 = SUB87(auStack_160._0_8_,1);
  uStack_1f9 = (undefined1)auStack_160._40_8_;
  uStack_1f8 = SUB87(auStack_160._40_8_,1);
  uStack_201 = (undefined1)auStack_160._32_8_;
  uStack_200 = SUB87(auStack_160._32_8_,1);
  uStack_1e9 = (undefined1)auStack_160._56_8_;
  uStack_1e8 = SUB87(auStack_160._56_8_,1);
  uStack_1f1 = (undefined1)auStack_160._48_8_;
  uStack_1f0 = SUB87(auStack_160._48_8_,1);
  uStack_9f = CONCAT17(uStack_209,uStack_210);
  uStack_a7 = CONCAT17(uStack_211,uStack_218);
  uStack_f7 = uStack_210;
  uStack_f0 = uStack_209;
  uStack_ff = uStack_218;
  uStack_f8 = uStack_211;
  uStack_8f = CONCAT17(uStack_1f9,uStack_200);
  uStack_97 = CONCAT17(uStack_201,uStack_208);
  uStack_e7 = uStack_200;
  uStack_e0 = uStack_1f9;
  uStack_ef = uStack_208;
  uStack_e8 = uStack_201;
  uStack_87 = CONCAT17(uStack_1f1,uStack_1f8);
  uStack_d7 = uStack_1f0;
  uStack_df = uStack_1f8;
  uStack_d8 = uStack_1f1;
  uStack_af = CONCAT17(uStack_219,uStack_220);
  uStack_b7 = CONCAT17(uStack_221,uStack_228);
  uStack_107 = uStack_220;
  uStack_100 = uStack_219;
  uStack_10f = uStack_228;
  uStack_108 = uStack_221;
  uStack_7f = uStack_1f0;
  uStack_118 = 0x4020000000000000;
  uStack_110 = 0;
  alStack_c8[1] = 0x4020000000000000;
  uStack_b8 = 0;
  uVar4 = 0x112e09158;
  lStack_120 = lVar7;
  uStack_d0 = uStack_1e9;
  uStack_cf = uStack_1e8;
  alStack_c8[0] = lVar7;
  uStack_78 = uStack_1e9;
  uStack_77 = uStack_1e8;
  func_0x000101c165e8(&lStack_120,&lStack_1c0,0x112e09158,&UNK_10d9def98);
  func_0x000101c16630(alStack_c8,0x112e09158,&UNK_10d9def98);
  uStack_1a0 = uStack_258;
  uStack_1b0 = uVar1;
  uStack_1a8 = uVar2;
  func_0x000107c5f438();
  func_0x000107c5f75c(puVar9);
  puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,lVar6);
  lVar7 = lStack_250;
  pcVar12 = *(code **)(lVar10 + 0x10);
  (*pcVar12)(lStack_250,puVar9,lVar6);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(puVar9,lVar6);
  uStack_198 = CONCAT71(uStack_f7,uStack_f8);
  uStack_1a0 = CONCAT71(uStack_ff,uStack_100);
  uStack_188 = CONCAT71(uStack_e7,uStack_e8);
  uStack_190 = CONCAT71(uStack_ef,uStack_f0);
  uStack_178 = CONCAT71(uStack_d7,uStack_d8);
  uStack_180 = CONCAT71(uStack_df,uStack_e0);
  uStack_170 = CONCAT71(uStack_cf,uStack_d0);
  uStack_1a8 = CONCAT71(uStack_107,uStack_108);
  uStack_1b0 = CONCAT71(uStack_10f,uStack_110);
  uStack_1b8 = uStack_118;
  lStack_1c0 = lStack_120;
  plStack_1d0 = &lStack_1c0;
  (*pcVar12)(puVar9,lVar7,lVar6);
  puStack_1c8 = puVar9;
  func_0x000101c165e8(&lStack_120,&uStack_228,0x112e09158,&UNK_10d9def98);
  func_0x0001000285a8(0x112e09158,&UNK_10d9def98);
  uStack_228 = (undefined7)uVar4;
  uStack_221 = (undefined1)((ulong)uVar4 >> 0x38);
  uStack_220 = (undefined7)lVar6;
  uStack_219 = (undefined1)((ulong)lVar6 >> 0x38);
  uVar4 = 0x112e09208;
  FUN_101c1667c(0x112e09208,0x112e09158,&UNK_10d9def98,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  uStack_238 = uVar4;
  puStack_230 = puVar5;
  FUN_101c14e58(uStack_240,&plStack_1d0,2,&uStack_228,&uStack_238);
  func_0x000101c16630(&lStack_120,0x112e09158,&UNK_10d9def98);
  (*pcVar11)(lVar7,lVar6);
  (*pcVar11)(puVar9,lVar6);
  func_0x000101c16630(&lStack_1c0,0x112e09158,&UNK_10d9def98);
  return;
}



/* Entry: 101c14b74; end: 101c14e57;  */

void FUN_101c14b74(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  ulong *puVar16;
  undefined *puVar17;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_70 = *param_2;
  uVar5 = param_2[1];
  puVar2 = param_2;
  uStack_68 = uVar5;
  func_0x000100e8b654();
  func_0x000107c61434(uVar5);
  puVar16 = &uStack_70;
  puVar10 = PTR___sSSN_11034da80;
  puVar12 = puVar2;
  func_0x000107c5f5e0(puVar16,PTR___sSSN_11034da80,puVar2);
  uVar3 = 1;
  func_0x0001026ff85c();
  uVar7 = uVar3;
  puVar6 = puVar16;
  puVar17 = puVar10;
  puVar14 = puVar12;
  func_0x000107c5f5d4();
  func_0x000107c61574(uVar3);
  func_0x000100f795bc(puVar16,puVar10,puVar12);
  func_0x000107c6142c(param_5);
  uVar4 = 0xc6;
  func_0x0001026ff7d0();
  uVar3 = uVar4;
  uVar11 = uVar7;
  puVar16 = puVar6;
  puVar10 = puVar17;
  func_0x000107c5f5d0();
  puVar15 = puVar10;
  func_0x000107c61574(uVar4);
  func_0x000100f795bc(uVar7,puVar6,puVar17);
  func_0x000107c6142c(puVar14);
  uVar5 = param_2[3];
  if (uVar5 != 0) {
    uVar1 = param_2[2] & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_70 = param_2[2];
      uStack_68 = uVar5;
      func_0x000107c61434();
      puVar6 = &uStack_70;
      puVar17 = PTR___sSSN_11034da80;
      func_0x000107c5f5e0();
      uVar7 = 6;
      func_0x0001026ff85c();
      uVar8 = uVar7;
      puVar12 = puVar6;
      puVar13 = puVar17;
      puVar14 = puVar2;
      func_0x000107c5f5d4();
      func_0x000107c61574(uVar7);
      func_0x000100f795bc(puVar6,puVar17,puVar2);
      func_0x000107c6142c(puVar15);
      uVar9 = 0xbf;
      func_0x0001026ff7d0();
      uVar7 = uVar9;
      uVar4 = uVar8;
      puVar2 = puVar12;
      puVar17 = puVar13;
      func_0x000107c5f5d0();
      func_0x000107c61574(uVar9);
      puVar16 = (ulong *)((ulong)puVar16 & 0xffffffff);
      func_0x000100f795bc(uVar8,puVar12,puVar13);
      func_0x000107c6142c(puVar14);
      uVar5 = (ulong)puVar2 & 0xff;
      func_0x000100f8a880(uVar7,uVar4,puVar2);
      func_0x000107c61434(puVar17);
      goto LAB_101c14dac;
    }
  }
  uVar7 = 0;
  uVar4 = 0;
  uVar5 = 0;
  puVar17 = (undefined *)0x0;
LAB_101c14dac:
  func_0x000100f8a880(uVar3,uVar11,puVar16);
  func_0x000107c61434(puVar10);
  func_0x000101c16754(uVar7,uVar4,uVar5,puVar17);
  func_0x000101c16728(uVar7,uVar4,uVar5,puVar17);
  *param_1 = uVar3;
  param_1[1] = uVar11;
  *(char *)(param_1 + 2) = (char)puVar16;
  param_1[3] = puVar10;
  param_1[4] = uVar7;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = puVar17;
  func_0x000101c16728(uVar7,uVar4,uVar5,puVar17);
  func_0x000100f795bc(uVar3,uVar11,puVar16);
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 101c14e58; end: 101c15017;  */

void FUN_101c14e58(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  undefined8 *puVar2;
  long extraout_x8_01;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == 1) {
    lVar8 = *(long *)(param_4 & 0xffffffffffffffe);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_11034bd40)(param_3 << 3);
    lVar8 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar9 = &stack0xffffffffffffffb0 + lVar8;
    if (param_3 != 0) {
      uVar4 = 0;
      uVar1 = param_4 & 0xfffffffffffffffe;
      if ((3 < param_3) && (0x1f < (long)puVar9 - uVar1)) {
        uVar4 = param_3 & 0xfffffffffffffffc;
        puVar2 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar8);
        puVar5 = (undefined8 *)(uVar1 + 0x10);
        uVar6 = uVar4;
        do {
          uVar11 = puVar5[-2];
          uVar13 = puVar5[1];
          uVar12 = *puVar5;
          puVar2[-1] = puVar5[-1];
          puVar2[-2] = uVar11;
          puVar2[1] = uVar13;
          *puVar2 = uVar12;
          puVar2 = puVar2 + 4;
          puVar5 = puVar5 + 4;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        if (param_3 == uVar4) goto LAB_101c14f5c;
      }
      lVar8 = param_3 - uVar4;
      puVar2 = (undefined8 *)(uVar1 + uVar4 * 8);
      puVar5 = (undefined8 *)(puVar9 + uVar4 * 8);
      do {
        *puVar5 = *puVar2;
        lVar8 = lVar8 + -1;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar8 != 0);
    }
LAB_101c14f5c:
    lVar8 = 0;
    func_0x000107c6150c(0,param_3,puVar9,0,0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar9 = &stack0xffffffffffffffb0 + -extraout_x8_01;
    if (param_3 == 0) goto LAB_101c14fec;
  }
  lVar10 = 0x20;
  plVar7 = (long *)(param_4 & 0xfffffffffffffffe);
  uVar1 = param_3;
  do {
    if (param_3 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)*(int *)(lVar8 + lVar10);
    }
    (**(code **)(*(long *)(*plVar7 + -8) + 0x10))(puVar9 + lVar3,*param_2);
    lVar10 = lVar10 + 0x10;
    uVar1 = uVar1 - 1;
    param_2 = param_2 + 1;
    plVar7 = plVar7 + 1;
  } while (uVar1 != 0);
LAB_101c14fec:
  func_0x000107c5f7e0(param_1,puVar9,lVar8);
  return;
}



/* Entry: 101c15018; end: 101c152bf;  */

void FUN_101c15018(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  lVar10 = *(long *)(param_3 + -8);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - extraout_x12;
  lVar1 = 0;
  FUN_101c13e04();
  pcStack_c0 = *(code **)(lVar10 + 0x10);
  lVar2 = lVar12;
  (*pcStack_c0)(lVar12,param_2 + *(int *)(lVar1 + 0x2c),param_3);
  uVar13 = *(ulong *)(param_2 + 0x28);
  if (uVar13 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x20) & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar6 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      uStack_90 = *(ulong *)(param_2 + 0x20);
      uStack_88 = uVar13;
      func_0x000100e8b654();
      func_0x000107c61434(uVar13);
      puVar3 = &uStack_90;
      puVar14 = PTR___sSSN_11034da80;
      func_0x000107c5f5e0();
      uVar4 = 0x17;
      func_0x0001026ff85c();
      uVar5 = uVar4;
      puVar7 = puVar3;
      puVar8 = puVar14;
      lVar1 = lVar2;
      uStack_d0 = param_4;
      func_0x000107c5f5d4();
      uStack_f0 = uVar5;
      lStack_e8 = lVar1;
      puStack_e0 = puVar7;
      lStack_d8 = lVar9;
      lStack_c8 = lVar10;
      func_0x000107c61574(uVar4);
      func_0x000100f795bc(puVar3,puVar14,lVar2);
      func_0x000107c6142c(param_5);
      uVar6 = 0xc0;
      func_0x0001026ff7d0();
      puVar7 = puStack_e0;
      uVar13 = uVar6;
      puVar3 = puStack_e0;
      puVar14 = puVar8;
      func_0x000107c5f5d0();
      func_0x000107c61574(uVar6);
      lVar10 = lStack_c8;
      lVar9 = lStack_d8;
      func_0x000100f795bc(uStack_f0,puVar7,puVar8);
      func_0x000107c6142c(lStack_e8);
      param_4 = uStack_d0;
      uVar6 = (ulong)puVar3 & 0xff;
      func_0x000100f8a880(uVar13,uVar5,puVar3);
      func_0x000107c61434(puVar14);
      goto LAB_101c15200;
    }
  }
  uVar5 = 0;
  uVar13 = 0;
  uVar6 = 0;
  puVar14 = (undefined *)0x0;
LAB_101c15200:
  (*pcStack_c0)(lVar9,lVar12,param_3);
  puStack_68 = &uStack_90;
  uVar4 = 0x112e09160;
  lStack_a0 = param_3;
  uStack_90 = uVar13;
  uStack_88 = uVar5;
  uStack_80 = uVar6;
  puStack_78 = puVar14;
  lStack_70 = lVar9;
  func_0x0001000285a8(0x112e09160,&UNK_10d9defa0);
  uStack_b0 = param_4;
  uStack_98 = uVar4;
  FUN_101c166c0();
  uStack_a8 = uVar4;
  FUN_101c14e58(uStack_b8,&lStack_70,2,&lStack_a0,&uStack_b0);
  FUN_101c16728(uVar13,uVar5,uVar6,puVar14);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar12,param_3);
  FUN_101c16728(uStack_90,uStack_88,uStack_80,puStack_78);
  (*pcVar11)(lVar9,param_3);
  return;
}



/* Entry: 101c152c0; end: 101c152cf;  */

void FUN_101c152c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c152d0; end: 101c15347;  */

void FUN_101c152d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e09178 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f4dc(0xff);
  puVar2 = PTR___s7SwiftUI22UserInterfaceSizeClassOSQAAMc_110349030;
  func_0x000107c61520(PTR___s7SwiftUI22UserInterfaceSizeClassOSQAAMc_110349030,uVar1);
  puRam0000000112e09178 = puVar2;
  return;
}



/* Entry: 101c15348; end: 101c1534f;  */

void FUN_101c15348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 101c15350; end: 101c153ef;  */

void FUN_101c15350(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_48 = &UNK_10d9df020;
  puStack_40 = &UNK_10d9df038;
  puStack_38 = &UNK_10d9df038;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_101c16588();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0,5,&puStack_48,param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 101c153f0; end: 101c1565b;  */

long * FUN_101c153f0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  
  lVar14 = *(long *)(param_3 + 0x10);
  lVar21 = *(long *)(lVar14 + -8);
  uVar9 = *(uint *)(lVar21 + 0x50);
  uVar13 = (ulong)uVar9 & 0xff;
  lVar20 = *(long *)(lVar21 + 0x40);
  lVar4 = 0;
  func_0x000107c5f4dc();
  lVar19 = *(long *)(lVar4 + -8);
  uVar11 = (ulong)*(uint *)(lVar19 + 0x50) & 0xf8 | 7;
  uVar12 = *(ulong *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = uVar12;
  if (uVar12 < 9) {
    uVar1 = 8;
  }
  uVar6 = uVar11 | uVar13;
  if ((uVar6 != 7 || ((*(uint *)(lVar19 + 0x50) | uVar9) & 0x100000) != 0) ||
      0x18 < uVar1 - ((-uVar13 - 0x31 | uVar13) - (lVar20 + uVar11) | uVar11)) {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    goto LAB_101c155fc;
  }
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  puVar7 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  *puVar7 = *puVar8;
  uVar16 = puVar8[1];
  puVar7[1] = uVar16;
  puVar7[2] = puVar8[2];
  uVar17 = puVar8[3];
  puVar7[3] = uVar17;
  pcVar22 = *(code **)(lVar21 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar17);
  (*pcVar22)(puVar7 + 4,puVar8 + 4,lVar14);
  puVar15 = (uint *)((long)(puVar8 + 2) + lVar20 + 0x17 & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar15 + uVar1);
  uVar9 = (uint)bVar3;
  if (1 < bVar3) {
    uVar18 = (uint)uVar1;
    uVar10 = 4;
    if (uVar18 < 4) {
      uVar10 = uVar18;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_101c155b8;
      uVar10 = (uint)(byte)*puVar15;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar15;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar15;
    }
    else {
      uVar10 = *puVar15;
    }
    uVar9 = uVar10 | bVar3 - 2 << (ulong)((uVar18 & 3) << 3);
    if (3 < uVar18) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 2;
  }
LAB_101c155b8:
  puVar7 = (undefined8 *)((long)(puVar7 + 2) + lVar20 + 0x17 & 0xfffffffffffffff8);
  if (uVar9 == 1) {
    puVar5 = puVar15;
    (**(code **)(lVar19 + 0x30))(puVar15,1,lVar4);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar19 + 0x10))(puVar7,puVar15,lVar4);
      (**(code **)(lVar19 + 0x38))(puVar7,0,1,lVar4);
    }
    else {
      func_0x000107c610b4(puVar7,puVar15,uVar12);
    }
    *(undefined1 *)((long)puVar7 + uVar1) = 1;
    return param_1;
  }
  *puVar7 = *(undefined8 *)puVar15;
  *(undefined1 *)((long)puVar7 + uVar1) = 0;
LAB_101c155fc:
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101c1565c; end: 101c157d7;  */

void FUN_101c1565c(long param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar7 = param_1 + 0x17U & 0xfffffffffffffff8;
  func_0x000107c6142c(*(undefined8 *)(uVar7 + 8));
  func_0x000107c6142c(*(undefined8 *)(uVar7 + 0x18));
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar8 = uVar7 + *(byte *)(lVar6 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 8))(uVar8);
  lVar11 = *(long *)(lVar6 + 0x40);
  lVar6 = 0;
  func_0x000107c5f4dc();
  lVar10 = *(long *)(lVar6 + -8);
  uVar7 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  puVar9 = (uint *)(uVar8 + lVar11 + uVar7 & (uVar7 ^ 0xffffffffffffffff));
  uVar7 = *(ulong *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar1 = *(byte *)((long)puVar9 + uVar7);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar7;
    uVar5 = 4;
    if (uVar3 < 4) {
      uVar5 = uVar3;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_101c15778;
      uVar5 = (uint)(byte)*puVar9;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar9;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar9;
    }
    else {
      uVar5 = *puVar9;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_101c15778:
  if (uVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)puVar9);
    return;
  }
  puVar2 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar6);
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101c157d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))(puVar9,lVar6);
  return;
}



/* Entry: 101c157d8; end: 101c1615f;  */

undefined8 * FUN_101c157d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  puVar3 = (undefined8 *)((long)param_1 + 0x17U & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + 0x17U & 0xfffffffffffffff8);
  *puVar3 = *puVar6;
  uVar8 = puVar6[1];
  puVar3[1] = uVar8;
  puVar3[2] = puVar6[2];
  uVar9 = puVar6[3];
  puVar3[3] = uVar9;
  lVar10 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar10 + -8);
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar12 = uVar7 + 0x10 + (long)(puVar3 + 2) & (uVar7 ^ 0xffffffffffffffff);
  uVar14 = uVar7 + 0x10 + (long)(puVar6 + 2) & (uVar7 ^ 0xffffffffffffffff);
  pcVar17 = *(code **)(lVar15 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  (*pcVar17)(uVar12,uVar14,lVar10);
  lVar10 = *(long *)(lVar15 + 0x40);
  lVar15 = 0;
  func_0x000107c5f4dc();
  lVar16 = *(long *)(lVar15 + -8);
  uVar7 = (ulong)*(uint *)(lVar16 + 0x50) & 0xf8 | 7;
  lVar10 = lVar10 + uVar7;
  puVar3 = (undefined8 *)(lVar10 + uVar12 & (uVar7 ^ 0xffffffffffffffff));
  puVar11 = (uint *)(lVar10 + uVar14 & (uVar7 ^ 0xffffffffffffffff));
  uVar7 = *(ulong *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar12 = uVar7;
  if (uVar7 < 9) {
    uVar12 = 8;
  }
  bVar1 = *(byte *)((long)puVar11 + uVar12);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar13 = (uint)uVar12;
    uVar5 = 4;
    if (uVar13 < 4) {
      uVar5 = uVar13;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_101c15944;
      uVar5 = (uint)(byte)*puVar11;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*puVar11;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*puVar11;
    }
    else {
      uVar5 = *puVar11;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_101c15944:
  if (uVar4 == 1) {
    puVar2 = puVar11;
    (**(code **)(lVar16 + 0x30))(puVar11,1,lVar15);
    if ((int)puVar2 == 0) {
      (**(code **)(lVar16 + 0x10))(puVar3,puVar11,lVar15);
      (**(code **)(lVar16 + 0x38))(puVar3,0,1,lVar15);
    }
    else {
      func_0x000107c610b4(puVar3,puVar11,uVar7);
    }
    *(undefined1 *)((long)puVar3 + uVar12) = 1;
  }
  else {
    *puVar3 = *(undefined8 *)puVar11;
    *(undefined1 *)((long)puVar3 + uVar12) = 0;
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101c16160; end: 101c16327;  */

ulong FUN_101c16160(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  uVar2 = *(uint *)(lVar11 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar4 = 0;
  func_0x000107c5f4dc();
  lVar4 = *(long *)(lVar4 + -8);
  uVar8 = *(ulong *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_101c16264;
  uVar7 = (ulong)*(uint *)(lVar4 + 0x50) & 0xf8 | 7;
  uVar8 = uVar8 + ((uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40) + uVar7
                  & (uVar7 ^ 0xffffffffffffffff)) + 1;
  uVar6 = (uint)uVar8;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_101c16264;
      goto LAB_101c16224;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_101c16224:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar8 | uVar2) + 1);
  }
LAB_101c16264:
  if (-1 < (int)uVar2) {
    uVar8 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    return (ulong)((int)uVar8 + 1);
  }
  uVar8 = ((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar5 + 0x20 & ~uVar5;
                    /* WARNING: Could not recover jumptable at 0x000101c162c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x30))(uVar8,uVar2,lVar10);
  return uVar8;
}



/* Entry: 101c16328; end: 101c16587;  */

void FUN_101c16328(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(param_4 + 0x10);
  lVar13 = *(long *)(lVar12 + -8);
  uVar2 = *(uint *)(lVar13 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  lVar5 = 0;
  func_0x000107c5f4dc();
  lVar5 = *(long *)(lVar5 + -8);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar8 = (ulong)*(uint *)(lVar5 + 0x50) & 0xf8 | 7;
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  lVar5 = uVar7 + ((uVar6 + 0x30 & (uVar6 ^ 0xffffffffffffffff)) + *(long *)(lVar13 + 0x40) + uVar8
                  & (uVar8 ^ 0xffffffffffffffff)) + 1;
  uVar9 = (uint)lVar5;
  if (param_3 < uVar1 || param_3 - uVar1 == 0) {
    bVar4 = 0;
  }
  else if (uVar9 < 4) {
    uVar10 = (param_3 - uVar1) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar4 = 2;
    if (0xfffe < uVar10) {
      bVar4 = 4;
    }
    if (uVar10 < 0xff) {
      bVar4 = uVar10 != 0;
    }
  }
  else {
    bVar4 = 1;
  }
  uVar10 = (uint)param_2;
  if (uVar1 < uVar10) {
    uVar10 = uVar10 + ~uVar1;
    if (uVar9 < 4) {
      iVar11 = (uVar10 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar1 = uVar10 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar5);
        uVar3 = (undefined2)uVar1;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar10;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar5);
      *(uint *)param_1 = uVar10;
      iVar11 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + lVar5) = (char)iVar11;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + lVar5) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar5) = iVar11;
    }
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + lVar5) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + lVar5) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar5) = 0;
    }
    if (uVar10 != 0) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c16520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar13 + 0x38))
                  (((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar6 + 0x20 & ~uVar6,param_2,
                   uVar2,lVar12);
        return;
      }
      if ((int)uVar10 < 0) {
        *param_1 = (ulong)(uVar10 & 0x7fffffff);
        param_1[1] = 0;
      }
      else {
        param_1[1] = (ulong)(uVar10 - 1);
      }
    }
  }
  return;
}



/* Entry: 101c16588; end: 101c1666f;  */

void FUN_101c16588(long param_1)

{
  long lVar1;
  
  if (lRam0000000112e09200 == 0) {
    lVar1 = 0x112e09148;
    func_0x00010002969c(0x112e09148,&UNK_10d9def40);
    func_0x000107c5f2a4();
    if (lVar1 == 0) {
      lRam0000000112e09200 = param_1;
    }
  }
  return;
}



/* Entry: 101c16670; end: 101c1667b;  */

void FUN_101c16670(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined8 in_x3;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar12 = *(long *)(lVar1 + -8);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&uStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12;
  lVar2 = 0;
  FUN_101c13e04();
  pcStack_c0 = *(code **)(lVar12 + 0x10);
  lVar3 = lVar14;
  (*pcStack_c0)(lVar14,lVar8 + *(int *)(lVar2 + 0x2c),lVar1);
  uVar15 = *(ulong *)(lVar8 + 0x28);
  if (uVar15 != 0) {
    uVar7 = *(ulong *)(lVar8 + 0x20) & 0xffffffffffff;
    if ((uVar15 & 0x2000000000000000) != 0) {
      uVar7 = uVar15 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      uStack_90 = *(ulong *)(lVar8 + 0x20);
      uStack_88 = uVar15;
      func_0x000100e8b654();
      func_0x000107c61434(uVar15);
      puVar4 = &uStack_90;
      puVar16 = PTR___sSSN_11034da80;
      func_0x000107c5f5e0();
      uVar5 = 0x17;
      func_0x0001026ff85c();
      uVar6 = uVar5;
      puVar9 = puVar4;
      puVar10 = puVar16;
      lVar2 = lVar3;
      uStack_d0 = uVar17;
      func_0x000107c5f5d4();
      uStack_f0 = uVar6;
      lStack_e8 = lVar2;
      puStack_e0 = puVar9;
      lStack_d8 = lVar11;
      lStack_c8 = lVar12;
      func_0x000107c61574(uVar5);
      func_0x000100f795bc(puVar4,puVar16,lVar3);
      func_0x000107c6142c(in_x3);
      uVar7 = 0xc0;
      func_0x0001026ff7d0();
      puVar9 = puStack_e0;
      uVar15 = uVar7;
      puVar4 = puStack_e0;
      puVar16 = puVar10;
      func_0x000107c5f5d0();
      func_0x000107c61574(uVar7);
      lVar12 = lStack_c8;
      lVar11 = lStack_d8;
      func_0x000100f795bc(uStack_f0,puVar9,puVar10);
      func_0x000107c6142c(lStack_e8);
      uVar17 = uStack_d0;
      uVar7 = (ulong)puVar4 & 0xff;
      func_0x000100f8a880(uVar15,uVar6,puVar4);
      func_0x000107c61434(puVar16);
      goto LAB_101c15200;
    }
  }
  uVar6 = 0;
  uVar15 = 0;
  uVar7 = 0;
  puVar16 = (undefined *)0x0;
LAB_101c15200:
  (*pcStack_c0)(lVar11,lVar14,lVar1);
  puStack_68 = &uStack_90;
  uVar5 = 0x112e09160;
  lStack_a0 = lVar1;
  uStack_90 = uVar15;
  uStack_88 = uVar6;
  uStack_80 = uVar7;
  puStack_78 = puVar16;
  lStack_70 = lVar11;
  func_0x0001000285a8(0x112e09160,&UNK_10d9defa0);
  uStack_b0 = uVar17;
  uStack_98 = uVar5;
  FUN_101c166c0();
  uStack_a8 = uVar5;
  FUN_101c14e58(uStack_b8,&lStack_70,2,&lStack_a0,&uStack_b0);
  FUN_101c16728(uVar15,uVar6,uVar7,puVar16);
  pcVar13 = *(code **)(lVar12 + 8);
  (*pcVar13)(lVar14,lVar1);
  FUN_101c16728(uStack_90,uStack_88,uStack_80,puStack_78);
  (*pcVar13)(lVar11,lVar1);
  return;
}



/* Entry: 101c1667c; end: 101c166bf;  */

void FUN_101c1667c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101c166c0; end: 101c16727;  */

void FUN_101c166c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112e09210 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e09160;
  func_0x00010002969c(0x112e09160,&UNK_10d9defa0);
  puStack_18 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puVar2 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar1,&puStack_18);
  puRam0000000112e09210 = puVar2;
  return;
}



/* Entry: 101c16728; end: 101c167cb;  */

void FUN_101c16728(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x000100f795bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
    return;
  }
  return;
}



/* Entry: 101c167cc; end: 101c167eb;  */

void FUN_101c167cc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110456c20;
  param_1[4] = &PTR_DAT_110456bc8;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c167ec; end: 101c168db;  */

void FUN_101c167ec(char param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    if (param_1 == '\x01') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x796669746f7073;
      func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
    }
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f003820);
    func_0x000107c56bcc(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101c168dc; end: 101c16a63;  */

undefined8 FUN_101c168dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f003820);
    lVar1 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    if (lVar1 != 0) {
      uVar3 = 0x112d373e8;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      plVar4 = &lStack_58;
      func_0x000107c6147c(plVar4,auStack_48,uVar3,PTR___sSSN_11034da80,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x000103a83784();
        lVar2 = plVar4[2] + 1;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          if ((lStack_58 == 0x796669746f7073 && lStack_50 == -0x1900000000000000) ||
             (uVar5 = 0x796669746f7073,
             func_0x000107c605b8(0x796669746f7073,0xe700000000000000,lStack_58,lStack_50,0),
             (uVar5 & 1) != 0)) {
            func_0x000107c6142c(lStack_50);
            func_0x000107c6142c(plVar4);
            return 0;
          }
        }
        func_0x000107c6142c(lStack_50);
        func_0x000107c6142c(plVar4);
      }
    }
  }
  return 1;
}



/* Entry: 101c16a64; end: 101c16c27;  */

void FUN_101c16a64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x0001009f0578(param_2,lVar7);
    lVar2 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
    if ((int)lVar2 == 1) {
      puVar5 = (undefined *)0x0;
    }
    else {
      (**(code **)(lVar8 + 0x20))(puVar6,lVar7,lVar1);
      func_0x000107c5ee8c();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1);
      (**(code **)(lVar8 + 8))(puVar6,lVar1);
    }
    uVar4 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f003840);
    func_0x000107c56bcc(lVar3);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101c16c28; end: 101c16d53;  */

void FUN_101c16c28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar4 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f003840);
    lVar4 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    if (lVar4 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar1 = lVar4;
      func_0x000107c6148c(lVar4,puVar3);
      bVar5 = lVar1 == 0;
      if (!bVar5) {
        func_0x000107c4223c();
        func_0x000107c5ee88(param_1);
      }
      func_0x000107c615e8(lVar4);
      goto LAB_101c16d1c;
    }
  }
  bVar5 = true;
LAB_101c16d1c:
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,bVar5,1,lVar4);
  return;
}



/* Entry: 101c16d54; end: 101c16e23;  */

void FUN_101c16d54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  FUN_101c167ec(param_1,*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x000101c16d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c16e24; end: 101c16e43;  */

undefined1  [16] FUN_101c16e24(void)

{
  return ZEXT816(0x110456c00);
}



/* Entry: 101c16e44; end: 101c16e8f;  */

void FUN_101c16e44(undefined8 param_1)

{
  func_0x0001000285a8(0x112e08d78,&UNK_10d9de2e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c16e90,param_1);
  return;
}



/* Entry: 101c16e90; end: 101c16f0b;  */

void FUN_101c16e90(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  FUN_101c17a94();
  lVar2 = param_2;
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar2 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar2 + 0x18) = 0xd000000000000019;
  *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
  *(undefined **)(lVar2 + 0x30) = puVar1;
  *(undefined8 *)(lVar2 + 0x20) = 0x800000010d9df100;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110456cc0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c16f0c; end: 101c16ff3;  */

void FUN_101c16f0c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x800000010d9df100;
  return;
}



/* Entry: 101c16ff4; end: 101c1700b;  */

void FUN_101c16ff4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_1;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1700c,0,0);
  return;
}



/* Entry: 101c1700c; end: 101c17097;  */

void FUN_101c1700c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c1838c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c17098,uVar2,uVar3);
  return;
}



/* Entry: 101c17098; end: 101c170e3;  */

void FUN_101c17098(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000101c16f68();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c170e4,0,0);
  return;
}



/* Entry: 101c170e4; end: 101c17343;  */

void FUN_101c170e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  code *pcVar14;
  
  if (*(long *)(unaff_x22 + 0x118) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c17128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar2 = *(long *)(unaff_x22 + 0x108);
  puVar6 = PTR_PTR_1126aebd8;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c5ed70();
  uVar13 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c51834();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x120) = puVar6;
  func_0x000107c61170(puVar7);
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = 0x3ff0000000000000;
  *(undefined1 *)(unaff_x22 + 0x48) = 2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x60) = 0x1d;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined4 *)(unaff_x22 + 0xa0) = 0;
  lVar8 = 0;
  func_0x000100de1f70();
  func_0x000107c61434(uVar3);
  func_0x000107c61174(puVar6);
  func_0x00010488bd80();
  *(long *)(unaff_x22 + 0x128) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar13;
  func_0x000100083b20(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar4 = *(long *)(unaff_x22 + 200);
  func_0x0001000a8868(unaff_x22 + 0xa8,uVar1);
  pcVar14 = *(code **)(lVar4 + 0x10);
  func_0x000107c6157c(uVar13);
  lVar12 = unaff_x22 + 0x38;
  (*pcVar14)(lVar12,FUN_101c178dc,uVar13,uVar1,lVar4);
  *(long *)(unaff_x22 + 0x138) = lVar12;
  func_0x000107c61574(uVar13);
  func_0x0001000834e4(unaff_x22 + 0xa8);
  *(long *)(unaff_x22 + 0x20) = lVar8;
  *(long *)(unaff_x22 + 0x28) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
  *(long *)(unaff_x22 + 0xe0) = lVar12;
  *(long *)(unaff_x22 + 0xe8) = lVar8;
  iVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar5 != 0) {
    plVar9 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x140) = plVar9;
    uVar10 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101c17344;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0xf0,&UNK_10d9df150,unaff_x22 + 0x10,FUN_101c17a54,unaff_x22 + 0xd0,0,0,uVar10);
    return;
  }
  pcVar14 = FUN_101c17a54;
  func_0x000107c615b4(FUN_101c17a54,unaff_x22 + 0xd0);
  *(code **)(unaff_x22 + 0x148) = pcVar14;
  plVar9 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101c173ac;
  lVar12 = *(long *)(unaff_x22 + 0x100);
  plVar9[9] = *(long *)(unaff_x22 + 0x108);
  plVar9[10] = lVar12;
  plVar9[8] = unaff_x22 + 0xf8;
  plVar11 = (long *)0x50;
  func_0x000107c615b8();
  plVar9[0xb] = (long)plVar11;
  lVar12 = 0;
  func_0x000100de1f70();
  *plVar11 = (long)plVar9;
  plVar11[1] = (long)FUN_101c17524;
  plVar11[7] = lVar8;
  plVar11[8] = lVar12;
  plVar11[6] = (long)(plVar9 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 101c17344; end: 101c173ab;  */

void FUN_101c17344(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x140));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(lVar1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1740c,0,0);
  return;
}



/* Entry: 101c173ac; end: 101c1740b;  */

void FUN_101c173ac(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c1746c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101c174b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1740c; end: 101c1746b;  */

void FUN_101c1740c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar2);
  FUN_101769bb8(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101c17468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x158));
  return;
}



/* Entry: 101c1746c; end: 101c174af;  */

void FUN_101c1746c(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x148));
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1740c,0,0);
  return;
}



/* Entry: 101c174b0; end: 101c174b7;  */

void FUN_101c174b0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_removeCancellationHandler_110350120)(*(undefined8 *)(unaff_x22 + 0x148))
  ;
  return;
}



/* Entry: 101c174b8; end: 101c17523;  */

void FUN_101c174b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  lVar2 = 0;
  func_0x000100de1f70();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c17524;
  plVar1[7] = param_2;
  plVar1[8] = lVar2;
  plVar1[6] = unaff_x22 + 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 101c17524; end: 101c1756b;  */

void FUN_101c17524(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1756c,0,0);
  return;
}



/* Entry: 101c1756c; end: 101c17687;  */

void FUN_101c1756c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  *(char *)(unaff_x22 + 0x31) = *(char *)(unaff_x22 + 0x30);
  if (*(char *)(unaff_x22 + 0x30) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_101c17ab4(uVar4,1);
    **(undefined8 **)(unaff_x22 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x000101c17610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  uVar4 = 0x112d45220;
  FUN_101c1838c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c17688,uVar3,uVar4);
  return;
}



/* Entry: 101c17688; end: 101c17743;  */

void FUN_101c17688(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x31);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar1 + 0x30,unaff_x22 + 0x10,0x21,0);
  func_0x000101c17ac8(uVar4,uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x30);
  func_0x000107c61558(uVar5);
  uVar6 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0x8000000000000000;
  func_0x000101c17c14(uVar4,uVar2,uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  func_0x000107c614a8(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c17744,0,0);
  return;
}



/* Entry: 101c17744; end: 101c177bb;  */

void FUN_101c17744(void)

{
  long unaff_x22;
  
  FUN_101c17ab4(*(undefined8 *)(unaff_x22 + 0x60),*(undefined1 *)(unaff_x22 + 0x31));
  **(undefined8 **)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000101c17784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c177bc; end: 101c177db;  */

void FUN_101c177bc(void)

{
  func_0x000101c16f68();
  return;
}



/* Entry: 101c177dc; end: 101c1782b;  */

void FUN_101c177dc(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c1782c;
  plVar1[0x20] = param_1;
  plVar1[0x21] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1700c,0,0);
  return;
}



/* Entry: 101c1782c; end: 101c1786f;  */

void FUN_101c1782c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c1786c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101c17870; end: 101c178db;  */

undefined1  [16] FUN_101c17870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  uVar1 = 0;
  func_0x000107c5ede0(0);
  uVar2 = 0x112e092e0;
  FUN_101c1838c(0x112e092e0,PTR___s10Foundation3URLVMa_110350988,
                PTR___s10Foundation3URLVSHAAMc_1103509a0);
  func_0x000107c5fa4c(uVar6,uVar1,uVar2);
  lVar3 = 0;
  uStack_68 = param_1;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar10 = 0;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(lVar11 + 0x10);
    do {
      (*pcVar7)(puVar8,*(long *)(unaff_x20 + 0x30) + lVar9 * uVar6,lVar3);
      uVar2 = 0x112d7e688;
      FUN_101c1838c(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                    PTR___s10Foundation3URLVSQAAMc_1103509a8);
      puVar4 = puVar8;
      func_0x000107c5fab8(puVar8,uStack_68,lVar3,uVar2);
      uVar10 = (uint)puVar4;
      (**(code **)(lVar11 + 8))(puVar8,lVar3);
      if (((ulong)puVar4 & 1) != 0) break;
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  auVar12._8_4_ = uVar10 & 1;
  auVar12._0_8_ = uVar6;
  auVar12._12_4_ = 0;
  return auVar12;
}



/* Entry: 101c178dc; end: 101c179ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c178dc(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (((uint)param_3 & 0xff00) == 0x100) {
    plVar1 = param_1;
    FUN_101769b78();
    puVar2 = &UNK_110776d50;
    func_0x000107c613f8(&UNK_110776d50,plVar1,0,0);
    *plVar1 = (long)param_1;
    plVar1[1] = param_2;
    *(char *)(plVar1 + 2) = (char)param_3;
    uStack_48 = 1;
    puStack_50 = puVar2;
    func_0x000101765ad4(param_1,param_2,param_3);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar2);
  }
  else {
    puVar2 = *(undefined **)((long)param_1 + _DAT_11307d350);
    uStack_48 = 0;
    puStack_50 = puVar2;
    func_0x000107c61174();
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101c179ac; end: 101c17a17;  */

void FUN_101c179ac(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c17a18;
  plVar4[9] = lVar3;
  plVar4[10] = lVar5;
  plVar4[8] = param_1;
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[0xb] = (long)plVar2;
  lVar3 = 0;
  func_0x000100de1f70();
  *plVar2 = (long)plVar4;
  plVar2[1] = (long)FUN_101c17524;
  plVar2[7] = lVar1;
  plVar2[8] = lVar3;
  plVar2[6] = (long)(plVar4 + 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}


