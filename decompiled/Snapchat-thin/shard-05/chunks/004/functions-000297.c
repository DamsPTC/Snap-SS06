/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dfd430; end: 103dfd46f;  */

void FUN_103dfd430(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc982e0;
  _swift_getWitnessTable(&UNK_10dc982e0,&UNK_110713ff0);
  puRam0000000113010ea8 = puVar1;
  return;
}



/* Entry: 103dfd470; end: 103dfd493;  */

undefined1  [16] FUN_103dfd470(void)

{
  return ZEXT816(0x110713ff0);
}



/* Entry: 103dfd494; end: 103dfd56b;  */

void FUN_103dfd494(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103dfd56c; end: 103dfd58b;  */

void FUN_103dfd56c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103dfd58c; end: 103dfd5cb;  */

void FUN_103dfd58c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc983a0;
  _swift_getWitnessTable(&UNK_10dc983a0,&UNK_110714068);
  puRam0000000113010eb0 = puVar1;
  return;
}



/* Entry: 103dfd5cc; end: 103dfd5db;  */

undefined1  [16] FUN_103dfd5cc(void)

{
  return ZEXT816(0x110714068);
}



/* Entry: 103dfd5dc; end: 103dfd8b3;  */

long FUN_103dfd5dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103dfd8b4; end: 103dfd8cb;  */

bool FUN_103dfd8b4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103dfd8cc; end: 103dfd90b;  */

void FUN_103dfd8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010eb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc98480;
  _swift_getWitnessTable(&UNK_10dc98480,&UNK_110714190);
  puRam0000000113010eb8 = puVar1;
  return;
}



/* Entry: 103dfd90c; end: 103dfd9b7;  */

void FUN_103dfd90c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103dfd9b8; end: 103dfd9ef;  */

void FUN_103dfd9b8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103dfd9f0; end: 103dfda53;  */

undefined8 FUN_103dfd9f0(undefined8 param_1,undefined8 param_2)

{
  func_0x000103dfeb34(param_2,param_1,&UNK_110714260);
  return param_2;
}



/* Entry: 103dfda54; end: 103dfdafb;  */

void FUN_103dfda54(void)

{
  undefined8 *puVar1;
  undefined1 auStack_198 [120];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined8 uStack_e6;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e6 = 0;
  uStack_ee = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b7 = 0;
  uStack_bf = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_6e = 0;
  uStack_76 = 0;
  uStack_70 = 0;
  uStack_3f = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_50 = 0;
  FUN_103dfd9f0(&uStack_120,auStack_198);
  func_0x000103dfda24(&uStack_a8);
  FUN_103e05520(0);
  _objc_allocWithZone();
  puVar1 = &uStack_120;
  FUN_103e04efc();
  func_0x000103dfda24(&uStack_120);
  puRam00000001138121d8 = puVar1;
  return;
}



/* Entry: 103dfdafc; end: 103dfdb3b; +[SCAdSlotInfo identity] */

void FUN_103dfdafc(void)

