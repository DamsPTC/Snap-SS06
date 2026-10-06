/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2374b0; end: 10b2374b3;  */

long FUN_10b2374b0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9c60);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b2375b4();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x0001052b5e30(param_1 + 0x18);
  func_0x0001052b5e30();
  return param_1;
}



/* Entry: 10b2374b4; end: 10b2374c7;  */

void FUN_10b2374b4(void)

{
  FUN_10b23754c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2374c8; end: 10b2374cb;  */

void FUN_10b2374c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9c80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2374cc; end: 10b2374df;  */

void FUN_10b2374cc(void)

{
  FUN_10b23753c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2374e0; end: 10b23753b;  */

void FUN_10b2374e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x2d0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x290);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x260);
  if (*(char *)(param_1 + 600) == '\x01') {
    func_0x0001052b5d04(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (param_1 + 0x18);
    return;
  }
  return;
}



/* Entry: 10b23753c; end: 10b23754b;  */

void FUN_10b23753c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23754c; end: 10b2375b3;  */

long FUN_10b23754c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9c60);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b2375b4();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x0001052b5e30(param_1 + 0x18);
  func_0x0001052b5e30();
  return param_1;
}



/* Entry: 10b2375b4; end: 10b23765f;  */

void FUN_10b2375b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b23b240();
  func_0x00010b23b2b8();
  func_0x0001052b5da8();
  func_0x0001052b5e30(auStack_40);
  func_0x00010b23ae5c();
  lVar1 = lStack_30;
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x278);
  __ZNSt13exception_ptraSERKS_(lStack_30 + 0x2b8,param_2);
  lVar2 = *(long *)(lStack_30 + 0x2c0);
  *(undefined8 *)(lStack_30 + 0x2c0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x278);
  if (lVar2 == 0) {
    func_0x00010b23b558();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b2b0();
  return;
}



/* Entry: 10b237660; end: 10b23768b;  */

undefined8 * FUN_10b237660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9cd0;
  FUN_10b237470(param_1 + 1);
  return param_1;
}



/* Entry: 10b23768c; end: 10b23769f;  */

void FUN_10b23768c(void)

{
  FUN_10b237660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2376a0; end: 10b2376e3;  */

void FUN_10b2376a0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b23ac58();
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b2372f0(param_1 + 8);
  func_0x00010b23aef8();
  return;
}



/* Entry: 10b2376e4; end: 10b2377bf;  */

void FUN_10b2376e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x00010b23b240();
  func_0x00010b23b2b8();
  func_0x0001052b5da8();
  func_0x0001052b5e30(auStack_50);
  func_0x00010b23ae5c();
  lVar1 = lStack_40;
  __ZNSt3__15mutex4lockEv(lStack_40 + 0x278);
  lVar2 = lStack_40;
  if (*(char *)(lStack_40 + 0x240) == '\x01') {
    func_0x000107c27b9c(lStack_40,param_2);
    FUN_10b1220e4(lVar2 + 0x18,param_2 + 0x18);
  }
  else {
    func_0x0001052b5fcc(lStack_40,param_2);
    *(undefined1 *)(lVar2 + 0x240) = 1;
  }
  lVar2 = *(long *)(lStack_40 + 0x2c0);
  *(undefined8 *)(lStack_40 + 0x2c0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x278);
  if (lVar2 == 0) {
    func_0x00010b23b558();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b2b0();
  return;
}



/* Entry: 10b2377c0; end: 10b2377eb;  */

long * FUN_10b2377c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  return param_1;
}



/* Entry: 10b2377ec; end: 10b237913;  */

void FUN_10b2377ec(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010b23ae64();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[7] = 0;
  param_2[8] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 9,param_2 + 9);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x69);
  *(undefined8 *)(unaff_x19 + 0x71) = *(undefined8 *)(unaff_x20 + 0x71);
  *(undefined8 *)(unaff_x19 + 0x69) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x20 + 0x108);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  return;
}



/* Entry: 10b237914; end: 10b237e27;  */

void FUN_10b237914(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_828;
  long lStack_820;
  undefined8 uStack_818;
  long lStack_810;
  undefined1 auStack_808 [576];
  undefined1 auStack_5c8 [32];
  undefined1 auStack_5a8 [32];
  undefined1 auStack_588 [56];
  undefined1 uStack_550;
  undefined1 uStack_548;
  undefined1 auStack_540 [64];
  undefined1 uStack_500;
  undefined1 auStack_450 [24];
  undefined1 uStack_438;
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [31];
  undefined1 uStack_3d9;
  undefined1 auStack_3d8 [24];
  undefined1 uStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined1 uStack_3a0;
  undefined1 auStack_398 [232];
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [552];
  long lStack_68;
  long lStack_60;
  
  uVar3 = param_1[0x26];
  uStack_828 = param_2;
  lStack_820 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_1[6];
  uStack_818 = param_2;
  lStack_810 = param_3;
  FUN_10b2337c0(&lStack_68,&uStack_818);
  if (lStack_68 == lStack_60) {
    FUN_10b2355d0(auStack_5a8,*param_1,param_1[2],lVar4 + 0x58);
    FUN_10b235d88(auStack_290,auStack_5a8);
    func_0x000107c27b9c(param_1[4],auStack_290);
    func_0x00010b23b564();
    uVar5 = param_1[0xc];
    puVar1 = param_1 + 0xd;
    func_0x00010563be04(puVar1);
    func_0x00010b23ad78(lVar4,param_1 + 7,param_1 + 9,uVar5,puVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_5c8,auStack_5a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2a8,param_1[4])
    ;
    auStack_588[0] = 0;
    uStack_550 = 0;
    auStack_450[0] = 0;
    uStack_438 = 0;
    auStack_398[0] = 0;
    uStack_2b0 = 0;
    auStack_540[0] = 0;
    uStack_500 = 0;
    auStack_3b8[0] = 0;
    uStack_3a0 = 0;
    auStack_3d8[0] = 0;
    uStack_3c0 = 0;
    func_0x0001052b4adc(auStack_290,auStack_2a8,auStack_588,auStack_450,0,0,1,
                        *(undefined4 *)param_1[0x12],0);
    func_0x0001052b6588(auStack_808,auStack_5c8,auStack_290);
    func_0x0001052b5d04(auStack_290);
    func_0x000107c279a4(auStack_3d8);
    func_0x00010b23b52c();
    func_0x0001052b4f6c(auStack_540);
    func_0x00010b23b56c();
    func_0x0001052b4fb8(auStack_450);
    func_0x0001052b41f8(auStack_588);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5c8);
    puVar2 = auStack_5a8;
  }
  else {
    FUN_10b23cc60(auStack_398,lStack_68,*(undefined4 *)(param_1[2] + 0x94),&uStack_3d9);
    FUN_10b23ccb8(auStack_290,auStack_398,*(undefined4 *)(param_1[2] + 0x9c));
    FUN_10b23cd2c(auStack_2a8,auStack_290,*(undefined4 *)param_1[0x18],*(undefined4 *)param_1[0x1a])
    ;
    func_0x00010b23b564();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_398);
    auStack_398[0] = 0;
    uStack_2b0 = 0;
    auStack_3b8[0] = 0;
    uStack_3a0 = 0;
    FUN_10b233924(param_1 + 7,auStack_398,auStack_3b8,*(undefined8 *)param_1[0x1e]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_3f8,auStack_2a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_410,param_1[4])
    ;
    func_0x0001052b4c14(auStack_450,param_1[0x14]);
    FUN_10b124224(auStack_3d8,param_1[0x10]);
    FUN_10b124374(auStack_540,auStack_398);
    FUN_10b1244f0(auStack_588,param_1[0x24]);
    uStack_548 = 1;
    func_0x000105674f6c(auStack_5a8,auStack_3b8);
    func_0x000107c279a0(auStack_5c8,param_1[0x16]);
    func_0x00010b23afac(lStack_60 - lStack_68);
    func_0x00010b23abf8(auStack_290,auStack_410,auStack_450,auStack_3d8);
    func_0x0001052b6588(auStack_808,auStack_3f8,auStack_290);
    func_0x0001052b5d04(auStack_290);
    func_0x000107c279a4(auStack_5c8);
    func_0x0001052b4f4c(auStack_5a8);
    func_0x0001052b4f6c(auStack_588);
    func_0x0001052b4218(auStack_540);
    func_0x0001052b4fb8(auStack_3d8);
    func_0x0001052b41f8(auStack_450);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
    func_0x0001053a4504(param_1 + 0xd);
    func_0x000107c28148(param_1 + 0xd);
    func_0x00010b23b404();
    uVar5 = param_1[0xc];
    puVar1 = param_1 + 0xd;
    func_0x00010563be04(puVar1);
    func_0x00010b23ad78(lVar4,param_1 + 7,param_1 + 9,uVar5,puVar1);
    func_0x00010b23b52c();
    func_0x00010b23b56c();
    puVar2 = auStack_2a8;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x000107c278a8(&lStack_68);
  FUN_10b2376e4(uVar3,auStack_808);
  func_0x00010b23b4c4();
  func_0x00010b23714c(&uStack_818);
  func_0x00010b23714c(&uStack_828);
  return;
}



/* Entry: 10b237e28; end: 10b237e7b;  */

undefined8 FUN_10b237e28(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b2377c0(param_1 + 0x130);
  FUN_10b23a65c(param_1 + 0x120);
  func_0x00010b23a608(param_1 + 0x110);
  func_0x0001078a52b0(param_1 + 0x100);
  FUN_10b23a824(param_1 + 0xf0);
  FUN_10b23a7d4(param_1 + 0xe0);
  FUN_10b23a784(param_1 + 0xd0);
  FUN_10b23a784(param_1 + 0xc0);
  func_0x00010b23a5e4(param_1 + 0xb0);
  FUN_10b23a53c(param_1 + 0xa0);
  FUN_10b23a6e0(param_1 + 0x90);
  FUN_10b23a590(param_1 + 0x80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  FUN_10b22e7d4(param_1 + 0x38);
  func_0x00010724c894(param_1 + 0x20);
  FUN_10b23a734(param_1 + 0x10);
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b237e7c; end: 10b237e8f;  */

void FUN_10b237e7c(void)

{
  func_0x00010b237e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b237e90; end: 10b237ed3;  */

void FUN_10b237e90(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b23ac58();
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b237914(param_1 + 8);
  func_0x00010b23aef0();
  return;
}



/* Entry: 10b237ed4; end: 10b237f63;  */

void FUN_10b237ed4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 2) {
    FUN_10b4861fc(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 2;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b237f28();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10b237f64; end: 10b237f9b;  */

void FUN_10b237f64(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x00010b23aef0();
  return;
}



/* Entry: 10b237f9c; end: 10b23810f;  */

void FUN_10b237f9c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  lVar1 = param_2[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_03 != 0);
  }
  lVar1 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_04 != 0);
  }
  lVar1 = param_2[0x13];
  uVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_05 != 0);
  }
  lVar1 = param_2[0x15];
  uVar2 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_06 != 0);
  }
  lVar1 = param_2[0x17];
  uVar2 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_07 != 0);
  }
  return;
}



/* Entry: 10b238110; end: 10b2383af;  */

void FUN_10b238110(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lVar3;
  long lVar4;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 *apuStack_70 [2];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long alStack_40 [2];
  
  lVar3 = param_1[0x18];
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = *param_1;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_10b2356cc(alStack_40,&uStack_b0);
  if (alStack_40[0] == 0) {
    func_0x000107c278b8(&lStack_60,&UNK_10f73af15);
    FUN_10b231a1c();
    func_0x00010b23b270();
    *(undefined4 *)param_1[8] = 3;
    lStack_98 = 0;
    uStack_90 = 0;
    lStack_a0 = 0;
  }
  else {
    lVar1 = param_1[10];
    if (*(char *)(lVar1 + 0xa8) == '\x01') {
      FUN_10b485eb8();
    }
    else {
      func_0x00010b230284();
      *(undefined1 *)(lVar1 + 0xa8) = 1;
    }
    FUN_10b23182c(apuStack_70,lVar4);
    if (apuStack_70[0] == (undefined8 *)0x0) {
      func_0x000107c278b8(&lStack_60,&UNK_10f73ad6b);
      FUN_10b231a1c();
      func_0x00010b23b270();
      *(undefined4 *)param_1[8] = 2;
      *(undefined4 *)(param_1[0xc] + 0x74) = 10;
      *(undefined4 *)(param_1[0xc] + 0x94) = *(undefined4 *)(alStack_40[0] + 0x94);
      lStack_98 = 0;
      uStack_90 = 0;
      lStack_a0 = 0;
    }
    else {
      func_0x00010b23b490(&lStack_60,*(undefined8 *)(lVar4 + 0x38),alStack_40[0],*apuStack_70[0],
                          param_1 + 0xc,param_1[0x14],param_1[0x16]);
      if (lStack_60 == lStack_58) {
        func_0x000107c278b8(auStack_88,&UNK_10f73af20);
        FUN_10b231a1c(auStack_88);
        func_0x00010b23b1e8();
        *(undefined4 *)param_1[8] = 4;
        plVar2 = &lStack_a0;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1[0x10],*(ulong *)(alStack_40[0] + 0x60) & 0xfffffffffffffffc);
        lStack_98 = lStack_58;
        lStack_a0 = lStack_60;
        uStack_90 = uStack_50;
        plVar2 = &lStack_60;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      func_0x000107c278a8(&lStack_60);
    }
    func_0x00010b239d68(apuStack_70);
  }
  FUN_10b22dd70(alStack_40);
  FUN_10b238638(lVar3,&lStack_a0);
  func_0x000107c278a8(&lStack_a0);
  func_0x00010b23b02c();
  func_0x00010b23b500();
  return;
}



