/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f53b70; end: 102f53d4f;  */

void FUN_102f53b70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar1 = uRam0000000112f2a100;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
  lVar8 = *(long *)(unaff_x22 + 0x2a0);
  lVar10 = *(long *)(unaff_x22 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f114f00);
  lVar3 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar4 = lVar3;
  func_0x000107c5f830(lVar8);
  func_0x000107c5f82c();
  pcVar11 = *(code **)(lVar10 + 8);
  lVar10 = lVar8;
  (*pcVar11)(lVar8,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar1,uVar2,lVar3,(ulong)(lVar4 - lVar10) / 1000000);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f114f00);
  func_0x0001067cd0d0(uVar1,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61654();
  (*pcVar11)(uVar12,uVar9);
  FUN_102f4b608(0xd00000000000001d,0x800000010f114f00,uVar7);
  func_0x000107c61654();
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar5);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_102f5463c(unaff_x22 + 0xa0);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(lVar8);
                    /* WARNING: Could not recover jumptable at 0x000102f53d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f53d50; end: 102f53dc7;  */

void FUN_102f53d50(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000100e19120(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f53dc8; end: 102f53e2f;  */

void FUN_102f53dc8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  plVar4 = (long *)0x8b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f53e30;
  plVar4[0x10b] = unaff_x20;
  plVar4[0x10a] = param_3;
  plVar4[0x109] = param_2;
  plVar4[0x108] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x10c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x10d] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10e] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10f] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x110] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x111] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x112] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4bce0,0,0);
  return;
}



/* Entry: 102f53e30; end: 102f53e93;  */

void FUN_102f53e30(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x80);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x38);
    uVar7 = *(undefined8 *)(lVar2 + 0x30);
    puVar1[3] = *(undefined8 *)(lVar2 + 0x28);
    puVar1[2] = uVar6;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar7 = *(undefined8 *)(lVar2 + 0x58);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar8 = *(undefined8 *)(lVar2 + 0x60);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar9 = *(undefined8 *)(lVar2 + 0x70);
    puVar1[0xb] = *(undefined8 *)(lVar2 + 0x68);
    puVar1[10] = uVar8;
    puVar1[0xd] = uVar10;
    puVar1[0xc] = uVar9;
    puVar1[7] = uVar5;
    puVar1[6] = uVar4;
    puVar1[9] = uVar7;
    puVar1[8] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000102f53e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102f53e94; end: 102f53eeb;  */

void FUN_102f53e94(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  plVar4 = (long *)0x690;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f53eec;
  plVar4[0xc5] = unaff_x20;
  plVar4[0xc4] = param_2;
  plVar4[0xc3] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0xc6] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[199] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[200] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc9] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0xca] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xcb] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xcc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4ca80,0,0);
  return;
}



/* Entry: 102f53eec; end: 102f53f6f;  */

void FUN_102f53eec(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xe8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    uVar10 = *(undefined8 *)(lVar2 + 0x68);
    uVar9 = *(undefined8 *)(lVar2 + 0x60);
    puVar1[9] = *(undefined8 *)(lVar2 + 0x58);
    puVar1[8] = uVar8;
    puVar1[0xb] = uVar10;
    puVar1[10] = uVar9;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    uVar7 = *(undefined8 *)(lVar2 + 0x88);
    uVar6 = *(undefined8 *)(lVar2 + 0x80);
    uVar8 = *(undefined8 *)(lVar2 + 0x90);
    uVar10 = *(undefined8 *)(lVar2 + 0xa8);
    uVar9 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1[0x11] = *(undefined8 *)(lVar2 + 0x98);
    puVar1[0x10] = uVar8;
    puVar1[0x13] = uVar10;
    puVar1[0x12] = uVar9;
    puVar1[0xd] = uVar5;
    puVar1[0xc] = uVar4;
    puVar1[0xf] = uVar7;
    puVar1[0xe] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0xb8);
    uVar4 = *(undefined8 *)(lVar2 + 0xb0);
    uVar7 = *(undefined8 *)(lVar2 + 200);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    uVar9 = *(undefined8 *)(lVar2 + 0xd8);
    uVar8 = *(undefined8 *)(lVar2 + 0xd0);
    puVar1[0x1a] = *(undefined8 *)(lVar2 + 0xe0);
    puVar1[0x17] = uVar7;
    puVar1[0x16] = uVar6;
    puVar1[0x19] = uVar9;
    puVar1[0x18] = uVar8;
    puVar1[0x15] = uVar5;
    puVar1[0x14] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000102f53f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102f53f70; end: 102f53ff7;  */

