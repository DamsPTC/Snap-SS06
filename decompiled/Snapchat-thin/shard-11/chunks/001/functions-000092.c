/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10816fe00; end: 10816ff0b;  */

void FUN_10816fe00(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 auStack_84 [16];
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_40 = *(float *)(param_1 + 0x38) * 0.01 + 1.0;
  fVar7 = (1.0 - fStack_40) * 0.125;
  uStack_50 = CONCAT44(fVar7,fVar7);
  uStack_48 = CONCAT44(fVar7,fVar7);
  uStack_68 = 0x100000001;
  uStack_60 = 0x300000003;
  uStack_70 = 0;
  auStack_84[0] = 0;
  uStack_74 = 0;
  puVar4 = &uStack_68;
  uStack_3c = uStack_50;
  uStack_34 = uStack_48;
  FUN_1083b3284(&lStack_58,0x3f800000,0,&uStack_60,&uStack_50,puVar4,1,1,&uStack_70,auStack_84);
  FUN_10811e834(&uStack_70);
  plVar3 = &lStack_58;
  FUN_108167ba8(*(undefined8 *)(param_1 + 0x30));
  plVar2 = &lStack_58;
  FUN_10811e834();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_10811e834(&lStack_58);
  __Unwind_Resume();
  lVar5 = *plVar2;
  plVar6 = (long *)*puVar4;
  *puVar4 = 0;
  uStack_110 = 0;
  plVar2 = (long *)0x48;
  plStack_108 = plVar6;
  __Znwm();
  plStack_108 = (long *)0x0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_FUN_110a29e80;
  uStack_f8 = 0;
  plStack_d8 = plVar6;
  FUN_1081874f0(plVar2 + 6,&plStack_d8);
  FUN_108154cb4(&plStack_d8);
  plVar2[8] = 0x3f80000040800000;
  plVar2[7] = 0x4040000040000000;
  plStack_f0 = plVar3;
  lStack_e8 = lVar5;
  plStack_e0 = plVar2;
  FUN_108164708(&plStack_f0,1);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_100 = plVar2;
  FUN_108154cb4(&uStack_f8);
  FUN_108154cb4(&plStack_108);
  FUN_108164674(&uStack_110,plVar2 + 6);
  plStack_100 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_d8 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_d8 = (long *)0x0;
    plStack_f0 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar5 + 0x70),&plStack_f0);
    FUN_108155920(&plStack_f0);
  }
  FUN_108170100(&plStack_d8);
  FUN_108170100(&plStack_100);
  uVar1 = uStack_110;
  uStack_110 = 0;
  *extraout_x8 = uVar1;
  FUN_108164628(&uStack_110);
  return;
}



/* Entry: 10816ff0c; end: 1081700ff;  */

void FUN_10816ff0c(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar3 = *param_2;
  plVar4 = (long *)*param_4;
  *param_4 = 0;
  uStack_80 = 0;
  plVar2 = (long *)0x48;
  plStack_78 = plVar4;
  __Znwm();
  plStack_78 = (long *)0x0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_FUN_110a29e80;
  uStack_68 = 0;
  plStack_48 = plVar4;
  FUN_1081874f0(plVar2 + 6,&plStack_48);
  FUN_108154cb4(&plStack_48);
  plVar2[8] = 0x3f80000040800000;
  plVar2[7] = 0x4040000040000000;
  plStack_60 = param_3;
  lStack_58 = lVar3;
  plStack_50 = plVar2;
  FUN_108164708(&plStack_60,1);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_70 = plVar2;
  FUN_108154cb4(&uStack_68);
  FUN_108154cb4(&plStack_78);
  FUN_108164674(&uStack_80,plVar2 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_60 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_60);
    FUN_108155920(&plStack_60);
  }
  FUN_108170100(&plStack_48);
  FUN_108170100(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_80);
  return;
}



/* Entry: 108170100; end: 10817014f;  */

long * FUN_108170100(long *param_1)

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



/* Entry: 108170150; end: 108170177;  */

undefined8 * FUN_108170150(undefined8 *param_1)

{
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108170178; end: 10817018b;  */

void FUN_108170178(void)

{
  FUN_108170150();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817018c; end: 1081702f7;  */

void FUN_10817018c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long **pplVar8;
  undefined8 *puVar9;
  uint uVar10;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long *aplStack_100 [3];
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar16 = 10.0;
  fVar14 = fVar16;
  if (*(float *)(param_1 + 0x38) <= 10.0) {
    fVar14 = *(float *)(param_1 + 0x38);
  }
  if (fVar14 <= 1.0) {
    fVar14 = 1.0;
  }
  fVar15 = fVar16;
  if (*(float *)(param_1 + 0x3c) <= 10.0) {
    fVar15 = *(float *)(param_1 + 0x3c);
  }
  if (fVar15 <= 1.0) {
    fVar15 = 1.0;
  }
  if (*(float *)(param_1 + 0x40) <= 10.0) {
    fVar16 = *(float *)(param_1 + 0x40);
  }
  if (fVar16 <= 1.0) {
    fVar16 = 1.0;
  }
  lVar12 = (long)fVar14 * 0x14;
  lVar1 = (long)fVar15 * 0x14;
  lVar2 = (long)fVar16 * 0x14;
  fVar16 = 10.0;
  if (*(float *)(param_1 + 0x44) <= 10.0) {
    fVar16 = *(float *)(param_1 + 0x44);
  }
  if (fVar16 <= 1.0) {
    fVar16 = 1.0;
  }
  uStack_78 = *(undefined8 *)(&UNK_10df05734 + lVar12);
  uStack_80 = *(undefined8 *)(&UNK_10df0572c + lVar12);
  uStack_70 = *(undefined4 *)(&UNK_10df0573c + lVar12);
  lVar12 = (long)fVar16 * 0x14;
  uStack_64 = *(undefined8 *)(&UNK_10df05734 + lVar1);
  uStack_6c = *(undefined8 *)(&UNK_10df0572c + lVar1);
  uStack_5c = *(undefined4 *)(&UNK_10df0573c + lVar1);
  uStack_50 = *(undefined8 *)(&UNK_10df05734 + lVar2);
  uStack_58 = *(undefined8 *)(&UNK_10df0572c + lVar2);
  uStack_48 = *(undefined4 *)(&UNK_10df0573c + lVar2);
  uStack_3c = *(undefined8 *)(&UNK_10df05734 + lVar12);
  uStack_44 = *(undefined8 *)(&UNK_10df0572c + lVar12);
  uStack_34 = *(undefined4 *)(&UNK_10df0573c + lVar12);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  FUN_1083ae048(&plStack_88,&uStack_80,1);
  pplVar8 = &plStack_88;
  FUN_1081648e4(uVar11,pplVar8);
  FUN_108115b2c(&plStack_88);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  uVar10 = (uint)(*(float *)(param_1 + 0x44) == 9.0);
  if (*(uint *)(puVar3 + 8) != uVar10) {
    *(uint *)(puVar3 + 8) = uVar10;
    pplVar8 = (long **)0x1;
    FUN_10818a7f4(puVar3,1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_108115b2c(&plStack_88);
  __Unwind_Resume();
  pcStack_98 = FUN_1081702f8;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x60;
  puStack_a0 = &stack0xfffffffffffffff0;
  __Znwm();
  plStack_e0 = (long *)*param_3;
  *param_3 = 0;
  uStack_e8 = 0;
  FUN_1081659f0(aplStack_100,&plStack_e0,1);
  FUN_10818d360(puVar4,aplStack_100);
  FUN_10815640c(aplStack_100);
  FUN_108154cb4(&plStack_e0);
  *puVar4 = &PTR_DAT_110a29ed0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = puVar3[2];
  puStack_108 = puVar4;
  FUN_108154cb4(&uStack_e8);
  puVar3 = (undefined8 *)*puVar3;
  lStack_110 = 0;
  plVar5 = (long *)0x70;
  __Znwm();
  puStack_108 = (undefined8 *)0x0;
  aplStack_100[0] = (long *)0x0;
  plStack_e0 = (long *)0x0;
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar13 = plVar5 + 2;
  *plVar13 = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_DAT_110a29fc0;
  plVar5[6] = (long)puVar4;
  FUN_108170758(aplStack_100);
  FUN_108170990(plVar5 + 7,pplVar8,puVar3);
  *plVar5 = (long)&PTR_FUN_110a29f28;
  puVar9 = puVar3;
  FUN_108170b2c(plVar5 + 7,pplVar8,puVar3,plVar5);
  FUN_108170758(&plStack_e0);
  FUN_10816040c(plVar13);
  lVar12 = plVar5[6];
  if (lVar12 != 0) {
    do {
      func_0x0001081718f8();
    } while (extraout_w10 != 0);
  }
  uStack_e8 = 0;
  lStack_110 = lVar12;
  if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
    plStack_e0 = plVar5;
    func_0x000108171958(*(undefined8 *)(*plVar5 + 0x18));
  }
  else {
    plStack_e0 = (long *)0x0;
    pplVar8 = aplStack_100;
    aplStack_100[0] = plVar5;
    FUN_108155570(puVar3[0xe],pplVar8);
    FUN_108155920(aplStack_100);
  }
  FUN_10817175c(&plStack_e0);
  FUN_10817175c(&uStack_e8);
  lStack_110 = 0;
  *extraout_x8 = lVar12;
  func_0x00010817192c();
  ppuVar6 = &puStack_108;
  FUN_108170758();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10817175c(&plStack_e0);
  FUN_10817175c(&uStack_e8);
  func_0x00010817192c();
  ppuVar7 = &puStack_108;
  FUN_108170758();
  func_0x000108171914();
  pcStack_118 = FUN_10817056c;
  uStack_178 = *puVar9;
  *puVar9 = 0;
  plStack_150 = plVar13;
  puStack_148 = puVar3;
  puStack_140 = puVar4;
  lStack_138 = lVar12;
  plStack_130 = plVar5;
  ppuStack_128 = ppuVar6;
  ppuStack_120 = &puStack_a0;
  FUN_1081874f0(&lStack_170,&uStack_178);
  FUN_108154cb4(&uStack_178);
  puVar3 = *ppuVar7;
  uStack_180 = 0;
  plVar5 = (long *)0x70;
  __Znwm();
  lVar12 = lStack_170;
  lStack_170 = 0;
  plStack_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_DAT_110a2a080;
  plVar5[6] = lVar12;
  FUN_108164628(&plStack_158);
  FUN_108170990(plVar5 + 7,pplVar8,puVar3);
  *plVar5 = (long)&PTR_FUN_110a29ff8;
  FUN_108170b2c(plVar5 + 7,pplVar8,puVar3,plVar5);
  plStack_168 = plVar5;
  FUN_108164628(&plStack_160);
  FUN_10816040c(plVar5 + 2);
  FUN_108164674(&uStack_180,plVar5 + 6);
  plStack_168 = (long *)0x0;
  if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
    plStack_160 = plVar5;
    func_0x000108171958(*(undefined8 *)(*plVar5 + 0x18));
  }
  else {
    plStack_160 = (long *)0x0;
    plStack_158 = plVar5;
    FUN_108155570(puVar3[0xe],&plStack_158);
    FUN_108155920(&plStack_158);
  }
  FUN_1081718a8(&plStack_160);
  FUN_1081718a8(&plStack_168);
  uVar11 = uStack_180;
  uStack_180 = 0;
  *extraout_x8_00 = uVar11;
  FUN_108164628(&uStack_180);
  FUN_108164628(&lStack_170);
  return;
}



/* Entry: 1081702f8; end: 10817056b;  */

void FUN_1081702f8(long *param_1,undefined8 *param_2,long **param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *extraout_x8;
  int extraout_w10;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long *aplStack_70 [3];
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  plStack_50 = (long *)*param_4;
  *param_4 = 0;
  uStack_58 = 0;
  FUN_1081659f0(aplStack_70,&plStack_50,1);
  FUN_10818d360(puVar2,aplStack_70);
  FUN_10815640c(aplStack_70);
  FUN_108154cb4(&plStack_50);
  *puVar2 = &PTR_DAT_110a29ed0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_2[2];
  puStack_78 = puVar2;
  FUN_108154cb4(&uStack_58);
  param_2 = (undefined8 *)*param_2;
  lStack_80 = 0;
  plVar3 = (long *)0x70;
  __Znwm();
  puStack_78 = (undefined8 *)0x0;
  aplStack_70[0] = (long *)0x0;
  plStack_50 = (long *)0x0;
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar8 = plVar3 + 2;
  *plVar8 = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined2 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&PTR_DAT_110a29fc0;
  plVar3[6] = (long)puVar2;
  FUN_108170758(aplStack_70);
  FUN_108170990(plVar3 + 7,param_3,param_2);
  *plVar3 = (long)&PTR_FUN_110a29f28;
  puVar7 = param_2;
  FUN_108170b2c(plVar3 + 7,param_3,param_2,plVar3);
  FUN_108170758(&plStack_50);
  FUN_10816040c(plVar8);
  lVar6 = plVar3[6];
  if (lVar6 != 0) {
    do {
      func_0x0001081718f8();
    } while (extraout_w10 != 0);
  }
  uStack_58 = 0;
  lStack_80 = lVar6;
  if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
    plStack_50 = plVar3;
    func_0x000108171958(*(undefined8 *)(*plVar3 + 0x18));
  }
  else {
    plStack_50 = (long *)0x0;
    param_3 = aplStack_70;
    aplStack_70[0] = plVar3;
    FUN_108155570(param_2[0xe],param_3);
    FUN_108155920(aplStack_70);
  }
  FUN_10817175c(&plStack_50);
  FUN_10817175c(&uStack_58);
  lStack_80 = 0;
  *param_1 = lVar6;
  func_0x00010817192c();
  ppuVar4 = &puStack_78;
  FUN_108170758();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10817175c(&plStack_50);
    FUN_10817175c(&uStack_58);
    func_0x00010817192c();
    ppuVar5 = &puStack_78;
    FUN_108170758();
    func_0x000108171914();
    pcStack_88 = FUN_10817056c;
    uStack_e8 = *puVar7;
    *puVar7 = 0;
    plStack_c0 = plVar8;
    puStack_b8 = param_2;
    puStack_b0 = puVar2;
    lStack_a8 = lVar6;
    plStack_a0 = plVar3;
    ppuStack_98 = ppuVar4;
    puStack_90 = &stack0xfffffffffffffff0;
    FUN_1081874f0(&lStack_e0,&uStack_e8);
    FUN_108154cb4(&uStack_e8);
    puVar7 = *ppuVar5;
    uStack_f0 = 0;
    plVar3 = (long *)0x70;
    __Znwm();
    lVar6 = lStack_e0;
    lStack_e0 = 0;
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(undefined2 *)(plVar3 + 5) = 0;
    *plVar3 = (long)&PTR_DAT_110a2a080;
    plVar3[6] = lVar6;
    FUN_108164628(&plStack_c8);
    FUN_108170990(plVar3 + 7,param_3,puVar7);
    *plVar3 = (long)&PTR_FUN_110a29ff8;
    FUN_108170b2c(plVar3 + 7,param_3,puVar7,plVar3);
    plStack_d8 = plVar3;
    FUN_108164628(&plStack_d0);
    FUN_10816040c(plVar3 + 2);
    FUN_108164674(&uStack_f0,plVar3 + 6);
    plStack_d8 = (long *)0x0;
    if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
      plStack_d0 = plVar3;
      func_0x000108171958(*(undefined8 *)(*plVar3 + 0x18));
    }
    else {
      plStack_d0 = (long *)0x0;
      plStack_c8 = plVar3;
      FUN_108155570(puVar7[0xe],&plStack_c8);
      FUN_108155920(&plStack_c8);
    }
    FUN_1081718a8(&plStack_d0);
    FUN_1081718a8(&plStack_d8);
    uVar1 = uStack_f0;
    uStack_f0 = 0;
    *extraout_x8 = uVar1;
    FUN_108164628(&uStack_f0);
    FUN_108164628(&lStack_e0);
    return;
  }
  return;
}