/* Entry: 10b2383b0; end: 10b238427;  */

long FUN_10b2383b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  FUN_10b23a784(param_1 + 0xb0);
  FUN_10b23a784(param_1 + 0xa0);
  FUN_10b23a5e4(param_1 + 0x90);
  func_0x00010724c894(param_1 + 0x80);
  FUN_10b23a53c(param_1 + 0x70);
  FUN_10b22e7d4(param_1 + 0x60);
  FUN_10b23a734(param_1 + 0x50);
  FUN_10b23a6e0(param_1 + 0x40);
  FUN_10b23a590(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  FUN_10b152714(param_1 + 8);
  return param_1;
}



/* Entry: 10b238428; end: 10b23842b;  */

long FUN_10b238428(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9db8);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b238530();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x00010b23714c(param_1 + 0x18);
  func_0x00010b23714c();
  return param_1;
}



/* Entry: 10b23842c; end: 10b23843f;  */

void FUN_10b23842c(void)

{
  FUN_10b2384c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b238440; end: 10b238443;  */

long FUN_10b238440(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9db8);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b238530();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x00010b23714c(param_1 + 0x18);
  func_0x00010b23714c();
  return param_1;
}



/* Entry: 10b238444; end: 10b238457;  */

void FUN_10b238444(void)

{
  FUN_10b2384c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b238458; end: 10b23845b;  */

void FUN_10b238458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b23845c; end: 10b23846f;  */

void FUN_10b23845c(void)

{
  FUN_10b2384b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b238470; end: 10b2384b7;  */

void FUN_10b238470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010b23abe0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0001000e30f4();
  }
  return;
}



/* Entry: 10b2384b8; end: 10b2384c7;  */

void FUN_10b2384b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2384c8; end: 10b23852f;  */

long FUN_10b2384c8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b23b368(&PTR_FUN_110cc9db8);
  if (extraout_x8 != 0) {
    func_0x00010b23ac3c();
    func_0x00010b23b3dc();
    FUN_10b238530();
    func_0x00010b23af10();
    func_0x00010b23b014();
    func_0x00010b23b550();
  }
  func_0x00010b23714c(param_1 + 0x18);
  func_0x00010b23714c();
  return param_1;
}



/* Entry: 10b238530; end: 10b2385b3;  */

void FUN_10b238530(void)

{
  long unaff_x19;
  
  func_0x00010b23ad0c();
  func_0x00010b23b004();
  FUN_10b2370e0();
  func_0x00010b23b2b8();
  FUN_10b237114();
  func_0x00010b23b4f0();
  func_0x00010b23aef0();
  func_0x00010b23b2c4();
  func_0x00010b23b428();
  func_0x00010b23ac6c();
  if (unaff_x19 == 0) {
    func_0x00010b23b2a8();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b01c();
  return;
}



/* Entry: 10b2385b4; end: 10b2385df;  */

undefined8 * FUN_10b2385b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9e28;
  FUN_10b2383b0(param_1 + 1);
  return param_1;
}



/* Entry: 10b2385e0; end: 10b2385f3;  */

void FUN_10b2385e0(void)

{
  FUN_10b2385b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2385f4; end: 10b238637;  */

void FUN_10b2385f4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b23ac58();
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b238110(param_1 + 8);
  func_0x00010b23b03c();
  return;
}



/* Entry: 10b238638; end: 10b2386ff;  */

void FUN_10b238638(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b23ad0c();
  func_0x00010b23b004();
  FUN_10b2370e0();
  func_0x00010b23b2b8();
  FUN_10b237114();
  func_0x00010b23b4f0();
  func_0x00010b23aef0();
  func_0x00010b23b2c4();
  if (*(char *)(uStack_30 + 0x18) == '\x01') {
    func_0x000107c2797c(uStack_30);
  }
  else {
    func_0x00010873d780(uStack_30);
  }
  func_0x00010b23ac6c();
  if (unaff_x19 == 0) {
    func_0x00010b23b2a8();
  }
  else {
    func_0x00010b23b2cc();
    func_0x00010b23ac7c();
    func_0x00010b23ab44();
  }
  func_0x00010b23b01c();
  return;
}



/* Entry: 10b238700; end: 10b238793;  */

void FUN_10b238700(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_2[5] = 0;
  param_2[6] = 0;
  lVar1 = param_2[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10b238794; end: 10b238b0f;  */

void FUN_10b238794(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_d8 [40];
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351e4();
    } while (extraout_w10_00 != 0);
  }
  uStack_140 = param_2;
  lStack_138 = param_3;
  FUN_10b2356cc(&lStack_60,&uStack_140);
  if (lStack_60 == 0) {
    plVar8 = &lStack_130;
  }
  else {
    if (((*(byte *)(*(long *)(param_1 + 0x28) + 0x10) & 1) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), *(int *)(lVar9 + 0x1c) == 1)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      ppuVar1 = &PTR_PTR_113373c90;
      if (*(undefined ***)(lVar9 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar9 + 0x30);
      }
      puVar12 = ppuVar1[3];
      for (lVar14 = (long)*(int *)(ppuVar1 + 2) << 2; lVar14 != 0; lVar14 = lVar14 + -4) {
        FUN_10b238bbc(&uStack_78,puVar12);
        puVar12 = puVar12 + 4;
      }
      func_0x000107c28bb4(&puStack_120,&uStack_78);
      ppuVar1 = &PTR_PTR_113373c90;
      if (*(undefined ***)(lVar9 + 0x30) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar9 + 0x30);
      }
      uStack_e8 = *(undefined4 *)((long)ppuVar1 + 0x24);
      puStack_f8 = (ulong *)uStack_118;
      puStack_100 = puStack_120;
      puStack_f0 = puStack_110;
      uStack_118 = 0;
      puStack_110 = (ulong *)0x0;
      puStack_120 = (ulong *)0x0;
      func_0x0001052ac6b0(auStack_d8,&puStack_100);
      uVar4 = *(int *)(lVar9 + 0x60) - 2;
      uVar10 = (ulong)uVar4 | 0x100000000;
      if (2 < uVar4) {
        uVar10 = 0x100000003;
      }
      func_0x0001052b70b0(&puStack_b0,auStack_d8,*(undefined1 *)(lVar9 + 0x58),uVar10);
      FUN_10b2316e0(*(undefined8 *)(param_1 + 0x38),&puStack_b0);
      func_0x0001052ac664(&puStack_b0);
      func_0x0001052ac664(auStack_d8);
      func_0x000107c27a18(&puStack_100);
      func_0x000107c27a18(&puStack_120);
      puStack_100 = (ulong *)0x0;
      puStack_f8 = (ulong *)0x0;
      uVar10 = *(ulong *)(lVar9 + 0x18);
      puStack_f0 = (ulong *)0x0;
      puVar2 = (ulong *)(lVar9 + 0x18);
      if ((uVar10 & 1) != 0) {
        puVar2 = (ulong *)(uVar10 + 7);
      }
      for (lVar9 = (long)*(int *)(lVar9 + 0x20) << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
        uVar10 = (ulong)*(uint *)(*puVar2 + 0x10);
        uVar3 = (ulong)*(uint *)(*puVar2 + 0x14);
        if (puStack_f8 < puStack_f0) {
          puVar7 = puStack_f8 + 2;
          *puStack_f8 = uVar10;
          puStack_f8[1] = uVar3;
        }
        else {
          ppuVar6 = &puStack_100;
          func_0x0001052b52ec(ppuVar6,((long)puStack_f8 - (long)puStack_100 >> 4) + 1);
          func_0x0001052b5144(&puStack_b0,ppuVar6,(long)puStack_f8 - (long)puStack_100 >> 4,
                              &puStack_f0);
          *puStack_a0 = uVar10;
          puStack_a0[1] = uVar3;
          puVar13 = (ulong *)((long)puStack_a8 - ((long)puStack_f8 - (long)puStack_100));
          puStack_a0 = puStack_a0 + 2;
          _memcpy(puVar13);
          puVar7 = puStack_a0;
          puVar5 = puStack_f0;
          puStack_f0 = puStack_98;
          puStack_f8 = puStack_a0;
          puStack_a0 = puStack_100;
          puStack_98 = puVar5;
          puStack_b0 = puStack_100;
          puStack_a8 = puStack_100;
          puStack_100 = puVar13;
          func_0x0001052b51cc(&puStack_b0);
        }
        puVar2 = puVar2 + 1;
        puStack_f8 = puVar7;
      }
      lVar9 = *(long *)(param_1 + 0x48);
      if (*(char *)(lVar9 + 0x18) == '\x01') {
        FUN_10b12e7a8(lVar9,&puStack_100);
      }
      else {
        FUN_10b124280(lVar9,&puStack_100);
        *(undefined1 *)(lVar9 + 0x18) = 1;
      }
      func_0x0001052b4fd8(&puStack_100);
      func_0x000107c27a18(&uStack_78);
    }
    uStack_128 = uStack_58;
    plVar8 = &lStack_60;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  FUN_10b22dd70(&lStack_60);
  FUN_10b22bb90(uVar11,&lStack_130);
  func_0x00010b23afc8();
  func_0x00010b23b524();
  func_0x00010b23b02c();
  return;
}



/* Entry: 10b238b10; end: 10b238b63;  */

long FUN_10b238b10(long param_1)

