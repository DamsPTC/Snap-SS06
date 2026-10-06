/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10836b638; end: 10836b68f;  */

void FUN_10836b638(float param_1)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  float fVar1;
  
  FUN_10836c2bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -1) {
    FUN_10836c170(*unaff_x20);
    fVar1 = param_1;
    FUN_10836c170(*(undefined4 *)((long)unaff_x20 + unaff_x19));
    param_1 = param_1 + fVar1;
    FUN_10836c1ac(1);
    *unaff_x21 = param_1;
    unaff_x21 = unaff_x21 + 1;
    unaff_x20 = unaff_x20 + 2;
  }
  return;
}



/* Entry: 10836b690; end: 10836b6fb;  */

void FUN_10836b690(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  
  FUN_10836c2bc();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -1) {
    FUN_10836c170(*unaff_x20);
    FUN_10836c170(*(undefined4 *)((long)unaff_x20 + unaff_x19));
    func_0x00010836c378(*(undefined4 *)((long)unaff_x20 + param_4 * 2));
    FUN_10836c1fc();
    func_0x00010836c26c();
    FUN_10836c1ac(2);
    *unaff_x21 = param_1;
    unaff_x21 = unaff_x21 + 1;
    unaff_x20 = unaff_x20 + 2;
  }
  return;
}



/* Entry: 10836b6fc; end: 10836b7d7;  */

void FUN_10836b6fc(float param_1)

{
  uint in_w3;
  undefined4 *unaff_x19;
  float *unaff_x20;
  ulong uVar1;
  float fVar2;
  
  func_0x00010836c420();
  for (uVar1 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_10836c170(*unaff_x19);
    fVar2 = param_1;
    FUN_10836c170(unaff_x19[1]);
    param_1 = param_1 + fVar2;
    FUN_10836c1ac(1);
    *unaff_x20 = param_1;
    unaff_x20 = unaff_x20 + 1;
    unaff_x19 = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10836b7d8; end: 10836b887;  */

void FUN_10836b7d8(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  
  FUN_10836c460();
  puVar1 = (undefined4 *)(param_3 + 4);
  puVar2 = (undefined4 *)((long)puVar1 + param_4);
  puVar3 = (undefined4 *)((long)puVar1 + param_4 * 2);
  for (; fVar4 = (float)param_1, unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
    FUN_10836c170(puVar1[-1]);
    FUN_10836c170(*puVar1);
    FUN_10836c170(puVar2[-1]);
    FUN_10836c170(*puVar2);
    FUN_10836c170(puVar3[-1]);
    FUN_10836c170(*puVar3);
    func_0x00010836c42c();
    func_0x00010836c26c();
    fVar5 = fVar4;
    func_0x00010836c3e0();
    func_0x00010836c26c();
    param_1 = (ulong)(uint)(fVar4 + fVar5);
    FUN_10836c1ac(3);
    *unaff_x19 = (int)param_1;
    unaff_x19 = unaff_x19 + 1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
  }
  return;
}



/* Entry: 10836b888; end: 10836b99f;  */

void FUN_10836b888(undefined8 param_1)

{
  uint in_w3;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  ulong uVar1;
  undefined4 uVar2;
  undefined8 in_d4;
  undefined8 uVar3;
  
  func_0x00010836c420();
  FUN_10836c170(*unaff_x19);
  for (uVar1 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar2 = (undefined4)param_1,
      uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_10836c170(unaff_x19[1]);
    func_0x00010836c378(unaff_x19[2]);
    func_0x00010836c218();
    uVar3 = in_d4;
    func_0x00010836c2e4();
    func_0x00010836c26c();
    FUN_10836c1ac(2);
    *unaff_x20 = uVar2;
    unaff_x20 = unaff_x20 + 1;
    param_1 = in_d4;
    in_d4 = uVar3;
    unaff_x19 = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10836b9a0; end: 10836ba93;  */

void FUN_10836b9a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong uVar4;
  undefined4 *unaff_x23;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 in_d4;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)in_d4 >> 0x20);
  fVar8 = (float)in_d4;
  func_0x00010836c408();
  FUN_10836c170(*param_3);
  uVar6 = param_1;
  FUN_10836c170(*unaff_x23);
  func_0x00010836c378(*(undefined4 *)((long)unaff_x23 + unaff_x20));
  func_0x00010836c218();
  func_0x00010836c3c8(param_1,uVar6);
  func_0x00010836c26c();
  puVar1 = (undefined4 *)(unaff_x21 + 8);
  puVar2 = (undefined4 *)((long)puVar1 + unaff_x20 * 2);
  puVar3 = (undefined4 *)((long)puVar1 + unaff_x20);
  for (uVar4 = (ulong)(unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
      uVar4 = uVar4 - 1) {
    uVar7 = param_1;
    FUN_10836c170(puVar1[-1]);
    uVar6 = uVar7;
    FUN_10836c170(puVar3[-1]);
    func_0x00010836c378(puVar2[-1]);
    func_0x00010836c218();
    func_0x00010836c3c8(uVar7,uVar6);
    func_0x00010836c26c();
    FUN_10836bff0();
    func_0x00010836c22c();
    FUN_10836c170(*puVar1);
    FUN_10836c170(*puVar3);
    func_0x00010836c378(*puVar2);
    func_0x00010836c1fc();
    func_0x00010836c218();
    uVar6 = CONCAT44(uVar9,fVar8);
    fVar5 = (float)param_1 + (float)uVar7 + fVar8;
    FUN_10836c1ac(4);
    *unaff_x19 = fVar5;
    unaff_x19 = unaff_x19 + 1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    param_1 = uVar6;
  }
  return;
}



/* Entry: 10836ba94; end: 10836bae7;  */

void FUN_10836ba94(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  FUN_10836c2bc();
  while (unaff_x22 != 0) {
    FUN_10836c2a4(*unaff_x20);
    FUN_10836c2a4(*(undefined8 *)((long)unaff_x20 + unaff_x19));
    func_0x00010836c28c();
    FUN_10836c334(1);
    func_0x00010836c438();
  }
  return;
}



/* Entry: 10836bae8; end: 10836bb4f;  */

void FUN_10836bae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  
  FUN_10836c2bc();
  while (unaff_x22 != 0) {
    FUN_10836c2a4(*unaff_x20);
    uVar1 = param_1;
    FUN_10836c2a4(*(undefined8 *)((long)unaff_x20 + unaff_x19));
    FUN_10836c448(*(undefined8 *)((long)unaff_x20 + param_4 * 2));
    func_0x00010836c068(param_1,uVar1);
    func_0x00010836c380();
    FUN_10836c334(2);
    func_0x00010836c438();
  }
  return;
}



/* Entry: 10836bb50; end: 10836bc4b;  */

void FUN_10836bb50(undefined8 param_1)

{
  uint in_w3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  func_0x00010836c420();
  for (uVar1 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_10836c2a4(*unaff_x19);
    FUN_10836c2a4(unaff_x19[1]);
    func_0x00010836c28c();
    FUN_10836c334(1);
    *unaff_x20 = CONCAT44(uVar3,uVar2);
    unaff_x19 = unaff_x19 + 2;
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 10836bc4c; end: 10836bd0f;  */

void FUN_10836bc4c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_10836c460();
  puVar1 = (undefined8 *)(param_3 + 8);
  puVar2 = (undefined8 *)((long)puVar1 + param_4);
  puVar3 = (undefined8 *)((long)puVar1 + param_4 * 2);
  while (unaff_x20 != 0) {
    FUN_10836c2a4(puVar1[-1]);
    uVar4 = param_1;
    FUN_10836c2a4(*puVar1);
    uVar5 = uVar4;
    FUN_10836c2a4(puVar2[-1]);
    uVar6 = uVar5;
    FUN_10836c2a4(*puVar2);
    uVar7 = uVar6;
    FUN_10836c2a4(puVar3[-1]);
    uVar8 = uVar7;
    FUN_10836c2a4(*puVar3);
    func_0x00010836c068(param_1,uVar5,uVar7);
    func_0x00010836c380();
    func_0x00010836c068(uVar4,uVar6,uVar8);
    func_0x00010836c380();
    func_0x00010836c28c();
    FUN_10836c334(3);
    func_0x00010836c49c();
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    param_1 = uVar4;
  }
  return;
}



/* Entry: 10836bd10; end: 10836be7f;  */

void FUN_10836bd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint in_w3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010836c420();
  FUN_10836c2a4(*unaff_x19);
  for (uVar1 = (ulong)(in_w3 & ((int)in_w3 >> 0x1f ^ 0xffffffffU)); uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = param_1;
    FUN_10836c2a4(unaff_x19[1]);
    FUN_10836c448(unaff_x19[2]);
    uVar3 = param_3;
    func_0x00010836c068(param_1,uVar2);
    func_0x00010836c380();
    FUN_10836c334(2);
    *unaff_x20 = param_1;
    param_1 = param_3;
    param_3 = uVar3;
    unaff_x20 = unaff_x20 + 1;
    unaff_x19 = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10836be80; end: 10836bf8f;  */

void FUN_10836be80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  func_0x00010836c2d0();
  FUN_10836c2a4(*param_3);
  uVar5 = param_1;
  FUN_10836c2a4(*(undefined8 *)((long)param_3 + param_4));
  FUN_10836c448(*(undefined8 *)((long)param_3 + param_4 + unaff_x21));
  func_0x00010836c068(param_1,uVar5);
  func_0x00010836c380();
  puVar1 = (undefined8 *)(unaff_x22 + 0x10);
  puVar3 = (undefined8 *)((long)puVar1 + unaff_x21 * 2);
  puVar4 = (undefined8 *)((long)puVar1 + unaff_x21);
  while ((unaff_w20 & ((int)unaff_w20 >> 0x1f ^ 0xffffffffU)) != 0) {
    uVar5 = param_1;
    FUN_10836c2a4(puVar1[-1]);
    uVar6 = uVar5;
    FUN_10836c2a4(puVar4[-1]);
    FUN_10836c448(puVar3[-1]);
    func_0x00010836c068(uVar5,uVar6);
    func_0x00010836c380();
    uVar7 = (uint)((ulong)uVar5 >> 0x20);
    uVar2 = (int)uVar5 * 2;
    uVar6 = CONCAT44(uVar7 * 2,uVar2);
    FUN_10836c2a4(*puVar1);
    uVar5 = uVar6;
    FUN_10836c2a4(*puVar4);
    FUN_10836c448(*puVar3);
    func_0x00010836c068(uVar6,uVar5);
    func_0x00010836c380();
    func_0x00010836c318(param_1,(ulong)uVar2 | (ulong)(uVar7 & 0x7fffffff) << 0x21,uVar6);
    func_0x00010836c28c();
    FUN_10836c334(4);
    func_0x00010836c49c();
    puVar1 = puVar1 + 2;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
    param_1 = uVar6;
  }
  return;
}



/* Entry: 10836bf90; end: 10836bfbb;  */

float FUN_10836bf90(float param_1,float param_2)

{
  return param_1 + param_2;
}



/* Entry: 10836bfbc; end: 10836bfef;  */

float FUN_10836bfbc(float param_1,undefined8 param_2,float param_3)

{
  FUN_10836bf90();
  func_0x00010836c26c();
  FUN_10836bf90();
  func_0x00010836c26c();
  return param_1 + param_3;
}



/* Entry: 10836bff0; end: 10836c0a7;  */

float FUN_10836bff0(float param_1)

{
  return param_1 * 2.0;
}



/* Entry: 10836c0a8; end: 10836c16f;  */

void FUN_10836c0a8(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  
  iVar5 = 0;
  uVar1 = *(uint *)(param_3 + 4);
  lVar3 = 8;
  if (uVar1 != 1) {
    lVar3 = 0x38;
  }
  lVar4 = 0x20;
  if ((uVar1 & 1) != 0) {
    lVar4 = lVar3;
  }
  lVar3 = 0x10;
  if (uVar1 != 1) {
    lVar3 = 0x40;
  }
  lVar2 = 0x28;
  if ((uVar1 & 1) != 0) {
    lVar2 = lVar3;
  }
  lVar3 = 0x18;
  if ((uVar1 & 1) != 0) {
    lVar3 = 0x30;
  }
  if (*(uint *)((long)param_3 + 0x24) == 1) {
    lVar2 = lVar3;
  }
  if ((*(uint *)((long)param_3 + 0x24) & 1) != 0) {
    lVar4 = lVar2;
  }
  pcVar6 = *(code **)(param_1 + lVar4);
  lVar3 = *param_3;
  lVar2 = param_3[1];
  lVar4 = *param_2;
  for (; iVar5 < *(int *)((long)param_2 + 0x24); iVar5 = iVar5 + 1) {
    (*pcVar6)(lVar4,lVar3,lVar2,(int)param_2[4]);
    lVar3 = lVar3 + lVar2 * 2;
    lVar4 = lVar4 + param_2[1];
  }
  return;
}



/* Entry: 10836c170; end: 10836c18f;  */

void FUN_10836c170(undefined8 param_1)

{
  func_0x00010836bfac(param_1);
  return;
}



/* Entry: 10836c190; end: 10836c1ab;  */

void FUN_10836c190(void)

{
  func_0x00010836bfac();
  return;
}



/* Entry: 10836c1ac; end: 10836c1cb;  */

undefined8 FUN_10836c1ac(undefined8 param_1,undefined4 param_2,float param_3,float param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  func_0x00010836bf98();
  return CONCAT26((float2)param_4,
                  CONCAT24((float2)param_3,
                           CONCAT22((float2)(float)(CONCAT26((short)((uint)param_2 >> 0x10),
                                                             CONCAT24((short)param_2,
                                                                      CONCAT22(uVar2,uVar1))) >>
                                                   0x20),(float2)(float)CONCAT22(uVar2,uVar1))));
}



/* Entry: 10836c1cc; end: 10836c1df;  */

void FUN_10836c1cc(void)

{
  return;
}



/* Entry: 10836c1e0; end: 10836c1fb;  */

void FUN_10836c1e0(void)

{
  func_0x00010836c040();
  return;
}



/* Entry: 10836c1fc; end: 10836c23f;  */

void FUN_10836c1fc(void)

{
  undefined8 in_stack_00000010;
  
  FUN_10836bf90(in_stack_00000010);
  func_0x00010836c26c();
  FUN_10836bf90();
  func_0x00010836c26c();
  return;
}



/* Entry: 10836c240; end: 10836c25b;  */

void FUN_10836c240(void)

{
  func_0x00010836bf98();
  return;
}



/* Entry: 10836c25c; end: 10836c2a3;  */

void FUN_10836c25c(void)

{
  return;
}



/* Entry: 10836c2a4; end: 10836c2bb;  */

undefined8 FUN_10836c2a4(undefined8 param_1)

{
  func_0x00010836c04c();
  return param_1;
}



/* Entry: 10836c2bc; end: 10836c333;  */

void FUN_10836c2bc(void)

{
  return;
}



/* Entry: 10836c334; end: 10836c34f;  */

void FUN_10836c334(void)

{
  func_0x00010836c058();
  return;
}



/* Entry: 10836c350; end: 10836c447;  */

void FUN_10836c350(void)

{
  return;
}



/* Entry: 10836c448; end: 10836c45f;  */

void FUN_10836c448(void)

{
  func_0x00010836c04c();
  return;
}



/* Entry: 10836c460; end: 10836c56f;  */

void FUN_10836c460(void)

{
  return;
}



/* Entry: 10836c570; end: 10836c583;  */

void FUN_10836c570(void)

{
  func_0x00010836bff8();
  return;
}



/* Entry: 10836c584; end: 10836c597;  */

void FUN_10836c584(void)

{
  func_0x00010836bff8();
  return;
}



/* Entry: 10836c598; end: 10836ce53;  */

void FUN_10836c598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010836c5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10836ce54; end: 10836cff7;  */

void FUN_10836ce54(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  long lVar5;
  uint uVar6;
  float fVar8;
  undefined8 in_register_00005008;
  float fVar9;
  undefined8 in_register_00005028;
  float fVar10;
  int iVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  uint uVar19;
  uint uVar22;
  uint uVar23;
  undefined1 auVar20 [16];
  uint uVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint uVar7;
  
  plVar4 = *(long **)(param_3 + 8);
  fVar14 = (float)param_1 + 0.5;
  fVar8 = (float)((ulong)param_1 >> 0x20);
  fVar16 = fVar8 + 0.5;
  fVar14 = fVar14 - (float)(int)fVar14;
  fVar16 = fVar16 - (float)(int)fVar16;
  fVar10 = (float)param_2 + 0.5;
  fVar9 = (float)((ulong)param_2 >> 0x20);
  fVar13 = fVar9 + 0.5;
  fVar10 = fVar10 - (float)(int)fVar10;
  fVar13 = fVar13 - (float)(int)fVar13;
  iVar47 = (int)plVar4[1];
  iVar15 = *(int *)((long)plVar4 + 0xc) + -1;
  iVar11 = (int)plVar4[2] + -1;
  uVar6 = (uint)*(byte *)((long)plVar4 + 0x54);
  uVar7 = (uint)*(byte *)((long)plVar4 + 0x54);
  auVar12 = NEON_fmov(0x3f800000,4);
  fVar48 = auVar12._0_4_ - fVar14;
  fVar49 = auVar12._4_4_ - fVar16;
  fVar50 = auVar12._0_4_ - fVar10;
  fVar51 = auVar12._4_4_ - fVar13;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  lVar5 = *plVar4;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  for (fVar52 = -0.5; fVar52 <= 0.5; fVar52 = fVar52 + 1.0) {
    auVar29._0_4_ = (float)param_2 + fVar52;
    auVar29._4_4_ = fVar9 + fVar52;
    auVar29._8_4_ = (float)in_register_00005028 + fVar52;
    auVar29._12_4_ = (float)((ulong)in_register_00005028 >> 0x20) + fVar52;
    auVar17._8_4_ = 0x800000;
    auVar17._0_8_ = 0x80000000800000;
    auVar17._12_4_ = 0x800000;
    auVar17 = NEON_fmax(auVar29,auVar17,4);
    auVar12._4_4_ = iVar11;
    auVar12._0_4_ = iVar11;
    auVar12._8_4_ = iVar11;
    auVar12._12_4_ = iVar11;
    auVar12 = NEON_fmin(auVar17,auVar12,4);
    for (fVar18 = -0.5; fVar18 <= 0.5; fVar18 = fVar18 + 1.0) {
      auVar20._0_4_ = (float)param_1 + fVar18;
      auVar20._4_4_ = fVar8 + fVar18;
      auVar20._8_4_ = (float)in_register_00005008 + fVar18;
      auVar20._12_4_ = (float)((ulong)in_register_00005008 >> 0x20) + fVar18;
      auVar3._8_4_ = 0x800000;
      auVar3._0_8_ = 0x80000000800000;
      auVar3._12_4_ = 0x800000;
      auVar17 = NEON_fmax(auVar20,auVar3,4);
      auVar2._4_4_ = iVar15;
      auVar2._0_4_ = iVar15;
      auVar2._8_4_ = iVar15;
      auVar2._12_4_ = iVar15;
      auVar17 = NEON_fmin(auVar17,auVar2,4);
      uVar19 = *(uint *)(lVar5 + (ulong)(uint)((int)(float)(auVar12._0_4_ - uVar6) * iVar47 +
                                              (int)(float)(auVar17._0_4_ - uVar6)) * 4);
      uVar22 = *(uint *)(lVar5 + (ulong)(uint)((int)(float)(auVar12._4_4_ - uVar6) * iVar47 +
                                              (int)(float)(auVar17._4_4_ - uVar6)) * 4);
      uVar23 = *(uint *)(lVar5 + (ulong)(uint)((int)(float)(auVar12._8_4_ - uVar7) * iVar47 +
                                              (int)(float)(auVar17._8_4_ - uVar7)) * 4);
      uVar24 = *(uint *)(lVar5 + (ulong)(uint)((int)(float)(auVar12._12_4_ - uVar7) * iVar47 +
                                              (int)(float)(auVar17._12_4_ - uVar7)) * 4);
      auVar25._0_5_ = CONCAT14((char)uVar22,uVar19) & 0xff000000ff;
      auVar25._5_3_ = 0;
      auVar25[8] = (char)uVar23;
      auVar25._9_3_ = 0;
      auVar25[0xc] = (char)uVar24;
      auVar25._13_3_ = 0;
      auVar17 = NEON_ucvtf(auVar25,4);
      auVar28._0_5_ = CONCAT14((char)(uVar22 >> 8),uVar19 >> 8) & 0xff000000ff;
      auVar28._5_3_ = 0;
      auVar28[8] = (undefined1)(uVar23 >> 8);
      auVar28._9_3_ = 0;
      auVar28[0xc] = (undefined1)(uVar24 >> 8);
      auVar28._13_3_ = 0;
      auVar29 = NEON_ucvtf(auVar28,4);
      auVar30._0_8_ = CONCAT44(uVar22 >> 0x10,uVar19 >> 0x10) & 0xffff00ffffff00ff;
      auVar30._8_4_ = uVar23 >> 0x10 & 0xffff00ff;
      auVar30._12_4_ = uVar24 >> 0x10 & 0xffff00ff;
      NEON_ucvtf(auVar30,4);
      auVar21._0_4_ = uVar19 >> 0x18;
      auVar21._4_4_ = uVar22 >> 0x18;
      auVar21._8_4_ = uVar23 >> 0x18;
      auVar21._12_4_ = uVar24 >> 0x18;
      NEON_ucvtf(auVar21,4);
      fVar26 = (float)((uint)fVar50 ^ ((uint)fVar50 ^ (uint)fVar10) & -(uint)(0.0 < fVar52)) *
               (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)fVar14) & -(uint)(0.0 < fVar18));
      fVar27 = (float)((uint)fVar51 ^ ((uint)fVar51 ^ (uint)fVar13) & -(uint)(0.0 < fVar52)) *
               (float)((uint)fVar49 ^ ((uint)fVar49 ^ (uint)fVar16) & -(uint)(0.0 < fVar18));
      fVar1 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) +
              fVar26 * auVar17._0_4_ * 0.003921569;
      uVar39 = SUB41(fVar1,0);
      uVar40 = (undefined1)((uint)fVar1 >> 8);
      uVar41 = (undefined1)((uint)fVar1 >> 0x10);
      uVar42 = (undefined1)((uint)fVar1 >> 0x18);
      fVar1 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) +
              fVar27 * auVar17._4_4_ * 0.003921569;
      uVar43 = SUB41(fVar1,0);
      uVar44 = (undefined1)((uint)fVar1 >> 8);
      uVar45 = (undefined1)((uint)fVar1 >> 0x10);
      uVar46 = (undefined1)((uint)fVar1 >> 0x18);
      fVar1 = (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) +
              fVar26 * auVar29._0_4_ * 0.003921569;
      uVar31 = SUB41(fVar1,0);
      uVar32 = (undefined1)((uint)fVar1 >> 8);
      uVar33 = (undefined1)((uint)fVar1 >> 0x10);
      uVar34 = (undefined1)((uint)fVar1 >> 0x18);
      fVar1 = (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) +
              fVar27 * auVar29._4_4_ * 0.003921569;
      uVar35 = SUB41(fVar1,0);
      uVar36 = (undefined1)((uint)fVar1 >> 8);
      uVar37 = (undefined1)((uint)fVar1 >> 0x10);
      uVar38 = (undefined1)((uint)fVar1 >> 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010836cff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))
            (CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,
                                                  CONCAT12(uVar41,CONCAT11(uVar40,uVar39))))))),
             CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(uVar34,
                                                  CONCAT12(uVar33,CONCAT11(uVar32,uVar31))))))));
  return;
}



