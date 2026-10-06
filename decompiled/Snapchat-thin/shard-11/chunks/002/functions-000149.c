/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082c923c; end: 1082c924f;  */

void FUN_1082c923c(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c9250; end: 1082c925b;  */

undefined * FUN_1082c9250(void)

{
  return &UNK_10f484ef5;
}



/* Entry: 1082c925c; end: 1082c92af;  */

void FUN_1082c925c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  FUN_1082a37b0();
  FUN_1082c9184();
  *param_1 = uVar1;
  return;
}



/* Entry: 1082c92b0; end: 1082c932b;  */

undefined8 * FUN_1082c92b0(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 auStack_78 [7];
  int iStack_3c;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001082c95e4();
  uStack_28 = extraout_x8;
  FUN_1082c9184(auStack_78);
  uVar1 = *(int *)(unaff_x19 + 0x3c) == iStack_3c;
  if ((bool)uVar1) {
    puVar3 = (undefined8 *)(unaff_x19 + 0x40);
    FUN_108279bb8(puVar3,auStack_38);
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  puVar2 = auStack_78;
  FUN_10828b3f0();
  func_0x0001082c95f8(uStack_28);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(puVar2 + 2);
  FUN_1083a3c7c(puVar2 + 1);
  return puVar2;
}



/* Entry: 1082c932c; end: 1082c932f;  */

undefined8 * FUN_1082c932c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082c9330; end: 1082c9343;  */

void FUN_1082c9330(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c9344; end: 1082c9527;  */

void FUN_1082c9344(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  uint uVar8;
  long unaff_x19;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [60];
  byte bStack_4c;
  undefined8 uStack_38;
  
  plVar6 = param_6;
  func_0x0001082c95e4();
  uStack_38 = extraout_x8;
  FUN_1082c9184(auStack_88,plVar6[3]);
  lVar1 = *param_6;
  lVar2 = param_6[1];
  FUN_10828bad0(&lStack_90);
  func_0x0001082c95d8();
  FUN_10829dbfc(lVar1 + extraout_x8_00,&UNK_10f484f0f);
  if ((bStack_4c >> 1 & 1) != 0) {
    lVar3 = lVar2;
    func_0x00010828bb5c(lVar2,auStack_88,2,0x10,&DAT_10f36a359,&lStack_98);
    *(int *)(unaff_x19 + 0x20) = (int)lVar3;
    func_0x0001082c95d8();
    lStack_b0 = lStack_98;
    lStack_a8 = lStack_98;
    func_0x0001082c95d0();
  }
  func_0x0001082c95d8();
  func_0x0001082c95d0();
  FUN_10828bad0(&lStack_98);
  func_0x0001082c95d8();
  lStack_b0 = lStack_98 + 8;
  func_0x0001082c95d0();
  func_0x0001082c95d8();
  func_0x0001082c95d0();
  lVar7 = 2;
  lVar3 = lVar2;
  func_0x00010828bb5c(lVar2,auStack_88,2,0x15,&UNK_10f484f8b,&uStack_a0);
  *(int *)(unaff_x19 + 0x24) = (int)lVar3;
  func_0x0001082c95d8();
  lStack_b0 = uStack_a0;
  lStack_a8 = uStack_a0;
  func_0x0001082c95d0();
  func_0x0001082c95d8();
  lStack_b0 = lStack_90 + 8;
  plVar6 = (long *)&UNK_10f484fbd;
  func_0x0001082c95d0();
  FUN_1083a3ca0(lStack_98);
  FUN_1083a3ca0(lStack_90);
  puVar4 = auStack_88;
  FUN_10828b3f0();
  func_0x0001082c95f8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(lStack_90);
  FUN_10828b3f0(auStack_88);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_b8 = FUN_1082c9528;
  uVar8 = *(uint *)(lVar7 + 0x3c);
  lStack_e0 = lVar1;
  plStack_d8 = param_6;
  lStack_d0 = lVar2;
  puStack_c8 = puVar4;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((uVar8 >> 1 & 1) != 0) {
    uVar9 = *(undefined4 *)(puVar5 + 0x20);
    FUN_10817500c(lVar7 + 0x40);
    uStack_f0 = param_1;
    uStack_ec = param_2;
    uStack_e8 = param_3;
    uStack_e4 = param_4;
    (**(code **)(*plVar6 + 0x88))(plVar6,uVar9,1,&uStack_f0);
    uVar8 = *(uint *)(lVar7 + 0x3c);
  }
  if ((uVar8 & 1) == 0) {
    uVar9 = 0x3f800000;
    uVar10 = 0;
  }
  else {
    uVar9 = 0xbf800000;
    uVar10 = 0x3f800000;
  }
  (**(code **)(*plVar6 + 0x40))(uVar9,uVar10,plVar6,*(undefined4 *)(puVar5 + 0x24));
  return;
}



/* Entry: 1082c9528; end: 1082c95c3;  */

void FUN_1082c9528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6,long param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(uint *)(param_7 + 0x3c);
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_5 + 0x20);
    FUN_10817500c(param_7 + 0x40);
    uStack_40 = param_1;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    (**(code **)(*param_6 + 0x88))(param_6,uVar2,1,&uStack_40);
    uVar1 = *(uint *)(param_7 + 0x3c);
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x3f800000;
    uVar3 = 0;
  }
  else {
    uVar2 = 0xbf800000;
    uVar3 = 0x3f800000;
  }
  (**(code **)(*param_6 + 0x40))(uVar2,uVar3,param_6,*(undefined4 *)(param_5 + 0x24));
  return;
}



/* Entry: 1082c95c4; end: 1082c960b;  */

void FUN_1082c95c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c95cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082c960c; end: 1082c96e7;  */

void FUN_1082c960c(long *param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lStack_30;
  long lStack_28;
  
  fVar5 = param_3[3];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = (param_3[2] - fVar2) * 0.5;
  if (ABS((param_3[2] - fVar2) - (fVar5 - fVar3)) <= 0.00024414062) {
    lStack_28 = *param_1;
    *param_1 = 0;
    FUN_108297684(fVar2 + fVar4,fVar3 + fVar4,&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
  }
  else {
    lStack_30 = *param_1;
    *param_1 = 0;
    FUN_10829785c(fVar2 + fVar4,fVar3 + (fVar5 - fVar3) * 0.5,&lStack_30,param_2,param_4);
    lVar1 = lStack_30;
    lStack_30 = 0;
  }
  if (lVar1 != 0) {
    FUN_1082c96e8();
  }
  return;
}



/* Entry: 1082c96e8; end: 1082c96f3;  */

void FUN_1082c96e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c96f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082c96f4; end: 1082c9da3;  */

void FUN_1082c96f4(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 extraout_x8;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2[3];
  plVar8 = (long *)*param_2;
  func_0x0001082ca1a0(auStack_a8,&UNK_10f484fd3);
  func_0x0001082ca148(auStack_80,&UNK_10f484fdd);
  func_0x0001082ca1a0(auStack_120,&UNK_10f484fd3);
  func_0x0001082ca148(auStack_f8,&UNK_10f484fe7);
  func_0x0001082ca148(auStack_d0,&UNK_10f484ff0);
  lStack_128 = 0x1138270b0;
  func_0x0001082ca124();
  if (*(char *)(lVar10 + 0x44) == '\x01') {
    func_0x0001082ca124();
  }
  func_0x0001082ca188();
  func_0x0001082ca174(&uStack_130);
  func_0x0001082ca188();
  func_0x0001082ca174(&uStack_138);
  func_0x0001082ca138();
  if (*(char *)(param_2[2] + 0x28) == '\x01') {
    func_0x0001082ca124();
  }
  func_0x0001082ca124();
  FUN_1083a3c34(&uStack_140,&UNK_10f4851d7);
  func_0x0001082ca188();
  func_0x0001082ca0fc(&uStack_148);
  func_0x0001082ca188();
  func_0x0001082ca0fc(&lStack_150);
  func_0x0001082ca188();
  func_0x0001082ca0fc(&lStack_158);
  func_0x0001082ca188();
  func_0x0001082ca0fc(&lStack_160);
  func_0x0001082ca138();
  func_0x0001082ca1ac();
  func_0x0001082ca138();
  func_0x0001082ca124();
  func_0x0001082ca110(lStack_150 + 8);
  func_0x0001082ca1ac();
  func_0x0001082ca138();
  func_0x0001082ca124();
  func_0x0001082ca124();
  func_0x0001082ca110(lStack_158 + 8);
  func_0x0001082ca1ac();
  func_0x0001082ca138();
  func_0x0001082ca124();
  func_0x0001082ca110(lStack_160 + 8);
  func_0x0001082ca1ac();
  uVar11 = extraout_x8;
  func_0x0001082ca138();
  func_0x0001082ca124();
  func_0x0001082ca124();
  FUN_1082dc6a0(&lStack_168,(long)plVar8 + *(long *)(*plVar8 + -0x18),&UNK_10f48536c);
  bVar5 = *(char *)(lVar10 + 0x44) == '\0';
  puVar2 = auStack_120;
  if (bVar5) {
    puVar2 = auStack_a8;
  }
  uVar1 = 2;
  if (!bVar5) {
    uVar1 = 3;
  }
  lVar10 = lStack_168 + 8;
  FUN_1082dc7a8((long)plVar8 + *(long *)(*plVar8 + -0x18),0x14,lVar10,puVar2,uVar1,lStack_128 + 8,
                in_x6,in_x7,uVar11);
  FUN_1083a3ca0(lStack_160);
  FUN_1083a3ca0(lStack_158);
  FUN_1083a3ca0(lStack_150);
  FUN_1083a3ca0(uStack_148);
  FUN_1083a3ca0(uStack_140);
  FUN_1083a3ca0(uStack_138);
  FUN_1083a3ca0(uStack_130);
  FUN_1083a3ca0(lStack_128);
  lVar9 = 0x50;
  do {
    func_0x00010827024c(auStack_120 + lVar9);
    lVar9 = lVar9 + -0x28;
  } while (lVar9 != -0x28);
  lVar9 = 0x28;
  do {
    iVar6 = (int)auStack_a8 + (int)lVar9;
    func_0x00010827024c();
    lVar9 = lVar9 + -0x28;
  } while (lVar9 != -0x28);
  lVar9 = param_2[3];
  plVar8 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  func_0x0001082ca154();
  *(int *)(param_1 + 0x24) = iVar6;
  plVar7 = plVar4;
  (**(code **)(*plVar4 + 0x18))(plVar4,iVar6);
  if (*(char *)(lVar9 + 0x44) == '\x01') {
    func_0x0001082ca154();
    *(int *)(param_1 + 0x20) = (int)plVar7;
    (**(code **)(*plVar4 + 0x18))(plVar4,(ulong)plVar7 & 0xffffffff);
  }
  func_0x0001082ca12c();
  func_0x0001082ca140();
  func_0x0001082ca12c();
  func_0x0001082ca140();
  if (*(char *)(lVar9 + 0x44) == '\x01') {
    func_0x0001082ca12c();
    func_0x0001082ca140();
  }
  func_0x0001082ca12c();
  func_0x0001082ca140();
  func_0x0001082ca12c();
  func_0x0001082ca140();
  func_0x0001082ca12c();
  func_0x0001082ca140();
  if (*(int *)(lVar9 + 0x3c) != 0) {
    func_0x0001082ca12c();
    func_0x0001082ca16c();
  }
  puVar3 = &UNK_10f485429;
  if (*(char *)(lVar9 + 0x44) == '\0') {
    puVar3 = &UNK_10f4854a6;
  }
  FUN_10828bae8((long)plVar8 + *(long *)(*plVar8 + -0x18),puVar3);
  if (*(int *)(lVar9 + 0x3c) != 0) {
    func_0x0001082ca12c();
    func_0x0001082ca16c();
  }
  func_0x0001082ca12c();
  func_0x0001082ca16c();
  func_0x0001082ca12c();
  func_0x0001082ca16c();
  if (*(char *)(lVar9 + 0x44) == '\x01') {
    func_0x0001082ca12c();
    func_0x0001082ca16c();
  }
  func_0x0001082ca12c();
  func_0x0001082ca16c();
  if (*(int *)(lVar9 + 0x3c) == 0) {
    func_0x0001082ca12c();
    func_0x0001082ca140();
  }
  func_0x0001082ca12c();
  func_0x0001082ca140();
  func_0x0001082ca12c();
  plVar8 = (long *)&UNK_10f48557e;
  func_0x0001082ca140();
  FUN_1083a3ca0(lStack_168);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x0001082ca194();
    __Unwind_Resume();
    (**(code **)(*plVar8 + 0x40))
              (*(undefined4 *)(*(long *)(lVar10 + 0x48) + 0x110c),
               *(undefined4 *)(*(long *)(lVar10 + 0x48) + 0x1110),plVar8,
               *(undefined4 *)((long)param_2 + 0x24));
    if (*(char *)(lVar10 + 0x44) != '\x01') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001082c9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x40))
              ((float)*(int *)(*(long *)(lVar10 + 0x48) + 0x1114),
               (float)*(int *)(*(long *)(lVar10 + 0x48) + 0x111c),plVar8,(int)param_2[4]);
    return;
  }
  return;
}



/* Entry: 1082c9da4; end: 1082c9e2f;  */

void FUN_1082c9da4(long param_1,long *param_2,long param_3)

{
  (**(code **)(*param_2 + 0x40))
            (*(undefined4 *)(*(long *)(param_3 + 0x48) + 0x110c),
             *(undefined4 *)(*(long *)(param_3 + 0x48) + 0x1110),param_2,
             *(undefined4 *)(param_1 + 0x24));
  if (*(char *)(param_3 + 0x44) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001082c9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x40))
              ((float)*(int *)(*(long *)(param_3 + 0x48) + 0x1114),
               (float)*(int *)(*(long *)(param_3 + 0x48) + 0x111c),param_2,
               *(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1082c9e30; end: 1082c9e7f;  */

void FUN_1082c9e30(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x40) << 3;
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar1 = uVar2 | 1;
  }
  uVar2 = uVar2 | 2;
  if (*(int *)(param_1 + 0x3c) != 1) {
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001082c9e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,uVar2 | (uint)*(byte *)(param_1 + 0x44) << 2,"unknown",7);
  return;
}