{
  if (lRam0000000113010ec0 != -1) {
    _swift_once(0x113010ec0,FUN_103dfda54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138121d8);
  return;
}



/* Entry: 103dfdb3c; end: 103dfdc03; -[SCAdSlotInfo withAdSlotIndex:] */

void FUN_103dfdb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_50 = uStack_c8;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_b8 = uStack_130;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_138 = param_3;
  uStack_c0 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfdc04; end: 103dfdccb; -[SCAdSlotInfo withSlotEnterTimeMillis:] */

void FUN_103dfdc04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_50 = uStack_c8;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_130 = param_1;
  uStack_b8 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfdccc; end: 103dfdd93; -[SCAdSlotInfo withIsAdInserted:] */

void FUN_103dfdccc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_50 = uStack_c8;
  uStack_b0 = CONCAT71(uStack_127,param_3);
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_128 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfdd94; end: 103dfdec7; -[SCAdSlotInfo withAdOpportunityMissType:] */

void FUN_103dfdd94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [120];
  undefined8 uStack_1c0;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
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
  undefined1 uStack_d0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  uVar2 = param_3;
  _objc_retain(param_3);
  FUN_103e05180(&uStack_140,param_1);
  uStack_168 = uStack_e8;
  uStack_170 = uStack_f0;
  uStack_158 = uStack_d8;
  uStack_160 = uStack_e0;
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  uStack_c8 = uStack_128;
  uStack_150 = uStack_d0;
  uStack_188 = uStack_108;
  uStack_190 = uStack_110;
  uStack_178 = uStack_f8;
  uStack_180 = uStack_100;
  _objc_retain(uVar2);
  FUN_103dfeaa0(&uStack_c8,0x112dc3de0,&UNK_10d9813c0);
  uStack_78 = uStack_178;
  uStack_80 = uStack_180;
  uStack_68 = uStack_168;
  uStack_70 = uStack_170;
  uStack_58 = uStack_158;
  uStack_60 = uStack_160;
  uStack_50 = uStack_150;
  uStack_98 = uStack_198;
  uStack_a0 = uStack_1a0;
  uStack_88 = uStack_188;
  uStack_90 = uStack_190;
  uStack_b8 = uStack_1b8;
  uStack_c0 = uStack_1c0;
  uStack_b0 = uStack_1b0;
  uStack_1a8 = param_3;
  uStack_a8 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_238);
  puVar3 = &uStack_c0;
  FUN_103e04efc(puVar3);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(uVar2);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103dfdec8; end: 103dfdf8f; -[SCAdSlotInfo withAdInsertionStatus:] */

void FUN_103dfdec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_50 = uStack_c8;
  uStack_98 = uStack_110;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_118 = param_3;
  uStack_a0 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfdf90; end: 103dfe057; -[SCAdSlotInfo withStoryViewCountSinceLastAd:] */

void FUN_103dfdf90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_50 = uStack_c8;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_110 = param_3;
  uStack_98 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe058; end: 103dfe11f; -[SCAdSlotInfo withSnapViewCountSinceLastAd:] */

void FUN_103dfe058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_50 = uStack_c8;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_108 = param_3;
  uStack_90 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe120; end: 103dfe1e7; -[SCAdSlotInfo withTimeViewedMillisSinceLastAd:] */

void FUN_103dfe120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_50 = uStack_c8;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_90 = uStack_108;
  uStack_100 = param_1;
  uStack_88 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe1e8; end: 103dfe2af; -[SCAdSlotInfo withIsBrandSafe:] */

void FUN_103dfe1e8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_80 = CONCAT71(uStack_f7,param_3);
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_78 = uStack_f0;
  uStack_f8 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe2b0; end: 103dfe377; -[SCAdSlotInfo withInsertionRulesSatisfied:] */

void FUN_103dfe2b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_80 = CONCAT62(uStack_f6,CONCAT11(param_3,uStack_f8));
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_78 = uStack_f0;
  uStack_f7 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe378; end: 103dfe43f; -[SCAdSlotInfo withTryInsertAfterMediaReadyTimeMillis:] */

void FUN_103dfe378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_80 = uStack_f8;
  uStack_f0 = param_1;
  uStack_78 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe440; end: 103dfe507; -[SCAdSlotInfo withLastTryInsertTimeMillis:] */

void FUN_103dfe440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_68 = uStack_e0;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_e8 = param_1;
  uStack_70 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe508; end: 103dfe5cf; -[SCAdSlotInfo withInsertionStartTimeMillis:] */