/* Entry: 10836cff8; end: 10836dceb;  */

void FUN_10836cff8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010836d008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(*puVar1,puVar1[2],puVar1[4],puVar1[6]);
  return;
}



/* Entry: 10836dcec; end: 10836ddd3;  */

void FUN_10836dcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 *puVar7;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  float fVar8;
  undefined8 uVar9;
  float fVar12;
  ulong uVar10;
  byte bVar13;
  byte bVar14;
  undefined1 auVar11 [16];
  undefined8 extraout_d17;
  undefined8 in_register_00005228;
  byte extraout_b18;
  byte extraout_var;
  byte in_register_00005248;
  byte in_register_0000524c;
  float in_s19;
  float in_register_00005264;
  float in_register_00005268;
  float in_register_0000526c;
  undefined1 auVar15 [16];
  undefined1 extraout_b20;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 in_register_00005288;
  undefined1 in_register_00005289;
  undefined1 in_register_0000528a;
  undefined1 in_register_0000528b;
  undefined1 in_register_0000528c;
  undefined1 in_register_0000528d;
  undefined1 in_register_0000528e;
  undefined1 in_register_0000528f;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined8 auStack_60 [2];
  undefined8 auStack_50 [2];
  undefined4 uStack_3c;
  undefined1 *apuStack_38 [4];
  undefined8 uStack_18;
  
  func_0x0001083757a0(0);
  uStack_18 = extraout_x9;
  apuStack_38[0] = (undefined1 *)auStack_50;
  apuStack_38[1] = (undefined1 *)auStack_60;
  apuStack_38[2] = (undefined1 *)auStack_70;
  apuStack_38[3] = (undefined1 *)auStack_80;
  uStack_3c = (int)*(undefined8 *)(param_5 + 8);
  auVar11 = NEON_fmov(0x3f800000,4);
  lVar6 = extraout_x8;
  do {
    if (lVar6 == 4) {
      puVar7 = (undefined8 *)(param_5 + 0x10);
      auStack_80[0] = param_4;
      auStack_70[0] = param_3;
      auStack_60[0] = param_2;
      auStack_50[0] = param_1;
      (*(code *)*puVar7)(param_1,param_2,param_3,param_4);
      func_0x0001083757a0(uStack_18);
      if (extraout_x9_00 != extraout_x8_00) {
        ___stack_chk_fail();
        func_0x0001083758e8();
        fVar8 = ABS((float)param_1);
        fVar12 = ABS((float)((ulong)param_1 >> 0x20));
        bVar13 = SUB41(ABS((float)in_register_00005008),0);
        bVar14 = SUB41(ABS((float)((ulong)in_register_00005008 >> 0x20)),0);
        func_0x0001083753e0();
        fVar3 = (float)((ulong)param_1 >> 0x20) *
                (float)CONCAT13(extraout_var_06,
                                CONCAT12(extraout_var_05,CONCAT11(extraout_var_04,extraout_var_03)))
                * in_register_00005264 * 255.0 + 0.0;
        fVar4 = (float)in_register_00005008 *
                (float)CONCAT13(in_register_0000528b,
                                CONCAT12(in_register_0000528a,
                                         CONCAT11(in_register_00005289,in_register_00005288))) *
                in_register_00005268 * 255.0 + 0.0;
        fVar5 = (float)((ulong)in_register_00005008 >> 0x20) *
                (float)CONCAT13(in_register_0000528f,
                                CONCAT12(in_register_0000528e,
                                         CONCAT11(in_register_0000528d,in_register_0000528c))) *
                in_register_0000526c * 255.0 + 0.0;
        auVar15[4] = SUB41(fVar3,0);
        auVar15._0_4_ =
             (float)param_1 *
             (float)CONCAT13(extraout_var_02,
                             CONCAT12(extraout_var_01,CONCAT11(extraout_var_00,extraout_b20))) *
             in_s19 * 255.0 + 0.0;
        auVar15[5] = (char)((uint)fVar3 >> 8);
        auVar15[6] = (char)((uint)fVar3 >> 0x10);
        auVar15[7] = (char)((uint)fVar3 >> 0x18);
        auVar15[8] = SUB41(fVar4,0);
        auVar15[9] = (char)((uint)fVar4 >> 8);
        auVar15[10] = (char)((uint)fVar4 >> 0x10);
        auVar15[0xb] = (char)((uint)fVar4 >> 0x18);
        auVar15[0xc] = SUB41(fVar5,0);
        auVar15[0xd] = (char)((uint)fVar5 >> 8);
        auVar15[0xe] = (char)((uint)fVar5 >> 0x10);
        auVar15[0xf] = (char)((uint)fVar5 >> 0x18);
        auVar15 = NEON_fmax(auVar15,ZEXT216(0),4);
        auVar11[10] = 0x7f;
        auVar11._0_10_ = (unkuint10)0x437f0000437f0000;
        auVar11[0xb] = 0x43;
        auVar11._12_2_ = 0;
        auVar11[0xe] = 0x7f;
        auVar11[0xf] = 0x43;
        auVar11 = NEON_fmin(auVar15,auVar11,4);
        uVar10 = CONCAT44((int)fVar12 << 0x10,(int)fVar8 << 0x10) & 0xffffff00ffffff;
        puVar2 = (undefined1 *)(extraout_x8_01 + extraout_x9_01);
        puVar2[8] = (char)in_register_00005228;
        puVar2[9] = (byte)((ulong)in_register_00005228 >> 8) | in_register_00005248;
        puVar2[10] = (byte)((ulong)in_register_00005228 >> 0x10) | bVar13;
        puVar2[0xb] = (byte)((ulong)in_register_00005228 >> 0x18) | (byte)(int)auVar11._8_4_;
        puVar2[0xc] = (char)((ulong)in_register_00005228 >> 0x20);
        puVar2[0xd] = (byte)((ulong)in_register_00005228 >> 0x28) | in_register_0000524c;
        puVar2[0xe] = (byte)((ulong)in_register_00005228 >> 0x30) | bVar14;
        puVar2[0xf] = (byte)((ulong)in_register_00005228 >> 0x38) | (byte)(int)auVar11._12_4_;
        *puVar2 = (char)extraout_d17;
        puVar2[1] = (byte)((ulong)extraout_d17 >> 8) | extraout_b18;
        puVar2[2] = (byte)((ulong)extraout_d17 >> 0x10) | (byte)(uVar10 >> 0x10);
        puVar2[3] = (byte)((ulong)extraout_d17 >> 0x18) | (byte)(int)auVar11._0_4_;
        puVar2[4] = (char)((ulong)extraout_d17 >> 0x20);
        puVar2[5] = (byte)((ulong)extraout_d17 >> 0x28) | extraout_var;
        puVar2[6] = (byte)((ulong)extraout_d17 >> 0x30) | (byte)(uVar10 >> 0x30);
        puVar2[7] = (byte)((ulong)extraout_d17 >> 0x38) | (byte)(int)auVar11._4_4_;
                    /* WARNING: Could not recover jumptable at 0x000108375208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)puVar7[2])();
        return;
      }
      return;
    }
    cVar1 = *(char *)((long)&uStack_3c + lVar6);
    if (cVar1 == '0') {
      uVar9 = 0;
      in_register_00005228 = 0;
LAB_10836dd94:
      puVar7 = (undefined8 *)apuStack_38[lVar6];
      puVar7[1] = in_register_00005228;
      *puVar7 = uVar9;
    }
    else {
      if (cVar1 == '1') {
        in_register_00005228 = auVar11._8_8_;
        uVar9 = auVar11._0_8_;
        goto LAB_10836dd94;
      }
      uVar9 = param_4;
      in_register_00005228 = in_register_00005068;
      if ((((cVar1 == 'a') ||
           (uVar9 = param_3, in_register_00005228 = in_register_00005048, cVar1 == 'b')) ||
          (uVar9 = param_1, in_register_00005228 = in_register_00005008, cVar1 == 'r')) ||
         (uVar9 = param_2, in_register_00005228 = in_register_00005028, cVar1 == 'g'))
      goto LAB_10836dd94;
    }
    lVar6 = lVar6 + 1;
  } while( true );
}



/* Entry: 10836ddd4; end: 10836df6f;  */

void FUN_10836ddd4(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  long extraout_x8;
  long extraout_x9;
  float fVar3;
  float fVar4;
  float in_register_00005008;
  float in_register_0000500c;
  byte extraout_b16;
  byte extraout_var;
  byte bVar5;
  byte bVar6;
  undefined4 extraout_s17;
  undefined4 extraout_var_00;
  undefined4 in_register_00005228;
  undefined4 in_register_0000522c;
  byte extraout_b18;
  byte extraout_var_01;
  byte in_register_00005248;
  byte in_register_0000524c;
  float in_s19;
  float in_register_00005264;
  float in_register_00005268;
  float in_register_0000526c;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 extraout_b20;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 in_register_00005288;
  undefined1 in_register_00005289;
  undefined1 in_register_0000528a;
  undefined1 in_register_0000528b;
  undefined1 in_register_0000528c;
  undefined1 in_register_0000528d;
  undefined1 in_register_0000528e;
  undefined1 in_register_0000528f;
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  func_0x0001083758e8();
  bVar5 = SUB41(ABS(in_register_00005008),0);
  bVar6 = SUB41(ABS(in_register_0000500c),0);
  func_0x0001083753e0();
  fVar4 = fVar4 * (float)CONCAT13(extraout_var_08,
                                  CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05)
                                          )) * in_register_00005264 * 255.0 + 0.0;
  fVar1 = in_register_00005008 *
          (float)CONCAT13(in_register_0000528b,
                          CONCAT12(in_register_0000528a,
                                   CONCAT11(in_register_00005289,in_register_00005288))) *
          in_register_00005268 * 255.0 + 0.0;
  fVar2 = in_register_0000500c *
          (float)CONCAT13(in_register_0000528f,
                          CONCAT12(in_register_0000528e,
                                   CONCAT11(in_register_0000528d,in_register_0000528c))) *
          in_register_0000526c * 255.0 + 0.0;
  auVar7[4] = SUB41(fVar4,0);
  auVar7._0_4_ = fVar3 * (float)CONCAT13(extraout_var_04,
                                         CONCAT12(extraout_var_03,
                                                  CONCAT11(extraout_var_02,extraout_b20))) * in_s19
                 * 255.0 + 0.0;
  auVar7[5] = (char)((uint)fVar4 >> 8);
  auVar7[6] = (char)((uint)fVar4 >> 0x10);
  auVar7[7] = (char)((uint)fVar4 >> 0x18);
  auVar7[8] = SUB41(fVar1,0);
  auVar7[9] = (char)((uint)fVar1 >> 8);
  auVar7[10] = (char)((uint)fVar1 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar1 >> 0x18);
  auVar7[0xc] = SUB41(fVar2,0);
  auVar7[0xd] = (char)((uint)fVar2 >> 8);
  auVar7[0xe] = (char)((uint)fVar2 >> 0x10);
  auVar7[0xf] = (char)((uint)fVar2 >> 0x18);
  auVar7 = NEON_fmax(auVar7,ZEXT216(0),4);
  auVar8[10] = 0x7f;
  auVar8._0_10_ = (unkuint10)0x437f0000437f0000;
  auVar8[0xb] = 0x43;
  auVar8._12_2_ = 0;
  auVar8[0xe] = 0x7f;
  auVar8[0xf] = 0x43;
  auVar8 = NEON_fmin(auVar7,auVar8,4);
  ((undefined8 *)(extraout_x8 + extraout_x9))[1] =
       CONCAT17((byte)((uint)in_register_0000522c >> 0x18) | (byte)(int)auVar8._12_4_,
                CONCAT16((byte)((uint)in_register_0000522c >> 0x10) | bVar6,
                         CONCAT15((byte)((uint)in_register_0000522c >> 8) | in_register_0000524c,
                                  CONCAT14((char)in_register_0000522c,
                                           CONCAT13((byte)((uint)in_register_00005228 >> 0x18) |
                                                    (byte)(int)auVar8._8_4_,
                                                    CONCAT12((byte)((uint)in_register_00005228 >>
                                                                   0x10) | bVar5,
                                                             CONCAT11((byte)((uint)
                                                  in_register_00005228 >> 8) | in_register_00005248,
                                                  (char)in_register_00005228)))))));
  *(undefined8 *)(extraout_x8 + extraout_x9) =
       CONCAT17((byte)((uint)extraout_var_00 >> 0x18) | (byte)(int)auVar8._4_4_,
                CONCAT16((byte)((uint)extraout_var_00 >> 0x10) | extraout_var,
                         CONCAT15((byte)((uint)extraout_var_00 >> 8) | extraout_var_01,
                                  CONCAT14((char)extraout_var_00,
                                           CONCAT13((byte)((uint)extraout_s17 >> 0x18) |
                                                    (byte)(int)auVar8._0_4_,
                                                    CONCAT12((byte)((uint)extraout_s17 >> 0x10) |
                                                             extraout_b16,
                                                             CONCAT11((byte)((uint)extraout_s17 >> 8
                                                                            ) | extraout_b18,
                                                                      (char)extraout_s17)))))));
                    /* WARNING: Could not recover jumptable at 0x000108375208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 10836df70; end: 10836dfdb;  */

void FUN_10836df70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_register_00005008;
  undefined4 in_register_0000500c;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_00005028;
  undefined4 in_register_0000502c;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00005048;
  undefined4 in_register_0000504c;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_00005068;
  undefined4 in_register_0000506c;
  
  uVar10 = (undefined4)((ulong)param_4 >> 0x20);
  uVar9 = (undefined4)param_4;
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  uVar7 = (undefined4)param_3;
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = (undefined4)param_2;
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x0001083752fc();
  puVar2 = *(undefined8 **)(param_5 + 8);
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar5;
  *(undefined4 *)(puVar2 + 2) = uVar7;
  *(undefined4 *)((long)puVar2 + 0x14) = uVar9;
  *(undefined4 *)(puVar2 + 3) = uVar4;
  *(undefined4 *)((long)puVar2 + 0x1c) = uVar6;
  *(undefined4 *)(puVar2 + 4) = uVar8;
  *(undefined4 *)((long)puVar2 + 0x24) = uVar10;
  *(undefined4 *)(puVar2 + 5) = in_register_00005008;
  *(undefined4 *)((long)puVar2 + 0x2c) = in_register_00005028;
  *(undefined4 *)(puVar2 + 6) = in_register_00005048;
  *(undefined4 *)((long)puVar2 + 0x34) = in_register_00005068;
  *(undefined4 *)(puVar2 + 7) = in_register_0000500c;
  *(undefined4 *)((long)puVar2 + 0x3c) = in_register_0000502c;
  *(undefined4 *)(puVar2 + 8) = in_register_0000504c;
  *(undefined4 *)((long)puVar2 + 0x44) = in_register_0000506c;
  (*(code *)*puVar2)(puVar2,4);
  puVar1 = (undefined4 *)puVar2[0x21];
  func_0x000108375298(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010836dfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10836dfdc; end: 10836e08f;  */

void FUN_10836dfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  puVar2 = *(undefined8 **)(param_9 + 8);
  uStack_b0 = param_8;
  uStack_a0 = param_7;
  uStack_90 = param_6;
  uStack_80 = param_5;
  uStack_70 = param_4;
  uStack_60 = param_3;
  uStack_50 = param_2;
  uStack_40 = param_1;
  while (param_9 != 0) {
    pcVar1 = *(code **)(param_9 + 0x10);
    puVar2[0x41] = 0;
    (*pcVar1)(uStack_40,uStack_50,uStack_60,uStack_70,uStack_80,uStack_90,uStack_a0,uStack_b0,
              (undefined8 *)(param_9 + 0x10),param_10,param_11,param_12);
    param_9 = puVar2[0x41];
    if (param_9 != 0) {
      uStack_40 = *puVar2;
      uStack_50 = puVar2[8];
      uStack_60 = puVar2[0x10];
      uStack_70 = puVar2[0x18];
      uStack_80 = puVar2[0x20];
      uStack_90 = puVar2[0x28];
      uStack_a0 = puVar2[0x30];
      uStack_b0 = puVar2[0x38];
      param_12 = puVar2[0x40];
    }
  }
  return;
}



/* Entry: 10836e090; end: 10836e693;  */

void FUN_10836e090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 in_register_00005088;
  undefined8 in_register_000050a8;
  undefined8 in_register_000050c8;
  undefined8 in_register_000050e8;
  
  puVar1 = *(undefined8 **)(param_9 + 8);
  puVar1[1] = in_register_00005008;
  *puVar1 = param_1;
  puVar1[9] = in_register_00005028;
  puVar1[8] = param_2;
  puVar1[0x11] = in_register_00005048;
  puVar1[0x10] = param_3;
  puVar1[0x19] = in_register_00005068;
  puVar1[0x18] = param_4;
  puVar1[0x21] = in_register_00005088;
  puVar1[0x20] = param_5;
  puVar1[0x29] = in_register_000050a8;
  puVar1[0x28] = param_6;
  puVar1[0x31] = in_register_000050c8;
  puVar1[0x30] = param_7;
  puVar1[0x39] = in_register_000050e8;
  puVar1[0x38] = param_8;
  puVar1[0x40] = param_12;
  puVar1[0x41] = param_9;
  return;
}



/* Entry: 10836e694; end: 10836e707;  */

void FUN_10836e694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  uint extraout_w12;
  undefined8 extraout_d1;
  undefined8 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_register_00005048;
  undefined4 in_register_0000504c;
  undefined2 uStack_30;
  undefined2 uStack_28;
  undefined1 auVar2 [16];
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  func_0x0001083752d0(*(undefined8 *)(param_4 + 8));
  auVar2._8_8_ = extraout_var;
  auVar2._0_8_ = extraout_d1;
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar3;
  auVar1._8_4_ = in_register_00005048;
  auVar1._12_4_ = in_register_0000504c;
  NEON_fmin(auVar2,auVar1,4);
  func_0x000108375388(CONCAT44((int)((ulong)param_1 >> 0x20) - (uint)*(byte *)(extraout_x8 + 0x54),
                               (int)param_1 - (uint)*(byte *)(extraout_x8 + 0x54)));
  uStack_30 = (float2)*(undefined8 *)(extraout_x9 + (ulong)extraout_w12 * 8);
  uStack_28 = (float2)*(undefined8 *)(extraout_x9 + (extraout_x8_00 & 0xffffffff) * 8);
  (**(code **)(param_4 + 0x10))(CONCAT44((float)uStack_28,(float)uStack_30));
  return;
}



