/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1f2b34; end: 10a1f2c43;  */

void FUN_10a1f2b34(undefined8 param_1)

{
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xc);
  puStack_90 = &UNK_10f643dac;
  uStack_88 = 0;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = (undefined *)0x170;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10a1f2c44(param_1,&puStack_a8);
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  uStack_88 = 0xcffffffff;
  puStack_90 = (undefined *)0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x170;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a215940();
  puStack_b8 = &DAT_10f645728;
  puStack_c0 = &DAT_10f645721;
  puStack_b0 = &DAT_10f64572e;
  puStack_a8 = &UNK_10f64571a;
  ppuStack_a0 = &puStack_c0;
  uStack_98 = 3;
  uStack_88 = 0xcffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f643dac;
  uStack_78 = 0;
  puStack_70 = &UNK_10f643dac;
  uStack_68 = 0;
  uStack_60 = 0x170;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a215b0c(param_1,&puStack_a8,0);
  FUN_10a2162a4(param_1);
  return;
}



/* Entry: 10a1f2c44; end: 10a1f2d1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1f2cdc) */

undefined1  [16] FUN_10a1f2c44(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f645736,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a215844(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1f2d1c; end: 10a1f2d87;  */

void FUN_10a1f2d1c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x268);
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110bb2dc8,0), lVar4 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x270);
    *param_1 = lVar4;
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10a1f2d88; end: 10a1f2db7;  */

void FUN_10a1f2d88(void)

{
  FUN_10a101be4(&UNK_10f645736,0xe,&stack0x00000000);
  return;
}



/* Entry: 10a1f2db8; end: 10a1f2dcb;  */

void FUN_10a1f2db8(void)

