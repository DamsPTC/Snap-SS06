/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00455fd8; end: 0045600b;  */

undefined8 * FUN_00455fd8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009e4ef8;
  param_1[1] = param_2;
  FUN_0045600c(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 0045600c; end: 00456057;  */

void FUN_0045600c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x750;
  __Znwm();
  FUN_004564e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 00456058; end: 00456117;  */

undefined8 * FUN_00456058(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009e4ef8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_00648d18(lVar1 + 0x6c8);
    FUN_00648d18(lVar1 + 0x640);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x628);
    FUN_00648d18(lVar1 + 0x598);
    FUN_00648d18(lVar1 + 0x510);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x4f8);
    FUN_00648d18(lVar1 + 0x468);
    FUN_00648d18(lVar1 + 0x3e0);
    func_0x00456170(lVar1 + 0x368);
    func_0x004561f0(lVar1 + 0x2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x2d8);
    func_0x00456270(lVar1 + 600);
    func_0x004561f0(lVar1 + 0x1e0);
    func_0x004562f0(lVar1 + 0x168);
    func_0x00456370(lVar1 + 0xf0);
    func_0x004561f0(lVar1 + 0x78);
    func_0x004563f0(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00456118; end: 0045611b;  */

undefined8 * FUN_00456118(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_009e4ef8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_00648d18(lVar1 + 0x6c8);
    FUN_00648d18(lVar1 + 0x640);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x628);
    FUN_00648d18(lVar1 + 0x598);
    FUN_00648d18(lVar1 + 0x510);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x4f8);
    FUN_00648d18(lVar1 + 0x468);
    FUN_00648d18(lVar1 + 0x3e0);
    func_0x00456170(lVar1 + 0x368);
    func_0x004561f0(lVar1 + 0x2f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x2d8);
    func_0x00456270(lVar1 + 600);
    func_0x004561f0(lVar1 + 0x1e0);
    func_0x004562f0(lVar1 + 0x168);
    func_0x00456370(lVar1 + 0xf0);
    func_0x004561f0(lVar1 + 0x78);
    func_0x004563f0(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0045611c; end: 0045612f;  */

void FUN_0045611c(void)

{
  FUN_00456058();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456130; end: 00456193;  */

long FUN_00456130(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 0x28))();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 00456194; end: 004561d3;  */

void FUN_00456194(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004561d4();
    }
  }
  return;
}



/* Entry: 004561d4; end: 00456213;  */

void FUN_004561d4(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456214; end: 00456253;  */

void FUN_00456214(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_00456254();
    }
  }
  return;
}



/* Entry: 00456254; end: 00456293;  */

void FUN_00456254(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456294; end: 004562d3;  */

void FUN_00456294(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004562d4();
    }
  }
  return;
}



/* Entry: 004562d4; end: 00456313;  */

void FUN_004562d4(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456314; end: 00456353;  */

void FUN_00456314(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_00456354();
    }
  }
  return;
}



/* Entry: 00456354; end: 00456393;  */

void FUN_00456354(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456394; end: 004563d3;  */

void FUN_00456394(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_004563d4();
    }
  }
  return;
}



/* Entry: 004563d4; end: 00456413;  */

void FUN_004563d4(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456414; end: 00456453;  */

void FUN_00456414(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00456470();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_00456454();
    }
  }
  return;
}



/* Entry: 00456454; end: 0045646f;  */

void FUN_00456454(void)

{
  func_0x00456490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456470; end: 004564e3;  */

void FUN_00456470(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*param_1 + 8);
  lVar2 = *(long *)param_1[1];
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  param_1[2] = 0;
  return;
}



/* Entry: 004564e4; end: 004568c3;  */

