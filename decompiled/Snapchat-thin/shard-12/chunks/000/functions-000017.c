/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c42440; end: 108c42497;  */

long FUN_108c42440(long param_1)

{
  long extraout_x8;
  
  func_0x000108c43d78(&UNK_110ab9550);
  if (extraout_x8 != 0) {
    func_0x000108c43d24();
    func_0x000108c43e80();
    FUN_108c42498();
    func_0x000108c440cc();
  }
  func_0x000108c3ffe4(param_1 + 0x18);
  func_0x000108c3ffe4();
  return param_1;
}



/* Entry: 108c42498; end: 108c424cf;  */

void FUN_108c42498(void)

{
  func_0x000108c43b7c();
  func_0x000108c43e80();
  FUN_108c424d0();
  func_0x000108c43d68();
  func_0x000108c43ed8();
  return;
}



/* Entry: 108c424d0; end: 108c424eb;  */

void FUN_108c424d0(void)

{
  func_0x000108c43fa4();
  FUN_108c424ec();
  return;
}



/* Entry: 108c424ec; end: 108c42573;  */

void FUN_108c424ec(void)

{
  long unaff_x19;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c42574();
  func_0x000108c43fc8();
  FUN_108c4259c();
  func_0x000108c44170();
  func_0x000108c43e70();
  func_0x000108c440a4();
  func_0x000108c43e0c();
  FUN_108c425c0();
  func_0x000108c43c38();
  if (unaff_x19 == 0) {
    func_0x000108c43e00();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43f84();
  return;
}



/* Entry: 108c42574; end: 108c4259b;  */

void FUN_108c42574(void)

{
  func_0x000108c43c90();
  func_0x000108c440d4();
  func_0x000108c43bbc();
  func_0x000108c43f48();
  return;
}



/* Entry: 108c4259c; end: 108c425bf;  */

void FUN_108c4259c(void)

{
  func_0x000108c43be0();
  func_0x000108c3ffe4();
  return;
}



/* Entry: 108c425c0; end: 108c425c3;  */

void FUN_108c425c0(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x90,*param_1);
  return;
}



/* Entry: 108c425c4; end: 108c42657;  */

void FUN_108c425c4(void)

{
  long unaff_x19;
  
  func_0x000108c43ca0();
  func_0x000108c43cd0();
  FUN_108c42574();
  func_0x000108c43fc8();
  FUN_108c4259c();
  func_0x000108c44170();
  func_0x000108c43e70();
  func_0x000108c440a4();
  func_0x000108c43e0c();
  FUN_108c42658();
  func_0x000108c43c38();
  if (unaff_x19 == 0) {
    func_0x000108c43e00();
  }
  else {
    func_0x000108c43fb0();
    func_0x000108c43c4c();
    func_0x000108c43b60();
  }
  func_0x000108c43f84();
  return;
}



/* Entry: 108c42658; end: 108c42667;  */

long FUN_108c42658(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    func_0x00010065acbc();
  }
  else {
    func_0x0001006b7934(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c42668; end: 108c426e3;  */

void FUN_108c42668(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab95c0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c426e4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43e54();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c426e4; end: 108c4274f;  */

void FUN_108c426e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db368;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000108c3e40c(&uStack_30);
  return;
}



/* Entry: 108c42750; end: 108c428cf;  */

void FUN_108c42750(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000108c442e4();
  FUN_108c40438(auStack_40);
  FUN_108c40460(alStack_30,auStack_40);
  func_0x000108c3ff78(auStack_40);
  func_0x000108c3ff78(auStack_50);
  func_0x000107c27b48(&uStack_58);
  func_0x000107c27b4c(auStack_40,uStack_58);
  func_0x000108c44084();
  lStack_88 = extraout_x8 + 0x88;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_108c428d0();
  if ((int)lVar1 == 0) {
    FUN_108c429cc(&lStack_90,auStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_30[0] + 0xd0);
    *(long *)(alStack_30[0] + 0xd0) = lVar1;
    if (lVar2 != 0) {
      func_0x000108c43b70();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x000108c43b70();
      }
    }
  }
  else {
    FUN_108c40460(&lStack_78,alStack_30);
  }
  func_0x000108c44158();
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x000108c43b9c();
      } while (extraout_w10 != 0);
    }
    FUN_108c42908(auStack_68,&lStack_a0);
    func_0x000108c43e44();
  }
  func_0x000108c44310();
  func_0x000108c3ff78();
  puVar3 = auStack_68;
  FUN_108c42ce8();
  func_0x000108c44130();
  func_0x000108c44338();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000108c43b70();
  }
  func_0x000108c44150();
  return;
}