/* Entry: 1082c9e80; end: 1082c9e93;  */

void FUN_1082c9e80(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082ca0cc();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c9e94; end: 1082c9e9f;  */

undefined * FUN_1082c9e94(void)

{
  return &UNK_10f4855ac;
}



/* Entry: 1082c9ea0; end: 1082c9fc7;  */

void FUN_1082c9ea0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x50;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar1 = &PTR_DAT_110a380f0;
  *(undefined8 *)((long)puVar1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined1 *)((long)puVar1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  puVar2 = (undefined4 *)0x1198;
  __Znwm();
  puVar3 = *(undefined4 **)(param_2 + 0x48);
  *puVar2 = *puVar3;
  *(undefined8 *)(puVar2 + 0x441) = *(undefined8 *)(puVar3 + 0x441);
  *(undefined8 *)(puVar2 + 0x443) = *(undefined8 *)(puVar3 + 0x443);
  uVar4 = *(undefined8 *)(puVar3 + 0x445);
  *(undefined8 *)(puVar2 + 0x447) = *(undefined8 *)(puVar3 + 0x447);
  *(undefined8 *)(puVar2 + 0x445) = uVar4;
  FUN_10833043c(puVar2 + 0x44a,puVar3 + 0x44a);
  FUN_10833043c(puVar2 + 0x458,puVar3 + 0x458);
  _memcpy(puVar2 + 1,puVar3 + 1,0x100);
  _memcpy(puVar2 + 0x41,puVar3 + 0x41,0x1000);
  puVar1[9] = puVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c9fc8; end: 1082ca013;  */

void FUN_1082c9fc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110a38158;
  puVar1[4] = 0xffffffffffffffff;
  puVar1[3] = 0x100000000;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082ca014; end: 1082ca0b7;  */

bool FUN_1082ca014(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c)) {
    lVar2 = *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_2 + 0x48);
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x110c) == *(float *)(lVar3 + 0x110c)) &&
       (bVar1 = false, !NAN(*(float *)(lVar2 + 0x1110)) && !NAN(*(float *)(lVar3 + 0x1110)))) {
      bVar1 = *(float *)(lVar2 + 0x1110) == *(float *)(lVar3 + 0x1110);
    }
    if ((((bVar1) && (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
        (*(char *)(param_1 + 0x44) == *(char *)(param_2 + 0x44))) &&
       (((*(int *)(lVar2 + 0x1114) == *(int *)(lVar3 + 0x1114) &&
         (*(int *)(lVar2 + 0x1118) == *(int *)(lVar3 + 0x1118))) &&
        (*(int *)(lVar2 + 0x111c) == *(int *)(lVar3 + 0x111c))))) {
      return *(int *)(lVar2 + 0x1120) == *(int *)(lVar3 + 0x1120);
    }
  }
  return false;
}



/* Entry: 1082ca0b8; end: 1082ca0cb;  */

void FUN_1082ca0b8(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ca0cc; end: 1082ca0fb;  */

undefined8 * FUN_1082ca0cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a380f0;
  FUN_10829c12c(param_1 + 9);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082ca0fc; end: 1082ca1ef;  */

/* WARNING: Removing unreachable block (ram,0x000108297ce0) */

undefined8 * FUN_1082ca0fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  lVar1 = unaff_x19[4];
  if (param_4 != 0) {
    lVar1 = param_4;
  }
  if (1 < *(int *)(unaff_x19[3] + 0x20)) {
    lVar3 = *(long *)(*(long *)(unaff_x19[3] + 0x18) + 8);
    if (lVar3 == 0) {
      lVar3 = lVar1;
      func_0x0001083a3dfc(param_1);
      if (lVar3 != 0) {
        _strlen(lVar1);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar1);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    if (1 < *(int *)(unaff_x20 + 3)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar3 + 0x30) >> 5 & 1) != 0) {
        func_0x000108298c5c(unaff_x19[3]);
        func_0x000108298a30();
      }
      func_0x000108298c28(*unaff_x19);
      FUN_1082db500();
      if ((int)unaff_x20 != 0) {
        FUN_1083a3a90(param_1,&UNK_10f482cdf);
        unaff_x20 = param_1;
      }
      func_0x000108298b3c();
      return unaff_x20;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108297d08);
  (*pcVar2)();
}



/* Entry: 1082ca1f0; end: 1082ca293;  */

void FUN_1082ca1f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_110a38418;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082ca294; end: 1082ca34b;  */

void FUN_1082ca294(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,byte *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_6 == 3) {
    if ((*param_7 & 1) == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uStack_38 = *(undefined8 *)(param_7 + 0xc);
      uVar2 = *(undefined8 *)(param_7 + 4);
      uStack_40 = uVar2;
      FUN_10827f6c8(&uStack_40);
      uStack_40 = CONCAT44(param_3,(int)uVar2);
      uStack_38 = CONCAT44(0x3f800000,param_4);
      puVar1 = (undefined8 *)0x28;
      FUN_1082a37b0();
      puVar1[1] = 0x100000032;
      *(undefined2 *)(puVar1 + 2) = 0x100;
      *puVar1 = &PTR_DAT_110a381a0;
      *(undefined8 *)((long)puVar1 + 0x1c) = uStack_38;
      *(undefined8 *)((long)puVar1 + 0x14) = uStack_40;
      *(undefined4 *)((long)puVar1 + 0x24) = param_5;
      uStack_48 = 0;
      FUN_1082a3670(&uStack_48);
    }
    *param_1 = puVar1;
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1082ca34c; end: 1082ca37b;  */

void FUN_1082ca34c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001082cac74();
  *param_1 = &PTR_DAT_110a384c8;
  param_1[1] = 0x7fc00000ffffffff;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1082ca37c; end: 1082ca3bf;  */

undefined * FUN_1082ca37c(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0xf) {
    return (&PTR_PTR_110a38510)[param_1];
  }
  FUN_10841076c(&UNK_10f4855b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ca3c0);
  (*pcVar1)();
}



/* Entry: 1082ca3c0; end: 1082ca553;  */

/* WARNING: Removing unreachable block (ram,0x0001082ca2c4) */

void FUN_1082ca3c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,uint *param_7,int param_8,long param_9,
                  int param_10)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = *(int *)(param_6 + 1);
  if (param_8 == 2) {
    if ((((iVar2 == 3) && ((*param_7 & 1) != 0)) &&
        ((*(byte *)(*(long *)(param_9 + 0x10) + 4) & 1) == 0)) &&
       ((*(byte *)(*(long *)(param_9 + 0x10) + 0x5c) & 1) == 0)) {
      if ((*param_7 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        uStack_38 = *(undefined8 *)(param_7 + 3);
        uVar7 = *(undefined8 *)(param_7 + 1);
        uStack_40 = uVar7;
        FUN_10827f6c8(&uStack_40);
        uStack_40 = CONCAT44(param_3,(int)uVar7);
        uStack_38 = CONCAT44(0x3f800000,param_4);
        puVar5 = (undefined8 *)0x28;
        FUN_1082a37b0();
        puVar5[1] = 0x100000032;
        *(undefined2 *)(puVar5 + 2) = 0x100;
        *puVar5 = &PTR_DAT_110a381a0;
        *(undefined8 *)((long)puVar5 + 0x1c) = uStack_38;
        *(undefined8 *)((long)puVar5 + 0x14) = uStack_40;
        *(undefined4 *)((long)puVar5 + 0x24) = param_5;
        uStack_48 = 0;
        FUN_1082a3670(&uStack_48);
      }
      *param_1 = puVar5;
      return;
    }
    puVar4 = &UNK_10df1a010;
LAB_1082ca468:
    uVar6 = *(uint *)(puVar4 + (long)iVar2 * 4);
    if ((uVar6 & 0xf0) == 0) {
      if (param_8 != 2 || iVar2 == 3) goto LAB_1082ca4a8;
    }
    else if ((*(char *)(*(long *)(param_9 + 0x10) + 4) == '\x01') && (param_8 != 2 || iVar2 == 3)) {
LAB_1082ca4a8:
      if ((param_10 == 0) || (iVar2 != 0xc)) goto LAB_1082ca510;
    }
    puVar5 = param_6;
    func_0x0001082cac58();
    uVar1 = *(undefined4 *)(param_6 + 1);
    puVar5[1] = 0x100000038;
    *(undefined1 *)(puVar5 + 2) = 1;
    *(bool *)((long)puVar5 + 0x11) = param_8 == 2;
    *puVar5 = &PTR_DAT_110a38378;
    *(undefined4 *)((long)puVar5 + 0x14) = uVar1;
    param_6 = puVar5;
  }
  else {
    if (iVar2 != 3) {
      uVar3 = ((ulong)*param_7 & 2) >> 1;
LAB_1082ca448:
      puVar4 = &UNK_10df19f20 + (ulong)(param_8 != 0) * 0x3c + uVar3 * 0x78;
      goto LAB_1082ca468;
    }
    if ((int)((ulong)*param_7 & 2) == 0) {
      uVar3 = 0;
      goto LAB_1082ca448;
    }
    if ((param_8 != 0) || ((*(byte *)(param_9 + 0x1c) >> 4 & 1) == 0)) {
      uVar3 = 1;
      goto LAB_1082ca448;
    }
    uVar6 = 0x3c004002;
LAB_1082ca510:
    func_0x0001082cac58();
    param_6[1] = 0x100000033;
    *(undefined1 *)(param_6 + 2) = 0;
    *(bool *)((long)param_6 + 0x11) = param_8 == 2;
    *param_6 = &PTR_DAT_110a38308;
    *(uint *)((long)param_6 + 0x14) = uVar6;
  }
  *param_1 = param_6;
  return;
}



/* Entry: 1082ca554; end: 1082ca66b;  */

uint FUN_1082ca554(long param_1,uint *param_2,int *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *param_3;
  if (iVar2 == 2) {
    uVar4 = *(uint *)(&UNK_10df1a010 + (long)iVar1 * 4);
    if (iVar1 == 3) {
      if ((((*param_2 & 1) != 0) && ((*(byte *)(*(long *)(param_4 + 0x10) + 4) & 1) == 0)) &&
         (*(char *)(*(long *)(param_4 + 0x10) + 0x5c) != '\x01')) {
        uVar3 = 4;
        goto LAB_1082ca634;
      }
      if (((uVar4 & 0xf0) == 0) || ((*(byte *)(*(long *)(param_4 + 0x10) + 4) & 1) != 0)) {
        uVar3 = 0;
        goto LAB_1082ca634;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar4 = *(uint *)(&UNK_10df19f20 +
                     (long)iVar1 * 4 +
                     (ulong)(iVar2 != 0) * 0x3c + ((ulong)(*param_2 >> 1) & 1) * 0x78);
    uVar3 = uVar4 >> 0x1d & 2 |
            (uint)((uVar4 & 0xf0) != 0) & (*(byte *)(*(long *)(param_4 + 0x10) + 4) ^ 1);
  }
  uVar3 = uVar3 | (param_5 != 0 && iVar1 == 0xc);
LAB_1082ca634:
  if (((uVar4 ^ 0xffffffff) & 0x24000000) != 0) {
    uVar3 = uVar3 | 4;
  }
  if (((uVar4 >> 0x1b & 1) != 0) ||
     ((((uVar4 >> 0x1c & 1) != 0 && (iVar2 == 0)) && ((*param_2 >> 1 & 1) != 0)))) {
    uVar3 = uVar3 | 0x80;
  }
  return uVar3;
}



/* Entry: 1082ca66c; end: 1082ca723;  */

undefined8 FUN_1082ca66c(void)

{
  int iVar1;
  
  if ((bRam0000000113826bf8 & 1) == 0) {
    iVar1 = 0x13826bf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113826bf0 = 0x74704002;
      ___cxa_guard_release(0x113826bf8);
    }
  }
  if ((bRam0000000113826c18 & 1) == 0) {
    iVar1 = 0x13826c18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113826c08 = 0x100000033;
      uRam0000000113826c10 = 0;
      ppuRam0000000113826c00 = &PTR_DAT_110a38308;
      uRam0000000113826c14 = uRam0000000113826bf0;
      ___cxa_guard_release(0x113826c18);
    }
  }
  return 0x113826c00;
}



/* Entry: 1082ca724; end: 1082ca843;  */

/* WARNING: Removing unreachable block (ram,0x0001082ca2c4) */