void FUN_103dfe508(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_e0 = param_1;
  uStack_68 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe5d0; end: 103dfe697; -[SCAdSlotInfo withInsertionSuccessTimeMillis:] */

void FUN_103dfe5d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_50 = uStack_c8;
  uStack_58 = uStack_d0;
  uStack_d8 = param_1;
  uStack_60 = param_1;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_2);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfe698; end: 103dfe96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_103dfe698(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_278 [120];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 uStack_190;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
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
  undefined *puStack_98;
  undefined1 uStack_90;
  
  _swift_getObjectType();
  _objc_retain();
  FUN_103e05180(&puStack_180);
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  puStack_198 = (undefined *)uStack_118;
  uStack_1a0 = uStack_120;
  uStack_1f8 = uStack_178;
  puStack_200 = puStack_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_108 = uStack_118;
  uStack_190 = uStack_110;
  uStack_1c8 = uStack_148;
  uStack_1d0 = uStack_150;
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  if (param_1 == 0) {
    FUN_103dfeaa0(&uStack_108,0x113010ec8,&UNK_10dc98548);
    puStack_198 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 == 0) {
      FUN_103dfeaa0(&uStack_108,0x113010ec8,&UNK_10dc98548);
      puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000103e0696c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103dfe96c);
        (*pcVar2)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        lVar8 = *(ulong *)(puStack_100 + 0x10) << 4;
        uVar6 = *(ulong *)(puStack_100 + 0x10);
        plVar7 = (long *)(param_1 + 0x20);
        do {
          uVar10 = *(undefined8 *)(*plVar7 + _DAT_113011340);
          uVar9 = *(undefined8 *)(*plVar7 + _DAT_113011348);
          uVar3 = uVar6 + 1;
          if (*(ulong *)(puStack_100 + 0x18) >> 1 <= uVar6) {
            func_0x000103e0696c(1 < *(ulong *)(puStack_100 + 0x18),uVar3,1);
          }
          *(ulong *)(puStack_100 + 0x10) = uVar3;
          *(undefined8 *)(puStack_100 + lVar8 + 0x20) = uVar10;
          *(undefined8 *)(puStack_100 + lVar8 + 0x28) = uVar9;
          lVar8 = lVar8 + 0x10;
          uVar5 = uVar5 - 1;
          uVar6 = uVar3;
          plVar7 = plVar7 + 1;
        } while (uVar5 != 0);
      }
      else {
        uVar6 = 0;
        do {
          puVar1 = puStack_100;
          uVar3 = uVar6;
          FUN_103e06d68(uVar6,param_1);
          uVar10 = *(undefined8 *)(uVar3 + _DAT_113011340);
          uVar9 = *(undefined8 *)(uVar3 + _DAT_113011348);
          _swift_unknownObjectRelease();
          uVar3 = *(ulong *)(puVar1 + 0x10);
          puStack_100 = puVar1;
          if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
            func_0x000103e0696c(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
          }
          uVar6 = uVar6 + 1;
          *(ulong *)(puStack_100 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puStack_100 + uVar3 * 0x10 + 0x20) = uVar10;
          *(undefined8 *)(puStack_100 + uVar3 * 0x10 + 0x28) = uVar9;
        } while (uVar5 != uVar6);
      }
      puVar1 = puStack_100;
      FUN_103dfeaa0(&uStack_108,0x113010ec8,&UNK_10dc98548);
      puStack_198 = puVar1;
    }
  }
  uStack_b8 = uStack_1b8;
  uStack_c0 = uStack_1c0;
  uStack_a8 = uStack_1a8;
  uStack_b0 = uStack_1b0;
  uStack_f8 = uStack_1f8;
  puStack_100 = puStack_200;
  uStack_e8 = uStack_1e8;
  uStack_f0 = uStack_1f0;
  uStack_d8 = uStack_1d8;
  uStack_e0 = uStack_1e0;
  uStack_c8 = uStack_1c8;
  uStack_d0 = uStack_1d0;
  uStack_90 = uStack_190;
  uStack_a0 = uStack_1a0;
  puStack_98 = puStack_198;
  _objc_allocWithZone(unaff_x20);
  FUN_103dfd9f0(&puStack_100,auStack_278);
  ppuVar4 = &puStack_100;
  FUN_103e04efc(ppuVar4);
  func_0x000103dfda24(&puStack_100);
  func_0x000103dfda24(&puStack_200);
  return ppuVar4;
}



/* Entry: 103dfe96c; end: 103dfe9db; -[SCAdSlotInfo withSlotEventHistoryList:] */