/* Entry: 108c428d0; end: 108c42907;  */

undefined8 FUN_108c428d0(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x000108c43cb0(*(undefined8 *)(param_1 + 200));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 108c42908; end: 108c429cb;  */

void FUN_108c42908(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*(long *)(param_2 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108c43e0c();
  FUN_108c42a8c();
  func_0x000108c43eb8();
  func_0x000108c43f9c();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108c429cc; end: 108c429f7;  */

void FUN_108c429cc(void)

{
  func_0x000108c440e4();
  func_0x000108c441b0(&PTR_FUN_110ab95e0);
  return;
}



/* Entry: 108c429f8; end: 108c429fb;  */

undefined8 * FUN_108c429f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab95e0;
  FUN_108c42ce8(param_1 + 1);
  return param_1;
}



/* Entry: 108c429fc; end: 108c42a0f;  */

void FUN_108c429fc(void)

{
  FUN_108c42a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c42a10; end: 108c42a5f;  */

void FUN_108c42a10(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  FUN_108c42908(param_1 + 8,&uStack_30);
  func_0x000108c43e44();
  return;
}



/* Entry: 108c42a60; end: 108c42a8b;  */

undefined8 * FUN_108c42a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab95e0;
  FUN_108c42ce8(param_1 + 1);
  return param_1;
}



/* Entry: 108c42a8c; end: 108c42bab;  */

void FUN_108c42a8c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_80 [80];
  
  FUN_108c42bdc(auStack_80,param_2);
  FUN_108c42bac(auStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43e60();
  func_0x00010c220160();
  func_0x000108c43e4c();
  FUN_108c40698(auStack_80);
  return;
}



/* Entry: 108c42bac; end: 108c42bdb;  */

void FUN_108c42bac(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_108c4777c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c42bdc; end: 108c42caf;  */

void FUN_108c42bdc(void)

{
  code *pcVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  func_0x000108c441a0();
  FUN_108c40438(auStack_40);
  FUN_108c40460(&lStack_30,auStack_40);
  func_0x000108c44264();
  func_0x000108c43eb8();
  func_0x000108c44190(lStack_30 + 0x88);
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  lVar2 = lStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000108c44180();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_108c42cb0(lVar2 + 0x58,auStack_40,&lStack_60);
  func_0x000108c43f9c();
  if (*(long *)(lStack_30 + 200) != 0) {
    func_0x000108c44200();
    func_0x000108c441f8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c42c80);
    (*pcVar1)();
  }
  FUN_108c40674();
  func_0x000108c43f40();
  func_0x000108c44150();
  return;
}



/* Entry: 108c42cb0; end: 108c42cdf;  */

void FUN_108c42cb0(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x000108c43f74();
  while (uVar1 = unaff_x19, FUN_108c42ce0(), (uVar1 & 1) == 0) {
    func_0x000108c43f24();
  }
  return;
}



/* Entry: 108c42ce0; end: 108c42ce7;  */

undefined8 FUN_108c42ce0(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x50) & 1) == 0) {
    func_0x000108c43cb0(*(undefined8 *)(*param_1 + 200));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 108c42ce8; end: 108c42d27;  */

undefined8 FUN_108c42ce8(void)

{
  undefined8 unaff_x19;
  
  func_0x000108c43e24();
  func_0x000108c43ecc();
  _objc_release();
  return unaff_x19;
}



/* Entry: 108c42d28; end: 108c42ea7;  */

void FUN_108c42d28(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000108c442e4();
  FUN_108c40acc(auStack_40);
  FUN_108c40af4(alStack_30,auStack_40);
  func_0x000108c3ff9c(auStack_40);
  func_0x000108c3ff9c(auStack_50);
  func_0x000107c27b48(&uStack_58);
  func_0x000107c27b4c(auStack_40,uStack_58);
  func_0x000108c44084();
  lStack_88 = extraout_x8 + 0x50;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_108c42ea8();
  if ((int)lVar1 == 0) {
    FUN_108c42fa4(&lStack_90,auStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_30[0] + 0x98);
    *(long *)(alStack_30[0] + 0x98) = lVar1;
    if (lVar2 != 0) {
      func_0x000108c43b70();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x000108c43b70();
      }
    }
  }
  else {
    FUN_108c40af4(&lStack_78,alStack_30);
  }
  func_0x000108c44158();
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x000108c43b9c();
      } while (extraout_w10 != 0);
    }
    FUN_108c42ee0(auStack_68,&lStack_a0);
    func_0x000108c43e3c();
  }
  func_0x000108c44310();
  func_0x000108c3ff9c();
  puVar3 = auStack_68;
  FUN_108c43350();
  func_0x000108c44130();
  func_0x000108c44338();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000108c43b70();
  }
  func_0x000108c44148();
  return;
}