void FUN_1082ca724(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,uint *param_6,int param_7,long param_8)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_7 != 2) {
    if (((param_7 != 0) || ((*param_6 >> 1 & 1) == 0)) ||
       ((*(byte *)(param_8 + 0x1c) >> 4 & 1) == 0)) {
      *param_1 = 0;
      return;
    }
    func_0x0001082cac58();
    param_6[2] = 0x33;
    param_6[3] = 1;
    *(undefined2 *)(param_6 + 4) = 0;
    *(undefined ***)param_6 = &PTR_DAT_110a38308;
    uVar2 = 0x3c004002;
    goto LAB_1082ca800;
  }
  bVar1 = *(byte *)(*(long *)(param_8 + 0x10) + 4);
  if ((*param_6 & 1) == 0) {
    if ((bVar1 & 1) != 0) {
LAB_1082ca774:
      func_0x0001082cac58();
      param_6[2] = 0x33;
      param_6[3] = 1;
      *(undefined2 *)(param_6 + 4) = 0x100;
      *(undefined ***)param_6 = &PTR_DAT_110a38308;
      uVar2 = 0x24d04032;
      goto LAB_1082ca800;
    }
  }
  else {
    if ((bVar1 & 1) != 0) goto LAB_1082ca774;
    if ((*(byte *)(*(long *)(param_8 + 0x10) + 0x5c) & 1) == 0) {
      if ((*param_6 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        uStack_38 = *(undefined8 *)(param_6 + 3);
        uVar4 = *(undefined8 *)(param_6 + 1);
        uStack_40 = uVar4;
        FUN_10827f6c8(&uStack_40);
        uStack_40 = CONCAT44(param_3,(int)uVar4);
        uStack_38 = CONCAT44(0x3f800000,param_4);
        puVar3 = (undefined8 *)0x28;
        FUN_1082a37b0();
        puVar3[1] = 0x100000032;
        *(undefined2 *)(puVar3 + 2) = 0x100;
        *puVar3 = &PTR_DAT_110a381a0;
        *(undefined8 *)((long)puVar3 + 0x1c) = uStack_38;
        *(undefined8 *)((long)puVar3 + 0x14) = uStack_40;
        *(undefined4 *)((long)puVar3 + 0x24) = param_5;
        uStack_48 = 0;
        FUN_1082a3670(&uStack_48);
      }
      *param_1 = puVar3;
      return;
    }
  }
  func_0x0001082cac58();
  param_6[2] = 0x38;
  param_6[3] = 1;
  *(undefined2 *)(param_6 + 4) = 0x101;
  *(undefined ***)param_6 = &PTR_DAT_110a38378;
  uVar2 = 3;
LAB_1082ca800:
  param_6[5] = uVar2;
  *param_1 = param_6;
  FUN_1082a3670(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1082ca844; end: 1082ca8eb;  */

uint FUN_1082ca844(uint *param_1,int *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    uVar3 = 0x24d04032;
    if ((((*param_1 & 1) == 0) || ((*(byte *)(*(long *)(param_3 + 0x10) + 4) & 1) != 0)) ||
       (*(char *)(*(long *)(param_3 + 0x10) + 0x5c) == '\x01')) {
      if ((*(byte *)(*(long *)(param_3 + 0x10) + 4) & 1) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar3 = *(uint *)(&UNK_10df19f2c +
                     ((ulong)(*param_1 >> 1) & 1) * 0x78 + (ulong)(iVar1 != 0) * 0x3c);
    uVar2 = uVar3 >> 0x1d & 2 |
            (uint)((uVar3 & 0xf0) != 0) & (*(byte *)(*(long *)(param_3 + 0x10) + 4) ^ 1);
  }
  if (((uVar3 ^ 0xffffffff) & 0x24000000) != 0) {
    uVar2 = uVar2 | 4;
  }
  if (((uVar3 >> 0x1b & 1) != 0) ||
     ((((uVar3 >> 0x1c & 1) != 0 && (iVar1 == 0)) && ((*param_1 >> 1 & 1) != 0)))) {
    uVar2 = uVar2 | 0x80;
  }
  return uVar2;
}



/* Entry: 1082ca8ec; end: 1082ca937;  */

undefined8 FUN_1082ca8ec(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1 + 0x14;
  FUN_10828e84c(uVar1,param_2 + 0x14);
  if (((uVar1 & 1) == 0) && (*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1082ca938; end: 1082ca93f;  */

void FUN_1082ca938(void)

{
  return;
}



/* Entry: 1082ca940; end: 1082ca99f;  */

void FUN_1082ca940(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_2[3];
  plVar4 = (long *)*param_2;
  uVar3 = *(uint *)(lVar5 + 0x14);
  if ((uVar3 & 0xf0) != 0) {
    FUN_1082ca9a0(plVar4,uVar3 >> 4 & 0xf,param_2[7],param_2[4],param_2[5]);
    uVar3 = *(uint *)(lVar5 + 0x14);
  }
  switch(uVar3 & 0xf) {
  case 0:
    lVar5 = *(long *)(*plVar4 + -0x18);
    puVar2 = &UNK_10f485681;
    break;
  case 1:
    lVar5 = *(long *)(*plVar4 + -0x18);
    puVar2 = &UNK_10f481e56;
    break;
  case 2:
    FUN_1082cac44();
    puVar2 = &UNK_10f484eb1;
    lVar5 = extraout_x8_00;
    break;
  case 3:
    FUN_1082cac44();
    puVar2 = &UNK_10f485692;
    lVar5 = extraout_x8_01;
    break;
  case 4:
    FUN_1082cac44();
    puVar2 = &UNK_10f4856a2;
    lVar5 = extraout_x8;
    break;
  case 5:
    FUN_1082cac44();
    puVar2 = &UNK_10f4856ba;
    lVar5 = extraout_x8_02;
    break;
  default:
    FUN_10841076c(&UNK_10f4856d7,uVar3 & 0xf,param_2[6],param_2[4]);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082caa70);
    (*pcVar1)();
  }
  FUN_10828bae8((long)plVar4 + lVar5,puVar2);
  return;
}



/* Entry: 1082ca9a0; end: 1082caa6f;  */

void FUN_1082ca9a0(long *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x8_02;
  
  switch(param_2) {
  case 0:
    lVar3 = *(long *)(*param_1 + -0x18);
    puVar2 = &UNK_10f485681;
    break;
  case 1:
    lVar3 = *(long *)(*param_1 + -0x18);
    puVar2 = &UNK_10f481e56;
    break;
  case 2:
    FUN_1082cac44();
    puVar2 = &UNK_10f484eb1;
    lVar3 = extraout_x8_00;
    break;
  case 3:
    FUN_1082cac44();
    puVar2 = &UNK_10f485692;
    lVar3 = extraout_x8_01;
    break;
  case 4:
    FUN_1082cac44();
    puVar2 = &UNK_10f4856a2;
    lVar3 = extraout_x8;
    break;
  case 5:
    FUN_1082cac44();
    puVar2 = &UNK_10f4856ba;
    lVar3 = extraout_x8_02;
    break;
  default:
    FUN_10841076c(&UNK_10f4856d7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082caa70);
    (*pcVar1)();
  }
  FUN_10828bae8((long)param_1 + lVar3,puVar2);
  return;
}



/* Entry: 1082caa70; end: 1082caa77;  */

void FUN_1082caa70(void)

{
  return;
}



/* Entry: 1082caa78; end: 1082cab4f;  */

void FUN_1082caa78(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined1 auStack_68 [24];
  
  FUN_1082d9e58(auStack_68,param_9,param_3,param_1 + 8,param_4,param_6,
                *(undefined4 *)(param_9 + 0x14));
  FUN_10828bae8((long)param_2 + *(long *)(*param_2 + -0x18),&UNK_10f481e56);
  FUN_1082b72c4(param_2,param_5,param_6,param_7,param_8,param_9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 1082cab50; end: 1082cab77;  */

void FUN_1082cab50(long param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 auStack_38 [8];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 8) != -1) {
    FUN_10831fbe8(auStack_38,*(undefined4 *)(param_3 + 0x14),*(int *)(param_1 + 8));
    switch(uStack_28) {
    case 1:
      FUN_1082da030(*puStack_30);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8 + 0x20))(param_2);
      return;
    case 2:
      FUN_1082da030(*puStack_30,puStack_30[1]);
                    /* WARNING: Could not recover jumptable at 0x0001082da01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_02 + 0x40))(param_2);
      return;
    case 3:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x60))(param_2);
      return;
    case 4:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2],puStack_30[3]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_01 + 0x80))(param_2);
      return;
    default:
      return;
    }
  }
  return;
}



/* Entry: 1082cab78; end: 1082cabef;  */

void FUN_1082cab78(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_2[1];
  func_0x00010828bb5c(lVar1,0,2,0x14,&DAT_10f3c3399,auStack_28);
  *(int *)(param_1 + 8) = (int)lVar1;
  FUN_10828bae8(*param_2 + *(long *)(*(long *)*param_2 + -0x18),&UNK_10f484eb1);
  return;
}



/* Entry: 1082cabf0; end: 1082cac43;  */

void FUN_1082cabf0(long param_1,long *param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_3 + 0x24);
  if (*(float *)(param_1 + 0xc) != fVar1) {
    (**(code **)(*param_2 + 0x20))(fVar1,param_2,*(undefined4 *)(param_1 + 8));
    *(float *)(param_1 + 0xc) = fVar1;
  }
  return;
}



/* Entry: 1082cac44; end: 1082cac87;  */

void FUN_1082cac44(void)

{
  return;
}



/* Entry: 1082cac88; end: 1082cb063;  */

void FUN_1082cac88(undefined1 *param_1,long *param_2,long **UNRECOVERED_JUMPTABLE,long **param_4,
                  uint param_5,long **param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  long **pplVar9;
  long **pplVar10;
  uint uVar11;
  long **extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  long *plVar18;
  float fVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  long *plVar23;
  float fVar24;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long **pplStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_94;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 auStack_68 [4];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_4 + 6);
  iVar3 = iVar1 + -1;
  uVar8 = iVar3 == 4;
  switch(iVar3) {
  case 0:
    pplVar9 = param_4;
    func_0x0001082cc0b4();
    plStack_70 = extraout_x8_01;
    func_0x0001082cc18c(&pplStack_d0,*(undefined4 *)param_4,*(undefined4 *)((long)param_4 + 4),
                        *(undefined4 *)(param_4 + 1),*(undefined4 *)((long)param_4 + 0xc),
                        &plStack_70);
    plVar14 = plStack_70;
    plStack_70 = (long *)0x0;
    param_4 = pplVar9;
    goto joined_r0x0001082cadf8;
  case 1:
    func_0x0001082cc0b4();
    plStack_78 = extraout_x8_02;
    FUN_1082c960c(param_1,&plStack_78);
    uVar11 = (uint)param_4;
    pplVar10 = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = param_4;
    plStack_90 = plStack_78;
joined_r0x0001082caf18:
    param_4 = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = pplVar10;
    if (plStack_90 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(long ***)(*plStack_90 + 8);
      func_0x0001082cc11c();
      if ((bool)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001082cae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_1082cafc8;
    }
    break;
  case 2:
    fVar17 = *(float *)((long)param_4 + 0x14);
    bVar5 = true;
    uVar8 = false;
    if (0.5 <= *(float *)(param_4 + 2)) {
      bVar5 = false;
      uVar8 = false;
      if (!NAN(fVar17)) {
        bVar5 = fVar17 < 0.5;
        uVar8 = fVar17 == 0.5;
      }
    }
    if (!bVar5) {
      fVar17 = ABS(*(float *)(param_4 + 2) - fVar17);
      pplVar9 = param_4;
      func_0x0001082cc0b4();
      uVar8 = fVar17 == 0.00024414062;
      if (fVar17 <= 0.00024414062) {
        pplVar10 = &plStack_88;
        param_5 = 0xf;
        plStack_88 = extraout_x8_04;
        FUN_1082cb064(param_1);
        uVar11 = (uint)UNRECOVERED_JUMPTABLE;
        param_6 = param_4;
        plStack_90 = plStack_88;
      }
      else {
        pplVar10 = &plStack_90;
        plStack_90 = extraout_x8_04;
        func_0x0001082cc0fc();
        uVar11 = (uint)pplVar9;
        UNRECOVERED_JUMPTABLE = pplVar9;
      }
      goto joined_r0x0001082caf18;
    }
    pplVar9 = param_4;
    func_0x0001082cc0b4();
    plStack_80 = extraout_x8_00;
    func_0x0001082cc18c(&pplStack_d0,*(undefined4 *)param_4,*(undefined4 *)((long)param_4 + 4),
                        *(undefined4 *)(param_4 + 1),*(undefined4 *)((long)param_4 + 0xc),
                        &plStack_80);
    plVar14 = plStack_80;
    plStack_80 = (long *)0x0;
    param_4 = pplVar9;
joined_r0x0001082cadf8:
    if (plVar14 != (long *)0x0) {
      func_0x0001082cbf50();
    }
    *param_1 = 1;
    pplVar9 = pplStack_d0;
LAB_1082cae0c:
    *(long ***)(param_1 + 8) = pplVar9;
    break;
  case 3:
  case 4:
    bVar5 = false;
    uVar11 = 0;
    plVar14 = (long *)0x0;
    for (lVar15 = 0; lVar15 != 4; lVar15 = lVar15 + 1) {
      plVar16 = param_4[lVar15 + 2];
      auStack_68[lVar15] = plVar16;
      fVar17 = SUB84(plVar16,0);
      fVar19 = (float)((ulong)plVar16 >> 0x20);
      uVar8 = true;
      if ((fVar17 == 0.0) == (fVar19 != 0.0)) goto LAB_1082cad88;
      if (fVar17 != 0.0) {
        bVar4 = true;
        if ((0.5 <= fVar17) && (bVar4 = false, !NAN(fVar19))) {
          bVar4 = fVar19 < 0.5;
        }
        if (bVar4) {
          auStack_68[lVar15] = 0;
          bVar5 = true;
        }
        else {
          if (fVar17 != fVar19) goto code_r0x0001082caf78;
          if (uVar11 == 0) {
            uVar11 = 1 << (ulong)((uint)lVar15 & 0x1f);
            plVar14 = plVar16;
          }
          else {
            if (fVar17 != SUB84(plVar14,0)) goto code_r0x0001082caf78;
            uVar11 = uVar11 | 1 << (ulong)((uint)lVar15 & 0x1f);
          }
        }
      }
    }
    if (uVar11 < 0x10) {
      uVar8 = (1 << (ulong)(uVar11 & 0x1f) & 0x935eU) == 0;
      if ((bool)uVar8) {
        if (uVar11 == 0) {
          pplVar9 = param_4;
          func_0x0001082cc0b4();
          plStack_e0 = extraout_x8_05;
          func_0x0001082cc18c(&pplStack_d0,*(undefined4 *)param_4,*(undefined4 *)((long)param_4 + 4)
                              ,*(undefined4 *)(param_4 + 1),*(undefined4 *)((long)param_4 + 0xc),
                              &plStack_e0);
          plVar14 = plStack_e0;
          plStack_e0 = (long *)0x0;
          param_4 = pplVar9;
          goto joined_r0x0001082cadf8;
        }
        goto code_r0x0001082caf78;
      }
      uStack_c8 = 0;
      uStack_94 = 0;
      pplStack_d0 = param_4;
      if (bVar5) {
        func_0x00010827f2ac(&pplStack_d0);
        FUN_108384f00();
      }
      param_6 = pplStack_d0;
      func_0x0001082cc0b4();
      pplVar9 = &plStack_d8;
      plStack_d8 = extraout_x8_03;
      FUN_1082cb064(param_1);
      param_4 = UNRECOVERED_JUMPTABLE;
      param_5 = uVar11;
joined_r0x0001082cafc0:
      UNRECOVERED_JUMPTABLE = pplVar9;
      if (plStack_d8 != (long *)0x0) {
        func_0x0001082cbf50();
      }
    }
    else {
code_r0x0001082caf78:
      fVar17 = *(float *)(param_4 + 2);
      fVar19 = *(float *)((long)param_4 + 0x14);
      fVar22 = *(float *)(param_4 + 4);
      fVar24 = *(float *)((long)param_4 + 0x24);
      plVar14 = (long *)*param_2;
      *param_2 = 0;
      bVar5 = true;
      bVar4 = false;
      if (iVar1 == 4) {
        bVar5 = false;
        bVar4 = true;
        if (!NAN(fVar17)) {
          bVar5 = fVar17 < 0.5;
          bVar4 = false;
        }
      }
      bVar6 = true;
      bVar7 = false;
      if (bVar5 == bVar4) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar19)) {
          bVar6 = fVar19 < 0.5;
          bVar7 = false;
        }
      }
      bVar5 = true;
      bVar4 = false;
      if (bVar6 == bVar7) {
        bVar5 = false;
        bVar4 = true;
        if (!NAN(fVar22)) {
          bVar5 = fVar22 < 0.5;
          bVar4 = false;
        }
      }
      bVar6 = true;
      uVar8 = false;
      bVar7 = false;
      if (bVar5 == bVar4) {
        bVar6 = false;
        uVar8 = false;
        bVar7 = true;
        if (!NAN(fVar24)) {
          bVar6 = fVar24 < 0.5;
          uVar8 = fVar24 == 0.5;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        pplVar9 = &plStack_e8;
        plStack_e8 = plVar14;
        func_0x0001082cc0fc();
        plStack_d8 = plStack_e8;
        goto joined_r0x0001082cafc0;
      }
      *param_1 = 0;
      *(long **)(param_1 + 8) = plVar14;
    }
    break;
  default:
LAB_1082cad88:
    func_0x0001082cc0b4();
    *param_1 = 0;
    pplVar9 = extraout_x8;
    goto LAB_1082cae0c;
  }
  uVar11 = (uint)param_4;
  func_0x0001082cc11c();
  if ((bool)uVar8) {
    return;
  }
LAB_1082cafc8:
  ___stack_chk_fail();
  plVar14 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    func_0x0001082cbf50();
  }
  func_0x0001082cc0ac();
  if ((uVar11 & 0xfffffffd) == 1) {
    plVar16 = plVar14;
    func_0x0001082cc0c0();
    plVar12 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (long *)0x0;
    if (plVar12 == (long *)0x0) {
      uVar13 = 1;
    }
    else {
      uVar13 = *(uint *)(plVar12 + 6) & 1;
    }
    *(undefined4 *)(plVar16 + 1) = 7;
    plVar16[3] = (long)(plVar16 + 2);
    plVar16[4] = 0x200000000;
    plVar16[5] = 0;
    *(uint *)(plVar16 + 6) = uVar13;
    *(undefined4 *)((long)plVar16 + 0x34) = 0;
    *(undefined1 *)(plVar16 + 7) = 0;
    *plVar16 = (long)&PTR_FUN_110a38598;
    plVar18 = param_6[1];
    plVar12 = *param_6;
    plVar21 = param_6[3];
    plVar20 = param_6[2];
    plVar23 = param_6[4];
    uVar2 = *(undefined4 *)(param_6 + 6);
    *(long **)((long)plVar16 + 100) = param_6[5];
    *(long **)((long)plVar16 + 0x5c) = plVar23;
    *(long **)((long)plVar16 + 0x54) = plVar21;
    *(long **)((long)plVar16 + 0x4c) = plVar20;
    *(long **)((long)plVar16 + 0x44) = plVar18;
    *(long **)((long)plVar16 + 0x3c) = plVar12;
    *(undefined4 *)((long)plVar16 + 0x6c) = uVar2;
    *(uint *)(plVar16 + 0xe) = uVar11;
    *(uint *)((long)plVar16 + 0x74) = param_5;
    plVar12 = plVar16;
    func_0x0001082cc0d4();
    func_0x0001082cc194();
    if (plVar12 != (long *)0x0) {
      func_0x0001082cbf50();
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    plVar16 = *UNRECOVERED_JUMPTABLE;
    *UNRECOVERED_JUMPTABLE = (long *)0x0;
  }
  *(undefined1 *)plVar14 = uVar8;
  plVar14[1] = (long)plVar16;
  return;
}



/* Entry: 1082cb064; end: 1082cb16f;  */

void FUN_1082cb064(undefined8 *param_1,long *param_2,uint param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_3 & 0xfffffffd) == 1) {
    puVar6 = param_1;
    func_0x0001082cc0c0();
    lVar4 = *param_2;
    *param_2 = 0;
    if (lVar4 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(uint *)(lVar4 + 0x30) & 1;
    }
    *(undefined4 *)(puVar6 + 1) = 7;
    puVar6[3] = puVar6 + 2;
    puVar6[4] = 0x200000000;
    puVar6[5] = 0;
    *(uint *)(puVar6 + 6) = uVar5;
    *(undefined4 *)((long)puVar6 + 0x34) = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    *puVar6 = &PTR_FUN_110a38598;
    uVar8 = param_5[1];
    uVar7 = *param_5;
    uVar10 = param_5[3];
    uVar9 = param_5[2];
    uVar11 = param_5[4];
    uVar1 = *(undefined4 *)(param_5 + 6);
    *(undefined8 *)((long)puVar6 + 100) = param_5[5];
    *(undefined8 *)((long)puVar6 + 0x5c) = uVar11;
    *(undefined8 *)((long)puVar6 + 0x54) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x4c) = uVar9;
    *(undefined8 *)((long)puVar6 + 0x44) = uVar8;
    *(undefined8 *)((long)puVar6 + 0x3c) = uVar7;
    *(undefined4 *)((long)puVar6 + 0x6c) = uVar1;
    *(uint *)(puVar6 + 0xe) = param_3;
    *(undefined4 *)((long)puVar6 + 0x74) = param_4;
    puVar2 = puVar6;
    func_0x0001082cc0d4();
    func_0x0001082cc194();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001082cbf50();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    puVar6 = (undefined8 *)*param_2;
    *param_2 = 0;
  }
  *(undefined1 *)param_1 = uVar3;
  param_1[1] = puVar6;
  return;
}