/* Entry: 10836e708; end: 10836e807;  */

void FUN_10836e708(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000108375698();
                    /* WARNING: Could not recover jumptable at 0x00010837531c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10836e808; end: 10836e87f;  */

void FUN_10836e808(int param_1,long param_2)

{
  undefined1 auVar1 [16];
  long extraout_x8;
  long extraout_x9;
  uint extraout_w12;
  undefined8 extraout_d1;
  undefined8 extraout_var;
  undefined1 in_b2;
  undefined1 in_register_00005041;
  undefined1 in_register_00005042;
  undefined1 in_register_00005043;
  undefined1 in_register_00005044;
  undefined1 in_register_00005045;
  undefined1 in_register_00005046;
  undefined1 in_register_00005047;
  undefined1 in_register_00005048;
  undefined1 in_register_00005049;
  undefined1 in_register_0000504a;
  undefined1 in_register_0000504b;
  undefined1 in_register_0000504c;
  undefined1 in_register_0000504d;
  undefined1 in_register_0000504e;
  undefined1 in_register_0000504f;
  undefined2 uStack_20;
  undefined1 auVar2 [16];
  
  func_0x0001083752d0(*(undefined8 *)(param_2 + 8));
  auVar2._8_8_ = extraout_var;
  auVar2._0_8_ = extraout_d1;
  auVar1[1] = in_register_00005041;
  auVar1[0] = in_b2;
  auVar1[2] = in_register_00005042;
  auVar1[3] = in_register_00005043;
  auVar1[4] = in_register_00005044;
  auVar1[5] = in_register_00005045;
  auVar1[6] = in_register_00005046;
  auVar1[7] = in_register_00005047;
  auVar1[8] = in_register_00005048;
  auVar1[9] = in_register_00005049;
  auVar1[10] = in_register_0000504a;
  auVar1[0xb] = in_register_0000504b;
  auVar1[0xc] = in_register_0000504c;
  auVar1[0xd] = in_register_0000504d;
  auVar1[0xe] = in_register_0000504e;
  auVar1[0xf] = in_register_0000504f;
  NEON_fmin(auVar2,auVar1,4);
  func_0x000108375388(param_1 - (uint)*(byte *)(extraout_x8 + 0x54));
  uStack_20 = (float2)*(undefined4 *)(extraout_x9 + (ulong)extraout_w12 * 4);
  NEON_fmov(0x3f800000,4);
  (**(code **)(param_2 + 0x10))((float)uStack_20);
  return;
}



/* Entry: 10836e880; end: 10836fe47;  */

void FUN_10836e880(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined4 *puVar1;
  long extraout_x8;
  long extraout_x9;
  
  func_0x0001083759d8();
  puVar1 = (undefined4 *)(extraout_x9 + extraout_x8 * 0x10 + param_2 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010836e898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return;
}



/* Entry: 10836fe48; end: 10836fe93;  */

void FUN_10836fe48(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000108375514();
  func_0x0001083752fc();
  func_0x000108375d94();
  func_0x000108374b2c();
  func_0x000108375a94();
  func_0x000108374b2c();
  func_0x000108375aac();
  func_0x000108374b2c();
  func_0x000108375298();
  func_0x000108375500();
                    /* WARNING: Could not recover jumptable at 0x000108375458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10836fe94; end: 10836ff0b;  */

void FUN_10836fe94(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  
  func_0x000108375514();
  func_0x0001083752fc();
  uVar1 = **(undefined4 **)(param_1 + 8);
  func_0x000108374c5c();
  func_0x000108374c5c(uVar1,uStack_c0);
  func_0x000108374c5c(uVar1,uStack_a0);
  func_0x000108375298();
  func_0x000108375500();
                    /* WARNING: Could not recover jumptable at 0x00010836ff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10836ff0c; end: 10836ffef;  */

void FUN_10836ff0c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x000108375514();
  func_0x0001083752fc();
  func_0x000108375d94();
  func_0x000108374d54();
  func_0x000108375a94();
  func_0x000108374d54();
  func_0x000108375aac();
  func_0x000108374d54();
  func_0x000108375298();
  func_0x000108375500();
                    /* WARNING: Could not recover jumptable at 0x000108375458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10836fff0; end: 1083707f3;  */

void FUN_10836fff0(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 in_q0 [16];
  undefined1 in_q1 [16];
  undefined4 in_register_00005048;
  undefined4 in_register_0000504c;
  undefined1 auVar2 [16];
  
  auVar2._8_4_ = in_register_00005048;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = in_register_0000504c;
  auVar2 = NEON_fmax(in_q1,auVar2,4);
  NEON_fmax(in_q0,auVar2,4);
  auVar1._8_4_ = in_register_00005048;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = in_register_0000504c;
  auVar2 = NEON_fmin(in_q1,auVar1,4);
  NEON_fmin(in_q0,auVar2,4);
  NEON_fmov(0x3f800000,4);
  NEON_fmov(0x40c00000,4);
  NEON_fmov(0x40800000,4);
                    /* WARNING: Could not recover jumptable at 0x000108375560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))();
  return;
}



/* Entry: 1083707f4; end: 108370aab;  */

void FUN_1083707f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *plVar14;
  long lVar15;
  long extraout_x9_00;
  long lVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined8 in_register_00005008;
  float fVar21;
  undefined8 in_register_00005028;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  uint uVar48;
  uint uVar51;
  uint uVar52;
  undefined1 auVar49 [16];
  uint uVar53;
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined8 auStack_d0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  fVar20 = (float)((ulong)param_1 >> 0x20);
  fVar17 = (float)param_1;
  func_0x0001083757a0(0);
  uStack_48 = extraout_x9;
  plVar14 = *(long **)(param_3 + 8);
  fVar36 = (float)param_2 + 0.5;
  fVar33 = (float)((ulong)param_2 >> 0x20);
  fVar38 = fVar33 + 0.5;
  fVar27 = (float)in_register_00005028 + 0.5;
  fVar35 = (float)((ulong)in_register_00005028 >> 0x20);
  fVar28 = fVar35 + 0.5;
  fVar36 = fVar36 - (float)(int)fVar36;
  fVar38 = fVar38 - (float)(int)fVar38;
  fVar27 = fVar27 - (float)(int)fVar27;
  fVar28 = fVar28 - (float)(int)fVar28;
  fVar19 = *(float *)((long)plVar14 + 0x34);
  fVar31 = *(float *)((long)plVar14 + 0x44);
  fVar39 = *(float *)(plVar14 + 9);
  fVar32 = *(float *)((long)plVar14 + 0x24);
  fVar34 = *(float *)((long)plVar14 + 0x14);
  fVar41 = *(float *)(plVar14 + 7);
  fVar42 = *(float *)(plVar14 + 5);
  fVar43 = *(float *)(plVar14 + 3);
  fVar44 = *(float *)((long)plVar14 + 0x3c);
  fVar46 = *(float *)((long)plVar14 + 0x4c);
  fVar47 = *(float *)(plVar14 + 10);
  fVar2 = *(float *)((long)plVar14 + 0x2c);
  fVar3 = *(float *)((long)plVar14 + 0x1c);
  fVar4 = *(float *)(plVar14 + 8);
  fVar5 = *(float *)(plVar14 + 6);
  fVar6 = *(float *)(plVar14 + 4);
  fVar25 = (float)in_register_00005008 + 0.5;
  fVar21 = (float)((ulong)in_register_00005008 >> 0x20);
  fVar26 = fVar21 + 0.5;
  fVar22 = (fVar17 + 0.5) - (float)(int)(fVar17 + 0.5);
  fVar24 = (fVar20 + 0.5) - (float)(int)(fVar20 + 0.5);
  fVar25 = fVar25 - (float)(int)fVar25;
  fVar26 = fVar26 - (float)(int)fVar26;
  auStack_90[1] =
       CONCAT44(fVar34 + (fVar32 + (fVar19 + fVar28 * fVar31) * fVar28) * fVar28,
                fVar34 + (fVar32 + (fVar19 + fVar27 * fVar31) * fVar27) * fVar27);
  auStack_90[0] =
       CONCAT44(fVar34 + (fVar32 + ((float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                                     CONCAT16((char)((uint)fVar19 >> 0x10),
                                                              CONCAT15((char)((uint)fVar19 >> 8),
                                                                       CONCAT14(SUB41(fVar19,0),
                                                                                fVar19)))) >> 0x20)
                                   + fVar38 * fVar31) * fVar38) * fVar38,
                fVar34 + (fVar32 + (fVar19 + fVar36 * fVar31) * fVar36) * fVar36);
  fStack_78 = fVar43 + (fVar42 + (fVar41 + fVar27 * fVar39) * fVar27) * fVar27;
  fStack_74 = fVar43 + (fVar42 + (fVar41 + fVar28 * fVar39) * fVar28) * fVar28;
  fStack_80 = fVar43 + (fVar42 + (fVar41 + fVar36 * fVar39) * fVar36) * fVar36;
  fStack_7c = fVar43 + (fVar42 + (fVar41 + fVar38 * fVar39) * fVar38) * fVar38;
  fStack_68 = fVar3 + (fVar2 + (fVar44 + fVar27 * fVar46) * fVar27) * fVar27;
  fStack_64 = fVar3 + (fVar2 + (fVar44 + fVar28 * fVar46) * fVar28) * fVar28;
  fStack_70 = fVar3 + (fVar2 + (fVar44 + fVar36 * fVar46) * fVar36) * fVar36;
  fStack_6c = fVar3 + (fVar2 + (fVar44 + fVar38 * fVar46) * fVar38) * fVar38;
  uStack_58 = CONCAT44(fVar6 + (fVar5 + (fVar4 + fVar28 * fVar47) * fVar28) * fVar28,
                       fVar6 + (fVar5 + (fVar4 + fVar27 * fVar47) * fVar27) * fVar27);
  uStack_60 = CONCAT44(fVar6 + (fVar5 + (fVar4 + fVar38 * fVar47) * fVar38) * fVar38,
                       fVar6 + (fVar5 + (fVar4 + fVar36 * fVar47) * fVar36) * fVar36);
  auStack_d0[1] =
       CONCAT44(fVar34 + (fVar32 + (fVar19 + fVar26 * fVar31) * fVar26) * fVar26,
                fVar34 + (fVar32 + (fVar19 + fVar25 * fVar31) * fVar25) * fVar25);
  auStack_d0[0] =
       CONCAT44(fVar34 + (fVar32 + (fVar19 + fVar24 * fVar31) * fVar24) * fVar24,
                fVar34 + (fVar32 + (fVar19 + fVar22 * fVar31) * fVar22) * fVar22);
  auStack_d0[3] =
       CONCAT44(fVar43 + (fVar42 + (fVar41 + fVar26 * fVar39) * fVar26) * fVar26,
                fVar43 + (fVar42 + (fVar41 + fVar25 * fVar39) * fVar25) * fVar25);
  auStack_d0[2] =
       CONCAT44(fVar43 + (fVar42 + (fVar41 + fVar24 * fVar39) * fVar24) * fVar24,
                fVar43 + (fVar42 + (fVar41 + fVar22 * fVar39) * fVar22) * fVar22);
  auVar23._0_8_ =
       CONCAT44(fVar6 + (fVar5 + (fVar4 + fVar24 * fVar47) * fVar24) * fVar24,
                fVar6 + (fVar5 + (fVar4 + fVar22 * fVar47) * fVar22) * fVar22);
  auVar23._8_4_ = fVar6 + (fVar5 + (fVar4 + fVar25 * fVar47) * fVar25) * fVar25;
  auVar23._12_4_ = fVar6 + (fVar5 + (fVar4 + fVar26 * fVar47) * fVar26) * fVar26;
  fStack_a8 = fVar3 + (fVar2 + (fVar44 + fVar25 * fVar46) * fVar25) * fVar25;
  fStack_a4 = fVar3 + (fVar2 + (fVar44 + fVar26 * fVar46) * fVar26) * fVar26;
  fStack_b0 = fVar3 + (fVar2 + (fVar44 + fVar22 * fVar46) * fVar22) * fVar22;
  fStack_ac = fVar3 + (fVar2 + (fVar44 + fVar24 * fVar46) * fVar24) * fVar24;
  uStack_98 = auVar23._8_8_;
  uStack_a0 = auVar23._0_8_;
  auVar23 = NEON_fmov(0xbfc00000,4);
  fVar32 = (float)param_2 + auVar23._0_4_;
  fVar33 = fVar33 + auVar23._4_4_;
  fVar34 = (float)in_register_00005028 + auVar23._8_4_;
  fVar35 = fVar35 + auVar23._12_4_;
  iVar37 = (int)plVar14[1];
  iVar7 = *(int *)((long)plVar14 + 0xc) + -1;
  iVar18 = (int)plVar14[2] + -1;
  bVar1 = *(byte *)((long)plVar14 + 0x54);
  lVar15 = *plVar14;
  fVar19 = 0.0;
  auVar45 = NEON_fmov(0x3f800000,4);
  for (lVar13 = extraout_x8; lVar13 != 4; lVar13 = lVar13 + 1) {
    lVar16 = 0;
    auVar40._4_4_ = fVar33;
    auVar40._0_4_ = fVar32;
    auVar40._8_4_ = fVar34;
    auVar40._12_4_ = fVar35;
    auVar9._8_4_ = 0x800000;
    auVar9._0_8_ = 0x80000000800000;
    auVar9._12_4_ = 0x800000;
    auVar40 = NEON_fmax(auVar40,auVar9,4);
    auVar49._4_4_ = iVar18;
    auVar49._0_4_ = iVar18;
    auVar49._8_4_ = iVar18;
    auVar49._12_4_ = iVar18;
    auVar40 = NEON_fmin(auVar40,auVar49,4);
    fVar41 = fVar17 + auVar23._0_4_;
    fVar42 = fVar20 + auVar23._4_4_;
    fVar43 = (float)in_register_00005008 + auVar23._8_4_;
    fVar44 = fVar21 + auVar23._12_4_;
    while( true ) {
      if (lVar16 == 0x40) break;
      auVar10._8_4_ = 0x800000;
      auVar10._0_8_ = 0x80000000800000;
      auVar10._12_4_ = 0x800000;
      auVar11._4_4_ = fVar42;
      auVar11._0_4_ = fVar41;
      auVar11._8_4_ = fVar43;
      auVar11._12_4_ = fVar44;
      auVar49 = NEON_fmax(auVar11,auVar10,4);
      auVar8._4_4_ = iVar7;
      auVar8._0_4_ = iVar7;
      auVar8._8_4_ = iVar7;
      auVar8._12_4_ = iVar7;
      auVar49 = NEON_fmin(auVar49,auVar8,4);
      uVar48 = *(uint *)(lVar15 + (ulong)(uint)((int)(float)(auVar40._0_4_ - (uint)bVar1) * iVar37 +
                                               (int)(float)(auVar49._0_4_ - (uint)bVar1)) * 4);
      uVar51 = *(uint *)(lVar15 + (ulong)(uint)((int)(float)(auVar40._4_4_ - (uint)bVar1) * iVar37 +
                                               (int)(float)(auVar49._4_4_ - (uint)bVar1)) * 4);
      uVar52 = *(uint *)(lVar15 + (ulong)(uint)((int)(float)(auVar40._8_4_ - (uint)bVar1) * iVar37 +
                                               (int)(float)(auVar49._8_4_ - (uint)bVar1)) * 4);
      uVar53 = *(uint *)(lVar15 + (ulong)(uint)((int)(float)(auVar40._12_4_ - (uint)bVar1) * iVar37
                                               + (int)(float)(auVar49._12_4_ - (uint)bVar1)) * 4);
      auVar54._0_5_ = CONCAT14((char)uVar51,uVar48) & 0xff000000ff;
      auVar54._5_3_ = 0;
      auVar54[8] = (char)uVar52;
      auVar54._9_3_ = 0;
      auVar54[0xc] = (char)uVar53;
      auVar54._13_3_ = 0;
      auVar49 = NEON_ucvtf(auVar54,4);
      auVar29._0_5_ = CONCAT14((char)(uVar51 >> 8),uVar48 >> 8) & 0xff000000ff;
      auVar29._5_3_ = 0;
      auVar29[8] = (undefined1)(uVar52 >> 8);
      auVar29._9_3_ = 0;
      auVar29[0xc] = (undefined1)(uVar53 >> 8);
      auVar29._13_3_ = 0;
      NEON_ucvtf(auVar29,4);
      auVar30._0_8_ = CONCAT44(uVar51 >> 0x10,uVar48 >> 0x10) & 0xffff00ffffff00ff;
      auVar30._8_4_ = uVar52 >> 0x10 & 0xffff00ff;
      auVar30._12_4_ = uVar53 >> 0x10 & 0xffff00ff;
      NEON_ucvtf(auVar30,4);
      auVar50._0_4_ = uVar48 >> 0x18;
      auVar50._4_4_ = uVar51 >> 0x18;
      auVar50._8_4_ = uVar52 >> 0x18;
      auVar50._12_4_ = uVar53 >> 0x18;
      NEON_ucvtf(auVar50,4);
      fVar19 = fVar19 + auVar49._0_4_ * 0.003921569 *
                        (float)auStack_90[lVar13 * 2] *
                        (float)*(undefined8 *)((long)auStack_d0 + lVar16);
      fVar41 = fVar41 + auVar45._0_4_;
      fVar42 = fVar42 + auVar45._4_4_;
      fVar43 = fVar43 + auVar45._8_4_;
      fVar44 = fVar44 + auVar45._12_4_;
      lVar16 = lVar16 + 0x10;
    }
    fVar32 = fVar32 + auVar45._0_4_;
    fVar33 = fVar33 + auVar45._4_4_;
    fVar34 = fVar34 + auVar45._8_4_;
    fVar35 = fVar35 + auVar45._12_4_;
  }
  puVar12 = (undefined8 *)(param_3 + 0x10);
  UNRECOVERED_JUMPTABLE = (code *)*puVar12;
  func_0x0001083757a0(extraout_x9,fVar19);
  if (extraout_x9_00 == extraout_x8_00) {
                    /* WARNING: Could not recover jumptable at 0x000108370aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ___stack_chk_fail();
  func_0x000108375c10();
                    /* WARNING: Could not recover jumptable at 0x000108375ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar12[2])();
  return;
}



/* Entry: 108370aac; end: 108370d43;  */

void FUN_108370aac(long param_1)

{
  func_0x000108375c10();
                    /* WARNING: Could not recover jumptable at 0x000108375ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 108370d44; end: 1083711f7;  */

void FUN_108370d44(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  ulong uVar13;
  long extraout_x8_00;
  undefined8 *puVar14;
  undefined8 extraout_x9;
  long lVar15;
  long extraout_x9_00;
  long lVar16;
  float *pfVar17;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_d1;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  float fVar19;
  undefined8 extraout_d2;
  undefined8 extraout_var_05;
  float fVar21;
  undefined8 extraout_d3;
  undefined8 extraout_var_06;
  float fVar23;
  byte bVar26;
  int iVar27;
  undefined1 auVar25 [12];
  int iVar28;
  uint uVar29;
  byte bVar31;
  uint uVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  undefined1 auVar30 [16];
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar47;
  uint uVar48;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  byte bVar64;
  float fVar63;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  float fVar65;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  float fVar69;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  float fVar73;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  float fVar77;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  float fVar81;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  float fVar85;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  float fVar89;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  int iVar116;
  int iVar117;
  float fVar118;
  float fVar122;
  float fVar123;
  undefined1 auVar119 [13];
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [13];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float afStack_f0 [18];
  undefined8 uStack_a8;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [12];
  
  auVar128 = func_0x0001083757a0(0);
  lVar15 = *(long *)(param_1 + 8);
  fVar19 = *(float *)(lVar15 + 4);
  fVar21 = *(float *)(lVar15 + 8);
  fVar57 = (auVar128._0_4_ + 0.5) * fVar19;
  fVar58 = (auVar128._4_4_ + 0.5) * fVar19;
  fVar59 = ((float)extraout_var + 0.5) * fVar19;
  fVar19 = ((float)((ulong)extraout_var >> 0x20) + 0.5) * fVar19;
  fVar60 = (auVar128._8_4_ + 0.5) * fVar21;
  fVar61 = (auVar128._12_4_ + 0.5) * fVar21;
  fVar62 = ((float)extraout_var_02 + 0.5) * fVar21;
  fVar21 = ((float)((ulong)extraout_var_02 >> 0x20) + 0.5) * fVar21;
  fVar63 = *(float *)(lVar15 + 0xc);
  fVar77 = *(float *)(lVar15 + 0x10);
  auVar128 = NEON_fmov(0x3f800000,4);
  uVar3 = *(uint *)(lVar15 + 0x18);
  fVar65 = fVar63;
  fVar69 = fVar63;
  fVar73 = fVar63;
  fVar81 = fVar77;
  fVar85 = fVar77;
  fVar89 = fVar77;
  uStack_a8 = extraout_x9;
  for (uVar13 = extraout_x8; (uint)uVar13 != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      uVar13 = (ulong)((uint)uVar13 + 1)) {
    fVar93 = (float)(int)fVar57;
    fVar94 = (float)(int)fVar58;
    fVar95 = (float)(int)fVar59;
    fVar96 = (float)(int)fVar19;
    fVar97 = (float)(int)fVar60;
    fVar98 = (float)(int)fVar61;
    fVar99 = (float)(int)fVar62;
    fVar100 = (float)(int)fVar21;
    fVar118 = fVar93 + auVar128._0_4_;
    fVar122 = fVar94 + auVar128._4_4_;
    fVar123 = fVar95 + auVar128._8_4_;
    fVar124 = fVar96 + auVar128._12_4_;
    fVar101 = fVar97 + auVar128._0_4_;
    fVar103 = fVar98 + auVar128._4_4_;
    fVar105 = fVar99 + auVar128._8_4_;
    fVar107 = fVar100 + auVar128._12_4_;
    fVar23 = fVar97;
    fVar102 = fVar98;
    fVar115 = fVar99;
    fVar114 = fVar100;
    fVar104 = fVar93;
    fVar106 = fVar94;
    fVar108 = fVar95;
    fVar113 = fVar96;
    if (*(char *)(lVar15 + 0x14) == '\x01') {
      iVar109 = -(uint)(fVar63 <= fVar93);
      iVar110 = -(uint)(fVar65 <= fVar94);
      iVar112 = -(uint)(fVar69 <= fVar95);
      iVar116 = -(uint)(fVar73 <= fVar96);
      bVar26 = (byte)((uint)fVar63 >> 8);
      bVar31 = (byte)((uint)fVar63 >> 0x10);
      bVar64 = (byte)((uint)fVar63 >> 0x18);
      fVar106 = (float)CONCAT13((byte)((uint)iVar109 >> 0x18) & bVar64,
                                CONCAT12((byte)((uint)iVar109 >> 0x10) & bVar31,
                                         CONCAT11((byte)((uint)iVar109 >> 8) & bVar26,
                                                  (byte)iVar109 & SUB41(fVar63,0))));
      bVar66 = (byte)((uint)fVar65 >> 8);
      bVar67 = (byte)((uint)fVar65 >> 0x10);
      bVar68 = (byte)((uint)fVar65 >> 0x18);
      bVar70 = (byte)((uint)fVar69 >> 8);
      bVar71 = (byte)((uint)fVar69 >> 0x10);
      bVar72 = (byte)((uint)fVar69 >> 0x18);
      fVar113 = (float)CONCAT13((byte)((uint)iVar112 >> 0x18) & bVar72,
                                CONCAT12((byte)((uint)iVar112 >> 0x10) & bVar71,
                                         CONCAT11((byte)((uint)iVar112 >> 8) & bVar70,
                                                  (byte)iVar112 & SUB41(fVar69,0))));
      bVar74 = (byte)((uint)fVar73 >> 8);
      bVar75 = (byte)((uint)fVar73 >> 0x10);
      bVar76 = (byte)((uint)fVar73 >> 0x18);
      iVar109 = -(uint)(fVar77 <= fVar97);
      iVar111 = -(uint)(fVar81 <= fVar98);
      iVar112 = -(uint)(fVar85 <= fVar99);
      iVar117 = -(uint)(fVar89 <= fVar100);
      bVar78 = (byte)((uint)fVar77 >> 8);
      bVar79 = (byte)((uint)fVar77 >> 0x10);
      bVar80 = (byte)((uint)fVar77 >> 0x18);
      fVar102 = (float)CONCAT13((byte)((uint)iVar109 >> 0x18) & bVar80,
                                CONCAT12((byte)((uint)iVar109 >> 0x10) & bVar79,
                                         CONCAT11((byte)((uint)iVar109 >> 8) & bVar78,
                                                  (byte)iVar109 & SUB41(fVar77,0))));
      bVar82 = (byte)((uint)fVar81 >> 8);
      bVar83 = (byte)((uint)fVar81 >> 0x10);
      bVar84 = (byte)((uint)fVar81 >> 0x18);
      bVar86 = (byte)((uint)fVar85 >> 8);
      bVar87 = (byte)((uint)fVar85 >> 0x10);
      bVar88 = (byte)((uint)fVar85 >> 0x18);
      fVar114 = (float)CONCAT13((byte)((uint)iVar112 >> 0x18) & bVar88,
                                CONCAT12((byte)((uint)iVar112 >> 0x10) & bVar87,
                                         CONCAT11((byte)((uint)iVar112 >> 8) & bVar86,
                                                  (byte)iVar112 & SUB41(fVar85,0))));
      bVar90 = (byte)((uint)fVar89 >> 8);
      bVar91 = (byte)((uint)fVar89 >> 0x10);
      bVar92 = (byte)((uint)fVar89 >> 0x18);
      iVar109 = -(uint)(fVar63 <= fVar118);
      iVar112 = -(uint)(fVar65 <= fVar122);
      iVar27 = -(uint)(fVar69 <= fVar123);
      iVar28 = -(uint)(fVar73 <= fVar124);
      fVar23 = (float)CONCAT13((byte)((uint)iVar109 >> 0x18) & bVar64,
                               CONCAT12((byte)((uint)iVar109 >> 0x10) & bVar31,
                                        CONCAT11((byte)((uint)iVar109 >> 8) & bVar26,
                                                 (byte)iVar109 & SUB41(fVar63,0))));
      auVar24._0_8_ =
           CONCAT17((byte)((uint)iVar112 >> 0x18) & bVar68,
                    CONCAT16((byte)((uint)iVar112 >> 0x10) & bVar67,
                             CONCAT15((byte)((uint)iVar112 >> 8) & bVar66,
                                      CONCAT14((byte)iVar112 & SUB41(fVar65,0),fVar23))));
      auVar24[8] = (byte)iVar27 & SUB41(fVar69,0);
      auVar24[9] = (byte)((uint)iVar27 >> 8) & bVar70;
      auVar24[10] = (byte)((uint)iVar27 >> 0x10) & bVar71;
      auVar24[0xb] = (byte)((uint)iVar27 >> 0x18) & bVar72;
      auVar120[0xc] = (byte)iVar28 & SUB41(fVar73,0);
      auVar120._0_12_ = auVar24;
      auVar120[0xd] = (byte)((uint)iVar28 >> 8) & bVar74;
      auVar120[0xe] = (byte)((uint)iVar28 >> 0x10) & bVar75;
      auVar120[0xf] = (byte)((uint)iVar28 >> 0x18) & bVar76;
      fVar118 = fVar118 - fVar23;
      fVar122 = fVar122 - (float)((ulong)auVar24._0_8_ >> 0x20);
      fVar123 = fVar123 - auVar24._8_4_;
      fVar124 = fVar124 - auVar120._12_4_;
      iVar109 = -(uint)(fVar77 <= fVar101);
      iVar112 = -(uint)(fVar81 <= fVar103);
      iVar27 = -(uint)(fVar85 <= fVar105);
      iVar28 = -(uint)(fVar89 <= fVar107);
      fVar23 = (float)CONCAT13((byte)((uint)iVar109 >> 0x18) & bVar80,
                               CONCAT12((byte)((uint)iVar109 >> 0x10) & bVar79,
                                        CONCAT11((byte)((uint)iVar109 >> 8) & bVar78,
                                                 (byte)iVar109 & SUB41(fVar77,0))));
      auVar25._0_8_ =
           CONCAT17((byte)((uint)iVar112 >> 0x18) & bVar84,
                    CONCAT16((byte)((uint)iVar112 >> 0x10) & bVar83,
                             CONCAT15((byte)((uint)iVar112 >> 8) & bVar82,
                                      CONCAT14((byte)iVar112 & SUB41(fVar81,0),fVar23))));
      auVar25[8] = (byte)iVar27 & SUB41(fVar85,0);
      auVar25[9] = (byte)((uint)iVar27 >> 8) & bVar86;
      auVar25[10] = (byte)((uint)iVar27 >> 0x10) & bVar87;
      auVar25[0xb] = (byte)((uint)iVar27 >> 0x18) & bVar88;
      auVar121[0xc] = (byte)iVar28 & SUB41(fVar89,0);
      auVar121._0_12_ = auVar25;
      auVar121[0xd] = (byte)((uint)iVar28 >> 8) & bVar90;
      auVar121[0xe] = (byte)((uint)iVar28 >> 0x10) & bVar91;
      auVar121[0xf] = (byte)((uint)iVar28 >> 0x18) & bVar92;
      fVar101 = fVar101 - fVar23;
      fVar103 = fVar103 - (float)((ulong)auVar25._0_8_ >> 0x20);
      fVar105 = fVar105 - auVar25._8_4_;
      fVar107 = fVar107 - auVar121._12_4_;
      fVar23 = fVar97 - fVar102;
      fVar102 = fVar98 - (float)(CONCAT17((byte)((uint)iVar111 >> 0x18) & bVar84,
                                          CONCAT16((byte)((uint)iVar111 >> 0x10) & bVar83,
                                                   CONCAT15((byte)((uint)iVar111 >> 8) & bVar82,
                                                            CONCAT14((byte)iVar111 & SUB41(fVar81,0)
                                                                     ,fVar102)))) >> 0x20);
      fVar115 = fVar99 - fVar114;
      fVar114 = fVar100 - (float)(CONCAT17((byte)((uint)iVar117 >> 0x18) & bVar92,
                                           CONCAT16((byte)((uint)iVar117 >> 0x10) & bVar91,
                                                    CONCAT15((byte)((uint)iVar117 >> 8) & bVar90,
                                                             CONCAT14((byte)iVar117 &
                                                                      SUB41(fVar89,0),fVar114)))) >>
                                 0x20);
      fVar104 = fVar93 - fVar106;
      fVar106 = fVar94 - (float)(CONCAT17((byte)((uint)iVar110 >> 0x18) & bVar68,
                                          CONCAT16((byte)((uint)iVar110 >> 0x10) & bVar67,
                                                   CONCAT15((byte)((uint)iVar110 >> 8) & bVar66,
                                                            CONCAT14((byte)iVar110 & SUB41(fVar65,0)
                                                                     ,fVar106)))) >> 0x20);
      fVar108 = fVar95 - fVar113;
      fVar113 = fVar96 - (float)(CONCAT17((byte)((uint)iVar116 >> 0x18) & bVar76,
                                          CONCAT16((byte)((uint)iVar116 >> 0x10) & bVar75,
                                                   CONCAT15((byte)((uint)iVar116 >> 8) & bVar74,
                                                            CONCAT14((byte)iVar116 & SUB41(fVar73,0)
                                                                     ,fVar113)))) >> 0x20);
    }
    lVar16 = 0;
    fVar93 = fVar57 - fVar93;
    fVar94 = fVar58 - fVar94;
    fVar95 = fVar59 - fVar95;
    fVar96 = fVar19 - fVar96;
    auVar125._0_8_ = CONCAT35(0,CONCAT14((byte)(int)fVar106,(int)fVar104) & 0xff000000ff);
    auVar125[8] = (byte)(int)fVar108;
    auVar125._9_3_ = 0;
    auVar125[0xc] = (byte)(int)fVar113;
    lVar1 = *(long *)(lVar15 + 0x20);
    lVar2 = *(long *)(lVar15 + 0x28);
    auVar8._1_12_ = auVar125._1_12_;
    auVar8[0] = *(undefined1 *)(lVar1 + (auVar125._0_8_ & 0xffffffff));
    auVar127._0_2_ = auVar8._0_2_;
    auVar9[2] = *(undefined1 *)(lVar1 + (ulong)(byte)(int)fVar106);
    auVar9._0_2_ = auVar127._0_2_;
    auVar9._3_10_ = auVar125._3_10_;
    fVar97 = fVar60 - fVar97;
    fVar98 = fVar61 - fVar98;
    fVar99 = fVar62 - fVar99;
    fVar100 = fVar21 - fVar100;
    auVar127._2_2_ = 0;
    auVar127._4_2_ = auVar9._2_2_;
    auVar127._6_2_ = 0;
    auVar127._8_2_ = (short)CONCAT81(auVar125._5_8_,*(undefined1 *)(lVar1 + (ulong)auVar125[8]));
    auVar127._10_2_ = 0;
    auVar127[0xc] = *(undefined1 *)(lVar1 + (ulong)auVar125[0xc]);
    auVar127._13_3_ = 0;
    auVar119._0_8_ = CONCAT35(0,CONCAT14((byte)(int)fVar122,(int)fVar118) & 0xff000000ff);
    auVar119[8] = (byte)(int)fVar123;
    auVar119._9_3_ = 0;
    auVar119[0xc] = (byte)(int)fVar124;
    auVar10._1_12_ = auVar119._1_12_;
    auVar10[0] = *(undefined1 *)(lVar1 + (auVar119._0_8_ & 0xffffffff));
    auVar126._0_2_ = auVar10._0_2_;
    auVar11[2] = *(undefined1 *)(lVar1 + (ulong)(byte)(int)fVar122);
    auVar11._0_2_ = auVar126._0_2_;
    auVar11._3_10_ = auVar119._3_10_;
    auVar126._2_2_ = 0;
    auVar126._4_2_ = auVar11._2_2_;
    auVar126._6_2_ = 0;
    auVar126._8_2_ = (short)CONCAT81(auVar119._5_8_,*(undefined1 *)(lVar1 + (ulong)auVar119[8]));
    auVar126._10_2_ = 0;
    auVar126[0xc] = *(undefined1 *)(lVar1 + (ulong)auVar119[0xc]);
    auVar126._13_3_ = 0;
    auVar120 = NEON_ucvtf(auVar126,4);
    bVar26 = (byte)(int)(fVar103 + auVar120._4_4_);
    auVar126 = NEON_ucvtf(auVar127,4);
    bVar31 = (byte)(int)(fVar102 + auVar126._4_4_);
    bVar64 = (byte)(int)(fVar102 + auVar120._4_4_);
    auVar127 = NEON_fmov(0x40400000,4);
    fVar102 = fVar93 * fVar93 * (auVar127._0_4_ + fVar93 * -2.0);
    fVar104 = fVar94 * fVar94 * (auVar127._4_4_ + fVar94 * -2.0);
    fVar106 = fVar95 * fVar95 * (auVar127._8_4_ + fVar95 * -2.0);
    fVar108 = fVar96 * fVar96 * (auVar127._12_4_ + fVar96 * -2.0);
    auVar121 = NEON_fmov(0xbf800000,4);
    fVar113 = auVar121._0_4_;
    fVar118 = auVar121._4_4_;
    fVar122 = auVar121._8_4_;
    fVar123 = auVar121._12_4_;
    pfVar17 = afStack_f0;
    for (; lVar16 != 0x1000; lVar16 = lVar16 + 0x400) {
      uVar29 = *(uint *)(lVar2 + ((ulong)(CONCAT14(bVar31,(int)(fVar23 + auVar126._0_4_)) &
                                         0xff000000ff) & 0xffffffff) * 4 + lVar16);
      uVar32 = *(uint *)(lVar2 + (ulong)bVar31 * 4 + lVar16);
      uVar34 = *(uint *)(lVar2 + (ulong)(byte)(int)(fVar115 + auVar126._8_4_) * 4 + lVar16);
      uVar36 = *(uint *)(lVar2 + (ulong)(byte)(int)(fVar114 + auVar126._12_4_) * 4 + lVar16);
      uVar38 = *(uint *)(lVar2 + ((ulong)(CONCAT14(bVar64,(int)(fVar23 + auVar120._0_4_)) &
                                         0xff000000ff) & 0xffffffff) * 4 + lVar16);
      uVar42 = *(uint *)(lVar2 + (ulong)bVar64 * 4 + lVar16);
      uVar44 = *(uint *)(lVar2 + (ulong)(byte)(int)(fVar115 + auVar120._8_4_) * 4 + lVar16);
      uVar46 = *(uint *)(lVar2 + (ulong)(byte)(int)(fVar114 + auVar120._12_4_) * 4 + lVar16);
      uVar48 = *(uint *)(lVar2 + (ulong)((int)(fVar101 + auVar126._0_4_) & 0xff) * 4 + lVar16);
      uVar51 = *(uint *)(lVar2 + (ulong)((int)(fVar103 + auVar126._4_4_) & 0xff) * 4 + lVar16);
      uVar52 = *(uint *)(lVar2 + (ulong)((int)(fVar105 + auVar126._8_4_) & 0xff) * 4 + lVar16);
      uVar53 = *(uint *)(lVar2 + (ulong)((int)(fVar107 + auVar126._12_4_) & 0xff) * 4 + lVar16);
      uVar4 = *(uint *)(lVar2 + ((ulong)(CONCAT14(bVar26,(int)(fVar101 + auVar120._0_4_)) &
                                        0xff000000ff) & 0xffffffff) * 4 + lVar16);
      uVar5 = *(undefined4 *)(lVar2 + (ulong)bVar26 * 4 + lVar16);
      uVar6 = *(undefined4 *)(lVar2 + (ulong)(byte)(int)(fVar105 + auVar120._8_4_) * 4 + lVar16);
      uVar7 = *(undefined4 *)(lVar2 + (ulong)(byte)(int)(fVar107 + auVar120._12_4_) * 4 + lVar16);
      auVar54._6_2_ = 0;
      auVar54._0_6_ = CONCAT15((char)(uVar32 >> 8),CONCAT14((char)uVar32,uVar29)) & 0xffff0000ffff;
      auVar54[8] = (char)uVar34;
      auVar54[9] = (char)(uVar34 >> 8);
      auVar54._10_2_ = 0;
      auVar54[0xc] = (char)uVar36;
      auVar54[0xd] = (char)(uVar36 >> 8);
      auVar54._14_2_ = 0;
      auVar30._0_4_ = uVar29 >> 0x10;
      auVar30._4_4_ = uVar32 >> 0x10;
      auVar30._8_4_ = uVar34 >> 0x10;
      auVar30._12_4_ = uVar36 >> 0x10;
      auVar55 = NEON_ucvtf(auVar54,4);
      auVar121 = NEON_ucvtf(auVar30,4);
      fVar124 = fVar97 * (fVar113 + auVar121._0_4_ * 3.0518044e-05) +
                fVar93 * (fVar113 + auVar55._0_4_ * 3.0518044e-05);
      fVar33 = fVar98 * (fVar118 + auVar121._4_4_ * 3.0518044e-05) +
               fVar94 * (fVar118 + auVar55._4_4_ * 3.0518044e-05);
      fVar35 = fVar99 * (fVar122 + auVar121._8_4_ * 3.0518044e-05) +
               fVar95 * (fVar122 + auVar55._8_4_ * 3.0518044e-05);
      fVar37 = fVar100 * (fVar123 + auVar121._12_4_ * 3.0518044e-05) +
               fVar96 * (fVar123 + auVar55._12_4_ * 3.0518044e-05);
      auVar56._6_2_ = 0;
      auVar56._0_6_ = CONCAT15((char)(uVar42 >> 8),CONCAT14((char)uVar42,uVar38)) & 0xffff0000ffff;
      auVar56[8] = (char)uVar44;
      auVar56[9] = (char)(uVar44 >> 8);
      auVar56._10_2_ = 0;
      auVar56[0xc] = (char)uVar46;
      auVar56[0xd] = (char)(uVar46 >> 8);
      auVar56._14_2_ = 0;
      auVar40._0_4_ = uVar38 >> 0x10;
      auVar40._4_4_ = uVar42 >> 0x10;
      auVar40._8_4_ = uVar44 >> 0x10;
      auVar40._12_4_ = uVar46 >> 0x10;
      auVar55 = NEON_ucvtf(auVar56,4);
      auVar121 = NEON_ucvtf(auVar40,4);
      fVar124 = fVar124 + fVar102 * ((fVar97 * (fVar113 + auVar121._0_4_ * 3.0518044e-05) +
                                     (fVar93 + fVar113) * (fVar113 + auVar55._0_4_ * 3.0518044e-05))
                                    - fVar124);
      fVar33 = fVar33 + fVar104 * ((fVar98 * (fVar118 + auVar121._4_4_ * 3.0518044e-05) +
                                   (fVar94 + fVar118) * (fVar118 + auVar55._4_4_ * 3.0518044e-05)) -
                                  fVar33);
      fVar35 = fVar35 + fVar106 * ((fVar99 * (fVar122 + auVar121._8_4_ * 3.0518044e-05) +
                                   (fVar95 + fVar122) * (fVar122 + auVar55._8_4_ * 3.0518044e-05)) -
                                  fVar35);
      fVar37 = fVar37 + fVar108 * ((fVar100 * (fVar123 + auVar121._12_4_ * 3.0518044e-05) +
                                   (fVar96 + fVar123) * (fVar123 + auVar55._12_4_ * 3.0518044e-05))
                                  - fVar37);
      auVar41._6_2_ = 0;
      auVar41._0_6_ = CONCAT15((char)(uVar51 >> 8),CONCAT14((char)uVar51,uVar48)) & 0xffff0000ffff;
      auVar41[8] = (char)uVar52;
      auVar41[9] = (char)(uVar52 >> 8);
      auVar41._10_2_ = 0;
      auVar41[0xc] = (char)uVar53;
      auVar41[0xd] = (char)(uVar53 >> 8);
      auVar41._14_2_ = 0;
      auVar49._0_4_ = uVar48 >> 0x10;
      auVar49._4_4_ = uVar51 >> 0x10;
      auVar49._8_4_ = uVar52 >> 0x10;
      auVar49._12_4_ = uVar53 >> 0x10;
      auVar121 = NEON_ucvtf(auVar41,4);
      auVar55 = NEON_ucvtf(auVar49,4);
      fVar39 = (fVar97 + fVar113) * (fVar113 + auVar55._0_4_ * 3.0518044e-05) +
               fVar93 * (fVar113 + auVar121._0_4_ * 3.0518044e-05);
      fVar43 = (fVar98 + fVar118) * (fVar118 + auVar55._4_4_ * 3.0518044e-05) +
               fVar94 * (fVar118 + auVar121._4_4_ * 3.0518044e-05);
      fVar45 = (fVar99 + fVar122) * (fVar122 + auVar55._8_4_ * 3.0518044e-05) +
               fVar95 * (fVar122 + auVar121._8_4_ * 3.0518044e-05);
      fVar47 = (fVar100 + fVar123) * (fVar123 + auVar55._12_4_ * 3.0518044e-05) +
               fVar96 * (fVar123 + auVar121._12_4_ * 3.0518044e-05);
      auVar50._6_2_ = 0;
      auVar50._0_6_ =
           CONCAT15((char)((uint)uVar5 >> 8),CONCAT14((char)uVar5,uVar4)) & 0xffff0000ffff;
      auVar50[8] = (char)uVar6;
      auVar50[9] = (char)((uint)uVar6 >> 8);
      auVar50._10_2_ = 0;
      auVar50[0xc] = (char)uVar7;
      auVar50[0xd] = (char)((uint)uVar7 >> 8);
      auVar50._14_2_ = 0;
      auVar121 = NEON_ucvtf(auVar50,4);
      auVar55[4] = (char)((uint)uVar5 >> 0x10);
      auVar55._0_4_ = uVar4 >> 0x10;
      auVar55[5] = (char)((uint)uVar5 >> 0x18);
      auVar55._6_2_ = 0;
      auVar55[8] = (char)((uint)uVar6 >> 0x10);
      auVar55[9] = (char)((uint)uVar6 >> 0x18);
      auVar55._10_2_ = 0;
      auVar55[0xc] = (char)((uint)uVar7 >> 0x10);
      auVar55[0xd] = (char)((uint)uVar7 >> 0x18);
      auVar55._14_2_ = 0;
      auVar55 = NEON_ucvtf(auVar55,4);
      pfVar17[2] = fVar35 + fVar99 * fVar99 * (auVar127._8_4_ + fVar99 * -2.0) *
                            ((fVar45 + fVar106 * (((fVar99 + fVar122) *
                                                   (fVar122 + auVar55._8_4_ * 3.0518044e-05) +
                                                  (fVar95 + fVar122) *
                                                  (fVar122 + auVar121._8_4_ * 3.0518044e-05)) -
                                                 fVar45)) - fVar35);
      pfVar17[3] = fVar37 + fVar100 * fVar100 * (auVar127._12_4_ + fVar100 * -2.0) *
                            ((fVar47 + fVar108 * (((fVar100 + fVar123) *
                                                   (fVar123 + auVar55._12_4_ * 3.0518044e-05) +
                                                  (fVar96 + fVar123) *
                                                  (fVar123 + auVar121._12_4_ * 3.0518044e-05)) -
                                                 fVar47)) - fVar37);
      *pfVar17 = fVar124 + fVar97 * fVar97 * (auVar127._0_4_ + fVar97 * -2.0) *
                           ((fVar39 + fVar102 * (((fVar97 + fVar113) *
                                                  (fVar113 + auVar55._0_4_ * 3.0518044e-05) +
                                                 (fVar93 + fVar113) *
                                                 (fVar113 + auVar121._0_4_ * 3.0518044e-05)) -
                                                fVar39)) - fVar124);
      pfVar17[1] = fVar33 + fVar98 * fVar98 * (auVar127._4_4_ + fVar98 * -2.0) *
                            ((fVar43 + fVar104 * (((fVar98 + fVar118) *
                                                   (fVar118 + auVar55._4_4_ * 3.0518044e-05) +
                                                  (fVar94 + fVar118) *
                                                  (fVar118 + auVar121._4_4_ * 3.0518044e-05)) -
                                                 fVar43)) - fVar33);
      pfVar17 = pfVar17 + 4;
    }
    fVar57 = fVar57 + fVar57;
    fVar58 = fVar58 + fVar58;
    fVar59 = fVar59 + fVar59;
    fVar19 = fVar19 + fVar19;
    fVar60 = fVar60 + fVar60;
    fVar61 = fVar61 + fVar61;
    fVar62 = fVar62 + fVar62;
    fVar21 = fVar21 + fVar21;
    fVar63 = fVar63 + fVar63;
    fVar65 = fVar65 + fVar65;
    fVar69 = fVar69 + fVar69;
    fVar73 = fVar73 + fVar73;
    fVar77 = fVar77 + fVar77;
    fVar81 = fVar81 + fVar81;
    fVar85 = fVar85 + fVar85;
    fVar89 = fVar89 + fVar89;
  }
  puVar12 = (undefined8 *)(param_1 + 0x10);
  UNRECOVERED_JUMPTABLE = (code *)*puVar12;
  func_0x0001083757a0(uStack_a8);
  auVar22._8_8_ = extraout_var_06;
  auVar22._0_8_ = extraout_d3;
  auVar20._8_8_ = extraout_var_05;
  auVar20._0_8_ = extraout_d2;
  auVar18._8_8_ = extraout_var_03;
  auVar18._0_8_ = extraout_d1;
  auVar128._8_8_ = extraout_var_00;
  auVar128._0_8_ = extraout_d0;
  if (extraout_x9_00 == extraout_x8_00) {
    auVar128 = NEON_fmax(auVar128,ZEXT216(0),4);
    auVar120 = NEON_fmov(0x3f800000,4);
    NEON_fmin(auVar128,auVar120,4);
    auVar128 = NEON_fmax(auVar18,ZEXT216(0),4);
    NEON_fmin(auVar128,auVar120,4);
    auVar128 = NEON_fmax(auVar20,ZEXT216(0),4);
    NEON_fmin(auVar128,auVar120,4);
    auVar128 = NEON_fmax(auVar22,ZEXT216(0),4);
    NEON_fmin(auVar128,auVar120,4);
                    /* WARNING: Could not recover jumptable at 0x0001083711f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  auVar128 = ___stack_chk_fail();
  puVar14 = (undefined8 *)puVar12[1];
  puVar14[1] = extraout_var_01;
  *puVar14 = auVar128._0_8_;
  puVar14[9] = extraout_var_04;
  puVar14[8] = auVar128._8_8_;
                    /* WARNING: Could not recover jumptable at 0x000108375560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar12[2])();
  return;
}



/* Entry: 1083711f8; end: 108371d0f;  */

void FUN_1083711f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[1] = in_register_00005008;
  *puVar1 = param_1;
  puVar1[9] = in_register_00005028;
  puVar1[8] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000108375560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))();
  return;
}



/* Entry: 108371d10; end: 108371f2f;  */

void FUN_108371d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  
  puVar1 = *(undefined8 **)(param_9 + 8);
  fVar118 = *(float *)(puVar1 + 10);
  fVar119 = *(float *)((long)puVar1 + 0x54);
  fVar120 = *(float *)(puVar1 + 0xb);
  fVar121 = *(float *)((long)puVar1 + 0x5c);
  fVar106 = (float)*puVar1;
  fVar107 = (float)((ulong)*puVar1 >> 0x20);
  fVar108 = (float)puVar1[1];
  fVar109 = (float)((ulong)puVar1[1] >> 0x20);
  fVar98 = (float)puVar1[2];
  fVar114 = (float)puVar1[8];
  fVar99 = (float)((ulong)puVar1[2] >> 0x20);
  fVar115 = (float)((ulong)puVar1[8] >> 0x20);
  fVar100 = (float)puVar1[3];
  fVar116 = (float)puVar1[9];
  fVar101 = (float)((ulong)puVar1[3] >> 0x20);
  fVar117 = (float)((ulong)puVar1[9] >> 0x20);
  fVar45 = fVar106 * fVar118 - fVar114 * fVar98;
  fVar46 = fVar107 * fVar119 - fVar115 * fVar99;
  fVar47 = fVar108 * fVar120 - fVar116 * fVar100;
  fVar48 = fVar109 * fVar121 - fVar117 * fVar101;
  fVar110 = (float)puVar1[0xe];
  fVar111 = (float)((ulong)puVar1[0xe] >> 0x20);
  fVar112 = (float)puVar1[0xf];
  fVar113 = (float)((ulong)puVar1[0xf] >> 0x20);
  fVar94 = (float)puVar1[6];
  fVar95 = (float)((ulong)puVar1[6] >> 0x20);
  fVar96 = (float)puVar1[7];
  fVar97 = (float)((ulong)puVar1[7] >> 0x20);
  fVar53 = fVar106 * fVar110 - fVar114 * fVar94;
  fVar54 = fVar107 * fVar111 - fVar115 * fVar95;
  fVar55 = fVar108 * fVar112 - fVar116 * fVar96;
  fVar56 = fVar109 * fVar113 - fVar117 * fVar97;
  fVar102 = (float)puVar1[0xc];
  fVar103 = (float)((ulong)puVar1[0xc] >> 0x20);
  fVar104 = (float)puVar1[0xd];
  fVar105 = (float)((ulong)puVar1[0xd] >> 0x20);
  fVar90 = (float)puVar1[4];
  fVar91 = (float)((ulong)puVar1[4] >> 0x20);
  fVar92 = (float)puVar1[5];
  fVar93 = (float)((ulong)puVar1[5] >> 0x20);
  fVar31 = fVar98 * fVar102 - fVar118 * fVar90;
  fVar32 = fVar99 * fVar103 - fVar119 * fVar91;
  fVar33 = fVar100 * fVar104 - fVar120 * fVar92;
  fVar34 = fVar101 * fVar105 - fVar121 * fVar93;
  fVar18 = fVar90 * fVar110 - fVar102 * fVar94;
  fVar19 = fVar91 * fVar111 - fVar103 * fVar95;
  fVar20 = fVar92 * fVar112 - fVar104 * fVar96;
  fVar21 = fVar93 * fVar113 - fVar105 * fVar97;
  fVar74 = (float)puVar1[0x10];
  fVar86 = (float)puVar1[0x1a];
  fVar75 = (float)((ulong)puVar1[0x10] >> 0x20);
  fVar87 = (float)((ulong)puVar1[0x1a] >> 0x20);
  fVar76 = (float)puVar1[0x11];
  fVar88 = (float)puVar1[0x1b];
  fVar77 = (float)((ulong)puVar1[0x11] >> 0x20);
  fVar89 = (float)((ulong)puVar1[0x1b] >> 0x20);
  fVar66 = (float)puVar1[0x12];
  fVar82 = (float)puVar1[0x18];
  fVar67 = (float)((ulong)puVar1[0x12] >> 0x20);
  fVar83 = (float)((ulong)puVar1[0x18] >> 0x20);
  fVar68 = (float)puVar1[0x13];
  fVar84 = (float)puVar1[0x19];
  fVar69 = (float)((ulong)puVar1[0x13] >> 0x20);
  fVar85 = (float)((ulong)puVar1[0x19] >> 0x20);
  fVar22 = fVar74 * fVar86 - fVar82 * fVar66;
  fVar23 = fVar75 * fVar87 - fVar83 * fVar67;
  fVar24 = fVar76 * fVar88 - fVar84 * fVar68;
  fVar25 = fVar77 * fVar89 - fVar85 * fVar69;
  fVar78 = (float)puVar1[0x1e];
  fVar79 = (float)((ulong)puVar1[0x1e] >> 0x20);
  fVar80 = (float)puVar1[0x1f];
  fVar81 = (float)((ulong)puVar1[0x1f] >> 0x20);
  fVar62 = (float)puVar1[0x16];
  fVar63 = (float)((ulong)puVar1[0x16] >> 0x20);
  fVar64 = (float)puVar1[0x17];
  fVar65 = (float)((ulong)puVar1[0x17] >> 0x20);
  fVar41 = fVar74 * fVar78 - fVar82 * fVar62;
  fVar42 = fVar75 * fVar79 - fVar83 * fVar63;
  fVar43 = fVar76 * fVar80 - fVar84 * fVar64;
  fVar44 = fVar77 * fVar81 - fVar85 * fVar65;
  fVar70 = (float)puVar1[0x1c];
  fVar71 = (float)((ulong)puVar1[0x1c] >> 0x20);
  fVar72 = (float)puVar1[0x1d];
  fVar73 = (float)((ulong)puVar1[0x1d] >> 0x20);
  fVar2 = (float)puVar1[0x14];
  fVar4 = (float)((ulong)puVar1[0x14] >> 0x20);
  fVar6 = (float)puVar1[0x15];
  fVar8 = (float)((ulong)puVar1[0x15] >> 0x20);
  fVar49 = fVar66 * fVar70 - fVar86 * fVar2;
  fVar50 = fVar67 * fVar71 - fVar87 * fVar4;
  fVar51 = fVar68 * fVar72 - fVar88 * fVar6;
  fVar52 = fVar69 * fVar73 - fVar89 * fVar8;
  fVar14 = fVar2 * fVar78 - fVar70 * fVar62;
  fVar15 = fVar4 * fVar79 - fVar71 * fVar63;
  fVar16 = fVar6 * fVar80 - fVar72 * fVar64;
  fVar17 = fVar8 * fVar81 - fVar73 * fVar65;
  fVar37 = fVar106 * fVar102 - fVar114 * fVar90;
  fVar38 = fVar107 * fVar103 - fVar115 * fVar91;
  fVar39 = fVar108 * fVar104 - fVar116 * fVar92;
  fVar40 = fVar109 * fVar105 - fVar117 * fVar93;
  fVar57 = fVar98 * fVar110 - fVar118 * fVar94;
  fVar58 = fVar99 * fVar111 - fVar119 * fVar95;
  fVar59 = fVar100 * fVar112 - fVar120 * fVar96;
  fVar60 = fVar101 * fVar113 - fVar121 * fVar97;
  fVar26 = fVar74 * fVar70 - fVar82 * fVar2;
  fVar27 = fVar75 * fVar71 - fVar83 * fVar4;
  fVar28 = fVar76 * fVar72 - fVar84 * fVar6;
  fVar29 = fVar77 * fVar73 - fVar85 * fVar8;
  fVar10 = fVar66 * fVar78 - fVar86 * fVar62;
  fVar11 = fVar67 * fVar79 - fVar87 * fVar63;
  fVar12 = fVar68 * fVar80 - fVar88 * fVar64;
  fVar13 = fVar69 * fVar81 - fVar89 * fVar65;
  auVar30._0_4_ =
       (fVar18 * fVar22 + fVar14 * fVar45 + fVar31 * fVar41 + fVar49 * fVar53) -
       (fVar57 * fVar26 + fVar10 * fVar37);
  auVar30._4_4_ =
       (fVar19 * fVar23 + fVar15 * fVar46 + fVar32 * fVar42 + fVar50 * fVar54) -
       (fVar58 * fVar27 + fVar11 * fVar38);
  auVar30._8_4_ =
       (fVar20 * fVar24 + fVar16 * fVar47 + fVar33 * fVar43 + fVar51 * fVar55) -
       (fVar59 * fVar28 + fVar12 * fVar39);
  auVar30._12_4_ =
       (fVar21 * fVar25 + fVar17 * fVar48 + fVar34 * fVar44 + fVar52 * fVar56) -
       (fVar60 * fVar29 + fVar13 * fVar40);
  auVar35 = NEON_frecpe(auVar30,4);
  auVar61 = NEON_frecps(auVar30,auVar35,4);
  auVar36._0_4_ = auVar35._0_4_ * auVar61._0_4_;
  auVar36._4_4_ = auVar35._4_4_ * auVar61._4_4_;
  auVar36._8_4_ = auVar35._8_4_ * auVar61._8_4_;
  auVar36._12_4_ = auVar35._12_4_ * auVar61._12_4_;
  auVar30 = NEON_frecps(auVar30,auVar36,4);
  fVar3 = auVar30._0_4_ * auVar36._0_4_;
  fVar5 = auVar30._4_4_ * auVar36._4_4_;
  fVar7 = auVar30._8_4_ * auVar36._8_4_;
  fVar9 = auVar30._12_4_ * auVar36._12_4_;
  fVar45 = fVar45 * fVar3;
  fVar46 = fVar46 * fVar5;
  fVar47 = fVar47 * fVar7;
  fVar48 = fVar48 * fVar9;
  fVar37 = fVar37 * fVar3;
  fVar38 = fVar38 * fVar5;
  fVar39 = fVar39 * fVar7;
  fVar40 = fVar40 * fVar9;
  fVar53 = fVar53 * fVar3;
  fVar54 = fVar54 * fVar5;
  fVar55 = fVar55 * fVar7;
  fVar56 = fVar56 * fVar9;
  fVar31 = fVar31 * fVar3;
  fVar32 = fVar32 * fVar5;
  fVar33 = fVar33 * fVar7;
  fVar34 = fVar34 * fVar9;
  fVar57 = fVar57 * fVar3;
  fVar58 = fVar58 * fVar5;
  fVar59 = fVar59 * fVar7;
  fVar60 = fVar60 * fVar9;
  fVar18 = fVar18 * fVar3;
  fVar19 = fVar19 * fVar5;
  fVar20 = fVar20 * fVar7;
  fVar21 = fVar21 * fVar9;
  fVar22 = fVar22 * fVar3;
  fVar23 = fVar23 * fVar5;
  fVar24 = fVar24 * fVar7;
  fVar25 = fVar25 * fVar9;
  fVar26 = fVar26 * fVar3;
  fVar27 = fVar27 * fVar5;
  fVar28 = fVar28 * fVar7;
  fVar29 = fVar29 * fVar9;
  fVar41 = fVar41 * fVar3;
  fVar42 = fVar42 * fVar5;
  fVar43 = fVar43 * fVar7;
  fVar44 = fVar44 * fVar9;
  fVar49 = fVar49 * fVar3;
  fVar50 = fVar50 * fVar5;
  fVar51 = fVar51 * fVar7;
  fVar52 = fVar52 * fVar9;
  fVar10 = fVar10 * fVar3;
  fVar11 = fVar11 * fVar5;
  fVar12 = fVar12 * fVar7;
  fVar13 = fVar13 * fVar9;
  fVar14 = fVar14 * fVar3;
  fVar15 = fVar15 * fVar5;
  fVar16 = fVar16 * fVar7;
  fVar17 = fVar17 * fVar9;
  puVar1[1] = CONCAT44((fVar121 * fVar17 - fVar13 * fVar105) + fVar52 * fVar113,
                       (fVar120 * fVar16 - fVar12 * fVar104) + fVar51 * fVar112);
  *puVar1 = CONCAT44((fVar119 * fVar15 - fVar11 * fVar103) + fVar50 * fVar111,
                     (fVar118 * fVar14 - fVar10 * fVar102) + fVar49 * fVar110);
  puVar1[3] = CONCAT44((fVar93 * fVar13 - fVar17 * fVar101) - fVar52 * fVar97,
                       (fVar92 * fVar12 - fVar16 * fVar100) - fVar51 * fVar96);
  puVar1[2] = CONCAT44((fVar91 * fVar11 - fVar15 * fVar99) - fVar50 * fVar95,
                       (fVar90 * fVar10 - fVar14 * fVar98) - fVar49 * fVar94);
  *(float *)(puVar1 + 5) = (fVar88 * fVar20 - fVar59 * fVar72) + fVar33 * fVar80;
  *(float *)((long)puVar1 + 0x2c) = (fVar89 * fVar21 - fVar60 * fVar73) + fVar34 * fVar81;
  *(float *)(puVar1 + 4) = (fVar86 * fVar18 - fVar57 * fVar70) + fVar31 * fVar78;
  *(float *)((long)puVar1 + 0x24) = (fVar87 * fVar19 - fVar58 * fVar71) + fVar32 * fVar79;
  puVar1[7] = CONCAT44((fVar8 * fVar60 - fVar21 * fVar69) - fVar34 * fVar65,
                       (fVar6 * fVar59 - fVar20 * fVar68) - fVar33 * fVar64);
  puVar1[6] = CONCAT44((fVar4 * fVar58 - fVar19 * fVar67) - fVar32 * fVar63,
                       (fVar2 * fVar57 - fVar18 * fVar66) - fVar31 * fVar62);
  puVar1[9] = CONCAT44((fVar105 * fVar44 - fVar17 * fVar117) - fVar29 * fVar113,
                       (fVar104 * fVar43 - fVar16 * fVar116) - fVar28 * fVar112);
  puVar1[8] = CONCAT44((fVar103 * fVar42 - fVar15 * fVar115) - fVar27 * fVar111,
                       (fVar102 * fVar41 - fVar14 * fVar114) - fVar26 * fVar110);
  puVar1[0xb] = CONCAT44((fVar109 * fVar17 - fVar44 * fVar93) + fVar29 * fVar97,
                         (fVar108 * fVar16 - fVar43 * fVar92) + fVar28 * fVar96);
  puVar1[10] = CONCAT44((fVar107 * fVar15 - fVar42 * fVar91) + fVar27 * fVar95,
                        (fVar106 * fVar14 - fVar41 * fVar90) + fVar26 * fVar94);
  puVar1[0xd] = CONCAT44((fVar73 * fVar56 - fVar21 * fVar85) - fVar40 * fVar81,
                         (fVar72 * fVar55 - fVar20 * fVar84) - fVar39 * fVar80);
  puVar1[0xc] = CONCAT44((fVar71 * fVar54 - fVar19 * fVar83) - fVar38 * fVar79,
                         (fVar70 * fVar53 - fVar18 * fVar82) - fVar37 * fVar78);
  puVar1[0xf] = CONCAT44((fVar77 * fVar21 - fVar56 * fVar8) + fVar40 * fVar65,
                         (fVar76 * fVar20 - fVar55 * fVar6) + fVar39 * fVar64);
  puVar1[0xe] = CONCAT44((fVar75 * fVar19 - fVar54 * fVar4) + fVar38 * fVar63,
                         (fVar74 * fVar18 - fVar53 * fVar2) + fVar37 * fVar62);
  puVar1[0x11] = CONCAT44((fVar117 * fVar13 - fVar44 * fVar121) + fVar25 * fVar113,
                          (fVar116 * fVar12 - fVar43 * fVar120) + fVar24 * fVar112);
  puVar1[0x10] = CONCAT44((fVar115 * fVar11 - fVar42 * fVar119) + fVar23 * fVar111,
                          (fVar114 * fVar10 - fVar41 * fVar118) + fVar22 * fVar110);
  puVar1[0x13] = CONCAT44((fVar101 * fVar44 - fVar13 * fVar109) - fVar25 * fVar97,
                          (fVar100 * fVar43 - fVar12 * fVar108) - fVar24 * fVar96);
  puVar1[0x12] = CONCAT44((fVar99 * fVar42 - fVar11 * fVar107) - fVar23 * fVar95,
                          (fVar98 * fVar41 - fVar10 * fVar106) - fVar22 * fVar94);
  puVar1[0x15] = CONCAT44((fVar85 * fVar60 - fVar56 * fVar89) + fVar48 * fVar81,
                          (fVar84 * fVar59 - fVar55 * fVar88) + fVar47 * fVar80);
  puVar1[0x14] = CONCAT44((fVar83 * fVar58 - fVar54 * fVar87) + fVar46 * fVar79,
                          (fVar82 * fVar57 - fVar53 * fVar86) + fVar45 * fVar78);
  puVar1[0x17] = CONCAT44((fVar69 * fVar56 - fVar60 * fVar77) - fVar48 * fVar65,
                          (fVar68 * fVar55 - fVar59 * fVar76) - fVar47 * fVar64);
  puVar1[0x16] = CONCAT44((fVar67 * fVar54 - fVar58 * fVar75) - fVar46 * fVar63,
                          (fVar66 * fVar53 - fVar57 * fVar74) - fVar45 * fVar62);
  puVar1[0x19] = CONCAT44((fVar121 * fVar29 - fVar52 * fVar117) - fVar25 * fVar105,
                          (fVar120 * fVar28 - fVar51 * fVar116) - fVar24 * fVar104);
  puVar1[0x18] = CONCAT44((fVar119 * fVar27 - fVar50 * fVar115) - fVar23 * fVar103,
                          (fVar118 * fVar26 - fVar49 * fVar114) - fVar22 * fVar102);
  puVar1[0x1b] = CONCAT44((fVar109 * fVar52 - fVar29 * fVar101) + fVar25 * fVar93,
                          (fVar108 * fVar51 - fVar28 * fVar100) + fVar24 * fVar92);
  puVar1[0x1a] = CONCAT44((fVar107 * fVar50 - fVar27 * fVar99) + fVar23 * fVar91,
                          (fVar106 * fVar49 - fVar26 * fVar98) + fVar22 * fVar90);
  puVar1[0x1d] = CONCAT44((fVar89 * fVar40 - fVar34 * fVar85) - fVar48 * fVar73,
                          (fVar88 * fVar39 - fVar33 * fVar84) - fVar47 * fVar72);
  puVar1[0x1c] = CONCAT44((fVar87 * fVar38 - fVar32 * fVar83) - fVar46 * fVar71,
                          (fVar86 * fVar37 - fVar31 * fVar82) - fVar45 * fVar70);
  puVar1[0x1f] = CONCAT44((fVar77 * fVar34 - fVar40 * fVar69) + fVar48 * fVar8,
                          (fVar76 * fVar33 - fVar39 * fVar68) + fVar47 * fVar6);
  puVar1[0x1e] = CONCAT44((fVar75 * fVar32 - fVar38 * fVar67) + fVar46 * fVar4,
                          (fVar74 * fVar31 - fVar37 * fVar66) + fVar45 * fVar2);
                    /* WARNING: Could not recover jumptable at 0x000108371f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_9 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 108371f30; end: 10837238b;  */

void FUN_108371f30(long param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  auVar2 = NEON_fmov(0x3e800000,4);
  fVar3 = auVar2._0_4_ + (float)*puVar1 * -0.15915494;
  fVar4 = auVar2._4_4_ + (float)((ulong)*puVar1 >> 0x20) * -0.15915494;
  fVar5 = auVar2._8_4_ + (float)puVar1[1] * -0.15915494;
  fVar6 = auVar2._12_4_ + (float)((ulong)puVar1[1] >> 0x20) * -0.15915494;
  fVar3 = auVar2._0_4_ - ABS(fVar3 - (float)(int)(fVar3 + 0.5));
  fVar4 = auVar2._4_4_ - ABS(fVar4 - (float)(int)(fVar4 + 0.5));
  fVar5 = auVar2._8_4_ - ABS(fVar5 - (float)(int)(fVar5 + 0.5));
  fVar6 = auVar2._12_4_ - ABS(fVar6 - (float)(int)(fVar6 + 0.5));
  puVar1[1] = CONCAT44(fVar6 * (fVar6 * fVar6 * (fVar6 * fVar6 * 74.43889 + -41.16937) + 6.2823086),
                       fVar5 * (fVar5 * fVar5 * (fVar5 * fVar5 * 74.43889 + -41.16937) + 6.2823086))
  ;
  *puVar1 = CONCAT44(fVar4 * (fVar4 * fVar4 * (fVar4 * fVar4 * 74.43889 + -41.16937) + 6.2823086),
                     fVar3 * (fVar3 * fVar3 * (fVar3 * fVar3 * 74.43889 + -41.16937) + 6.2823086));
                    /* WARNING: Could not recover jumptable at 0x0001083752cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10837238c; end: 1083724b3;  */

void FUN_10837238c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar11 [16];
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar7 = *(ulong *)(param_1 + 8) >> 0x20;
  uVar8 = *(ulong *)(param_1 + 8) & 0xffffffff;
  auVar17 = NEON_fmov(0x3f800000,4);
  uVar9 = uVar7;
  do {
    auVar18 = *(undefined1 (*) [16])(param_4 + uVar8);
    pfVar1 = (float *)(param_4 + uVar9);
    iVar2 = -(uint)(auVar18._0_4_ == 0.0);
    iVar3 = -(uint)(auVar18._4_4_ == 0.0);
    iVar4 = -(uint)(auVar18._8_4_ == 0.0);
    iVar5 = -(uint)(auVar18._12_4_ == 0.0);
    iVar10 = -(uint)(auVar18._0_4_ == auVar17._0_4_);
    iVar12 = -(uint)(auVar18._4_4_ == auVar17._4_4_);
    iVar13 = -(uint)(auVar18._8_4_ == auVar17._8_4_);
    iVar14 = -(uint)(auVar18._12_4_ == auVar17._12_4_);
    auVar11 = NEON_scvtf(auVar18,4);
    uVar15 = (uint)(auVar18._0_3_ & 0x7fffff);
    uVar16 = (uint)(auVar18._8_3_ & 0x7fffff);
    fVar19 = (float)(uVar15 | 0x3f000000);
    fVar22 = (float)((uint3)(CONCAT16(auVar18[6],CONCAT15(auVar18[5],CONCAT14(auVar18[4],uVar15)))
                            >> 0x20) & 0x7fffff | 0x3f000000);
    fVar23 = (float)(uVar16 | 0x3f000000);
    fVar24 = (float)((uint3)(CONCAT16(auVar18[0xe],
                                      CONCAT15(auVar18[0xd],CONCAT14(auVar18[0xc],uVar16))) >> 0x20)
                     & 0x7fffff | 0x3f000000);
    fVar19 = *pfVar1 * (auVar11._0_4_ * 1.1920929e-07 + -124.22552 + fVar19 * -1.4980303 +
                       -1.72588 / (fVar19 + 0.35208872));
    fVar22 = pfVar1[1] *
             (auVar11._4_4_ * 1.1920929e-07 + -124.22552 + fVar22 * -1.4980303 +
             -1.72588 / (fVar22 + 0.35208872));
    fVar23 = pfVar1[2] *
             (auVar11._8_4_ * 1.1920929e-07 + -124.22552 + fVar23 * -1.4980303 +
             -1.72588 / (fVar23 + 0.35208872));
    fVar24 = pfVar1[3] *
             (auVar11._12_4_ * 1.1920929e-07 + -124.22552 + fVar24 * -1.4980303 +
             -1.72588 / (fVar24 + 0.35208872));
    auVar20._0_4_ =
         (fVar19 + 121.274055 + (fVar19 - (float)(int)fVar19) * -1.4901291 +
         27.728024 / (4.8425255 - (fVar19 - (float)(int)fVar19))) * 8388608.0;
    auVar20._4_4_ =
         (fVar22 + 121.274055 + (fVar22 - (float)(int)fVar22) * -1.4901291 +
         27.728024 / (4.8425255 - (fVar22 - (float)(int)fVar22))) * 8388608.0;
    auVar20._8_4_ =
         (fVar23 + 121.274055 + (fVar23 - (float)(int)fVar23) * -1.4901291 +
         27.728024 / (4.8425255 - (fVar23 - (float)(int)fVar23))) * 8388608.0;
    auVar20._12_4_ =
         (fVar24 + 121.274055 + (fVar24 - (float)(int)fVar24) * -1.4901291 +
         27.728024 / (4.8425255 - (fVar24 - (float)(int)fVar24))) * 8388608.0;
    auVar11 = NEON_fmax(auVar20,ZEXT216(0),4);
    auVar6._8_4_ = 0x4eff0000;
    auVar6._0_8_ = 0x4eff00004eff0000;
    auVar6._12_4_ = 0x4eff0000;
    auVar11 = NEON_fmin(auVar11,auVar6,4);
    auVar21._0_4_ = (int)auVar11._0_4_;
    auVar21._4_4_ = (int)auVar11._4_4_;
    auVar21._8_4_ = (int)auVar11._8_4_;
    auVar21._12_4_ = (int)auVar11._12_4_;
    auVar11[1] = ~(byte)((uint)iVar2 >> 8) & ~(byte)((uint)iVar10 >> 8);
    auVar11[0] = ~(byte)iVar2 & ~(byte)iVar10;
    auVar11[2] = ~(byte)((uint)iVar2 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    auVar11[3] = ~(byte)((uint)iVar2 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    auVar11[4] = ~(byte)iVar3 & ~(byte)iVar12;
    auVar11[5] = ~(byte)((uint)iVar3 >> 8) & ~(byte)((uint)iVar12 >> 8);
    auVar11[6] = ~(byte)((uint)iVar3 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
    auVar11[7] = ~(byte)((uint)iVar3 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
    auVar11[8] = ~(byte)iVar4 & ~(byte)iVar13;
    auVar11[9] = ~(byte)((uint)iVar4 >> 8) & ~(byte)((uint)iVar13 >> 8);
    auVar11[10] = ~(byte)((uint)iVar4 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
    auVar11[0xb] = ~(byte)((uint)iVar4 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
    auVar11[0xc] = ~(byte)iVar5 & ~(byte)iVar14;
    auVar11[0xd] = ~(byte)((uint)iVar5 >> 8) & ~(byte)((uint)iVar14 >> 8);
    auVar11[0xe] = ~(byte)((uint)iVar5 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
    auVar11[0xf] = ~(byte)((uint)iVar5 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
    auVar18 = auVar18 ^ (auVar18 ^ auVar21) & auVar11;
    ((undefined8 *)(param_4 + uVar8))[1] = auVar18._8_8_;
    *(undefined8 *)(param_4 + uVar8) = auVar18._0_8_;
    uVar9 = uVar9 + 0x10;
    uVar8 = uVar8 + 0x10;
  } while (uVar7 != uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001083724b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 1083724b4; end: 108374733;  */

void FUN_1083724b4(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pfVar1 = *(float **)(param_1 + 8);
  fVar2 = *pfVar1 * 1.442695;
  fVar5 = pfVar1[1] * 1.442695;
  fVar6 = pfVar1[2] * 1.442695;
  fVar7 = pfVar1[3] * 1.442695;
  auVar3._0_4_ = (fVar2 + 121.274055 + (fVar2 - (float)(int)fVar2) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar2 - (float)(int)fVar2))) * 8388608.0;
  auVar3._4_4_ = (fVar5 + 121.274055 + (fVar5 - (float)(int)fVar5) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar5 - (float)(int)fVar5))) * 8388608.0;
  auVar3._8_4_ = (fVar6 + 121.274055 + (fVar6 - (float)(int)fVar6) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar6 - (float)(int)fVar6))) * 8388608.0;
  auVar3._12_4_ =
       (fVar7 + 121.274055 + (fVar7 - (float)(int)fVar7) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar7 - (float)(int)fVar7))) * 8388608.0;
  auVar3 = NEON_fmax(auVar3,ZEXT216(0),4);
  auVar4._8_4_ = 0x4eff0000;
  auVar4._0_8_ = 0x4eff00004eff0000;
  auVar4._12_4_ = 0x4eff0000;
  auVar4 = NEON_fmin(auVar3,auVar4,4);
  pfVar1[2] = (float)(int)auVar4._8_4_;
  pfVar1[3] = (float)(int)auVar4._12_4_;
  *pfVar1 = (float)(int)auVar4._0_4_;
  pfVar1[1] = (float)(int)auVar4._4_4_;
                    /* WARNING: Could not recover jumptable at 0x0001083752cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 108374734; end: 10837476f;  */

void FUN_108374734(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001083752fc();
  func_0x0001083757b0();
  if (extraout_w9 != 0) {
    func_0x000108375a50();
    func_0x000108375420(*(undefined8 *)(extraout_x8 + 0x10));
    func_0x0001083757cc();
  }
  func_0x000108375298();
                    /* WARNING: Could not recover jumptable at 0x000108375534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108374770; end: 10837487f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010837487c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_108374770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  undefined8 in_register_00005068;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001083752fc();
  puVar10 = *(undefined8 **)(param_9 + 8);
  uVar7 = ((undefined8 *)*puVar10)[1];
  uVar6 = *(undefined8 *)*puVar10;
  bVar12 = (byte)uVar6 & (byte)param_4;
  bVar13 = (byte)((ulong)uVar6 >> 8) & (byte)((ulong)param_4 >> 8);
  bVar14 = (byte)((ulong)uVar6 >> 0x10) & (byte)((ulong)param_4 >> 0x10);
  bVar15 = (byte)((ulong)uVar6 >> 0x18) & (byte)((ulong)param_4 >> 0x18);
  bVar16 = (byte)((ulong)uVar6 >> 0x20) & (byte)((ulong)param_4 >> 0x20);
  bVar17 = (byte)((ulong)uVar6 >> 0x28) & (byte)((ulong)param_4 >> 0x28);
  bVar18 = (byte)((ulong)uVar6 >> 0x30) & (byte)((ulong)param_4 >> 0x30);
  bVar19 = (byte)((ulong)uVar6 >> 0x38) & (byte)((ulong)param_4 >> 0x38);
  bVar20 = (byte)uVar7 & (byte)in_register_00005068;
  bVar21 = (byte)((ulong)uVar7 >> 8) & (byte)((ulong)in_register_00005068 >> 8);
  bVar22 = (byte)((ulong)uVar7 >> 0x10) & (byte)((ulong)in_register_00005068 >> 0x10);
  bVar23 = (byte)((ulong)uVar7 >> 0x18) & (byte)((ulong)in_register_00005068 >> 0x18);
  bVar24 = (byte)((ulong)uVar7 >> 0x20) & (byte)((ulong)in_register_00005068 >> 0x20);
  bVar25 = (byte)((ulong)uVar7 >> 0x28) & (byte)((ulong)in_register_00005068 >> 0x28);
  bVar26 = (byte)((ulong)uVar7 >> 0x30) & (byte)((ulong)in_register_00005068 >> 0x30);
  bVar27 = (byte)((ulong)uVar7 >> 0x38) & (byte)((ulong)in_register_00005068 >> 0x38);
  auVar5[1] = bVar13;
  auVar5[0] = bVar12;
  auVar5[2] = bVar14;
  auVar5[3] = bVar15;
  auVar5[4] = bVar16;
  auVar5[5] = bVar17;
  auVar5[6] = bVar18;
  auVar5[7] = bVar19;
  auVar5[8] = bVar20;
  auVar5[9] = bVar21;
  auVar5[10] = bVar22;
  auVar5[0xb] = bVar23;
  auVar5[0xc] = bVar24;
  auVar5[0xd] = bVar25;
  auVar5[0xe] = bVar26;
  auVar5[0xf] = bVar27;
  iVar28 = NEON_umaxv(auVar5,4);
  if (iVar28 != 0) {
    uVar9 = 0;
    iVar28 = 1;
    do {
      if (uVar9 == 4) goto LAB_10837484c;
      uStack_68 = CONCAT17(bVar27,CONCAT16(bVar26,CONCAT15(bVar25,CONCAT14(bVar24,CONCAT13(bVar23,
                                                  CONCAT12(bVar22,CONCAT11(bVar21,bVar20)))))));
      uStack_70 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12)))))));
      uVar8 = uVar9 & 3;
      uVar9 = uVar9 + 1;
      iVar28 = iVar28 + -1;
    } while (*(int *)((ulong)&uStack_70 | uVar8 << 2) == 0);
    iVar2 = *(int *)(puVar10 + 2);
    iVar3 = *(int *)((long)puVar10 + 0x14);
    lVar11 = puVar10[3];
    if (puVar10[4] != 0) {
      uVar4 = *(uint *)(puVar10[4] + ((ulong)(uint)-iVar28 & 3) * 4);
      uVar1 = *(uint *)(puVar10 + 5);
      if (uVar4 <= *(uint *)(puVar10 + 5)) {
        uVar1 = uVar4;
      }
      lVar11 = lVar11 + (ulong)uVar1 * 0x10;
      iVar2 = uVar1 + iVar2;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      (**(code **)(*(long *)puVar10[1] + 0x18))
                ((long *)puVar10[1],iVar2,*(undefined4 *)(lVar11 + ((ulong)(uint)-iVar28 & 3) * 4));
      iVar2 = iVar2 + 1;
      lVar11 = lVar11 + 0x10;
    }
  }
LAB_10837484c:
  func_0x000108375298();
                    /* WARNING: Could not recover jumptable at 0x00010837487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(bVar15,
                                                  CONCAT12(bVar14,CONCAT11(bVar13,bVar12))))))),
             param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 108374880; end: 108374943;  */

void FUN_108374880(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  int extraout_w9;
  
  func_0x0001083752fc();
  func_0x0001083757b0();
  if (extraout_w9 != 0) {
    func_0x000108375a50();
    func_0x000108375420(*(undefined8 *)(extraout_x8 + 0x20));
    func_0x0001083757cc();
  }
  func_0x000108375298();
                    /* WARNING: Could not recover jumptable at 0x000108375534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108374944; end: 108374947;  */

void FUN_108374944(void)

{
  return;
}



/* Entry: 108374948; end: 108374aeb;  */

void FUN_108374948(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 *param_6,long param_7,undefined1 *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = param_6 + 3;
  param_7 = param_7 * 0x118;
  for (; uVar9 = param_1, param_2 < param_4; param_2 = param_2 + 1) {
    while (uVar9 + 4 <= param_3) {
      func_0x000108375aec();
      func_0x000108375b2c(param_5);
      uVar9 = uVar9 + 4;
    }
    lVar2 = param_3 - uVar9;
    if (lVar2 != 0) {
      puVar3 = puVar1;
      lVar6 = param_7;
      puVar4 = param_6;
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = (char)lVar2;
      }
      for (; lVar6 != 0; lVar6 = lVar6 + -0x118) {
        plVar5 = (long *)*puVar4;
        lVar8 = (long)*(int *)(puVar4 + 1);
        lVar7 = uVar9 + param_2 * (long)(int)plVar5[1];
        if (*(char *)((long)puVar4 + 0xc) == '\x01') {
          _memcpy(puVar3,*plVar5 + lVar7 * lVar8,lVar2 * lVar8);
        }
        puVar4[2] = *plVar5;
        *plVar5 = (long)puVar3 - lVar7 * lVar8;
        puVar3 = puVar3 + 0x23;
        puVar4 = puVar4 + 0x23;
      }
      func_0x000108375aec();
      func_0x000108375b2c(param_5);
      puVar4 = puVar1;
      puVar3 = param_6;
      for (lVar6 = param_7; lVar6 != 0; lVar6 = lVar6 + -0x118) {
        plVar5 = (long *)*puVar3;
        lVar7 = puVar3[2];
        *plVar5 = lVar7;
        puVar3[2] = 0;
        if (*(char *)((long)puVar3 + 0xd) == '\x01') {
          _memcpy(lVar7 + (uVar9 + param_2 * (long)(int)plVar5[1]) * (long)*(int *)(puVar4 + -2),
                  puVar4,lVar2 * *(int *)(puVar4 + -2));
        }
        puVar3 = puVar3 + 0x23;
        puVar4 = puVar4 + 0x23;
      }
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0xff;
      }
    }
  }
  return;
}



/* Entry: 108374aec; end: 108374aef;  */

void FUN_108374aec(void)

{
  return;
}



/* Entry: 108374af0; end: 108374b2b;  */

void FUN_108374af0(void)

{
  int iVar1;
  
  if ((bRam0000000113827050 & 1) == 0) {
    iVar1 = 0x13827050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113827050);
      return;
    }
  }
  return;
}



/* Entry: 108374b2c; end: 108375e27;  */

void FUN_108374b2c(undefined8 param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float in_register_00005008;
  float in_register_0000500c;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = param_2[2];
  fVar4 = *param_2;
  fVar3 = param_2[1];
  fVar7 = fVar5 + ABS((float)param_1) * fVar3;
  fVar8 = fVar5 + ABS((float)((ulong)param_1 >> 0x20)) * fVar3;
  fVar9 = fVar5 + ABS(in_register_00005008) * fVar3;
  fVar5 = fVar5 + ABS(in_register_0000500c) * fVar3;
  NEON_fmov(0x3f800000,4);
  auVar6[4] = SUB41(fVar8,0);
  auVar6._0_4_ = fVar7;
  auVar6[5] = (char)((uint)fVar8 >> 8);
  auVar6[6] = (char)((uint)fVar8 >> 0x10);
  auVar6[7] = (char)((uint)fVar8 >> 0x18);
  auVar6[8] = SUB41(fVar9,0);
  auVar6[9] = (char)((uint)fVar9 >> 8);
  auVar6[10] = (char)((uint)fVar9 >> 0x10);
  auVar6[0xb] = (char)((uint)fVar9 >> 0x18);
  auVar6[0xc] = SUB41(fVar5,0);
  auVar6[0xd] = (char)((uint)fVar5 >> 8);
  auVar6[0xe] = (char)((uint)fVar5 >> 0x10);
  auVar6[0xf] = (char)((uint)fVar5 >> 0x18);
  auVar6 = NEON_scvtf(auVar6,4);
  fVar7 = (float)(SUB43(fVar7,0) & 0x7fffff | 0x3f000000);
  fVar8 = (float)(SUB43(fVar8,0) & 0x7fffff | 0x3f000000);
  fVar9 = (float)(SUB43(fVar9,0) & 0x7fffff | 0x3f000000);
  fVar3 = (float)(SUB43(fVar5,0) & 0x7fffff | 0x3f000000);
  fVar5 = (auVar6._0_4_ * 1.1920929e-07 + -124.22552 + fVar7 * -1.4980303 +
          -1.72588 / (fVar7 + 0.35208872)) * fVar4;
  fVar7 = (auVar6._4_4_ * 1.1920929e-07 + -124.22552 + fVar8 * -1.4980303 +
          -1.72588 / (fVar8 + 0.35208872)) * fVar4;
  fVar8 = (auVar6._8_4_ * 1.1920929e-07 + -124.22552 + fVar9 * -1.4980303 +
          -1.72588 / (fVar9 + 0.35208872)) * fVar4;
  fVar4 = (auVar6._12_4_ * 1.1920929e-07 + -124.22552 + fVar3 * -1.4980303 +
          -1.72588 / (fVar3 + 0.35208872)) * fVar4;
  auVar1._4_4_ = (fVar7 + 121.274055 + (fVar7 - (float)(int)fVar7) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar7 - (float)(int)fVar7))) * 8388608.0;
  auVar1._0_4_ = (fVar5 + 121.274055 + (fVar5 - (float)(int)fVar5) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar5 - (float)(int)fVar5))) * 8388608.0;
  auVar1._8_4_ = (fVar8 + 121.274055 + (fVar8 - (float)(int)fVar8) * -1.4901291 +
                 27.728024 / (4.8425255 - (fVar8 - (float)(int)fVar8))) * 8388608.0;
  auVar1._12_4_ =
       (fVar4 + 121.274055 + (fVar4 - (float)(int)fVar4) * -1.4901291 +
       27.728024 / (4.8425255 - (fVar4 - (float)(int)fVar4))) * 8388608.0;
  auVar6 = NEON_fmax(auVar1,ZEXT216(0),4);
  auVar2._8_4_ = 0x4eff0000;
  auVar2._0_8_ = 0x4eff00004eff0000;
  auVar2._12_4_ = 0x4eff0000;
  NEON_fmin(auVar6,auVar2,4);
  return;
}



/* Entry: 108375e28; end: 108375e93;  */

void FUN_108375e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 auStack_94 [100];
  
  lVar1 = param_5;
  FUN_108343afc();
  FUN_108344004(auStack_94,param_7,3,lVar1,3);
  FUN_108376234(param_6);
  *(undefined4 *)(param_5 + 0x30) = param_1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  FUN_1083441a4(auStack_94,(undefined4 *)(param_5 + 0x30));
  return;
}



/* Entry: 108375e94; end: 108375edb;  */

long * FUN_108375e94(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  FUN_108154c6c(param_1 + 5);
  FUN_10811e834(param_1 + 4);
  FUN_108115b2c(param_1 + 3);
  FUN_10810c718(param_1 + 2);
  func_0x000106f47224(param_1 + 1);
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return param_1;
}



/* Entry: 108375edc; end: 108375f33;  */

undefined8 * FUN_108375edc(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40800000;
  FUN_108375e28();
  return param_1;
}



/* Entry: 108375f34; end: 108376023;  */

void FUN_108375f34(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar4;
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = lVar4;
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  lVar4 = param_2[4];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[4] = lVar4;
  lVar4 = param_2[5];
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = lVar4;
  lVar5 = param_2[7];
  lVar4 = param_2[6];
  uVar6 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
  param_1[7] = lVar5;
  param_1[6] = lVar4;
  return;
}



/* Entry: 108376024; end: 10837619f;  */

void FUN_108376024(long param_1,long param_2)

{
  FUN_1082d9c30();
  FUN_10816979c(param_1 + 8,param_2 + 8);
  func_0x000108376084(param_1 + 0x10,param_2 + 0x10);
  func_0x0001083416d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10819a4d8(param_1 + 0x20,param_2 + 0x20);
  func_0x0001083760cc(param_1 + 0x28,param_2 + 0x28);
  func_0x000108376598();
  return;
}



/* Entry: 1083761a0; end: 108376207;  */

void FUN_1083761a0(undefined8 param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_34 = 0x3f800000;
  uStack_2c = 0x40800000;
  func_0x000108376114(param_1,&uStack_70);
  FUN_108375e94(&uStack_70);
  return;
}



/* Entry: 108376208; end: 108376233;  */

void FUN_108376208(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_108343500(param_6);
  *(undefined4 *)(param_5 + 0x30) = param_1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  *(undefined4 *)(param_5 + 0x3c) = param_4;
  return;
}



/* Entry: 108376234; end: 10837626b;  */

undefined4 FUN_108376234(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 10837626c; end: 108376297;  */

ulong FUN_10837626c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    func_0x0001083765b8();
    return uVar1 & 0xffffffffff;
  }
  return 0x100000003;
}