void FUN_103dfe96c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000103e05718(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_103dfe698(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103dfe9dc; end: 103dfea9f; -[SCAdSlotInfo withInsertionRuleReady:] */

void FUN_103dfe9dc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b0 [120];
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
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e05180(&uStack_138);
  uStack_78 = uStack_f0;
  uStack_80 = uStack_f8;
  uStack_68 = uStack_e0;
  uStack_70 = uStack_e8;
  uStack_58 = uStack_d0;
  uStack_60 = uStack_d8;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_a8 = uStack_120;
  uStack_b0 = uStack_128;
  uStack_98 = uStack_110;
  uStack_a0 = uStack_118;
  uStack_88 = uStack_100;
  uStack_90 = uStack_108;
  uStack_c8 = param_3;
  uStack_50 = param_3;
  _objc_allocWithZone(uVar1);
  FUN_103dfd9f0(&uStack_c0,auStack_1b0);
  puVar2 = &uStack_c0;
  FUN_103e04efc(puVar2);
  func_0x000103dfda24(&uStack_c0);
  _objc_release(param_1);
  func_0x000103dfda24(&uStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103dfeaa0; end: 103dfeba7;  */

undefined8 FUN_103dfeaa0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103dfeba8; end: 103dfec73;  */

undefined8 * FUN_103dfeba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _objc_retain();
  _objc_release(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 103dfec74; end: 103dfed0f;  */

undefined8 * FUN_103dfec74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _objc_release(uVar1);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 103dfed10; end: 103dfedef;  */

int FUN_103dfed10(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x71) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103dfedf0; end: 103dfedff; -[SCAdInsertionEvaluationInfo viewedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfedf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010ed0);
}



/* Entry: 103dfee00; end: 103dfee0f; -[SCAdInsertionEvaluationInfo viewedSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfee00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010ed8);
}



/* Entry: 103dfee10; end: 103dfee1f; -[SCAdInsertionEvaluationInfo viewedTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfee10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010ee0);
}



/* Entry: 103dfee20; end: 103dfee2f; -[SCAdInsertionEvaluationInfo remainingStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfee20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010ee8);
}



/* Entry: 103dfee30; end: 103dfee3f; -[SCAdInsertionEvaluationInfo remainingSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfee30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010ef0);
}



/* Entry: 103dfee40; end: 103dfeee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dfee40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010ed0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113010ed8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113010ee0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010ee8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113010ef0) = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dfeee4; end: 103dfef87; -[SCAdInsertionEvaluationInfo initWithViewedStories:viewedSnaps:viewedTimeSec:remainingStories:remainingSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dfeee4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113010ed0) = param_4;
  *(undefined8 *)(param_2 + _DAT_113010ed8) = param_5;
  *(undefined8 *)(param_2 + _DAT_113010ee0) = param_1;
  *(undefined8 *)(param_2 + _DAT_113010ee8) = param_6;
  *(undefined8 *)(param_2 + _DAT_113010ef0) = param_7;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dfef88; end: 103dff00f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dfef88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113010ed0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010ed8) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113010ee0) = param_1[2];
  uVar1 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113010ee8) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113010ef0) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dff010; end: 103dff013; -[SCAdInsertionEvaluationInfo copyWithZone:] */

void FUN_103dff010(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103dff014; end: 103dff02f; -[SCAdInsertionEvaluationInfo description] */

void FUN_103dff014(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dff030; end: 103dff0cb; -[SCAdInsertionEvaluationInfo init] */

void FUN_103dff030(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdInsertionEvaluationInfoWrapper.swift",0x43,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dff078);
  (*pcVar1)();
}



/* Entry: 103dff0cc; end: 103dff0d7; -[SCAdOpportunity groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff0cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010f20))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010f20);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dff0d8; end: 103dff0e7; -[SCAdOpportunity adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff0d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f28);
}



/* Entry: 103dff0e8; end: 103dff0f7; -[SCAdOpportunity adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff0e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f30);
}



/* Entry: 103dff0f8; end: 103dff107; -[SCAdOpportunity opportunityMissType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff0f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f38);
}



/* Entry: 103dff108; end: 103dff117; -[SCAdOpportunity potentialAdSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010f40));
  return;
}



/* Entry: 103dff118; end: 103dff127; -[SCAdOpportunity reachedAdSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dff118(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010f48);
}



/* Entry: 103dff128; end: 103dff137; -[SCAdOpportunity viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f50);
}



/* Entry: 103dff138; end: 103dff147; -[SCAdOpportunity insertionEvaluationInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010f58));
  return;
}



/* Entry: 103dff148; end: 103dff157; -[SCAdOpportunity totalSnapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff148(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f60);
}



/* Entry: 103dff158; end: 103dff167; -[SCAdOpportunity storySessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010f68));
  return;
}



/* Entry: 103dff168; end: 103dff173; -[SCAdOpportunity adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff168(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010f70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010f70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dff174; end: 103dff17f; -[SCAdOpportunity adRequestClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff174(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010f78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010f78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dff180; end: 103dff18b; -[SCAdOpportunity lineItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff180(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010f80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010f80);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dff18c; end: 103dff1e3;  */

void FUN_103dff18c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dff1e4; end: 103dff1f3; -[SCAdOpportunity brandSafetyInventoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dff1e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113010f88);
}



/* Entry: 103dff1f4; end: 103dff517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010f20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113010f28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113010f30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113010f38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113010f40) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113010f48) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113010f50) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113010f58) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113010f60) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113010f68) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010f70);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010f78);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010f80);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_113010f88) = param_18;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dff518; end: 103dff66b; -[SCAdOpportunity initWithGroupId:adType:adProductType:opportunityMissType:potentialAdSlot:reachedAdSlot:viewLocation:insertionEvaluationInfo:totalSnapCount:storySessionId:adId:adRequestClientId:lineItemId:brandSafetyInventoryType:] */

void FUN_103dff518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,long param_14,long param_15,undefined8 param_16)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_3 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_2;
    uStack_98 = param_3;
  }
  if (param_13 == 0) {
    uStack_a8 = 0;
    uStack_b8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_2;
    uStack_a8 = param_13;
  }
  if (param_14 == 0) {
    param_14 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = param_2;
  }
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain();
  lVar1 = param_15;
  _objc_retain();
  if (lVar1 == 0) {
    param_15 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  func_0x000103dff38c(uStack_98,uStack_a0,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11,param_12,uStack_a8,uStack_b8,param_14,uVar2,param_15,param_2,param_16
                     );
  return;
}



/* Entry: 103dff66c; end: 103dff6ab;  */

undefined8 FUN_103dff66c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103dff800(param_1);
  FUN_103dffb08(param_1);
  return uVar1;
}



/* Entry: 103dff6ac; end: 103dff6af; -[SCAdOpportunity copyWithZone:] */

void FUN_103dff6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103dff6b0; end: 103dff6eb; -[SCAdOpportunity description] */

void FUN_103dff6b0(void)

{
  undefined1 auStack_118 [248];
  
  FUN_103dffb3c(auStack_118);
  FUN_103dffb08(auStack_118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dff6ec; end: 103dff767; -[SCAdOpportunity init] */

void FUN_103dff6ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdOpportunityWrapper.swift",0x37,2,0x5a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dff734);
  (*pcVar1)();
}



/* Entry: 103dff768; end: 103dff7ff; -[SCAdOpportunity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff768(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010f20 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010f40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010f58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010f68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010f70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010f78 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113010f80 + 8))
  ;
  return;
}



/* Entry: 103dff800; end: 103dffb07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dff800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _swift_getObjectType();
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113010f20);
  puVar4[1] = uStack_118;
  *puVar4 = uStack_120;
  uVar8 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113010f28) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113010f30) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_113010f38) = param_1[4];
  uStack_b8 = param_1[6];
  uStack_c0 = param_1[5];
  uStack_a8 = param_1[8];
  lStack_b0 = param_1[7];
  uStack_98 = param_1[10];
  uStack_a0 = param_1[9];
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uStack_80 = param_1[0xd];
  if (lStack_b0 == 1) {
    FUN_103dffd6c(&uStack_120,&uStack_110,0x112d35ff8,&UNK_10d900cd0);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uStack_f8 = param_1[8];
    uStack_100 = param_1[7];
    uStack_e8 = param_1[10];
    uStack_f0 = param_1[9];
    uStack_d8 = param_1[0xc];
    uStack_e0 = param_1[0xb];
    uStack_d0 = param_1[0xd];
    uStack_108 = param_1[6];
    uStack_110 = param_1[5];
    FUN_103e0061c(0);
    _objc_allocWithZone();
    FUN_103dffd6c(&uStack_120,&uStack_1d0,0x112d35ff8,&UNK_10d900cd0);
    FUN_103dffd6c(&uStack_c0,&uStack_1d0,0x113010dc8,&UNK_10dc98250);
    puVar4 = &uStack_110;
    FUN_103e002cc();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113010f40) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_113010f48) = *(undefined1 *)(param_1 + 0xe);
  *(undefined8 *)(unaff_x20 + _DAT_113010f50) = param_1[0xf];
  if (*(char *)(param_1 + 0x15) == '\x01') {
    plVar5 = (long *)0x0;
  }
  else {
    uVar8 = param_1[0x13];
    uVar2 = param_1[0x14];
    uVar9 = param_1[0x12];
    uVar1 = param_1[0x10];
    uVar3 = param_1[0x11];
    lVar6 = 0;
    func_0x000103dff0ac();
    lVar7 = lVar6;
    _objc_allocWithZone();
    *(undefined8 *)(lVar7 + _DAT_113010ed0) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_113010ed8) = uVar3;
    *(undefined8 *)(lVar7 + _DAT_113010ee0) = uVar9;
    *(undefined8 *)(lVar7 + _DAT_113010ee8) = uVar8;
    *(undefined8 *)(lVar7 + _DAT_113010ef0) = uVar2;
    plVar5 = &lStack_180;
    lStack_180 = lVar7;
    lStack_178 = lVar6;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113010f58) = plVar5;
  uStack_128 = param_1[0x17];
  *(undefined8 *)(unaff_x20 + _DAT_113010f60) = param_1[0x16];
  *(undefined8 *)(unaff_x20 + _DAT_113010f68) = uStack_128;
  uStack_1c8 = param_1[0x19];
  uStack_1d0 = param_1[0x18];
  uStack_138 = param_1[0x1b];
  uStack_140 = param_1[0x1a];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113010f70);
  puVar4[1] = uStack_1c8;
  *puVar4 = uStack_1d0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113010f78);
  puVar4[1] = uStack_138;
  *puVar4 = uStack_140;
  uVar8 = param_1[0x1c];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113010f80);
  puVar4[1] = param_1[0x1d];
  *puVar4 = uVar8;
  uStack_148 = param_1[0x1d];
  uStack_150 = param_1[0x1c];
  *(undefined8 *)(unaff_x20 + _DAT_113010f88) = param_1[0x1e];
  FUN_103dffd6c(&uStack_128,auStack_160,0x112dc3de0,&UNK_10d9813c0);
  FUN_103dffd6c(&uStack_1d0,auStack_160,0x112d35ff8,&UNK_10d900cd0);
  FUN_103dffd6c(&uStack_140,auStack_160,0x112d35ff8,&UNK_10d900cd0);
  FUN_103dffd6c(&uStack_150,auStack_160,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xfffffffffffffe90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dffb08; end: 103dffb3b;  */

undefined8 FUN_103dffb08(undefined8 param_1)

{
  (*(code *)(undefined *)0x103df3370)();
  return param_1;
}



/* Entry: 103dffb3c; end: 103dffd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dffb3c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar15 = *(undefined8 *)(param_2 + _DAT_113010f20);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113010f20))[1];
  uVar17 = *(undefined8 *)(param_2 + _DAT_113010f28);
  uVar18 = *(undefined8 *)(param_2 + _DAT_113010f30);
  uVar19 = *(undefined8 *)(param_2 + _DAT_113010f38);
  if (*(long *)(param_2 + _DAT_113010f40) == 0) {
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 1;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x000103e00514(&uStack_a0);
  }
  uVar5 = *(undefined1 *)(param_2 + _DAT_113010f48);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113010f50);
  lVar12 = *(long *)(param_2 + _DAT_113010f58);
  if (lVar12 == 0) {
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar12 + _DAT_113010ed0);
    uVar9 = *(undefined8 *)(lVar12 + _DAT_113010ed8);
    uVar10 = *(undefined8 *)(lVar12 + _DAT_113010ee0);
    uVar11 = *(undefined8 *)(lVar12 + _DAT_113010ee8);
    uVar13 = *(undefined8 *)(lVar12 + _DAT_113010ef0);
  }
  uVar14 = *(undefined8 *)(param_2 + _DAT_113010f60);
  uVar16 = *(undefined8 *)(param_2 + _DAT_113010f68);
  puVar1 = (undefined8 *)(param_2 + _DAT_113010f70);
  puVar2 = (undefined8 *)(param_2 + _DAT_113010f78);
  puVar3 = (undefined8 *)(param_2 + _DAT_113010f80);
  uVar6 = *(undefined8 *)(param_2 + _DAT_113010f88);
  *param_1 = uVar15;
  param_1[1] = uVar4;
  param_1[2] = uVar17;
  param_1[3] = uVar18;
  param_1[4] = uVar19;
  param_1[6] = uStack_98;
  param_1[5] = uStack_a0;
  param_1[8] = uStack_88;
  param_1[7] = uStack_90;
  param_1[10] = uStack_78;
  param_1[9] = uStack_80;
  param_1[0xc] = uStack_68;
  param_1[0xb] = uStack_70;
  param_1[0xd] = uStack_60;
  *(undefined1 *)(param_1 + 0xe) = uVar5;
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar8;
  param_1[0x11] = uVar9;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar11;
  param_1[0x14] = uVar13;
  *(bool *)(param_1 + 0x15) = lVar12 == 0;
  param_1[0x16] = uVar14;
  param_1[0x17] = uVar16;
  uVar15 = puVar1[1];
  uVar18 = *puVar1;
  uVar17 = puVar2[1];
  uVar7 = puVar2[1];
  uVar19 = *puVar2;
  param_1[0x19] = puVar1[1];
  param_1[0x18] = uVar18;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar19;
  uVar18 = puVar3[1];
  uVar19 = *puVar3;
  param_1[0x1d] = puVar3[1];
  param_1[0x1c] = uVar19;
  param_1[0x1e] = uVar6;
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar16);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar18);
  return;
}



/* Entry: 103dffd4c; end: 103dffd6b;  */

void FUN_103dffd4c(void)

{
  _objc_opt_self(&PTR_PTR_11294de48);
  return;
}



/* Entry: 103dffd6c; end: 103dffde3;  */

undefined8 FUN_103dffd6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103dffde4; end: 103dffdf3; -[SCAdOpportunityPotentialAdSlot priorContentBrandUnsafe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffde4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fb8);
}



/* Entry: 103dffdf4; end: 103dffe03; -[SCAdOpportunityPotentialAdSlot followingContentBrandUnsafe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffdf4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fc0);
}



/* Entry: 103dffe04; end: 103dffe13; -[SCAdOpportunityPotentialAdSlot isTimeRuleNotSatisfied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fc8);
}



/* Entry: 103dffe14; end: 103dffe23; -[SCAdOpportunityPotentialAdSlot isSnapRuleNotSatisfied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fd0);
}



/* Entry: 103dffe24; end: 103dffe33; -[SCAdOpportunityPotentialAdSlot isStoryRuleNotSatisfied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fd8);
}



/* Entry: 103dffe34; end: 103dffe43; -[SCAdOpportunityPotentialAdSlot reachedAdSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fe0);
}



/* Entry: 103dffe44; end: 103dffe53; -[SCAdOpportunityPotentialAdSlot priorContentSponsored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010fe8);
}



/* Entry: 103dffe54; end: 103dffe63; -[SCAdOpportunityPotentialAdSlot followingContentSponsored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103dffe54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113010ff0);
}



/* Entry: 103dffe64; end: 103dffe6f; -[SCAdOpportunityPotentialAdSlot priorContentSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dffe64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113010ff8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113010ff8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dffe70; end: 103dffe7b; -[SCAdOpportunityPotentialAdSlot followingContentSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dffe70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011000))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011000);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dffe7c; end: 103dffed3;  */

void FUN_103dffe7c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103dffed4; end: 103dffee3; -[SCAdOpportunityPotentialAdSlot previousNeighborStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dffed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011008);
}