/* Entry: 1082cb170; end: 1082cb273;  */

void FUN_1082cb170(undefined8 *param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_3 & 0xfffffffd) == 1) {
    puVar6 = param_1;
    func_0x0001082cc0c0();
    lVar4 = *param_2;
    *param_2 = 0;
    if (lVar4 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(uint *)(lVar4 + 0x30) & 1;
    }
    *(undefined4 *)(puVar6 + 1) = 0x14;
    puVar6[3] = puVar6 + 2;
    puVar6[4] = 0x200000000;
    puVar6[5] = 0;
    *(uint *)(puVar6 + 6) = uVar5;
    *(undefined4 *)((long)puVar6 + 0x34) = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    *puVar6 = &PTR_DAT_110a38648;
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar10 = param_4[3];
    uVar9 = param_4[2];
    uVar11 = param_4[4];
    uVar1 = *(undefined4 *)(param_4 + 6);
    *(undefined8 *)((long)puVar6 + 100) = param_4[5];
    *(undefined8 *)((long)puVar6 + 0x5c) = uVar11;
    *(undefined8 *)((long)puVar6 + 0x54) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x4c) = uVar9;
    *(undefined8 *)((long)puVar6 + 0x44) = uVar8;
    *(undefined8 *)((long)puVar6 + 0x3c) = uVar7;
    *(undefined4 *)((long)puVar6 + 0x6c) = uVar1;
    *(uint *)(puVar6 + 0xe) = param_3;
    puVar2 = puVar6;
    func_0x0001082cc0d4();
    func_0x0001082cc194();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001082cbf50();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    puVar6 = (undefined8 *)*param_2;
    *param_2 = 0;
  }
  *(undefined1 *)param_1 = uVar3;
  param_1[1] = puVar6;
  return;
}



/* Entry: 1082cb274; end: 1082cb277;  */

undefined8 * FUN_1082cb274(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082cb278; end: 1082cb28b;  */

void FUN_1082cb278(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082cb28c; end: 1082cb297;  */

undefined * FUN_1082cb28c(void)

{
  return &UNK_10f485707;
}



/* Entry: 1082cb298; end: 1082cb2ef;  */

void FUN_1082cb298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  func_0x0001082cc0c0();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a38598;
  func_0x0001082cc06c();
  func_0x0001082cc134();
  puVar1[0xe] = param_2[0xe];
  *param_1 = puVar1;
  return;
}



/* Entry: 1082cb2f0; end: 1082cb34b;  */

void FUN_1082cb2f0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001082cc180();
  param_1[0xb] = 0;
  param_1[1] = 0x1138270b0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a38600;
  param_1[4] = 0xffffffffffffffff;
  param_1[3] = 0x100000000;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1082cb34c; end: 1082cb397;  */

void FUN_1082cb34c(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001082cb374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,*(uint *)(param_1 + 0x70) | *(int *)(param_1 + 0x74) << 3,"unknown",7);
  return;
}



/* Entry: 1082cb398; end: 1082cb3ab;  */

void FUN_1082cb398(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082cb3ac; end: 1082cb6f3;  */

void FUN_1082cb3ac(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar2 = param_1;
  func_0x0001082cbfd4();
  uVar1 = (undefined4)lVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x0001082cbffc();
  func_0x00010828bb5c();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  auStack_48[0] = 0x1138270b0;
  if ((*(byte *)(*(long *)(param_2 + 0x10) + 0x11) & 1) == 0) {
    FUN_1083a394c(auStack_48,&UNK_10f48572e);
  }
  else {
    FUN_1083a394c(auStack_48,&UNK_10f48575a);
  }
  switch(*(undefined4 *)(lVar3 + 0x74)) {
  case 1:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbfac();
    func_0x0001082cbf40();
    func_0x0001082cbf98();
    break;
  case 2:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbfc0();
    func_0x0001082cbf40();
    func_0x0001082cbf98();
    break;
  case 3:
    func_0x0001082cbf40();
    func_0x0001082cbf70();
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbff0();
    func_0x0001082cc044();
    func_0x0001082cbf40();
    func_0x0001082cbf98();
    break;
  case 4:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbfc0();
    func_0x0001082cbf40();
    func_0x0001082cbf84();
    break;
  default:
    goto LAB_1082cb670;
  case 6:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbf5c();
    func_0x0001082cbff0();
    func_0x0001082cc044();
    func_0x0001082cbf40();
    func_0x0001082cbfc0();
    break;
  case 8:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbfac();
    func_0x0001082cbf40();
    func_0x0001082cbf84();
    break;
  case 9:
    func_0x0001082cbf40();
    func_0x0001082cbf70();
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbff0();
    func_0x0001082cc044();
    func_0x0001082cbf40();
    func_0x0001082cbfac();
    break;
  case 0xc:
    func_0x0001082cbf40();
    func_0x0001082cbfe8();
    func_0x0001082cbf40();
    func_0x0001082cbf5c();
    func_0x0001082cbff0();
    func_0x0001082cc044();
    func_0x0001082cbf40();
    func_0x0001082cbf84();
    break;
  case 0xf:
    func_0x0001082cbf40();
    func_0x0001082cbf70();
    func_0x0001082cbf40();
    func_0x0001082cbf5c();
    func_0x0001082cbff0();
    func_0x0001082cc044();
  }
  func_0x0001082cbff0();
  func_0x0001082cbfe8();
LAB_1082cb670:
  if (*(int *)(lVar3 + 0x70) == 3) {
    func_0x0001082cbff0();
    func_0x0001082cc044();
  }
  func_0x0001082cc04c(&uStack_50);
  func_0x0001082cbff0();
  func_0x0001082cbfe8();
  FUN_1083a3ca0(uStack_50);
  func_0x0001082cc0e4();
  return;
}



/* Entry: 1082cb6f4; end: 1082cb873;  */

void FUN_1082cb6f4(int param_1)

{
  code *pcVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  func_0x0001082cc1a0();
  FUN_1082cb874();
  if (param_1 == 0) {
    return;
  }
  if (0xe < *(int *)(unaff_x20 + 0x74) - 1U) {
LAB_1082cb854:
    FUN_10841076c(&UNK_10f485cc6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082cb874);
    (*pcVar1)();
  }
  fVar7 = *(float *)(unaff_x20 + 0x44);
  fVar10 = *(float *)(unaff_x20 + 0x48);
  switch(*(int *)(unaff_x20 + 0x74)) {
  case 1:
    fVar11 = *(float *)(unaff_x20 + 0x4c);
    fVar7 = fVar7 + 0.5;
    break;
  case 2:
    fVar11 = *(float *)(unaff_x20 + 0x54);
    fVar10 = fVar10 + 0.5;
    goto code_r0x0001082cb7dc;
  case 3:
    fVar11 = *(float *)(unaff_x20 + 0x4c);
    fVar7 = fVar7 - fVar11;
    break;
  case 4:
    fVar2 = *(float *)(unaff_x20 + 0x5c);
    fVar7 = fVar7 - fVar2;
    fVar10 = fVar10 - fVar2;
    fVar11 = -0.5;
    fVar12 = -0.5;
    goto code_r0x0001082cb7fc;
  default:
    goto LAB_1082cb854;
  case 6:
    fVar11 = *(float *)(unaff_x20 + 0x54);
    fVar10 = fVar10 - fVar11;
code_r0x0001082cb7dc:
    fVar7 = fVar7 - fVar11;
    fVar2 = fVar11;
    fVar12 = -0.5;
    goto code_r0x0001082cb7fc;
  case 8:
    fVar2 = *(float *)(unaff_x20 + 100);
    fVar7 = fVar7 + 0.5;
    goto code_r0x0001082cb7a4;
  case 9:
    fVar11 = *(float *)(unaff_x20 + 0x4c);
    fVar7 = fVar7 + 0.5;
    goto code_r0x0001082cb7f0;
  case 0xc:
    fVar2 = *(float *)(unaff_x20 + 100);
    fVar7 = fVar7 - fVar2;
code_r0x0001082cb7a4:
    fVar10 = fVar10 - fVar2;
    fVar11 = -0.5;
    fVar12 = fVar2;
    goto code_r0x0001082cb7fc;
  case 0xf:
    fVar11 = *(float *)(unaff_x20 + 0x4c);
    fVar7 = fVar7 - fVar11;
code_r0x0001082cb7f0:
    fVar10 = fVar10 - fVar11;
    fVar2 = fVar11;
    fVar12 = fVar11;
    goto code_r0x0001082cb7fc;
  }
  fVar10 = fVar10 + 0.5;
  fVar2 = fVar11;
  fVar12 = fVar11;
code_r0x0001082cb7fc:
  uVar9 = 0;
  uVar8 = 0;
  func_0x0001082cc07c(*(float *)(unaff_x20 + 0x3c) + fVar12,*(float *)(unaff_x20 + 0x40) + fVar11,
                      fVar7,fVar10);
  fVar2 = fVar2 + 0.5;
  uVar3 = 0;
  uVar4 = 0;
  fVar10 = 1.0;
  func_0x0001082cc0c8();
  fVar10 = fVar10 / fVar2;
  uVar5 = 0;
  uVar6 = 0;
  func_0x0001082cc16c();
  func_0x0001082cc06c();
  *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x6c);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar9;
  *(ulong *)(unaff_x19 + 0x48) = CONCAT44(uVar8,fVar7);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
  *(ulong *)(unaff_x19 + 0x38) = CONCAT44(uVar5,fVar10);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
  *(ulong *)(unaff_x19 + 0x28) = CONCAT44(uVar3,fVar2);
  return;
}