void FUN_004564e4(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 unaff_x21;
  
  func_0x004586d0();
  *param_1 = 0x32aaaba7;
  func_0x00458880();
  func_0x00458754(param_1 + 9);
  *(long *)(unaff_x19 + 0x60) = unaff_x19 + 0x60;
  *(long *)(unaff_x19 + 0x68) = unaff_x19 + 0x60;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  FUN_00456da0(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0xf0) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x120) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined8 *)(unaff_x19 + 0x128) = 0;
  *(undefined8 *)(unaff_x19 + 0x130) = unaff_x21;
  func_0x00458754(unaff_x19 + 0x138);
  *(long *)(unaff_x19 + 0x150) = unaff_x19 + 0x150;
  *(long *)(unaff_x19 + 0x158) = unaff_x19 + 0x150;
  *(undefined8 *)(unaff_x19 + 0x168) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x160) = 0;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1a8) = unaff_x21;
  func_0x00458754(unaff_x19 + 0x1b0);
  *(long *)(unaff_x19 + 0x1c8) = unaff_x19 + 0x1c8;
  *(long *)(unaff_x19 + 0x1d0) = unaff_x19 + 0x1c8;
  *(undefined8 *)(unaff_x19 + 0x1d8) = 0;
  FUN_00456da0(unaff_x19 + 0x1e0);
  *(undefined8 *)(unaff_x19 + 600) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x268) = 0;
  *(undefined8 *)(unaff_x19 + 0x260) = 0;
  *(undefined8 *)(unaff_x19 + 0x278) = 0;
  *(undefined8 *)(unaff_x19 + 0x270) = 0;
  *(undefined8 *)(unaff_x19 + 0x288) = 0;
  *(undefined8 *)(unaff_x19 + 0x280) = 0;
  *(undefined8 *)(unaff_x19 + 0x290) = 0;
  *(undefined8 *)(unaff_x19 + 0x298) = unaff_x21;
  func_0x00458754(unaff_x19 + 0x2a0);
  *(long *)(unaff_x19 + 0x2b8) = unaff_x19 + 0x2b8;
  *(long *)(unaff_x19 + 0x2c0) = unaff_x19 + 0x2b8;
  *(undefined8 *)(unaff_x19 + 0x2c8) = 0;
  func_0x004588c4();
  *(undefined8 *)(unaff_x19 + 0x2d0) = unaff_x21;
  func_0x004588f4(unaff_x19 + 0x2d8);
  func_0x004586ec();
  FUN_00456da0(unaff_x19 + 0x2f0);
  *(undefined8 *)(unaff_x19 + 0x368) = 0x32aaaba7;
  *(undefined8 *)(unaff_x19 + 0x378) = 0;
  *(undefined8 *)(unaff_x19 + 0x370) = 0;
  *(undefined8 *)(unaff_x19 + 0x388) = 0;
  *(undefined8 *)(unaff_x19 + 0x380) = 0;
  *(undefined8 *)(unaff_x19 + 0x398) = 0;
  *(undefined8 *)(unaff_x19 + 0x390) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a8) = unaff_x21;
  func_0x00458754(unaff_x19 + 0x3b0);
  *(long *)(unaff_x19 + 0x3c8) = unaff_x19 + 0x3c8;
  *(long *)(unaff_x19 + 0x3d0) = unaff_x19 + 0x3c8;
  *(undefined8 *)(unaff_x19 + 0x3d8) = 0;
  FUN_00648ba8(unaff_x19 + 0x3e0);
  FUN_00648ba8(unaff_x19 + 0x468);
  func_0x004588c4();
  *(undefined8 *)(unaff_x19 + 0x4f0) = unaff_x21;
  func_0x004588f4(unaff_x19 + 0x4f8);
  func_0x004586ec();
  FUN_00648ba8(unaff_x19 + 0x510);
  FUN_00648ba8(unaff_x19 + 0x598);
  func_0x004588c4();
  *(undefined8 *)(unaff_x19 + 0x620) = unaff_x21;
  func_0x004588f4(unaff_x19 + 0x628);
  func_0x004586ec();
  FUN_00648ba8(unaff_x19 + 0x640);
  FUN_00648ba8(unaff_x19 + 0x6c8);
  return;
}



/* Entry: 004568c4; end: 0045691b;  */

void FUN_004568c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00456dfc();
  func_0x0045893c(param_1,param_2,param_3);
  FUN_00456fc0();
  func_0x00458874();
  FUN_00456fe8();
  return;
}



/* Entry: 0045691c; end: 0045694f;  */

void FUN_0045691c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_00456950(param_1 + 0x168,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 00456950; end: 00456993;  */

void FUN_00456950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00457840();
  func_0x0045893c(param_1,param_2,param_3,param_4,param_5);
  FUN_004577bc();
  func_0x00458874();
  func_0x00457978();
  return;
}



/* Entry: 00456994; end: 004569b7;  */