void FUN_102f53f70(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar4 = (long *)0x490;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f552c4;
  plVar4[0x87] = unaff_x20;
  plVar4[0x86] = param_6;
  plVar4[0x85] = param_5;
  plVar4[0x84] = param_4;
  plVar4[0x83] = param_3;
  plVar4[0x82] = param_2;
  plVar4[0x81] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x88] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x89] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x8a] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x8b] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x8c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x8d] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x8e] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4dab8,0,0);
  return;
}



/* Entry: 102f53ff8; end: 102f5406b;  */

void FUN_102f53ff8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar4 = (long *)0x440;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f5406c;
  plVar4[0x7d] = unaff_x20;
  *(undefined1 *)((long)plVar4 + 0x3c1) = 3;
  plVar4[0x7c] = param_4;
  plVar4[0x7b] = param_3;
  plVar4[0x7a] = param_2;
  plVar4[0x79] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x7e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x7f] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x80] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x81] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x82] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x83] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x84] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4e368,0,0);
  return;
}



/* Entry: 102f5406c; end: 102f540bf;  */

void FUN_102f5406c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(lVar2 + 0x30);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000102f540bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102f540c0; end: 102f5412f;  */

void FUN_102f540c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  plVar4 = (long *)0x680;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552c8;
  plVar4[0xc5] = unaff_x20;
  plVar4[0xc4] = param_4;
  plVar4[0xc3] = param_3;
  plVar4[0xc2] = param_2;
  plVar4[0xc1] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0xc6] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[199] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[200] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4ea58,0,0);
  return;
}



/* Entry: 102f54130; end: 102f5418b;  */

void FUN_102f54130(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f5418c;
  plVar4[0x2d] = param_2;
  plVar4[0x2e] = unaff_x20;
  plVar4[0x2c] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x2f] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x30] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x31] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x32] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4f324,0,0);
  return;
}



/* Entry: 102f5418c; end: 102f541eb;  */

void FUN_102f5418c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f541e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f541ec; end: 102f5425b;  */

void FUN_102f541ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  plVar4 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552cc;
  plVar4[0x45] = unaff_x20;
  plVar4[0x44] = param_4;
  plVar4[0x43] = param_3;
  plVar4[0x42] = param_2;
  plVar4[0x41] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x46] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x47] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x48] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x49] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4fb70,0,0);
  return;
}



/* Entry: 102f5425c; end: 102f542a7;  */

void FUN_102f5425c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552e0;
  plVar4[0x49] = unaff_x20;
  plVar4[0x48] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x4a] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x4b] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x4c] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x4d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f50370,0,0);
  return;
}



/* Entry: 102f542a8; end: 102f542ff;  */

void FUN_102f542a8(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  plVar4 = (long *)0x570;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552d0;
  plVar4[0xa3] = unaff_x20;
  plVar4[0xa2] = param_2;
  plVar4[0xa1] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0xa4] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xa5] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xa6] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xa7] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0xa8] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xa9] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xaa] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f50b98,0,0);
  return;
}



/* Entry: 102f54300; end: 102f5436f;  */