/* Entry: 1082cb874; end: 1082cb8b3;  */

uint FUN_1082cb874(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_1;
  FUN_10818a9b0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0x10;
    FUN_1082cb8b4(lVar3,param_2 + 0x10);
    uVar1 = (uint)lVar3 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1082cb8b4; end: 1082cb8e7;  */

bool FUN_1082cb8b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 8) break;
    uVar1 = uVar2 + 1;
  } while (*(float *)(param_1 + uVar2 * 4) == *(float *)(param_2 + uVar2 * 4));
  return 7 < uVar2;
}



/* Entry: 1082cb8e8; end: 1082cb8fb;  */

void FUN_1082cb8e8(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082cb8fc; end: 1082cb907;  */

undefined * FUN_1082cb8fc(void)

{
  return &UNK_10f485d66;
}



/* Entry: 1082cb908; end: 1082cb95f;  */

void FUN_1082cb908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  func_0x0001082cc0c0();
  FUN_10828b420();
  *puVar1 = &PTR_DAT_110a38648;
  func_0x0001082cc06c();
  func_0x0001082cc134();
  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *param_1 = puVar1;
  return;
}



/* Entry: 1082cb960; end: 1082cb9bf;  */

void FUN_1082cb960(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001082cc180();
  param_1[1] = 0x1138270b0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a386b0;
  param_1[4] = 0xffffffffffffffff;
  param_1[3] = 0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1082cb9c0; end: 1082cba63;  */

void FUN_1082cb9c0(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  
  (**(code **)(*param_3 + 0x10))(param_3,2,*(undefined4 *)(param_1 + 0x70),&UNK_10f485f6d,9);
  (**(code **)(*param_3 + 0x10))(param_3,3,*(undefined4 *)(param_1 + 0x6c),&UNK_10f485f77,10);
  uVar1 = (ulong)*(byte *)(param_2 + 0x11);
  FUN_1082cbeec(uVar1,*(undefined1 *)(param_2 + 99),param_1 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x0001082cba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,1,uVar1,&UNK_10f485f82,0xb);
  return;
}



/* Entry: 1082cba64; end: 1082cba83;  */

ulong FUN_1082cba64(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    return 0;
  }
  uVar1 = param_1 + 0x3c;
  FUN_10815cc68();
  if ((int)uVar1 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      if (uVar2 == 8) break;
      uVar1 = uVar2 + 1;
    } while (*(float *)(param_1 + 0x4c + uVar2 * 4) == *(float *)(param_2 + 0x4c + uVar2 * 4));
    uVar1 = (ulong)(7 < uVar2);
  }
  return uVar1;
}



/* Entry: 1082cba84; end: 1082cba97;  */

void FUN_1082cba84(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082cba98; end: 1082cbcff;  */

void FUN_1082cba98(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_58 [8];
  long lStack_50;
  
  lVar6 = param_2[3];
  lVar5 = param_1;
  func_0x0001082cbfd4();
  *(int *)(param_1 + 0x20) = (int)lVar5;
  plVar7 = (long *)*param_2;
  func_0x0001082cc038();
  func_0x0001082cc0a4();
  func_0x0001082cc038();
  func_0x0001082cc0a4();
  lStack_50 = 0;
  bVar2 = *(byte *)(param_2[2] + 0x11);
  uVar4 = (uint)bVar2;
  func_0x0001082cbeec(bVar2,*(undefined1 *)(param_2[2] + 99),lVar6 + 0x3c);
  if (uVar4 != 0) {
    func_0x0001082cbffc();
    func_0x00010828bb5c();
    *(uint *)(param_1 + 0x28) = uVar4;
  }
  if (*(int *)(lVar6 + 0x6c) == 4) {
    func_0x0001082cbfd4();
    *(uint *)(param_1 + 0x24) = uVar4;
    if (lStack_50 != 0) {
      func_0x0001082cc10c();
      func_0x0001082cc164();
      func_0x0001082cc038();
      func_0x0001082cc0a4();
    }
    func_0x0001082cc038();
    func_0x0001082cc064();
    func_0x0001082cc038();
  }
  else {
    if (*(int *)(lVar6 + 0x6c) != 3) {
      func_0x0001082cc0ec(&UNK_10f485d06);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082cbcf4);
      (*pcVar3)();
    }
    func_0x0001082cbffc();
    func_0x00010828bb5c();
    *(uint *)(param_1 + 0x24) = uVar4;
    func_0x0001082cc038();
    func_0x0001082cc064();
    if (lStack_50 != 0) {
      func_0x0001082cc10c();
      func_0x0001082cc164();
    }
    func_0x0001082cc038();
  }
  func_0x0001082cc0a4();
  func_0x0001082cc038();
  func_0x0001082cc064();
  func_0x0001082cc038();
  func_0x0001082cc064();
  func_0x0001082cc038();
  func_0x0001082cc064();
  func_0x0001082cc038();
  func_0x0001082cc064();
  if (lStack_50 != 0) {
    func_0x0001082cc10c();
    func_0x0001082cc164();
  }
  puVar1 = &UNK_10f485f0b;
  if (*(int *)(lVar6 + 0x70) != 1) {
    puVar1 = &UNK_10f485f3c;
  }
  FUN_10829dbfc((long)plVar7 + *(long *)(*plVar7 + -0x18),puVar1);
  func_0x0001082cc04c(auStack_58);
  func_0x0001082cc038();
  func_0x0001082cc0a4();
  func_0x0001082cc0e4();
  return;
}



/* Entry: 1082cbd00; end: 1082cbeeb;  */

void FUN_1082cbd00(int param_1)

{
  code *pcVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  func_0x0001082cc1a0();
  FUN_1082cb874();
  if (param_1 != 0) {
    fVar12 = *(float *)(unaff_x20 + 0x3c);
    fVar14 = *(float *)(unaff_x20 + 0x40);
    fVar15 = *(float *)(unaff_x20 + 0x44);
    fVar13 = *(float *)(unaff_x20 + 0x4c);
    fVar11 = *(float *)(unaff_x20 + 0x50);
    if (*(int *)(unaff_x20 + 0x6c) == 4) {
      fVar10 = *(float *)(unaff_x20 + 0x5c);
      if (*(int *)(unaff_x19 + 0x28) == -1) {
        func_0x0001082cc00c(fVar13 * fVar13);
      }
      else {
        fVar2 = fVar11;
        if (fVar11 <= fVar13) {
          fVar2 = fVar13;
        }
        fVar5 = *(float *)(unaff_x20 + 0x60);
        if (*(float *)(unaff_x20 + 0x60) <= fVar10) {
          fVar5 = fVar10;
        }
        if (fVar5 <= fVar2) {
          fVar5 = fVar2;
        }
        func_0x0001082cc00c(fVar13 * fVar13);
        fVar2 = 1.0;
        func_0x0001082cc0c8(0x3f800000);
        (*extraout_x8_00)(fVar5,fVar2 / fVar5);
      }
    }
    else {
      if (*(int *)(unaff_x20 + 0x6c) != 3) {
        func_0x0001082cc0ec(&UNK_10f485d06);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1082cbeec);
        (*pcVar1)();
      }
      if (*(int *)(unaff_x19 + 0x28) == -1) {
        func_0x0001082cc0c8(1.0 / (fVar13 * fVar13),0x3f800000,fVar11 * fVar11);
        pcVar1 = extraout_x8_01;
      }
      else {
        func_0x0001082cc0c8();
        if (fVar13 <= fVar11) {
          func_0x0001082cc16c((fVar11 * fVar11) / (fVar13 * fVar13),0x3f800000);
          func_0x0001082cc0c8();
          pcVar1 = extraout_x8_02;
        }
        else {
          func_0x0001082cc16c(0x3f800000,(fVar13 * fVar13) / (fVar11 * fVar11));
          func_0x0001082cc0c8();
          pcVar1 = extraout_x8;
        }
      }
      (*pcVar1)();
      fVar10 = fVar13;
    }
    uVar3 = (ulong)(uint)(fVar12 + fVar13);
    uVar4 = 0;
    fVar14 = fVar14 + fVar11;
    uVar6 = 0;
    uVar7 = 0;
    fVar15 = fVar15 - fVar10;
    uVar8 = 0;
    uVar9 = 0;
    func_0x0001082cc07c();
    func_0x0001082cc06c();
    *(undefined4 *)(unaff_x19 + 0x5c) = *(undefined4 *)(unaff_x20 + 0x6c);
    *(undefined8 *)(unaff_x19 + 0x54) = uVar9;
    *(ulong *)(unaff_x19 + 0x4c) = CONCAT44(uVar8,fVar15);
    *(undefined8 *)(unaff_x19 + 0x44) = uVar7;
    *(ulong *)(unaff_x19 + 0x3c) = CONCAT44(uVar6,fVar14);
    *(undefined8 *)(unaff_x19 + 0x34) = uVar4;
    *(ulong *)(unaff_x19 + 0x2c) = uVar3;
  }
  return;
}



/* Entry: 1082cbeec; end: 1082cc1b3;  */

bool FUN_1082cbeec(ulong param_1,uint param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = true;
  if (((param_2 & 1) == 0) && ((param_1 & 1) != 0)) {
    fVar2 = *(float *)(param_3 + 0x14);
    if (*(float *)(param_3 + 0x14) <= *(float *)(param_3 + 0x10)) {
      fVar2 = *(float *)(param_3 + 0x10);
    }
    fVar3 = *(float *)(param_3 + 0x24);
    if (*(float *)(param_3 + 0x24) <= *(float *)(param_3 + 0x20)) {
      fVar3 = *(float *)(param_3 + 0x20);
    }
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    bVar1 = ABS(1.0 / (fVar3 * fVar3)) <= 0.00024414062;
  }
  return bVar1;
}



/* Entry: 1082cc1b4; end: 1082cc4bb;  */

void FUN_1082cc1b4(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 *param_5,
                  undefined8 *param_6,long *param_7,undefined8 *param_8,long param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar7 = *(long *)(*param_7 + 0x20);
  lVar5 = *param_2;
  lVar6 = lVar5;
  FUN_10839436c();
  if (lVar7 == lVar6) {
    lVar2 = 0x68;
    FUN_1082a387c(0x68,(*(long *)(lVar5 + 0x48) - *(long *)(lVar5 + 0x40)) / 0x28 + lVar7);
    lStack_98 = *param_2;
    *param_2 = 0;
    lVar6 = lVar2;
    FUN_1082cc5c8();
    *param_1 = lVar6;
    plVar3 = &lStack_98;
    FUN_108154c00(plVar3);
    if (lVar7 != 0) {
      plVar3 = (long *)(lVar2 + 0x68);
      _memcpy(plVar3,*(undefined8 *)(*param_7 + 0x18),lVar7);
    }
    for (param_9 = param_9 << 3; param_9 != 0; param_9 = param_9 + -8) {
      plStack_a0 = (long *)*param_8;
      *param_8 = 0;
      FUN_1082cc4bc(lVar2,&plStack_a0,1);
      plVar3 = plStack_a0;
      plStack_a0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_1082cd60c();
      }
      param_8 = param_8 + 1;
    }
    plVar4 = (long *)*param_5;
    if (plVar4 != (long *)0x0) {
      *param_5 = 0;
      plStack_a8 = plVar4;
      FUN_1082cc550(lVar2,&plStack_a8);
      plVar3 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        FUN_1082cd60c();
      }
    }
    plVar4 = (long *)*param_6;
    if (plVar4 != (long *)0x0) {
      *param_6 = 0;
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar2 + 0x20);
      *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) & (*(uint *)(plVar4 + 6) | 0xfffffff8);
      plStack_68 = plVar4;
      func_0x0001082cd658();
      plVar3 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_1082cd60c();
      }
    }
    if (((*(byte *)(*(long *)(lVar2 + 0x40) + 0x88) >> 5 & 1) != 0) &&
       (lVar6 = *param_4, lVar6 != 0)) {
      lStack_70 = 0;
      FUN_108343ba0();
      FUN_10828b650(&plStack_68,&lStack_70,lVar6,3,plVar3,3);
      lVar5 = lStack_70;
      if (lStack_70 != 0) {
        FUN_1082cd60c();
      }
      lStack_80 = 0;
      FUN_108343ba0();
      FUN_10828b650(&lStack_78,&lStack_80,lVar5,3,lVar6,3);
      if (lStack_80 != 0) {
        FUN_1082cd60c();
      }
      puStack_88 = plStack_68;
      *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar2 + 0x20);
      plStack_68 = (long *)0x0;
      func_0x0001082cd658();
      puVar1 = puStack_88;
      puStack_88 = (undefined8 *)0x0;
      if (puVar1 != (long *)0x0) {
        FUN_1082cd60c();
      }
      lStack_90 = lStack_78;
      *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(lVar2 + 0x20);
      lStack_78 = 0;
      func_0x0001082cd658();
      lVar6 = lStack_90;
      lStack_90 = 0;
      if (lVar6 != 0) {
        FUN_1082cd60c();
      }
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1082cc4bc; end: 1082cc54f;  */