/* Entry: 103dffee4; end: 103dffef3; -[SCAdOpportunityPotentialAdSlot nextNeighborStoryType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dffee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011010);
}



/* Entry: 103dffef4; end: 103dfff03; -[SCAdOpportunityPotentialAdSlot previousOrganicGarmSafety] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dffef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011018);
}



/* Entry: 103dfff04; end: 103dfff13; -[SCAdOpportunityPotentialAdSlot nextOrganicGarmSafety] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dfff04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011020);
}



/* Entry: 103dfff14; end: 103e001f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dfff14(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113010fb8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113010fc0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113010fc8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113010fd0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113010fd8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113010fe0) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113010fe8) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113010ff0) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010ff8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011000);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113011008) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113011010) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113011018) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113011020) = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e001f4; end: 103e002cb; -[SCAdOpportunityPotentialAdSlot initWithPriorContentBrandUnsafe:followingContentBrandUnsafe:isTimeRuleNotSatisfied:isSnapRuleNotSatisfied:isStoryRuleNotSatisfied:reachedAdSlot:priorContentSponsored:followingContentSponsored:priorContentSnapId:followingContentSnapId:previousNeighborStoryType:nextNeighborStoryType:previousOrganicGarmSafety:nextOrganicGarmSafety:] */

void FUN_103e001f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  
  if (param_11 == 0) {
    param_11 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar1 = param_2;
  }
  if (param_12 == 0) {
    param_12 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  func_0x000103e00084(param_3,param_4,param_5,param_6,param_7,param_8,(undefined1)param_9,
                      param_9._1_1_,param_11,uVar1,param_12,param_2,param_13,param_14,param_15,
                      param_16);
  return;
}