void FUN_102f54300(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  plVar4 = (long *)0x280;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552d4;
  plVar4[0x45] = unaff_x20;
  plVar4[0x44] = param_4;
  plVar4[0x43] = param_3;
  plVar4[0x42] = param_2;
  plVar4[0x41] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x46] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x47] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x48] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x49] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x4a] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x4b] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x4c] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f51638,0,0);
  return;
}



/* Entry: 102f54370; end: 102f543e3;  */

void FUN_102f54370(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x250;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102f543e4;
  plVar4[0x3a] = param_4;
  plVar4[0x3b] = unaff_x20;
  plVar4[0x38] = param_2;
  plVar4[0x39] = param_3;
  plVar4[0x37] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x3c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x3d] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3e] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3f] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x40] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x41] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x42] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f51d2c,0,0);
  return;
}



/* Entry: 102f543e4; end: 102f5443b;  */

void FUN_102f543e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f54438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f5443c; end: 102f544af;  */

void FUN_102f5443c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552e4;
  plVar4[0x45] = unaff_x20;
  plVar4[0x44] = param_4;
  plVar4[0x43] = param_3;
  plVar4[0x42] = param_2;
  plVar4[0x41] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x46] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x47] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x48] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x49] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f52598,0,0);
  return;
}



/* Entry: 102f544b0; end: 102f54523;  */

void FUN_102f544b0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x250;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552dc;
  plVar4[0x3a] = param_4;
  plVar4[0x3b] = unaff_x20;
  plVar4[0x38] = param_2;
  plVar4[0x39] = param_3;
  plVar4[0x37] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x3c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x3d] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3e] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3f] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x40] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x41] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x42] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f52ce8,0,0);
  return;
}



/* Entry: 102f54524; end: 102f545a3;  */

void FUN_102f54524(undefined8 param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar4 = (long *)0x440;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552d8;
  plVar4[0x7d] = unaff_x20;
  *(undefined1 *)((long)plVar4 + 0x3c1) = param_5;
  plVar4[0x7c] = param_4;
  plVar4[0x7b] = param_3;
  plVar4[0x7a] = param_2;
  plVar4[0x79] = unaff_x22 + 0x10;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x7e] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x7f] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x80] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x81] = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x82] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x83] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x84] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4e368,0,0);
  return;
}



/* Entry: 102f545a4; end: 102f545ef;  */

void FUN_102f545a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x2d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f552e8;
  plVar4[0x51] = unaff_x20;
  plVar4[0x50] = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  plVar4[0x52] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x53] = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x54] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x55] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f53548,0,0);
  return;
}



/* Entry: 102f545f0; end: 102f5463b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f545f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 102f5463c; end: 102f5466f;  */

undefined8 FUN_102f5463c(undefined8 param_1)

{
  FUN_102fa0e84();
  return param_1;
}



/* Entry: 102f54670; end: 102f5474f;  */

undefined8 FUN_102f54670(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  if (0xe < uVar4 >> 0x3c) {
    uVar3 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = 0xc000000000000000;
  }
  func_0x000100d2cb48();
  func_0x000103ee3894(uVar6,uVar3);
  func_0x00010006c090(uVar7,uVar4);
  FUN_102f7a208();
  if ((uVar7 & 1) != 0) {
    bVar5 = *(long *)(unaff_x20 + 0x38) != 0;
    lVar1 = -0x2000000000000000;
    if (bVar5) {
      lVar1 = *(long *)(unaff_x20 + 0x38);
    }
    uVar3 = 0;
    if (bVar5) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    }
    uVar2 = 0xc000000000000000;
    if (bVar5) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    FUN_102f54bc8(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c6142c(lVar1);
    func_0x00010006c090(uVar3,uVar2);
  }
  return uVar6;
}



/* Entry: 102f54750; end: 102f54783;  */

undefined8 FUN_102f54750(undefined8 param_1)

{
  (*(code *)(undefined *)0x102fa598c)();
  return param_1;
}



/* Entry: 102f54784; end: 102f547bb;  */