void FUN_1082cc4bc(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lStack_28;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((param_3 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    lStack_28 = *param_2;
  }
  else {
    lStack_28 = *param_2;
    if (lStack_28 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(uint *)(lStack_28 + 0x30) | 0xfffffff8;
    }
    uVar2 = *(uint *)(param_1 + 0x30) & uVar2;
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  *(uint *)(param_1 + 0x30) = uVar2 & 0xfffffffb;
  *param_2 = 0;
  FUN_108296280(param_1,&lStack_28,
                *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 0x70) + (long)iVar1 * 8));
  func_0x0001082cd764();
  if (param_1 != 0) {
    func_0x0001082cd60c();
  }
  return;
}



/* Entry: 1082cc550; end: 1082cc5c7;  */

void FUN_1082cc550(long param_1,long *param_2)

{
  uint uVar1;
  long lStack_28;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x20);
  lStack_28 = *param_2;
  if (lStack_28 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(lStack_28 + 0x30) | 0xfffffff8;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & uVar1;
  *param_2 = 0;
  FUN_108296280(param_1,&lStack_28,1);
  func_0x0001082cd764();
  if (param_1 != 0) {
    func_0x0001082cd60c();
  }
  return;
}



/* Entry: 1082cc5c8; end: 1082cc6b7;  */

undefined8 * FUN_1082cc5c8(undefined8 *param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = *param_2;
  uVar5 = param_4;
  if (((*(byte *)(uVar3 + 0x88) >> 1 & 1) != 0) &&
     (uVar5 = param_4 | 4, *(long *)(uVar3 + 0x60) != *(long *)(uVar3 + 0x58))) {
    uVar5 = param_4;
  }
  *(undefined4 *)(param_1 + 1) = 0x2b;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar5;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_DAT_110a386f8;
  uVar6 = *param_2;
  *param_2 = 0;
  param_1[8] = uVar6;
  param_1[9] = param_3;
  uVar3 = uVar6;
  FUN_10839436c();
  *(int *)(param_1 + 10) = (int)uVar3;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  lVar1 = (uVar3 & 0xffffffff) + 0x68;
  for (lVar4 = (*(long *)(uVar6 + 0x48) - *(long *)(uVar6 + 0x40)) / 0x28; lVar4 != 0;
      lVar4 = lVar4 + -1) {
    *(undefined1 *)((long)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  }
  uVar2 = *(uint *)(uVar6 + 0x88);
  if ((uVar2 & 9) != 0) {
    *(uint *)(param_1 + 6) = (uVar2 & 8) << 2 | (uVar2 & 1) << 4 | uVar5;
  }
  return param_1;
}



/* Entry: 1082cc6b8; end: 1082cc70b;  */

void FUN_1082cc6b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_FUN_110a387c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082cc70c; end: 1082cc7f7;  */

void FUN_1082cc70c(long param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  
  func_0x0001082cd6b4(*(undefined8 *)(*param_3 + 0x10),param_1,param_2,
                      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0xc));
  func_0x0001082cd6b4(*(undefined8 *)(*param_3 + 0x10));
  pcVar1 = (char *)(param_1 + 0x68 + (ulong)*(uint *)(param_1 + 0x50));
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x40);
  for (lVar5 = (*(long *)(*(long *)(param_1 + 0x40) + 0x48) - (long)puVar2) / 0x28; lVar5 != 0;
      lVar5 = lVar5 + -1) {
    cVar3 = *pcVar1;
    (**(code **)(*param_3 + 0x10))(param_3,1,cVar3,&UNK_10f485f95,10);
    if (cVar3 == '\x01') {
      puVar4 = puVar2;
      FUN_1083931fc(puVar2);
      FUN_1082b1120(param_3,puVar4,param_1 + 0x68 + puVar2[2],*puVar2,puVar2[1]);
    }
    puVar2 = puVar2 + 5;
    pcVar1 = pcVar1 + 1;
  }
  return;
}



/* Entry: 1082cc7f8; end: 1082cc877;  */

bool FUN_1082cc7f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_2 + 0x40);
  if (((*(int *)(lVar1 + 0xc) == *(int *)(lVar2 + 0xc)) &&
      (lVar1 = *(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 0x40),
      lVar1 == *(long *)(lVar2 + 0x48) - *(long *)(lVar2 + 0x40))) &&
     (*(uint *)(param_1 + 0x50) == *(uint *)(param_2 + 0x50))) {
    lVar1 = lVar1 / 0x28 + (ulong)*(uint *)(param_1 + 0x50);
    if (lVar1 == 0) {
      return true;
    }
    param_1 = param_1 + 0x68;
    _memcmp(param_1,param_2 + 0x68,lVar1);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 1082cc878; end: 1082cc94b;  */

void FUN_1082cc878(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  FUN_108287aa8(uVar5);
  puVar6 = (undefined8 *)0x68;
  FUN_1082a387c(0x68,uVar5);
  puVar7 = puVar6;
  FUN_10828b420();
  *puVar7 = &PTR_DAT_110a386f8;
  lVar8 = *(long *)(param_2 + 0x40);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar6[8] = lVar8;
  puVar6[9] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_2 + 0x50);
  uVar9 = (ulong)uVar2;
  puVar6[0xb] = *(undefined8 *)(param_2 + 0x58);
  puVar6[10] = uVar5;
  *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  lVar8 = *(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40);
  if (lVar8 != 0) {
    _memmove((long)(puVar6 + 0xd) + uVar9,param_2 + 0x68 + uVar9,lVar8 / 0x28);
  }
  if (uVar2 != 0) {
    _memcpy(puVar6 + 0xd,param_2 + 0x68,uVar9);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 1082cc94c; end: 1082ccae7;  */

void FUN_1082cc94c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,ulong *param_6)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puStack_8f8;
  undefined4 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 *puStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined4 uStack_8a0;
  undefined1 auStack_898 [32];
  undefined1 *puStack_878;
  undefined8 uStack_870;
  undefined1 auStack_868 [2048];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_5 + 0x54);
  if ((int)uVar1 < 0) {
    uStack_8d8 = param_6[1];
    uStack_8e0 = *param_6;
  }
  else {
    if (*(int *)(param_5 + 0x20) <= (int)uVar1) goto LAB_1082ccac4;
    FUN_10828b624(*(undefined8 *)(*(long *)(param_5 + 0x18) + (ulong)uVar1 * 8));
    uStack_8e0 = CONCAT44(param_2,param_1);
    uStack_8d8 = CONCAT44(param_4,param_3);
  }
  lVar3 = *(long *)(param_5 + 0x40);
  FUN_108393498(lVar3,0);
  if (lVar3 == 0) {
LAB_1082cca80:
    uStack_8c8 = uStack_8d8;
    uStack_8d0 = uStack_8e0;
  }
  else {
    uVar1 = *(uint *)(param_5 + 0x50);
    FUN_1082cd5d8(auStack_868,0x800);
    puStack_878 = auStack_898;
    uStack_870 = 0x400000000;
    uStack_8b8 = 0;
    uStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    puStack_8c0 = auStack_68;
    func_0x000108387d70(&puStack_8c0,auStack_68,&uStack_8e0);
    ppuStack_8e8 = &PTR_FUN_110a38760;
    FUN_1083faefc(lVar3,&puStack_8c0,auStack_68,&ppuStack_8e8,param_5 + 0x68,uVar1 >> 2);
    if ((int)lVar3 == 0) {
      func_0x0001082cd724();
      func_0x0001082cd734();
      goto LAB_1082cca80;
    }
    puStack_8f8 = &uStack_8d0;
    uStack_8f0 = 0;
    FUN_108387820(&puStack_8c0,0x8f,&puStack_8f8);
    FUN_108388618(&puStack_8c0,0,0,1,1);
    func_0x0001082cd724();
    func_0x0001082cd734();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail(uStack_8d0 & 0xffffffff,uStack_8d0._4_4_,(undefined4)uStack_8c8,uStack_8c8._4_4_
                   );
LAB_1082ccac4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ccac8);
  (*pcVar2)();
}



/* Entry: 1082ccae8; end: 1082ccaef;  */

void FUN_1082ccae8(void)

{
  return;
}



/* Entry: 1082ccaf0; end: 1082ccb03;  */

void FUN_1082ccaf0(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082ccb24();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082ccb04; end: 1082ccb23;  */

undefined8 FUN_1082ccb04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1082ccb24; end: 1082ccb53;  */

undefined8 * FUN_1082ccb24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a386f8;
  FUN_108154c00(param_1 + 8);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082ccb54; end: 1082ccb57;  */

undefined8 * FUN_1082ccb54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a387c0;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082ccb58; end: 1082ccb6b;  */

void FUN_1082ccb58(void)

{
  FUN_1082ccea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ccb6c; end: 1082cce63;  */

void FUN_1082ccb6c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  lVar7 = param_2[3];
  lVar2 = *(long *)(lVar7 + 0x40);
  lVar3 = *(long *)(lVar2 + 0x20);
  if (-1 < *(int *)(lVar7 + 0x54)) {
    plVar4 = (long *)*param_2;
    lVar2 = *(long *)(*plVar4 + -0x18);
    FUN_10828bad0(&ppuStack_a0,param_1,*(int *)(lVar7 + 0x54),param_2,0,0);
    FUN_10828bae8((long)plVar4 + lVar2,&UNK_10f483923);
    FUN_1083a3ca0(ppuStack_a0);
    lVar2 = *(long *)(lVar7 + 0x40);
  }
  uVar1 = *(uint *)(lVar2 + 0x88);
  if (((uVar1 >> 3 & 1) != 0) && (-1 < *(int *)(lVar7 + 0x58))) {
    plVar4 = (long *)*param_2;
    lVar2 = *(long *)(*plVar4 + -0x18);
    func_0x0001082cd644(&ppuStack_a0,param_1,*(int *)(lVar7 + 0x58),param_2[5],param_2);
    FUN_10828bae8((long)plVar4 + lVar2,&UNK_10f483923);
    FUN_1083a3ca0(ppuStack_a0);
    uVar1 = *(uint *)(*(long *)(lVar7 + 0x40) + 0x88);
  }
  ppuStack_58 = (undefined **)0x1138270b0;
  if ((uVar1 >> 4 & 1) == 0) {
    func_0x0001082cd708();
    func_0x0001082cd750();
    if (ppuStack_a0 != (undefined **)0x1138270b0) {
      ppuStack_58 = ppuStack_a0;
      ppuStack_a0 = (undefined **)0x1138270b0;
    }
    func_0x0001082cd718();
    func_0x0001082cd67c();
    func_0x0001082cd75c();
  }
  else {
    func_0x0001082cd708();
    FUN_1082dc6a0(&uStack_60,extraout_x9 + extraout_x10,&UNK_10f481de0);
    FUN_10829e9f0(&ppuStack_a0,&uStack_60,0x17,0);
    FUN_1083a3ca0(uStack_60);
    func_0x0001082cd67c();
    FUN_1082dc63c(extraout_x8 + extraout_x9_00,&ppuStack_a0);
    func_0x0001083a34dc(&ppuStack_58,&puStack_90);
    func_0x0001082cd67c();
    func_0x0001082cd75c();
    func_0x00010827024c(&ppuStack_a0);
  }
  ppuVar5 = (undefined **)0x1138270b0;
  if ((*(byte *)(lVar7 + 0x30) >> 4 & 1) == 0) {
    ppuVar6 = (undefined **)&UNK_10f485fb0;
  }
  else {
    func_0x0001082cd708();
    func_0x0001082cd750();
    ppuVar5 = ppuStack_a0;
    if (ppuStack_a0 != (undefined **)0x1138270b0) {
      ppuStack_a0 = (undefined **)0x1138270b0;
    }
    func_0x0001082cd718();
    ppuVar6 = ppuVar5 + 1;
    func_0x0001082cd67c();
    func_0x0001082cd75c();
  }
  ppuStack_88 = ppuStack_58 + 1;
  uStack_80 = *(undefined8 *)(lVar3 + 0x10);
  lStack_78 = lVar7 + 0x68;
  lStack_70 = lStack_78 + (ulong)*(uint *)(lVar7 + 0x50);
  ppuStack_a0 = &PTR_FUN_110a38808;
  uStack_68 = 0;
  uStack_98 = param_1;
  puStack_90 = param_2;
  FUN_10831dfd8(lVar3,ppuVar6,param_2[4],param_2[5],&ppuStack_a0);
  FUN_1083a3ca0(ppuVar5);
  FUN_1083a3ca0(ppuStack_58);
  return;
}



/* Entry: 1082cce64; end: 1082cce9f;  */

void FUN_1082cce64(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x40) + 0x40);
  uVar5 = (*(long *)(*(long *)(param_3 + 0x40) + 0x48) - lVar1) / 0x28;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_3 + 0x50);
  uVar9 = 0;
  uVar8 = 0;
  puVar10 = (undefined4 *)(lVar1 + 0x1c);
  do {
    if (uVar5 == uVar9) {
      return;
    }
    if (uVar5 == 0) {
LAB_1082dc3bc:
      if ((ulong)(lVar3 - lVar2 >> 2) <= uVar8) {
LAB_1082dc428:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
        (*pcVar7)();
      }
      uVar6 = uVar8 + 1;
      if ((uint)puVar10[-1] < 0xb) {
        (**(code **)(*param_2 + *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar10[-1] * 8)))
                  (param_2,*(undefined4 *)(lVar2 + uVar8 * 4),*puVar10,
                   param_3 + 0x68 + *(long *)(puVar10 + -3));
      }
    }
    else {
      if (uVar5 <= uVar9) goto LAB_1082dc428;
      uVar6 = uVar8;
      if ((*(byte *)(param_3 + 0x68 + (ulong)uVar4 + uVar9) & 1) == 0) goto LAB_1082dc3bc;
    }
    uVar8 = uVar6;
    uVar9 = uVar9 + 1;
    puVar10 = puVar10 + 10;
  } while( true );
}



/* Entry: 1082ccea0; end: 1082ccedb;  */

undefined8 * FUN_1082ccea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a387c0;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082ccedc; end: 1082ccef3;  */

void FUN_1082ccedc(void)

{
  return;
}