/* Entry: 108376298; end: 1083762bb;  */

undefined4 FUN_108376298(ulong param_1,undefined4 param_2)

{
  FUN_10837626c();
  if ((param_1 & 0x100000000) != 0) {
    param_2 = (undefined4)param_1;
  }
  return param_2;
}



/* Entry: 1083762bc; end: 1083762f3;  */

bool FUN_1083762bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 != 0) {
    func_0x0001083765b8();
    return (uVar1 & 0x1ffffffff) == 0x100000003;
  }
  return true;
}



/* Entry: 1083762f4; end: 10837635f;  */

void FUN_1083762f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if ((int)param_2 == 3) {
    uVar1 = 0;
  }
  else {
    FUN_108333b64(&uStack_28,param_2);
    uVar1 = uStack_28;
  }
  uStack_28 = 0;
  FUN_108166224(param_1 + 0x28,uVar1);
  FUN_108154c6c(&uStack_28);
  return;
}



/* Entry: 108376360; end: 1083763fb;  */

void FUN_108376360(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
  if (((lVar1 == 0) || (FUN_108355670(), (int)lVar1 != 0)) &&
     (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
    (**(code **)(*param_1 + 0x58))(param_1,0);
  }
  return;
}



/* Entry: 1083763fc; end: 1083764bb;  */

undefined4 *
FUN_1083763fc(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             long *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  plVar1 = (long *)*param_5;
  if (plVar1 != (long *)0x0) {
    uStack_38 = param_6[1];
    uVar2 = *param_6;
    uStack_40 = uVar2;
    (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_40);
    param_1 = (undefined4)uVar2;
    param_6 = &uStack_40;
  }
  func_0x0001083a64a4(param_5,param_8);
  uVar3 = param_1;
  func_0x000108283abc(param_6);
  *param_7 = param_1;
  param_7[1] = uVar3;
  param_7[2] = param_3;
  param_7[3] = param_4;
  plVar1 = (long *)param_5[2];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_7,param_7);
  }
  plVar1 = (long *)param_5[4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_7);
    *param_7 = param_1;
    param_7[1] = uVar3;
    param_7[2] = param_3;
    param_7[3] = param_4;
  }
  return param_7;
}