void FUN_102f54784(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102f547bc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102f547bc; end: 102f549ef;  */

undefined * FUN_102f547bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f548d8);
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
    puVar3 = (undefined *)0x112f2a120;
    func_0x0001000285a8(0x112f2a120,&UNK_10db66380);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105f2e68);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f549f0; end: 102f54aeb;  */

undefined * FUN_102f549f0(long param_1)

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
    func_0x0001000285a8(0x112f2a040,&UNK_10db66188);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f54ae8);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f54aec);
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



/* Entry: 102f54aec; end: 102f54b1f;  */

undefined8 FUN_102f54aec(undefined8 param_1)

{
  FUN_102fa3044();
  return param_1;
}



/* Entry: 102f54b20; end: 102f54b5f;  */

void FUN_102f54b20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db661e4;
  func_0x000107c61520(&UNK_10db661e4,&UNK_1105ec4f0);
  puRam0000000112f2a108 = puVar1;
  return;
}



/* Entry: 102f54b60; end: 102f54bc7;  */

undefined8 FUN_102f54b60(undefined8 param_1)

{
  (*(code *)(undefined *)0x102fa59bc)();
  return param_1;
}



/* Entry: 102f54bc8; end: 102f54c13;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f54bc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 102f54c14; end: 102f54e5f;  */

undefined8 FUN_102f54c14(undefined8 param_1)

{
  (*(code *)(undefined *)0x102fa59a8)();
  return param_1;
}



/* Entry: 102f54e60; end: 102f54e73;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f54e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  uint uVar1;
  
  if (((param_5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 102f54e74; end: 102f54ea3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f54e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  uint uVar1;
  
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 102f54ea4; end: 102f54eb7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f54ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  uint uVar1;
  
  if (((param_5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 102f54eb8; end: 102f54feb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f54eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  uint uVar1;
  
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 102f54fec; end: 102f55003;  */