{
  FUN_10b22bdc0(param_1 + 0x58);
  FUN_10b23a590(param_1 + 0x48);
  FUN_10b23a53c(param_1 + 0x38);
  FUN_10b22e658(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b238b64; end: 10b238b77;  */

void FUN_10b238b64(void)

{
  func_0x00010b238b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b238b78; end: 10b238bbb;  */

void FUN_10b238b78(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b23ac58();
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b238794(param_1 + 8);
  func_0x00010b23b03c();
  return;
}



/* Entry: 10b238bbc; end: 10b238bfb;  */

undefined4 * FUN_10b238bbc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_x19;
  
  func_0x00010b23ad4c();
  if (param_1 < *(undefined4 **)(unaff_x19 + 4)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_10b238bfc();
  }
  *(undefined4 **)(unaff_x19 + 2) = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b238bfc; end: 10b238c87;  */

long FUN_10b238bfc(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  func_0x00010b23ae64();
  func_0x000107c27eb0();
  func_0x000107c27ea4(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 2,unaff_x19 + 2);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x000107c27ea0();
  lVar1 = unaff_x19[1];
  func_0x000107c27ea8(auStack_48);
  return lVar1;
}



/* Entry: 10b238c88; end: 10b238cbf;  */

void FUN_10b238c88(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b237f28();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10b238cc0; end: 10b238cf7;  */

void FUN_10b238cc0(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b2391ec(auStack_30);
  func_0x00010b23afec();
  func_0x00010b23ad2c();
  return;
}



/* Entry: 10b238cf8; end: 10b2390af;  */

void FUN_10b238cf8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uStack_380;
  long lStack_378;
  ulong auStack_370 [3];
  undefined1 uStack_358;
  undefined1 auStack_350 [232];
  undefined1 uStack_268;
  undefined1 auStack_260 [96];
  undefined1 uStack_200;
  long alStack_1f8 [2];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 auStack_1a8 [2];
  long alStack_198 [2];
  undefined1 auStack_188 [168];
  uint uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [48];
  undefined8 uStack_58;
  
  func_0x000107c351dc();
  puVar5 = *(undefined8 **)*param_1;
  uVar3 = *puVar5;
  uStack_58 = extraout_x8;
  FUN_10b2317e0(alStack_198);
  FUN_10b231cdc(auStack_1a8);
  func_0x00010b231d14(auStack_1b8);
  FUN_10b231d7c(auStack_1c8);
  FUN_10b231ddc(auStack_1d8);
  func_0x00010b231d48(auStack_1e8);
  FUN_10b2393a4(auStack_350,param_2);
  uVar6 = puVar5[1];
  FUN_10b2359e4(auStack_88,param_2,param_2[6],(long)(param_2[7] - param_2[6]) >> 2);
  auStack_370[0] = 0;
  auStack_370[1] = 0;
  auStack_260[0] = 0;
  uStack_200 = 0;
  FUN_10b231eac(auStack_188,uVar3,auStack_350,uVar6,auStack_88,0,alStack_198,auStack_1a8,auStack_1b8
                ,auStack_1c8,auStack_1d8,auStack_1e8,auStack_370,auStack_260);
  FUN_10b2356cc(alStack_1f8,auStack_188);
  FUN_10b22b928(auStack_188);
  func_0x00010b121ac0(auStack_260);
  FUN_10b23a65c(auStack_370);
  func_0x00010b23ac98(auStack_88);
  FUN_10b152714(auStack_350);
  if (alStack_1f8[0] == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    bVar1 = (*(byte *)(alStack_198[0] + 0x10) & 1) != 0;
    if (bVar1) {
      uVar7 = *(uint *)(*(long *)(alStack_198[0] + 0x60) + 0xcc);
      uVar4 = uVar7 & 0xffffff00;
      uVar7 = uVar7 & 0xff;
    }
    else {
      uVar7 = 0;
      uVar4 = 0;
    }
    auStack_350[0] = 0;
    uStack_268 = 0;
    auStack_370[0] = auStack_370[0] & 0xffffffffffffff00;
    uStack_358 = 0;
    in_ZR = *(int *)((long)param_2 + 0x2c) == 3;
    if ((bool)in_ZR) {
      uVar2 = (ulong)*(uint *)(param_2[4] + 0x54) | 0x100000000;
    }
    else {
      uVar2 = 0;
    }
    FUN_10b233924(alStack_198,auStack_350,auStack_370,uVar2);
    func_0x00010b230284(auStack_188,alStack_1f8[0]);
    uStack_e0 = uVar4 | uVar7;
    uStack_dc = bVar1;
    FUN_10b239424(&uStack_380,auStack_188);
    FUN_10b4855b8(auStack_188);
    param_2 = (undefined8 *)0x160;
    __Znwm();
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_110cc9ec8;
    uStack_98 = uStack_380;
    lStack_90 = lStack_378;
    if (lStack_378 != 0) {
      do {
        func_0x000107c351e4();
      } while (extraout_w10 != 0);
    }
    func_0x0001052b4cd8(auStack_188,auStack_350);
    FUN_10b239288(param_2 + 3,uStack_380,lStack_378,auStack_1a8[0],auStack_188);
    func_0x0001052b4218(auStack_188);
    func_0x0001052b41d0(&uStack_98);
    *unaff_x19 = (long)(param_2 + 3);
    unaff_x19[1] = (long)param_2;
    func_0x00010b167f44(&uStack_380);
    func_0x0001052b4f4c(auStack_370);
    func_0x0001052b4218(auStack_350);
  }
  FUN_10b22dd70(alStack_1f8);
  FUN_10b23a5e4(auStack_1e8);
  func_0x00010b23a608(auStack_1d8);
  func_0x0001078a52b0(auStack_1c8);
  FUN_10b23a590(auStack_1b8);
  FUN_10b23a53c(auStack_1a8);
  FUN_10b22e7d4(alStack_198);
  func_0x000107c351d4(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001052b4218(auStack_188);
    func_0x0001052b41d0(&uStack_98);
    __ZNSt3__119__shared_weak_countD2Ev(param_2);
    __ZdlPv();
    func_0x00010b167f44(&uStack_380);
    func_0x0001052b4f4c(auStack_370);
    func_0x0001052b4218(auStack_350);
    FUN_10b22dd70(alStack_1f8);
    FUN_10b23a5e4(auStack_1e8);
    do {
      func_0x00010b23a608(auStack_1d8);
      func_0x0001078a52b0(auStack_1c8);
      FUN_10b23a590(auStack_1b8);
      FUN_10b23a53c(auStack_1a8);
      FUN_10b22e7d4(alStack_198);
      func_0x00010b23acc0();
    } while( true );
  }
  return;
}



/* Entry: 10b2390b0; end: 10b2390e7;  */

void FUN_10b2390b0(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b23953c(auStack_30);
  func_0x00010b23afec();
  func_0x00010b23ad2c();
  return;
}



/* Entry: 10b2390e8; end: 10b23911f;  */

void FUN_10b2390e8(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b2395b8(auStack_30);
  func_0x00010b23afec();
  func_0x00010b23ad2c();
  return;
}



/* Entry: 10b239120; end: 10b2391eb;  */

void FUN_10b239120(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_180 [232];
  undefined1 uStack_98;
  undefined1 auStack_90 [56];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x160;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc9ec8;
  uStack_50 = *param_2;
  uStack_48 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  auStack_90[0] = 0;
  uStack_58 = 0;
  auStack_180[0] = 0;
  uStack_98 = 0;
  FUN_10b239288(puVar1 + 3,uStack_50,uStack_48,auStack_90,auStack_180);
  func_0x0001052b4218(auStack_180);
  func_0x0001052b41f8(auStack_90);
  func_0x0001052b41d0(&uStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10b2391ec; end: 10b23925f;  */

void FUN_10b2391ec(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x21;
  
  func_0x00010b23ab54();
  func_0x00010b23ada4();
  func_0x00010b23ab90();
  puVar1 = (undefined8 *)(unaff_x21 + 0x20);
  func_0x00010b23b164();
  *(undefined4 *)(unaff_x21 + 0xd0) = 0;
  *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_110cc92a8;
  func_0x000107c351d8();
  func_0x00010b16cc9c();
  func_0x000107c351d4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23acb4();
  func_0x00010b23af00();
  func_0x00010b23acc0();
  *puVar1 = &PTR_FUN_110cc9ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b239260; end: 10b239263;  */

void FUN_10b239260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b239264; end: 10b239277;  */

void FUN_10b239264(void)

{
  FUN_10b239398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239278; end: 10b239287;  */

void FUN_10b239278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b239280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b239288; end: 10b2392fb;  */

undefined8 *
FUN_10b239288(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110cc9f18;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_3 != 0) {
    do {
      func_0x000107c351e4();
    } while (extraout_w10 != 0);
  }
  FUN_10b124118(param_1 + 3,param_4);
  func_0x0001052b4cd8(param_1 + 0xb,param_5);
  return param_1;
}



/* Entry: 10b2392fc; end: 10b2392ff;  */

undefined8 * FUN_10b2392fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9f18;
  func_0x0001052b4218(param_1 + 0xb);
  func_0x0001052b41f8(param_1 + 3);
  func_0x0001052b41d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b239300; end: 10b239313;  */

void FUN_10b239300(void)

{
  FUN_10b239354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239314; end: 10b239353;  */

void FUN_10b239314(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351e4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b239354; end: 10b239397;  */

undefined8 * FUN_10b239354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9f18;
  func_0x0001052b4218(param_1 + 0xb);
  func_0x0001052b41f8(param_1 + 3);
  func_0x0001052b41d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b239398; end: 10b2393a3;  */

void FUN_10b239398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2393a4; end: 10b239423;  */

void FUN_10b2393a4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b23ab54();
  uStack_38 = extraout_x8;
  func_0x000107c351fc();
  FUN_10b2394a8();
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110cca468;
  puStack_40[1] = 0;
  FUN_10b152160(puStack_40 + 3);
  func_0x000107c351d8();
  func_0x00010b23952c();
  func_0x000107c351d4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23acb4();
    func_0x00010b23952c(auStack_50);
    func_0x00010b23acc0();
    func_0x00010b23ab54();
    func_0x00010b23ada4();
    func_0x00010b23ab90();
    func_0x00010b230284(puStack_40 + 4);
    puStack_40[0x19] = *(undefined8 *)(unaff_x20 + 0xa8);
    *(undefined4 *)(puStack_40 + 0x1a) = 1;
    puStack_40[3] = &PTR_FUN_110cc92a8;
    func_0x000107c351d8();
    func_0x00010b16cc9c();
    func_0x000107c351d4(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b23acb4();
      func_0x00010b23af00();
      func_0x00010b23acc0();
      func_0x000107c35208();
      FUN_10b2394c8();
      func_0x000107c35204();
      return;
    }
  }
  return;
}



/* Entry: 10b239424; end: 10b2394a7;  */

void FUN_10b239424(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b23ab54();
  func_0x00010b23ada4();
  func_0x00010b23ab90();
  func_0x00010b230284(unaff_x21 + 0x20);
  *(undefined8 *)(unaff_x21 + 200) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined4 *)(unaff_x21 + 0xd0) = 1;
  *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_110cc92a8;
  func_0x000107c351d8();
  func_0x00010b16cc9c();
  func_0x000107c351d4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23acb4();
  func_0x00010b23af00();
  func_0x00010b23acc0();
  func_0x000107c35208();
  FUN_10b2394c8();
  func_0x000107c35204();
  return;
}



/* Entry: 10b2394a8; end: 10b2394c7;  */

void FUN_10b2394a8(void)

{
  func_0x000107c35208();
  FUN_10b2394c8();
  func_0x000107c35204();
  return;
}



/* Entry: 10b2394c8; end: 10b2394f7;  */

void FUN_10b2394c8(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cca468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2394f8; end: 10b2394fb;  */

void FUN_10b2394f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2394fc; end: 10b23950f;  */

void FUN_10b2394fc(void)

{
  func_0x00010b23951c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239510; end: 10b23953b;  */

long FUN_10b239510(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  FUN_10b4863a8(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b23953c; end: 10b2395b7;  */

code ****** FUN_10b23953c(undefined8 param_1,undefined8 param_2,code *****param_3)

{
  code ****ppppcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  code ******ppppppcVar4;
  code ****ppppcVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code ****ppppcVar10;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  code ******extraout_x8_05;
  code ****ppppcVar11;
  code *****pppppcVar12;
  int extraout_w11;
  long unaff_x20;
  code ****ppppcVar13;
  long unaff_x21;
  code *****unaff_x22;
  code *****pppppcVar14;
  code *****pppppcStack_390;
  undefined1 uStack_388;
  code ****ppppcStack_380;
  code *****pppppcStack_370;
  code *****pppppcStack_368;
  undefined8 *****pppppuStack_360;
  code *pcStack_358;
  code ****appppcStack_350 [5];
  undefined8 uStack_328;
  code *****pppppcStack_320;
  code *****pppppcStack_318;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  code ****appppcStack_300 [5];
  undefined8 uStack_2d8;
  code *****pppppcStack_2d0;
  code *****pppppcStack_2c8;
  undefined1 ****ppppuStack_2c0;
  code *pcStack_2b8;
  undefined1 auStack_2b0 [16];
  code ****appppcStack_2a0 [3];
  code ****appppcStack_288 [2];
  undefined1 auStack_274 [4];
  code ****ppppcStack_270;
  code ****ppppcStack_268;
  code ****ppppcStack_250;
  code ***pppcStack_248;
  uint uStack_1a8;
  undefined1 uStack_1a4;
  code *****apppppcStack_1a0 [2];
  code ****ppppcStack_190;
  code ****appppcStack_188 [6];
  undefined8 uStack_158;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  code ****appppcStack_f0 [5];
  undefined8 uStack_c8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_38;
  
  func_0x00010b23ab54();
  uStack_38 = extraout_x8;
  func_0x00010b23ada4();
  func_0x00010b23ab90();
  ppppppcVar4 = (code ******)(unaff_x21 + 0x20);
  FUN_10b2289e4(ppppppcVar4);
  *(undefined4 *)(unaff_x21 + 0xd0) = 2;
  *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_110cc92a8;
  func_0x000107c351d8();
  func_0x00010b16cc9c();
  func_0x000107c351d4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23acb4();
    func_0x00010b23af00();
    func_0x00010b23acc0();
    pcStack_58 = FUN_10b2395b8;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b23ab54();
    uStack_88 = extraout_x8_00;
    func_0x00010b23ada4();
    func_0x00010b23ab90();
    ppppppcVar4 = (code ******)(unaff_x21 + 0x20);
    func_0x00010b23b164(ppppppcVar4);
    *(undefined4 *)(unaff_x21 + 0xd0) = 3;
    *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_110cc92a8;
    func_0x000107c351d8();
    func_0x00010b16cc9c();
    func_0x000107c351d4(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b23acb4();
      func_0x00010b23af00();
      func_0x00010b23acc0();
      ppppppcVar4 = (code ******)appppcStack_f0;
      pcStack_a8 = FUN_10b239630;
      ppuStack_b0 = &puStack_60;
      func_0x000107c351dc();
      uStack_c8 = extraout_x8_01;
      FUN_10b2391ec();
      func_0x00010b23af4c();
      func_0x00010b23ad84();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x000107c351d4(uStack_c8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010b23ae98();
        func_0x00010b23ad2c();
        func_0x00010b23acc0();
        pcStack_f8 = FUN_10b239690;
        pppuStack_100 = &ppuStack_b0;
        func_0x000107c351dc();
        uStack_158 = extraout_x8_02;
        func_0x00010b23b184();
        FUN_10b2393a4(apppppcStack_1a0);
        if (*(int *)((long)apppppcStack_1a0[0] + 0x2c) == 3) {
          param_3 = *(code ******)(unaff_x20 + 0x30);
          FUN_10b2359e4(&ppppcStack_190,apppppcStack_1a0[0],param_3,
                        *(long *)(unaff_x20 + 0x38) - (long)param_3 >> 2);
          ppppcStack_250 = (code ****)0x0;
          pppcStack_248 = (code ***)0x0;
          unaff_x22 = &ppppcStack_250;
          ppppppcVar9 = (code ******)&ppppcStack_250;
          FUN_10b22f4d8(&ppppcStack_270,apppppcStack_1a0);
          func_0x00010b23b208();
          ppppcVar1 = ppppcStack_268;
          for (pppppcVar8 = (code *****)ppppcStack_270; uVar3 = pppppcVar8 == (code *****)ppppcVar1,
              !(bool)uVar3; pppppcVar8 = pppppcVar8 + 1) {
            ppppcVar13 = *pppppcVar8;
            if (((ulong)appppcStack_188[0][1] & 1) == 0) {
              ppppppcVar9 = (code ******)&ppppcStack_190;
              ppppcVar5 = ppppcVar13;
              (*(code *)ppppcStack_190)();
              if (((ulong)ppppcVar5 & 1) != 0) goto LAB_10b239798;
            }
            else {
LAB_10b239798:
              ppppcStack_250 = (code ****)0x0;
              pppcStack_248 = (code ***)0x0;
              ppppppcVar9 = apppppcStack_1a0;
              param_3 = (code *****)auStack_274;
              FUN_10b22ee10(appppcStack_288,ppppcVar13,ppppppcVar9,param_3,&ppppcStack_250);
              func_0x00010b23b208();
              ppppcVar5 = appppcStack_288[0];
              if ((code *****)appppcStack_288[0] != (code *****)0x0) {
                FUN_10b4853dc(&ppppcStack_250,0);
                if (unaff_x22 != (code *****)ppppcVar5) {
                  ppppcVar10 = (code ****)pppcStack_248;
                  if (((ulong)pppcStack_248 & 1) != 0) {
                    ppppcVar10 = *(code *****)((ulong)pppcStack_248 & 0xfffffffffffffffe);
                  }
                  ppppcVar11 = (code ****)ppppcVar5[1];
                  if (((ulong)ppppcVar11 & 1) != 0) {
                    ppppcVar11 = *(code *****)((ulong)ppppcVar11 & 0xfffffffffffffffe);
                  }
                  if (ppppcVar10 == ppppcVar11) {
                    func_0x00010b485ef0(&ppppcStack_250,ppppcVar5);
                  }
                  else {
                    FUN_10b485eb8(&ppppcStack_250,ppppcVar5);
                  }
                }
                uStack_1a8 = *(uint *)(ppppcVar13 + 4);
                uStack_1a4 = 1;
                FUN_10b239424(auStack_2b0,&ppppcStack_250);
                func_0x00010b23af4c();
                ppppppcVar9 = (code ******)appppcStack_2a0;
                FUN_10b239b58(ppppppcVar4);
                func_0x00010b23ae98();
                func_0x00010b23ad2c();
                func_0x00010b23b1f8();
              }
              FUN_10b22dd70(appppcStack_288);
            }
          }
          FUN_10b22bec4(&ppppcStack_270);
          (*(code *)*appppcStack_188[0])(appppcStack_188);
        }
        else {
          uVar3 = *(int *)((long)apppppcStack_1a0[0] + 0x2c) == 2;
          ppppppcVar9 = (code ******)apppppcStack_1a0[0];
          if ((bool)uVar3) {
            func_0x00010b230284(&ppppcStack_250,apppppcStack_1a0[0][4]);
            uStack_1a8 = uStack_1a8 & 0xffffff00;
            uStack_1a4 = 0;
            FUN_10b239424(&ppppcStack_270,&ppppcStack_250);
            appppcStack_188[0] = ppppcStack_268;
            ppppcStack_190 = ppppcStack_270;
            ppppcStack_270 = (code ****)0x0;
            ppppcStack_268 = (code ****)0x0;
            ppppppcVar9 = (code ******)&ppppcStack_190;
            FUN_10b239b58(ppppppcVar4);
            func_0x0001052b41d0(&ppppcStack_190);
            func_0x00010b167f44(&ppppcStack_270);
            func_0x00010b23b1f8();
          }
        }
        ppppppcVar6 = apppppcStack_1a0;
        FUN_10b152714();
        func_0x000107c351d4(uStack_158);
        if ((bool)uVar3) {
          return ppppppcVar6;
        }
        ___stack_chk_fail();
        func_0x0001052b41d0(&ppppcStack_190);
        func_0x00010b167f44(&ppppcStack_270);
        func_0x00010b23b1f8();
        FUN_10b152714(apppppcStack_1a0);
        func_0x0001052b60a4(ppppppcVar4);
        func_0x00010b23acec();
        ppppppcVar7 = (code ******)appppcStack_300;
        pcStack_2b8 = FUN_10b239960;
        pppppcStack_2d0 = (code *****)ppppppcVar6;
        pppppcStack_2c8 = (code *****)ppppppcVar4;
        ppppuStack_2c0 = &pppuStack_100;
        func_0x000107c351dc();
        uStack_2d8 = extraout_x8_03;
        FUN_10b23953c();
        func_0x00010b23af4c();
        func_0x00010b23ad84();
        func_0x00010b23ae98();
        func_0x00010b23ad2c();
        func_0x000107c351d4(uStack_2d8);
        ppppppcVar4 = ppppppcVar7;
        if (!(bool)uVar3) {
          ___stack_chk_fail();
          func_0x00010b23ae98();
          func_0x00010b23ad2c();
          func_0x00010b23acc0();
          ppppppcVar4 = (code ******)appppcStack_350;
          pcStack_308 = FUN_10b2399c0;
          pppppcStack_320 = (code *****)ppppppcVar6;
          pppppcStack_318 = (code *****)ppppppcVar7;
          pppppuStack_310 = &ppppuStack_2c0;
          func_0x000107c351dc();
          uStack_328 = extraout_x8_04;
          FUN_10b2395b8();
          func_0x00010b23af4c();
          func_0x00010b23ad84();
          func_0x00010b23ae98();
          func_0x00010b23ad2c();
          func_0x000107c351d4(uStack_328);
          if (!(bool)uVar3) {
            ___stack_chk_fail();
            ppppppcVar7 = ppppppcVar4;
            func_0x00010b23ae98();
            func_0x00010b23ad2c();
            func_0x00010b23acc0();
            pcStack_358 = FUN_10b239a20;
            ppppcStack_380 = (code ****)unaff_x22;
            pppppcStack_370 = (code *****)ppppppcVar6;
            pppppcStack_368 = (code *****)ppppppcVar4;
            pppppuStack_360 = &pppppuStack_310;
            *ppppppcVar7 = (code *****)0x0;
            ppppppcVar7[1] = (code *****)0x0;
            ppppppcVar7[2] = (code *****)0x0;
            uStack_388 = 0;
            pppppcStack_390 = (code *****)ppppppcVar7;
            if (param_3 != (code *****)0x0) {
              if ((ulong)param_3 >> 0x3c != 0) {
                FUN_10b239ae4();
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
                (*pcVar2)();
              }
              pppppcVar8 = param_3;
              ppppppcVar6 = ppppppcVar9;
              FUN_10b239af8();
              ppppppcVar4 = ppppppcVar9 + (long)param_3 * 2;
              *ppppppcVar7 = pppppcVar8;
              ppppppcVar7[1] = pppppcVar8;
              ppppppcVar7[2] = pppppcVar8 + (long)ppppppcVar6 * 2;
              for (; ppppppcVar9 != ppppppcVar4; ppppppcVar9 = ppppppcVar9 + 2) {
                pppppcVar12 = ppppppcVar9[1];
                pppppcVar14 = *ppppppcVar9;
                pppppcVar8[1] = (code ****)ppppppcVar9[1];
                *pppppcVar8 = (code ****)pppppcVar14;
                if (pppppcVar12 != (code *****)0x0) {
                  do {
                    func_0x00010b23b058();
                    ppppppcVar4 = extraout_x8_05;
                  } while (extraout_w11 != 0);
                }
                pppppcVar8 = pppppcVar8 + 2;
              }
              ppppppcVar7[1] = pppppcVar8;
            }
            uStack_388 = 1;
            func_0x00010b239b2c(&pppppcStack_390);
            return ppppppcVar7;
          }
        }
      }
      return ppppppcVar4;
    }
  }
  return ppppppcVar4;
}



/* Entry: 10b2395b8; end: 10b23962f;  */

code ****** FUN_10b2395b8(undefined8 param_1,long param_2,code *****param_3)

{
  code ****ppppcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  code ******ppppppcVar4;
  code ****ppppcVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  code ****ppppcVar10;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  code ******extraout_x8_04;
  code ****ppppcVar11;
  code *****pppppcVar12;
  int extraout_w11;
  code ****ppppcVar13;
  long unaff_x21;
  code *****unaff_x22;
  code *****pppppcVar14;
  code *****pppppcStack_340;
  undefined1 uStack_338;
  code ****ppppcStack_330;
  code *****pppppcStack_320;
  code *****pppppcStack_318;
  undefined1 *****pppppuStack_310;
  code *pcStack_308;
  code ****appppcStack_300 [5];
  undefined8 uStack_2d8;
  code *****pppppcStack_2d0;
  code *****pppppcStack_2c8;
  undefined1 ****ppppuStack_2c0;
  code *pcStack_2b8;
  code ****appppcStack_2b0 [5];
  undefined8 uStack_288;
  code *****pppppcStack_280;
  code *****pppppcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  undefined1 auStack_260 [16];
  code ****appppcStack_250 [3];
  code ****appppcStack_238 [2];
  undefined1 auStack_224 [4];
  code ****ppppcStack_220;
  code ****ppppcStack_218;
  code ****ppppcStack_200;
  code ***pppcStack_1f8;
  uint uStack_158;
  undefined1 uStack_154;
  code *****apppppcStack_150 [2];
  code ****ppppcStack_140;
  code ****appppcStack_138 [6];
  undefined8 uStack_108;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  code ****appppcStack_a0 [5];
  undefined8 uStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_38;
  
  func_0x00010b23ab54();
  uStack_38 = extraout_x8;
  func_0x00010b23ada4();
  func_0x00010b23ab90();
  ppppppcVar4 = (code ******)(unaff_x21 + 0x20);
  func_0x00010b23b164(ppppppcVar4);
  *(undefined4 *)(unaff_x21 + 0xd0) = 3;
  *(undefined ***)(unaff_x21 + 0x18) = &PTR_FUN_110cc92a8;
  func_0x000107c351d8();
  func_0x00010b16cc9c();
  func_0x000107c351d4(uStack_38);
  if ((bool)in_ZR) {
    return ppppppcVar4;
  }
  ___stack_chk_fail();
  func_0x00010b23acb4();
  func_0x00010b23af00();
  func_0x00010b23acc0();
  ppppppcVar4 = (code ******)appppcStack_a0;
  pcStack_58 = FUN_10b239630;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c351dc();
  uStack_78 = extraout_x8_00;
  FUN_10b2391ec();
  func_0x00010b23af4c();
  func_0x00010b23ad84();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x000107c351d4(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x00010b23acc0();
    pcStack_a8 = FUN_10b239690;
    ppuStack_b0 = &puStack_60;
    func_0x000107c351dc();
    uStack_108 = extraout_x8_01;
    func_0x00010b23b184();
    FUN_10b2393a4(apppppcStack_150);
    if (*(int *)((long)apppppcStack_150[0] + 0x2c) == 3) {
      param_3 = *(code ******)(param_2 + 0x30);
      FUN_10b2359e4(&ppppcStack_140,apppppcStack_150[0],param_3,
                    *(long *)(param_2 + 0x38) - (long)param_3 >> 2);
      ppppcStack_200 = (code ****)0x0;
      pppcStack_1f8 = (code ***)0x0;
      unaff_x22 = &ppppcStack_200;
      ppppppcVar9 = (code ******)&ppppcStack_200;
      FUN_10b22f4d8(&ppppcStack_220,apppppcStack_150);
      func_0x00010b23b208();
      ppppcVar1 = ppppcStack_218;
      for (pppppcVar8 = (code *****)ppppcStack_220; uVar3 = pppppcVar8 == (code *****)ppppcVar1,
          !(bool)uVar3; pppppcVar8 = pppppcVar8 + 1) {
        ppppcVar13 = *pppppcVar8;
        if (((ulong)appppcStack_138[0][1] & 1) == 0) {
          ppppppcVar9 = (code ******)&ppppcStack_140;
          ppppcVar5 = ppppcVar13;
          (*(code *)ppppcStack_140)();
          if (((ulong)ppppcVar5 & 1) != 0) goto LAB_10b239798;
        }
        else {
LAB_10b239798:
          ppppcStack_200 = (code ****)0x0;
          pppcStack_1f8 = (code ***)0x0;
          ppppppcVar9 = apppppcStack_150;
          param_3 = (code *****)auStack_224;
          FUN_10b22ee10(appppcStack_238,ppppcVar13,ppppppcVar9,param_3,&ppppcStack_200);
          func_0x00010b23b208();
          ppppcVar5 = appppcStack_238[0];
          if ((code *****)appppcStack_238[0] != (code *****)0x0) {
            FUN_10b4853dc(&ppppcStack_200,0);
            if (unaff_x22 != (code *****)ppppcVar5) {
              ppppcVar10 = (code ****)pppcStack_1f8;
              if (((ulong)pppcStack_1f8 & 1) != 0) {
                ppppcVar10 = *(code *****)((ulong)pppcStack_1f8 & 0xfffffffffffffffe);
              }
              ppppcVar11 = (code ****)ppppcVar5[1];
              if (((ulong)ppppcVar11 & 1) != 0) {
                ppppcVar11 = *(code *****)((ulong)ppppcVar11 & 0xfffffffffffffffe);
              }
              if (ppppcVar10 == ppppcVar11) {
                func_0x00010b485ef0(&ppppcStack_200,ppppcVar5);
              }
              else {
                FUN_10b485eb8(&ppppcStack_200,ppppcVar5);
              }
            }
            uStack_158 = *(uint *)(ppppcVar13 + 4);
            uStack_154 = 1;
            FUN_10b239424(auStack_260,&ppppcStack_200);
            func_0x00010b23af4c();
            ppppppcVar9 = (code ******)appppcStack_250;
            FUN_10b239b58(ppppppcVar4);
            func_0x00010b23ae98();
            func_0x00010b23ad2c();
            func_0x00010b23b1f8();
          }
          FUN_10b22dd70(appppcStack_238);
        }
      }
      FUN_10b22bec4(&ppppcStack_220);
      (*(code *)*appppcStack_138[0])(appppcStack_138);
    }
    else {
      uVar3 = *(int *)((long)apppppcStack_150[0] + 0x2c) == 2;
      ppppppcVar9 = (code ******)apppppcStack_150[0];
      if ((bool)uVar3) {
        func_0x00010b230284(&ppppcStack_200,apppppcStack_150[0][4]);
        uStack_158 = uStack_158 & 0xffffff00;
        uStack_154 = 0;
        FUN_10b239424(&ppppcStack_220,&ppppcStack_200);
        appppcStack_138[0] = ppppcStack_218;
        ppppcStack_140 = ppppcStack_220;
        ppppcStack_220 = (code ****)0x0;
        ppppcStack_218 = (code ****)0x0;
        ppppppcVar9 = (code ******)&ppppcStack_140;
        FUN_10b239b58(ppppppcVar4);
        func_0x0001052b41d0(&ppppcStack_140);
        func_0x00010b167f44(&ppppcStack_220);
        func_0x00010b23b1f8();
      }
    }
    ppppppcVar6 = apppppcStack_150;
    FUN_10b152714();
    func_0x000107c351d4(uStack_108);
    if ((bool)uVar3) {
      return ppppppcVar6;
    }
    ___stack_chk_fail();
    func_0x0001052b41d0(&ppppcStack_140);
    func_0x00010b167f44(&ppppcStack_220);
    func_0x00010b23b1f8();
    FUN_10b152714(apppppcStack_150);
    func_0x0001052b60a4(ppppppcVar4);
    func_0x00010b23acec();
    ppppppcVar7 = (code ******)appppcStack_2b0;
    pcStack_268 = FUN_10b239960;
    pppppcStack_280 = (code *****)ppppppcVar6;
    pppppcStack_278 = (code *****)ppppppcVar4;
    pppuStack_270 = &ppuStack_b0;
    func_0x000107c351dc();
    uStack_288 = extraout_x8_02;
    FUN_10b23953c();
    func_0x00010b23af4c();
    func_0x00010b23ad84();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x000107c351d4(uStack_288);
    ppppppcVar4 = ppppppcVar7;
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x00010b23acc0();
      ppppppcVar4 = (code ******)appppcStack_300;
      pcStack_2b8 = FUN_10b2399c0;
      pppppcStack_2d0 = (code *****)ppppppcVar6;
      pppppcStack_2c8 = (code *****)ppppppcVar7;
      ppppuStack_2c0 = &pppuStack_270;
      func_0x000107c351dc();
      uStack_2d8 = extraout_x8_03;
      FUN_10b2395b8();
      func_0x00010b23af4c();
      func_0x00010b23ad84();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x000107c351d4(uStack_2d8);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        ppppppcVar7 = ppppppcVar4;
        func_0x00010b23ae98();
        func_0x00010b23ad2c();
        func_0x00010b23acc0();
        pcStack_308 = FUN_10b239a20;
        ppppcStack_330 = (code ****)unaff_x22;
        pppppcStack_320 = (code *****)ppppppcVar6;
        pppppcStack_318 = (code *****)ppppppcVar4;
        pppppuStack_310 = &ppppuStack_2c0;
        *ppppppcVar7 = (code *****)0x0;
        ppppppcVar7[1] = (code *****)0x0;
        ppppppcVar7[2] = (code *****)0x0;
        uStack_338 = 0;
        pppppcStack_340 = (code *****)ppppppcVar7;
        if (param_3 != (code *****)0x0) {
          if ((ulong)param_3 >> 0x3c != 0) {
            FUN_10b239ae4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
            (*pcVar2)();
          }
          pppppcVar8 = param_3;
          ppppppcVar6 = ppppppcVar9;
          FUN_10b239af8();
          ppppppcVar4 = ppppppcVar9 + (long)param_3 * 2;
          *ppppppcVar7 = pppppcVar8;
          ppppppcVar7[1] = pppppcVar8;
          ppppppcVar7[2] = pppppcVar8 + (long)ppppppcVar6 * 2;
          for (; ppppppcVar9 != ppppppcVar4; ppppppcVar9 = ppppppcVar9 + 2) {
            pppppcVar12 = ppppppcVar9[1];
            pppppcVar14 = *ppppppcVar9;
            pppppcVar8[1] = (code ****)ppppppcVar9[1];
            *pppppcVar8 = (code ****)pppppcVar14;
            if (pppppcVar12 != (code *****)0x0) {
              do {
                func_0x00010b23b058();
                ppppppcVar4 = extraout_x8_04;
              } while (extraout_w11 != 0);
            }
            pppppcVar8 = pppppcVar8 + 2;
          }
          ppppppcVar7[1] = pppppcVar8;
        }
        uStack_338 = 1;
        func_0x00010b239b2c(&pppppcStack_340);
        return ppppppcVar7;
      }
    }
  }
  return ppppppcVar4;
}



/* Entry: 10b239630; end: 10b23968f;  */

code ****** FUN_10b239630(undefined8 param_1,long param_2,code *****param_3)

{
  code ****ppppcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  code ******ppppppcVar4;
  code ****ppppcVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code ****ppppcVar10;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code ******extraout_x8_03;
  code ****ppppcVar11;
  code *****pppppcVar12;
  int extraout_w11;
  code ****ppppcVar13;
  code *****unaff_x22;
  code *****pppppcVar14;
  code *****pppppcStack_2f0;
  undefined1 uStack_2e8;
  code ****ppppcStack_2e0;
  code *****pppppcStack_2d0;
  code *****pppppcStack_2c8;
  undefined1 ****ppppuStack_2c0;
  code *pcStack_2b8;
  code ****appppcStack_2b0 [5];
  undefined8 uStack_288;
  code *****pppppcStack_280;
  code *****pppppcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  code ****appppcStack_260 [5];
  undefined8 uStack_238;
  code *****pppppcStack_230;
  code *****pppppcStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined1 auStack_210 [16];
  code ****appppcStack_200 [3];
  code ****appppcStack_1e8 [2];
  undefined1 auStack_1d4 [4];
  code ****ppppcStack_1d0;
  code ****ppppcStack_1c8;
  code ****ppppcStack_1b0;
  code ***pppcStack_1a8;
  uint uStack_108;
  undefined1 uStack_104;
  code *****apppppcStack_100 [2];
  code ****ppppcStack_f0;
  code ****appppcStack_e8 [6];
  undefined8 uStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  code ****appppcStack_50 [5];
  undefined8 uStack_28;
  
  ppppppcVar4 = (code ******)appppcStack_50;
  func_0x000107c351dc();
  uStack_28 = extraout_x8;
  FUN_10b2391ec();
  func_0x00010b23af4c();
  func_0x00010b23ad84();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x000107c351d4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x00010b23acc0();
    pcStack_58 = FUN_10b239690;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c351dc();
    uStack_b8 = extraout_x8_00;
    func_0x00010b23b184();
    FUN_10b2393a4(apppppcStack_100);
    if (*(int *)((long)apppppcStack_100[0] + 0x2c) == 3) {
      param_3 = *(code ******)(param_2 + 0x30);
      FUN_10b2359e4(&ppppcStack_f0,apppppcStack_100[0],param_3,
                    *(long *)(param_2 + 0x38) - (long)param_3 >> 2);
      ppppcStack_1b0 = (code ****)0x0;
      pppcStack_1a8 = (code ***)0x0;
      unaff_x22 = &ppppcStack_1b0;
      ppppppcVar9 = (code ******)&ppppcStack_1b0;
      FUN_10b22f4d8(&ppppcStack_1d0,apppppcStack_100);
      func_0x00010b23b208();
      ppppcVar1 = ppppcStack_1c8;
      for (pppppcVar8 = (code *****)ppppcStack_1d0; uVar3 = pppppcVar8 == (code *****)ppppcVar1,
          !(bool)uVar3; pppppcVar8 = pppppcVar8 + 1) {
        ppppcVar13 = *pppppcVar8;
        if (((ulong)appppcStack_e8[0][1] & 1) == 0) {
          ppppppcVar9 = (code ******)&ppppcStack_f0;
          ppppcVar5 = ppppcVar13;
          (*(code *)ppppcStack_f0)();
          if (((ulong)ppppcVar5 & 1) != 0) goto LAB_10b239798;
        }
        else {
LAB_10b239798:
          ppppcStack_1b0 = (code ****)0x0;
          pppcStack_1a8 = (code ***)0x0;
          ppppppcVar9 = apppppcStack_100;
          param_3 = (code *****)auStack_1d4;
          FUN_10b22ee10(appppcStack_1e8,ppppcVar13,ppppppcVar9,param_3,&ppppcStack_1b0);
          func_0x00010b23b208();
          ppppcVar5 = appppcStack_1e8[0];
          if ((code *****)appppcStack_1e8[0] != (code *****)0x0) {
            FUN_10b4853dc(&ppppcStack_1b0,0);
            if (unaff_x22 != (code *****)ppppcVar5) {
              ppppcVar10 = (code ****)pppcStack_1a8;
              if (((ulong)pppcStack_1a8 & 1) != 0) {
                ppppcVar10 = *(code *****)((ulong)pppcStack_1a8 & 0xfffffffffffffffe);
              }
              ppppcVar11 = (code ****)ppppcVar5[1];
              if (((ulong)ppppcVar11 & 1) != 0) {
                ppppcVar11 = *(code *****)((ulong)ppppcVar11 & 0xfffffffffffffffe);
              }
              if (ppppcVar10 == ppppcVar11) {
                func_0x00010b485ef0(&ppppcStack_1b0,ppppcVar5);
              }
              else {
                FUN_10b485eb8(&ppppcStack_1b0,ppppcVar5);
              }
            }
            uStack_108 = *(uint *)(ppppcVar13 + 4);
            uStack_104 = 1;
            FUN_10b239424(auStack_210,&ppppcStack_1b0);
            func_0x00010b23af4c();
            ppppppcVar9 = (code ******)appppcStack_200;
            FUN_10b239b58(ppppppcVar4);
            func_0x00010b23ae98();
            func_0x00010b23ad2c();
            func_0x00010b23b1f8();
          }
          FUN_10b22dd70(appppcStack_1e8);
        }
      }
      FUN_10b22bec4(&ppppcStack_1d0);
      (*(code *)*appppcStack_e8[0])(appppcStack_e8);
    }
    else {
      uVar3 = *(int *)((long)apppppcStack_100[0] + 0x2c) == 2;
      ppppppcVar9 = (code ******)apppppcStack_100[0];
      if ((bool)uVar3) {
        func_0x00010b230284(&ppppcStack_1b0,apppppcStack_100[0][4]);
        uStack_108 = uStack_108 & 0xffffff00;
        uStack_104 = 0;
        FUN_10b239424(&ppppcStack_1d0,&ppppcStack_1b0);
        appppcStack_e8[0] = ppppcStack_1c8;
        ppppcStack_f0 = ppppcStack_1d0;
        ppppcStack_1d0 = (code ****)0x0;
        ppppcStack_1c8 = (code ****)0x0;
        ppppppcVar9 = (code ******)&ppppcStack_f0;
        FUN_10b239b58(ppppppcVar4);
        func_0x0001052b41d0(&ppppcStack_f0);
        func_0x00010b167f44(&ppppcStack_1d0);
        func_0x00010b23b1f8();
      }
    }
    ppppppcVar6 = apppppcStack_100;
    FUN_10b152714();
    func_0x000107c351d4(uStack_b8);
    if ((bool)uVar3) {
      return ppppppcVar6;
    }
    ___stack_chk_fail();
    func_0x0001052b41d0(&ppppcStack_f0);
    func_0x00010b167f44(&ppppcStack_1d0);
    func_0x00010b23b1f8();
    FUN_10b152714(apppppcStack_100);
    func_0x0001052b60a4(ppppppcVar4);
    func_0x00010b23acec();
    ppppppcVar7 = (code ******)appppcStack_260;
    pcStack_218 = FUN_10b239960;
    pppppcStack_230 = (code *****)ppppppcVar6;
    pppppcStack_228 = (code *****)ppppppcVar4;
    ppuStack_220 = &puStack_60;
    func_0x000107c351dc();
    uStack_238 = extraout_x8_01;
    FUN_10b23953c();
    func_0x00010b23af4c();
    func_0x00010b23ad84();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x000107c351d4(uStack_238);
    ppppppcVar4 = ppppppcVar7;
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x00010b23acc0();
      ppppppcVar4 = (code ******)appppcStack_2b0;
      pcStack_268 = FUN_10b2399c0;
      pppppcStack_280 = (code *****)ppppppcVar6;
      pppppcStack_278 = (code *****)ppppppcVar7;
      pppuStack_270 = &ppuStack_220;
      func_0x000107c351dc();
      uStack_288 = extraout_x8_02;
      FUN_10b2395b8();
      func_0x00010b23af4c();
      func_0x00010b23ad84();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x000107c351d4(uStack_288);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        ppppppcVar7 = ppppppcVar4;
        func_0x00010b23ae98();
        func_0x00010b23ad2c();
        func_0x00010b23acc0();
        pcStack_2b8 = FUN_10b239a20;
        ppppcStack_2e0 = (code ****)unaff_x22;
        pppppcStack_2d0 = (code *****)ppppppcVar6;
        pppppcStack_2c8 = (code *****)ppppppcVar4;
        ppppuStack_2c0 = &pppuStack_270;
        *ppppppcVar7 = (code *****)0x0;
        ppppppcVar7[1] = (code *****)0x0;
        ppppppcVar7[2] = (code *****)0x0;
        uStack_2e8 = 0;
        pppppcStack_2f0 = (code *****)ppppppcVar7;
        if (param_3 != (code *****)0x0) {
          if ((ulong)param_3 >> 0x3c != 0) {
            FUN_10b239ae4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
            (*pcVar2)();
          }
          pppppcVar8 = param_3;
          ppppppcVar6 = ppppppcVar9;
          FUN_10b239af8();
          ppppppcVar4 = ppppppcVar9 + (long)param_3 * 2;
          *ppppppcVar7 = pppppcVar8;
          ppppppcVar7[1] = pppppcVar8;
          ppppppcVar7[2] = pppppcVar8 + (long)ppppppcVar6 * 2;
          for (; ppppppcVar9 != ppppppcVar4; ppppppcVar9 = ppppppcVar9 + 2) {
            pppppcVar12 = ppppppcVar9[1];
            pppppcVar14 = *ppppppcVar9;
            pppppcVar8[1] = (code ****)ppppppcVar9[1];
            *pppppcVar8 = (code ****)pppppcVar14;
            if (pppppcVar12 != (code *****)0x0) {
              do {
                func_0x00010b23b058();
                ppppppcVar4 = extraout_x8_03;
              } while (extraout_w11 != 0);
            }
            pppppcVar8 = pppppcVar8 + 2;
          }
          ppppppcVar7[1] = pppppcVar8;
        }
        uStack_2e8 = 1;
        func_0x00010b239b2c(&pppppcStack_2f0);
        return ppppppcVar7;
      }
    }
  }
  return ppppppcVar4;
}



/* Entry: 10b239690; end: 10b23995f;  */

code ****** FUN_10b239690(undefined8 param_1,long param_2,code *****param_3)

{
  code ****ppppcVar1;
  code *pcVar2;
  undefined1 uVar3;
  code ****ppppcVar4;
  code ******ppppppcVar5;
  code ******ppppppcVar6;
  code ******ppppppcVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  undefined8 extraout_x8;
  code ****ppppcVar10;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  code ******extraout_x8_02;
  code ****ppppcVar11;
  code *****pppppcVar12;
  int extraout_w11;
  code ****ppppcVar13;
  code *****unaff_x22;
  code *****pppppcVar14;
  code *****pppppcStack_2a0;
  undefined1 uStack_298;
  code ****ppppcStack_290;
  code *****pppppcStack_280;
  code *****pppppcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  code ****appppcStack_260 [5];
  undefined8 uStack_238;
  code *****pppppcStack_230;
  code *****pppppcStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  code ****appppcStack_210 [5];
  undefined8 uStack_1e8;
  code *****pppppcStack_1e0;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [16];
  code ****appppcStack_1b0 [3];
  code ****appppcStack_198 [2];
  undefined1 auStack_184 [4];
  code ****ppppcStack_180;
  code ****ppppcStack_178;
  code ****ppppcStack_160;
  code ***pppcStack_158;
  uint uStack_b8;
  undefined1 uStack_b4;
  code *****apppppcStack_b0 [2];
  code ****ppppcStack_a0;
  code ****appppcStack_98 [6];
  undefined8 uStack_68;
  
  func_0x000107c351dc();
  uStack_68 = extraout_x8;
  func_0x00010b23b184();
  FUN_10b2393a4(apppppcStack_b0);
  if (*(int *)((long)apppppcStack_b0[0] + 0x2c) == 3) {
    param_3 = *(code ******)(param_2 + 0x30);
    FUN_10b2359e4(&ppppcStack_a0,apppppcStack_b0[0],param_3,
                  *(long *)(param_2 + 0x38) - (long)param_3 >> 2);
    ppppcStack_160 = (code ****)0x0;
    pppcStack_158 = (code ***)0x0;
    unaff_x22 = &ppppcStack_160;
    ppppppcVar9 = (code ******)&ppppcStack_160;
    FUN_10b22f4d8(&ppppcStack_180,apppppcStack_b0);
    func_0x00010b23b208();
    ppppcVar1 = ppppcStack_178;
    for (pppppcVar8 = (code *****)ppppcStack_180; uVar3 = pppppcVar8 == (code *****)ppppcVar1,
        !(bool)uVar3; pppppcVar8 = pppppcVar8 + 1) {
      ppppcVar13 = *pppppcVar8;
      if (((ulong)appppcStack_98[0][1] & 1) == 0) {
        ppppppcVar9 = (code ******)&ppppcStack_a0;
        ppppcVar4 = ppppcVar13;
        (*(code *)ppppcStack_a0)();
        if (((ulong)ppppcVar4 & 1) != 0) goto LAB_10b239798;
      }
      else {
LAB_10b239798:
        ppppcStack_160 = (code ****)0x0;
        pppcStack_158 = (code ***)0x0;
        ppppppcVar9 = apppppcStack_b0;
        param_3 = (code *****)auStack_184;
        FUN_10b22ee10(appppcStack_198,ppppcVar13,ppppppcVar9,param_3,&ppppcStack_160);
        func_0x00010b23b208();
        ppppcVar4 = appppcStack_198[0];
        if ((code *****)appppcStack_198[0] != (code *****)0x0) {
          FUN_10b4853dc(&ppppcStack_160,0);
          if (unaff_x22 != (code *****)ppppcVar4) {
            ppppcVar10 = (code ****)pppcStack_158;
            if (((ulong)pppcStack_158 & 1) != 0) {
              ppppcVar10 = *(code *****)((ulong)pppcStack_158 & 0xfffffffffffffffe);
            }
            ppppcVar11 = (code ****)ppppcVar4[1];
            if (((ulong)ppppcVar11 & 1) != 0) {
              ppppcVar11 = *(code *****)((ulong)ppppcVar11 & 0xfffffffffffffffe);
            }
            if (ppppcVar10 == ppppcVar11) {
              func_0x00010b485ef0(&ppppcStack_160,ppppcVar4);
            }
            else {
              FUN_10b485eb8(&ppppcStack_160,ppppcVar4);
            }
          }
          uStack_b8 = *(uint *)(ppppcVar13 + 4);
          uStack_b4 = 1;
          FUN_10b239424(auStack_1c0,&ppppcStack_160);
          func_0x00010b23af4c();
          ppppppcVar9 = (code ******)appppcStack_1b0;
          FUN_10b239b58();
          func_0x00010b23ae98();
          func_0x00010b23ad2c();
          func_0x00010b23b1f8();
        }
        FUN_10b22dd70(appppcStack_198);
      }
    }
    FUN_10b22bec4(&ppppcStack_180);
    (*(code *)*appppcStack_98[0])(appppcStack_98);
  }
  else {
    uVar3 = *(int *)((long)apppppcStack_b0[0] + 0x2c) == 2;
    ppppppcVar9 = (code ******)apppppcStack_b0[0];
    if ((bool)uVar3) {
      func_0x00010b230284(&ppppcStack_160,apppppcStack_b0[0][4]);
      uStack_b8 = uStack_b8 & 0xffffff00;
      uStack_b4 = 0;
      FUN_10b239424(&ppppcStack_180,&ppppcStack_160);
      appppcStack_98[0] = ppppcStack_178;
      ppppcStack_a0 = ppppcStack_180;
      ppppcStack_180 = (code ****)0x0;
      ppppcStack_178 = (code ****)0x0;
      ppppppcVar9 = (code ******)&ppppcStack_a0;
      FUN_10b239b58();
      func_0x0001052b41d0(&ppppcStack_a0);
      func_0x00010b167f44(&ppppcStack_180);
      func_0x00010b23b1f8();
    }
  }
  ppppppcVar5 = apppppcStack_b0;
  FUN_10b152714();
  func_0x000107c351d4(uStack_68);
  if ((bool)uVar3) {
    return ppppppcVar5;
  }
  ___stack_chk_fail();
  func_0x0001052b41d0(&ppppcStack_a0);
  func_0x00010b167f44(&ppppcStack_180);
  func_0x00010b23b1f8();
  FUN_10b152714(apppppcStack_b0);
  func_0x0001052b60a4();
  func_0x00010b23acec();
  ppppppcVar6 = (code ******)appppcStack_210;
  pcStack_1c8 = FUN_10b239960;
  pppppcStack_1e0 = (code *****)ppppppcVar5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x000107c351dc();
  uStack_1e8 = extraout_x8_00;
  FUN_10b23953c();
  func_0x00010b23af4c();
  func_0x00010b23ad84();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x000107c351d4(uStack_1e8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x00010b23acc0();
    ppppppcVar7 = (code ******)appppcStack_260;
    pcStack_218 = FUN_10b2399c0;
    pppppcStack_230 = (code *****)ppppppcVar5;
    pppppcStack_228 = (code *****)ppppppcVar6;
    ppuStack_220 = &puStack_1d0;
    func_0x000107c351dc();
    uStack_238 = extraout_x8_01;
    FUN_10b2395b8();
    func_0x00010b23af4c();
    func_0x00010b23ad84();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x000107c351d4(uStack_238);
    ppppppcVar6 = ppppppcVar7;
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      ppppppcVar6 = ppppppcVar7;
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x00010b23acc0();
      pcStack_268 = FUN_10b239a20;
      ppppcStack_290 = (code ****)unaff_x22;
      pppppcStack_280 = (code *****)ppppppcVar5;
      pppppcStack_278 = (code *****)ppppppcVar7;
      pppuStack_270 = &ppuStack_220;
      *ppppppcVar6 = (code *****)0x0;
      ppppppcVar6[1] = (code *****)0x0;
      ppppppcVar6[2] = (code *****)0x0;
      uStack_298 = 0;
      pppppcStack_2a0 = (code *****)ppppppcVar6;
      if (param_3 != (code *****)0x0) {
        if ((ulong)param_3 >> 0x3c != 0) {
          FUN_10b239ae4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
          (*pcVar2)();
        }
        pppppcVar8 = param_3;
        ppppppcVar7 = ppppppcVar9;
        FUN_10b239af8();
        ppppppcVar5 = ppppppcVar9 + (long)param_3 * 2;
        *ppppppcVar6 = pppppcVar8;
        ppppppcVar6[1] = pppppcVar8;
        ppppppcVar6[2] = pppppcVar8 + (long)ppppppcVar7 * 2;
        for (; ppppppcVar9 != ppppppcVar5; ppppppcVar9 = ppppppcVar9 + 2) {
          pppppcVar12 = ppppppcVar9[1];
          pppppcVar14 = *ppppppcVar9;
          pppppcVar8[1] = (code ****)ppppppcVar9[1];
          *pppppcVar8 = (code ****)pppppcVar14;
          if (pppppcVar12 != (code *****)0x0) {
            do {
              func_0x00010b23b058();
              ppppppcVar5 = extraout_x8_02;
            } while (extraout_w11 != 0);
          }
          pppppcVar8 = pppppcVar8 + 2;
        }
        ppppppcVar6[1] = pppppcVar8;
      }
      uStack_298 = 1;
      func_0x00010b239b2c(&pppppcStack_2a0);
      return ppppppcVar6;
    }
  }
  return ppppppcVar6;
}



/* Entry: 10b239960; end: 10b2399bf;  */

ulong * FUN_10b239960(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar5;
  long lVar6;
  int extraout_w11;
  undefined8 uVar7;
  ulong *puStack_e0;
  undefined1 uStack_d8;
  ulong auStack_a0 [5];
  undefined8 uStack_78;
  ulong auStack_50 [5];
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  func_0x000107c351dc();
  uStack_28 = extraout_x8;
  FUN_10b23953c();
  func_0x00010b23af4c();
  func_0x00010b23ad84();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x000107c351d4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x00010b23acc0();
    puVar2 = auStack_a0;
    func_0x000107c351dc();
    uStack_78 = extraout_x8_00;
    FUN_10b2395b8();
    func_0x00010b23af4c();
    func_0x00010b23ad84();
    func_0x00010b23ae98();
    func_0x00010b23ad2c();
    func_0x000107c351d4(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b23ae98();
      func_0x00010b23ad2c();
      func_0x00010b23acc0();
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      uStack_d8 = 0;
      puStack_e0 = puVar2;
      if (param_3 != (undefined8 *)0x0) {
        if ((ulong)param_3 >> 0x3c != 0) {
          FUN_10b239ae4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
          (*pcVar1)();
        }
        puVar3 = param_3;
        puVar4 = param_2;
        FUN_10b239af8();
        puVar5 = param_2 + (long)param_3 * 2;
        *puVar2 = (ulong)puVar3;
        puVar2[1] = (ulong)puVar3;
        puVar2[2] = (ulong)(puVar3 + (long)puVar4 * 2);
        for (; param_2 != puVar5; param_2 = param_2 + 2) {
          lVar6 = param_2[1];
          uVar7 = *param_2;
          puVar3[1] = param_2[1];
          *puVar3 = uVar7;
          if (lVar6 != 0) {
            do {
              func_0x00010b23b058();
              puVar5 = extraout_x8_01;
            } while (extraout_w11 != 0);
          }
          puVar3 = puVar3 + 2;
        }
        puVar2[1] = (ulong)puVar3;
      }
      uStack_d8 = 1;
      func_0x00010b239b2c(&puStack_e0);
      return puVar2;
    }
  }
  return puVar2;
}



/* Entry: 10b2399c0; end: 10b239a1f;  */

ulong * FUN_10b2399c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  long lVar6;
  int extraout_w11;
  undefined8 uVar7;
  ulong *puStack_90;
  undefined1 uStack_88;
  ulong auStack_50 [5];
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  func_0x000107c351dc();
  uStack_28 = extraout_x8;
  FUN_10b2395b8();
  func_0x00010b23af4c();
  func_0x00010b23ad84();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x000107c351d4(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b23ae98();
  func_0x00010b23ad2c();
  func_0x00010b23acc0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uStack_88 = 0;
  puStack_90 = puVar2;
  if (param_3 != (undefined8 *)0x0) {
    if ((ulong)param_3 >> 0x3c != 0) {
      FUN_10b239ae4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
      (*pcVar1)();
    }
    puVar3 = param_3;
    puVar4 = param_2;
    FUN_10b239af8();
    puVar5 = param_2 + (long)param_3 * 2;
    *puVar2 = (ulong)puVar3;
    puVar2[1] = (ulong)puVar3;
    puVar2[2] = (ulong)(puVar3 + (long)puVar4 * 2);
    for (; param_2 != puVar5; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar7;
      if (lVar6 != 0) {
        do {
          func_0x00010b23b058();
          puVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      puVar3 = puVar3 + 2;
    }
    puVar2[1] = (ulong)puVar3;
  }
  uStack_88 = 1;
  func_0x00010b239b2c(&puStack_90);
  return puVar2;
}



/* Entry: 10b239a20; end: 10b239ae3;  */

ulong * FUN_10b239a20(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w11;
  undefined8 uVar6;
  ulong *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  puStack_40 = param_1;
  if (param_3 != (undefined8 *)0x0) {
    if ((ulong)param_3 >> 0x3c != 0) {
      FUN_10b239ae4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b239ad8);
      (*pcVar1)();
    }
    puVar2 = param_3;
    puVar3 = param_2;
    FUN_10b239af8();
    puVar4 = param_2 + (long)param_3 * 2;
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)(puVar2 + (long)puVar3 * 2);
    for (; param_2 != puVar4; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar6;
      if (lVar5 != 0) {
        do {
          func_0x00010b23b058();
          puVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar2 = puVar2 + 2;
    }
    param_1[1] = (ulong)puVar2;
  }
  uStack_38 = 1;
  func_0x00010b239b2c(&puStack_40);
  return param_1;
}



/* Entry: 10b239ae4; end: 10b239af7;  */

undefined1  [16] FUN_10b239ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)puVar1 >> 0x3c == 0) {
    lVar2 = (long)puVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  if ((puVar1[8] & 1) == 0) {
    func_0x0001052b60d0(puVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Entry: 10b239af8; end: 10b239b57;  */

undefined1  [16] FUN_10b239af8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar1 = param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001052b60d0(param_1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b239b58; end: 10b239c1f;  */

undefined8 * FUN_10b239b58(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  func_0x00010b23ae64();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar7 = *unaff_x20;
    puVar6 = puVar2 + 2;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar7;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar5 = (long)puVar2 - *unaff_x19;
    uVar1 = (lVar5 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10b239ae4();
      *param_1 = &PTR_FUN_110cc9980;
      func_0x00010b239d68(param_1 + 0x2c);
      func_0x000107c27938(param_1 + 0x28);
      func_0x000107276ba4(param_1 + 0x13);
      func_0x000107c279a4(param_1 + 0xb);
      func_0x00010b239d44(param_1 + 9);
      FUN_10b239cf0(param_1 + 7);
      func_0x00010b227f1c(param_1 + 5);
      func_0x0001052b61cc(param_1 + 3);
      func_0x000107c2be84(param_1 + 1);
      return param_1;
    }
    uVar3 = (long)param_1[2] - *unaff_x19;
    uVar4 = (long)uVar3 >> 3;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar4 = 0xfffffffffffffff;
    }
    if (uVar4 == 0) {
      param_2 = 0;
    }
    else {
      FUN_10b239af8();
    }
    puVar2 = (undefined8 *)(uVar4 + lVar5);
    uVar7 = *unaff_x20;
    puVar6 = puVar2 + 2;
    puVar2[1] = unaff_x20[1];
    *puVar2 = uVar7;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    lVar5 = (long)puVar2 - (unaff_x19[1] - *unaff_x19);
    _memcpy(lVar5);
    param_1 = (undefined8 *)*unaff_x19;
    *unaff_x19 = lVar5;
    unaff_x19[1] = (long)puVar6;
    unaff_x19[2] = uVar4 + param_2 * 0x10;
    if (param_1 != (undefined8 *)0x0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = (long)puVar6;
  return param_1;
}



/* Entry: 10b239c20; end: 10b239c93;  */

undefined8 * FUN_10b239c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9980;
  func_0x00010b239d68(param_1 + 0x2c);
  func_0x000107c27938(param_1 + 0x28);
  func_0x000107276ba4(param_1 + 0x13);
  func_0x000107c279a4(param_1 + 0xb);
  func_0x00010b239d44(param_1 + 9);
  FUN_10b239cf0(param_1 + 7);
  func_0x00010b227f1c(param_1 + 5);
  func_0x0001052b61cc(param_1 + 3);
  func_0x000107c2be84(param_1 + 1);
  return param_1;
}



/* Entry: 10b239c94; end: 10b239c97;  */

void FUN_10b239c94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9f88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b239c98; end: 10b239cab;  */

void FUN_10b239c98(void)

{
  func_0x00010b239cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239cac; end: 10b239cc3;  */

void FUN_10b239cac(void)

{
  return;
}



/* Entry: 10b239cc4; end: 10b239cd7;  */

void FUN_10b239cc4(void)

{
  func_0x00010b239ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239cd8; end: 10b239cef;  */

undefined8 FUN_10b239cd8(long param_1)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_10b220640();
  }
  func_0x00010b227f1c(param_1 + 0x28);
  func_0x00010b223980();
  if (plVar1 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b239cf0; end: 10b239d13;  */

void FUN_10b239cf0(long param_1)

{
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b239d14; end: 10b239d17;  */

void FUN_10b239d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b239d18; end: 10b239d2b;  */

void FUN_10b239d18(void)

{
  func_0x00010b239d38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b239d2c; end: 10b239d43;  */

undefined8 FUN_10b239d2c(long param_1)

{
  long *plVar1;
  undefined8 unaff_x19;
  
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_10b22105c();
  }
  FUN_10b5234a8(param_1 + 0x48);
  FUN_10b22cfdc(param_1 + 0x38);
  func_0x00010b227f1c(param_1 + 0x28);
  func_0x00010b223980();
  if (plVar1 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b239d44; end: 10b239d8b;  */

void FUN_10b239d44(long param_1)

{
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b239d8c; end: 10b239e03;  */

void FUN_10b239d8c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *unaff_x28;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined1 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [6];
  undefined8 uStack_38;
  
  puVar3 = auStack_80;
  func_0x000107c351dc(param_1,param_1);
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80);
  func_0x00010b23aed0();
  puVar8 = auStack_68;
  FUN_10b239e04();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x000107c351d4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23aca4();
  func_0x00010b23ad44();
  func_0x00010b23acc0();
  if ((bRam00000001137f42c8 & 1) == 0) {
    iVar2 = 0x137f42c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar7 = (undefined8 *)0x68;
      __Znwm();
      *puVar7 = 0x32aaaba7;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[10] = 0;
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0x3f800000;
      puRam00000001137f42c0 = puVar7;
      ___cxa_guard_release(0x1137f42c8);
    }
  }
  puVar7 = puRam00000001137f42c0;
  plVar11 = puRam00000001137f42c0 + 8;
  puStack_110 = puRam00000001137f42c0;
  uStack_108 = 1;
  __ZNSt3__15mutex4lockEv(puRam00000001137f42c0);
  lStack_120 = 0;
  lStack_118 = 0;
  plVar4 = puVar7 + 0xb;
  plStack_100 = plVar11;
  func_0x000107c278c4(plVar4,puVar3);
  plVar18 = (long *)puVar7[9];
  plVar5 = plVar4;
  if (plVar18 != (long *)0x0) {
    uVar17 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar17) == 0) {
      unaff_x28 = (long *)(uVar17 & (ulong)plVar4);
    }
    else {
      unaff_x28 = plVar4;
      if (plVar18 <= plVar4) {
        uVar10 = 0;
        if (plVar18 != (long *)0x0) {
          uVar10 = (ulong)plVar4 / (ulong)plVar18;
        }
        unaff_x28 = (long *)((long)plVar4 - uVar10 * (long)plVar18);
      }
    }
    plVar16 = *(long **)(*plVar11 + (long)unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b239f08;
          plVar9 = (long *)plVar16[1];
          if (plVar9 != plVar4) break;
          plVar5 = plVar16 + 2;
          func_0x000107c278d0(plVar5,puVar3);
          if (((ulong)plVar5 & 1) != 0) goto LAB_10b23a1c4;
        }
        if (((ulong)plVar18 & uVar17) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar17);
        }
        else if (plVar18 <= plVar9) {
          uVar10 = 0;
          if (plVar18 != (long *)0x0) {
            uVar10 = (ulong)plVar9 / (ulong)plVar18;
          }
          plVar9 = (long *)((long)plVar9 - uVar10 * (long)plVar18);
        }
      } while (plVar9 == unaff_x28);
    }
  }
LAB_10b239f08:
  func_0x00010b23b1d0();
  plVar16 = puVar7 + 10;
  uStack_e8 = 0;
  *plVar5 = 0;
  plVar5[1] = (long)plVar4;
  plStack_f8 = plVar5;
  plStack_f0 = plVar16;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar5 + 2,puVar3);
  plVar5[6] = lStack_118;
  plVar5[5] = lStack_120;
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
  if ((plVar18 == (long *)0x0) ||
     (*(float *)(puVar7 + 0xc) * (float)plVar18 < (float)(puVar7[0xb] + 1))) {
    uVar17 = 1;
    if ((long *)0x2 < plVar18) {
      uVar17 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
    }
    plVar9 = (long *)(uVar17 | (long)plVar18 << 1);
    plVar18 = (long *)(long)((float)(puVar7[0xb] + 1) / *(float *)(puVar7 + 0xc));
    if (plVar9 <= plVar18) {
      plVar9 = plVar18;
    }
    if ((long)plVar9 - 1U == 0) {
      plVar9 = (long *)0x2;
    }
    else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar18 = (long *)puVar7[9];
    if (plVar18 < plVar9) {
LAB_10b239fc0:
      if ((ulong)plVar9 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10b23a2a4);
        (*pcVar1)();
      }
      lVar6 = (long)plVar9 << 3;
      __Znwm(lVar6);
      FUN_10b23a2ec(plVar11,lVar6);
      puVar7[9] = plVar9;
      lVar6 = puVar7[8];
      for (plVar18 = (long *)0x0; plVar9 != plVar18; plVar18 = (long *)((long)plVar18 + 1)) {
        *(undefined8 *)(lVar6 + (long)plVar18 * 8) = 0;
      }
      plVar12 = (long *)*plVar16;
      plVar18 = plVar9;
      if (plVar12 != (long *)0x0) {
        plVar13 = (long *)plVar12[1];
        uVar10 = (long)plVar9 - 1;
        uVar17 = 0;
        if (plVar9 != (long *)0x0) {
          uVar17 = (ulong)plVar13 / (ulong)plVar9;
        }
        plVar14 = plVar13;
        if (plVar9 <= plVar13) {
          plVar14 = (long *)((long)plVar13 - uVar17 * (long)plVar9);
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar14 = (long *)((ulong)plVar13 & uVar10);
        }
        *(long **)(lVar6 + (long)plVar14 * 8) = plVar16;
        while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
          plVar15 = (long *)plVar12[1];
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar15 = (long *)((ulong)plVar15 & uVar10);
          }
          else if (plVar9 <= plVar15) {
            uVar17 = 0;
            if (plVar9 != (long *)0x0) {
              uVar17 = (ulong)plVar15 / (ulong)plVar9;
            }
            plVar15 = (long *)((long)plVar15 - uVar17 * (long)plVar9);
          }
          if (plVar15 != plVar14) {
            if (*(long *)(lVar6 + (long)plVar15 * 8) == 0) {
              *(long **)(lVar6 + (long)plVar15 * 8) = plVar13;
              plVar14 = plVar15;
            }
            else {
              *plVar13 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar6 + (long)plVar15 * 8);
              **(long **)(lVar6 + (long)plVar15 * 8) = (long)plVar12;
              plVar12 = plVar13;
            }
          }
        }
      }
    }
    else if (plVar9 < plVar18) {
      plVar12 = (long *)(long)((float)(ulong)puVar7[0xb] / *(float *)(puVar7 + 0xc));
      if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar12) {
        plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
      }
      if (plVar9 <= plVar12) {
        plVar9 = plVar12;
      }
      if (plVar9 < plVar18) {
        if (plVar9 != (long *)0x0) goto LAB_10b239fc0;
        FUN_10b23a2ec(plVar11,0);
        puVar7[9] = 0;
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)puVar7[9];
      }
    }
    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar18 - 1U & (ulong)plVar4);
    }
    else {
      unaff_x28 = plVar4;
      if (plVar18 <= plVar4) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar4 / (ulong)plVar18;
        }
        unaff_x28 = (long *)((long)plVar4 - uVar17 * (long)plVar18);
      }
    }
  }
  lVar6 = *plVar11;
  plVar11 = *(long **)(lVar6 + (long)unaff_x28 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar5 = *plVar16;
    *plVar16 = (long)plVar5;
    *(long **)(lVar6 + (long)unaff_x28 * 8) = plVar16;
    if (*plVar5 != 0) {
      plVar11 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar18 - 1U);
      }
      else if (plVar18 <= plVar11) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar11 / (ulong)plVar18;
        }
        plVar11 = (long *)((long)plVar11 - uVar17 * (long)plVar18);
      }
      *(long **)(lVar6 + (long)plVar11 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar11;
    *plVar11 = (long)plVar5;
  }
  plStack_f8 = (long *)0x0;
  puVar7[0xb] = puVar7[0xb] + 1;
  FUN_10b23a304(&plStack_f8);
  plVar16 = plVar5;