/* Entry: 103e002cc; end: 103e0041f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e002cc(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113010fb8) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113010fc0) = param_1[1];
  *(undefined1 *)(unaff_x20 + _DAT_113010fc8) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_113010fd0) = param_1[3];
  *(undefined1 *)(unaff_x20 + _DAT_113010fd8) = param_1[4];
  *(undefined1 *)(unaff_x20 + _DAT_113010fe0) = param_1[5];
  *(undefined1 *)(unaff_x20 + _DAT_113010fe8) = param_1[6];
  *(undefined1 *)(unaff_x20 + _DAT_113010ff0) = param_1[7];
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010ff8);
  puVar1[1] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011000);
  puVar1[1] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x20 + _DAT_113011008) = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + _DAT_113011010) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113011018) = *(undefined8 *)(param_1 + 0x38);
  func_0x000101223174(&uStack_40,auStack_60);
  func_0x000101223174(&uStack_50,auStack_60);
  func_0x000103df379c(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113011020) = *(undefined8 *)(param_1 + 0x40);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e00420; end: 103e00423; -[SCAdOpportunityPotentialAdSlot copyWithZone:] */

void FUN_103e00420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e00424; end: 103e00457; -[SCAdOpportunityPotentialAdSlot description] */

void FUN_103e00424(void)

{
  undefined1 auStack_58 [72];
  
  func_0x000103e00514(auStack_58);
  func_0x000103df379c(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e00458; end: 103e004d3; -[SCAdOpportunityPotentialAdSlot init] */

void FUN_103e00458(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdOperationalLoggingServices/AdOpportunityPotentialAdSlotWrapper.swift",0x46,2,0x59,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e004a0);
  (*pcVar1)();
}



/* Entry: 103e004d4; end: 103e0061b; -[SCAdOpportunityPotentialAdSlot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e004d4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010ff8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011000 + 8))
  ;
  return;
}



/* Entry: 103e0061c; end: 103e0063b;  */

void FUN_103e0061c(void)

{
  _objc_opt_self(&PTR_PTR_11294df78);
  return;
}



/* Entry: 103e0063c; end: 103e006a7;  */

void FUN_103e0063c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e00cc0(param_1);
  return;
}



/* Entry: 103e006a8; end: 103e006b3; -[SCAdOperationEvent adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e006a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011050))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011050);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e006b4; end: 103e006c3; -[SCAdOperationEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e006b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011058);
}



/* Entry: 103e006c4; end: 103e006d3; -[SCAdOperationEvent mediaLoadedOnEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e006c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113011060);
}


