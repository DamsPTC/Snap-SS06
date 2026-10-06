/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10552f528; end: 10552f57b; -[SCNCurrentMessagingSessionCurrentMessagingSessionManager .cxx_destruct] */

void FUN_10552f528(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110895c08;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010552f5bc((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10552f57c; end: 10552f5e3; -[SCNCurrentMessagingSessionCurrentMessagingSessionManager .cxx_construct] */

undefined8 * FUN_10552f57c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10552f89c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10552f5e4; end: 10552f7d7;  */

void FUN_10552f5e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10552f89c();
    } while (extraout_w10 != 0);
    do {
      FUN_10552f89c();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001006054a0(auStack_58,&uStack_68);
  func_0x0001005f244c(auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010552f8c4();
  func_0x0001005f25dc(auStack_58);
  func_0x00010060475c(&uStack_68);
  func_0x00010060475c(&uStack_78);
  func_0x0001003b8370(param_1[1]);
  return;
}



/* Entry: 10552f7d8; end: 10552f7db;  */

undefined8 * FUN_10552f7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110895c28;
  func_0x00010552f870(param_1 + 1);
  return param_1;
}



/* Entry: 10552f7dc; end: 10552f7ef;  */

void FUN_10552f7dc(void)

{
  FUN_10552f844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552f7f0; end: 10552f843;  */

void FUN_10552f7f0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10552f89c();
    } while (extraout_w10 != 0);
  }
  FUN_10552f5e4(param_1 + 8);
  func_0x00010552f8cc();
  return;
}



/* Entry: 10552f844; end: 10552f89b;  */

undefined8 * FUN_10552f844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110895c28;
  func_0x00010552f870(param_1 + 1);
  return param_1;
}



/* Entry: 10552f89c; end: 10552f90b;  */

void FUN_10552f89c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10552f90c; end: 10552f92f;  */

void FUN_10552f90c(undefined8 param_1,long param_2)