int FUN_102f54fec(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102f55004; end: 102f55207;  */

undefined8 FUN_102f55004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102f55208; end: 102f5521b;  */

/* WARNING: Possible PIC construction at 0x000102f5523c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f55240) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_102f55208(undefined8 param_1,undefined8 param_2)

{
  ulong in_x5;
  
  if (((in_x5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f5521c; end: 102f552c3;  */

/* WARNING: Possible PIC construction at 0x000102f5523c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f55240) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_102f5521c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f552c4; end: 102f552eb;  */

void FUN_102f552c4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(lVar2 + 0x30);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000102f540bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 102f552ec; end: 102f554fb;  */

void FUN_102f552ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102f554fc; end: 102f55503;  */

void FUN_102f554fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_102f55504();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1105ec5b8;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 102f55504; end: 102f558ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102f55504(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 ***apppuStack_170 [3];
  long lStack_158;
  undefined **ppuStack_150;
  undefined8 ***apppuStack_148 [3];
  long lStack_130;
  undefined **ppuStack_128;
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [40];
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar3 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f115250);
    lVar4 = lVar2;
    func_0x000107c4e60c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    pcVar1 = "com.snapchat.kronosCalendar";
    uStack_d0 = 0xd000000000000029;
    if (cRam0000000112f2a238 != '\x01') {
      pcVar1 = "lboard.BillboardService";
      uStack_d0 = 0xd000000000000018;
    }
    uStack_c8 = (ulong)pcVar1 | 0x8000000000000000;
    uStack_c0 = 0;
    uStack_b8 = 0x201;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    func_0x000103e3687c(auStack_120);
    func_0x0001000a8868(auStack_120,uStack_108);
    pcVar12 = *(code **)(lStack_100 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar12)(auStack_f8,0xd000000000000013,0x800000010f1152a0,&uStack_d0,lVar4,uStack_108,
               lStack_100);
    func_0x000107c615e8(lVar4);
    func_0x0001000834e4(auStack_120);
    func_0x000103e3687c(apppuStack_148);
    func_0x0001000a8868(apppuStack_148,lStack_130);
    pcVar12 = *(code **)((long)ppuStack_128 + 8);
    func_0x000107c615f0(lVar4);
    (*pcVar12)(auStack_120,0xd000000000000013,0x800000010f1152c0,&uStack_d0,lVar4,lStack_130,
               ppuStack_128);
    func_0x000107c615e8(lVar4);
    func_0x0001000834e4(apppuStack_148);
    func_0x000102f55c18(auStack_f8,apppuStack_148);
    lVar5 = 0;
    func_0x000102fa8df0();
    func_0x000107c613fc();
    ppppuVar6 = apppuStack_148;
    FUN_102fa62d4();
    func_0x000102f55c18(auStack_120,apppuStack_148);
    lVar7 = 0;
    func_0x000102f66038();
    func_0x000107c613fc();
    ppppuVar8 = apppuStack_148;
    FUN_102f64ea4();
    ppuStack_128 = &PTR_DAT_1105ec680;
    ppuStack_150 = &PTR_DAT_1105ec6f8;
    lVar2 = 0;
    apppuStack_170[0] = ppppuVar8;
    lStack_158 = lVar7;
    apppuStack_148[0] = ppppuVar6;
    lStack_130 = lVar5;
    func_0x000102f53da8();
    func_0x000107c613fc();
    func_0x0001000c6518(apppuStack_148,lVar5);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    puVar10 = (undefined8 *)((long)apppuStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar10);
    func_0x0001000c6518(apppuStack_170,lVar7);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    puVar11 = (undefined8 *)((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar11);
    uVar3 = *puVar10;
    uVar9 = *puVar11;
    *(long *)(lVar2 + 0x28) = lVar5;
    *(undefined ***)(lVar2 + 0x30) = &PTR_DAT_1105ec680;
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(long *)(lVar2 + 0x50) = lVar7;
    *(undefined ***)(lVar2 + 0x58) = &PTR_DAT_1105ec6f8;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    func_0x0001000834e4(apppuStack_170);
    func_0x0001000834e4(apppuStack_148);
    func_0x000100e1b054(&uStack_d0);
    func_0x000107c615e8(lVar4);
    func_0x0001000834e4(auStack_120);
    func_0x0001000834e4(auStack_f8);
  }
  return lVar2;
}



/* Entry: 102f558ac; end: 102f5590b;  */

void FUN_102f558ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102f4a17c();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_102f4900c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105ec420;
  *param_1 = param_2;
  return;
}



/* Entry: 102f5590c; end: 102f55913;  */