/* Entry: 10817056c; end: 108170757;  */

void FUN_10817056c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  uStack_68 = *param_4;
  *param_4 = 0;
  FUN_1081874f0(&lStack_60,&uStack_68);
  FUN_108154cb4(&uStack_68);
  lVar4 = *param_2;
  uStack_70 = 0;
  plVar3 = (long *)0x70;
  __Znwm();
  lVar2 = lStack_60;
  lStack_60 = 0;
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined2 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&PTR_DAT_110a2a080;
  plVar3[6] = lVar2;
  FUN_108164628(&plStack_48);
  FUN_108170990(plVar3 + 7,param_3,lVar4);
  *plVar3 = (long)&PTR_FUN_110a29ff8;
  FUN_108170b2c(plVar3 + 7,param_3,lVar4,plVar3);
  plStack_58 = plVar3;
  FUN_108164628(&plStack_50);
  FUN_10816040c(plVar3 + 2);
  FUN_108164674(&uStack_70,plVar3 + 6);
  plStack_58 = (long *)0x0;
  if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
    plStack_50 = plVar3;
    func_0x000108171958(*(undefined8 *)(*plVar3 + 0x18));
  }
  else {
    plStack_50 = (long *)0x0;
    plStack_48 = plVar3;
    FUN_108155570(*(undefined8 *)(lVar4 + 0x70),&plStack_48);
    FUN_108155920(&plStack_48);
  }
  FUN_1081718a8(&plStack_50);
  FUN_1081718a8(&plStack_58);
  uVar1 = uStack_70;
  uStack_70 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_70);
  FUN_108164628(&lStack_60);
  return;
}



/* Entry: 108170758; end: 10817077b;  */

void FUN_108170758(void)

{
  func_0x000108171978();
  FUN_10817077c();
  return;
}



/* Entry: 10817077c; end: 1081707a3;  */

void FUN_10817077c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108171910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081707a4; end: 1081707db;  */

void FUN_1081707a4(void)

{
  FUN_108170960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081707dc; end: 108170933;  */

void FUN_1081707dc(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_180;
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [136];
  
  FUN_10818ccbc(&uStack_150);
  func_0x00010833b800(auStack_178,param_2);
  FUN_10818d01c(&uStack_150,param_1 + 0x18,auStack_178,1);
  FUN_1081660c4(auStack_c0,&uStack_150);
  FUN_10818cd40(&uStack_150);
  FUN_10833c3b4(param_2,param_1 + 0x18,0);
  FUN_10818c910(**(undefined8 **)(param_1 + 0x30),param_2,auStack_b8);
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_130 = 0;
  uStack_150 = 0;
  uStack_114 = 0x3f800000;
  uStack_10c = 0x40800000;
  lStack_148 = *(long *)(param_1 + 0x48);
  if (lStack_148 != 0) {
    piVar1 = (int *)(lStack_148 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_180 = 0;
  func_0x00010817093c(0);
  func_0x000106f47224(&uStack_180);
  FUN_1083762f4(&uStack_150,5);
  (**(code **)(*param_2 + 0xa8))(param_2,&uStack_150);
  FUN_108375e94(&uStack_150);
  FUN_10818cd40(auStack_c0);
  return;
}



/* Entry: 108170934; end: 10817095f;  */

undefined8 FUN_108170934(void)

{
  return 0;
}



/* Entry: 108170960; end: 10817098f;  */

void FUN_108170960(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  func_0x000106f47224(param_1 + 10);
  func_0x000106f47224(param_1 + 9);
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108170990; end: 108170b2b;  */

undefined8 * FUN_108170990(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*(long *)(*param_2 & 0xfffffffffffffff8) != 0) {
    puVar4 = (ulong *)((long *)(*param_2 & 0xfffffffffffffff8) + 1);
    FUN_108154e4c();
    if (puVar4 != (ulong *)0x0) {
      FUN_108154b58();
      FUN_108158a5c();
      if (puVar4 != (ulong *)0x0) {
        if ((*puVar4 & 7) == 0) {
          pbVar5 = (byte *)((long)puVar4 + 1);
        }
        else {
          pbVar5 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
        }
        FUN_108158a80();
        FUN_1083a3394(&lStack_38,pbVar5,puVar4);
        if ((lStack_38 != 0) && (lStack_38 != 0x1138270b0)) {
          piVar1 = (int *)(lStack_38 + 4);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_50 = lStack_38;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        FUN_108394278(alStack_48,&lStack_50,&uStack_80);
        FUN_1083a3ca0(lStack_50);
        if (alStack_48[0] == 0) {
          FUN_108159fb8(param_3,1,0,&UNK_10f47d5eb);
        }
        else {
          alStack_48[0] = 0;
          FUN_108171320(param_1);
        }
        FUN_108154bd8(alStack_48);
        FUN_1083a3ca0(lStack_38);
      }
    }
  }
  return param_1;
}



/* Entry: 108170b2c; end: 108170f9b;  */

void FUN_108170b2c(long param_1,ulong *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *apuStack_80 [2];
  
  uVar17 = 1;
  do {
    if (*(ulong *)(*param_2 & 0xfffffffffffffff8) <= uVar17) {
      return;
    }
    puVar5 = (ulong *)(*param_2 & 0xfffffffffffffff8) + uVar17 + 1;
    FUN_108154e4c();
    if (puVar5 != (ulong *)0x0) {
      puVar6 = puVar5;
      FUN_108154b58();
      FUN_108158a5c();
      if (puVar6 != (ulong *)0x0) {
        FUN_108154b58(puVar5,&UNK_10f47d021);
        uStack_d0 = 0;
        func_0x000108155f24();
        iVar4 = (int)puVar5;
        if (iVar4 == 99) {
          uStack_d0 = 99;
          if ((*puVar6 & 7) == 0) {
            pbVar14 = (byte *)((long)puVar6 + 1);
          }
          else {
            pbVar14 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
          }
          func_0x000108171970();
          FUN_1083a3394(&puStack_c8,pbVar14,puVar5);
          uStack_c0 = 0;
          FUN_108171488(param_1 + 0x20,&uStack_d0);
          func_0x000108171394(&uStack_d0);
        }
        else if (iVar4 == 0x62) {
          func_0x00010817191c();
          FUN_108154e4c();
          if (puVar5 != (ulong *)0x0) {
            FUN_1081559bc(apuStack_80,param_3,puVar5);
            puVar8 = apuStack_80[0];
            plVar7 = param_3;
            FUN_10817453c(param_3,*apuStack_80[0]);
            if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0)) {
              FUN_10841076c(&UNK_10f47d60e);
            }
            else {
              (**(code **)(*plVar7 + 0x28))(&uStack_d0,0);
              uStack_e8 = 0;
              uStack_e4 = uStack_e4 & 0xffffff00;
              uStack_e0 = 0;
              uStack_d8 = 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,0x62);
              if ((*puVar6 & 7) == 0) {
                pbVar14 = (byte *)((long)puVar6 + 1);
              }
              else {
                pbVar14 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
              }
              func_0x000108171970();
              FUN_1083a3394(auStack_f8,pbVar14,plVar7);
              FUN_1083b5b6c(&uStack_108,CONCAT44(uStack_cc,uStack_d0),&uStack_e8,0);
              uStack_f0 = uStack_108;
              uStack_108 = 0;
              FUN_108171488(param_1 + 0x20,&uStack_100);
              func_0x000108171394(&uStack_100);
              func_0x000106f47224(&uStack_108);
              func_0x000106f47184(&uStack_d0);
            }
            *(undefined1 *)(puVar8 + 1) = 0;
          }
        }
        else if (iVar4 == 0) {
          if ((*puVar6 & 7) == 0) {
            pbVar14 = (byte *)((long)puVar6 + 1);
          }
          else {
            pbVar14 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
          }
          func_0x000108171970();
          FUN_1083a3394(&uStack_e8,pbVar14,puVar5);
          puVar8 = (undefined8 *)0x18;
          __Znwm();
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          FUN_1083a33c4(&uStack_d0,&uStack_e8);
          uStack_100 = 0;
          puStack_c8 = puVar8;
          func_0x000108171428(&uStack_100);
          FUN_1083a3ca0(CONCAT44(uStack_e4,uStack_e8));
          uVar11 = *(ulong *)(param_1 + 0x10);
          if (uVar11 < *(ulong *)(param_1 + 0x18)) {
            func_0x000108171454(uVar11,&uStack_d0);
            lVar15 = uVar11 + 0x10;
          }
          else {
            lVar15 = uVar11 - *(long *)(param_1 + 8);
            uVar11 = (lVar15 >> 4) + 1;
            if (uVar11 >> 0x3c != 0) {
              FUN_10817147c();
LAB_108170f1c:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x108170f20);
              (*pcVar3)();
            }
            uVar12 = *(ulong *)(param_1 + 0x18) - *(long *)(param_1 + 8);
            uVar13 = (long)uVar12 >> 3;
            if (uVar13 <= uVar11) {
              uVar13 = uVar11;
            }
            if (0x7fffffffffffffef < uVar12) {
              uVar13 = 0xfffffffffffffff;
            }
            if (uVar13 == 0) {
              lVar9 = 0;
            }
            else {
              if (uVar13 >> 0x3c != 0) {
                func_0x000104bd35f4();
                goto LAB_108170f1c;
              }
              lVar9 = uVar13 << 4;
              __Znwm();
            }
            lVar15 = lVar9 + lVar15;
            func_0x000108171454(lVar15,&uStack_d0);
            lVar16 = *(long *)(param_1 + 8);
            lVar2 = *(long *)(param_1 + 0x10);
            lVar1 = lVar15 + (lVar16 - lVar2);
            lVar10 = lVar1;
            for (lVar18 = lVar16; lVar18 != lVar2; lVar18 = lVar18 + 0x10) {
              func_0x000108171454(lVar10,lVar18);
              lVar10 = lVar10 + 0x10;
            }
            for (; lVar16 != lVar2; lVar16 = lVar16 + 0x10) {
              func_0x000108171400(lVar16);
            }
            lVar15 = lVar15 + 0x10;
            uVar11 = *(ulong *)(param_1 + 8);
            *(long *)(param_1 + 8) = lVar1;
            *(long *)(param_1 + 0x10) = lVar15;
            *(ulong *)(param_1 + 0x18) = lVar9 + uVar13 * 0x10;
            if (uVar11 != 0) {
              __ZdlPv();
            }
          }
          *(long *)(param_1 + 0x10) = lVar15;
          func_0x00010817191c();
          FUN_108154e4c();
          FUN_108163d6c(param_4,param_3,uVar11,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
          func_0x000108171400(&uStack_d0);
        }
      }
    }
    uVar17 = uVar17 + 1;
  } while( true );
}



/* Entry: 108170f9c; end: 108170ffb;  */

undefined8 FUN_108170f9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 unaff_x19;
  
  FUN_108171354(param_1 + 4);
  func_0x0001081713c0(param_1 + 1);
  func_0x000108154d64();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return unaff_x19;
}