{
  func_0x000100604488();
  __ZNSt3__15mutex4lockEv();
  func_0x000100604c68(param_1,param_2 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 10552f930; end: 10552f96f;  */

void FUN_10552f930(undefined8 param_1,long param_2)

{
  __ZNSt3__15mutex4lockEv();
  func_0x000100604c68(param_1,param_2 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 10552f970; end: 10552f993;  */

void FUN_10552f970(void)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000100604488();
  func_0x000100604b88();
  FUN_10552fc80(unaff_x19,unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19);
  return;
}



/* Entry: 10552f994; end: 10552f9cb;  */

void FUN_10552f994(void)

{
  func_0x000100604b88();
  FUN_10552fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10552f9cc; end: 10552f9cf;  */

void FUN_10552f9cc(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000100604530();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10552fa24();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x00010060475c(unaff_x19 + 0x18);
  func_0x00010060475c((long *)(param_1 + 8));
  return;
}



/* Entry: 10552f9d0; end: 10552f9e3;  */

void FUN_10552f9d0(void)

{
  func_0x000100605990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552f9e4; end: 10552f9e7;  */

void FUN_10552f9e4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000100604530();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10552fa24();
    func_0x000107c60dfc(&ppuStack_28);
  }
  func_0x00010060475c(unaff_x19 + 0x18);
  func_0x00010060475c((long *)(param_1 + 8));
  return;
}



/* Entry: 10552f9e8; end: 10552f9fb;  */

void FUN_10552f9e8(void)

{
  func_0x000100605990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552f9fc; end: 10552f9ff;  */

void FUN_10552f9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110895cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10552fa00; end: 10552fa13;  */

void FUN_10552fa00(void)

{
  FUN_10552fa14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552fa14; end: 10552fa23;  */

void FUN_10552fa14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110895cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10552fa24; end: 10552fa87;  */

void FUN_10552fa24(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_10552fa88(param_1,auStack_28);
  func_0x00010552fdf4();
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 10552fa88; end: 10552faa7;  */

void FUN_10552fa88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10552faa8(param_1,&uStack_18);
  return;
}



/* Entry: 10552faa8; end: 10552fb4f;  */

void FUN_10552faa8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  func_0x000100605130();
  func_0x000100605238();
  func_0x000100605128();
  func_0x000100604708();
  __ZNSt3__15mutex4lockEv(0x48);
  __ZNSt13exception_ptraSERKS_(0x88,*param_2);
  plVar1 = plRam0000000000000090;
  plRam0000000000000090 = (long *)0x0;
  __ZNSt3__15mutex6unlockEv(0x48);
  if (plVar1 == (long *)0x0) {
    func_0x00010552fe54();
  }
  else {
    func_0x000100605244(*(undefined8 *)(*plVar1 + 0x10));
    func_0x000100605a74();
  }
  func_0x000100605a60();
  return;
}



/* Entry: 10552fb50; end: 10552fb53;  */

void FUN_10552fb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110895d20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10552fb54; end: 10552fb67;  */

void FUN_10552fb54(void)

{
  FUN_10552fb98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552fb68; end: 10552fb97;  */

void FUN_10552fb68(long param_1)

{
  func_0x0001003b8240(param_1 + 0x78);
  func_0x000100605948(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10552fb98; end: 10552fbaf;  */

void FUN_10552fb98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552fbb0; end: 10552fbeb;  */

undefined8 * FUN_10552fbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001005f25dc(&uStack_30);
  return param_1;
}



/* Entry: 10552fbec; end: 10552fc03;  */

void FUN_10552fbec(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10552fc04; end: 10552fc07;  */

void FUN_10552fc04(void)

{
  func_0x00010552fe3c();
  __ZNSt13exception_ptrD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10552fc08; end: 10552fc27;  */

void FUN_10552fc08(void)

{
  func_0x00010552fe3c();
  __ZNSt13exception_ptrC1ERKS_();
  return;
}



/* Entry: 10552fc28; end: 10552fc3b;  */

void FUN_10552fc28(void)

{
  FUN_10552fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10552fc3c; end: 10552fc47;  */

char * FUN_10552fc3c(void)

{
  return "Bad expected access";
}



/* Entry: 10552fc48; end: 10552fc6b;  */

void FUN_10552fc48(void)

{
  func_0x00010552fe3c();
  __ZNSt13exception_ptrD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10552fc6c; end: 10552fc7f;  */

void FUN_10552fc6c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*(long *)(puVar1 + 0x40) == param_2) {
    *(undefined8 *)(puVar1 + 0x40) = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000100604584(&uStack_60);
    uVar3 = *(undefined8 *)(puVar1 + 0x58);
    uVar2 = *(undefined8 *)(puVar1 + 0x50);
    uVar5 = *(undefined8 *)(puVar1 + 0x68);
    uVar4 = *(undefined8 *)(puVar1 + 0x60);
    *(undefined8 *)(puVar1 + 0x58) = uStack_50;
    *(undefined8 *)(puVar1 + 0x50) = uStack_58;
    *(undefined8 *)(puVar1 + 0x68) = uStack_40;
    *(undefined8 *)(puVar1 + 0x60) = uStack_48;
    uStack_58 = uVar2;
    uStack_50 = uVar3;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    func_0x000100605990(&uStack_60);
    func_0x000100604710(auStack_80,puVar1 + 0x48);
    func_0x000100604780(&uStack_70,auStack_80);
    uVar3 = uStack_68;
    uVar2 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_58 = *(undefined8 *)(puVar1 + 0x78);
    uStack_60 = *(undefined8 *)(puVar1 + 0x70);
    *(undefined8 *)(puVar1 + 0x78) = uVar3;
    *(undefined8 *)(puVar1 + 0x70) = uVar2;
    func_0x000100604b60(&uStack_60);
    func_0x000100604b60(&uStack_70);
    func_0x000100604708();
  }
  return;
}



/* Entry: 10552fc80; end: 10552fd33;  */

void FUN_10552fc80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x40) == param_2) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000100604584(&uStack_50);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uStack_40;
    *(undefined8 *)(param_1 + 0x50) = uStack_48;
    *(undefined8 *)(param_1 + 0x68) = uStack_30;
    *(undefined8 *)(param_1 + 0x60) = uStack_38;
    uStack_48 = uVar1;
    uStack_40 = uVar2;
    uStack_38 = uVar3;
    uStack_30 = uVar4;
    func_0x000100605990(&uStack_50);
    func_0x000100604710(auStack_70,param_1 + 0x48);
    func_0x000100604780(&uStack_60,auStack_70);
    uVar2 = uStack_58;
    uVar1 = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    func_0x000100604b60(&uStack_50);
    func_0x000100604b60(&uStack_60);
    func_0x000100604708();
  }
  return;
}



/* Entry: 10552fd34; end: 10552fd97;  */

void FUN_10552fd34(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  __ZNSt13runtime_errorC1ERKS_(auStack_38);
  FUN_1052b2bd0(auStack_28,auStack_38);
  FUN_10552fa88(param_1,auStack_28);
  func_0x00010552fe34();
  __ZNSt13runtime_errorD1Ev(auStack_38);
  return;
}



/* Entry: 10552fd98; end: 10552fdc7;  */

void FUN_10552fd98(long param_1)

{
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    func_0x00010552fe60();
  }
  func_0x00010552fe68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10552fdc8; end: 10552fe87;  */

void FUN_10552fdc8(void)

{
  long *unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x00010552fdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x21 + 0x10))();
  return;
}



/* Entry: 10552fe88; end: 10552ff6b; -[SCLegacyChatTooltipsServiceProvider provide] */

void FUN_10552fe88(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba6d0;
  _objc_alloc(PTR_PTR_1126ba6d0);
  func_0x00010c022200();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10552ff6c; end: 10552ffab;  */

void FUN_10552ff6c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10552ffac; end: 10553007f; -[SCLegacyChatTooltipsServiceProvider _legacyChatTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10552ffac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ba6d8;
  _objc_alloc(PTR_PTR_1126ba6d8);
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272564c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bfa2b80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112725648;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010c1067a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011fe0(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105530080; end: 1055300c3; -[SCLegacyChatTooltipsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105530080(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272564c);
  _objc_destroyWeak(param_1 + _DAT_112725648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725644);
  return;
}



/* Entry: 1055300c4; end: 1055300cf; -[SCFeatureSettingsService hasSeenChatDeletionMsg] */

void FUN_1055300c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dea158);
  return;
}



/* Entry: 1055300d0; end: 1055300db; -[SCFeatureSettingsService seenChatDeletionMsgServerParam] */

undefined ** FUN_1055300d0(void)

{
  return &PTR____CFConstantStringClassReference_110dea158;
}



/* Entry: 1055300dc; end: 1055300eb; -[SCFeatureSettingsService setSeenChatDeletionMsg:] */

void FUN_1055300dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dea158,param_3);
  return;
}



/* Entry: 1055300ec; end: 1055300f3; -[SCFeatureSettingsService chat_deletion_msg_tooltip_client_value:] */

undefined * FUN_1055300ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1055300f4; end: 1055300fb; -[SCFeatureSettingsService chat_deletion_msg_tooltip_server_value:] */

void FUN_1055300f4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055300fc; end: 10553010b; -[SCFeatureSettingsService seenChatDeletionMsg] */

void FUN_1055300fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dea158,0);
  return;
}