void FUN_102f5590c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  func_0x000102f4a17c();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_102f4900c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105ec420;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102f55914; end: 102f559bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f55914(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [40];
  
  plVar3 = &lStack_90;
  func_0x0001000d224c(auStack_80);
  if (lStack_68 == 0) {
    func_0x000102f55bd0(auStack_80);
    plVar3 = (long *)0x0;
  }
  else {
    FUN_102f48f0c(auStack_80,auStack_58);
    lVar1 = 0;
    FUN_102f48ea8();
    lVar2 = lVar1;
    func_0x000107c610f8();
    func_0x000102f55c18(auStack_58,lVar2 + _DAT_112f29f08);
    lStack_90 = lVar2;
    lStack_88 = lVar1;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    func_0x0001000834e4(auStack_58);
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 102f559bc; end: 102f559c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f559bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [40];
  
  plVar3 = &lStack_90;
  func_0x0001000d224c(auStack_80);
  if (lStack_68 == 0) {
    func_0x000102f55bd0(auStack_80);
    plVar3 = (long *)0x0;
  }
  else {
    FUN_102f48f0c(auStack_80,auStack_58);
    lVar1 = 0;
    FUN_102f48ea8();
    lVar2 = lVar1;
    func_0x000107c610f8();
    func_0x000102f55c18(auStack_58,lVar2 + _DAT_112f29f08);
    lStack_90 = lVar2;
    lStack_88 = lVar1;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    func_0x0001000834e4(auStack_58);
  }
  *param_1 = plVar3;
  return;
}



/* Entry: 102f559c4; end: 102f559df;  */

/* WARNING: Possible PIC construction at 0x000102f559d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f559d4) */

void FUN_102f559c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f559e0; end: 102f55a2b;  */

void FUN_102f559e0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f55a2c; end: 102f55aa7;  */

void FUN_102f55a2c(undefined8 param_1)

{
  if (lRam0000000112f2a180 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e73a9dc);
  return;
}



/* Entry: 102f55aa8; end: 102f55bcf;  */

void FUN_102f55aa8(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105ec650;
  func_0x000107c613fc(&UNK_1105ec650,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112f2a140,&UNK_10db66400);
  func_0x000107c613fc();
  pcVar2 = FUN_102f55c5c;
  func_0x0001000bdd8c(FUN_102f55c5c,puVar1);
  func_0x0001000285a8(0x112f2a148,&UNK_10db66408);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  uVar3 = 0x102f55c60;
  func_0x0001000bdd8c(0x102f55c60,pcVar2);
  func_0x0001000285a8(0x112f2a150,&UNK_10db66410);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  uVar4 = 0x102f55c64;
  func_0x0001000bdd8c(0x102f55c64,uVar3);
  uVar5 = 0;
  func_0x000100324ed8(0);
  func_0x000107c610f8();
  func_0x000103becc30(pcVar2,uVar3,uVar4,uVar5);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102f55bd0; end: 102f55c5b;  */

undefined8 FUN_102f55bd0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f2a230;
  func_0x0001000285a8(0x112f2a230,&UNK_10db66450);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102f55c5c; end: 102f55c73;  */

void FUN_102f55c5c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_102f55504();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)&PTR_DAT_1105ec5b8;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 102f55c74; end: 102f55cb3;  */

void FUN_102f55c74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2a328;
  func_0x0001000285a8(0x112f2a328,&UNK_10db664c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f55cb4; end: 102f55ccb;  */

void FUN_102f55cb4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102f5ca38();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102f55ccc; end: 102f55d3b;  */

void FUN_102f55ccc(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102f55d3c; end: 102f55d47;  */

void FUN_102f55d3c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x102f5ca44)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102f55d48; end: 102f55d7b;  */

void FUN_102f55d48(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 102f55d7c; end: 102f55d93;  */

void FUN_102f55d7c(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f55d94; end: 102f55dd3;  */

void FUN_102f55d94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f2a428;
  func_0x0001000285a8(0x112f2a428,&UNK_10db664d0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102f55dd4; end: 102f55def;  */

void FUN_102f55dd4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 102f55df0; end: 102f55e73;  */

void FUN_102f55df0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f55e74; end: 102f55ebb;  */

void FUN_102f55e74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db68870,0x52,2);
  uRam0000000113805160 = uStack_38;
  uRam0000000113805158 = uStack_40;
  uRam0000000113805170 = uStack_28;
  uRam0000000113805168 = uStack_30;
  uRam0000000113805180 = uStack_18;
  uRam0000000113805178 = uStack_20;
  return;
}



/* Entry: 102f55ebc; end: 102f55f5b;  */

/* WARNING: Possible PIC construction at 0x000102f55f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f55f18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f55f0c) */
/* WARNING: Removing unreachable block (ram,0x000102f55f1c) */

void FUN_102f55ebc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a468 != -1) {
    func_0x000107c61568(0x112f2a468,FUN_102f55e74);
  }
  uVar5 = uRam0000000113805180;
  uVar4 = uRam0000000113805178;
  uVar3 = uRam0000000113805170;
  uVar2 = uRam0000000113805168;
  uVar1 = uRam0000000113805160;
  *param_1 = uRam0000000113805158;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f55f5c; end: 102f55fa3;  */

void FUN_102f55f5c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db68720,0x14f,2);
  uRam0000000113805190 = uStack_38;
  uRam0000000113805188 = uStack_40;
  uRam00000001138051a0 = uStack_28;
  uRam0000000113805198 = uStack_30;
  uRam00000001138051b0 = uStack_18;
  uRam00000001138051a8 = uStack_20;
  return;
}