void FUN_00456994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_004569b8(param_1 + 0x368,&uStack_20);
  return;
}



/* Entry: 004569b8; end: 004569e3;  */

void FUN_004569b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00457d90();
  func_0x0045893c(param_1,param_2,param_3);
  FUN_00457d84();
  func_0x00458874();
  func_0x00457ec8();
  return;
}



/* Entry: 004569e4; end: 00456a77;  */

void FUN_004569e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_9;
  uStack_28 = param_10;
  uStack_40 = param_11;
  uStack_38 = param_12;
  uStack_50 = in_stack_00000040;
  uStack_48 = in_stack_00000048;
  uStack_64 = param_7;
  uStack_60 = param_6;
  uStack_5c = param_5;
  uStack_58 = param_4;
  FUN_00456a78(param_1 + 0x3e0,param_2,param_3,&uStack_58,&uStack_5c,&uStack_60,&uStack_64,param_8,
               &uStack_30,&uStack_40,&stack0x00000020,&stack0x00000028,&stack0x00000030,
               &stack0x00000038,&uStack_50,&stack0x00000050,in_stack_00000058,in_stack_00000060);
  return;
}



/* Entry: 00456a78; end: 00456b4b;  */

void FUN_00456a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18)

{
  undefined8 uStack_58;
  
  uStack_58 = param_1;
  func_0x00458904();
  FUN_004581a4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  func_0x004588fc();
  func_0x0045871c();
  FUN_004583a4(&uStack_58);
  return;
}



/* Entry: 00456b4c; end: 00456b6f;  */

void FUN_00456b4c(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_00456b70(param_1 + 0x468,&uStack_18);
  return;
}



/* Entry: 00456b70; end: 00456bc3;  */

void FUN_00456b70(undefined8 param_1,undefined8 param_2)

{
  func_0x00458904();
  FUN_00457d48(param_1,param_2);
  func_0x004588fc();
  func_0x0045871c();
  func_0x004586e4();
  return;
}



/* Entry: 00456bc4; end: 00456c4b;  */

void FUN_00456bc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  param_1 = param_1 + 0x4f0;
  uStack_38 = param_3;
  FUN_00456c4c(param_1,(param_4[1] - *param_4) / 0x18);
  FUN_00456c70();
  func_0x00456c90(param_1,2,&uStack_38);
  lVar1 = param_4[1];
  for (lVar2 = *param_4; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00458844();
  }
  FUN_00456cd0(param_1);
  return;
}



/* Entry: 00456c4c; end: 00456c6f;  */

undefined8 FUN_00456c4c(void)

{
  undefined8 uStack_18;
  
  FUN_004583c8(&uStack_18);
  return uStack_18;
}



/* Entry: 00456c70; end: 00456ccf;  */

void FUN_00456c70(void)

{
  FUN_00458344();
  func_0x00458864();
  return;
}



/* Entry: 00456cd0; end: 00456d13;  */

void FUN_00456cd0(void)

{
  func_0x00458904();
  func_0x004588fc();
  func_0x0045871c();
  func_0x004586e4();
  return;
}



/* Entry: 00456d14; end: 00456d77;  */

void FUN_00456d14(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_00456c4c(param_1 + 0x620,(param_2[1] - *param_2) / 0x18);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00458844();
  }
  func_0x00458904();
  func_0x004588fc();
  func_0x0045871c();
  func_0x004586e4();
  return;
}



/* Entry: 00456d78; end: 00456d9f;  */

undefined8 FUN_00456d78(undefined8 param_1,undefined8 *param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (param_1,*param_2,param_2[1]);
  return param_1;
}



/* Entry: 00456da0; end: 00456dfb;  */