/* Entry: 10553010c; end: 105530117; -[SCFeatureSettingsService hasSeenMischiefChatDeletionMsg] */

void FUN_10553010c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dea178);
  return;
}



/* Entry: 105530118; end: 105530123; -[SCFeatureSettingsService seenMischiefChatDeletionMsgServerParam] */

undefined ** FUN_105530118(void)

{
  return &PTR____CFConstantStringClassReference_110dea178;
}



/* Entry: 105530124; end: 105530133; -[SCFeatureSettingsService setSeenMischiefChatDeletionMsg:] */

void FUN_105530124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dea178,param_3);
  return;
}



/* Entry: 105530134; end: 10553013b; -[SCFeatureSettingsService mischief_chat_deletion_msg_tooltip_client_value:] */

undefined * FUN_105530134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10553013c; end: 105530143; -[SCFeatureSettingsService mischief_chat_deletion_msg_tooltip_server_value:] */

void FUN_10553013c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105530144; end: 105530153; -[SCFeatureSettingsService seenMischiefChatDeletionMsg] */

void FUN_105530144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dea178,0);
  return;
}



/* Entry: 105530154; end: 10553015f; -[SCFeatureSettingsService hasSeenFirstReplayDialog] */

void FUN_105530154(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dea198);
  return;
}



/* Entry: 105530160; end: 10553016b; -[SCFeatureSettingsService seenFirstReplayDialogServerParam] */

undefined ** FUN_105530160(void)

{
  return &PTR____CFConstantStringClassReference_110dea198;
}



/* Entry: 10553016c; end: 10553017b; -[SCFeatureSettingsService setSeenFirstReplayDialog:] */

void FUN_10553016c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dea198,param_3);
  return;
}



/* Entry: 10553017c; end: 105530183; -[SCFeatureSettingsService first_replay_tooltip_client_value:] */

undefined * FUN_10553017c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105530184; end: 10553018b; -[SCFeatureSettingsService first_replay_tooltip_server_value:] */