/* Entry: 102f55fa4; end: 102f56043;  */

/* WARNING: Possible PIC construction at 0x000102f55ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f56000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f55ff4) */
/* WARNING: Removing unreachable block (ram,0x000102f56004) */

void FUN_102f55fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a470 != -1) {
    func_0x000107c61568(0x112f2a470,FUN_102f55f5c);
  }
  uVar5 = uRam00000001138051b0;
  uVar4 = uRam00000001138051a8;
  uVar3 = uRam00000001138051a0;
  uVar2 = uRam0000000113805198;
  uVar1 = uRam0000000113805190;
  *param_1 = uRam0000000113805188;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f56044; end: 102f5608b;  */

void FUN_102f56044(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db686a0,0x79,2);
  uRam00000001138051c0 = uStack_38;
  uRam00000001138051b8 = uStack_40;
  uRam00000001138051d0 = uStack_28;
  uRam00000001138051c8 = uStack_30;
  uRam00000001138051e0 = uStack_18;
  uRam00000001138051d8 = uStack_20;
  return;
}



/* Entry: 102f5608c; end: 102f5612b;  */

/* WARNING: Possible PIC construction at 0x000102f560d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f560e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f560dc) */
/* WARNING: Removing unreachable block (ram,0x000102f560ec) */

void FUN_102f5608c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a478 != -1) {
    func_0x000107c61568(0x112f2a478,FUN_102f56044);
  }
  uVar5 = uRam00000001138051e0;
  uVar4 = uRam00000001138051d8;
  uVar3 = uRam00000001138051d0;
  uVar2 = uRam00000001138051c8;
  uVar1 = uRam00000001138051c0;
  *param_1 = uRam00000001138051b8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f5612c; end: 102f56173;  */

void FUN_102f5612c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db68670,0x2c,2);
  uRam00000001138051f0 = uStack_38;
  uRam00000001138051e8 = uStack_40;
  uRam0000000113805200 = uStack_28;
  uRam00000001138051f8 = uStack_30;
  uRam0000000113805210 = uStack_18;
  uRam0000000113805208 = uStack_20;
  return;
}



/* Entry: 102f56174; end: 102f5621f;  */

void FUN_102f56174(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x60);
      goto LAB_102f561b0;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x60);
LAB_102f561b0:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_102f561b0;
}



/* Entry: 102f56220; end: 102f562c3;  */

void FUN_102f56220(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) ||
       ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 102f562c4; end: 102f5630f;  */