/* Entry: 1082ccef4; end: 1082ccf3f;  */

void FUN_1082ccef4(long param_1)

{
  undefined8 uStack_28;
  
  FUN_1082dc6a0(&uStack_28,
                (long)**(undefined8 **)(param_1 + 0x10) +
                *(long *)(*(long *)**(undefined8 **)(param_1 + 0x10) + -0x18));
  func_0x0001082cd630(uStack_28);
  func_0x0001082cd63c();
  return;
}



/* Entry: 1082ccf40; end: 1082ccf83;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082ccf40(long param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  
  plVar5 = (long *)(**(long **)(param_1 + 0x10) +
                   *(long *)(*(long *)**(long **)(param_1 + 0x10) + -0x18));
  if (param_4 != 0) {
    func_0x00010828bb68();
    if (param_3 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = plVar5;
      FUN_1083a3d50();
    }
    if (plVar8 != (long *)0x0) {
      uVar9 = (ulong)*(uint *)*plVar5;
      plVar2 = (long *)(uVar9 ^ 0xffffffff);
      if ((long)plVar8 + uVar9 >> 0x20 == 0) {
        plVar2 = plVar8;
      }
      if (plVar2 != (long *)0x0) {
        uVar1 = (long)plVar2 + uVar9;
        if (((uint *)*plVar5)[1] == 1 && (uVar1 ^ uVar9) < 4) {
          plVar8 = plVar5;
          func_0x0001083a3dbc(plVar5,0xffffffffffffffff,param_3);
          func_0x0001083a3dd4((long)plVar8 + uVar9);
          *(undefined1 *)((long)plVar8 + uVar1) = 0;
          *(int *)*plVar5 = (int)uVar1;
        }
        else {
          puVar6 = auStack_58;
          FUN_1083a3310(puVar6,(long)plVar2 + (ulong)*(uint *)*plVar5);
          func_0x0001083a3de0();
          if (uVar9 != 0) {
            func_0x0001083a3d9c(puVar6,*plVar5 + 8);
          }
          func_0x0001083a3dd4(puVar6 + uVar9);
          puVar7 = (uint *)*plVar5;
          lVar3 = *puVar7 - uVar9;
          if (uVar9 <= *puVar7 && lVar3 != 0) {
            _memcpy(puVar6 + uVar9 + (long)plVar2,(long)puVar7 + uVar9 + 8,lVar3);
            puVar7 = (uint *)*plVar5;
          }
          func_0x0001083a3cdc(puVar7);
        }
      }
    }
    return;
  }
  if ((int)plVar5[0x15] < 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082dc82c);
    (*pcVar4)();
  }
  func_0x0001082dd630(plVar5[0x14],plVar5,&UNK_10f486d36);
  return;
}



/* Entry: 1082ccf84; end: 1082cd287;  */

/* WARNING: Possible PIC construction at 0x0001082cd074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001082cd23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082cd078) */
/* WARNING: Removing unreachable block (ram,0x0001082cd244) */
/* WARNING: Removing unreachable block (ram,0x0001082cd090) */
/* WARNING: Removing unreachable block (ram,0x0001082cd0b4) */
/* WARNING: Removing unreachable block (ram,0x0001082cd0c8) */
/* WARNING: Removing unreachable block (ram,0x0001082cd0b8) */
/* WARNING: Removing unreachable block (ram,0x0001082cd0d4) */
/* WARNING: Removing unreachable block (ram,0x0001082cd100) */
/* WARNING: Removing unreachable block (ram,0x0001082cd110) */
/* WARNING: Removing unreachable block (ram,0x0001082cd114) */
/* WARNING: Removing unreachable block (ram,0x0001082cd240) */

long FUN_1082ccf84(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  char cStack_51;
  
  lVar19 = *(long *)(param_3 + 0x10);
  plVar14 = *(long **)(lVar19 + 0x20);
  if (*(byte *)((long)plVar14 + 0x2c) < 0x10 &&
      (1 << (ulong)(*(byte *)((long)plVar14 + 0x2c) & 0x1f) & 0xe4c2U) != 0) {
    uStack_68 = *(undefined8 *)(lVar19 + 0x18);
    puStack_70 = *(undefined **)(lVar19 + 0x10);
    func_0x000107c27958(param_1,&puStack_70);
    return param_1;
  }
  lVar6 = param_2;
  func_0x0001082cd73c(*(undefined8 *)(*plVar14 + 0x80));
  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + lVar6 * 4;
  plVar7 = plVar14;
  (**(code **)(*plVar14 + 0xe0))();
  iVar5 = (int)plVar7;
  if (iVar5 != 0) {
    func_0x0001082cd73c(*(undefined8 *)(*plVar14 + 0x50));
    plVar14 = plVar7;
  }
  func_0x0001083d42b8(*(undefined8 *)(param_2 + 0x20),plVar14,&cStack_51);
  cVar3 = **(char **)(param_2 + 0x30);
  *(char **)(param_2 + 0x30) = *(char **)(param_2 + 0x30) + 1;
  lVar6 = param_1;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (cVar3 == '\x01') {
    puVar8 = (undefined *)(long)cStack_51;
    func_0x000108395460(puVar8);
    pcStack_88 = (code *)0x1082cd078;
    lVar19 = param_2;
    goto SUB_10002b838;
  }
  puStack_70 = (undefined *)0x0;
  lVar16 = *(long *)(*(long *)(param_2 + 0x10) + 8);
  uVar17 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18);
  FUN_1083a3410(auStack_78,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x18));
  if (iVar5 != 0) {
    (**(code **)(**(long **)(lVar19 + 0x20) + 0x60))();
  }
  puVar9 = (undefined8 *)0x2;
  FUN_10828bb1c();
  lVar19 = lVar16;
  func_0x0001082cd63c();
  lVar18 = *(long *)(param_2 + 8);
  puVar2 = *(undefined4 **)(lVar18 + 0x28);
  if (puVar2 < *(undefined4 **)(lVar18 + 0x30)) {
    puVar20 = puVar2 + 1;
    *puVar2 = (int)lVar16;
    lVar19 = param_2;
  }
  else {
    lVar12 = *(long *)(lVar18 + 0x20);
    lVar15 = (long)puVar2 - lVar12;
    uVar1 = (lVar15 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      FUN_1082cd5c4();
LAB_1082cd24c:
      func_0x000104bd35f4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001082cd72c();
      pcStack_88 = FUN_1082cd288;
      lStack_b0 = lVar15;
      lStack_a8 = lVar16;
      lStack_a0 = lVar19;
      if ((int)uVar17 < 0) {
LAB_1082cd34c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1082cd350);
        (*pcVar4)();
      }
      lVar16 = *(long *)(lVar6 + 0x10);
      if (*(int *)(*(long *)(lVar16 + 0x18) + 0x20) <= (int)uVar17) goto LAB_1082cd34c;
      lVar18 = *(long *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x18) + (uVar17 & 0xffffffff) * 8);
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x34) == 1) {
          func_0x000107c27fa8(puVar9);
          lVar16 = *(long *)(lVar6 + 0x10);
        }
        lVar18 = *(long *)(lVar6 + 8);
        lVar19 = (long)*(char *)((long)puVar9 + 0x17);
        puVar13 = puVar9;
        if (lVar19 < 0) {
          puVar13 = (undefined8 *)*puVar9;
          lVar19 = puVar9[1];
        }
        FUN_108298268(&uStack_b8,lVar18,uVar17,*(undefined8 *)(lVar6 + 0x18),lVar16,puVar13,lVar19);
        func_0x0001082cd630(uStack_b8);
        func_0x0001082cd63c();
        return lVar18;
      }
      puVar8 = &UNK_10f485fd2;
      lVar6 = extraout_x8;
      goto SUB_10002b838;
    }
    uVar10 = (long)*(undefined4 **)(lVar18 + 0x30) - lVar12;
    uVar11 = (long)uVar10 >> 1;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar10) {
      uVar11 = 0x3fffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar19 = 0;
    }
    else {
      if (uVar11 >> 0x3e != 0) goto LAB_1082cd24c;
      lVar19 = uVar11 << 2;
      __Znwm();
    }
    puVar2 = (undefined4 *)(lVar19 + lVar15);
    puVar20 = puVar2 + 1;
    *puVar2 = (int)lVar16;
    _memcpy(puVar2 + -(lVar15 >> 2),lVar12,lVar15);
    *(undefined4 **)(lVar18 + 0x20) = puVar2 + -(lVar15 >> 2);
    *(undefined4 **)(lVar18 + 0x28) = puVar20;
    *(ulong *)(lVar18 + 0x30) = lVar19 + uVar11 * 4;
    lVar19 = lVar12;
    if (lVar12 != 0) {
      __ZdlPv(lVar12);
    }
  }
  *(undefined4 **)(lVar18 + 0x28) = puVar20;
  pcStack_88 = (code *)0x1082cd240;
  puVar8 = puStack_70;
SUB_10002b838:
  lStack_a0 = lVar19;
  func_0x00010002b82c(lVar6,puVar8);
  func_0x000107c613d0(puVar8);
  func_0x000107c60c50(lVar19,param_1,puVar8);
  return lVar19;
}



/* Entry: 1082cd288; end: 1082cd357;  */

undefined8 FUN_1082cd288(undefined8 param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar6;
  undefined8 uStack_38;
  
  if (-1 < (int)param_3) {
    lVar4 = *(long *)(param_2 + 0x10);
    if ((int)param_3 < *(int *)(*(long *)(lVar4 + 0x18) + 0x20)) {
      lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0x18) + (param_3 & 0xffffffff) * 8);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x34) == 1) {
          func_0x000107c27fa8(param_4);
          lVar4 = *(long *)(param_2 + 0x10);
        }
        uVar3 = *(undefined8 *)(param_2 + 8);
        lVar5 = (long)*(char *)((long)param_4 + 0x17);
        puVar6 = param_4;
        if (lVar5 < 0) {
          puVar6 = (undefined8 *)*param_4;
          lVar5 = param_4[1];
        }
        FUN_108298268(&uStack_38,uVar3,param_3,*(undefined8 *)(param_2 + 0x18),lVar4,puVar6,lVar5);
        func_0x0001082cd630(uStack_38);
        func_0x0001082cd63c();
        return uVar3;
      }
      puVar2 = &UNK_10f485fd2;
      func_0x00010002b82c(param_1,&UNK_10f485fd2);
      func_0x000107c613d0(puVar2);
      func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
      return unaff_x20;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082cd350);
  (*pcVar1)();
}



/* Entry: 1082cd358; end: 1082cd3bf;  */

void FUN_1082cd358(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uStack_28;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] != 0) {
      param_3 = (long *)*param_3;
      goto LAB_1082cd398;
    }
  }
  else if (*(char *)((long)param_3 + 0x17) != '\0') goto LAB_1082cd398;
  param_3 = *(long **)(param_1 + 0x18);
LAB_1082cd398:
  func_0x0001082cd644(&uStack_28,*(undefined8 *)(param_1 + 8),param_2,param_3,
                      *(undefined8 *)(param_1 + 0x10));
  func_0x0001082cd630(uStack_28);
  func_0x0001082cd63c();
  return;
}



/* Entry: 1082cd3c0; end: 1082cd487;  */

void FUN_1082cd3c0(undefined8 param_1,long param_2,uint param_3,long *param_4,long *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((-1 < (int)param_3) && (lVar2 = *(long *)(param_2 + 8), (int)param_3 < *(int *)(lVar2 + 0x18))
     ) {
    if (*(long *)(*(long *)(lVar2 + 0x10) + (ulong)param_3 * 8) == 0) {
      FUN_1083d4028(param_1,&UNK_10f485fdb);
    }
    else {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        param_4 = (long *)*param_4;
      }
      if (*(char *)((long)param_5 + 0x17) < '\0') {
        param_5 = (long *)*param_5;
      }
      FUN_108297bf0(&uStack_28,lVar2,param_3,param_4,param_5,*(undefined8 *)(param_2 + 0x10),0,0);
      func_0x0001082cd630(uStack_28);
      FUN_1083a3ca0(uStack_28);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082cd478);
  (*pcVar1)();
}



/* Entry: 1082cd488; end: 1082cd517;  */

void FUN_1082cd488(long param_1)

{
  long *unaff_x20;
  long unaff_x22;
  long alStack_48 [3];
  
  func_0x0001082cd770();
  if (*(int *)(unaff_x22 + 0x5c) < 0) {
    func_0x0001082cd6d4();
  }
  else {
    func_0x0001082cd68c();
    func_0x0001082cd744();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_48);
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      unaff_x20 = (long *)*unaff_x20;
    }
    func_0x0001082cd644(alStack_48,*(undefined8 *)(param_1 + 8),*(undefined4 *)(unaff_x22 + 0x5c),
                        unaff_x20,*(undefined8 *)(param_1 + 0x10));
    func_0x0001082cd6a0(alStack_48[0] + 8);
    func_0x0001082cd63c();
  }
  return;
}



/* Entry: 1082cd518; end: 1082cd5a7;  */

void FUN_1082cd518(long param_1)

{
  long *unaff_x20;
  long unaff_x22;
  long alStack_48 [3];
  
  func_0x0001082cd770();
  if (*(int *)(unaff_x22 + 0x60) < 0) {
    func_0x0001082cd6d4();
  }
  else {
    func_0x0001082cd68c();
    func_0x0001082cd744();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_48);
    if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
      unaff_x20 = (long *)*unaff_x20;
    }
    func_0x0001082cd644(alStack_48,*(undefined8 *)(param_1 + 8),*(undefined4 *)(unaff_x22 + 0x60),
                        unaff_x20,*(undefined8 *)(param_1 + 0x10));
    func_0x0001082cd6a0(alStack_48[0] + 8);
    func_0x0001082cd63c();
  }
  return;
}