/* Entry: 1083764bc; end: 10837653f;  */

void FUN_1083764bc(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10837626c();
  if (((((uVar1 >> 0x20 & 1) != 0) && ((uint)uVar1 < 0xd)) &&
      ((1 << (ulong)((uint)uVar1 & 0x1f) & 0x1318U) != 0)) &&
     ((uVar1 = param_1, FUN_108188360(), (int)uVar1 == 0 &&
      (*(long **)(param_1 + 0x18) != (long *)0x0)))) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x40))();
  }
  return;
}



/* Entry: 108376540; end: 1083765c3;  */

void FUN_108376540(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108376564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083765c4; end: 108376707;  */

bool FUN_1083765c4(ulong param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return param_2 != 2;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((lVar2 == 0) || (func_0x000108376acc(), (int)lVar2 != 0)) {
    uVar3 = param_1;
    FUN_108188360();
    if ((param_2 == 2) || ((int)uVar3 != 0xff)) {
      if ((int)uVar3 != 0) goto LAB_108376638;
      if ((param_2 == 0) && (*(long *)(param_1 + 8) == 0)) {
        iVar5 = 1;
      }
      else {
        iVar5 = 2;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 8);
      if (plVar4 == (long *)0x0) {
        iVar5 = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x38))();
        iVar5 = 0;
        if ((int)plVar4 == 0) {
          iVar5 = 3;
        }
      }
    }
  }
  else {
LAB_108376638:
    iVar5 = 3;
  }
  FUN_10837626c();
  if ((param_1 >> 0x20 & 1) == 0) {
    return false;
  }
  iVar6 = (int)param_1;
  if (0xe < iVar6) {
    return false;
  }
  if ((*(int *)(&UNK_10df1c57c + (long)iVar6 * 8) - 4U < 6) &&
     ((0x33U >> (ulong)(*(int *)(&UNK_10df1c57c + (long)iVar6 * 8) - 4U & 0x1f) & 1) != 0)) {
LAB_108376684:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    switch(*(undefined4 *)(&UNK_10df1c580 + (long)iVar6 * 8)) {
    case 0:
      break;
    default:
      goto LAB_108376684;
    case 2:
      bVar1 = iVar5 == 1;
      break;
    case 6:
      bVar1 = iVar5 - 1U < 2;
      break;
    case 7:
      bVar1 = iVar5 == 0;
    }
  }
  return bVar1;
}