LAB_10b23a1c4:
  func_0x000107c2be84(&lStack_120);
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  lVar6 = plVar16[6];
  if (lVar6 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8_00[1] = lVar6;
    if ((lVar6 != 0) && (lVar6 = plVar16[5], *extraout_x8_00 = lVar6, lVar6 != 0))
    goto LAB_10b23a214;
  }
  func_0x000107c2be8c(extraout_x8_00);
  (*(code *)*puVar8)(extraout_x8_00,puVar8);
  func_0x000107c2be80(plVar16 + 5,extraout_x8_00);
LAB_10b23a214:
  func_0x000107c2798c(&puStack_110);
  return;
}



/* Entry: 10b239e04; end: 10b23a2eb;  */

void FUN_10b239e04(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *unaff_x28;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000001137f42c8 & 1) == 0) {
    iVar2 = 0x137f42c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)0x68;
      __Znwm();
      *puVar6 = 0x32aaaba7;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[2] = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      puVar6[6] = 0;
      puVar6[5] = 0;
      puVar6[8] = 0;
      puVar6[7] = 0;
      puVar6[10] = 0;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0x3f800000;
      puRam00000001137f42c0 = puVar6;
      ___cxa_guard_release(0x1137f42c8);
    }
  }
  puVar6 = puRam00000001137f42c0;
  plVar9 = puRam00000001137f42c0 + 8;
  puStack_90 = puRam00000001137f42c0;
  uStack_88 = 1;
  __ZNSt3__15mutex4lockEv(puRam00000001137f42c0);
  lStack_a0 = 0;
  lStack_98 = 0;
  plVar3 = puVar6 + 0xb;
  plStack_80 = plVar9;
  func_0x000107c278c4(plVar3,param_2);
  plVar16 = (long *)puVar6[9];
  plVar4 = plVar3;
  if (plVar16 != (long *)0x0) {
    uVar15 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar15) == 0) {
      unaff_x28 = (long *)(uVar15 & (ulong)plVar3);
    }
    else {
      unaff_x28 = plVar3;
      if (plVar16 <= plVar3) {
        uVar8 = 0;
        if (plVar16 != (long *)0x0) {
          uVar8 = (ulong)plVar3 / (ulong)plVar16;
        }
        unaff_x28 = (long *)((long)plVar3 - uVar8 * (long)plVar16);
      }
    }
    plVar14 = *(long **)(*plVar9 + (long)unaff_x28 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10b239f08;
          plVar7 = (long *)plVar14[1];
          if (plVar7 != plVar3) break;
          plVar4 = plVar14 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10b23a1c4;
        }
        if (((ulong)plVar16 & uVar15) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar15);
        }
        else if (plVar16 <= plVar7) {
          uVar8 = 0;
          if (plVar16 != (long *)0x0) {
            uVar8 = (ulong)plVar7 / (ulong)plVar16;
          }
          plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar16);
        }
      } while (plVar7 == unaff_x28);
    }
  }