undefined8 *
FUN_00456da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  puVar1 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00458880();
  FUN_00456d78(puVar1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 00456dfc; end: 00456ea7;  */

long FUN_00456dfc(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0045856c();
  func_0x00458918();
  do {
    func_0x00458930();
    if ((bool)in_ZR) {
      func_0x00458734();
      func_0x00458954();
      func_0x00458744();
      func_0x00458948();
      func_0x0045873c();
      func_0x004586dc();
      func_0x00458600();
      func_0x0045853c();
      goto LAB_00456e70;
    }
    func_0x00458768();
  } while (extraout_x10 != 0);
  func_0x00458924();
  if (!(bool)in_ZR) {
    func_0x00458590();
  }
LAB_00456e70:
  func_0x00458620();
  func_0x004585c4(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x00458680();
  func_0x00458668();
  func_0x0045893c();
  FUN_00456fc0();
  func_0x00458874();
  FUN_00456fe8();
  return param_1;
}



/* Entry: 00456ea8; end: 00456eff;  */

void FUN_00456ea8(void)

{
  func_0x0045893c();
  FUN_00456fc0();
  func_0x00458874();
  FUN_00456fe8();
  return;
}



/* Entry: 00456f00; end: 00456f8b;  */

undefined8 * FUN_00456f00(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    func_0x0045875c();
    __ZNSt3__15mutex6unlockEv();
    *(undefined1 *)(unaff_x19 + 8) = 0;
    return param_1;
  }
  puVar1 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  __ZNSt3__120__throw_system_errorEiPKc(1,"unique_lock::unlock: not locked");
  func_0x0045875c();
  if (puVar1 == (undefined8 *)0x0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,"unique_lock::lock: references null mutex");
  }
  else if (*(char *)(unaff_x19 + 8) != '\x01') {
    __ZNSt3__15mutex4lockEv();
    *(undefined1 *)(unaff_x19 + 8) = 1;
    return puVar1;
  }
  puVar1 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 3);
  __ZNSt3__120__throw_system_errorEiPKc(0xb,"unique_lock::lock: already locked");
  *puVar1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 0xb);
  __ZNSt3__15mutexD1Ev(puVar1 + 3);
  return puVar1;
}



/* Entry: 00456f8c; end: 00456f8f;  */

undefined8 * FUN_00456f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00456f90; end: 00456fa3;  */