/* Entry: 108170ffc; end: 108170fff;  */

void FUN_108170ffc(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108171940();
  *unaff_x19 = &PTR_DAT_110a29fc0;
  FUN_108170758(unaff_x19 + 6);
  *unaff_x19 = &PTR_FUN_110a28970;
  FUN_1081596e8(unaff_x19 + 2);
  return;
}



/* Entry: 108171000; end: 108171013;  */

void FUN_108171000(void)

{
  FUN_108171664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108171014; end: 10817131f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108171014(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined1 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  plVar5 = (long *)(param_1 + 0x38);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    FUN_108171684(&uStack_d0,plVar5);
    uStack_c8 = uStack_d0;
    uStack_d0 = 0;
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      do {
        func_0x0001081718f8();
      } while (extraout_w10 != 0);
    }
    FUN_108165dd4(&lStack_e8,(*(long *)(*plVar5 + 0x60) - *(long *)(*plVar5 + 0x58)) / 0x18);
    piVar1 = *(int **)(param_1 + 0x60);
    for (piVar11 = *(int **)(param_1 + 0x58); piVar11 != piVar1; piVar11 = piVar11 + 6) {
      lVar7 = *plVar5;
      lVar8 = *(long *)(piVar11 + 2);
      lVar2 = lVar8 + 8;
      _strlen(lVar2);
      func_0x000108394400(lVar7,lVar8 + 8,lVar2);
      if (*piVar11 == 0x62) {
        if ((long *)(lStack_e8 + (long)*(int *)(lVar7 + 0x14) * 8) != (long *)(piVar11 + 4)) {
          if (*(long *)(piVar11 + 4) != 0) {
            do {
              func_0x0001081718f8();
            } while (extraout_w10_01 != 0);
          }
          func_0x000108166058();
        }
      }
      else if (*piVar11 == 99) {
        if ((*(long *)(lVar6 + 0x50) == 0) || (lVar2 = lVar6, FUN_10818d4a4(), (int)lVar2 != 0)) {
          puVar9 = *(undefined8 **)(lVar6 + 0x30);
          FUN_10818a8b4(*puVar9,0,0x113254e20);
          FUN_108383398(auStack_90);
          uVar10 = *puVar9;
          uStack_a0 = 0;
          uStack_98 = *(undefined8 *)(lVar6 + 0x58);
          puVar3 = auStack_90;
          FUN_1083835c4(puVar3,&uStack_a0,0);
          FUN_10818c910(uVar10,puVar3,0);
          FUN_10838362c(alStack_c0 + 3,auStack_90);
          FUN_1083bd100(&uStack_a0,alStack_c0[3],1,1,1,0,0);
          uVar10 = uStack_a0;
          uStack_a0 = 0;
          func_0x000108114f18(lVar6 + 0x50,uVar10);
          func_0x000106f47224(&uStack_a0);
          func_0x00010811496c(alStack_c0 + 3);
          FUN_108383490(auStack_90);
        }
        if (*(long *)(lVar6 + 0x50) != 0) {
          do {
            func_0x0001081718f8();
          } while (extraout_w10_00 != 0);
        }
        alStack_c0[1] = 0;
        alStack_c0[2] = 0;
        func_0x000108166058(lStack_e8 + (long)*(int *)(lVar7 + 0x14) * 8);
        FUN_108165f8c(alStack_c0 + 2);
        func_0x000106f47224(alStack_c0 + 1);
      }
    }
    FUN_108394528(alStack_c0,lVar4,&uStack_c8,lStack_e8,lStack_e0 - lStack_e8 >> 3,0);
    func_0x000108166098(&lStack_e8);
    func_0x00010817192c();
    FUN_108154c48(&uStack_c8);
    func_0x0001078bddf8(&uStack_d0);
    lVar4 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar4 + 0x48) != alStack_c0[0]) {
      alStack_c0[0] = 0;
      func_0x000108114f18();
      FUN_10818a7f4(lVar4,1);
    }
    func_0x000106f47224(alStack_c0);
  }
  return;
}



/* Entry: 108171320; end: 108171353;  */

void FUN_108171320(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000108171910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108171354; end: 10817147b;  */

long * FUN_108171354(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000108171394();
    }
    func_0x000108171964();
  }
  return param_1;
}



/* Entry: 10817147c; end: 108171487;  */