/* Entry: 108376708; end: 10837675b;  */

uint FUN_108376708(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x48) >> 1 & 1) != 0)) &&
      (uVar1 = 1, (param_2 & 0xfffffffe) != 2)) &&
     (((*(long *)(param_1 + 0x20) == 0 && (*(long *)(param_1 + 0x10) == 0)) &&
      (lVar2 = *(long *)(param_1 + 8), uVar1 = 0, lVar2 != 0)))) {
    func_0x000108376acc();
    uVar1 = (uint)lVar2 ^ 1;
  }
  return uVar1;
}



/* Entry: 10837675c; end: 1083767eb;  */

void FUN_10837675c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_10819a67c();
  plVar1 = *(long **)(param_5 + 8);
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&uStack_30);
    if ((int)plVar1 == 0) {
      uStack_38 = 0x3f8000003f000000;
      uStack_40 = 0x3f0000003f000000;
      goto LAB_1083767d0;
    }
    uStack_24 = 0x3f800000;
  }
  if (*(long *)(param_5 + 0x18) != 0) {
    FUN_1083436e4(*(long *)(param_5 + 0x18),&uStack_30,0,0);
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
  }
  uStack_38 = CONCAT44(uStack_24,uStack_28);
  uStack_40 = CONCAT44(uStack_2c,uStack_30);