void FUN_00456f90(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00456fa4; end: 00456fbf;  */

void FUN_00456fa4(void)

{
  func_0x004585b4();
  func_0x004587e8();
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 00456fc0; end: 00456fe7;  */

void FUN_00456fc0(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00648c94(param_1,1,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x00649404();
  _sqlite3_bind_text();
  if (iVar3 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100b3);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00456fe8; end: 00457093;  */

void FUN_00456fe8(void)

{
  func_0x004585d8();
  func_0x0045700c();
  return;
}



/* Entry: 00457094; end: 0045713f;  */

long FUN_00457094(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0045856c();
  func_0x00458918();
  do {
    func_0x00458930();
    if ((bool)in_ZR) {
      func_0x00458734();
      func_0x00458954();
      func_0x00458744();
      func_0x00458948();
      func_0x0045873c();
      func_0x004586dc();
      func_0x00458600();
      func_0x0045853c();
      goto LAB_00457108;
    }
    func_0x00458768();
  } while (extraout_x10 != 0);
  func_0x00458924();
  if (!(bool)in_ZR) {
    func_0x00458590();
  }
LAB_00457108:
  func_0x00458620();
  func_0x004585c4(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x00458680();
  func_0x00458668();
  func_0x0045893c();
  FUN_00456fc0();
  func_0x00458874();
  func_0x004571cc();
  return param_1;
}



/* Entry: 00457140; end: 00457197;  */

void FUN_00457140(void)

{
  func_0x0045893c();
  FUN_00456fc0();
  func_0x00458874();
  func_0x004571cc();
  return;
}



/* Entry: 00457198; end: 0045719b;  */

undefined8 * FUN_00457198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 0045719c; end: 004571af;  */

void FUN_0045719c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004571b0; end: 004571ef;  */

void FUN_004571b0(void)

{
  func_0x004585b4();
  func_0x004587e8();
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004571f0; end: 00457223;  */

void FUN_004571f0(long param_1)

{
  func_0x00458630();
  func_0x00458854();
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_00457224();
  return;
}



/* Entry: 00457224; end: 004573f7;  */

void FUN_00457224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  func_0x0045875c();
  if ((param_1 != 0) && (FUN_006490e4(), (int)param_1 != 0)) {
    uVar1 = *unaff_x19;
    FUN_00648c94();
    func_0x0045874c(auStack_140);
    uVar2 = uVar1;
    func_0x00458820(auStack_128);
    func_0x0045880c();
    FUN_00644fbc();
    uVar3 = uVar1;
    uStack_110 = uVar2;
    func_0x00458804();
    uStack_108 = (undefined4)uVar3;
    uVar2 = uVar1;
    func_0x004587fc();
    uStack_104 = (undefined4)uVar2;
    uVar2 = uVar1;
    func_0x004587f4();
    uStack_100 = (undefined4)uVar2;
    uStack_d0 = 6;
    FUN_0045744c(auStack_f8,uVar1);
    uVar2 = uVar1;
    func_0x004587e0();
    uStack_c0 = 8;
    uVar3 = uVar1;
    uStack_d8 = uVar2;
    func_0x0045741c();
    uVar2 = uVar1;
    uStack_c8 = uVar3;
    uStack_90 = uStack_c0;
    func_0x004587d0();
    uVar3 = uVar1;
    uStack_b8 = uVar2;
    func_0x004587c8();
    uVar2 = uVar1;
    uStack_b0 = uVar3;
    func_0x004587c0();
    uStack_a8 = (undefined4)uVar2;
    uStack_a4 = (undefined1)((ulong)uVar2 >> 0x20);
    uVar2 = uVar1;
    func_0x004587b8();
    uVar3 = uVar1;
    uStack_a0 = uVar2;
    func_0x004587a8();
    uVar2 = uVar1;
    uStack_98 = uVar3;
    func_0x004587a0();
    uStack_88 = uVar2;
    func_0x0045878c(auStack_80,uVar1);
    func_0x00458784(auStack_60,uVar1);
    if (*(char *)(unaff_x19 + 0x21) == '\x01') {
      FUN_00457550(unaff_x19 + 1,auStack_140);
    }
    else {
      FUN_0045759c(unaff_x19 + 1,auStack_140);
    }
    func_0x00457764(auStack_140);
    return;
  }
  puVar4 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x21) == '\x01') {
    func_0x00457764();
    *(undefined1 *)(puVar4 + 0x20) = 0;
  }
  return;
}



/* Entry: 004573f8; end: 0045744b;  */

void FUN_004573f8(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x00457764();
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return;
}



/* Entry: 0045744c; end: 004574bf;  */

void FUN_0045744c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_2;
  _sqlite3_column_type();
  bVar1 = (int)uVar2 != 5;
  if (bVar1) {
    FUN_00644fe8(&uStack_48,param_2,param_3);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    func_0x004586ec();
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 004574c0; end: 0045752f;  */

void FUN_004574c0(int param_1)

{
  func_0x0045890c();
  if (param_1 != 5) {
    func_0x004588dc();
  }
  return;
}



/* Entry: 00457530; end: 0045754f;  */

void FUN_00457530(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00457550; end: 0045759b;  */

void FUN_00457550(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00458708();
  func_0x004588e8();
  func_0x00458828();
  FUN_004575fc();
  func_0x004588cc(unaff_x20 + 0x68,unaff_x19 + 0x68);
  FUN_004575fc(unaff_x20 + 0xc0,unaff_x19 + 0xc0);
  FUN_004575fc(unaff_x20 + 0xe0,unaff_x19 + 0xe0);
  return;
}



/* Entry: 0045759c; end: 004575b7;  */

void FUN_0045759c(long param_1)

{
  FUN_00457688();
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* Entry: 004575b8; end: 004575fb;  */

void FUN_004575b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 004575fc; end: 0045761f;  */

undefined8 FUN_004575fc(undefined8 param_1)

{
  FUN_00457620();
  return param_1;
}



/* Entry: 00457620; end: 00457663;  */

void FUN_00457620(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 00457664; end: 00457687;  */

void FUN_00457664(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 00457688; end: 0045779b;  */

void FUN_00457688(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  
  func_0x00458690();
  uVar1 = *(undefined4 *)(param_3 + 0x40);
  *(undefined1 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined1 *)(param_2 + 0x60) = 0;
  if (*(char *)(param_3 + 0x60) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(param_2 + 0x50) = uVar3;
    *(undefined8 *)(param_2 + 0x48) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  func_0x004588cc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  *(undefined1 *)(unaff_x19 + 0xd8) = 0;
  if (*(char *)(unaff_x20 + 0xd8) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 200);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x20 + 0xd0);
    *(undefined8 *)(unaff_x19 + 200) = uVar3;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined8 *)(unaff_x20 + 0xc0) = 0;
    *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xe0) = 0;
  *(undefined1 *)(unaff_x19 + 0xf8) = 0;
  if (*(char *)(unaff_x20 + 0xf8) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x20 + 0xf0);
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
    *(undefined8 *)(unaff_x20 + 0xe8) = 0;
    *(undefined8 *)(unaff_x20 + 0xf0) = 0;
    *(undefined8 *)(unaff_x20 + 0xe0) = 0;
    *(undefined1 *)(unaff_x19 + 0xf8) = 1;
  }
  return;
}



/* Entry: 0045779c; end: 004577bb;  */

void FUN_0045779c(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x00457764();
  }
  return;
}



/* Entry: 004577bc; end: 0045780f;  */

void FUN_004577bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_00457818(param_1,1,param_2);
  FUN_00457810(param_1,2,param_3);
  func_0x006493a0(param_1,3);
  iVar1 = (int)param_1;
  _sqlite3_bind_int64();
  if (iVar1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00457810; end: 00457817;  */

void FUN_00457810(int param_1)

{
  func_0x006493a0();
  _sqlite3_bind_int64();
  if (param_1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00457818; end: 0045783f;  */

void FUN_00457818(int param_1,undefined8 param_2,long param_3)

{
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x006493a0();
    _sqlite3_bind_int64();
    if (param_1 != 0) {
      func_0x0064935c();
      func_0x00649398();
      func_0x006493f4();
      func_0x00461914(&UNK_00910092);
      func_0x00649378();
      func_0x00649340();
      func_0x00649370();
      func_0x00649388();
    }
    return;
  }
  func_0x004588ac();
  return;
}



/* Entry: 00457840; end: 004578eb;  */

long FUN_00457840(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0045856c();
  func_0x00458918();
  do {
    func_0x00458930();
    if ((bool)in_ZR) {
      func_0x00458734();
      func_0x00458954();
      func_0x00458744();
      func_0x00458948();
      func_0x0045873c();
      func_0x004586dc();
      func_0x00458600();
      func_0x0045853c();
      goto LAB_004578b4;
    }
    func_0x00458768();
  } while (extraout_x10 != 0);
  func_0x00458924();
  if (!(bool)in_ZR) {
    func_0x00458590();
  }
LAB_004578b4:
  func_0x00458620();
  func_0x004585c4(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x00458680();
  func_0x00458668();
  func_0x0045893c();
  FUN_004577bc();
  func_0x00458874();
  func_0x00457978();
  return param_1;
}



/* Entry: 004578ec; end: 00457943;  */

void FUN_004578ec(void)

{
  func_0x0045893c();
  FUN_004577bc();
  func_0x00458874();
  func_0x00457978();
  return;
}



/* Entry: 00457944; end: 00457947;  */

undefined8 * FUN_00457944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00457948; end: 0045795b;  */

void FUN_00457948(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045795c; end: 0045799b;  */

void FUN_0045795c(void)

{
  func_0x004585b4();
  func_0x004587e8();
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 0045799c; end: 004579cf;  */

void FUN_0045799c(long param_1)

{
  func_0x00458630();
  func_0x00458854();
  *(undefined1 *)(param_1 + 0xf8) = 0;
  FUN_004579d0();
  return;
}



/* Entry: 004579d0; end: 00457a43;  */

void FUN_004579d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_110 [240];
  
  func_0x0045875c();
  if ((param_1 != 0) && (FUN_006490e4(), (int)param_1 != 0)) {
    FUN_00457a9c(auStack_110,*unaff_x19);
    FUN_00457a44(unaff_x19 + 1,auStack_110);
    func_0x00457cf4(auStack_110);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1f) == '\x01') {
    func_0x00457cf4();
    *(undefined1 *)(puVar1 + 0x1e) = 0;
  }
  return;
}



/* Entry: 00457a44; end: 00457a77;  */

long FUN_00457a44(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    FUN_00457bd0();
  }
  else {
    FUN_00457c1c();
  }
  return param_1;
}



/* Entry: 00457a78; end: 00457a9b;  */

void FUN_00457a78(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x00457cf4();
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}



/* Entry: 00457a9c; end: 00457bcf;  */

void FUN_00457a9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_00648c94();
  func_0x0045874c(param_1);
  uVar1 = param_2;
  func_0x00458820(param_1 + 0x18);
  func_0x0045880c();
  FUN_00644fbc();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = param_2;
  func_0x00458804();
  *(int *)(param_1 + 0x38) = (int)uVar1;
  uVar1 = param_2;
  func_0x004587fc();
  *(int *)(param_1 + 0x3c) = (int)uVar1;
  uVar1 = param_2;
  func_0x004587f4();
  *(int *)(param_1 + 0x40) = (int)uVar1;
  func_0x004588d4(param_1 + 0x48,param_2);
  uVar1 = param_2;
  func_0x004587e0();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x68) = param_3;
  uVar2 = 8;
  uVar1 = param_2;
  FUN_00644fbc();
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = param_2;
  func_0x004587d0();
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_2;
  func_0x004587c8();
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = param_2;
  func_0x004587c0();
  *(int *)(param_1 + 0x88) = (int)uVar1;
  *(char *)(param_1 + 0x8c) = (char)((ulong)uVar1 >> 0x20);
  uVar1 = param_2;
  func_0x004587b8();
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_2;
  func_0x004587a8();
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined1 *)(param_1 + 0xa0) = uVar2;
  uVar1 = param_2;
  func_0x004587a0();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  func_0x0045878c(param_1 + 0xb0,param_2);
  func_0x00458784(param_1 + 0xd0,param_2);
  return;
}



/* Entry: 00457bd0; end: 00457c1b;  */

void FUN_00457bd0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00458708();
  func_0x004588e8();
  func_0x00458828();
  FUN_004575b8();
  func_0x004588b4(unaff_x20 + 0x60,unaff_x19 + 0x60);
  FUN_004575fc(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  FUN_004575fc(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
  return;
}



/* Entry: 00457c1c; end: 00457c37;  */

void FUN_00457c1c(long param_1)

{
  FUN_00457c38();
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}



/* Entry: 00457c38; end: 00457d27;  */

void FUN_00457c38(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x00458690();
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  uVar2 = *(undefined8 *)(param_3 + 0x50);
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  func_0x004588b4(param_2 + 0x60,param_3 + 0x60);
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined1 *)(unaff_x19 + 200) = 0;
  if (*(char *)(unaff_x20 + 200) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
    *(undefined8 *)(unaff_x20 + 0xc0) = 0;
    *(undefined8 *)(unaff_x20 + 0xb0) = 0;
    *(undefined1 *)(unaff_x19 + 200) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(unaff_x20 + 0xe8) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
    *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x20 + 0xe0);
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    *(undefined8 *)(unaff_x20 + 0xe0) = 0;
    *(undefined8 *)(unaff_x20 + 0xd0) = 0;
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  return;
}



/* Entry: 00457d28; end: 00457d47;  */

void FUN_00457d28(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x00457cf4();
  }
  return;
}



/* Entry: 00457d48; end: 00457d6f;  */

void FUN_00457d48(undefined8 param_1)

{
  int iVar1;
  
  func_0x006493a0(param_1,1);
  iVar1 = (int)param_1;
  _sqlite3_bind_int64();
  if (iVar1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00457d70; end: 00457d83;  */

void FUN_00457d70(void)

{
  func_0x00457d54();
  return;
}



/* Entry: 00457d84; end: 00457d8f;  */

void FUN_00457d84(undefined8 param_1,long param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x006493a0();
    iVar1 = (int)param_1;
    _sqlite3_bind_int64();
    if (iVar1 != 0) {
      func_0x0064935c();
      func_0x00649398();
      func_0x006493f4();
      func_0x00461914(&UNK_00910092);
      func_0x00649378();
      func_0x00649340();
      func_0x00649370();
      func_0x00649388();
    }
    return;
  }
  func_0x004588ac(param_1,1);
  return;
}



/* Entry: 00457d90; end: 00457e3b;  */

long FUN_00457d90(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0045856c();
  func_0x00458918();
  do {
    func_0x00458930();
    if ((bool)in_ZR) {
      func_0x00458734();
      func_0x00458954();
      func_0x00458744();
      func_0x00458948();
      func_0x0045873c();
      func_0x004586dc();
      func_0x00458600();
      func_0x0045853c();
      goto LAB_00457e04;
    }
    func_0x00458768();
  } while (extraout_x10 != 0);
  func_0x00458924();
  if (!(bool)in_ZR) {
    func_0x00458590();
  }
LAB_00457e04:
  func_0x00458620();
  func_0x004585c4(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x00458680();
  func_0x00458668();
  func_0x0045893c();
  FUN_00457d84();
  func_0x00458874();
  func_0x00457ec8();
  return param_1;
}



/* Entry: 00457e3c; end: 00457e93;  */

void FUN_00457e3c(void)

{
  func_0x0045893c();
  FUN_00457d84();
  func_0x00458874();
  func_0x00457ec8();
  return;
}



/* Entry: 00457e94; end: 00457e97;  */

undefined8 * FUN_00457e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 00457e98; end: 00457eab;  */

void FUN_00457e98(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00457eac; end: 00457eeb;  */

void FUN_00457eac(void)

{
  func_0x004585b4();
  func_0x004587e8();
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 00457eec; end: 00457f1f;  */

void FUN_00457eec(long param_1)

{
  func_0x00458630();
  func_0x00458854();
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_00457f20();
  return;
}



/* Entry: 00457f20; end: 00457f93;  */

void FUN_00457f20(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_88 [104];
  
  func_0x0045875c();
  if ((param_1 != 0) && (FUN_006490e4(), (int)param_1 != 0)) {
    FUN_00457fec(auStack_88,*unaff_x19);
    FUN_00457f94(unaff_x19 + 1,auStack_88);
    FUN_00458158(auStack_88);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0xe) == '\x01') {
    FUN_00458158();
    *(undefined1 *)(puVar1 + 0xd) = 0;
  }
  return;
}



/* Entry: 00457f94; end: 00457fc7;  */

long FUN_00457f94(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_00458064();
  }
  else {
    FUN_004580a8();
  }
  return param_1;
}



/* Entry: 00457fc8; end: 00457feb;  */

void FUN_00457fc8(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_00458158();
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



/* Entry: 00457fec; end: 00458063;  */

void FUN_00457fec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_00648c94();
  func_0x0045874c(param_1);
  uVar2 = 1;
  uVar1 = param_2;
  func_0x0045741c();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  func_0x0045880c(param_1 + 0x28);
  FUN_0045744c();
  FUN_0045744c(param_1 + 0x48,param_2,3);
  return;
}



/* Entry: 00458064; end: 004580a7;  */

void FUN_00458064(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00458708();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  FUN_004575fc(unaff_x20 + 0x28,unaff_x19 + 0x28);
  FUN_004575fc(unaff_x20 + 0x48,unaff_x19 + 0x48);
  return;
}



/* Entry: 004580a8; end: 004580c3;  */

void FUN_004580a8(long param_1)

{
  FUN_004580c4();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 004580c4; end: 00458157;  */

void FUN_004580c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar2 = param_2[10];
    uVar1 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}



/* Entry: 00458158; end: 00458183;  */

void FUN_00458158(long param_1)

{
  FUN_00457530(param_1 + 0x48);
  FUN_00457530(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00458184; end: 004581a3;  */

void FUN_00458184(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_00458158();
  }
  return;
}



/* Entry: 004581a4; end: 00458343;  */

/* WARNING: Possible PIC construction at 0x00458228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00458234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0045822c) */
/* WARNING: Removing unreachable block (ram,0x00458238) */
/* WARNING: Removing unreachable block (ram,0x00458350) */
/* WARNING: Removing unreachable block (ram,0x00458360) */
/* WARNING: Removing unreachable block (ram,0x0045872c) */
/* WARNING: Removing unreachable block (ram,0x0045835c) */

void FUN_004581a4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00648c94(param_1,1,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x00649404();
  _sqlite3_bind_text();
  if (iVar3 != 0) {
    func_0x006493ac();
    func_0x00649398();
    func_0x00649418();
    func_0x00461914(&UNK_009100b3);
    func_0x006493e4();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}



/* Entry: 00458344; end: 0045834f;  */

void FUN_00458344(int param_1)

{
  func_0x006493a0();
  _sqlite3_bind_int64();
  if (param_1 != 0) {
    func_0x0064935c();
    func_0x00649398();
    func_0x006493f4();
    func_0x00461914(&UNK_00910092);
    func_0x00649378();
    func_0x00649340();
    func_0x00649370();
    func_0x00649388();
  }
  return;
}