undefined4 * FUN_10817147c(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  
  func_0x00010817194c();
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)param_1[2]) {
    FUN_108171620(puVar7,param_2);
    puVar11 = puVar7 + 6;
  }
  else {
    lVar14 = (long)puVar7 - *param_1;
    uVar1 = lVar14 / 0x18 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_108171658();
LAB_10817161c:
      func_0x000104bd35f4();
      *puVar7 = *param_2;
      FUN_1083a33c4(puVar7 + 2,param_2 + 2);
      uVar10 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(puVar7 + 4) = uVar10;
      return puVar7;
    }
    uVar4 = (param_1[2] - *param_1) / 0x18;
    uVar12 = uVar4 * 2;
    if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
      uVar12 = uVar1;
    }
    if (0x555555555555554 < uVar4) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_10817161c;
      lVar8 = uVar12 * 0x18;
      __Znwm();
    }
    lVar14 = lVar8 + lVar14;
    FUN_108171620(lVar14,param_2);
    puVar9 = (undefined4 *)*param_1;
    puVar3 = (undefined4 *)param_1[1];
    puVar15 = (undefined4 *)(lVar14 + (((long)puVar3 - (long)puVar9) / -0x18) * 0x18);
    puVar11 = puVar15;
    for (puVar7 = puVar9; puVar7 != puVar3; puVar7 = puVar7 + 6) {
      *puVar11 = *puVar7;
      lVar13 = *(long *)(puVar7 + 2);
      if (lVar13 != 0 && lVar13 != 0x1138270b0) {
        piVar2 = (int *)(lVar13 + 4);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)(puVar11 + 2) = lVar13;
      lVar13 = *(long *)(puVar7 + 4);
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)(puVar11 + 4) = lVar13;
      puVar11 = puVar11 + 6;
    }
    for (; puVar9 != puVar3; puVar9 = puVar9 + 6) {
      func_0x000108171394();
    }
    puVar11 = (undefined4 *)(lVar14 + 0x18);
    puVar7 = (undefined4 *)*param_1;
    *param_1 = (long)puVar15;
    param_1[1] = (long)puVar11;
    param_1[2] = lVar8 + uVar12 * 0x18;
    if (puVar7 != (undefined4 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return puVar7;
}



/* Entry: 108171488; end: 10817161f;  */

undefined4 * FUN_108171488(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 < (undefined4 *)param_1[2]) {
    FUN_108171620(puVar7,param_2);
    puVar11 = puVar7 + 6;
  }
  else {
    lVar14 = (long)puVar7 - *param_1;
    uVar1 = lVar14 / 0x18 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
      FUN_108171658();
LAB_10817161c:
      func_0x000104bd35f4();
      *puVar7 = *param_2;
      FUN_1083a33c4(puVar7 + 2,param_2 + 2);
      uVar10 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(puVar7 + 4) = uVar10;
      return puVar7;
    }
    uVar4 = (param_1[2] - *param_1) / 0x18;
    uVar12 = uVar4 * 2;
    if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
      uVar12 = uVar1;
    }
    if (0x555555555555554 < uVar4) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_10817161c;
      lVar8 = uVar12 * 0x18;
      __Znwm();
    }
    lVar14 = lVar8 + lVar14;
    FUN_108171620(lVar14,param_2);
    puVar9 = (undefined4 *)*param_1;
    puVar3 = (undefined4 *)param_1[1];
    puVar15 = (undefined4 *)(lVar14 + (((long)puVar3 - (long)puVar9) / -0x18) * 0x18);
    puVar11 = puVar15;
    for (puVar7 = puVar9; puVar7 != puVar3; puVar7 = puVar7 + 6) {
      *puVar11 = *puVar7;
      lVar13 = *(long *)(puVar7 + 2);
      if (lVar13 != 0 && lVar13 != 0x1138270b0) {
        piVar2 = (int *)(lVar13 + 4);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)(puVar11 + 2) = lVar13;
      lVar13 = *(long *)(puVar7 + 4);
      if (lVar13 != 0) {
        piVar2 = (int *)(lVar13 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(long *)(puVar11 + 4) = lVar13;
      puVar11 = puVar11 + 6;
    }
    for (; puVar9 != puVar3; puVar9 = puVar9 + 6) {
      func_0x000108171394();
    }
    puVar11 = (undefined4 *)(lVar14 + 0x18);
    puVar7 = (undefined4 *)*param_1;
    *param_1 = (long)puVar15;
    param_1[1] = (long)puVar11;
    param_1[2] = lVar8 + uVar12 * 0x18;
    if (puVar7 != (undefined4 *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return puVar7;
}



/* Entry: 108171620; end: 108171657;  */

undefined4 * FUN_108171620(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_1083a33c4(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 108171658; end: 108171663;  */

void FUN_108171658(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010817194c();
  func_0x000108171940();
  *unaff_x19 = &PTR_DAT_110a29fc0;
  FUN_108170758(unaff_x19 + 6);
  *unaff_x19 = &PTR_FUN_110a28970;
  FUN_1081596e8(unaff_x19 + 2);
  return;
}



/* Entry: 108171664; end: 108171683;  */

void FUN_108171664(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108171940();
  *unaff_x19 = &PTR_DAT_110a29fc0;
  FUN_108170758(unaff_x19 + 6);
  *unaff_x19 = &PTR_FUN_110a28970;
  FUN_1081596e8(unaff_x19 + 2);
  return;
}



/* Entry: 108171684; end: 10817175b;  */

void FUN_108171684(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_10839436c(*param_2);
  FUN_1083464e4(param_1);
  plVar4 = (long *)param_2[1];
  plVar1 = (long *)param_2[2];
  do {
    if (plVar4 == plVar1) {
      return;
    }
    lVar3 = *param_2;
    lVar5 = *plVar4;
    lVar2 = lVar5 + 8;
    _strlen(lVar2);
    FUN_1083943ac(lVar3,lVar5 + 8,lVar2);
    if (lVar3 == 0) {
LAB_108171724:
      FUN_10841076c(&UNK_10f47d639);
    }
    else {
      if (*(int *)(lVar3 + 0x1c) != (int)((ulong)(((long *)plVar4[1])[1] - *(long *)plVar4[1]) >> 2)
         ) goto LAB_108171724;
      _memcpy(*(long *)(*param_1 + 0x18) + *(long *)(lVar3 + 0x10));
    }
    plVar4 = plVar4 + 2;
  } while( true );
}



/* Entry: 10817175c; end: 1081717a3;  */

void FUN_10817175c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108171978();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1081717a4; end: 1081717d3;  */

undefined8 * FUN_1081717a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a080;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081717d4; end: 1081717d7;  */

void FUN_1081717d4(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108171940();
  *unaff_x19 = &PTR_DAT_110a2a080;
  FUN_108164628(unaff_x19 + 6);
  *unaff_x19 = &PTR_FUN_110a28970;
  FUN_1081596e8(unaff_x19 + 2);
  return;
}



/* Entry: 1081717d8; end: 1081717eb;  */

void FUN_1081717d8(void)

{
  FUN_108171888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081717ec; end: 108171887;  */

void FUN_1081717ec(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_108171684(&uStack_38);
    uStack_30 = uStack_38;
    uStack_38 = 0;
    FUN_1083948e4(auStack_28,lVar1,&uStack_30);
    FUN_108154c48(&uStack_30);
    func_0x0001078bddf8(&uStack_38);
    FUN_1081648e4(*(undefined8 *)(param_1 + 0x30),auStack_28);
    FUN_108115b2c(auStack_28);
  }
  return;
}



/* Entry: 108171888; end: 1081718a7;  */

void FUN_108171888(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108171940();
  *unaff_x19 = &PTR_DAT_110a2a080;
  FUN_108164628(unaff_x19 + 6);
  *unaff_x19 = &PTR_FUN_110a28970;
  FUN_1081596e8(unaff_x19 + 2);
  return;
}



/* Entry: 1081718a8; end: 1081718ef;  */

void FUN_1081718a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108171978();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1081718f0; end: 108171983;  */

void FUN_1081718f0(void)

{
  return;
}



/* Entry: 108171984; end: 108171d33;  */

undefined8 ** FUN_108171984(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0xd8;
  __Znwm();
  plStack_70 = (long *)*param_4;
  *param_4 = 0;
  uStack_90 = 0;
  FUN_1081659f0(&plStack_88,&plStack_70,1);
  FUN_10818d360(puVar6,&plStack_88);
  FUN_10815640c(&plStack_88);
  FUN_108154cb4(&plStack_70);
  *puVar6 = &PTR_FUN_110a2a0b8;
  lVar9 = param_2[2];
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[9] = lVar9;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0x3f800000;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0x3f80000000000000;
  puVar6[0x11] = 0x3f800000;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0x3f80000000000000;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x14] = 0;
  auVar11 = NEON_fmov(0x3f800000,4);
  puVar6[0x18] = auVar11._8_8_;
  puVar6[0x17] = auVar11._0_8_;
  puVar6[0x1a] = 0;
  puVar6[0x19] = 0x3f800000;
  puStack_a0 = puVar6;
  FUN_108154cb4(&uStack_90);
  lVar10 = *param_2;
  lStack_a8 = 0;
  plVar7 = (long *)0x90;
  __Znwm();
  puStack_a0 = (undefined8 *)0x0;
  uStack_90 = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  plStack_70 = (long *)0x0;
  plVar7[6] = (long)puVar6;
  FUN_108171d34(&plStack_70);
  *plVar7 = (long)&PTR_SUB_110a2a110;
  plVar7[9] = 0;
  lVar9 = NEON_fmov(0x3f800000,4);
  plVar7[10] = lVar9;
  plVar7[8] = 0;
  plVar7[7] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0x3f00000000000000;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0x42c80000;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plStack_88 = param_3;
  lStack_80 = lVar10;
  plStack_78 = plVar7;
  FUN_1081662b4(&plStack_88,7);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108166d68();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108171d34(&uStack_90);
  FUN_10816040c(plVar7 + 2);
  lVar9 = plVar7[6];
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_98 = 0;
  lStack_a8 = lVar9;
  if ((plVar7[2] == plVar7[3]) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    plStack_70 = plVar7;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  else {
    plStack_70 = (long *)0x0;
    plStack_88 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar10 + 0x70),&plStack_88);
    FUN_108155920(&plStack_88);
  }
  FUN_108172598(&plStack_70);
  FUN_108172598(&uStack_98);
  lStack_a8 = 0;
  *param_1 = lVar9;
  FUN_108171d34(&lStack_a8);
  ppuVar8 = &puStack_a0;
  FUN_108171d34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  FUN_108172598(&plStack_70);
  FUN_108172598(&uStack_98);
  FUN_108171d34(&lStack_a8);
  ppuVar8 = &puStack_a0;
  FUN_108171d34();
  func_0x000108172abc();
  plVar7 = *ppuVar8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return ppuVar8;
}



/* Entry: 108171d34; end: 108171d7f;  */

long * FUN_108171d34(long *param_1)

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



/* Entry: 108171d80; end: 108171daf;  */

void FUN_108171d80(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  func_0x000106f47224(param_1 + 0xb);
  func_0x000106f47224(param_1 + 10);
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108171db0; end: 108171dc3;  */

void FUN_108171db0(void)

{
  FUN_108171d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108171dc4; end: 108171eef;  */

float FUN_108171dc4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108114f18(param_1 + 0x50,0);
  if (*(int *)(param_1 + 0xac) != 1) {
    FUN_108171fe0(0x3f800000,&uStack_28,param_1);
    uVar1 = uStack_28;
    uStack_28 = 0;
    func_0x000108114f18(param_1 + 0x50,uVar1);
    func_0x000108172ac4();
    if (*(int *)(param_1 + 0xac) == 2) goto LAB_108171e94;
  }
  FUN_108171fe0(0xbf800000,&uStack_28,param_1);
  uVar1 = uStack_28;
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    uStack_28 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
    uStack_28 = 0;
    uStack_40 = uVar1;
    lStack_38 = lVar2;
    FUN_1083ba7d0(&uStack_30,3,&lStack_38,&uStack_40);
    uVar1 = uStack_30;
  }
  uStack_30 = 0;
  func_0x000108114f18(param_1 + 0x50,uVar1);
  func_0x000106f47224(&uStack_30);
  if (lVar2 != 0) {
    func_0x000106f47224(&uStack_40);
    func_0x000108172a8c();
  }
  func_0x000108172ac4();
LAB_108171e94:
  return *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xa8);
}



/* Entry: 108171ef0; end: 108171fab;  */

void FUN_108171ef0(long param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
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
  
  if (0.0 < *(float *)(param_1 + 0xa8)) {
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
    uStack_2c = 0x140800000;
    uVar1 = 0;
    if (*(long *)(param_1 + 0x50) != 0) {
      do {
        func_0x000108172a68();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_68 = uVar1;
    func_0x000108171fb4(0);
    func_0x000108172a8c();
    func_0x000108340df0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                        *(undefined4 *)(param_1 + 0xa8),param_2,&uStack_70);
    FUN_108375e94(&uStack_70);
  }
  return;
}



/* Entry: 108171fac; end: 108171fdf;  */

undefined8 FUN_108171fac(void)

{
  return 0;
}



/* Entry: 108171fe0; end: 1081724e7;  */

void FUN_108171fe0(float param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long unaff_x21;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 auStack_100 [5];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [5];
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  fStack_74 = param_1;
  FUN_1081724e8(param_3 + 0xb0);
  if ((param_1 <= 0.0) ||
     ((*(float *)(param_3 + 0xcc) <= 0.0 && (*(float *)(param_3 + 0xd0) <= 0.0)))) {
    if ((bRam0000000113729fc8 & 1) == 0) {
      iVar2 = 0x13729fc8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000108172a78(&UNK_10df05de9);
        uStack_50 = 0;
        uStack_68 = (undefined *)0x0;
        uStack_70 = (undefined8 *)0x0;
        uStack_58 = 0;
        uStack_60 = 0;
        func_0x000108172a94();
        func_0x000108172aac();
        func_0x000108172aa4();
        lRam0000000113729fc0 = unaff_x21;
        ___cxa_guard_release(0x113729fc8);
      }
    }
    uStack_a8 = 0;
    if (lRam0000000113729fc0 != 0) {
      do {
        func_0x000108172a68();
        uStack_a8 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    bVar1 = false;
  }
  else {
    if ((bRam0000000113729fb8 & 1) == 0) {
      iVar2 = 0x13729fb8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000108172a78(&UNK_10df05c0d);
        uStack_50 = 0;
        uStack_68 = (undefined *)0x0;
        uStack_70 = (undefined8 *)0x0;
        uStack_58 = 0;
        uStack_60 = 0;
        func_0x000108172a94();
        func_0x000108172aac();
        func_0x000108172aa4();
        lRam0000000113729fb0 = unaff_x21;
        ___cxa_guard_release(0x113729fb8);
      }
    }
    uStack_a8 = 0;
    if (lRam0000000113729fb0 != 0) {
      do {
        func_0x000108172a68();
        uStack_a8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    bVar1 = true;
  }
  FUN_108165d58(auStack_a0,&uStack_a8);
  FUN_108154c00(&uStack_a8);
  plVar7 = (long *)(param_3 + 0x58);
  if ((*plVar7 == 0) || (lVar3 = param_3, FUN_10818d4a4(), (int)lVar3 != 0)) {
    puVar8 = *(undefined8 **)(param_3 + 0x30);
    FUN_10818a8b4(*puVar8,0,0x113254e20);
    puVar4 = &uStack_70;
    FUN_108383398(puVar4);
    uVar9 = *puVar8;
    uStack_d8 = (undefined8 *)0x0;
    puStack_d0 = *(undefined **)(param_3 + 0x48);
    FUN_1083835c4();
    FUN_10818c910(uVar9,puVar4,0);
    FUN_10838362c(auStack_100,&uStack_70);
    FUN_1083bd100(&uStack_d8,auStack_100[0],1,1,1,0,0);
    uVar9 = uStack_d8;
    uStack_d8 = (undefined8 *)0x0;
    func_0x000108114f18(plVar7,uVar9);
    func_0x000106f47224(&uStack_d8);
    func_0x00010811496c(auStack_100);
    FUN_108383490(&uStack_70);
  }
  uStack_b0 = 0;
  if (*plVar7 != 0) {
    do {
      func_0x000108172a68();
      uStack_b0 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  puVar6 = &UNK_10f47d354;
  puVar4 = auStack_a0;
  func_0x000108165cc8(puVar4,&UNK_10f47d354,5);
  uStack_70 = puVar4;
  uStack_68 = puVar6;
  FUN_108165cec(&uStack_70,&uStack_b0);
  puVar4 = &uStack_b0;
  func_0x000106f47224();
  puVar8 = (undefined8 *)&UNK_10f47d65b;
  func_0x000108172ad4();
  puVar5 = puVar4;
  if ((puVar8 != (undefined8 *)0x0) &&
     (puVar5 = puVar8, FUN_1083931fc(), puVar5 == (undefined8 *)0x8)) {
    FUN_108165fe0();
    *(undefined8 *)((long)puVar4 + puVar8[2]) = *(undefined8 *)(param_3 + 0x48);
    puVar5 = puVar4;
  }
  puVar6 = &UNK_10f47d667;
  func_0x000108172ad4();
  uStack_70 = puVar5;
  uStack_68 = puVar6;
  func_0x000108165c7c(&uStack_70,&fStack_74);
  uStack_70 = (undefined8 *)
              CONCAT44(*(undefined4 *)(param_3 + 0x70),*(undefined4 *)(param_3 + 0x60));
  uVar12 = *(undefined4 *)(param_3 + 0x84);
  uStack_68 = (undefined *)CONCAT44(*(undefined4 *)(param_3 + 100),*(undefined4 *)(param_3 + 0x80));
  uStack_60 = CONCAT44(uVar12,*(undefined4 *)(param_3 + 0x74));
  uVar11 = *(undefined4 *)(param_3 + 0x78);
  uStack_58 = CONCAT44(uVar11,*(undefined4 *)(param_3 + 0x68));
  uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(param_3 + 0x88));
  puVar6 = &UNK_10f47d673;
  puVar4 = auStack_a0;
  func_0x000108165c0c(puVar4,&UNK_10f47d673,10);
  puVar8 = &uStack_d8;
  uStack_d8 = puVar4;
  puStack_d0 = puVar6;
  func_0x00010816a53c(puVar8,&uStack_70);
  puVar6 = &UNK_10f47d67e;
  func_0x000108172ae0();
  uStack_70 = puVar8;
  uStack_68 = puVar6;
  func_0x000108165c7c(&uStack_70,param_3 + 200);
  if (bVar1) {
    fVar10 = -fStack_74;
    FUN_108172504(param_3 + 0xb0);
    uStack_d8 = (undefined8 *)CONCAT44(uVar11,fVar10);
    puStack_d0 = (undefined *)CONCAT44(puStack_d0._4_4_,uVar12);
    puVar6 = &UNK_10f47d68e;
    puVar4 = auStack_a0;
    func_0x000108165c0c(puVar4,&UNK_10f47d68e,5);
    uStack_70 = puVar4;
    uStack_68 = puVar6;
    FUN_108172520(&uStack_70,&uStack_d8);
    puVar6 = &UNK_10f47d694;
    puVar4 = auStack_a0;
    func_0x000108165c0c(puVar4,&UNK_10f47d694,7);
    puVar8 = &uStack_70;
    uStack_70 = puVar4;
    uStack_68 = puVar6;
    FUN_108172520(puVar8,param_3 + 0xbc);
    puVar6 = &UNK_10f47d69c;
    func_0x000108172ae0();
    uStack_70 = puVar8;
    uStack_68 = puVar6;
    func_0x000108165c7c(&uStack_70,param_3 + 0xcc);
    puVar6 = &UNK_10f47d6ac;
    puVar4 = auStack_a0;
    func_0x000108165c0c(puVar4,&UNK_10f47d6ac,0x10);
    uStack_70 = puVar4;
    uStack_68 = puVar6;
    func_0x000108165c7c(&uStack_70,param_3 + 0xd0);
    puVar6 = &UNK_10f47d6bd;
    puVar4 = auStack_a0;
    func_0x000108165c0c(puVar4,&UNK_10f47d6bd,0xe);
    uStack_70 = puVar4;
    uStack_68 = puVar6;
    func_0x000108165c7c(&uStack_70,param_3 + 0xd4);
  }
  FUN_10814bdfc(&uStack_d8,*(undefined4 *)(param_3 + 0xa0),*(undefined4 *)(param_3 + 0xa4));
  func_0x00010815f6c0(auStack_100,*(undefined4 *)(param_3 + 0xa8),*(undefined4 *)(param_3 + 0xa8));
  FUN_1081600e0(&uStack_70,&uStack_d8,auStack_100);
  FUN_108394a04(param_2,auStack_a0,&uStack_70);
  FUN_108166068(auStack_a0);
  return;
}



/* Entry: 1081724e8; end: 108172503;  */

float FUN_1081724e8(float param_1,undefined8 param_2)

{
  FUN_108172578(param_2,param_2);
  return SQRT(param_1);
}



/* Entry: 108172504; end: 10817251f;  */

float FUN_108172504(float param_1,float *param_2)

{
  return param_1 * *param_2;
}



/* Entry: 108172520; end: 108172577;  */

long * FUN_108172520(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (FUN_1083931fc(), lVar2 == 0xc)) {
    lVar2 = *param_1;
    FUN_108165fe0();
    puVar1 = (undefined8 *)(lVar2 + *(long *)(param_1[1] + 0x10));
    uVar3 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar1 = uVar3;
  }
  return param_1;
}



/* Entry: 108172578; end: 108172597;  */

float FUN_108172578(float *param_1,float *param_2)

{
  return param_1[1] * param_2[1] + *param_2 * *param_1 + param_2[2] * param_1[2];
}



/* Entry: 108172598; end: 1081725e3;  */

long * FUN_108172598(long *param_1)

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



/* Entry: 1081725e4; end: 10817263b;  */

undefined8 * FUN_1081725e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a178;
  FUN_108171d34(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817263c; end: 10817264f;  */

void FUN_10817263c(void)

{
  func_0x000108172614();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108172650; end: 108172a2f;  */

void FUN_108172650(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int extraout_w8;
  undefined4 extraout_w8_00;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  lVar7 = *(long *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x3c);
  bVar2 = false;
  if ((*(float *)(lVar7 + 0xa0) == *(float *)(param_1 + 0x38)) &&
     (bVar2 = false, !NAN(*(float *)(lVar7 + 0xa4)) && !NAN(fVar8))) {
    bVar2 = *(float *)(lVar7 + 0xa4) == fVar8;
  }
  if (!bVar2) {
    *(float *)(lVar7 + 0xa0) = *(float *)(param_1 + 0x38);
    *(float *)(lVar7 + 0xa4) = fVar8;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar7 + 0xa8) != *(float *)(param_1 + 0x40)) {
    *(float *)(lVar7 + 0xa8) = *(float *)(param_1 + 0x40);
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  func_0x000108172a3c((double)*(float *)(param_1 + 0x54));
  iVar6 = 1;
  if (extraout_w8 != 2) {
    iVar6 = 2;
  }
  iVar1 = 0;
  if (extraout_w8 != 1) {
    iVar1 = iVar6;
  }
  if (*(int *)(lVar7 + 0xac) != iVar1) {
    *(int *)(lVar7 + 0xac) = iVar1;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar8 = *(float *)(param_1 + 0x48);
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar10 = *(float *)(param_1 + 0x50);
  FUN_10835edc4(0x3f800000,0,0,*(float *)(param_1 + 0x44) * 0.017453292,auStack_a0);
  FUN_10835edc4(0,0x3f800000,0,fVar8 * 0.017453292,auStack_e0);
  FUN_10835edc4(0,0,0x3f800000,fVar11 * -0.017453292,auStack_120);
  func_0x000108172a3c((double)fVar10);
  switch(extraout_w8_00) {
  case 1:
    puVar4 = auStack_a0;
    puVar5 = auStack_e0;
    break;
  case 2:
    puVar5 = auStack_a0;
    puVar4 = auStack_120;
    goto code_r0x0001081727d8;
  case 3:
    puVar4 = auStack_e0;
    puVar5 = auStack_a0;
    break;
  case 4:
    puVar5 = auStack_e0;
    puVar4 = auStack_120;
    goto code_r0x0001081727f8;
  case 5:
    puVar5 = auStack_120;
    puVar4 = auStack_a0;
code_r0x0001081727d8:
    FUN_10835e5d0(auStack_160,puVar5,puVar4);
    puVar5 = auStack_e0;
    goto code_r0x000108172808;
  default:
    puVar5 = auStack_120;
    puVar4 = auStack_e0;
code_r0x0001081727f8:
    FUN_10835e5d0(auStack_160,puVar5,puVar4);
    puVar5 = auStack_a0;
    goto code_r0x000108172808;
  }
  FUN_10835e5d0(auStack_160,puVar4,puVar5);
  puVar5 = auStack_120;
code_r0x000108172808:
  FUN_10835e5d0(&uStack_1a0,auStack_160,puVar5);
  uVar3 = lVar7 + 0x60;
  func_0x00010835e54c(uVar3,&uStack_1a0);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(lVar7 + 0x68) = uStack_198;
    *(undefined8 *)(lVar7 + 0x60) = uStack_1a0;
    *(undefined8 *)(lVar7 + 0x78) = uStack_188;
    *(undefined8 *)(lVar7 + 0x70) = uStack_190;
    *(undefined8 *)(lVar7 + 0x88) = uStack_178;
    *(undefined8 *)(lVar7 + 0x80) = uStack_180;
    *(undefined8 *)(lVar7 + 0x98) = uStack_168;
    *(undefined8 *)(lVar7 + 0x90) = uStack_170;
    FUN_108172a30();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x7c) * 0.01;
  fVar8 = 2.0;
  if (fVar10 <= 2.0) {
    fVar8 = fVar10;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (*(float *)(lVar7 + 200) != fVar8) {
    *(float *)(lVar7 + 200) = fVar8;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar10 = *(float *)(param_1 + 0x70) * 0.01;
  fVar8 = 10.0;
  if (fVar10 <= 10.0) {
    fVar8 = fVar10;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar11 = *(float *)(param_1 + 0x80) * 0.01;
  fVar10 = 1.0;
  if (fVar11 <= 1.0) {
    fVar10 = fVar11;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (*(float *)(lVar7 + 0xcc) != fVar8 * fVar10) {
    *(float *)(lVar7 + 0xcc) = fVar8 * fVar10;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar11 = *(float *)(param_1 + 0x84) * 0.01;
  fVar10 = 1.0;
  if (fVar11 <= 1.0) {
    fVar10 = fVar11;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (*(float *)(lVar7 + 0xd0) != fVar8 * fVar10) {
    *(float *)(lVar7 + 0xd0) = fVar8 * fVar10;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar10 = *(float *)(param_1 + 0x74) * 0.01;
  fVar8 = 1.0;
  if (fVar10 <= 1.0) {
    fVar8 = fVar10;
  }
  if (fVar8 <= -1.0) {
    fVar8 = -1.0;
  }
  fVar10 = (*(float *)(param_1 + 0x78) + -90.0) * 0.017453292;
  fVar11 = 0.5;
  fVar8 = fVar8 * 3.1415927 * 0.5;
  _sinf();
  fVar9 = SQRT(1.0 - fVar8 * fVar8);
  ___sincosf_stret();
  fVar11 = fVar11 * fVar9;
  fVar10 = fVar10 * fVar9;
  fVar9 = *(float *)(lVar7 + 0xb0);
  if (((fVar9 != fVar11) || (fVar9 = *(float *)(lVar7 + 0xb4), fVar9 != fVar10)) ||
     (fVar9 = *(float *)(lVar7 + 0xb8), fVar9 != fVar8)) {
    *(float *)(lVar7 + 0xb0) = fVar11;
    *(float *)(lVar7 + 0xb4) = fVar10;
    *(float *)(lVar7 + 0xb8) = fVar8;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  FUN_10816385c(param_1 + 0x58);
  if (((*(float *)(lVar7 + 0xbc) != fVar10) || (*(float *)(lVar7 + 0xc0) != fVar11)) ||
     (*(float *)(lVar7 + 0xc4) != fVar9)) {
    *(float *)(lVar7 + 0xbc) = fVar10;
    *(float *)(lVar7 + 0xc0) = fVar11;
    *(float *)(lVar7 + 0xc4) = fVar9;
    FUN_108172a30();
    lVar7 = *(long *)(param_1 + 0x30);
  }
  fVar10 = *(float *)(param_1 + 0x88);
  fVar8 = 0.5;
  if (0.001 >= fVar10 && fVar10 <= 0.5) {
    fVar8 = 0.001;
  }
  if (0.001 < fVar10 && fVar10 <= 0.5) {
    fVar8 = fVar10;
  }
  if (*(float *)(lVar7 + 0xd4) != 1.0 / fVar8) {
    *(float *)(lVar7 + 0xd4) = 1.0 / fVar8;
    FUN_108172a30();
  }
  return;
}



/* Entry: 108172a30; end: 108172aeb;  */

void FUN_108172a30(void)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(unaff_x20 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2 | 8;
        *(short *)(unaff_x20 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(unaff_x20 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 108172aec; end: 108172ccb;  */

void FUN_108172aec(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar3 = *param_2;
  uStack_80 = 0;
  plVar2 = (long *)0x40;
  __Znwm();
  uStack_50 = *param_4;
  *param_4 = 0;
  uStack_70 = 0;
  FUN_1081874f0(&plStack_48,&uStack_50);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 1) = 1;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined2 *)(plVar2 + 5) = 0;
  *plVar2 = (long)&PTR_DAT_110a2a218;
  plVar2[6] = (long)plStack_48;
  plStack_48 = (long *)0x0;
  FUN_108164628(&plStack_48);
  FUN_108154cb4(&uStack_50);
  *plVar2 = (long)&PTR_FUN_110a2a1b0;
  *(undefined4 *)(plVar2 + 7) = 0;
  plStack_68 = param_3;
  lStack_60 = lVar3;
  plStack_58 = plVar2;
  FUN_108164708(&plStack_68,0);
  plStack_78 = plVar2;
  FUN_108154cb4(&uStack_70);
  FUN_10816040c(plVar2 + 2);
  FUN_108164674(&uStack_80,plVar2 + 6);
  plStack_78 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_68 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_108172ccc(&plStack_48);
  FUN_108172ccc(&plStack_78);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_80);
  return;
}



/* Entry: 108172ccc; end: 108172d1b;  */

long * FUN_108172ccc(long *param_1)

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



/* Entry: 108172d1c; end: 108172d4b;  */

undefined8 * FUN_108172d1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a218;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108172d4c; end: 108172d4f;  */

undefined8 * FUN_108172d4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a218;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108172d50; end: 108172d63;  */

void FUN_108172d50(void)

{
  FUN_108172d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108172d64; end: 108172ed7;  */

void FUN_108172d64(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  if ((bRam0000000113729fd8 & 1) == 0) {
    iVar5 = 0x13729fd8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1083a3348(&uStack_38,&UNK_10df05f8f);
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      FUN_108394238(alStack_30);
      lVar4 = alStack_30[0];
      alStack_30[0] = 0;
      FUN_108154bd8(alStack_30);
      FUN_1083a3ca0(uStack_38);
      lRam0000000113729fd0 = lVar4;
      ___cxa_guard_release(0x113729fd8);
    }
  }
  lVar4 = lRam0000000113729fd0;
  if (lRam0000000113729fd0 != 0) {
    piVar1 = (int *)(lRam0000000113729fd0 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_70 = lVar4;
  FUN_108346318(&uStack_60,param_1 + 0x38,4);
  uStack_78 = uStack_60;
  uStack_60 = 0;
  FUN_1083948e4(auStack_68,lVar4,&uStack_78);
  FUN_108154c48(&uStack_78);
  func_0x0001078bddf8(&uStack_60);
  FUN_108154c00(&lStack_70);
  FUN_1081648e4(*(undefined8 *)(param_1 + 0x30),auStack_68);
  FUN_108115b2c(auStack_68);
  return;
}



/* Entry: 108172ed8; end: 108173187;  */

void FUN_108172ed8(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = *param_2;
  plVar6 = (long *)*param_4;
  *param_4 = 0;
  uStack_90 = 0;
  plVar5 = (long *)0x80;
  plStack_88 = plVar6;
  __Znwm();
  plStack_88 = (long *)0x0;
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_FUN_110a2a250;
  plStack_78 = plVar6;
  FUN_10818b15c(plVar5 + 6,0xff000000);
  FUN_10818b15c(plVar5 + 7,0xff000000);
  plStack_48 = plStack_78;
  plStack_78 = (long *)0x0;
  lStack_50 = plVar5[6];
  if (lStack_50 != 0) {
    piVar1 = (int *)(lStack_50 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_58 = plVar5[7];
  if (lStack_58 != 0) {
    piVar1 = (int *)(lStack_58 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_108187900(plVar5 + 8,&plStack_48,&lStack_50,&lStack_58);
  FUN_108158f04(&lStack_58);
  FUN_108158f04(&lStack_50);
  FUN_108154cb4(&plStack_48);
  plVar5[10] = 0;
  plVar5[9] = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plStack_70 = param_3;
  lStack_68 = lVar7;
  plStack_60 = plVar5;
  FUN_108166d68(&plStack_70,0,plVar5 + 9);
  FUN_108166d68();
  FUN_108164708();
  plStack_80 = plVar5;
  FUN_108154cb4(&plStack_78);
  FUN_108154cb4(&plStack_88);
  func_0x000108166cd4(&uStack_90,plVar5 + 8);
  plStack_80 = (long *)0x0;
  if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
    plStack_48 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_70 = plVar5;
    FUN_108155570(*(undefined8 *)(lVar7 + 0x70),&plStack_70);
    FUN_108155920(&plStack_70);
  }
  FUN_108173188(&plStack_48);
  FUN_108173188(&plStack_80);
  uVar4 = uStack_90;
  uStack_90 = 0;
  *param_1 = uVar4;
  FUN_1081669d4(&uStack_90);
  return;
}



/* Entry: 108173188; end: 1081731d7;  */

long * FUN_108173188(long *param_1)

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



/* Entry: 1081731d8; end: 10817321f;  */

undefined8 * FUN_1081731d8(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 0xc);
  func_0x0001056d1ce4(param_1 + 9);
  FUN_1081669d4(param_1 + 8);
  FUN_108158f04(param_1 + 7);
  FUN_108158f04(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108173220; end: 108173233;  */

void FUN_108173220(void)

{
  FUN_1081731d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108173234; end: 1081732af;  */

void FUN_108173234(long param_1)

{
  undefined8 uVar1;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  iStack_24 = (int)param_1 + 0x48;
  FUN_108163830();
  FUN_10816704c(uVar1,&iStack_24);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  iStack_28 = (int)param_1 + 0x60;
  FUN_108163830();
  FUN_10816704c(uVar1,&iStack_28);
  fStack_2c = *(float *)(param_1 + 0x78) / 100.0;
  FUN_10816712c(*(undefined8 *)(param_1 + 0x40),&fStack_2c);
  return;
}



/* Entry: 1081732b0; end: 108173713;  */

void FUN_1081732b0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar9 = *param_2;
  uVar2 = param_3;
  FUN_108169570(param_3,0);
  FUN_108169570(param_3,1);
  uVar3 = param_3;
  FUN_108169570(param_3,7);
  uVar4 = param_3;
  FUN_108169570(param_3,5);
  uVar5 = param_3;
  FUN_108169570(param_3,6);
  lVar6 = 0x60;
  __Znwm();
  uVar7 = uVar2;
  FUN_108154e4c(uVar2);
  func_0x0001081738ac();
  FUN_108154e4c(uVar3);
  FUN_108154e4c(uVar4);
  FUN_108154e4c(uVar5);
  FUN_10815f2c4(lVar6,lVar9,uVar2,uVar7,0,uVar3,uVar4,uVar5,0);
  lStack_98 = lVar6;
  FUN_10816040c(lVar6 + 0x10);
  uStack_a8 = *param_4;
  *param_4 = 0;
  uStack_b0 = 0;
  if (*(long *)(lVar6 + 0x30) != 0) {
    do {
      func_0x00010817389c();
      uStack_b0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_108158594(&plStack_a0,&uStack_a8,&uStack_b0);
  FUN_108155404(&uStack_b0);
  FUN_108154cb4(&uStack_a8);
  lVar6 = *param_2;
  uVar2 = param_3;
  FUN_108169570(param_3,8);
  uVar3 = param_3;
  FUN_108169570(param_3,2);
  uVar4 = param_3;
  FUN_108169570(param_3,4);
  FUN_108169570(param_3,3);
  uStack_b8 = 0;
  plVar8 = (long *)0x50;
  __Znwm();
  FUN_108154e4c(uVar2);
  FUN_108154e4c(uVar3);
  FUN_108154e4c(uVar4);
  func_0x0001081738ac();
  lStack_80 = lStack_98;
  plStack_70 = plStack_a0;
  plStack_a0 = (long *)0x0;
  lStack_98 = 0;
  uStack_88 = 0;
  FUN_10815babc(&plStack_68,0x3f800000,&plStack_70);
  plVar1 = plStack_68;
  *(undefined4 *)(plVar8 + 1) = 1;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined2 *)(plVar8 + 5) = 0;
  *plVar8 = (long)&PTR_DAT_110a2a308;
  plStack_68 = (long *)0x0;
  plVar8[6] = (long)plVar1;
  FUN_10815bbd0(&plStack_68);
  FUN_108154cb4(&plStack_70);
  *plVar8 = (long)&PTR_SUB_110a2a2a0;
  plVar8[7] = lStack_80;
  lStack_80 = 0;
  plVar8[9] = 0x42c8000042c80000;
  plVar8[8] = 0x42c80000;
  func_0x0001081738b8();
  FUN_108161330();
  func_0x0001081738b8();
  FUN_108161330();
  func_0x0001081738b8();
  FUN_108161330();
  func_0x0001081738b8();
  FUN_108161330();
  uStack_78 = 0;
  if (plVar8[7] != 0) {
    do {
      func_0x00010817389c();
      uStack_78 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_108160388(plVar8,&uStack_78);
  FUN_10815db6c(&uStack_78);
  plStack_90 = plVar8;
  FUN_108154cb4(&uStack_88);
  FUN_10815c3c0(&lStack_80);
  FUN_10816040c(plVar8 + 2);
  uVar2 = 0;
  if (plVar8[6] != 0) {
    do {
      func_0x00010817389c();
      uVar2 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  uVar3 = uStack_b8;
  uStack_b8 = uVar2;
  FUN_108173714(uVar3);
  plStack_90 = (long *)0x0;
  if ((plVar8[2] == plVar8[3]) && ((*(byte *)((long)plVar8 + 0x29) & 1) == 0)) {
    plStack_70 = plVar8;
    (**(code **)(*plVar8 + 0x18))(0,plVar8);
  }
  else {
    plStack_70 = (long *)0x0;
    plStack_68 = plVar8;
    FUN_108155570(*(undefined8 *)(lVar6 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_108173740(&plStack_70);
  FUN_108173740(&plStack_90);
  uVar2 = uStack_b8;
  uStack_b8 = 0;
  *param_1 = uVar2;
  FUN_10815bbd0(&uStack_b8);
  FUN_1081596a8(&plStack_a0);
  FUN_10815c3c0(&lStack_98);
  return;
}



/* Entry: 108173714; end: 10817373f;  */

void FUN_108173714(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108173738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108173740; end: 10817378f;  */

long * FUN_108173740(long *param_1)

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



/* Entry: 108173790; end: 1081737e7;  */

undefined8 * FUN_108173790(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2a308;
  FUN_10815bbd0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081737e8; end: 1081737fb;  */

void FUN_1081737e8(void)

{
  func_0x0001081737c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081737fc; end: 10817389b;  */

void FUN_1081737fc(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  fStack_24 = *(float *)(param_1 + 0x40) * 0.01;
  FUN_10815bc14(*(undefined8 *)(param_1 + 0x30),&fStack_24);
  fVar2 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x44) + 0.5),0x4effffff);
  if (fVar2 <= -2.1474835e+09) {
    fVar2 = -2.1474835e+09;
  }
  lVar1 = 0x48;
  if ((int)fVar2 != 0) {
    lVar1 = 0x4c;
  }
  uStack_2c = *(undefined4 *)(param_1 + lVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0x4c);
  FUN_10815f6ec(*(undefined8 *)(param_1 + 0x38),&uStack_2c);
  return;
}



/* Entry: 10817389c; end: 1081738c3;  */

void FUN_10817389c(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1081738c4; end: 108173c07;  */

long * FUN_1081738c4(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *aplStack_80 [3];
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  
  plVar6 = &lStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *param_2;
  uVar7 = *param_4;
  *param_4 = 0;
  lStack_a0 = 0;
  plVar5 = (long *)0xa0;
  uStack_98 = uVar7;
  __Znwm();
  uStack_98 = 0;
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  *plVar5 = (long)&PTR_FUN_110a2a340;
  uStack_88 = uVar7;
  func_0x000108173d5c(plVar5 + 6);
  func_0x000108173d5c(plVar5 + 7);
  func_0x000108173d5c(plVar5 + 8);
  uStack_68 = uStack_88;
  uStack_88 = 0;
  plStack_60 = (long *)0x0;
  if (plVar5[6] != 0) {
    do {
      func_0x000108173d4c();
      plStack_60 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  lStack_58 = 0;
  if (plVar5[7] != 0) {
    do {
      func_0x000108173d4c();
      lStack_58 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  plStack_50 = (long *)0x0;
  if (plVar5[8] != 0) {
    do {
      func_0x000108173d4c();
      plStack_50 = (long *)extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  FUN_108166a28(aplStack_80,&plStack_60,3);
  FUN_1081879f4(plVar5 + 9,&uStack_68,aplStack_80);
  FUN_108166924(aplStack_80);
  lVar8 = 0x10;
  do {
    FUN_108158f04((long)&plStack_60 + lVar8);
    lVar8 = lVar8 + -8;
  } while (lVar8 != -8);
  FUN_108154cb4(&uStack_68);
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0x11] = 0;
  plVar5[0x10] = 0;
  *(undefined8 *)((long)plVar5 + 0x94) = 0;
  *(undefined8 *)((long)plVar5 + 0x8c) = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plStack_60 = param_3;
  lStack_58 = lVar9;
  plStack_50 = plVar5;
  FUN_108166d68(&plStack_60,0,plVar5 + 0x10);
  FUN_108166d68();
  FUN_108166d68();
  FUN_108164708();
  plStack_90 = plVar5;
  FUN_108154cb4(&uStack_88);
  FUN_108154cb4(&uStack_98);
  func_0x000108166cd4(&lStack_a0,plVar5 + 9);
  plStack_90 = (long *)0x0;
  if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
    plStack_60 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  else {
    plStack_60 = (long *)0x0;
    aplStack_80[0] = plVar5;
    FUN_108155570(*(undefined8 *)(lVar9 + 0x70),aplStack_80);
    FUN_108155920(aplStack_80);
  }
  FUN_108173c08(&plStack_60);
  FUN_108173c08(&plStack_90);
  lVar9 = lStack_a0;
  lStack_a0 = 0;
  *param_1 = lVar9;
  FUN_1081669d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108173c08(&plStack_60);
    FUN_108173c08(&plStack_90);
    FUN_1081669d4(&lStack_a0);
    __Unwind_Resume();
    plVar5 = (long *)*plVar6;
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
    return plVar6;
  }
  return plVar6;
}



/* Entry: 108173c08; end: 108173c57;  */

long * FUN_108173c08(long *param_1)

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



/* Entry: 108173c58; end: 108173caf;  */

undefined8 * FUN_108173c58(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 0x10);
  func_0x0001056d1ce4(param_1 + 0xd);
  func_0x0001056d1ce4(param_1 + 10);
  FUN_1081669d4(param_1 + 9);
  FUN_108158f04(param_1 + 8);
  FUN_108158f04(param_1 + 7);
  FUN_108158f04(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108173cb0; end: 108173cc3;  */

void FUN_108173cb0(void)

{
  FUN_108173c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108173cc4; end: 108173d3b;  */

void FUN_108173cc4(long param_1)

{
  float fStack_24;
  
  FUN_108163830(param_1 + 0x50);
  FUN_108173d3c();
  FUN_108163830(param_1 + 0x68);
  FUN_108173d3c();
  FUN_108163830(param_1 + 0x80);
  FUN_108173d3c();
  fStack_24 = (100.0 - *(float *)(param_1 + 0x98)) / 100.0;
  FUN_10816712c(*(undefined8 *)(param_1 + 0x48),&fStack_24);
  return;
}



/* Entry: 108173d3c; end: 108173d63;  */

void FUN_108173d3c(int param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long unaff_x20;
  int iStack000000000000000c;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(int *)(unaff_x20 + 0x48) != param_1) {
    *(int *)(unaff_x20 + 0x48) = param_1;
    uStack_21 = 1;
    iStack000000000000000c = param_1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(unaff_x20 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(unaff_x20 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(unaff_x20 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 108173d64; end: 108173f3f;  */

void FUN_108173d64(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar3 = *param_2;
  plVar4 = (long *)*param_4;
  *param_4 = 0;
  uStack_80 = 0;
  plVar2 = (long *)0x50;
  plStack_78 = plVar4;
  __Znwm();
  plStack_78 = (long *)0x0;
  uStack_68 = 0;
  plStack_48 = plVar4;
  FUN_108169684();
  FUN_108154cb4(&plStack_48);
  *plVar2 = (long)&PTR_FUN_110a2a390;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plStack_60 = param_3;
  lStack_58 = lVar3;
  plStack_50 = plVar2;
  FUN_108164708(&plStack_60,0);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_70 = plVar2;
  FUN_108154cb4(&uStack_68);
  FUN_108154cb4(&plStack_78);
  FUN_10816dd04(&uStack_80,plVar2 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar2[2] == plVar2[3]) && ((*(byte *)((long)plVar2 + 0x29) & 1) == 0)) {
    plStack_48 = plVar2;
    (**(code **)(*plVar2 + 0x18))(0,plVar2);
  }
  else {
    plStack_48 = (long *)0x0;
    plStack_60 = plVar2;
    FUN_108155570(*(undefined8 *)(lVar3 + 0x70),&plStack_60);
    FUN_108155920(&plStack_60);
  }
  FUN_108173f40(&plStack_48);
  FUN_108173f40(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_10816dcb0(&uStack_80);
  return;
}



/* Entry: 108173f40; end: 108173f8f;  */

long * FUN_108173f40(long *param_1)

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



/* Entry: 108173f90; end: 108173f93;  */

undefined8 * FUN_108173f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a29600;
  FUN_10816dcb0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108173f94; end: 108173fa7;  */

void FUN_108173f94(void)

{
  FUN_10816dd98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108173fa8; end: 1081741cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108173fa8(undefined8 *param_1,undefined8 *param_2,ulong *param_3,float *param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  double dVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *extraout_x8;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  ulong auStack_e0 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar14 = *(float *)(param_2 + 8);
  if (100.0 <= fVar14) {
    param_2 = (undefined8 *)0x0;
    FUN_1083bae14(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (fVar14 <= 0.0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    fVar14 = fVar14 * 0.01;
    fVar15 = *(float *)(param_2 + 9);
    if (fVar15 <= 1.0) {
      fVar15 = 1.0;
    }
    fVar16 = *(float *)((long)param_2 + 0x44) * -0.017453292;
    fVar18 = *(float *)((long)param_2 + 0x4c) * 3.0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0x3f;
    if (0.5 <= fVar18) {
      uVar20 = SUB41(fVar18,0);
      uVar21 = (undefined1)((uint)fVar18 >> 8);
      uVar22 = (undefined1)((uint)fVar18 >> 0x10);
      uVar23 = (undefined1)((uint)fVar18 >> 0x18);
    }
    fVar18 = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) / fVar15;
    fVar26 = fVar14;
    if (fVar18 <= fVar14) {
      fVar26 = fVar18;
    }
    fVar26 = fVar26 * 0.5;
    fVar19 = 1.0 - fVar14;
    if (fVar18 <= 1.0 - fVar14) {
      fVar19 = fVar18;
    }
    uVar24 = NEON_fmov(0x3f800000,4);
    fVar3 = ((0.0 - fVar14) / fVar18 + (float)uVar24) * 0.5;
    fVar18 = ((1.0 - fVar14) / fVar18 + (float)((ulong)uVar24 >> 0x20)) * 0.5;
    iVar5 = -(uint)(fVar18 < 1.0);
    uVar1 = (CONCAT44(fVar18 * 255.0,fVar3 * 255.0) ^ 0x437f000000000000) &
            CONCAT17((char)((uint)iVar5 >> 0x18),
                     CONCAT16((char)((uint)iVar5 >> 0x10),
                              CONCAT15((char)((uint)iVar5 >> 8),
                                       CONCAT14((char)iVar5,-(uint)(0.0 < fVar3)))));
    auVar25 = NEON_fmov(0x3fe0000000000000,8);
    dVar4 = (double)(long)((double)(float)uVar1 + auVar25._0_8_);
    lVar6 = (long)((double)(float)((uint)(uVar1 >> 0x20) ^ 0x437f0000) + auVar25._8_8_);
    auVar25._8_4_ = (int)lVar6;
    auVar25._0_8_ = dVar4;
    auVar25._12_4_ = (int)((ulong)lVar6 >> 0x20);
    fVar18 = (float)auVar25._8_8_;
    uVar24 = NEON_fminnm(CONCAT17((char)((uint)fVar18 >> 0x18),
                                  CONCAT16((char)((uint)fVar18 >> 0x10),
                                           CONCAT15((char)((uint)fVar18 >> 8),
                                                    CONCAT14(SUB41(fVar18,0),(float)dVar4)))),
                         0x4effffff4effffff,4);
    uVar24 = NEON_fmaxnm(uVar24,0xceffffffceffffff,4);
    iVar5 = (int)(float)((ulong)uVar24 >> 0x20);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)(CONCAT14((char)iVar5,(int)(float)uVar24) & 0xff000000ff) << 0x18 |
                   0xffffff00ffffff;
    auVar25 = NEON_rev64(auVar2,4);
    uStack_38 = CONCAT44(auVar25._4_4_,iVar5 << 0x18) | 0xffffff;
    uStack_40 = (ulong)CONCAT14(auVar25[3],
                                CONCAT13(auVar25[2],
                                         CONCAT12(auVar25[1],
                                                  CONCAT11(auVar25[0],(char)(int)(float)uVar24))))
                << 0x18 | 0xffffff;
    fStack_50 = (fVar14 - fVar26) - fVar26;
    fStack_4c = (fVar14 + fVar19 * 0.5) - fVar26;
    fStack_48 = (1.0 - fVar19 * 0.5) - fVar26;
    uStack_44 = 0x3f800000;
    fVar14 = fStack_48;
    ___sincosf_stret();
    fVar18 = (float)param_2[7];
    fVar19 = (float)((ulong)param_2[7] >> 0x20);
    uStack_58 = CONCAT44(fVar16 * -fVar15 * (fVar26 + 1.0) + fVar19 * 0.5,
                         fVar15 * fVar14 * (fVar26 + 1.0) + fVar18 * 0.5);
    uStack_60 = CONCAT44(fVar16 * -fVar15 * (fVar26 + 0.0) + fVar19 * 0.5,
                         fVar15 * fVar14 * (fVar26 + 0.0) + fVar18 * 0.5);
    param_2 = &uStack_60;
    param_3 = &uStack_40;
    param_4 = &fStack_50;
    FUN_1083c1ad4(param_1,param_2,param_3,param_4,4,1,0,0);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = auStack_e0;
  FUN_1081559bc(puVar7,param_2,param_3);
  if (auStack_e0[0] == 0) {
    *extraout_x8 = 0;
  }
  else {
    func_0x000108174534();
    FUN_108158a5c();
    puVar8 = puVar7;
    func_0x000108174534();
    FUN_108158a5c();
    puVar9 = puVar8;
    func_0x000108174534();
    FUN_108158a5c();
    if (((puVar7 != (ulong *)0x0) && (puVar8 != (ulong *)0x0)) && (puVar9 != (ulong *)0x0)) {
      if ((*puVar8 & 7) == 0) {
        pbVar11 = (byte *)((long)puVar8 + 1);
      }
      else {
        pbVar11 = (byte *)((*puVar8 & 0xfffffffffffffff8) + 8);
      }
      if ((*puVar7 & 7) == 0) {
        pbVar12 = (byte *)((long)puVar7 + 1);
      }
      else {
        pbVar12 = (byte *)((*puVar7 & 0xfffffffffffffff8) + 8);
      }
      if ((*puVar9 & 7) == 0) {
        pbVar13 = (byte *)((long)puVar9 + 1);
      }
      else {
        pbVar13 = (byte *)((*puVar9 & 0xfffffffffffffff8) + 8);
      }
      (**(code **)(*(long *)*param_2 + 0x28))(&lStack_e8,(long *)*param_2,pbVar11,pbVar12,pbVar13);
      lVar6 = lStack_e8;
      if (lStack_e8 == 0) {
        FUN_108159fb8(param_2,0,0,&UNK_10f47d6cc);
      }
      else {
        uVar24 = param_2[0xe];
        puVar10 = (undefined8 *)0x28;
        __Znwm();
        lStack_e8 = 0;
        uVar17 = *(undefined4 *)((long)param_2 + 100);
        *(undefined4 *)(puVar10 + 1) = 1;
        *puVar10 = &PTR_FUN_110a2a3e8;
        auStack_e0[1] = 0;
        puVar10[2] = lVar6;
        puVar10[3] = *(undefined8 *)(param_4 + 2);
        *(undefined4 *)(puVar10 + 4) = uVar17;
        FUN_108174448(auStack_e0 + 1);
        uStack_f8 = 0;
        puStack_f0 = puVar10;
        FUN_108155570(uVar24,&puStack_f0);
        FUN_108155920(&puStack_f0);
        FUN_1081743fc(&uStack_f8);
      }
      FUN_108174448(&lStack_e8);
    }
    *extraout_x8 = 0;
    *(undefined1 *)(auStack_e0[0] + 8) = 0;
  }
  return;
}



/* Entry: 1081741d0; end: 1081743fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1081741d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  ulong auStack_60 [2];
  
  puVar2 = auStack_60;
  FUN_1081559bc(puVar2,param_2,param_3);
  if (auStack_60[0] == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000108174534();
    FUN_108158a5c();
    puVar3 = puVar2;
    func_0x000108174534();
    FUN_108158a5c();
    puVar4 = puVar3;
    func_0x000108174534();
    FUN_108158a5c();
    if (((puVar2 != (ulong *)0x0) && (puVar3 != (ulong *)0x0)) && (puVar4 != (ulong *)0x0)) {
      if ((*puVar3 & 7) == 0) {
        pbVar6 = (byte *)((long)puVar3 + 1);
      }
      else {
        pbVar6 = (byte *)((*puVar3 & 0xfffffffffffffff8) + 8);
      }
      if ((*puVar2 & 7) == 0) {
        pbVar7 = (byte *)((long)puVar2 + 1);
      }
      else {
        pbVar7 = (byte *)((*puVar2 & 0xfffffffffffffff8) + 8);
      }
      if ((*puVar4 & 7) == 0) {
        pbVar8 = (byte *)((long)puVar4 + 1);
      }
      else {
        pbVar8 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
      }
      (**(code **)(*(long *)*param_2 + 0x28))(&lStack_68,(long *)*param_2,pbVar6,pbVar7,pbVar8);
      lVar1 = lStack_68;
      if (lStack_68 == 0) {
        FUN_108159fb8(param_2,0,0,&UNK_10f47d6cc);
      }
      else {
        uVar9 = param_2[0xe];
        puVar5 = (undefined8 *)0x28;
        __Znwm();
        lStack_68 = 0;
        uVar10 = *(undefined4 *)((long)param_2 + 100);
        *(undefined4 *)(puVar5 + 1) = 1;
        *puVar5 = &PTR_FUN_110a2a3e8;
        auStack_60[1] = 0;
        puVar5[2] = lVar1;
        puVar5[3] = *(undefined8 *)(param_4 + 8);
        *(undefined4 *)(puVar5 + 4) = uVar10;
        FUN_108174448(auStack_60 + 1);
        uStack_78 = 0;
        puStack_70 = puVar5;
        FUN_108155570(uVar9,&puStack_70);
        FUN_108155920(&puStack_70);
        FUN_1081743fc(&uStack_78);
      }
      FUN_108174448(&lStack_68);
    }
    *param_1 = 0;
    *(undefined1 *)(auStack_60[0] + 8) = 0;
  }
  return;
}



/* Entry: 1081743fc; end: 108174447;  */

long * FUN_1081743fc(long *param_1)

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



/* Entry: 108174448; end: 108174493;  */

long * FUN_108174448(long *param_1)

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



/* Entry: 108174494; end: 1081744cf;  */

void FUN_108174494(void)

{
  FUN_108174520();
  return;
}



/* Entry: 1081744d0; end: 10817451f;  */

undefined8 FUN_1081744d0(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = -1.0;
  if ((*(float *)(param_2 + 0x18) <= param_1) && (param_1 <= *(float *)(param_2 + 0x1c))) {
    fVar1 = (param_1 - *(float *)(param_2 + 0x18)) / *(float *)(param_2 + 0x20);
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x18))(fVar1);
  return 0;
}



/* Entry: 108174520; end: 10817453b;  */

long * FUN_108174520(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return (long *)(param_1 + 0x10);
}



/* Entry: 10817453c; end: 108174a53;  */

ulong * FUN_10817453c(ulong *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  puVar11 = param_1;
  func_0x000108175410(param_1,&UNK_10f47d1d6);
  FUN_108158a5c();
  puVar12 = (ulong *)0x0;
  if (puVar11 != (ulong *)0x0) {
    puVar12 = (ulong *)param_1[0x18];
    if (puVar12 != (ulong *)0x0) {
      if ((*puVar11 & 7) != 0) {
        func_0x000108175458(*puVar11);
      }
      FUN_108154b58();
      FUN_108154e4c();
      if (puVar12 != (ulong *)0x0) {
        FUN_108154b58();
        FUN_108154e4c();
        goto LAB_1081745e4;
      }
    }
    puVar12 = param_1;
    func_0x000108175448(param_1,0);
  }
LAB_1081745e4:
  func_0x000108175410();
  FUN_108158a5c();
  puVar13 = puVar12;
  func_0x000108175410();
  FUN_108158a5c();
  puVar14 = puVar13;
  func_0x000108175410();
  FUN_108158a5c();
  puVar21 = (ulong *)0x0;
  if (((puVar12 != (ulong *)0x0) && (puVar13 != (ulong *)0x0)) && (puVar14 != (ulong *)0x0)) {
    if ((*puVar14 & 7) != 0) {
      func_0x000108175458(*puVar14);
    }
    FUN_1083a3348(&lStack_88);
    uVar10 = (uint)&lStack_88;
    FUN_10817515c();
    uVar6 = *(uint *)((long)param_1 + 0xb4);
    uVar3 = uVar6 - 1 & uVar10;
    for (uVar4 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU); uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = (uint *)(param_1[0x17] + (long)(int)uVar3 * 0x20);
      if (*puVar2 == 0) break;
      if (uVar10 == *puVar2) {
        plVar15 = &lStack_88;
        FUN_1083a3440(plVar15,puVar2 + 2);
        if (((ulong)plVar15 & 1) != 0) {
          puVar21 = (ulong *)(puVar2 + 4);
          goto LAB_1081749a0;
        }
      }
      uVar5 = 0;
      if ((int)uVar3 < 1) {
        uVar5 = uVar6;
      }
      uVar3 = (uVar3 + uVar5) - 1;
    }
    if ((*puVar13 & 7) != 0) {
      func_0x000108175458(*puVar13);
    }
    plVar15 = (long *)*param_1;
    (**(code **)(*plVar15 + 0x20))(&uStack_90);
    if (puVar11 == (ulong *)0x0 && uStack_90 == 0) {
      func_0x000108175448(param_1,1);
      puVar21 = (ulong *)0x0;
    }
    else {
      if (puVar11 != (ulong *)0x0) {
        if ((*puVar11 & 7) != 0) {
          func_0x000108175458(*puVar11);
        }
        uVar20 = param_1[9];
        FUN_1083a3348(&uStack_68);
        uStack_98 = uStack_90;
        uStack_90 = 0;
        FUN_10815cfe4(&uStack_80,uVar20,&uStack_68,&uStack_98);
        uVar9 = uStack_80;
        uVar20 = uStack_90;
        uStack_80 = 0;
        uStack_90 = uVar9;
        FUN_108175138(uVar20);
        FUN_10815b8bc(&uStack_80);
        func_0x000108175420();
        plVar15 = uStack_68;
        FUN_1083a3ca0();
      }
      func_0x000108175410();
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000108155f24();
      plVar16 = plVar15;
      func_0x000108175410();
      uStack_68 = (long *)((ulong)uStack_68._4_4_ << 0x20);
      func_0x000108155f24();
      uStack_78 = uStack_90;
      if ((lStack_88 != 0) && (lStack_88 != 0x1138270b0)) {
        piVar1 = (int *)(lStack_88 + 4);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lStack_a0 = lStack_88;
      uVar20 = (ulong)plVar15 & 0xffffffff | (long)plVar16 << 0x20;
      uStack_90 = 0;
      uStack_a8 = uVar20;
      FUN_1083a33c4(&uStack_80,&lStack_a0);
      uStack_b0 = 0;
      uVar10 = *(uint *)((long)param_1 + 0xb4);
      uStack_70 = uVar20;
      if ((int)(uVar10 * 3) <= (int)param_1[0x16] * 4) {
        uVar3 = uVar10 << 1;
        if ((int)uVar10 < 1) {
          uVar3 = 4;
        }
        *(undefined4 *)(param_1 + 0x16) = 0;
        *(uint *)((long)param_1 + 0xb4) = uVar3;
        uStack_68 = (long *)param_1[0x17];
        param_1[0x17] = 0;
        puVar17 = (undefined8 *)(((ulong)(uVar3 >> 1) & 0x3fffffff) << 6 | 0x10);
        __Znam();
        *puVar17 = 0x20;
        puVar17[1] = (ulong)uVar3;
        if (uVar3 != 0) {
          lVar18 = (ulong)uVar3 << 5;
          puVar19 = puVar17 + 2;
          do {
            *(undefined4 *)puVar19 = 0;
            lVar18 = lVar18 + -0x20;
            puVar19 = puVar19 + 4;
          } while (lVar18 != 0);
        }
        param_1[0x17] = (ulong)(puVar17 + 2);
        for (lVar18 = 0; (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) << 5 != lVar18;
            lVar18 = lVar18 + 0x20) {
          if (*(int *)((long)uStack_68 + lVar18) != 0) {
            FUN_108175188(param_1 + 0x16,(long)uStack_68 + lVar18 + 8);
          }
        }
        func_0x00010815b7e8(&uStack_68);
      }
      param_1 = param_1 + 0x16;
      FUN_108175188(param_1,&uStack_80);
      func_0x00010815b89c(&uStack_80);
      puVar21 = param_1 + 1;
      FUN_10815b8bc(&uStack_b0);
      FUN_1083a3ca0(lStack_a0);
    }
    FUN_10815b8bc(&uStack_90);
LAB_1081749a0:
    FUN_1083a3ca0(lStack_88);
  }
  return puVar21;
}



/* Entry: 108174a54; end: 108174a9f;  */

long * FUN_108174a54(long *param_1)

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



/* Entry: 108174aa0; end: 108174b6b;  */

void FUN_108174aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,long *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar3 = uRam0000000113254e38;
  uVar2 = uRam0000000113254e30;
  uVar1 = uRam0000000113254e20;
  if (*param_6 == 0) {
    param_5[1] = uRam0000000113254e28;
    *param_5 = uVar1;
    param_5[3] = uVar3;
    param_5[2] = uVar2;
    param_5[4] = uRam0000000113254e40;
  }
  else {
    if ((int)param_6[9] == 4) {
      uStack_58 = uRam0000000113254e28;
      uStack_60 = uRam0000000113254e20;
      uStack_48 = uRam0000000113254e38;
      uStack_50 = uRam0000000113254e30;
      uStack_40 = uRam0000000113254e40;
    }
    else {
      uStack_78 = *(undefined8 *)(*param_6 + 0x20);
      uStack_80 = 0;
      uStack_70 = param_1;
      uStack_6c = param_2;
      FUN_10817500c(&uStack_80);
      uStack_90 = 0;
      uStack_88 = NEON_scvtf(*param_7,4);
      uStack_68 = param_3;
      uStack_64 = param_4;
      FUN_10814c9e0(&uStack_60,&uStack_70,&uStack_90,(int)param_6[9]);
    }
    FUN_1081600e0(param_5,param_6 + 4,&uStack_60);
  }
  return;
}



/* Entry: 108174b6c; end: 108174c07;  */

void FUN_108174b6c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar5 = *param_2;
  if (*(long *)(param_1 + 0x48) == lVar5) {
    return;
  }
  *param_2 = 0;
  func_0x000108175028((long *)(param_1 + 0x48),lVar5);
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2 | 8;
        *(short *)(param_1 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 108174c08; end: 10817500b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108174c08(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 *puStack_128;
  long alStack_120 [5];
  long lStack_f8;
  undefined1 auStack_f0 [72];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long alStack_98 [5];
  
  FUN_1081559bc(&puStack_128,param_2,param_3);
  if (puStack_128 == (undefined8 *)0x0) {
    *param_1 = 0;
    return;
  }
  plVar7 = param_2;
  FUN_10817453c(param_2,*puStack_128);
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
    goto LAB_108174ef8;
  }
  alStack_98[1] = 0;
  lVar8 = 0x58;
  __Znwm();
  alStack_98[1] = 0;
  lStack_f8 = 0;
  FUN_1081899a8();
  alStack_98[2] = lVar8;
  func_0x000108175418();
  func_0x000106f47184(alStack_98 + 1);
  alStack_98[0] = 0;
  if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
    plVar9 = (long *)*plVar7;
    (**(code **)(*plVar9 + 0x18))();
    if ((int)plVar9 != 0) goto LAB_108174cb4;
    (**(code **)(*(long *)*plVar7 + 0x28))(&lStack_f8,0);
    lVar12 = lStack_f8;
    if (lStack_f8 == 0) {
      func_0x000108175448(param_2,1);
      *param_1 = 0;
    }
    else {
      FUN_108174aa0(alStack_120,&lStack_f8,plVar7 + 1);
      uVar11 = 0;
      func_0x0001081420b8();
      if ((uVar11 & 1) == 0) {
        FUN_10815f414(alStack_98 + 3,alStack_120);
        lVar6 = alStack_98[3];
        lVar5 = alStack_98[0];
        alStack_98[3] = 0;
        alStack_98[0] = lVar6;
        func_0x0001081750c8(lVar5);
        func_0x000108175428();
      }
      FUN_108174b6c(lVar8,&lStack_f8);
      func_0x000108174bb8(lVar8,auStack_f0);
    }
    func_0x000108175418();
    if (lVar12 != 0) goto LAB_108174dd4;
  }
  else {
LAB_108174cb4:
    FUN_10815f414(&lStack_f8,0x113254e20);
    lVar12 = alStack_98[0];
    alStack_98[0] = lStack_f8;
    lStack_f8 = 0;
    func_0x0001081750c8(lVar12);
    FUN_108160198(&lStack_f8);
    lVar12 = param_2[0xe];
    fVar15 = *(float *)(param_4 + 1);
    fVar14 = *(float *)((long)param_2 + 100);
    puVar10 = (undefined8 *)0x40;
    __Znwm();
    plVar9 = (long *)*plVar7;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    piVar2 = (int *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (alStack_98[0] != 0) {
      piVar2 = (int *)(alStack_98[0] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined4 *)(puVar10 + 1) = 1;
    *puVar10 = &PTR_FUN_110a2a430;
    puVar10[2] = plVar9;
    puVar10[3] = lVar8;
    lStack_f8 = 0;
    alStack_120[0] = 0;
    puVar10[4] = alStack_98[0];
    alStack_98[3] = 0;
    puVar10[5] = plVar7[1];
    *(float *)(puVar10 + 6) = -fVar15;
    *(float *)((long)puVar10 + 0x34) = 1.0 / fVar14;
    (**(code **)(*plVar9 + 0x18))();
    *(char *)(puVar10 + 7) = (char)plVar9;
    func_0x000108175428();
    FUN_1081750ec(alStack_120);
    func_0x000108175420();
    uStack_a8 = 0;
    puStack_a0 = puVar10;
    FUN_108155570(lVar12,&puStack_a0);
    FUN_108155920(&puStack_a0);
    FUN_108174a54(&uStack_a8);
LAB_108174dd4:
    uVar13 = NEON_scvtf(plVar7[1],4);
    *param_4 = uVar13;
    if (alStack_98[0] == 0) {
      alStack_98[2] = 0;
      *param_1 = lVar8;
    }
    else {
      alStack_98[2] = 0;
      alStack_98[3] = alStack_98[0];
      alStack_98[0] = 0;
      alStack_120[0] = lVar8;
      FUN_108158594(&lStack_f8,alStack_120,alStack_98 + 3);
      lVar8 = lStack_f8;
      lStack_f8 = 0;
      *param_1 = lVar8;
      FUN_1081596a8(&lStack_f8);
      FUN_108155404(alStack_98 + 3);
      FUN_108154cb4(alStack_120);
    }
  }
  FUN_108160198(alStack_98);
  FUN_1081750ec(alStack_98 + 2);
LAB_108174ef8:
  *(undefined1 *)(puStack_128 + 1) = 0;
  return;
}



/* Entry: 10817500c; end: 1081750eb;  */

float FUN_10817500c(int *param_1)

{
  return (float)*param_1;
}



/* Entry: 1081750ec; end: 108175137;  */

long * FUN_1081750ec(long *param_1)

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



/* Entry: 108175138; end: 10817515b;  */

void FUN_108175138(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010817540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10817515c; end: 108175187;  */

uint FUN_10817515c(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  func_0x0001081565d4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108175188; end: 10817524f;  */

uint * FUN_108175188(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2;
  FUN_10817515c();
  uVar5 = param_1[1];
  uVar2 = uVar5 - 1 & (uint)uVar6;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x20);
    if (*puVar1 == 0) break;
    if ((uint)uVar6 == *puVar1) {
      uVar7 = param_2;
      FUN_1083a3440(param_2,puVar1 + 2);
      if ((int)uVar7 != 0) {
        func_0x000108175430();
        return puVar1 + 2;
      }
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x000108175430();
  *param_1 = *param_1 + 1;
  return puVar1 + 2;
}



/* Entry: 108175250; end: 1081752a7;  */

undefined4 * FUN_108175250(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_10815b870();
  FUN_1083a33c4(param_1 + 2,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x10);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1081752a8; end: 1081752db;  */

long FUN_1081752a8(long param_1)

{
  FUN_108160198(param_1 + 0x20);
  FUN_1081750ec(param_1 + 0x18);
  FUN_10815b8bc(param_1 + 0x10);
  return param_1;
}