/* Entry: 108c42ea8; end: 108c42edf;  */

undefined8 FUN_108c42ea8(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000108c43cb0(*(undefined8 *)(param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 108c42ee0; end: 108c42fa3;  */

void FUN_108c42ee0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (*(long *)(param_2 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108c43e0c();
  FUN_108c43064();
  func_0x000108c43eb0();
  func_0x000108c43f94();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108c42fa4; end: 108c42fcf;  */

void FUN_108c42fa4(void)

{
  func_0x000108c440e4();
  func_0x000108c441b0(&PTR_FUN_110ab9630);
  return;
}



/* Entry: 108c42fd0; end: 108c42fd3;  */

undefined8 * FUN_108c42fd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9630;
  FUN_108c43350(param_1 + 1);
  return param_1;
}



/* Entry: 108c42fd4; end: 108c42fe7;  */

void FUN_108c42fd4(void)

{
  FUN_108c43038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c42fe8; end: 108c43037;  */

void FUN_108c42fe8(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  FUN_108c42ee0(param_1 + 8,&uStack_30);
  func_0x000108c43e3c();
  return;
}



/* Entry: 108c43038; end: 108c43063;  */

undefined8 * FUN_108c43038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9630;
  FUN_108c43350(param_1 + 1);
  return param_1;
}



/* Entry: 108c43064; end: 108c43183;  */

void FUN_108c43064(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_108c43230(auStack_48,param_2);
  FUN_108c43184(auStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c43e60();
  func_0x00010c220160();
  func_0x000108c43e4c();
  FUN_108c41168(auStack_48);
  return;
}



/* Entry: 108c43184; end: 108c4322f;  */

void FUN_108c43184(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    FUN_108c4777c(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108c43e60();
    func_0x00010befa120();
    func_0x000108c43e4c();
  }
  func_0x00010bf51e00(puVar2);
  func_0x000108c43d54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c43230; end: 108c43317;  */

void FUN_108c43230(void)

{
  code *pcVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  func_0x000108c441a0();
  FUN_108c40acc(auStack_40);
  FUN_108c40af4(&puStack_30,auStack_40);
  func_0x000108c4425c();
  func_0x000108c43eb0();
  func_0x000108c44190(puStack_30 + 10);
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  puVar2 = puStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000108c44180();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_108c43318(puVar2 + 4,auStack_40,&puStack_60);
  func_0x000108c43f94();
  if (puStack_30[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68);
    func_0x000108c441f8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c432e8);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  unaff_x19[1] = puStack_30[1];
  *unaff_x19 = uVar3;
  unaff_x19[2] = puStack_30[2];
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = 0;
  func_0x000108c43f40();
  func_0x000108c44148();
  return;
}



/* Entry: 108c43318; end: 108c43347;  */

void FUN_108c43318(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x000108c43f74();
  while (uVar1 = unaff_x19, FUN_108c43348(), (uVar1 & 1) == 0) {
    func_0x000108c43f24();
  }
  return;
}



/* Entry: 108c43348; end: 108c4334f;  */

undefined8 FUN_108c43348(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x18) & 1) == 0) {
    func_0x000108c43cb0(*(undefined8 *)(*param_1 + 0x90));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 108c43350; end: 108c433c7;  */

undefined8 FUN_108c43350(void)

{
  undefined8 unaff_x19;
  
  func_0x000108c43e24();
  func_0x000108c43ecc();
  _objc_release();
  return unaff_x19;
}



/* Entry: 108c433c8; end: 108c4362f;  */

void FUN_108c433c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 auStack_58 [3];
  
  uStack_88 = param_2;
  lStack_80 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c43b9c();
    } while (extraout_w10_00 != 0);
  }
  uVar2 = *param_1;
  uStack_78 = param_2;
  lStack_70 = param_3;
  FUN_108c436b8(auStack_68,&uStack_78);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_58;
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    FUN_108c43184(puVar3 + 5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27f28(puVar3 + 2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    func_0x000108c43e4c();
    func_0x000108c43ee0();
  }
  func_0x00010bf51e00(puVar1);
  func_0x000108c43dc4();
  func_0x00010c220160(uVar2);
  func_0x000108c43ee0();
  func_0x000108c42160(auStack_68);
  func_0x000108c44160();
  func_0x000108c3ffc0(&uStack_88);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108c43630; end: 108c43633;  */

undefined8 * FUN_108c43630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9680;
  FUN_108c437cc(param_1 + 1);
  return param_1;
}



/* Entry: 108c43634; end: 108c43647;  */

void FUN_108c43634(void)

{
  FUN_108c4368c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c43648; end: 108c4368b;  */

void FUN_108c43648(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c44324();
  if (param_3 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  FUN_108c433c8(param_1 + 8);
  func_0x000108c43e78();
  return;
}



/* Entry: 108c4368c; end: 108c436b7;  */

undefined8 * FUN_108c4368c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9680;
  FUN_108c437cc(param_1 + 1);
  return param_1;
}



/* Entry: 108c436b8; end: 108c43793;  */

void FUN_108c436b8(void)

{
  code *pcVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  func_0x000108c441a0();
  FUN_108c415e8(auStack_40);
  FUN_108c41610(&lStack_30,auStack_40);
  func_0x000108c4426c();
  func_0x000108c43f8c();
  func_0x000108c44190(lStack_30 + 0x60);
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  lVar2 = lStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000108c44180();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_108c43794(lVar2 + 0x30,auStack_40,&lStack_60);
  func_0x000108c44178();
  if (*(long *)(lStack_30 + 0xa0) != 0) {
    func_0x000108c44200();
    func_0x000108c441f8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c43760);
    (*pcVar1)();
  }
  FUN_108c41898();
  func_0x000108c43f40();
  func_0x000108c3ffc0(&lStack_30);
  return;
}



/* Entry: 108c43794; end: 108c437c3;  */

void FUN_108c43794(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x000108c43f74();
  while (uVar1 = unaff_x19, FUN_108c437c4(), (uVar1 & 1) == 0) {
    func_0x000108c43f24();
  }
  return;
}



/* Entry: 108c437c4; end: 108c437cb;  */

undefined8 FUN_108c437c4(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x28) & 1) == 0) {
    func_0x000108c43cb0(*(undefined8 *)(*param_1 + 0xa0));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 108c437cc; end: 108c43827;  */

void FUN_108c437cc(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108c43e24();
  _objc_release(*unaff_x19);
  return;
}



/* Entry: 108c43828; end: 108c43ab3;  */

void FUN_108c43828(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c43b9c();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_1;
  puStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_108c42574(&puStack_60,&uStack_b0,&uStack_70);
  FUN_108c4259c(&puStack_50,&puStack_60);
  func_0x000108c44228();
  func_0x000108c440ec();
  puStack_60 = puStack_50 + 10;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_50;
  puStack_80 = puStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10_01 != 0);
  }
  while (puVar3 = puVar1, func_0x000108c437f0(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 4,&puStack_60);
  }
  func_0x000108c44214();
  if (puStack_50[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108c43980);
    (*pcVar2)();
  }
  uStack_98 = puStack_50[1];
  uStack_a0 = *puStack_50;
  uStack_90 = puStack_50[2];
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puStack_50 = 0;
  func_0x000107c2798c(&puStack_60);
  func_0x000108c44230();
  func_0x000107c28044(&uStack_a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar4);
  func_0x000108c43dc4();
  func_0x000107c27914(&uStack_a0);
  func_0x000108c43f84();
  func_0x000108c44170();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108c43ab4; end: 108c43ab7;  */

undefined8 * FUN_108c43ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab96d0;
  func_0x000108c43b3c(param_1 + 1);
  return param_1;
}