LAB_10b239f08:
  func_0x00010b23b1d0();
  plVar14 = puVar6 + 10;
  uStack_68 = 0;
  *plVar4 = 0;
  plVar4[1] = (long)plVar3;
  plStack_78 = plVar4;
  plStack_70 = plVar14;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar4 + 2,param_2);
  plVar4[6] = lStack_98;
  plVar4[5] = lStack_a0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(puVar6 + 0xc) * (float)plVar16 < (float)(puVar6[0xb] + 1))) {
    uVar15 = 1;
    if ((long *)0x2 < plVar16) {
      uVar15 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar7 = (long *)(uVar15 | (long)plVar16 << 1);
    plVar16 = (long *)(long)((float)(puVar6[0xb] + 1) / *(float *)(puVar6 + 0xc));
    if (plVar7 <= plVar16) {
      plVar7 = plVar16;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar16 = (long *)puVar6[9];
    if (plVar16 < plVar7) {
LAB_10b239fc0:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10b23a2a4);
        (*pcVar1)();
      }
      lVar5 = (long)plVar7 << 3;
      __Znwm(lVar5);
      FUN_10b23a2ec(plVar9,lVar5);
      puVar6[9] = plVar7;
      lVar5 = puVar6[8];
      for (plVar16 = (long *)0x0; plVar7 != plVar16; plVar16 = (long *)((long)plVar16 + 1)) {
        *(undefined8 *)(lVar5 + (long)plVar16 * 8) = 0;
      }
      plVar10 = (long *)*plVar14;
      plVar16 = plVar7;
      if (plVar10 != (long *)0x0) {
        plVar11 = (long *)plVar10[1];
        uVar8 = (long)plVar7 - 1;
        uVar15 = 0;
        if (plVar7 != (long *)0x0) {
          uVar15 = (ulong)plVar11 / (ulong)plVar7;
        }
        plVar12 = plVar11;
        if (plVar7 <= plVar11) {
          plVar12 = (long *)((long)plVar11 - uVar15 * (long)plVar7);
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar11 & uVar8);
        }
        *(long **)(lVar5 + (long)plVar12 * 8) = plVar14;
        while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
          plVar13 = (long *)plVar10[1];
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar8);
          }
          else if (plVar7 <= plVar13) {
            uVar15 = 0;
            if (plVar7 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)plVar7;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar7);
          }
          if (plVar13 != plVar12) {
            if (*(long *)(lVar5 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar5 + (long)plVar13 * 8) = plVar11;
              plVar12 = plVar13;
            }
            else {
              *plVar11 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar5 + (long)plVar13 * 8);
              **(long **)(lVar5 + (long)plVar13 * 8) = (long)plVar10;
              plVar10 = plVar11;
            }
          }
        }
      }
    }
    else if (plVar7 < plVar16) {
      plVar10 = (long *)(long)((float)(ulong)puVar6[0xb] / *(float *)(puVar6 + 0xc));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar10) {
        plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar10) {
        plVar7 = plVar10;
      }
      if (plVar7 < plVar16) {
        if (plVar7 != (long *)0x0) goto LAB_10b239fc0;
        FUN_10b23a2ec(plVar9,0);
        puVar6[9] = 0;
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = (long *)puVar6[9];
      }
    }
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      unaff_x28 = (long *)((long)plVar16 - 1U & (ulong)plVar3);
    }
    else {
      unaff_x28 = plVar3;
      if (plVar16 <= plVar3) {
        uVar15 = 0;
        if (plVar16 != (long *)0x0) {
          uVar15 = (ulong)plVar3 / (ulong)plVar16;
        }
        unaff_x28 = (long *)((long)plVar3 - uVar15 * (long)plVar16);
      }
    }
  }
  lVar5 = *plVar9;
  plVar9 = *(long **)(lVar5 + (long)unaff_x28 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar4 = *plVar14;
    *plVar14 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x28 * 8) = plVar14;
    if (*plVar4 != 0) {
      plVar9 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar9) {
        uVar15 = 0;
        if (plVar16 != (long *)0x0) {
          uVar15 = (ulong)plVar9 / (ulong)plVar16;
        }
        plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar16);
      }
      *(long **)(lVar5 + (long)plVar9 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar9;
    *plVar9 = (long)plVar4;
  }
  plStack_78 = (long *)0x0;
  puVar6[0xb] = puVar6[0xb] + 1;
  FUN_10b23a304(&plStack_78);
  plVar14 = plVar4;