/* Entry: 1082cd5a8; end: 1082cd5c3;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082cd5a8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  
  if (*(int *)(param_1 + 0xa8) < 2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1082cd5c4);
    (*pcVar5)();
  }
  plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 8);
  if (param_2 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = plVar1;
    FUN_1083a3d50();
  }
  if (plVar8 != (long *)0x0) {
    uVar9 = (ulong)*(uint *)*plVar1;
    plVar3 = (long *)(uVar9 ^ 0xffffffff);
    if ((long)plVar8 + uVar9 >> 0x20 == 0) {
      plVar3 = plVar8;
    }
    if (plVar3 != (long *)0x0) {
      uVar2 = (long)plVar3 + uVar9;
      if (((uint *)*plVar1)[1] == 1 && (uVar2 ^ uVar9) < 4) {
        plVar8 = plVar1;
        func_0x0001083a3dbc(plVar1,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar8 + uVar9);
        *(undefined1 *)((long)plVar8 + uVar2) = 0;
        *(int *)*plVar1 = (int)uVar2;
      }
      else {
        puVar6 = auStack_58;
        FUN_1083a3310(puVar6,(long)plVar3 + (ulong)*(uint *)*plVar1);
        func_0x0001083a3de0();
        if (uVar9 != 0) {
          func_0x0001083a3d9c(puVar6,*plVar1 + 8);
        }
        func_0x0001083a3dd4(puVar6 + uVar9);
        puVar7 = (uint *)*plVar1;
        lVar4 = *puVar7 - uVar9;
        if (uVar9 <= *puVar7 && lVar4 != 0) {
          _memcpy(puVar6 + uVar9 + (long)plVar3,(long)puVar7 + uVar9 + 8,lVar4);
          puVar7 = (uint *)*plVar1;
        }
        func_0x0001083a3cdc(puVar7);
      }
    }
  }
  return;
}



/* Entry: 1082cd5c4; end: 1082cd5d7;  */

undefined * FUN_1082cd5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10840f6d0(puVar1 + 0x800,puVar1,0x800,param_2);
  return puVar1;
}



/* Entry: 1082cd5d8; end: 1082cd60b;  */

long FUN_1082cd5d8(long param_1,undefined8 param_2)

{
  FUN_10840f6d0(param_1 + 0x800,param_1,0x800,param_2);
  return param_1;
}



/* Entry: 1082cd60c; end: 1082cd783;  */

void FUN_1082cd60c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082cd614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082cd784; end: 1082cda73;  */

ulong * FUN_1082cd784(undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong *param_4,
                     long *param_5,ulong param_6,ulong param_7,undefined4 *param_8,long param_9,
                     undefined8 *param_10,undefined1 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  bool bVar6;
  long extraout_x8;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 in_b2;
  undefined1 uVar18;
  undefined1 in_register_00005041;
  undefined1 uVar19;
  undefined1 in_register_00005042;
  undefined1 uVar20;
  undefined1 in_register_00005043;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined2 auStack_f8 [2];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  byte bStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined4 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_91;
  undefined8 *apuStack_90 [2];
  
  uVar9 = param_6 >> 8;
  uVar10 = (uint)(param_7 >> 0x20);
  *(undefined2 *)param_4 = 0;
  *(undefined4 *)((long)param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *(undefined4 *)((long)param_4 + 0xc) = 1;
  uVar16 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  plVar3 = param_5;
  uStack_91 = param_11;
  apuStack_90[0] = param_10;
  (**(code **)(*param_5 + 0x20))();
  func_0x0001082cf3fc();
  uStack_98 = *(undefined4 *)(extraout_x8 + 0x8c);
  uStack_9c = (undefined4)(param_6 >> 0x20);
  uStack_a0 = (undefined4)param_7;
  puStack_c0 = &uStack_91;
  uStack_b8 = param_12;
  ppuStack_b0 = apuStack_90;
  puStack_a8 = &uStack_98;
  if ((int)param_5[0x12] < 0) {
    plVar13 = (long *)0xffffffff;
    uVar14 = 0xffffffff;
  }
  else {
    plVar3 = param_5;
    FUN_1082b1dfc();
    uVar14 = (ulong)plVar3 >> 0x20;
    plVar13 = plVar3;
  }
  uVar2 = (uint)plVar3;
  uVar8 = (uint)(param_6 >> 8);
  if ((int)uVar10 < 2) {
    bVar6 = false;
  }
  else {
    FUN_1082cda74(param_5);
    uStack_e0 = (undefined1 **)CONCAT44(param_2,uVar16);
    uStack_d8 = (undefined4 *)
                CONCAT44(param_3,CONCAT13(in_register_00005043,
                                          CONCAT12(in_register_00005042,
                                                   CONCAT11(in_register_00005041,in_b2))));
    puVar4 = param_8;
    FUN_108281a6c(param_8,&uStack_e0);
    if (((ulong)puVar4 & 1) == 0) {
      if (param_9 == 0) {
        uVar15 = 0;
      }
      else {
        puVar4 = param_8;
        FUN_108281a6c(param_8,param_9);
        uVar15 = (uint)puVar4;
      }
    }
    else {
      uVar15 = 1;
    }
    ppuVar5 = &puStack_c0;
    FUN_1082cda9c(ppuVar5,plVar13,(uint)param_6 & 0xff);
    uVar2 = 0;
    if ((int)ppuVar5 != 0) {
      ppuVar5 = &puStack_c0;
      FUN_1082cda9c(ppuVar5,uVar14,uVar8 & 0xff);
      uVar2 = (uint)ppuVar5;
      if ((uVar2 & uVar15 & 1) != 0) {
        bVar6 = true;
        goto LAB_1082cd8fc;
      }
    }
    func_0x0001082cf4a4();
    FUN_1082b33e8();
    bVar6 = false;
    uVar10 = 1;
  }
LAB_1082cd8fc:
  uStack_e0 = &puStack_c0;
  uStack_d8 = &uStack_9c;
  puStack_d0 = &uStack_91;
  puStack_c8 = &uStack_a0;
  if (bVar6) {
    func_0x0001082cf4a4();
    FUN_1082b33e8();
    auStack_f8[0] = 0;
    uVar12 = 0;
    if ((int)uVar10 < 2) {
      uVar10 = 1;
    }
    if (0x3ff < (int)uVar10) {
      uVar10 = 0x400;
    }
    uVar14 = 2;
    if (uVar2 == 0) {
      uVar14 = 0;
    }
    uVar14 = uVar14 | (ulong)uVar10 << 0x20;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar7 = 0x100000000;
    uStack_e8 = 0;
    uStack_ec = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar11 = param_6;
  }
  else {
    if (param_9 == 0) {
      func_0x0001082cf530(*param_8,param_8[2]);
    }
    FUN_1082cdb48(auStack_f8,&uStack_e0,plVar13,(uint)param_6 & 0xff);
    uVar1 = uStack_ec;
    uVar16 = uStack_f0;
    uVar12 = auStack_f8[0];
    uVar11 = (ulong)bStack_e4;
    if (param_9 == 0) {
      func_0x0001082cf530(param_8[1],param_8[3]);
    }
    uVar34 = uStack_e8;
    uVar35 = uStack_f4;
    FUN_1082cdb48(auStack_f8,&uStack_e0,uVar14,uVar8 & 0xff);
    uVar9 = (ulong)bStack_e4;
    uVar14 = param_7 & 0xffffffff | 0x100000000;
    uVar7 = param_6 & 0xffffffff00000000;
    uVar18 = (undefined1)uStack_f4;
    uVar19 = (undefined1)((uint)uStack_f4 >> 8);
    uVar20 = (undefined1)((uint)uStack_f4 >> 0x10);
    uVar21 = (undefined1)((uint)uStack_f4 >> 0x18);
    uVar26 = (undefined1)uStack_f0;
    uVar27 = (undefined1)((uint)uStack_f0 >> 8);
    uVar28 = (undefined1)((uint)uStack_f0 >> 0x10);
    uVar29 = (undefined1)((uint)uStack_f0 >> 0x18);
    uVar22 = (undefined1)uVar16;
    uVar23 = (undefined1)((uint)uVar16 >> 8);
    uVar24 = (undefined1)((uint)uVar16 >> 0x10);
    uVar25 = (undefined1)((uint)uVar16 >> 0x18);
    uVar30 = (undefined1)uVar1;
    uVar31 = (undefined1)((uint)uVar1 >> 8);
    uVar32 = (undefined1)((uint)uVar1 >> 0x10);
    uVar33 = (undefined1)((uint)uVar1 >> 0x18);
  }
  *param_4 = (uVar9 & 0xff) << 8 | uVar7 | uVar11 & 0xff;
  param_4[1] = uVar14;
  *(undefined2 *)(param_4 + 2) = uVar12;
  *(undefined2 *)((long)param_4 + 0x12) = auStack_f8[0];
  *(undefined4 *)((long)param_4 + 0x14) = uVar35;
  param_4[4] = CONCAT17(uVar33,CONCAT16(uVar32,CONCAT15(uVar31,CONCAT14(uVar30,CONCAT13(uVar29,
                                                  CONCAT12(uVar28,CONCAT11(uVar27,uVar26)))))));
  param_4[3] = CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13(uVar21,
                                                  CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))))));
  *(undefined4 *)(param_4 + 5) = uStack_ec;
  *(undefined4 *)((long)param_4 + 0x2c) = uVar34;
  *(undefined4 *)(param_4 + 6) = uStack_e8;
  uVar17 = *apuStack_90[0];
  *(undefined8 *)((long)param_4 + 0x3c) = apuStack_90[0][1];
  *(undefined8 *)((long)param_4 + 0x34) = uVar17;
  return param_4;
}



/* Entry: 1082cda74; end: 1082cda9b;  */

undefined8 FUN_1082cda74(void)

{
  FUN_1082b1dfc();
  return 0;
}



/* Entry: 1082cda9c; end: 1082cdb47;  */

undefined4 FUN_1082cda9c(undefined8 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  ulong uVar3;
  
  if ((*(byte *)*param_1 & 1) == 0) {
    if (param_3 == 3) {
      uVar3 = *(ulong *)(param_1[1] + 0x18);
      if ((((((uint)uVar3 >> 0x19 & 1) == 0) || (pfVar2 = *(float **)param_1[2], *pfVar2 != 0.0)) ||
          (pfVar2[1] != 0.0)) || ((pfVar2[2] != 0.0 || (pfVar2[3] != 0.0)))) goto LAB_1082cdaa8;
LAB_1082cdb10:
      uVar1 = 0;
      if (((uVar3 & 1) == 0) && ((param_2 & param_2 - 1) != 0)) {
        return 0;
      }
    }
    else {
      if (param_3 != 0) {
        uVar3 = *(ulong *)(param_1[1] + 0x18);
        goto LAB_1082cdb10;
      }
      uVar1 = 1;
    }
    if (*(int *)param_1[3] == 1) {
      uVar1 = 1;
    }
    if (param_3 == 3) {
      uVar1 = 1;
    }
  }
  else {
LAB_1082cdaa8:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1082cdb48; end: 1082cdd5b;  */

void FUN_1082cdb48(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined2 *param_6,undefined8 *param_7,ulong param_8,ulong param_9)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar8 = (undefined8 *)(param_6 + 2);
  *puVar8 = 0;
  *(undefined8 *)(param_6 + 6) = 0;
  *(undefined1 *)(param_6 + 10) = 0;
  uVar6 = *param_7;
  FUN_1082cda9c(uVar6,param_8,param_9);
  if ((0 < (int)param_8) && ((int)uVar6 != 0)) {
    bVar3 = true;
    bVar4 = false;
    if (param_1 <= 0.0) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_2) && !NAN((float)(param_8 & 0xffffffff))) {
        bVar3 = param_2 < (float)(param_8 & 0xffffffff);
        bVar4 = false;
      }
    }
    if (bVar3 == bVar4) {
      *param_6 = 0;
      *(char *)(param_6 + 10) = (char)param_9;
      *(undefined8 *)(param_6 + 2) = *(undefined8 *)(param_6 + 6);
      return;
    }
  }
  *puVar8 = CONCAT44(param_2,param_1);
  iVar1 = *(int *)param_7[1];
  if (iVar1 == 0) {
    fVar9 = (float)(int)param_1;
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (param_4 < (float)(int)param_2) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_3) && !NAN(fVar9)) {
        bVar3 = param_3 < fVar9;
        bVar4 = param_3 == fVar9;
        bVar5 = false;
      }
    }
    fVar9 = fVar9 + 0.5;
    fVar10 = (float)(int)param_2 + -0.5;
    fVar12 = (fVar9 + fVar10) * 0.5;
    fVar11 = fVar12;
    if (fVar9 <= fVar10) {
      fVar12 = fVar10;
      fVar11 = fVar9;
    }
    *(float *)(param_6 + 6) = fVar11;
    *(float *)(param_6 + 8) = fVar12;
    if (!bVar4 && bVar3 == bVar5) goto LAB_1082cdc88;
  }
  else {
    param_1 = param_1 + param_5 + 0.0;
    param_2 = param_2 - (param_5 + 0.0);
    fVar11 = (param_1 + param_2) * 0.5;
    fVar9 = fVar11;
    if (param_1 <= param_2) {
      fVar11 = param_2;
      fVar9 = param_1;
    }
    *(float *)(param_6 + 6) = fVar9;
    *(float *)(param_6 + 8) = fVar11;
    if ((fVar9 <= param_3) && (param_4 <= fVar11)) {
LAB_1082cdc88:
      if ((*(byte *)param_7[2] & 1) == 0) {
        *param_6 = 0;
        *puVar8 = 0;
        *(undefined8 *)(param_6 + 6) = 0;
        *(undefined1 *)(param_6 + 10) = 0;
        return;
      }
    }
  }
  uVar7 = 6;
  switch(param_9 & 0xffffffff) {
  case 0:
    uVar7 = 1;
    break;
  case 1:
    if (*(int *)param_7[3] - 1U < 2) {
      if (iVar1 == 0) {
        uVar7 = 5;
      }
      else {
        if (iVar1 != 1) goto LAB_1082cdd58;
        uVar7 = 4;
      }
    }
    else {
      if (*(int *)param_7[3] != 0) goto LAB_1082cdd58;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_1082cdd58;
        uVar7 = 3;
      }
    }
    break;
  case 2:
    break;
  case 3:
    uVar7 = 7;
    if (iVar1 != 0) {
      uVar7 = 8;
    }
    break;
  default:
LAB_1082cdd58:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082cdd5c);
    (*pcVar2)();
  }
  *param_6 = uVar7;
  *(undefined1 *)(param_6 + 10) = 0;
  return;
}