void FUN_105530184(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10553018c; end: 10553019b; -[SCFeatureSettingsService seenFirstReplayDialog] */

void FUN_10553018c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dea198,0);
  return;
}



/* Entry: 10553019c; end: 10553023f; -[SCLegacyChatTooltipsServiceImpl initWithFeatureSettingsService:preferences:] */

undefined1 *
FUN_10553019c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105530240; end: 1055302a7; -[SCLegacyChatTooltipsServiceImpl shouldDisplayChatDeleteMsgInChat:] */

uint FUN_105530240(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bddd0c0();
  if (((long)uVar1 < 10) && (uVar1 = param_1, func_0x00010be9d3e0(), (uVar1 & 1) == 0)) {
    func_0x00010be345e0(param_1,param_2,param_3);
    uVar2 = (uint)param_1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1055302a8; end: 1055302cb; -[SCLegacyChatTooltipsServiceImpl setDisplayedChatDeleteMsgInChat:] */

void FUN_1055302a8(undefined8 param_1)

{
  func_0x00010bea7140();
                    /* WARNING: Could not recover jumptable at 0x00010be38330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__incrementChatSessionsForDeleteM_11256ba68);
  return;
}



/* Entry: 1055302cc; end: 105530323; -[SCLegacyChatTooltipsServiceImpl shouldDisplayChatDeleteMsgInMischiefChat:] */

uint FUN_1055302cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb33c0();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010be34600(param_1,param_2,param_3);
    uVar2 = (uint)param_1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105530324; end: 105530347; -[SCLegacyChatTooltipsServiceImpl setDisplayedChatDeleteMsgInMischiefChat:] */

void FUN_105530324(undefined8 param_1)

{
  func_0x00010be34600();
                    /* WARNING: Could not recover jumptable at 0x00010be385b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__incrementMischiefChatSessionsFo_11256bb08);
  return;
}



/* Entry: 105530348; end: 1055303ab; -[SCLegacyChatTooltipsServiceImpl shouldDisplayFirstReplayDialog] */

uint FUN_105530348(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157760();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be34620();
  if (((int)lVar3 != 0) && ((uVar2 & 1) == 0)) {
    func_0x00010c1a6b00(param_1);
  }
  return (uint)uVar2 ^ 1;
}



/* Entry: 1055303ac; end: 1055303eb; -[SCLegacyChatTooltipsServiceImpl setHasSeenFirstReplayDialog] */

void FUN_1055303ac(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bea4500();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055303ec; end: 105530433; -[SCLegacyChatTooltipsServiceImpl shouldDisplayClearConversationConfirmation] */

uint FUN_1055303ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105530434; end: 10553046f; -[SCLegacyChatTooltipsServiceImpl _shouldDisplayChatDeleteMsg] */

uint FUN_105530434(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bddd0c0();
  if (lVar2 < 10) {
    func_0x00010be9d3e0(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105530470; end: 1055304b7; -[SCLegacyChatTooltipsServiceImpl _chatSessionCountsForDeleteMsgShow] */

undefined8 FUN_105530470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1055304b8; end: 1055304ff; -[SCLegacyChatTooltipsServiceImpl _mischiefChatSessionCountsForDeleteMsgShow] */

undefined8 FUN_1055304b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105530500; end: 10553053f; -[SCLegacyChatTooltipsServiceImpl _seenChatDeletionMsg] */

undefined8 FUN_105530500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157580();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105530540; end: 1055305cb; -[SCLegacyChatTooltipsServiceImpl _hasSeenChatDeleteMsgInChat:] */

undefined8 FUN_105530540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcda0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010bf1f320(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1055305cc; end: 10553064f; -[SCLegacyChatTooltipsServiceImpl _setSeenChatDeleteMsgInChat:] */

void FUN_1055305cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcda0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c172fe0(uVar1,param_2,1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105530650; end: 105530687; -[SCLegacyChatTooltipsServiceImpl _chatDeletionMsgShownChatIdentifierPreferencesKey:] */

void FUN_105530650(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 105530688; end: 1055306c7; -[SCLegacyChatTooltipsServiceImpl _seenMischiefChatDeletionMsg] */

undefined8 FUN_105530688(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157940();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1055306c8; end: 105530753; -[SCLegacyChatTooltipsServiceImpl _hasSeenChatDeleteMsgInMischiefChat:] */

undefined8 FUN_1055306c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddcdc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010bf1f320(uVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105530754; end: 10553078b; -[SCLegacyChatTooltipsServiceImpl _chatDeletionMsgShownMischiefChatIdentifierMigrationKey:] */

void FUN_105530754(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 10553078c; end: 1055307c3; -[SCLegacyChatTooltipsServiceImpl _chatDeletionMsgShownMischiefChatIdentifierPreferencesKey:] */

void FUN_10553078c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 1055307c4; end: 105530857; -[SCLegacyChatTooltipsServiceImpl _incrementChatSessionsForDeleteMsgShowCount] */

void FUN_1055307c4(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x00010bddd0c0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010beb3300();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105530858; end: 105530893; -[SCLegacyChatTooltipsServiceImpl _shouldDisplayMischiefChatDeleteMsg] */

uint FUN_105530858(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be60800();
  if (lVar2 < 10) {
    func_0x00010be9d440(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105530894; end: 105530927; -[SCLegacyChatTooltipsServiceImpl _incrementMischiefChatSessionsForDeleteMsgShowCount] */

void FUN_105530894(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x00010be60800();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010beb33c0();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105530928; end: 10553096f; -[SCLegacyChatTooltipsServiceImpl _hasSeenFirstReplayDialog] */

undefined8 FUN_105530928(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105530970; end: 1055309af; -[SCLegacyChatTooltipsServiceImpl _setHasSeenFirstReplayDialog] */

void FUN_105530970(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055309b0; end: 105530a1f; -[SCLegacyChatTooltipsServiceImpl .cxx_destruct] */

void FUN_1055309b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105530a20; end: 105530b77; -[SCConversationIdServicesEntryPoint _resolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105530a20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ba6e8;
  _objc_alloc(PTR_PTR_1126ba6e8);
  lVar9 = (long)_DAT_11272565c;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010c0d5c80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112725660;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2980;
  _objc_alloc(PTR_PTR_1126b2980);
  param_1 = param_1 + _DAT_112725664;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar7,param_2,lVar8);
  func_0x00010c02e360(puVar1,param_2,lVar3,lVar4,lVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105530b78; end: 105530bd7; -[SCConversationIdServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105530b78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725658,0);
  _objc_destroyWeak(param_1 + _DAT_112725664);
  _objc_destroyWeak(param_1 + _DAT_112725660);
  _objc_destroyWeak(param_1 + _DAT_11272565c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725668);
  return;
}



/* Entry: 105530bd8; end: 105530cd7; -[SCPureArroyoConversationIdResolver initWithNativeSessionManager:nativeSessionManagerFuture:messagingExperimentService:crashLogger:] */

undefined1 *
FUN_105530bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126e8e30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105530cd8; end: 105530ecb; -[SCPureArroyoConversationIdResolver conversationIdsForChatIdentifiers:completionQueue:completion:] */

void FUN_105530cd8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0c11e0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1329f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18),
             PTR_s_reportConversationResolverMissin_11262a498);
  return;
}



/* Entry: 105530ecc; end: 105530ef3;  */

void FUN_105530ecc(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1329f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_reportConversationResolverMissin_11262a498);
  return;
}



/* Entry: 105530ef4; end: 105531073;  */

void FUN_105530ef4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105531074;
  uStack_60 = 0x105531084;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = puVar3;
  _objc_retain(puVar2);
  func_0x00010bf97e80(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  _objc_retain(puVar2);
  func_0x00010be94e20(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  return;
}



/* Entry: 105531074; end: 10553108b;  */

void FUN_105531074(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10553108c; end: 10553111f;  */

void FUN_10553108c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c11e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105531120; end: 10553114f;  */

void FUN_105531120(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
               PTR_s_addObject__11259c1f0,param_2);
    return;
  }
  return;
}



/* Entry: 105531150; end: 105531277;  */

void FUN_105531150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105531210;
  puStack_50 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105531278; end: 1055313ab; -[SCPureArroyoConversationIdResolver conversationIdForIdentifier:] */

void FUN_105531278(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae6b8;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055313ac; end: 10553155f;  */

void FUN_1055313ac(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf504e0(lVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126ae750;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfb1920(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105531560; end: 1055315a7; -[SCPureArroyoConversationIdResolver conversationManager] */

void FUN_105531560(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055315a8; end: 1055316e3; -[SCPureArroyoConversationIdResolver _resolveUserIdToConversationIds:completion:] */

void FUN_1055315a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c297260(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055316e4; end: 105531737;  */

void FUN_1055316e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