LAB_10b23a1c4:
  func_0x000107c2be84(&lStack_a0);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = plVar14[6];
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if ((lVar5 != 0) && (lVar5 = plVar14[5], *param_1 = lVar5, lVar5 != 0)) goto LAB_10b23a214;
  }
  func_0x000107c2be8c(param_1);
  (*(code *)*param_3)(param_1,param_3);
  func_0x000107c2be80(plVar14 + 5,param_1);
LAB_10b23a214:
  func_0x000107c2798c(&puStack_90);
  return;
}



/* Entry: 10b23a2ec; end: 10b23a303;  */

void FUN_10b23a2ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b23a304; end: 10b23a34f;  */

long * FUN_10b23a304(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2be84(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b23a350; end: 10b23a41f;  */

void FUN_10b23a350(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = param_1;
  func_0x000107c351dc();
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  puVar2 = *(undefined1 **)(lVar5 + 0x18);
  uStack_48 = extraout_x8;
  func_0x000107c351fc();
  func_0x000107c2be7c();
  uVar3 = *puVar2;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_FUN_110cc6890;
  puStack_50[1] = 0;
  func_0x000107c2bed0(puStack_50 + 3,uVar1,uVar3);
  puVar4 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x000107c2be78(puVar4 + 3);
  func_0x000107c2be88(auStack_60);
  FUN_10b23051c(*(undefined8 *)(param_1 + 0x20),*unaff_x19);
  func_0x000107c351d4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b23b190();
  func_0x000107c2be8c();
  func_0x00010b23acec();
  return;
}



/* Entry: 10b23a420; end: 10b23a46b;  */

void FUN_10b23a420(void)

{
  return;
}



/* Entry: 10b23a46c; end: 10b23a4b7;  */

void FUN_10b23a46c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = **(long **)*param_1;
  puVar1 = (undefined8 *)(*(long **)*param_1)[1];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x00010b23b058();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_18 = *(undefined8 *)(lVar2 + 0x20);
  uStack_20 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  func_0x0001052b61cc(&uStack_20);
  return;
}



/* Entry: 10b23a4b8; end: 10b23a4db;  */

void FUN_10b23a4b8(long param_1)

{
  func_0x00010b23ad4c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b23a4dc; end: 10b23a4df;  */

void FUN_10b23a4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b23a4e0; end: 10b23a4f3;  */

void FUN_10b23a4e0(void)

{
  func_0x00010b23a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23a4f4; end: 10b23a50f;  */

long FUN_10b23a4f4(long param_1)

{
  func_0x000107c28090(param_1 + 0x20);
  FUN_10b563f04(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 10b23a510; end: 10b23a523;  */

void FUN_10b23a510(void)

{
  func_0x00010b23a530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