void FUN_102f562c4(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 102f56310; end: 102f56337;  */

void FUN_102f56310(void)

{
  FUN_102f56174();
  return;
}



/* Entry: 102f56338; end: 102f5636f;  */

uint FUN_102f56338(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102f646e4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f56370; end: 102f563a7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f56370(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) || unaff_x20[2] != param_1[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[3];
  pbVar25 = (byte *)unaff_x20[4];
  lVar24 = param_1[3];
  uVar16 = param_1[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(long **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f563a8; end: 102f56447;  */

/* WARNING: Possible PIC construction at 0x000102f563f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f56404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f563f8) */
/* WARNING: Removing unreachable block (ram,0x000102f56408) */

void FUN_102f563a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a480 != -1) {
    func_0x000107c61568(0x112f2a480,FUN_102f5612c);
  }
  uVar5 = uRam0000000113805210;
  uVar4 = uRam0000000113805208;
  uVar3 = uRam0000000113805200;
  uVar2 = uRam00000001138051f8;
  uVar1 = uRam00000001138051f0;
  *param_1 = uRam00000001138051e8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f56448; end: 102f5645b;  */

void FUN_102f56448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2aa40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2aa40,&UNK_10db68388);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f5645c; end: 102f5655f;  */

void FUN_102f5645c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f56560; end: 102f56593;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f56560(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((*param_1 != *param_2 || param_1[1] != param_2[1]) || param_1[2] != param_2[2]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[3];
  uVar16 = param_2[4];
  pbVar10 = (byte *)param_1[3];
  pbVar25 = (byte *)param_1[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f56594; end: 102f565db;  */

void FUN_102f56594(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db68630,0x3d,2);
  uRam0000000113805220 = uStack_38;
  uRam0000000113805218 = uStack_40;
  uRam0000000113805230 = uStack_28;
  uRam0000000113805228 = uStack_30;
  uRam0000000113805240 = uStack_18;
  uRam0000000113805238 = uStack_20;
  return;
}



/* Entry: 102f565dc; end: 102f566df;  */

/* WARNING: Removing unreachable block (ram,0x000102f566d0) */

void FUN_102f565dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_102f56654;
          pcVar3 = *(code **)(param_3 + 0x60);
        }
LAB_102f56644:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x60);
          goto LAB_102f56644;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_102f5fa70();
          (*pcVar3)(unaff_x20 + 0x30,&UNK_1105ed7a0,lVar1,param_2,param_3);
        }
      }
LAB_102f56654:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102f566e0; end: 102f567ab;  */

void FUN_102f566e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[2] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) &&
     (((unaff_x20[3] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)) &&
      (FUN_102f567ac(), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 102f567ac; end: 102f56833;  */

void FUN_102f567ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f5fa70();
    (*pcVar1)(&uStack_70,4,&UNK_1105ed7a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f56834; end: 102f5687f;  */

void FUN_102f56834(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0xf000000000000000;
  return;
}



/* Entry: 102f56880; end: 102f568af;  */

undefined1  [16] FUN_102f56880(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 102f568b0; end: 102f568e3;  */

void FUN_102f568b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 102f568e4; end: 102f568f7;  */

undefined1  [16] FUN_102f568e4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x102f568f4;
  return auVar1;
}



/* Entry: 102f568f8; end: 102f5690b;  */

void FUN_102f568f8(void)

{
  FUN_102f565dc();
  return;
}



/* Entry: 102f5690c; end: 102f56953;  */

void FUN_102f5690c(void)

{
  FUN_102f566e0();
  return;
}



/* Entry: 102f56954; end: 102f5698b;  */

uint FUN_102f56954(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000102f646a4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 102f5698c; end: 102f569f3;  */

uint FUN_102f5698c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_102f5ca98(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102f569f4; end: 102f56a93;  */

/* WARNING: Possible PIC construction at 0x000102f56a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f56a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f56a44) */
/* WARNING: Removing unreachable block (ram,0x000102f56a54) */

void FUN_102f569f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2a490 != -1) {
    func_0x000107c61568(0x112f2a490,FUN_102f56594);
  }
  uVar5 = uRam0000000113805240;
  uVar4 = uRam0000000113805238;
  uVar3 = uRam0000000113805230;
  uVar2 = uRam0000000113805228;
  uVar1 = uRam0000000113805220;
  *param_1 = uRam0000000113805218;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 102f56a94; end: 102f56aa7;  */

void FUN_102f56a94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2aa30;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2aa30,&UNK_10db68380);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f56aa8; end: 102f56bcb;  */

void FUN_102f56aa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f56bcc; end: 102f56c7b;  */

uint FUN_102f56bcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_102f5ca98(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 102f56c7c; end: 102f56d13;  */

void FUN_102f56c7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_102f56cd0:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000102f56cec;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_102f56cb8;
code_r0x000102f56cec:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x60);
LAB_102f56cb8:
    (*pcVar3)();
  }
  goto LAB_102f56cd0;
}



/* Entry: 102f56d14; end: 102f56da7;  */

void FUN_102f56d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}