LAB_1083767d0:
  func_0x000108343560(&uStack_40);
  return;
}



/* Entry: 1083767ec; end: 108376937;  */

void FUN_1083767ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_5 + 0x18);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_5 + 8);
    if (lVar5 == 0) {
      lVar5 = param_5;
      FUN_10819a67c(param_5);
      uStack_78 = param_1;
      uStack_74 = param_2;
      uStack_70 = param_3;
      uStack_6c = param_4;
      FUN_108343afc();
      FUN_1083436e4(lVar6,&uStack_78,lVar5,param_6);
      uStack_68 = param_1;
      uStack_64 = param_2;
      uStack_60 = param_3;
      uStack_5c = param_4;
      FUN_108375e28(param_5,&uStack_68,param_6);
    }
    else {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar7 = *(undefined4 *)(param_5 + 0x3c);
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_58 = lVar6;
      lStack_50 = lVar5;
      FUN_1083baae8(&uStack_48,uVar7,&lStack_50,&lStack_58);
      uVar4 = uStack_48;
      uStack_48 = 0;
      func_0x000108114f18((long *)(param_5 + 8),uVar4);
      func_0x000106f47224(&uStack_48);
      FUN_108115b2c(&lStack_58);
      func_0x000106f47224(&lStack_50);
      *(undefined4 *)(param_5 + 0x3c) = 0x3f800000;
    }
    uStack_80 = 0;
    FUN_108164954((long *)(param_5 + 0x18),0);
    FUN_108115b2c(&uStack_80);
  }
  return;
}



/* Entry: 108376938; end: 108376a5b;  */

void FUN_108376938(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar4 = -(ulong)(param_5[2] == 0);
  lVar5 = -(ulong)(param_5[3] == 0);
  lVar6 = -(ulong)(*param_5 == 0);
  uVar14 = (undefined4)lVar6;
  lVar15 = -(ulong)(param_5[1] == 0);
  auVar2[1] = ~(byte)((ulong)lVar6 >> 8);
  auVar2[0] = ~(byte)lVar6;
  auVar2[2] = ~(byte)((ulong)lVar6 >> 0x10);
  auVar2[3] = ~(byte)((ulong)lVar6 >> 0x18);
  auVar2[4] = ~(byte)lVar15;
  auVar2[5] = ~(byte)((ulong)lVar15 >> 8);
  auVar2[6] = ~(byte)((ulong)lVar15 >> 0x10);
  auVar2[7] = ~(byte)((ulong)lVar15 >> 0x18);
  auVar2[8] = ~(byte)lVar4;
  auVar2[9] = ~(byte)((ulong)lVar4 >> 8);
  auVar2[10] = ~(byte)((ulong)lVar4 >> 0x10);
  auVar2[0xb] = ~(byte)((ulong)lVar4 >> 0x18);
  auVar2[0xc] = ~(byte)lVar5;
  auVar2[0xd] = ~(byte)((ulong)lVar5 >> 8);
  auVar2[0xe] = ~(byte)((ulong)lVar5 >> 0x10);
  auVar2[0xf] = ~(byte)((ulong)lVar5 >> 0x18);
  uVar9 = NEON_umaxv(auVar2,4);
  if ((((uVar9 & 1) == 0) && (param_5[4] == 0)) &&
     (plVar7 = param_5, FUN_10837626c(), ((ulong)plVar7 >> 0x20 & 1) != 0)) {
    uVar9 = 0;
    bVar8 = true;
  }
  else {
    bVar8 = false;
    uVar9 = 0x2000000;
  }
  func_0x000108376abc();
  uVar3 = *(undefined4 *)((long)param_5 + 0x44);
  uVar10 = (undefined1)uVar3;
  uVar11 = (undefined1)((uint)uVar3 >> 8);
  uVar12 = (undefined1)((uint)uVar3 >> 0x10);
  uVar13 = (undefined1)((uint)uVar3 >> 0x18);
  func_0x000108376abc();
  FUN_10819a67c(param_5);
  uStack_40 = CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
  uStack_3c = uVar14;
  uStack_38 = param_3;
  uStack_34 = param_4;
  (**(code **)(*param_6 + 0x70))(param_6,&uStack_40);
  plVar7 = param_5;
  FUN_10837626c();
  uVar1 = 0xff00;
  if (((ulong)plVar7 & 0x100000000) != 0) {
    uVar1 = (int)plVar7 << 8;
  }
  (**(code **)(*param_6 + 0x38))
            (param_6,*(uint *)(param_5 + 9) & 3 | uVar9 | uVar1 |
                     (*(uint *)(param_5 + 9) & 0xfc) << 0xe);
  if (!bVar8) {
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
    func_0x000108376aac();
  }
  return;
}



/* Entry: 108376a5c; end: 108376aab;  */

long * FUN_108376a5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108376aac; end: 108376ad7;  */

void FUN_108376aac(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000108376ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x58))();
  return;
}



/* Entry: 108376ad8; end: 108376b4f;  */

long * FUN_108376ad8(long *param_1)

{
  long *plVar1;
  byte extraout_w8;
  
  plVar1 = param_1;
  FUN_10837e150();
  *param_1 = (long)plVar1;
  func_0x00010837cd40();
  *(undefined1 *)((long)param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0xd) = 2;
  *(byte *)((long)param_1 + 0xe) = extraout_w8 & 0xf8;
  return param_1;
}



/* Entry: 108376b50; end: 108376b8f;  */