{
  FUN_10a1f6b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2dcc; end: 10a1f2ddb;  */

long FUN_10a1f2dcc(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f2ddc; end: 10a1f2df3;  */

void FUN_10a1f2ddc(long param_1)

{
  FUN_10a1f6b84(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2df4; end: 10a1f2dfb;  */

undefined8 * FUN_10a1f2df4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_DAT_110bae008;
  param_1[-3] = &PTR_FUN_110bae138;
  *param_1 = &PTR_FUN_110bae168;
  param_1[0x53] = &PTR_FUN_110bae210;
  param_1[0x10] = &PTR_FUN_110bae1c0;
  if (param_1[0x50] != 0) {
    param_1[0x51] = param_1[0x50];
    __ZdlPv();
  }
  FUN_10a0d92c8(param_1 + 0x4e);
  func_0x00010a0523dc(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110baff90;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x53] = &PTR_DAT_110bb00f0;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110bb0140;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x53] = &PTR_DAT_110bb0210;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f2dfc; end: 10a1f2e13;  */

void FUN_10a1f2dfc(long param_1)

{
  FUN_10a1f6b84(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2e14; end: 10a1f2e1b;  */

undefined8 * FUN_10a1f2e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_DAT_110bae008;
  param_1[-0x13] = &PTR_FUN_110bae138;
  param_1[-0x10] = &PTR_FUN_110bae168;
  param_1[0x43] = &PTR_FUN_110bae210;
  *param_1 = &PTR_FUN_110bae1c0;
  if (param_1[0x40] != 0) {
    param_1[0x41] = param_1[0x40];
    __ZdlPv();
  }
  FUN_10a0d92c8(param_1 + 0x3e);
  func_0x00010a0523dc(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110baff90;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x43] = &PTR_DAT_110bb00f0;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb0140;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x43] = &PTR_DAT_110bb0210;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f2e1c; end: 10a1f2e33;  */

void FUN_10a1f2e1c(long param_1)

{
  FUN_10a1f6b84(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2e34; end: 10a1f2e43;  */

undefined8 * FUN_10a1f2e34(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110bae008;
  puVar1[2] = &PTR_FUN_110bae138;
  puVar1[5] = &PTR_FUN_110bae168;
  puVar1[0x58] = &PTR_FUN_110bae210;
  puVar1[0x15] = &PTR_FUN_110bae1c0;
  if (puVar1[0x55] != 0) {
    puVar1[0x56] = puVar1[0x55];
    __ZdlPv();
  }
  FUN_10a0d92c8(puVar1 + 0x53);
  func_0x00010a0523dc(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110baff90;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x58] = &PTR_DAT_110bb00f0;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110bb0140;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x58] = &PTR_DAT_110bb0210;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f2e44; end: 10a1f2e73;  */

void FUN_10a1f2e44(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1f6b84((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f2e74; end: 10a1f2e7f;  */

undefined8 * FUN_10a1f2e74(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110bb3440;
  param_1[2] = &PTR_FUN_110bb3570;
  param_1[5] = &PTR_FUN_110bb35a0;
  param_1[0x53] = &PTR_FUN_110bb3648;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110bb35f8;
  func_0x00010a0523dc(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb0278;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x53] = &PTR_DAT_110bb03d8;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110bb0428;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x53] = &PTR_DAT_110bb04f8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f2e80; end: 10a1f2e9b;  */

void FUN_10a1f2e80(undefined8 param_1)

{
  FUN_10a1f6c94(param_1,&PTR_PTR_110bb3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2e9c; end: 10a1f2eb3;  */

long FUN_10a1f2e9c(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f2eb4; end: 10a1f2ed3;  */

void FUN_10a1f2eb4(long param_1)

{
  FUN_10a1f6c94(param_1 + -0x10,&PTR_PTR_110bb3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2ed4; end: 10a1f2ee3;  */

undefined8 * FUN_10a1f2ed4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110bb3440;
  param_1[-3] = &PTR_FUN_110bb3570;
  *param_1 = &PTR_FUN_110bb35a0;
  param_1[0x4e] = &PTR_FUN_110bb3648;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110bb35f8;
  func_0x00010a0523dc(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110bb0278;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x4e] = &PTR_DAT_110bb03d8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110bb0428;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x4e] = &PTR_DAT_110bb04f8;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f2ee4; end: 10a1f2f03;  */

void FUN_10a1f2ee4(long param_1)

{
  FUN_10a1f6c94(param_1 + -0x28,&PTR_PTR_110bb3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2f04; end: 10a1f2f13;  */

undefined8 * FUN_10a1f2f04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110bb3440;
  param_1[-0x13] = &PTR_FUN_110bb3570;
  param_1[-0x10] = &PTR_FUN_110bb35a0;
  param_1[0x3e] = &PTR_FUN_110bb3648;
  *param_1 = &PTR_FUN_110bb35f8;
  func_0x00010a0523dc(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110bb0278;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x3e] = &PTR_DAT_110bb03d8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb0428;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x3e] = &PTR_DAT_110bb04f8;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f2f14; end: 10a1f2f33;  */

void FUN_10a1f2f14(long param_1)

{
  FUN_10a1f6c94(param_1 + -0xa8,&PTR_PTR_110bb3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f2f34; end: 10a1f2f4b;  */

undefined8 * FUN_10a1f2f34(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bb3440;
  puVar1[2] = &PTR_FUN_110bb3570;
  puVar1[5] = &PTR_FUN_110bb35a0;
  puVar1[0x53] = &PTR_FUN_110bb3648;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110bb35f8;
  func_0x00010a0523dc(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110bb0278;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x53] = &PTR_DAT_110bb03d8;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110bb0428;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x53] = &PTR_DAT_110bb04f8;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f2f4c; end: 10a1f2f83;  */

void FUN_10a1f2f4c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1f6c94((long)param_1 + lVar1,&PTR_PTR_110bb3680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f2f84; end: 10a1f2f8b;  */

void FUN_10a1f2f84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f2f88);
  (*pcVar1)();
}



/* Entry: 10a1f2f8c; end: 10a1f30cb;  */

long * FUN_10a1f2f8c(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10a1f30cc; end: 10a1f30f3;  */

undefined4 FUN_10a1f30cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a1f30f4; end: 10a1f312f;  */

void FUN_10a1f30f4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10a1f3130; end: 10a1f314b;  */

void FUN_10a1f3130(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f3134);
  (*pcVar1)();
}



/* Entry: 10a1f314c; end: 10a1f315f;  */

void FUN_10a1f314c(void)

{
  FUN_10a1f6dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3160; end: 10a1f317b;  */

long FUN_10a1f3160(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f317c; end: 10a1f3193;  */

void FUN_10a1f317c(long param_1)

{
  FUN_10a1f6dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3194; end: 10a1f319b;  */

undefined8 * FUN_10a1f3194(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_DAT_110bae460;
  param_1[-3] = &PTR_FUN_110bae5a0;
  *param_1 = &PTR_FUN_110bae5d0;
  param_1[0x71] = &PTR_FUN_110bae6f0;
  param_1[0x10] = &PTR_FUN_110bae628;
  param_1[0x4c] = &PTR_FUN_110bae648;
  param_1[0x4d] = &PTR_FUN_110bae678;
  func_0x00010a004e5c(param_1 + 0x6f);
  if (param_1[0x6e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(param_1 + 0x6b);
  func_0x00010a05248c(param_1 + 0x68);
  func_0x00010a05248c(param_1 + 0x66);
  func_0x00010a05248c(param_1 + 100);
  param_1[0x4d] = &PTR_DAT_110bb0818;
  param_1[0x71] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(param_1 + 0x50);
  func_0x00010a004e04(param_1 + 0x4e);
  *puVar1 = &PTR_FUN_110bb0548;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x71] = &PTR_DAT_110bb06a8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110bb06f8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x71] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f319c; end: 10a1f31b3;  */

void FUN_10a1f319c(long param_1)

{
  FUN_10a1f6dac(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f31b4; end: 10a1f31bb;  */

undefined8 * FUN_10a1f31b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_DAT_110bae460;
  param_1[-0x13] = &PTR_FUN_110bae5a0;
  param_1[-0x10] = &PTR_FUN_110bae5d0;
  param_1[0x61] = &PTR_FUN_110bae6f0;
  *param_1 = &PTR_FUN_110bae628;
  param_1[0x3c] = &PTR_FUN_110bae648;
  param_1[0x3d] = &PTR_FUN_110bae678;
  func_0x00010a004e5c(param_1 + 0x5f);
  if (param_1[0x5e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(param_1 + 0x5b);
  func_0x00010a05248c(param_1 + 0x58);
  func_0x00010a05248c(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  param_1[0x3d] = &PTR_DAT_110bb0818;
  param_1[0x61] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(param_1 + 0x40);
  func_0x00010a004e04(param_1 + 0x3e);
  *puVar1 = &PTR_FUN_110bb0548;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110bb06a8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb06f8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f31bc; end: 10a1f31d3;  */

void FUN_10a1f31bc(long param_1)

{
  FUN_10a1f6dac(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f31d4; end: 10a1f31db;  */

undefined8 * FUN_10a1f31d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_DAT_110bae460;
  param_1[-0x4f] = &PTR_FUN_110bae5a0;
  param_1[-0x4c] = &PTR_FUN_110bae5d0;
  param_1[0x25] = &PTR_FUN_110bae6f0;
  param_1[-0x3c] = &PTR_FUN_110bae628;
  *param_1 = &PTR_FUN_110bae648;
  param_1[1] = &PTR_FUN_110bae678;
  func_0x00010a004e5c(param_1 + 0x23);
  if (param_1[0x22] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(param_1 + 0x1f);
  func_0x00010a05248c(param_1 + 0x1c);
  func_0x00010a05248c(param_1 + 0x1a);
  func_0x00010a05248c(param_1 + 0x18);
  param_1[1] = &PTR_DAT_110bb0818;
  param_1[0x25] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(param_1 + 4);
  func_0x00010a004e04(param_1 + 2);
  *puVar1 = &PTR_FUN_110bb0548;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x25] = &PTR_DAT_110bb06a8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110bb06f8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x25] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a1f31dc; end: 10a1f31f3;  */

void FUN_10a1f31dc(long param_1)

{
  FUN_10a1f6dac(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f31f4; end: 10a1f31fb;  */

undefined8 * FUN_10a1f31f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x52;
  *puVar1 = &PTR_DAT_110bae460;
  param_1[-0x50] = &PTR_FUN_110bae5a0;
  param_1[-0x4d] = &PTR_FUN_110bae5d0;
  param_1[0x24] = &PTR_FUN_110bae6f0;
  param_1[-0x3d] = &PTR_FUN_110bae628;
  param_1[-1] = &PTR_FUN_110bae648;
  *param_1 = &PTR_FUN_110bae678;
  func_0x00010a004e5c(param_1 + 0x22);
  if (param_1[0x21] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(param_1 + 0x1e);
  func_0x00010a05248c(param_1 + 0x1b);
  func_0x00010a05248c(param_1 + 0x19);
  func_0x00010a05248c(param_1 + 0x17);
  *param_1 = &PTR_DAT_110bb0818;
  param_1[0x24] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110bb0548;
  param_1[-0x50] = &PTR_FUN_110bb3968;
  param_1[-0x4d] = &PTR_DAT_110bb3998;
  param_1[0x24] = &PTR_DAT_110bb06a8;
  param_1[-0x3d] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -5);
  func_0x00010a042c64(param_1 + -10);
  func_0x00010a0523dc(param_1 + -0xd);
  if (*(char *)(param_1 + -0x16) == '\x01') {
    func_0x00010a042d30(param_1 + -0x18);
  }
  param_1[-0x3d] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3d);
  *puVar1 = &PTR_DAT_110bb06f8;
  param_1[-0x50] = &PTR_FUN_110b9f848;
  param_1[-0x4d] = &PTR_DAT_110b9f878;
  param_1[0x24] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(param_1 + -0x3f);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x50] = &PTR_DAT_110c60a88;
  param_1[-0x4d] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x47);
  puVar6 = (undefined8 *)param_1[-0x46];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x48;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4f);
  if ((param_1[-0x40] != 0) && (lVar2 = *(long *)(param_1[-0x40] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x201) < '\0') {
    __ZdlPv(param_1[-0x43]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x49] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4d] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4c);
  param_1[-0x50] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4f);
  return puVar1;
}



/* Entry: 10a1f31fc; end: 10a1f3213;  */

void FUN_10a1f31fc(long param_1)

{
  FUN_10a1f6dac(param_1 + -0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3214; end: 10a1f3223;  */

undefined8 * FUN_10a1f3214(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110bae460;
  puVar1[2] = &PTR_FUN_110bae5a0;
  puVar1[5] = &PTR_FUN_110bae5d0;
  puVar1[0x76] = &PTR_FUN_110bae6f0;
  puVar1[0x15] = &PTR_FUN_110bae628;
  puVar1[0x51] = &PTR_FUN_110bae648;
  puVar1[0x52] = &PTR_FUN_110bae678;
  func_0x00010a004e5c(puVar1 + 0x74);
  if (puVar1[0x73] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a1fd534(puVar1 + 0x70);
  func_0x00010a05248c(puVar1 + 0x6d);
  func_0x00010a05248c(puVar1 + 0x6b);
  func_0x00010a05248c(puVar1 + 0x69);
  puVar1[0x52] = &PTR_DAT_110bb0818;
  puVar1[0x76] = &PTR_FUN_110bb0890;
  func_0x00010a004e5c(puVar1 + 0x55);
  func_0x00010a004e04(puVar1 + 0x53);
  *puVar1 = &PTR_FUN_110bb0548;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x76] = &PTR_DAT_110bb06a8;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110bb06f8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x76] = &PTR_DAT_110bb07c8;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f3224; end: 10a1f3303;  */

void FUN_10a1f3224(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1f6dac((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f3304; end: 10a1f3307;  */

undefined8 * FUN_10a1f3304(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110baeac0;
  param_1[2] = &PTR_FUN_110baec00;
  param_1[5] = &PTR_FUN_110baec30;
  param_1[0x5d] = &PTR_FUN_110baed28;
  param_1[0x15] = &PTR_FUN_110baec88;
  param_1[0x51] = &PTR_FUN_110baeca8;
  param_1[0x56] = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(param_1 + 0x5a);
  param_1[0x56] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x59] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x59] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x57);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb08f8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5d] = &PTR_DAT_110bb0a58;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb0aa8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5d] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f3308; end: 10a1f331b;  */

void FUN_10a1f3308(void)

{
  func_0x00010a1f6f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f331c; end: 10a1f332b;  */

long FUN_10a1f331c(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f332c; end: 10a1f3343;  */

void FUN_10a1f332c(long param_1)

{
  func_0x00010a1f6f5c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3344; end: 10a1f334b;  */

undefined8 * FUN_10a1f3344(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110baeac0;
  param_1[-3] = &PTR_FUN_110baec00;
  *param_1 = &PTR_FUN_110baec30;
  param_1[0x58] = &PTR_FUN_110baed28;
  param_1[0x10] = &PTR_FUN_110baec88;
  param_1[0x4c] = &PTR_FUN_110baeca8;
  param_1[0x51] = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(param_1 + 0x55);
  param_1[0x51] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x54] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x54] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x52);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110bb08f8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x58] = &PTR_DAT_110bb0a58;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110bb0aa8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x58] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f334c; end: 10a1f3363;  */

void FUN_10a1f334c(long param_1)

{
  func_0x00010a1f6f5c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3364; end: 10a1f336b;  */

undefined8 * FUN_10a1f3364(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110baeac0;
  param_1[-0x13] = &PTR_FUN_110baec00;
  param_1[-0x10] = &PTR_FUN_110baec30;
  param_1[0x48] = &PTR_FUN_110baed28;
  *param_1 = &PTR_FUN_110baec88;
  param_1[0x3c] = &PTR_FUN_110baeca8;
  param_1[0x41] = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(param_1 + 0x45);
  param_1[0x41] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x44] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x44] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x42);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110bb08f8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x48] = &PTR_DAT_110bb0a58;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb0aa8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x48] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f336c; end: 10a1f3383;  */

void FUN_10a1f336c(long param_1)

{
  func_0x00010a1f6f5c(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3384; end: 10a1f338b;  */

undefined8 * FUN_10a1f3384(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110baeac0;
  param_1[-0x4f] = &PTR_FUN_110baec00;
  param_1[-0x4c] = &PTR_FUN_110baec30;
  param_1[0xc] = &PTR_FUN_110baed28;
  param_1[-0x3c] = &PTR_FUN_110baec88;
  *param_1 = &PTR_FUN_110baeca8;
  param_1[5] = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(param_1 + 9);
  param_1[5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[8] = 0;
  }
  func_0x00010a004e5c(param_1 + 6);
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110bb08f8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0xc] = &PTR_DAT_110bb0a58;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110bb0aa8;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0xc] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a1f338c; end: 10a1f33a3;  */

void FUN_10a1f338c(long param_1)

{
  func_0x00010a1f6f5c(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f33a4; end: 10a1f33ab;  */

undefined8 * FUN_10a1f33a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x56;
  *puVar1 = &PTR_FUN_110baeac0;
  param_1[-0x54] = &PTR_FUN_110baec00;
  param_1[-0x51] = &PTR_FUN_110baec30;
  param_1[7] = &PTR_FUN_110baed28;
  param_1[-0x41] = &PTR_FUN_110baec88;
  param_1[-5] = &PTR_FUN_110baeca8;
  *param_1 = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10a00dc2c(param_1 + -5);
  *puVar1 = &PTR_FUN_110bb08f8;
  param_1[-0x54] = &PTR_FUN_110bb3968;
  param_1[-0x51] = &PTR_DAT_110bb3998;
  param_1[7] = &PTR_DAT_110bb0a58;
  param_1[-0x41] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -9);
  func_0x00010a042c64(param_1 + -0xe);
  func_0x00010a0523dc(param_1 + -0x11);
  if (*(char *)(param_1 + -0x1a) == '\x01') {
    func_0x00010a042d30(param_1 + -0x1c);
  }
  param_1[-0x41] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x41);
  *puVar1 = &PTR_DAT_110bb0aa8;
  param_1[-0x54] = &PTR_FUN_110b9f848;
  param_1[-0x51] = &PTR_DAT_110b9f878;
  param_1[7] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(param_1 + -0x43);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x54] = &PTR_DAT_110c60a88;
  param_1[-0x51] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x4b);
  puVar6 = (undefined8 *)param_1[-0x4a];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x4c;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x53);
  if ((param_1[-0x44] != 0) && (lVar2 = *(long *)(param_1[-0x44] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x221) < '\0') {
    __ZdlPv(param_1[-0x47]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x51] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x50);
  param_1[-0x54] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x53);
  return puVar1;
}



/* Entry: 10a1f33ac; end: 10a1f33c3;  */

void FUN_10a1f33ac(long param_1)

{
  func_0x00010a1f6f5c(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f33c4; end: 10a1f33d3;  */

undefined8 * FUN_10a1f33c4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110baeac0;
  puVar1[2] = &PTR_FUN_110baec00;
  puVar1[5] = &PTR_FUN_110baec30;
  puVar1[0x5d] = &PTR_FUN_110baed28;
  puVar1[0x15] = &PTR_FUN_110baec88;
  puVar1[0x51] = &PTR_FUN_110baeca8;
  puVar1[0x56] = &PTR_FUN_110baecd0;
  func_0x00010a0523dc(puVar1 + 0x5a);
  puVar1[0x56] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)puVar1[0x59] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0x59] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x57);
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110bb08f8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x5d] = &PTR_DAT_110bb0a58;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110bb0aa8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x5d] = &PTR_DAT_110bb0b78;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f33d4; end: 10a1f3403;  */

void FUN_10a1f33d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a1f6f5c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f3404; end: 10a1f3407;  */

undefined8 * FUN_10a1f3404(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110bb2f40;
  param_1[2] = &PTR_FUN_110bb3078;
  param_1[5] = &PTR_FUN_110bb30a8;
  param_1[0x55] = &PTR_FUN_110bb3178;
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_FUN_110bb3100;
  param_1[0x51] = &PTR_FUN_110bb3120;
  func_0x00010a0523dc(param_1 + 0x52);
  *param_1 = &PTR_FUN_110bb0bc8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x55] = &PTR_DAT_110bb0d28;
  *puVar4 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar4);
  *param_1 = &PTR_DAT_110bb0d78;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x55] = &PTR_DAT_110bb0e48;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1f3408; end: 10a1f341b;  */

void FUN_10a1f3408(void)

{
  func_0x00010a1f708c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f341c; end: 10a1f342f;  */

long FUN_10a1f341c(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f3430; end: 10a1f3447;  */

void FUN_10a1f3430(long param_1)

{
  func_0x00010a1f708c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3448; end: 10a1f344f;  */

undefined8 * FUN_10a1f3448(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110bb2f40;
  param_1[-3] = &PTR_FUN_110bb3078;
  *param_1 = &PTR_FUN_110bb30a8;
  param_1[0x50] = &PTR_FUN_110bb3178;
  puVar5 = param_1 + 0x10;
  *puVar5 = &PTR_FUN_110bb3100;
  param_1[0x4c] = &PTR_FUN_110bb3120;
  func_0x00010a0523dc(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110bb0bc8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x50] = &PTR_DAT_110bb0d28;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110bb0d78;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x50] = &PTR_DAT_110bb0e48;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f3450; end: 10a1f3467;  */

void FUN_10a1f3450(long param_1)

{
  func_0x00010a1f708c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3468; end: 10a1f346f;  */

undefined8 * FUN_10a1f3468(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110bb2f40;
  param_1[-0x13] = &PTR_FUN_110bb3078;
  param_1[-0x10] = &PTR_FUN_110bb30a8;
  param_1[0x40] = &PTR_FUN_110bb3178;
  *param_1 = &PTR_FUN_110bb3100;
  param_1[0x3c] = &PTR_FUN_110bb3120;
  func_0x00010a0523dc(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110bb0bc8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x40] = &PTR_DAT_110bb0d28;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb0d78;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x40] = &PTR_DAT_110bb0e48;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f3470; end: 10a1f3487;  */

void FUN_10a1f3470(long param_1)

{
  func_0x00010a1f708c(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3488; end: 10a1f348f;  */

undefined8 * FUN_10a1f3488(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110bb2f40;
  param_1[-0x4f] = &PTR_FUN_110bb3078;
  param_1[-0x4c] = &PTR_FUN_110bb30a8;
  param_1[4] = &PTR_FUN_110bb3178;
  puVar5 = param_1 + -0x3c;
  *puVar5 = &PTR_FUN_110bb3100;
  *param_1 = &PTR_FUN_110bb3120;
  func_0x00010a0523dc(param_1 + 1);
  *puVar1 = &PTR_FUN_110bb0bc8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[4] = &PTR_DAT_110bb0d28;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110bb0d78;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[4] = &PTR_DAT_110bb0e48;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a1f3490; end: 10a1f34a7;  */

void FUN_10a1f3490(long param_1)

{
  func_0x00010a1f708c(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f34a8; end: 10a1f34b7;  */

undefined8 * FUN_10a1f34a8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110bb2f40;
  puVar1[2] = &PTR_FUN_110bb3078;
  puVar1[5] = &PTR_FUN_110bb30a8;
  puVar1[0x55] = &PTR_FUN_110bb3178;
  puVar5 = puVar1 + 0x15;
  *puVar5 = &PTR_FUN_110bb3100;
  puVar1[0x51] = &PTR_FUN_110bb3120;
  func_0x00010a0523dc(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110bb0bc8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x55] = &PTR_DAT_110bb0d28;
  *puVar5 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar5);
  *puVar1 = &PTR_DAT_110bb0d78;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x55] = &PTR_DAT_110bb0e48;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f34b8; end: 10a1f34e7;  */

void FUN_10a1f34b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a1f708c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f34e8; end: 10a1f34eb;  */

void FUN_10a1f34e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110baf138;
  param_1[2] = &PTR_FUN_110baf288;
  param_1[5] = &PTR_FUN_110baf2b8;
  param_1[0x97] = &PTR_DAT_110baf3d8;
  param_1[0x15] = &PTR_FUN_110baf310;
  param_1[0x51] = &PTR_FUN_110baf330;
  param_1[0x56] = &PTR_FUN_110baf360;
  FUN_10a201dc4(param_1 + 0x95);
  if (*(char *)(param_1 + 0x94) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x91);
  }
  FUN_10a1f3e1c(param_1 + 0x7a);
  puStack_28 = param_1 + 0x77;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a2021cc(param_1 + 100);
  func_0x00010a0523dc(param_1 + 0x61);
  lVar1 = param_1[0x60];
  param_1[0x60] = 0;
  if (lVar1 != 0) {
    func_0x00010a202180();
  }
  if (*(char *)((long)param_1 + 0x2ff) < '\0') {
    __ZdlPv(param_1[0x5d]);
  }
  func_0x00010a202128(param_1 + 0x5b);
  param_1[0x56] = &PTR_DAT_110bb1168;
  param_1[0x97] = &PTR_FUN_110bb11e0;
  func_0x00010a004e5c(param_1 + 0x59);
  func_0x00010a004e04(param_1 + 0x57);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb0e98;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x97] = &PTR_DAT_110bb0ff8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1048;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x97] = &PTR_DAT_110bb1118;
  FUN_10a042dcc(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10a1f34ec; end: 10a1f34ff;  */

void FUN_10a1f34ec(void)

{
  func_0x00010a1f718c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3500; end: 10a1f3517;  */

long FUN_10a1f3500(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f3518; end: 10a1f352f;  */

void FUN_10a1f3518(long param_1)

{
  func_0x00010a1f718c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3530; end: 10a1f3537;  */

void FUN_10a1f3530(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110baf138;
  param_1[-3] = &PTR_FUN_110baf288;
  *param_1 = &PTR_FUN_110baf2b8;
  param_1[0x92] = &PTR_DAT_110baf3d8;
  param_1[0x10] = &PTR_FUN_110baf310;
  param_1[0x4c] = &PTR_FUN_110baf330;
  param_1[0x51] = &PTR_FUN_110baf360;
  FUN_10a201dc4(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x8c);
  }
  FUN_10a1f3e1c(param_1 + 0x75);
  puStack_28 = param_1 + 0x72;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a2021cc(param_1 + 0x5f);
  func_0x00010a0523dc(param_1 + 0x5c);
  lVar2 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar2 != 0) {
    func_0x00010a202180();
  }
  if (*(char *)((long)param_1 + 0x2d7) < '\0') {
    __ZdlPv(param_1[0x58]);
  }
  func_0x00010a202128(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110bb1168;
  param_1[0x92] = &PTR_FUN_110bb11e0;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110bb0e98;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x92] = &PTR_DAT_110bb0ff8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110bb1048;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x92] = &PTR_DAT_110bb1118;
  FUN_10a042dcc(param_1 + 0xe);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10a1f3538; end: 10a1f354f;  */

void FUN_10a1f3538(long param_1)

{
  func_0x00010a1f718c(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3550; end: 10a1f3557;  */

void FUN_10a1f3550(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110baf138;
  param_1[-0x13] = &PTR_FUN_110baf288;
  param_1[-0x10] = &PTR_FUN_110baf2b8;
  param_1[0x82] = &PTR_DAT_110baf3d8;
  *param_1 = &PTR_FUN_110baf310;
  param_1[0x3c] = &PTR_FUN_110baf330;
  param_1[0x41] = &PTR_FUN_110baf360;
  FUN_10a201dc4(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x7c);
  }
  FUN_10a1f3e1c(param_1 + 0x65);
  puStack_28 = param_1 + 0x62;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a2021cc(param_1 + 0x4f);
  func_0x00010a0523dc(param_1 + 0x4c);
  lVar2 = param_1[0x4b];
  param_1[0x4b] = 0;
  if (lVar2 != 0) {
    func_0x00010a202180();
  }
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  func_0x00010a202128(param_1 + 0x46);
  param_1[0x41] = &PTR_DAT_110bb1168;
  param_1[0x82] = &PTR_FUN_110bb11e0;
  func_0x00010a004e5c(param_1 + 0x44);
  func_0x00010a004e04(param_1 + 0x42);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110bb0e98;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x82] = &PTR_DAT_110bb0ff8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb1048;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x82] = &PTR_DAT_110bb1118;
  FUN_10a042dcc(param_1 + -2);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10a1f3558; end: 10a1f356f;  */

void FUN_10a1f3558(long param_1)

{
  func_0x00010a1f718c(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3570; end: 10a1f3577;  */

void FUN_10a1f3570(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110baf138;
  param_1[-0x4f] = &PTR_FUN_110baf288;
  param_1[-0x4c] = &PTR_FUN_110baf2b8;
  param_1[0x46] = &PTR_DAT_110baf3d8;
  param_1[-0x3c] = &PTR_FUN_110baf310;
  *param_1 = &PTR_FUN_110baf330;
  param_1[5] = &PTR_FUN_110baf360;
  FUN_10a201dc4(param_1 + 0x44);
  if (*(char *)(param_1 + 0x43) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x40);
  }
  FUN_10a1f3e1c(param_1 + 0x29);
  puStack_28 = param_1 + 0x26;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a2021cc(param_1 + 0x13);
  func_0x00010a0523dc(param_1 + 0x10);
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    func_0x00010a202180();
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  func_0x00010a202128(param_1 + 10);
  param_1[5] = &PTR_DAT_110bb1168;
  param_1[0x46] = &PTR_FUN_110bb11e0;
  func_0x00010a004e5c(param_1 + 8);
  func_0x00010a004e04(param_1 + 6);
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110bb0e98;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x46] = &PTR_DAT_110bb0ff8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110bb1048;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x46] = &PTR_DAT_110bb1118;
  FUN_10a042dcc(param_1 + -0x3e);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10a1f3578; end: 10a1f358f;  */

void FUN_10a1f3578(long param_1)

{
  func_0x00010a1f718c(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3590; end: 10a1f3597;  */

void FUN_10a1f3590(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + -0x56;
  *puVar1 = &PTR_FUN_110baf138;
  param_1[-0x54] = &PTR_FUN_110baf288;
  param_1[-0x51] = &PTR_FUN_110baf2b8;
  param_1[0x41] = &PTR_DAT_110baf3d8;
  param_1[-0x41] = &PTR_FUN_110baf310;
  param_1[-5] = &PTR_FUN_110baf330;
  *param_1 = &PTR_FUN_110baf360;
  FUN_10a201dc4(param_1 + 0x3f);
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x3b);
  }
  FUN_10a1f3e1c(param_1 + 0x24);
  puStack_28 = param_1 + 0x21;
  FUN_10a0426d8(&puStack_28);
  func_0x00010a2021cc(param_1 + 0xe);
  func_0x00010a0523dc(param_1 + 0xb);
  lVar2 = param_1[10];
  param_1[10] = 0;
  if (lVar2 != 0) {
    func_0x00010a202180();
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  func_0x00010a202128(param_1 + 5);
  *param_1 = &PTR_DAT_110bb1168;
  param_1[0x41] = &PTR_FUN_110bb11e0;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  FUN_10a00dc2c(param_1 + -5);
  *puVar1 = &PTR_FUN_110bb0e98;
  param_1[-0x54] = &PTR_FUN_110bb3968;
  param_1[-0x51] = &PTR_DAT_110bb3998;
  param_1[0x41] = &PTR_DAT_110bb0ff8;
  param_1[-0x41] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -9);
  func_0x00010a042c64(param_1 + -0xe);
  func_0x00010a0523dc(param_1 + -0x11);
  if (*(char *)(param_1 + -0x1a) == '\x01') {
    func_0x00010a042d30(param_1 + -0x1c);
  }
  param_1[-0x41] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x41);
  *puVar1 = &PTR_DAT_110bb1048;
  param_1[-0x54] = &PTR_FUN_110b9f848;
  param_1[-0x51] = &PTR_DAT_110b9f878;
  param_1[0x41] = &PTR_DAT_110bb1118;
  FUN_10a042dcc(param_1 + -0x43);
  FUN_10ac63308(puVar1);
  return;
}



/* Entry: 10a1f3598; end: 10a1f35af;  */

void FUN_10a1f3598(long param_1)

{
  func_0x00010a1f718c(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f35b0; end: 10a1f35c7;  */

undefined8 FUN_10a1f35b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10a1f35c8; end: 10a1f35f7;  */

void FUN_10a1f35c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a1f718c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f35f8; end: 10a1f3607;  */

long FUN_10a1f35f8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f3608; end: 10a1f3747;  */

long * FUN_10a1f3608(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10a1f3748; end: 10a1f376f;  */

undefined4 FUN_10a1f3748(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a1f3770; end: 10a1f37e3;  */

undefined8 FUN_10a1f3770(void)

{
  int iVar1;
  
  if ((bRam0000000113300890 & 1) == 0) {
    iVar1 = 0x13300890;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113300870 = 0;
      uRam0000000113300868 = 0;
      uRam0000000113300880 = 0;
      uRam0000000113300878 = 0;
      uRam0000000113300888 = 0x3f800000;
      ___cxa_atexit(FUN_10a1f7330,0x113300868,0x100000000);
      ___cxa_guard_release(0x113300890);
    }
  }
  return 0x113300868;
}



/* Entry: 10a1f37e4; end: 10a1f38db;  */

undefined8 FUN_10a1f37e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_40;
  long *plStack_38;
  undefined *puStack_30;
  long *plStack_28;
  
  (**(code **)(*param_1 + 0xb0))(&lStack_40);
  puStack_30 = &UNK_10f645cac;
  plStack_28 = (long *)0x2f;
  if (lStack_40 != 0) {
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    (**(code **)(*param_1 + 0xb0))(&puStack_30,param_1);
    plVar1 = plStack_28;
    uVar7 = *(undefined8 *)(puStack_30 + 0x18);
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    return uVar7;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1f38c8);
  (*pcVar5)();
}



/* Entry: 10a1f38dc; end: 10a1f3917;  */

void FUN_10a1f38dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10a1f3918; end: 10a1f3927;  */

undefined8 FUN_10a1f3918(void)

{
  return 0x3f800000;
}



/* Entry: 10a1f3928; end: 10a1f3943;  */

void FUN_10a1f3928(undefined8 param_1)

{
  FUN_10a1e7adc(param_1,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3944; end: 10a1f3963;  */

long FUN_10a1f3944(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a1f3964; end: 10a1f3983;  */

void FUN_10a1f3964(long param_1)

{
  FUN_10a1e7adc(param_1 + -0x10,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3984; end: 10a1f3993;  */

undefined8 * FUN_10a1f3984(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110baf938;
  param_1[-3] = &PTR_FUN_110bafa70;
  *param_1 = &PTR_FUN_110bafaa0;
  param_1[0x76] = &PTR_FUN_110bafb70;
  param_1[0x10] = &PTR_FUN_110bafaf8;
  param_1[0x4c] = &PTR_FUN_110bafb18;
  FUN_10a205fa0(param_1 + 0x74);
  FUN_10a205fa0(param_1 + 0x72);
  func_0x00010a0523dc(param_1 + 0x70);
  func_0x00010a0523dc(param_1 + 0x6e);
  func_0x00010a1ff0cc(param_1 + 0x6b);
  if (*(char *)((long)param_1 + 0x30f) < '\0') {
    __ZdlPv(param_1[0x5f]);
  }
  func_0x00010a1ff0cc(param_1 + 0x5d);
  if (*(char *)((long)param_1 + 0x29f) < '\0') {
    __ZdlPv(param_1[0x51]);
  }
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110bb1598;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x76] = &PTR_DAT_110bb16f8;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110bb1748;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x76] = &PTR_DAT_110bb1818;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a1f3994; end: 10a1f39b3;  */

void FUN_10a1f3994(long param_1)

{
  FUN_10a1e7adc(param_1 + -0x28,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f39b4; end: 10a1f39c3;  */

undefined8 * FUN_10a1f39b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110baf938;
  param_1[-0x13] = &PTR_FUN_110bafa70;
  param_1[-0x10] = &PTR_FUN_110bafaa0;
  param_1[0x66] = &PTR_FUN_110bafb70;
  *param_1 = &PTR_FUN_110bafaf8;
  param_1[0x3c] = &PTR_FUN_110bafb18;
  FUN_10a205fa0(param_1 + 100);
  FUN_10a205fa0(param_1 + 0x62);
  func_0x00010a0523dc(param_1 + 0x60);
  func_0x00010a0523dc(param_1 + 0x5e);
  func_0x00010a1ff0cc(param_1 + 0x5b);
  if (*(char *)((long)param_1 + 0x28f) < '\0') {
    __ZdlPv(param_1[0x4f]);
  }
  func_0x00010a1ff0cc(param_1 + 0x4d);
  if (*(char *)((long)param_1 + 0x21f) < '\0') {
    __ZdlPv(param_1[0x41]);
  }
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110bb1598;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x66] = &PTR_DAT_110bb16f8;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110bb1748;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x66] = &PTR_DAT_110bb1818;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a1f39c4; end: 10a1f39e3;  */

void FUN_10a1f39c4(long param_1)

{
  FUN_10a1e7adc(param_1 + -0xa8,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f39e4; end: 10a1f39f3;  */

undefined8 * FUN_10a1f39e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110baf938;
  param_1[-0x4f] = &PTR_FUN_110bafa70;
  param_1[-0x4c] = &PTR_FUN_110bafaa0;
  param_1[0x2a] = &PTR_FUN_110bafb70;
  param_1[-0x3c] = &PTR_FUN_110bafaf8;
  *param_1 = &PTR_FUN_110bafb18;
  FUN_10a205fa0(param_1 + 0x28);
  FUN_10a205fa0(param_1 + 0x26);
  func_0x00010a0523dc(param_1 + 0x24);
  func_0x00010a0523dc(param_1 + 0x22);
  func_0x00010a1ff0cc(param_1 + 0x1f);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  func_0x00010a1ff0cc(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110bb1598;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x2a] = &PTR_DAT_110bb16f8;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110bb1748;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x2a] = &PTR_DAT_110bb1818;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a1f39f4; end: 10a1f3a13;  */

void FUN_10a1f39f4(long param_1)

{
  FUN_10a1e7adc(param_1 + -0x288,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1f3a14; end: 10a1f3a2b;  */

undefined8 * FUN_10a1f3a14(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110baf938;
  puVar1[2] = &PTR_FUN_110bafa70;
  puVar1[5] = &PTR_FUN_110bafaa0;
  puVar1[0x7b] = &PTR_FUN_110bafb70;
  puVar1[0x15] = &PTR_FUN_110bafaf8;
  puVar1[0x51] = &PTR_FUN_110bafb18;
  FUN_10a205fa0(puVar1 + 0x79);
  FUN_10a205fa0(puVar1 + 0x77);
  func_0x00010a0523dc(puVar1 + 0x75);
  func_0x00010a0523dc(puVar1 + 0x73);
  func_0x00010a1ff0cc(puVar1 + 0x70);
  if (*(char *)((long)puVar1 + 0x337) < '\0') {
    __ZdlPv(puVar1[100]);
  }
  func_0x00010a1ff0cc(puVar1 + 0x62);
  if (*(char *)((long)puVar1 + 0x2c7) < '\0') {
    __ZdlPv(puVar1[0x56]);
  }
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110bb1598;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x7b] = &PTR_DAT_110bb16f8;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110bb1748;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x7b] = &PTR_DAT_110bb1818;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a1f3a2c; end: 10a1f3a63;  */

void FUN_10a1f3a2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1e7adc((long)param_1 + lVar1,&PTR_PTR_110bafba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1f3a64; end: 10a1f3a6b;  */

void FUN_10a1f3a64(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1f3a68);
  (*pcVar1)();
}