/* Entry: 108c43ab8; end: 108c43acb;  */

void FUN_108c43ab8(void)

{
  FUN_108c43b10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c43acc; end: 108c43b0f;  */

void FUN_108c43acc(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c44324();
  if (param_3 != 0) {
    do {
      func_0x000108c43b9c();
    } while (extraout_w10 != 0);
  }
  FUN_108c43828(param_1 + 8);
  func_0x000108c43e70();
  return;
}



/* Entry: 108c43b10; end: 108c43b5f;  */

undefined8 * FUN_108c43b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab96d0;
  func_0x000108c43b3c(param_1 + 1);
  return param_1;
}



/* Entry: 108c43b60; end: 108c44367;  */

void FUN_108c43b60(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000108c43b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 108c44368; end: 108c443df; -[SCNAtlasAtlasMyDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_108c44368(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fde80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c44720();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108c3e3e8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c443e0; end: 108c4448b; -[SCNAtlasAtlasMyDataProviderCppProxy getMyCurrentCalendarEvent] */

void FUN_108c443e0(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_108c3f6dc(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4473c();
  func_0x000108c3ff78();
  func_0x000108c3ff78(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c4448c; end: 108c44537; -[SCNAtlasAtlasMyDataProviderCppProxy getMyAllCalendarEvents] */

void FUN_108c4448c(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_108c3f808(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4473c();
  func_0x000108c3ff9c();
  func_0x000108c3ff9c(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c44538; end: 108c445a7;  */

void FUN_108c44538(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ab9710,&PTR_DAT_110ab9720,0);
    if (lVar1 == 0) {
      FUN_108c44640(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c445a8; end: 108c445fb; -[SCNAtlasAtlasMyDataProviderCppProxy .cxx_destruct] */

void FUN_108c445a8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9768;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108c3e3e8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c445fc; end: 108c4463f; -[SCNAtlasAtlasMyDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_108c445fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108c44720();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c44640; end: 108c446b3;  */

void FUN_108c44640(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9768;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c44720();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c446b4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4473c();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c446b4; end: 108c4471f;  */

void FUN_108c446b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db370;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c44720();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000108c3e3e8(&uStack_30);
  return;
}



/* Entry: 108c44720; end: 108c4475b;  */

void FUN_108c44720(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c4475c; end: 108c447d3; -[SCNAtlasAtlasPublicDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_108c4475c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fde88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c45968();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108c3e454(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c447d4; end: 108c44ad7; -[SCNAtlasAtlasPublicDataProviderCppProxy getFollowers:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_108c447d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  long *plVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_d8 [3];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [5];
  
  _objc_retain(param_3);
  plVar6 = *(long **)(param_1 + 0x18);
  FUN_108c46f80(alStack_d8,param_3);
  (**(code **)(*plVar6 + 0x10))(&uStack_c0,plVar6,alStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_d8);
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar2 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  alStack_d8[0] = 0;
  alStack_d8[1] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  FUN_108c450fc(alStack_68 + 3,&uStack_f0,alStack_68 + 1);
  FUN_108c45154(alStack_d8,alStack_68 + 3);
  func_0x000108c45a90();
  func_0x000108c45a7c();
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_d8[0] + 0x68;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar2;
  __ZNSt3__15mutex4lockEv();
  lVar5 = alStack_d8[0];
  FUN_108c45570();
  if ((int)lVar5 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar5 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110ab98a8;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar5;
    puVar4[1] = puVar1;
    lVar5 = *(long *)(alStack_d8[0] + 0xb0);
    *(undefined8 **)(alStack_d8[0] + 0xb0) = puVar4;
    if (lVar5 != 0) {
      func_0x000108c45a00();
    }
  }
  else {
    FUN_108c45154(&lStack_90,alStack_d8);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000108c45968();
      } while (extraout_w10 != 0);
    }
    FUN_108c455b8(&puStack_80);
    func_0x000108c44bd4(&lStack_a0);
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x000108c44bd4(&lStack_90);
  func_0x000108c4593c(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar5 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar5 != 0) {
    func_0x000108c45988();
  }
  func_0x000108c44bd4(alStack_d8);
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  _objc_release(puVar2);
  func_0x000108c459a8();
  func_0x000108c44bd4(&uStack_c0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c44ad8; end: 108c44b43;  */

void FUN_108c44ad8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108c45abc();
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ___dynamic_cast();
    if (param_1 == 0) {
      FUN_108c4548c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x19 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(unaff_x19);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108c44b44; end: 108c44b93; -[SCNAtlasAtlasPublicDataProviderCppProxy .cxx_destruct] */

void FUN_108c44b44(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108c45aa4();
    func_0x000107c31708();
  }
  func_0x000108c3e454((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c44b94; end: 108c44bfb; -[SCNAtlasAtlasPublicDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_108c44b94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c44bfc; end: 108c44c43;  */

void FUN_108c44bfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  FUN_108c44cd8();
  *param_1 = puVar1;
  return;
}



/* Entry: 108c44c44; end: 108c44caf;  */

void FUN_108c44c44(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x000108c459a8();
  return;
}



/* Entry: 108c44cb0; end: 108c44cd7;  */

void FUN_108c44cb0(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108c45abc();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x000108c45988();
  }
  return;
}



/* Entry: 108c44cd8; end: 108c44cfb;  */

void FUN_108c44cd8(undefined8 *param_1)

{
  FUN_108c44cfc();
  *param_1 = &PTR_FUN_110ab97e0;
  return;
}



/* Entry: 108c44cfc; end: 108c44d3b;  */

void FUN_108c44cfc(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x000108c45a40();
  func_0x000108c44d54(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x000108c45968();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c44d3c; end: 108c44d3f;  */

void FUN_108c44d3c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000108c45a40();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000108c45aa4();
    FUN_108c44fe4();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x000108c44bd4(unaff_x19 + 0x18);
  func_0x000108c44bd4((long *)(param_1 + 8));
  return;
}



/* Entry: 108c44d40; end: 108c44d6f;  */

void FUN_108c44d40(void)

{
  FUN_108c44f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c44d70; end: 108c44d73;  */

void FUN_108c44d70(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000108c45a40();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000108c45aa4();
    FUN_108c44fe4();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x000108c44bd4(unaff_x19 + 0x18);
  func_0x000108c44bd4((long *)(param_1 + 8));
  return;
}



/* Entry: 108c44d74; end: 108c44d87;  */

void FUN_108c44d74(void)

{
  FUN_108c44f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c44d88; end: 108c44e5b;  */

undefined1 * FUN_108c44d88(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_108c44e5c(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110ab9848;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[9] = 0;
  puStack_30[10] = 0x3cb0b1bb;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x10] = 0x32aaaba7;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x16] = 0;
  puStack_30[0x15] = 0;
  puStack_30[0x18] = 0;
  puStack_30[0x17] = 0;
  puStack_30[0x19] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_108c44f74();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_108c44e84();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108c44e5c; end: 108c44e83;  */

long FUN_108c44e5c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108c44e84();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108c44e84; end: 108c44eb3;  */

void FUN_108c44e84(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x13b13b13b13b13c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab9848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c44eb4; end: 108c44eb7;  */

void FUN_108c44eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9848;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c44eb8; end: 108c44ecb;  */

void FUN_108c44eb8(void)

{
  func_0x000108c44ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c44ecc; end: 108c44eeb;  */

void FUN_108c44ecc(long param_1)

{
  func_0x000108c44f2c(param_1 + 200);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_108c45400();
  }
  return;
}



/* Entry: 108c44eec; end: 108c44f53;  */

void FUN_108c44eec(long param_1)

{
  func_0x000108c44f2c(param_1 + 0xb0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108c45400();
  }
  return;
}



/* Entry: 108c44f54; end: 108c44f73;  */

void FUN_108c44f54(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108c45400();
  }
  return;
}



/* Entry: 108c44f74; end: 108c44f83;  */

void FUN_108c44f74(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c44f84; end: 108c44fe3;  */

void FUN_108c44f84(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000108c45a40();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    func_0x000108c45aa4();
    FUN_108c44fe4();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x000108c44bd4(unaff_x19 + 0x18);
  func_0x000108c44bd4((long *)(param_1 + 8));
  return;
}



/* Entry: 108c44fe4; end: 108c45043;  */

void FUN_108c44fe4(void)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  func_0x000108c45aa4();
  FUN_108c45044();
  func_0x000108c459f8();
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 108c45044; end: 108c45063;  */

void FUN_108c45044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c45064(param_1,&uStack_18);
  return;
}



/* Entry: 108c45064; end: 108c450fb;  */

void FUN_108c45064(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x000108c45a18();
  func_0x000108c45a70();
  func_0x000108c45a38();
  func_0x000108c459a8();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x68);
  FUN_108c4518c(param_2,alStack_30);
  func_0x000108c459e4();
  if (param_2 == (long *)0x0) {
    func_0x000108c45a58();
  }
  else {
    func_0x000108c45a64(*(undefined8 *)(*param_2 + 0x10));
    func_0x000108c45978();
  }
  func_0x000108c459c8();
  return;
}



/* Entry: 108c450fc; end: 108c45153;  */

void FUN_108c450fc(undefined8 param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108c45ab0();
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x19[1] = uVar3;
  *unaff_x19 = uVar2;
  __ZNSt3__18__sp_mut6unlockEv(param_1);
  uVar1 = *unaff_x19;
  extraout_x8[1] = unaff_x19[1];
  *extraout_x8 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 108c45154; end: 108c4518b;  */

undefined8 * FUN_108c45154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108c459a8();
  return param_1;
}



/* Entry: 108c4518c; end: 108c4519f;  */

void FUN_108c4518c(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xa8,*param_1);
  return;
}



/* Entry: 108c451a0; end: 108c45247;  */

void FUN_108c451a0(undefined8 param_1,long *param_2)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x000108c45a18();
  func_0x000108c45a70();
  func_0x000108c45a38();
  func_0x000108c459a8();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x68);
  FUN_108c45248(param_2,alStack_30);
  func_0x000108c459e4();
  if (param_2 == (long *)0x0) {
    func_0x000108c45a58();
  }
  else {
    func_0x000108c45a64(*(undefined8 *)(*param_2 + 0x10));
    func_0x000108c45978();
  }
  func_0x000108c459c8();
  return;
}



/* Entry: 108c45248; end: 108c45257;  */

long FUN_108c45248(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    func_0x000108c4528c();
  }
  else {
    FUN_108c452b8(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 108c45258; end: 108c452b7;  */

long FUN_108c45258(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000108c4528c();
  }
  else {
    FUN_108c452b8();
  }
  return param_1;
}



/* Entry: 108c452b8; end: 108c452d3;  */

void FUN_108c452b8(long param_1)

{
  FUN_108c453c4();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108c452d4; end: 108c4533f;  */

void FUN_108c452d4(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000108c45ab0();
  func_0x000108c45308();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 108c45340; end: 108c45347;  */

void FUN_108c45340(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c45ab0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x000108c4537c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108c45348; end: 108c453c3;  */

void FUN_108c45348(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c45ab0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x000108c4537c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