void FUN_108376b50(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  bVar2 = *(byte *)(param_1 + 0xe);
  bVar1 = *(byte *)(param_2 + 0xe) & 3;
  *(byte *)(param_1 + 0xe) = bVar2 & 0xfc | bVar1;
  *(byte *)(param_1 + 0xe) = bVar2 & 0xf8 | bVar1 | *(byte *)(param_2 + 0xe) & 4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return;
}



/* Entry: 108376b90; end: 108376bdb;  */

undefined8 * FUN_108376b90(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = (int *)*param_2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_108376bdc(param_1);
    func_0x00010837cd88();
    FUN_108376b50();
  }
  return param_1;
}



/* Entry: 108376bdc; end: 108376d4b;  */

void FUN_108376bdc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_10837e114();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108376d4c; end: 108376d9f;  */

void FUN_108376d4c(void)

{
  byte extraout_w8;
  int *extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010837cce4();
  if (*extraout_x8 == 1) {
    func_0x00010837ecd4(*unaff_x19);
  }
  else {
    FUN_10837e150();
    FUN_108376bdc();
  }
  func_0x00010837cd40();
  *(byte *)((long)unaff_x19 + 0xe) = extraout_w8 & 0xfc;
  func_0x00010837cb1c();
  return;
}



/* Entry: 108376da0; end: 108376fcb;  */

void FUN_108376da0(undefined8 param_1)

{
  float *pfVar1;
  byte bVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 in_ZR;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong *puVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined8 extraout_x8;
  ulong *puVar14;
  uint uVar15;
  float fVar16;
  float unaff_s10;
  ulong unaff_d11;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  float fStack_108;
  byte *pbStack_f8;
  ulong *puStack_f0;
  float *pfStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulong *puStack_d0;
  float *pfStack_c8;
  ulong uStack_c0;
  ulong auStack_b8 [2];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uVar10;
  
  uVar10 = param_1;
  func_0x00010837caf0();
  iVar9 = (int)uVar10;
  uStack_90 = extraout_x8;
  FUN_108376fcc();
  if (iVar9 != 0) {
    uVar10 = param_1;
    FUN_108376fe8();
    in_ZR = (int)uVar10 == 2;
    if (!(bool)in_ZR) {
      FUN_1081e8e40(&pbStack_e0,param_1);
      iVar9 = 0;
      pbStack_f8 = pbStack_e0;
      pfStack_e8 = pfStack_c8;
      puStack_f0 = puStack_d0;
      while (pfVar3 = pfStack_e8, puVar13 = puStack_f0, in_ZR = pbStack_f8 == pbStack_d8,
            !(bool)in_ZR) {
        bVar2 = *pbStack_f8;
        if (bVar2 - 1 < 5) {
          uVar15 = (uint)bVar2;
          in_ZR = true;
          if (uVar15 == 5) {
LAB_108376f50:
            auStack_b8[0] = uStack_128;
            if (iVar9 == -1) goto LAB_108376f64;
            goto LAB_108376f40;
          }
          puVar14 = puStack_f0 + -1;
          bVar2 = (&UNK_10df1dedb)[uVar15];
          puVar11 = puVar14;
          FUN_1082d213c(puVar14,bVar2 + 1);
          if (((ulong)puVar11 & 1) == 0) {
            pfVar1 = (float *)(puVar14 + bVar2);
            in_ZR = false;
            if (unaff_s10 == *pfVar1) {
              in_ZR = false;
              if (!NAN((float)unaff_d11) && !NAN(pfVar1[1])) {
                in_ZR = (float)unaff_d11 == pfVar1[1];
              }
            }
            if (!(bool)in_ZR) {
              bVar8 = SBORROW4(uVar15,3);
              in_ZR = uVar15 == 3;
              if ((bool)in_ZR) {
                fVar16 = *pfVar3;
                uStack_118 = *puVar13;
                uStack_120 = *puVar14;
                uStack_110 = puVar13[1];
                func_0x00010837ce74();
                bVar5 = false;
                bVar6 = true;
                bVar7 = false;
                if (!bVar8) {
                  bVar5 = false;
                  bVar6 = false;
                  bVar7 = true;
                  if (!NAN(fVar16)) {
                    bVar5 = fVar16 < 0.0;
                    bVar6 = fVar16 == 0.0;
                    bVar7 = false;
                  }
                }
                fStack_108 = fVar16;
                if (bVar6 || bVar5 != bVar7) {
                  fStack_108 = 1.0;
                }
                puVar13 = &uStack_120;
                FUN_108353014(puVar13,auStack_b8,1);
                in_ZR = (int)puVar13 == 2;
                if (!(bool)in_ZR) {
                  FUN_10841076c(&UNK_10f48135e);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x108376fc4);
                  (*pcVar4)();
                }
                puVar13 = auStack_b8;
                func_0x00010837cb80(puVar13,auStack_a8);
                if ((int)puVar13 == 0) goto LAB_108376f64;
                puVar12 = auStack_a8;
                func_0x00010837cb80(puVar12,auStack_98);
                if (((ulong)puVar12 & 1) == 0) goto LAB_108376f64;
              }
              else {
                puVar13 = &uStack_c0;
                func_0x00010837cb80(puVar13,pfVar1);
                if ((int)puVar13 == 0) goto LAB_108376f64;
              }
              iVar9 = iVar9 + 1;
              uStack_c0 = *(ulong *)pfVar1;
              goto LAB_108376f14;
            }
            goto LAB_108376f64;
          }
        }
        else {
          if (bVar2 != 0) goto LAB_108376fc8;
          in_ZR = iVar9 == 1;
          if (0 < iVar9) goto LAB_108376f50;
          uStack_c0 = *puStack_f0;
          uStack_128 = uStack_c0;
LAB_108376f14:
          unaff_s10 = (float)uStack_c0;
          unaff_d11 = uStack_c0 >> 0x20;
        }
        func_0x0001081e8ec8(&pbStack_f8);
      }
      auStack_b8[0] = uStack_128;
      if (iVar9 != 0) {
LAB_108376f40:
        auStack_b8[0] = uStack_128;
        func_0x00010837cb80(&uStack_c0,auStack_b8);
      }
    }
  }
LAB_108376f64:
  func_0x00010837cab0(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108376fc8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108376fcc);
  (*pcVar4)();
}



/* Entry: 108376fcc; end: 108376fe7;  */

bool FUN_108376fcc(int param_1)

{
  FUN_1083773cc();
  return param_1 == 0;
}



/* Entry: 108376fe8; end: 10837726b;  */

char FUN_108376fe8(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  byte bStack_68;
  
  puVar8 = auStack_90;
  cVar7 = *(char *)((long)param_1 + 0xd);
  if (cVar7 == '\x02') {
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      lVar10 = *param_1;
      lStack_80 = *(long *)(lVar10 + 0x40);
      lStack_78 = lStack_80 + *(int *)(lVar10 + 0x48);
      bStack_68 = 0;
      lStack_88 = *(long *)(lVar10 + 0x28);
      uStack_70 = *(undefined8 *)(lVar10 + 0x58);
      auStack_90[0] = 0;
      FUN_10837a530();
      func_0x00010837ce48();
      fVar28 = *(float *)((long)puVar8 + 4);
      fVar29 = 0.0;
      while (lVar10 = lStack_88, (bStack_68 & 1) == 0) {
        uVar18 = (ulong)auStack_90[0];
        if (2 < (int)auStack_90[0]) {
          uVar20 = 0;
          fVar21 = *(float *)(lStack_88 + 4);
          lVar11 = 0xc;
          for (uVar13 = 1; uVar19 = (uint)uVar20, uVar18 != uVar13; uVar13 = uVar13 + 1) {
            fVar22 = *(float *)(lStack_88 + lVar11);
            uVar3 = (uint)uVar13;
            if (fVar22 <= fVar21) {
              uVar3 = uVar19;
            }
            uVar20 = (ulong)uVar3;
            if (fVar22 <= fVar21) {
              fVar22 = fVar21;
            }
            fVar21 = fVar22;
            lVar11 = lVar11 + 8;
          }
          pfVar1 = (float *)(lStack_88 + (long)(int)uVar19 * 8);
          fVar21 = pfVar1[1];
          if (fVar28 <= fVar21) {
            iVar4 = 0;
            if (auStack_90[0] != 0) {
              iVar4 = (int)(uVar19 + 1) / (int)auStack_90[0];
            }
            if (*(float *)(lStack_88 + (long)(int)((uVar19 + 1) - iVar4 * auStack_90[0]) * 8 + 4) ==
                fVar21) {
              uVar12 = (ulong)(int)uVar19;
              uVar13 = uVar20;
              uVar5 = uVar20;
              fVar22 = *pfVar1;
              fVar27 = *pfVar1;
              do {
                fVar25 = fVar27;
                fVar23 = fVar22;
                uVar15 = uVar5;
                uVar14 = uVar13;
                pfVar17 = (float *)(lStack_88 + 0xc + uVar12 * 8);
                uVar16 = uVar12;
                do {
                  uVar12 = uVar12 + 1;
                  if (((long)uVar18 <= (long)uVar12) || (*pfVar17 != fVar21)) {
                    iVar4 = (int)uVar15 - (int)uVar14;
                    if (iVar4 == 0) goto LAB_108377154;
                    fVar22 = (float)iVar4;
                    goto LAB_108377218;
                  }
                  fVar24 = pfVar17[-1];
                  uVar13 = uVar14;
                  uVar5 = uVar12;
                  fVar22 = fVar23;
                  fVar27 = fVar24;
                  if (fVar24 < fVar25) break;
                  uVar16 = (ulong)((int)uVar16 + 1);
                  pfVar17 = pfVar17 + 2;
                  uVar13 = uVar16;
                  uVar5 = uVar15;
                  fVar22 = fVar24;
                  fVar27 = fVar25;
                } while (fVar24 <= fVar23);
              } while( true );
            }
LAB_108377154:
            lVar11 = lStack_88;
            func_0x00010837a5d0(lStack_88,uVar20,uVar18,auStack_90[0] - 1);
            if ((uint)lVar11 != uVar19) {
              lVar9 = lVar10;
              func_0x00010837a5d0(lVar10,uVar20,uVar18,1);
              pfVar17 = (float *)(lVar10 + (long)(int)(uint)lVar11 * 8);
              pfVar2 = (float *)(lVar10 + (long)(int)lVar9 * 8);
              fVar22 = *pfVar1;
              fVar26 = *pfVar17;
              fVar25 = pfVar17[1];
              fVar23 = *pfVar2;
              fVar24 = pfVar2[1];
              fVar27 = -((fVar23 - fVar26) * (fVar21 - fVar25)) +
                       (fVar24 - fVar25) * (fVar22 - fVar26);
              if (fVar27 == 0.0) {
                fVar27 = -((fVar23 - fVar26) * (fVar21 - fVar25)) +
                         (fVar24 - fVar25) * (fVar22 - fVar26);
              }
              bVar6 = false;
              if ((fVar25 == fVar21) && (bVar6 = false, !NAN(fVar27))) {
                bVar6 = fVar27 == 0.0;
              }
              fVar22 = fVar22 - fVar23;
              if (!(bool)(bVar6 & fVar24 == fVar21)) {
                fVar22 = fVar27;
              }
LAB_108377218:
              if (fVar22 != 0.0) {
                fVar28 = fVar21;
                fVar29 = fVar22;
              }
            }
          }
        }
        FUN_10837a530(auStack_90);
      }
      if (fVar29 != 0.0) {
        *(bool *)((long)param_1 + 0xd) = fVar29 <= 0.0;
        return fVar29 <= 0.0;
      }
    }
    cVar7 = '\x02';
  }
  return cVar7;
}



/* Entry: 10837726c; end: 1083772f3;  */

ushort FUN_10837726c(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = param_1;
  if (param_4 != 0) {
    pfVar1 = param_2;
    param_2 = param_1;
  }
  fVar10 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar2 = *param_2 - fVar10;
  fVar9 = param_2[1] - fVar8;
  if ((fVar2 == 0.0) && (fVar9 == 0.0)) {
    uVar5 = 1;
  }
  else {
    iVar3 = -(uint)((param_3[1] - fVar8) * fVar2 < (*param_3 - fVar10) * fVar9);
    iVar4 = -(uint)((param_3[3] - fVar8) * fVar2 < (*param_3 - fVar10) * fVar9);
    iVar6 = -(uint)((param_3[1] - fVar8) * fVar2 < (param_3[2] - fVar10) * fVar9);
    iVar7 = -(uint)((param_3[3] - fVar8) * fVar2 < (param_3[2] - fVar10) * fVar9);
    uVar5 = NEON_uminv(CONCAT17(~(byte)((uint)iVar7 >> 8),
                                CONCAT16(~(byte)iVar7,
                                         CONCAT15(~(byte)((uint)iVar6 >> 8),
                                                  CONCAT14(~(byte)iVar6,
                                                           CONCAT13(~(byte)((uint)iVar4 >> 8),
                                                                    CONCAT12(~(byte)iVar4,
                                                                             CONCAT11(~(byte)((uint)
                                                  iVar3 >> 8),~(byte)iVar3))))))),2);
    uVar5 = uVar5 & 0xff;
  }
  return uVar5 & 1;
}



/* Entry: 1083772f4; end: 108377323;  */

long FUN_1083772f4(long param_1)

{
  byte extraout_w8;
  
  FUN_10837e514();
  func_0x00010837cd40();
  *(byte *)(param_1 + 0xe) = extraout_w8 & 0xfc;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 108377324; end: 10837739f;  */

bool FUN_108377324(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(*param_1 + 0x48);
  if (uVar1 == 0) {
    return false;
  }
  if (0 < (int)uVar1) {
    return *(char *)(*(long *)(*param_1 + 0x40) + (ulong)uVar1 + -1) == '\x05';
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108377358);
  (*pcVar2)();
}



/* Entry: 1083773a0; end: 1083773cb;  */

undefined1 FUN_1083773a0(long param_1)

{
  if (*(char *)(param_1 + 0xc1) != '\0') {
    func_0x0001082d8764(param_1);
  }
  return *(undefined1 *)(param_1 + 0xc5);
}



/* Entry: 1083773cc; end: 1083773e7;  */

bool FUN_1083773cc(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  char *pcVar6;
  byte **ppbVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  byte *pbVar23;
  float fVar24;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 uStack_54;
  int iVar17;
  
  if (*(char *)((long)param_1 + 0xc) != '\x02') {
    return (bool)*(char *)((long)param_1 + 0xc);
  }
  plVar5 = param_1;
  func_0x000108377398();
  if (((ulong)plVar5 & 1) == 0) {
LAB_108377c2c:
    bVar13 = true;
LAB_108377c30:
    *(bool *)((long)param_1 + 0xc) = bVar13;
  }
  else {
    lVar14 = *param_1;
    iVar15 = *(int *)(lVar14 + 0x30);
    pcVar12 = *(char **)(lVar14 + 0x40);
    iVar10 = *(int *)(lVar14 + 0x48);
    pcVar6 = pcVar12;
    FUN_10837a418(pcVar12,iVar10);
    uVar9 = (int)pcVar6 - 1;
    uVar2 = *(uint *)(param_1 + 1);
    if (-1 < (int)uVar2) {
      if (uVar2 == iVar15 - 1U) {
        pcVar11 = pcVar12 + iVar10;
        while ((pcVar11 = pcVar11 + -1, pcVar12 < pcVar11 && (*pcVar11 == '\0'))) {
          iVar15 = iVar15 + -1;
        }
      }
      else if (uVar2 != uVar9) goto LAB_108377c2c;
    }
    if ((int)pcVar6 < 2) {
      uVar9 = 0;
    }
    if (3 < (int)(iVar15 - uVar9)) {
      puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x28) + (ulong)uVar9 * 8);
      ppbVar7 = (byte **)(puVar1 + 1);
      pbStack_80 = (byte *)*puVar1;
      uVar16 = 0;
      uVar19 = 0x200000002;
      for (iVar10 = 0; uVar20 = uVar19, pbVar23 = pbStack_80, iVar10 != 2; iVar10 = iVar10 + 1) {
        do {
          uVar19 = uVar20;
          pbStack_80 = pbVar23;
          if (ppbVar7 == (byte **)(puVar1 + (iVar15 - uVar9))) break;
          pbStack_80 = *ppbVar7;
          fVar22 = SUB84(pbStack_80,0) - SUB84(pbVar23,0);
          fVar24 = (float)((ulong)pbStack_80 >> 0x20) - (float)((ulong)pbVar23 >> 0x20);
          if ((fVar22 != 0.0) || (fVar24 != 0.0)) {
            uVar19 = CONCAT44(-(uint)(fVar24 < 0.0),-(uint)(fVar22 < 0.0)) & 0x100000001;
            iVar18 = -(uint)((int)uVar20 == (int)uVar19);
            iVar21 = -(uint)((int)(uVar20 >> 0x20) == (int)(uVar19 >> 0x20));
            iVar17 = CONCAT13(~(byte)((uint)iVar18 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar18 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18)));
            iVar18 = (int)uVar16 - iVar17;
            iVar17 = (int)((ulong)uVar16 >> 0x20) -
                     (int)(CONCAT17(~(byte)((uint)iVar21 >> 0x18),
                                    CONCAT16(~(byte)((uint)iVar21 >> 0x10),
                                             CONCAT15(~(byte)((uint)iVar21 >> 8),
                                                      CONCAT14(~(byte)iVar21,iVar17)))) >> 0x20);
            uVar16 = CONCAT44(iVar17,iVar18);
            if ((NAN(fVar24 * (fVar22 - fVar22)) || 3 < iVar18) || 3 < iVar17) goto LAB_108377c2c;
          }
          ppbVar7 = ppbVar7 + 1;
          uVar20 = uVar19;
          pbVar23 = pbStack_80;
        } while (iVar10 == 0);
        ppbVar7 = &pbStack_80;
      }
    }
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_68 = 0;
    pbStack_70 = (byte *)0x0;
    uStack_60 = 0x200000005;
    iStack_58 = 0;
    uStack_54 = 1;
    ppbVar7 = &pbStack_a0;
    FUN_1081e8e40(ppbVar7,param_1);
    iVar15 = 0;
    bVar13 = false;
    pbStack_b8 = pbStack_a0;
    uStack_a8 = uStack_88;
    lStack_b0 = lStack_90;
    while (pbStack_b8 != pbStack_98) {
      bVar3 = *pbStack_b8;
      if (5 < bVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108377c50);
        (*pcVar4)();
      }
      if (iVar15 == 1) {
LAB_108377a9c:
        uVar9 = (uint)bVar3;
        if (uVar9 == 5 || uVar9 == 0) {
          uVar19 = 0;
          FUN_10837a448();
          if ((uVar19 & 1) == 0) goto LAB_108377c2c;
          bVar13 = false;
          iVar15 = 2;
        }
        else {
          lVar14 = (ulong)(byte)(&UNK_10df1dedb)[uVar9] + 1;
          lVar8 = lStack_b0 + *(long *)(&UNK_10df1dee8 + (ulong)(uint)bVar3 * 8) * 8;
          while( true ) {
            lVar8 = lVar8 + 8;
            lVar14 = lVar14 + -1;
            if (lVar14 == 0) break;
            ppbVar7 = &pbStack_80;
            func_0x00010837a480(ppbVar7,lVar8);
            if (((ulong)ppbVar7 & 1) == 0) goto LAB_108377c2c;
          }
          iVar15 = 1;
        }
      }
      else if (iVar15 == 0) {
        if (bVar3 != 0) {
          bVar13 = true;
          goto LAB_108377a9c;
        }
        iVar15 = 0;
        pbStack_80 = *(byte **)(lStack_b0 + *(long *)(&UNK_10df1dee8 + (ulong)(uint)bVar3 * 8) * 8);
        uStack_60 = CONCAT44(uStack_60._4_4_,5);
        pbStack_70 = pbStack_80;
      }
      else if (bVar3 != 0) goto LAB_108377c2c;
      ppbVar7 = &pbStack_b8;
      func_0x0001081e8ec8();
    }
    if (bVar13) {
      ppbVar7 = &pbStack_80;
      FUN_10837a448();
      if (((ulong)ppbVar7 & 1) == 0) goto LAB_108377c2c;
    }
    uVar16 = uStack_60;
    if (*(char *)((long)param_1 + 0xd) == '\x02') {
      if (((uStack_60._4_4_ == 2) &&
          (func_0x00010837ce48(), *(float *)ppbVar7 < *(float *)(ppbVar7 + 1))) &&
         (*(float *)((long)ppbVar7 + 4) < *(float *)((long)ppbVar7 + 0xc))) {
        bVar13 = 2 < iStack_58;
        goto LAB_108377c30;
      }
      *(char *)((long)param_1 + 0xd) = (char)((ulong)uVar16 >> 0x20);
    }
    bVar13 = false;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return bVar13;
}


