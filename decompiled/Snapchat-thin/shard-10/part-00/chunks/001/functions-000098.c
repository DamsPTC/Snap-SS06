/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107482b1c; end: 107482b3b;  */

void FUN_107482b1c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107482b3c();
  }
  return;
}



/* Entry: 107482b3c; end: 107482b5f;  */

undefined8 FUN_107482b3c(undefined8 param_1)

{
  FUN_107482b60(param_1,0);
  return param_1;
}



/* Entry: 107482b60; end: 107482b77;  */

void FUN_107482b60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107482af4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107482b78; end: 107482b93;  */

void FUN_107482b78(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107482af4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107482b94; end: 107482bfb;  */

void FUN_107482b94(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010748421c();
  FUN_107482bfc();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_107482d58(unaff_x20 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 107482bfc; end: 107482c1f;  */

undefined8 FUN_107482bfc(undefined8 param_1)

{
  FUN_107482c20();
  return param_1;
}



/* Entry: 107482c20; end: 107482c53;  */

void FUN_107482c20(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107482b3c();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107482c90();
  func_0x000107484614();
  return;
}



/* Entry: 107482c54; end: 107482c8f;  */

void FUN_107482c54(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107482b3c();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107482c90; end: 107482cbb;  */

undefined8 FUN_107482c90(undefined8 param_1,undefined8 *param_2)

{
  FUN_107482cbc(param_1,*param_2);
  return param_1;
}



/* Entry: 107482cbc; end: 107482d1f;  */

void FUN_107482cbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  func_0x000107482cec();
  *param_1 = uVar1;
  return;
}



/* Entry: 107482d20; end: 107482d43;  */

void FUN_107482d20(void)

{
  func_0x0001074841c4();
  FUN_107482d44();
  return;
}



/* Entry: 107482d44; end: 107482d57;  */

void FUN_107482d44(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107482c90();
    func_0x000107484614();
    return;
  }
  return;
}



/* Entry: 107482d58; end: 107482d7b;  */

undefined8 FUN_107482d58(undefined8 param_1)

{
  FUN_107482d7c();
  return param_1;
}



/* Entry: 107482d7c; end: 107482dcf;  */

void FUN_107482d7c(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x38) != -1 || *(int *)(param_2 + 0x38) != -1) {
    if (*(int *)(param_2 + 0x38) == -1) {
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099ae88)[*(uint *)(param_1 + 0x38)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    func_0x0001074844e8();
  }
  return;
}



/* Entry: 107482dd0; end: 107482de3;  */

void FUN_107482dd0(long *param_1)

{
  if (*(int *)(*param_1 + 0x38) != 0) {
    func_0x0001074843d4();
    FUN_107482e0c();
  }
  return;
}



/* Entry: 107482de4; end: 107482e0b;  */

void FUN_107482de4(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x0001074843d4();
    FUN_107482e0c();
  }
  return;
}



/* Entry: 107482e0c; end: 107482e2f;  */

void FUN_107482e0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072ca524(lVar1);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 107482e30; end: 107482e37;  */

void FUN_107482e30(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x38) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001074843d4();
  FUN_107482e6c();
  return;
}



/* Entry: 107482e38; end: 107482e6b;  */

void FUN_107482e38(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 0x38) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001074843d4();
  FUN_107482e6c();
  return;
}



/* Entry: 107482e6c; end: 107482e77;  */

void FUN_107482e6c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010748421c(*param_1,param_1[1]);
  func_0x0001072ca524();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 7) = 1;
  return;
}



/* Entry: 107482e78; end: 107482ea7;  */

void FUN_107482e78(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010748421c();
  func_0x0001072ca524();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 7) = 1;
  return;
}



/* Entry: 107482ea8; end: 107482eaf;  */

void FUN_107482ea8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x38) == 2) {
    func_0x00010748421c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
    return;
  }
  func_0x0001074843d4();
  FUN_107482f14();
  return;
}



/* Entry: 107482eb0; end: 107482ee3;  */

void FUN_107482eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    func_0x00010748421c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
    return;
  }
  func_0x0001074843d4();
  FUN_107482f14();
  return;
}



/* Entry: 107482ee4; end: 107482f13;  */

void FUN_107482ee4(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748421c();
  func_0x00010727e15c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 107482f14; end: 107482f1f;  */

void FUN_107482f14(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748421c(*param_1,param_1[1]);
  func_0x0001072ca524();
  func_0x00010748465c();
  FUN_107339130();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 107482f20; end: 107482f4b;  */

void FUN_107482f20(void)

{
  long unaff_x20;
  
  func_0x00010748421c();
  func_0x0001072ca524();
  func_0x00010748465c();
  FUN_107339130();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 107482f4c; end: 107482f6f;  */

undefined8 FUN_107482f4c(undefined8 param_1)

{
  FUN_107482f70();
  return param_1;
}



/* Entry: 107482f70; end: 107482fa3;  */

void FUN_107482f70(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107482a9c();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107482fe0();
  func_0x000107484614();
  return;
}



/* Entry: 107482fa4; end: 107482fdf;  */

void FUN_107482fa4(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107482a9c();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107482fe0; end: 10748300b;  */

undefined8 FUN_107482fe0(undefined8 param_1,undefined8 *param_2)

{
  FUN_10748300c(param_1,*param_2);
  return param_1;
}



/* Entry: 10748300c; end: 10748306f;  */

void FUN_10748300c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xc0;
  __Znwm();
  func_0x00010748303c();
  *param_1 = uVar1;
  return;
}



/* Entry: 107483070; end: 107483093;  */

void FUN_107483070(void)

{
  func_0x0001074841c4();
  FUN_107483094();
  return;
}



/* Entry: 107483094; end: 1074830a7;  */

void FUN_107483094(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107482fe0();
    func_0x000107484614();
    return;
  }
  return;
}



/* Entry: 1074830a8; end: 1074830cb;  */

void FUN_1074830a8(void)

{
  func_0x00010748469c();
  FUN_1074830cc();
  return;
}



/* Entry: 1074830cc; end: 10748310f;  */

void FUN_1074830cc(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074844c8();
  func_0x0001072ca37c();
  iVar1 = *(int *)(unaff_x20 + 0x90);
  if (iVar1 != -1) {
    func_0x000107484410(&PTR_FUN_1109b3b80);
    *(int *)(unaff_x19 + 0x90) = iVar1;
  }
  return;
}



/* Entry: 107483110; end: 10748312b;  */

void FUN_107483110(void)

{
  return;
}



/* Entry: 10748312c; end: 10748314f;  */

undefined8 FUN_10748312c(undefined8 param_1)

{
  FUN_107483150();
  return param_1;
}



/* Entry: 107483150; end: 1074831a3;  */

void FUN_107483150(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x90) != -1 || *(int *)(param_2 + 0x90) != -1) {
    if (*(int *)(param_2 + 0x90) == -1) {
      if (*(uint *)(param_1 + 0x90) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099ae10)[*(uint *)(param_1 + 0x90)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      return;
    }
    func_0x0001074844e8();
  }
  return;
}



/* Entry: 1074831a4; end: 1074831b7;  */

void FUN_1074831a4(long *param_1)

{
  if (*(int *)(*param_1 + 0x90) != 0) {
    func_0x0001074843d4();
    FUN_1074831e0();
  }
  return;
}



/* Entry: 1074831b8; end: 1074831df;  */

void FUN_1074831b8(long param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    func_0x0001074843d4();
    FUN_1074831e0();
  }
  return;
}



/* Entry: 1074831e0; end: 107483203;  */

void FUN_1074831e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072ca37c(lVar1);
  *(undefined4 *)(lVar1 + 0x90) = 0;
  return;
}



/* Entry: 107483204; end: 10748320b;  */

void FUN_107483204(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x90) == 1) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000104c2f1f0();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x0001074843d4();
  FUN_107483240();
  return;
}



/* Entry: 10748320c; end: 10748323f;  */

void FUN_10748320c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x90) == 1) {
    func_0x0001072747d8(param_2,param_3);
    func_0x000104c2f1f0();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  func_0x0001074843d4();
  FUN_107483240();
  return;
}



/* Entry: 107483240; end: 10748324b;  */

void FUN_107483240(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748421c(*param_1,param_1[1]);
  func_0x0001072ca37c();
  func_0x00010748465c();
  func_0x00010726ccd4();
  *(undefined4 *)(unaff_x20 + 0x90) = 1;
  return;
}



/* Entry: 10748324c; end: 107483277;  */

void FUN_10748324c(void)

{
  long unaff_x20;
  
  func_0x00010748421c();
  func_0x0001072ca37c();
  func_0x00010748465c();
  func_0x00010726ccd4();
  *(undefined4 *)(unaff_x20 + 0x90) = 1;
  return;
}



/* Entry: 107483278; end: 10748327f;  */

void FUN_107483278(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x90) == 2) {
    func_0x00010748421c(param_2,param_3);
    func_0x00010727e15c();
    FUN_107406ac4(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x0001074843d4();
  FUN_1074832e0();
  return;
}



/* Entry: 107483280; end: 1074832b3;  */

void FUN_107483280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x90) == 2) {
    func_0x00010748421c(param_2,param_3);
    func_0x00010727e15c();
    FUN_107406ac4(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x0001074843d4();
  FUN_1074832e0();
  return;
}



/* Entry: 1074832b4; end: 1074832df;  */

void FUN_1074832b4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748421c();
  func_0x00010727e15c();
  FUN_107406ac4(unaff_x20 + 0x28,unaff_x19 + 0x28);
  return;
}



/* Entry: 1074832e0; end: 1074832eb;  */

void FUN_1074832e0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748421c(*param_1,param_1[1]);
  func_0x0001072ca37c();
  func_0x00010748465c();
  func_0x0001072ca350();
  *(undefined4 *)(unaff_x20 + 0x90) = 2;
  return;
}



/* Entry: 1074832ec; end: 107483317;  */

void FUN_1074832ec(void)

{
  long unaff_x20;
  
  func_0x00010748421c();
  func_0x0001072ca37c();
  func_0x00010748465c();
  func_0x0001072ca350();
  *(undefined4 *)(unaff_x20 + 0x90) = 2;
  return;
}



/* Entry: 107483318; end: 107483337;  */

void FUN_107483318(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107483338(&uStack_11,param_1);
  return;
}



/* Entry: 107483338; end: 1074833bf;  */

undefined1 * FUN_107483338(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x000107484180();
  uStack_28 = extraout_x8;
  FUN_1074833c0(auStack_40,1);
  FUN_107483418(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001074834c8();
  func_0x000107484150(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001074834c8();
  func_0x0001074841d4();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_1074833e8();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1074833c0; end: 1074833e7;  */

long FUN_1074833c0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1074833e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1074833e8; end: 107483417;  */

undefined8 * FUN_1074833e8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xe38e38e38e38e4) {
    puVar1 = (undefined8 *)(param_2 * 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b3bc0;
  FUN_10748347c(param_1 + 3);
  return param_1;
}



/* Entry: 107483418; end: 107483457;  */

undefined8 * FUN_107483418(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b3bc0;
  FUN_10748347c(param_1 + 3);
  return param_1;
}



/* Entry: 107483458; end: 10748345b;  */

void FUN_107483458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10748345c; end: 10748346f;  */

void FUN_10748345c(void)

{
  FUN_1074834b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107483470; end: 10748347b;  */

undefined8 * FUN_107483470(long param_1)

{
  func_0x0001073bc804(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10748347c; end: 1074834b7;  */

undefined8 FUN_10748347c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010778687c(param_1,&uStack_30);
  FUN_1073db32c(&uStack_30);
  return param_1;
}



/* Entry: 1074834b8; end: 1074834d7;  */

void FUN_1074834b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074834d8; end: 10748355f;  */

undefined8 * FUN_1074834d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107483510(&uStack_30);
  return param_1;
}



/* Entry: 107483560; end: 10748358f;  */

void FUN_107483560(void)

{
  func_0x00010748469c();
  FUN_107483590();
  return;
}



/* Entry: 107483590; end: 1074835d3;  */

void FUN_107483590(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074844c8();
  func_0x0001072ca37c();
  iVar1 = *(int *)(unaff_x20 + 0x90);
  if (iVar1 != -1) {
    func_0x000107484410(&PTR_FUN_1109b3c00);
    *(int *)(unaff_x19 + 0x90) = iVar1;
  }
  return;
}



/* Entry: 1074835d4; end: 1074835ef;  */

void FUN_1074835d4(void)

{
  return;
}



/* Entry: 1074835f0; end: 107483613;  */

void FUN_1074835f0(long param_1)

{
  func_0x0001074841c4();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000107484560();
  return;
}



/* Entry: 107483614; end: 10748366f;  */

long FUN_107483614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432c64();
  func_0x000107482cec(lVar1 + 0x68,param_3);
  func_0x000107432f04(param_1 + 200,param_4);
  func_0x00010748303c(param_1 + 0x120,param_5);
  return param_1;
}



/* Entry: 107483670; end: 10748374b;  */

undefined1 * FUN_107483670(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_320 [16];
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined1 auStack_2e0 [40];
  undefined1 auStack_2b8 [192];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [152];
  undefined8 uStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  func_0x000107484180();
  uStack_48 = extraout_x8;
  FUN_1073398d4(auStack_88,param_2);
  func_0x000107482cec(auStack_e8,param_4);
  uVar2 = *(char *)(param_2 + 0x58) == '\0';
  lVar1 = param_2 + 0x40;
  if ((bool)uVar2) {
    lVar1 = param_3 + 8;
  }
  func_0x0001074846b0(lVar1);
  puVar7 = auStack_88;
  puVar8 = auStack_e8;
  FUN_10748382c(param_1,puVar7,puVar8,auStack_110);
  FUN_107482af4(auStack_e8);
  puVar3 = auStack_88;
  func_0x0001072ca524();
  func_0x000107484150(uStack_48);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_107482af4(auStack_e8);
  puVar4 = auStack_88;
  func_0x0001072ca524();
  func_0x0001074841d4();
  puVar9 = auStack_2e0;
  pcStack_118 = FUN_10748374c;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107484180();
  uStack_158 = extraout_x8_01;
  FUN_107483560(auStack_1f0,puVar4 + 8);
  func_0x00010748303c(auStack_2b8,puVar8);
  uVar2 = puVar4[0xb8] == '\0';
  puVar3 = puVar4 + 0xa0;
  if ((bool)uVar2) {
    puVar3 = puVar7 + 8;
  }
  func_0x0001074846b0(puVar3);
  puVar3 = auStack_2b8;
  FUN_1074838d8(extraout_x8_00,auStack_1f8,puVar3);
  func_0x000107482a54(auStack_2b8);
  puVar5 = auStack_1f0;
  func_0x0001072ca37c();
  func_0x000107484150(uStack_158);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000107482a54(auStack_2b8);
  puVar6 = auStack_1f0;
  func_0x0001072ca37c(puVar6);
  func_0x0001074841d4();
  pcStack_2e8 = FUN_10748382c;
  puStack_310 = puVar8;
  puStack_308 = puVar7 + 8;
  puStack_300 = puVar4;
  puStack_2f8 = puVar5;
  ppuStack_2f0 = &puStack_120;
  func_0x0001074841c4();
  func_0x000107484230();
  FUN_1073390b4(puVar6 + 0x20);
  if (((puVar9[8] & 1) != 0) || ((puVar9[0x18] & 1) != 0)) {
    FUN_107483894(auStack_320,puVar3);
    FUN_107482bfc(puVar5,auStack_320);
    FUN_107482b1c(auStack_320);
  }
  return puVar5;
}



/* Entry: 10748374c; end: 10748382b;  */

undefined1 * FUN_10748374c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [192];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [152];
  undefined8 uStack_48;
  
  puVar6 = auStack_1d0;
  func_0x000107484180();
  uStack_48 = extraout_x8;
  FUN_107483560(auStack_e0,param_2 + 8);
  func_0x00010748303c(auStack_1a8,param_4);
  uVar2 = *(char *)(param_2 + 0xb8) == '\0';
  lVar1 = param_2 + 0xa0;
  if ((bool)uVar2) {
    lVar1 = param_3 + 8;
  }
  func_0x0001074846b0(lVar1);
  puVar5 = auStack_1a8;
  FUN_1074838d8(param_1,auStack_e8,puVar5);
  func_0x000107482a54(auStack_1a8);
  puVar3 = auStack_e0;
  func_0x0001072ca37c();
  func_0x000107484150(uStack_48);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107482a54(auStack_1a8);
  puVar4 = auStack_e0;
  func_0x0001072ca37c(puVar4);
  func_0x0001074841d4();
  pcStack_1d8 = FUN_10748382c;
  uStack_200 = param_4;
  lStack_1f8 = param_3 + 8;
  lStack_1f0 = param_2;
  puStack_1e8 = puVar3;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x0001074841c4();
  func_0x000107484230();
  FUN_1073390b4(puVar4 + 0x20);
  if (((puVar6[8] & 1) != 0) || ((puVar6[0x18] & 1) != 0)) {
    FUN_107483894(auStack_210,puVar5);
    FUN_107482bfc(puVar3,auStack_210);
    FUN_107482b1c(auStack_210);
  }
  return puVar3;
}



/* Entry: 10748382c; end: 107483893;  */

void FUN_10748382c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_40 [16];
  
  func_0x0001074841c4();
  func_0x000107484230();
  FUN_1073390b4(param_1 + 0x20);
  if (((*(byte *)(param_4 + 8) & 1) != 0) || ((*(byte *)(param_4 + 0x18) & 1) != 0)) {
    FUN_107483894(auStack_40,param_3);
    FUN_107482bfc();
    FUN_107482b1c(auStack_40);
  }
  return;
}



/* Entry: 107483894; end: 1074838ab;  */

void FUN_107483894(void)

{
  FUN_1074838ac();
  func_0x000107484614();
  return;
}



/* Entry: 1074838ac; end: 1074838d7;  */

undefined8 FUN_1074838ac(undefined8 param_1,undefined8 param_2)

{
  FUN_107482cbc(param_1,param_2);
  return param_1;
}



/* Entry: 1074838d8; end: 10748393b;  */

void FUN_1074838d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_40 [16];
  
  func_0x0001074841c4();
  func_0x000107484230();
  func_0x000107484560();
  if (((*(byte *)(param_4 + 8) & 1) != 0) || ((*(byte *)(param_4 + 0x18) & 1) != 0)) {
    FUN_10748393c(auStack_40,param_3);
    FUN_107482f4c();
    FUN_107482a7c(auStack_40);
  }
  return;
}



/* Entry: 10748393c; end: 107483953;  */

void FUN_10748393c(void)

{
  FUN_107483954();
  func_0x000107484614();
  return;
}



/* Entry: 107483954; end: 10748397f;  */

undefined8 FUN_107483954(undefined8 param_1,undefined8 param_2)

{
  FUN_10748300c(param_1,param_2);
  return param_1;
}



/* Entry: 107483980; end: 107483a9b;  */

void FUN_107483980(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  func_0x000107484470();
  FUN_107438698(param_5 + 0x20);
  uVar2 = (ulong)*(uint *)(unaff_x19 + 0x60);
  if (*(uint *)(unaff_x19 + 0x60) == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109b3c18)[uVar2])(&stack0xffffffffffffffa0,unaff_x19 + 0x20);
  func_0x0001074842d8();
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    if (unaff_x20 < *(long *)(unaff_x19 + 0x18)) {
      iVar1 = (int)unaff_x19 + 0x20;
      FUN_107438624();
      if (iVar1 == 0) {
        if (unaff_x20 < *(long *)(unaff_x19 + 0x10)) {
          func_0x0001074841dc();
          FUN_107483980();
        }
        else {
          fVar3 = (float)(unaff_x20 - *(long *)(unaff_x19 + 0x10));
          fVar4 = 1e+09;
          func_0x0001074841ec();
          fVar5 = fVar3 / fVar4;
          func_0x0001074841dc();
          FUN_107483980();
          fStack_70 = fVar3;
          fStack_6c = fVar4;
          uStack_68 = param_3;
          uStack_64 = param_4;
          func_0x000107484608((double)fVar5);
          FUN_1073b426c();
          FUN_107438adc(&fStack_70,&stack0xffffffffffffffa0);
        }
        func_0x0001074842d8();
        goto LAB_107483a74;
      }
    }
    func_0x000107484648();
    FUN_1074334f8();
    FUN_1074335f0(&fStack_70);
  }
LAB_107483a74:
  func_0x0001074845e8();
  return;
}



/* Entry: 107483a9c; end: 107483ab7;  */

undefined4 FUN_107483a9c(long *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}



/* Entry: 107483ab8; end: 107483b67;  */

void FUN_107483ab8(undefined8 param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_288;
  float fStack_284;
  undefined1 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 auStack_1e8 [400];
  undefined8 uStack_58;
  
  func_0x000107484180();
  param_3 = (undefined8 *)*param_3;
  uVar3 = *(undefined4 *)*param_3;
  uStack_58 = extraout_x8;
  func_0x0001077512dc(auStack_1e8);
  func_0x000107484370();
  func_0x000107484688();
  FUN_1074388a0();
  func_0x0001074842d8();
  func_0x000107484420();
  func_0x000107484428();
  func_0x000107484150(uStack_58);
  if ((bool)in_ZR) {
    func_0x0001074845e8();
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_4;
  func_0x000107484420();
  func_0x000107484428();
  func_0x0001074841d4();
  func_0x000107484470();
  FUN_107483c5c(lVar2 + 0x20);
  uStack_278 = uVar3;
  uStack_274 = param_2;
  if (*(char *)(param_4 + 8) == '\x01') {
    if ((long)param_3 < *(long *)(param_4 + 0x18)) {
      iVar1 = (int)param_4 + 0x20;
      func_0x000107483c6c();
      if (iVar1 == 0) {
        if ((long)param_3 < *(long *)(param_4 + 0x10)) {
          func_0x0001074841dc();
          FUN_107483b68();
        }
        else {
          fVar4 = (float)((long)param_3 - *(long *)(param_4 + 0x10));
          fVar5 = 1e+09;
          func_0x0001074841ec();
          fVar6 = fVar4 / fVar5;
          func_0x0001074841dc();
          FUN_107483b68();
          fStack_288 = fVar4;
          fStack_284 = fVar5;
          func_0x000107484608((double)fVar6);
          FUN_1073b426c();
          FUN_107483c8c(&fStack_288,&uStack_278);
        }
        goto LAB_107483c40;
      }
    }
    fStack_288 = (float)((uint)fStack_288 & 0xffffff00);
    uStack_280 = 0;
    FUN_107482bfc(param_4,&fStack_288);
    FUN_107482b1c(&fStack_288);
  }
LAB_107483c40:
  func_0x0001074845e8();
  return;
}



/* Entry: 107483b68; end: 107483c5b;  */

void FUN_107483b68(undefined4 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_58;
  float fStack_54;
  undefined1 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  func_0x000107484470();
  FUN_107483c5c(param_3 + 0x20);
  uStack_48 = param_1;
  uStack_44 = param_2;
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    if (unaff_x20 < *(long *)(unaff_x19 + 0x18)) {
      iVar1 = (int)unaff_x19 + 0x20;
      func_0x000107483c6c();
      if (iVar1 == 0) {
        if (unaff_x20 < *(long *)(unaff_x19 + 0x10)) {
          func_0x0001074841dc();
          FUN_107483b68();
        }
        else {
          fVar2 = (float)(unaff_x20 - *(long *)(unaff_x19 + 0x10));
          fVar3 = 1e+09;
          func_0x0001074841ec();
          fVar4 = fVar2 / fVar3;
          func_0x0001074841dc();
          FUN_107483b68();
          fStack_58 = fVar2;
          fStack_54 = fVar3;
          func_0x000107484608((double)fVar4);
          FUN_1073b426c();
          FUN_107483c8c(&fStack_58,&uStack_48);
        }
        goto LAB_107483c40;
      }
    }
    fStack_58 = (float)((uint)fStack_58 & 0xffffff00);
    uStack_50 = 0;
    FUN_107482bfc();
    FUN_107482b1c(&fStack_58);
  }
LAB_107483c40:
  func_0x0001074845e8();
  return;
}



/* Entry: 107483c5c; end: 107483c8b;  */

void FUN_107483c5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010748421c(param_2);
  FUN_1073f6e6c();
  func_0x00010748465c();
  FUN_107483d00(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 107483c8c; end: 107483cb3;  */

void FUN_107483c8c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_107483de0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107483cb4; end: 107483cdb;  */

void FUN_107483cb4(void)

{
  func_0x00010748421c();
  FUN_1073f6e6c();
  func_0x00010748465c();
  FUN_107483d00(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 107483cdc; end: 107483cff;  */

void FUN_107483cdc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107483d00(&uStack_18);
  return;
}



/* Entry: 107483d00; end: 107483d47;  */

void FUN_107483d00(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x38);
  if (*(uint *)(param_2 + 0x38) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000107483d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_DAT_1109b3c30)[uVar1])();
  return;
}



/* Entry: 107483d48; end: 107483ddf;  */

undefined1  [12]
FUN_107483d48(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auStack_1d8 [400];
  undefined8 uStack_48;
  
  func_0x00010748421c();
  func_0x000107484180();
  uVar1 = *(undefined4 *)*param_3;
  uVar2 = 0;
  uStack_48 = extraout_x8;
  func_0x0001077512dc(uVar1,auStack_1d8);
  func_0x000107484370();
  func_0x000107484688();
  FUN_107339498();
  func_0x000107484420();
  func_0x000107484428();
  func_0x000107484150(uStack_48);
  if ((bool)in_ZR) {
    func_0x0001074845e8();
    auVar4._4_8_ = param_2;
    auVar4._0_4_ = uVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  func_0x000107484420();
  func_0x000107484428();
  func_0x0001074841d4();
  dVar3 = 1.0 - (double)CONCAT44(uVar2,uVar1);
  auVar5._0_4_ = (float)((double)(float)*param_5 * (double)CONCAT44(uVar2,uVar1) +
                        (double)(float)*param_4 * dVar3);
  auVar5._4_4_ = (float)((double)(float)((ulong)*param_5 >> 0x20) * (double)CONCAT44(uVar2,uVar1) +
                        (double)(float)((ulong)*param_4 >> 0x20) * dVar3);
  auVar5._8_4_ = 0;
  return auVar5;
}



/* Entry: 107483de0; end: 107483e0f;  */

undefined1  [12]
FUN_107483de0(double param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [12];
  
  auVar1._0_4_ = (float)((double)(float)*param_4 * param_1 +
                        (double)(float)*param_3 * (1.0 - param_1));
  auVar1._4_4_ = (float)((double)(float)((ulong)*param_4 >> 0x20) * param_1 +
                        (double)(float)((ulong)*param_3 >> 0x20) * (1.0 - param_1));
  auVar1._8_4_ = 0;
  return auVar1;
}



/* Entry: 107483e10; end: 107483efb;  */

ulong FUN_107483e10(ulong param_1)

{
  int iVar1;
  long *unaff_x19;
  long unaff_x20;
  float fVar2;
  ulong uVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_60 [16];
  
  func_0x000107484470();
  while( true ) {
    FUN_1073e48a4();
    if (*(char *)(unaff_x19 + 1) != '\x01') {
      return param_1;
    }
    if (unaff_x19[3] <= unaff_x20) break;
    iVar1 = (int)unaff_x19 + 0x20;
    uVar3 = param_1;
    FUN_107438f58();
    if (iVar1 != 0) break;
    if (unaff_x19[2] <= unaff_x20) {
      fVar2 = (float)(unaff_x20 - unaff_x19[2]);
      fVar5 = 1e+09;
      func_0x0001074841ec(fVar2,0x4e6e6b28);
      fVar5 = fVar2 / fVar5;
      func_0x0001074841dc();
      FUN_107483e10();
      dVar4 = (double)fVar5;
      func_0x000107484608(dVar4);
      FUN_1073b426c();
      return (ulong)(uint)(float)(dVar4 * (double)(float)param_1 + (1.0 - dVar4) * (double)fVar2);
    }
    unaff_x19 = (long *)*unaff_x19;
    param_1 = uVar3;
  }
  func_0x000107484648();
  FUN_10743390c();
  FUN_107410c54(auStack_60);
  return param_1;
}



/* Entry: 107483efc; end: 10748407f;  */

undefined1 * FUN_107483efc(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  ulong uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 auStack_118 [192];
  undefined8 uStack_58;
  
  func_0x0001074844c8();
  func_0x000107484180();
  uStack_58 = extraout_x8;
  FUN_1073f6b88(param_2 + 0x20);
  uVar4 = (ulong)*(uint *)(unaff_x20 + 0x17);
  uVar1 = *(uint *)(unaff_x20 + 0x17) == 0xffffffff;
  if ((bool)uVar1) {
    uVar4 = 0xffffffffffffffff;
  }
  uStack_1d8 = param_3;
  (*(code *)(&PTR_DAT_1109b3c48)[uVar4])(auStack_118,&uStack_1d8,unaff_x20 + 5);
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    uVar1 = param_4 == unaff_x20[3];
    if (param_4 < (long)unaff_x20[3]) {
      iVar2 = (int)unaff_x20 + 0x20;
      FUN_107484080();
      if (iVar2 == 0) {
        lVar5 = unaff_x20[2];
        uVar1 = param_4 - lVar5 == 0;
        if (param_4 < lVar5) {
          func_0x0001074844d4();
        }
        else {
          lVar6 = unaff_x20[3];
          func_0x0001074844d4(&uStack_1d8,*unaff_x20);
          func_0x000107484608((double)((((float)(param_4 - lVar5) / 1e+09) * 1e+09) /
                                      (float)(lVar6 - lVar5)));
          FUN_1073b426c();
          FUN_1073bdfe8();
          func_0x0001073bc804(&uStack_1d8);
        }
        goto LAB_107483fa8;
      }
    }
    uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
    uStack_1d0 = 0;
    FUN_107482f4c();
    FUN_107482a7c(&uStack_1d8);
  }
  FUN_1073be024();
LAB_107483fa8:
  puVar3 = auStack_118;
  func_0x0001073bc804(puVar3);
  func_0x000107484150(uStack_58);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_118;
  func_0x0001073bc804();
  func_0x0001074841d4();
  if (*(int *)(puVar3 + 0x98) != 0) {
    return (undefined1 *)(ulong)((puVar3[0x18] & 2) == 0 && *(int *)(puVar3 + 0x98) != 1);
  }
  return (undefined1 *)0x0;
}



/* Entry: 107484080; end: 1074840b7;  */

bool FUN_107484080(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    return (*(byte *)(param_1 + 0x18) & 2) == 0 && *(int *)(param_1 + 0x98) != 1;
  }
  return false;
}



/* Entry: 1074840b8; end: 1074840f7;  */

undefined8 * FUN_1074840b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  FUN_1073be024(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 1074840f8; end: 107484123;  */

void FUN_1074840f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_107484124(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 107484124; end: 1074846c3;  */

void FUN_107484124(undefined8 param_1,double *param_2,double *param_3,float *param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *param_4 = (float)*param_2;
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 1074846c4; end: 107484777;  */

undefined8 * FUN_1074846c4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_107484778(auStack_40,param_2);
  FUN_10748d6a0(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  FUN_1073ad37c(auStack_30);
  FUN_10748a68c(auStack_40);
  *param_1 = &PTR_FUN_1109b3c70;
  lVar1 = param_1[3] + 0x548;
  FUN_1074847b0(param_1 + 0xc);
  func_0x00010785f1f4();
  param_1[0x1e2] = lVar1;
  param_1[0x1e4] = 0;
  *(undefined4 *)(param_1 + 0x1e5) = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  return param_1;
}



/* Entry: 107484778; end: 1074847af;  */

void FUN_107484778(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10748d500(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10748a68c(&uStack_30);
  return;
}



/* Entry: 1074847b0; end: 10748538f;  */

void FUN_1074847b0(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_18b8 [56];
  undefined1 auStack_1880 [88];
  undefined1 auStack_1828 [56];
  undefined1 auStack_17f0 [88];
  undefined1 auStack_1798 [56];
  undefined1 auStack_1760 [88];
  undefined1 auStack_1708 [56];
  undefined1 auStack_16d0 [88];
  undefined1 auStack_1678 [56];
  undefined1 auStack_1640 [8];
  undefined1 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined1 auStack_1620 [56];
  undefined1 auStack_15e8 [56];
  undefined1 auStack_15b0 [88];
  undefined1 auStack_1558 [56];
  undefined1 auStack_1520 [88];
  undefined1 auStack_14c8 [56];
  undefined1 auStack_1490 [88];
  undefined1 auStack_1438 [56];
  undefined1 auStack_1400 [88];
  undefined1 auStack_13a8 [56];
  undefined1 auStack_1370 [88];
  undefined1 auStack_1318 [56];
  undefined1 auStack_12e0 [88];
  undefined1 auStack_1288 [56];
  undefined1 auStack_1250 [88];
  undefined1 auStack_11f8 [56];
  undefined1 auStack_11c0 [88];
  undefined1 auStack_1168 [56];
  undefined1 auStack_1130 [88];
  undefined1 auStack_10d8 [56];
  undefined1 auStack_10a0 [88];
  undefined1 auStack_1048 [56];
  undefined1 auStack_1010 [88];
  undefined1 auStack_fb8 [56];
  undefined1 auStack_f80 [88];
  undefined1 auStack_f28 [56];
  undefined1 auStack_ef0 [88];
  undefined1 auStack_e98 [72];
  undefined1 auStack_e50 [104];
  undefined1 auStack_de8 [88];
  undefined1 auStack_d90 [120];
  undefined1 auStack_d18 [64];
  undefined1 auStack_cd8 [96];
  undefined1 auStack_c78 [88];
  undefined1 auStack_c20 [120];
  undefined1 auStack_ba8 [72];
  undefined1 auStack_b60 [104];
  undefined1 auStack_af8 [88];
  undefined1 auStack_aa0 [120];
  undefined1 auStack_a28 [64];
  undefined1 auStack_9e8 [40];
  undefined1 auStack_9c0 [56];
  undefined1 auStack_988 [72];
  undefined1 auStack_940 [104];
  undefined1 auStack_8d8 [72];
  undefined1 auStack_890 [104];
  undefined1 auStack_828 [72];
  undefined1 auStack_7e0 [104];
  undefined1 auStack_778 [72];
  undefined1 auStack_730 [104];
  undefined1 auStack_6c8 [72];
  undefined1 auStack_680 [104];
  undefined1 auStack_618 [72];
  undefined1 auStack_5d0 [104];
  undefined1 auStack_568 [72];
  undefined1 auStack_520 [104];
  undefined1 auStack_4b8 [64];
  undefined1 auStack_478 [96];
  undefined1 auStack_418 [72];
  undefined1 auStack_3d0 [104];
  undefined1 auStack_368 [64];
  undefined1 auStack_328 [96];
  undefined1 auStack_2c8 [64];
  undefined1 auStack_288 [96];
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [96];
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [96];
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010748f1bc();
  uStack_38 = extraout_x8_00;
  func_0x00010727d614(auStack_f28,param_1);
  func_0x00010743b0a8(auStack_ef0,auStack_f28);
  FUN_107438188(auStack_e8,param_1 + 0x60);
  func_0x00010743b05c(auStack_a0,auStack_e8);
  FUN_1073398d4(auStack_188,param_1 + 0xd0);
  func_0x000107483538(auStack_148,auStack_188);
  func_0x00010727d614(auStack_fb8,param_1 + 0x138);
  func_0x00010743b0a8(auStack_f80,auStack_fb8);
  FUN_1073398d4(auStack_228,param_1 + 0x198);
  func_0x000107483538(auStack_1e8,auStack_228);
  FUN_1073398d4(auStack_2c8,param_1 + 0x200);
  func_0x000107483538(auStack_288,auStack_2c8);
  func_0x00010727d614(auStack_1048,param_1 + 0x268);
  func_0x00010743b0a8(auStack_1010,auStack_1048);
  func_0x00010727d614(auStack_10d8,param_1 + 0x2c8);
  func_0x00010743b0a8(auStack_10a0,auStack_10d8);
  func_0x00010727d614(auStack_1168,param_1 + 0x328);
  func_0x00010743b0a8(auStack_1130,auStack_1168);
  func_0x00010727d614(auStack_11f8,param_1 + 0x388);
  func_0x00010743b0a8(auStack_11c0,auStack_11f8);
  FUN_1073398d4(auStack_368,param_1 + 1000);
  func_0x000107483538(auStack_328,auStack_368);
  func_0x00010727fe7c(auStack_1288,param_1 + 0x450);
  func_0x00010748d6d8(auStack_1250,auStack_1288);
  func_0x00010727d614(auStack_1318,param_1 + 0x4b0);
  func_0x00010743b0a8(auStack_12e0,auStack_1318);
  func_0x00010727d614(auStack_13a8,param_1 + 0x510);
  func_0x00010743b0a8(auStack_1370,auStack_13a8);
  func_0x00010727d614(auStack_1438,param_1 + 0x570);
  func_0x00010743b0a8(auStack_1400,auStack_1438);
  FUN_107438188(auStack_418,param_1 + 0x5d0);
  func_0x00010743b05c(auStack_3d0,auStack_418);
  FUN_1073398d4(auStack_4b8,param_1 + 0x640);
  func_0x000107483538(auStack_478,auStack_4b8);
  FUN_10748d6fc(auStack_14c8,param_1 + 0x6a8);
  func_0x00010748d7a0(auStack_1490,auStack_14c8);
  func_0x00010727fe7c(auStack_1558,param_1 + 0x708);
  func_0x00010748d6d8(auStack_1520,auStack_1558);
  FUN_107438188(auStack_568,param_1 + 0x768);
  func_0x00010743b05c(auStack_520,auStack_568);
  func_0x00010727d614(auStack_15e8,param_1 + 0x7d8);
  func_0x00010743b0a8(auStack_15b0,auStack_15e8);
  func_0x00010727fd2c(auStack_618,param_1 + 0x838);
  func_0x00010748d7c4(auStack_5d0,auStack_618);
  func_0x00010727fd2c(auStack_6c8,param_1 + 0x8a8);
  func_0x00010748d7c4(auStack_680,auStack_6c8);
  func_0x00010727fd2c(auStack_778,param_1 + 0x918);
  func_0x00010748d7c4(auStack_730,auStack_778);
  func_0x00010727fd2c(auStack_828,param_1 + 0x988);
  func_0x00010748d7c4(auStack_7e0,auStack_828);
  func_0x00010727fd2c(auStack_8d8,param_1 + 0x9f8);
  func_0x00010748d7c4(auStack_890,auStack_8d8);
  FUN_10748d7e8(auStack_1678,param_1 + 0xa68);
  auStack_1640[0] = 0;
  uStack_1638 = 0;
  uStack_1628 = 0;
  uStack_1630 = 0;
  FUN_10748b344(auStack_1620,auStack_1678);
  func_0x00010727d614(auStack_1708,param_1 + 0xac8);
  func_0x00010743b0a8(auStack_16d0,auStack_1708);
  func_0x00010727fd2c(auStack_988,param_1 + 0xb28);
  func_0x00010748d7c4(auStack_940,auStack_988);
  FUN_1073398d4(auStack_a28,param_1 + 0xb98);
  func_0x000107483538(auStack_9e8,auStack_a28);
  FUN_10748d888(auStack_af8,param_1 + 0xc00);
  func_0x00010748d930(auStack_aa0,auStack_af8);
  func_0x00010727d614(auStack_1798,param_1 + 0xc80);
  func_0x00010743b0a8(auStack_1760,auStack_1798);
  func_0x00010727d614(auStack_1828,param_1 + 0xce0);
  func_0x00010743b0a8(auStack_17f0,auStack_1828);
  func_0x00010727fd2c(auStack_ba8,param_1 + 0xd40);
  func_0x00010748d7c4(auStack_b60,auStack_ba8);
  FUN_10748d888(auStack_c78,param_1 + 0xdb0);
  func_0x00010748d930(auStack_c20,auStack_c78);
  FUN_1073398d4(auStack_d18,param_1 + 0xe30);
  func_0x000107483538(auStack_cd8,auStack_d18);
  FUN_10748d888(auStack_de8,param_1 + 0xe98);
  func_0x00010748d930(auStack_d90,auStack_de8);
  func_0x00010727d614(auStack_18b8,param_1 + 0xf18);
  func_0x00010743b0a8(auStack_1880,auStack_18b8);
  func_0x00010727fd2c(auStack_e98,param_1 + 0xf78);
  func_0x00010748d7c4(auStack_e50,auStack_e98);
  FUN_10748d954(extraout_x8,auStack_ef0,auStack_a0,auStack_148,auStack_f80,auStack_1e8,auStack_288,
                auStack_1010,auStack_10a0,auStack_1130,auStack_11c0,auStack_328,auStack_1250,
                auStack_12e0,auStack_1370,auStack_1400,auStack_3d0,auStack_478,auStack_1490,
                auStack_1520,auStack_520,auStack_15b0,auStack_5d0,auStack_680,auStack_730,
                auStack_7e0,auStack_890,auStack_1640,auStack_16d0,auStack_940,auStack_9e8,
                auStack_aa0,auStack_1760,auStack_17f0,auStack_b60,auStack_c20,auStack_cd8,
                auStack_d90,auStack_1880,auStack_e50);
  func_0x00010748a800(auStack_e50);
  func_0x00010727fc70(auStack_e98);
  func_0x000107410c2c(auStack_1880);
  func_0x000107266a30(auStack_18b8);
  func_0x00010748a86c(auStack_d90);
  FUN_10748a890(auStack_de8);
  FUN_107482af4(auStack_cd8);
  func_0x0001072ca524(auStack_d18);
  func_0x00010748a86c(auStack_c20);
  FUN_10748a890(auStack_c78);
  func_0x00010748a800(auStack_b60);
  func_0x00010727fc70(auStack_ba8);
  func_0x000107410c2c(auStack_17f0);
  func_0x000107266a30(auStack_1828);
  func_0x000107410c2c(auStack_1760);
  func_0x000107266a30(auStack_1798);
  func_0x00010748a86c(auStack_aa0);
  FUN_10748a890(auStack_af8);
  FUN_107482af4(auStack_9e8);
  func_0x0001072ca524(auStack_a28);
  func_0x00010748fbf4();
  func_0x00010748fc3c();
  func_0x000107410c2c(auStack_16d0);
  func_0x000107266a30(auStack_1708);
  func_0x00010748a928(auStack_1640);
  FUN_10748a94c(auStack_1678);
  func_0x00010748fc00();
  func_0x00010748fc60();
  func_0x00010748fcb4();
  func_0x00010748fcfc();
  func_0x00010748fd38();
  func_0x00010748fbc4();
  func_0x00010748f80c(auStack_9c0);
  func_0x00010748fc48();
  func_0x00010748fbdc();
  func_0x00010748fd14();
  func_0x000107410c2c(auStack_15b0);
  func_0x000107266a30(auStack_15e8);
  func_0x00010748fc0c();
  func_0x00010748fc78();
  func_0x00010748a9e4(auStack_1520);
  func_0x00010727fc1c(auStack_1558);
  FUN_10748aa80(auStack_1490);
  FUN_10748aaa4(auStack_14c8);
  func_0x00010748fc54();
  func_0x00010748fca8();
  func_0x00010748fcf0();
  func_0x00010748fd2c();
  func_0x000107410c2c(auStack_1400);
  func_0x000107266a30(auStack_1438);
  func_0x000107410c2c(auStack_1370);
  func_0x000107266a30(auStack_13a8);
  func_0x00010748f824();
  func_0x000107266a30(auStack_1318);
  func_0x00010748a9e4(auStack_1250);
  func_0x00010727fc1c(auStack_1288);
  func_0x00010748fc6c();
  func_0x00010748fcc0();
  func_0x000107410c2c(auStack_11c0);
  func_0x000107266a30(auStack_11f8);
  func_0x000107410c2c(auStack_1130);
  func_0x000107266a30(auStack_1168);
  func_0x000107410c2c(auStack_10a0);
  func_0x000107266a30(auStack_10d8);
  func_0x000107410c2c(auStack_1010);
  func_0x000107266a30(auStack_1048);
  func_0x00010748fbb8();
  func_0x00010748fbe8();
  func_0x00010748fc18();
  func_0x00010748fc84();
  func_0x000107410c2c(auStack_f80);
  func_0x000107266a30(auStack_fb8);
  func_0x00010748fbd0();
  func_0x00010748fd08();
  FUN_1074335c8(auStack_a0);
  FUN_107432d98(auStack_e8);
  func_0x000107410c2c(auStack_ef0);
  func_0x000107266a30(auStack_f28);
  func_0x00010748f188(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107410c2c(auStack_1880);
  func_0x000107266a30(auStack_18b8);
  func_0x00010748a86c(auStack_d90);
  FUN_10748a890(auStack_de8);
  FUN_107482af4(auStack_cd8);
  func_0x0001072ca524(auStack_d18);
  do {
    func_0x00010748a86c(auStack_c20);
    FUN_10748a890(auStack_c78);
    func_0x00010748a800(auStack_b60);
    func_0x00010727fc70(auStack_ba8);
    func_0x000107410c2c(auStack_17f0);
    func_0x000107266a30(auStack_1828);
    func_0x000107410c2c(auStack_1760);
    func_0x000107266a30(auStack_1798);
    func_0x00010748a86c(auStack_aa0);
    FUN_10748a890(auStack_af8);
    FUN_107482af4(auStack_9e8);
    func_0x0001072ca524(auStack_a28);
    func_0x00010748fbf4();
    func_0x00010748fc3c();
    func_0x000107410c2c(auStack_16d0);
    func_0x000107266a30(auStack_1708);
    func_0x00010748a928(auStack_1640);
    FUN_10748a94c(auStack_1678);
    func_0x00010748fc00();
    func_0x00010748fc60();
    func_0x00010748fcb4();
    func_0x00010748fcfc();
    func_0x00010748fd38();
    func_0x00010748fbc4();
    func_0x00010748f80c(auStack_9c0);
    func_0x00010748fc48();
    func_0x00010748fbdc();
    func_0x00010748fd14();
    func_0x000107410c2c(auStack_15b0);
    func_0x000107266a30(auStack_15e8);
    func_0x00010748fc0c();
    func_0x00010748fc78();
    func_0x00010748a9e4(auStack_1520);
    func_0x00010727fc1c(auStack_1558);
    FUN_10748aa80(auStack_1490);
    FUN_10748aaa4(auStack_14c8);
    func_0x00010748fc54();
    func_0x00010748fca8();
    func_0x00010748fcf0();
    func_0x00010748fd2c();
    func_0x000107410c2c(auStack_1400);
    func_0x000107266a30(auStack_1438);
    func_0x000107410c2c(auStack_1370);
    func_0x000107266a30(auStack_13a8);
    func_0x00010748f824();
    func_0x000107266a30(auStack_1318);
    func_0x00010748a9e4(auStack_1250);
    func_0x00010727fc1c(auStack_1288);
    func_0x00010748fc6c();
    func_0x00010748fcc0();
    func_0x000107410c2c(auStack_11c0);
    func_0x000107266a30(auStack_11f8);
    func_0x000107410c2c(auStack_1130);
    func_0x000107266a30(auStack_1168);
    func_0x000107410c2c(auStack_10a0);
    func_0x000107266a30(auStack_10d8);
    func_0x000107410c2c(auStack_1010);
    func_0x000107266a30(auStack_1048);
    func_0x00010748fbb8();
    func_0x00010748fbe8();
    func_0x00010748fc18();
    func_0x00010748fc84();
    func_0x000107410c2c(auStack_f80);
    func_0x000107266a30(auStack_fb8);
    func_0x00010748fbd0();
    func_0x00010748fd08();
    FUN_1074335c8(auStack_a0);
    FUN_107432d98(auStack_e8);
    func_0x000107410c2c(auStack_ef0);
    func_0x000107266a30(auStack_f28);
    func_0x00010748f298();
  } while( true );
}



/* Entry: 107485390; end: 1074853bf;  */

undefined8 * FUN_107485390(undefined8 *param_1)

{
  FUN_10748ab6c(param_1 + 0x1e7);
  func_0x00010748a6b0(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074853c0; end: 1074853c3;  */

undefined8 * FUN_1074853c0(undefined8 *param_1)

{
  FUN_10748ab6c(param_1 + 0x1e7);
  func_0x00010748a6b0(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074853c4; end: 1074853d7;  */

void FUN_1074853c4(void)

{
  FUN_107485390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074853d8; end: 1074862d3;  */

void FUN_1074853d8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  long lStack_36e0;
  undefined8 uStack_36d8;
  undefined8 uStack_36c8;
  undefined8 uStack_36c0;
  undefined8 uStack_36b8;
  undefined8 uStack_36b0;
  undefined8 uStack_36a8;
  undefined8 uStack_36a0;
  undefined8 uStack_3698;
  undefined8 uStack_3690;
  undefined8 uStack_3688;
  undefined8 uStack_3680;
  undefined8 uStack_3678;
  undefined8 uStack_3670;
  undefined8 uStack_3668;
  undefined8 uStack_3660;
  undefined1 auStack_3658 [56];
  undefined1 auStack_3620 [56];
  undefined1 auStack_35e8 [56];
  undefined1 auStack_35b0 [56];
  long lStack_3578;
  undefined8 uStack_3570;
  undefined8 uStack_3568;
  undefined8 uStack_3550;
  undefined8 uStack_3548;
  undefined1 auStack_3518 [72];
  undefined4 uStack_34d0;
  undefined4 uStack_34cc;
  undefined1 auStack_34c8 [56];
  undefined4 uStack_3490;
  undefined4 uStack_348c;
  undefined1 auStack_3488 [64];
  undefined1 auStack_3448 [56];
  undefined4 uStack_3410;
  undefined4 uStack_340c;
  undefined4 uStack_3408;
  undefined4 uStack_3404;
  undefined4 uStack_3400;
  undefined1 uStack_33fc;
  undefined4 uStack_33f8;
  undefined4 uStack_33f4;
  undefined1 auStack_33f0 [56];
  undefined1 auStack_33b8 [72];
  undefined4 uStack_3370;
  undefined4 uStack_336c;
  undefined1 uStack_3368;
  undefined1 uStack_3367;
  undefined1 auStack_3360 [72];
  undefined4 uStack_3318;
  undefined4 uStack_3314;
  undefined4 uStack_3310;
  undefined4 uStack_330c;
  undefined4 uStack_3308;
  undefined4 uStack_3304;
  undefined4 uStack_3300;
  undefined4 uStack_32fc;
  undefined4 uStack_32f8;
  undefined4 uStack_32f4;
  undefined4 uStack_32f0;
  undefined4 uStack_32ec;
  undefined4 uStack_32e8;
  undefined4 uStack_32e4;
  undefined4 uStack_32e0;
  undefined4 uStack_32dc;
  undefined4 uStack_32d8;
  undefined4 uStack_32d4;
  undefined4 uStack_32d0;
  undefined4 uStack_32cc;
  undefined4 uStack_32c8;
  undefined4 uStack_32c4;
  undefined4 uStack_32c0;
  undefined4 uStack_32bc;
  undefined4 uStack_32b8;
  undefined4 uStack_32b4;
  undefined4 uStack_32b0;
  undefined4 uStack_32ac;
  undefined4 uStack_32a8;
  undefined8 uStack_32a4;
  undefined8 uStack_329c;
  undefined8 uStack_3294;
  undefined8 uStack_328c;
  undefined4 uStack_3284;
  undefined4 uStack_3280;
  undefined4 uStack_327c;
  undefined4 uStack_3278;
  undefined4 uStack_3274;
  undefined4 uStack_3270;
  undefined8 uStack_326c;
  undefined8 uStack_3264;
  undefined8 uStack_325c;
  undefined8 uStack_3254;
  undefined4 uStack_324c;
  undefined4 uStack_3248;
  undefined8 uStack_3244;
  undefined8 uStack_323c;
  undefined8 uStack_3234;
  undefined8 uStack_322c;
  undefined4 uStack_3224;
  undefined4 uStack_3218;
  undefined4 uStack_3214;
  long lStack_3210;
  ulong uStack_3208;
  undefined8 uStack_3200;
  long lStack_31c8;
  ulong uStack_31c0;
  undefined8 *puStack_31b8;
  undefined1 auStack_3180 [64];
  long lStack_3140;
  undefined8 uStack_3138;
  undefined8 uStack_2df8;
  undefined1 auStack_2c58 [88];
  undefined1 auStack_2c00 [88];
  undefined1 auStack_2ba8 [88];
  undefined1 auStack_2b50 [88];
  undefined1 auStack_2af8 [88];
  undefined1 auStack_2aa0 [88];
  undefined1 auStack_2a48 [88];
  undefined1 auStack_29f0 [88];
  undefined1 auStack_2998 [88];
  undefined1 auStack_2940 [8];
  undefined1 uStack_2938;
  long lStack_2930;
  long lStack_2928;
  undefined1 auStack_2920 [56];
  undefined1 auStack_28e8 [88];
  undefined1 auStack_2890 [88];
  undefined1 auStack_2838 [88];
  undefined1 auStack_27e0 [88];
  undefined1 auStack_2788 [88];
  undefined1 auStack_2730 [88];
  undefined1 auStack_26d8 [88];
  undefined1 auStack_2680 [88];
  undefined1 auStack_2628 [88];
  undefined1 auStack_25d0 [88];
  undefined1 auStack_2578 [88];
  undefined1 auStack_2520 [88];
  undefined1 auStack_24c8 [88];
  undefined1 auStack_2470 [88];
  undefined1 auStack_2418 [88];
  undefined1 auStack_23c0 [88];
  undefined1 auStack_2368 [88];
  undefined1 auStack_2310 [88];
  undefined1 auStack_22b8 [88];
  undefined1 auStack_2260 [88];
  undefined1 auStack_2208 [88];
  undefined1 auStack_21b0 [88];
  undefined1 auStack_2158 [88];
  undefined1 auStack_2100 [88];
  long alStack_20a8 [11];
  undefined1 auStack_2050 [88];
  long alStack_1ff8 [11];
  undefined1 auStack_1fa0 [104];
  undefined1 auStack_1f38 [96];
  undefined1 auStack_1ed8 [88];
  undefined1 auStack_1e80 [96];
  undefined1 auStack_1e20 [96];
  undefined1 auStack_1dc0 [88];
  undefined1 auStack_1d68 [88];
  undefined1 auStack_1d10 [88];
  undefined1 auStack_1cb8 [88];
  undefined1 auStack_1c60 [96];
  undefined1 auStack_1c00 [88];
  undefined1 auStack_1ba8 [88];
  undefined1 auStack_1b50 [88];
  undefined1 auStack_1af8 [88];
  undefined1 auStack_1aa0 [104];
  undefined1 auStack_1a38 [96];
  undefined1 auStack_19d8 [88];
  undefined1 auStack_1980 [88];
  undefined1 auStack_1928 [104];
  undefined1 auStack_18c0 [88];
  undefined1 auStack_1868 [104];
  undefined1 auStack_1800 [104];
  undefined1 auStack_1798 [104];
  undefined1 auStack_1730 [104];
  undefined1 auStack_16c8 [104];
  undefined1 auStack_1660 [32];
  undefined1 auStack_1640 [56];
  undefined1 auStack_1608 [88];
  undefined1 auStack_15b0 [104];
  undefined1 auStack_1548 [96];
  undefined1 auStack_14e8 [120];
  undefined1 auStack_1470 [88];
  undefined1 auStack_1418 [88];
  undefined1 auStack_13c0 [104];
  undefined1 auStack_1358 [120];
  undefined1 auStack_12e0 [96];
  undefined1 auStack_1280 [120];
  undefined1 auStack_1208 [88];
  undefined1 auStack_11b0 [104];
  undefined1 auStack_1148 [104];
  undefined1 auStack_10e0 [104];
  undefined1 auStack_1078 [120];
  undefined1 auStack_1000 [120];
  undefined1 auStack_f88 [96];
  undefined1 auStack_f28 [96];
  undefined1 auStack_ec8 [120];
  undefined1 auStack_e50 [8];
  undefined1 uStack_e48;
  undefined1 auStack_dd8 [104];
  undefined1 auStack_d70 [16];
  undefined1 auStack_d60 [88];
  undefined1 auStack_d08 [240];
  undefined1 auStack_c18 [96];
  undefined1 auStack_bb8 [96];
  undefined1 auStack_b58 [104];
  undefined1 auStack_af0 [104];
  undefined1 auStack_a88 [104];
  undefined1 auStack_a20 [104];
  undefined1 auStack_9b8 [104];
  undefined1 auStack_950 [104];
  undefined1 auStack_8e8 [104];
  undefined1 auStack_880 [104];
  undefined1 auStack_818 [104];
  undefined1 auStack_7b0 [104];
  undefined1 auStack_748 [104];
  undefined1 auStack_6e0 [104];
  undefined1 auStack_678 [104];
  undefined1 auStack_610 [104];
  undefined1 auStack_5a8 [96];
  undefined1 auStack_548 [96];
  undefined1 auStack_4e8 [104];
  undefined1 auStack_480 [104];
  undefined1 auStack_418 [96];
  undefined1 auStack_3b8 [96];
  undefined1 auStack_358 [96];
  undefined1 auStack_2f8 [96];
  undefined1 auStack_298 [96];
  undefined1 auStack_238 [96];
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [104];
  undefined1 auStack_b0 [104];
  undefined8 uStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010748f2f0();
  func_0x00010748f1bc();
  lVar11 = *(long *)(param_5 + 0x18);
  uStack_48 = extraout_x8;
  func_0x000107432f04(alStack_20a8,unaff_x19 + 0x60);
  func_0x00010748f2e8(auStack_2050,lVar11 + 0x548);
  func_0x000107432c64(auStack_118,unaff_x19 + 0xb8);
  func_0x00010748fd4c(auStack_b0,lVar11 + 0x5a8);
  func_0x000107482cec(auStack_1d8,unaff_x19 + 0x120);
  func_0x00010748f48c(auStack_178,lVar11 + 0x618);
  func_0x000107432f04(auStack_2158,unaff_x19 + 0x180);
  func_0x00010748f2e8(auStack_2100,lVar11 + 0x680);
  func_0x000107482cec(auStack_298,unaff_x19 + 0x1d8);
  func_0x00010748f48c(auStack_238,lVar11 + 0x6e0);
  func_0x000107482cec(auStack_358,unaff_x19 + 0x238);
  func_0x00010748f48c(auStack_2f8,lVar11 + 0x748);
  func_0x000107432f04(auStack_2208,unaff_x19 + 0x298);
  func_0x00010748f2e8(auStack_21b0,lVar11 + 0x7b0);
  func_0x000107432f04(auStack_22b8,unaff_x19 + 0x2f0);
  func_0x00010748f2e8(auStack_2260,lVar11 + 0x810);
  func_0x000107432f04(auStack_2368,unaff_x19 + 0x348);
  func_0x00010748f2e8(auStack_2310,lVar11 + 0x870);
  func_0x000107432f04(auStack_2418,unaff_x19 + 0x3a0);
  func_0x00010748f2e8(auStack_23c0,lVar11 + 0x8d0);
  func_0x000107482cec(auStack_418,unaff_x19 + 0x3f8);
  func_0x00010748f48c(auStack_3b8,lVar11 + 0x930);
  func_0x00010748ad58(auStack_24c8,unaff_x19 + 0x458);
  FUN_10748dc44(auStack_2470,lVar11 + 0x998);
  func_0x000107432f04(auStack_2578,unaff_x19 + 0x4b0);
  func_0x00010748f2e8(auStack_2520,lVar11 + 0x9f8);
  func_0x000107432f04(auStack_2628,unaff_x19 + 0x508);
  func_0x00010748f2e8(auStack_25d0,lVar11 + 0xa58);
  func_0x000107432f04(auStack_26d8,unaff_x19 + 0x560);
  func_0x00010748f2e8(auStack_2680,lVar11 + 0xab8);
  func_0x000107432c64(auStack_4e8,unaff_x19 + 0x5b8);
  func_0x00010748fd4c(auStack_480,lVar11 + 0xb18);
  func_0x000107482cec(auStack_5a8,unaff_x19 + 0x620);
  func_0x00010748f48c(auStack_548,lVar11 + 0xb88);
  func_0x00010748ae9c(auStack_2788,unaff_x19 + 0x680);
  FUN_10748dcbc(auStack_2730,lVar11 + 0xbf0);
  func_0x00010748ad58(auStack_2838,unaff_x19 + 0x6d8);
  FUN_10748dc44(auStack_27e0,lVar11 + 0xc50);
  func_0x000107432c64(auStack_678,unaff_x19 + 0x730);
  func_0x00010748fd4c(auStack_610,lVar11 + 0xcb0);
  func_0x000107432f04(auStack_28e8,unaff_x19 + 0x798);
  func_0x00010748f2e8(auStack_2890,lVar11 + 0xd20);
  FUN_10748b224(auStack_748,unaff_x19 + 0x7f0);
  func_0x00010748f44c(auStack_6e0,lVar11 + 0xd80);
  FUN_10748b224(auStack_818,unaff_x19 + 0x858);
  func_0x00010748f44c(auStack_7b0,lVar11 + 0xdf0);
  FUN_10748b224(auStack_8e8,unaff_x19 + 0x8c0);
  func_0x00010748f44c(auStack_880,lVar11 + 0xe60);
  FUN_10748b224(auStack_9b8,unaff_x19 + 0x928);
  func_0x00010748f44c(auStack_950,lVar11 + 0xed0);
  FUN_10748b224(auStack_a88,unaff_x19 + 0x990);
  func_0x00010748f44c(auStack_a20,lVar11 + 0xf40);
  FUN_10748b304(auStack_2998,unaff_x19 + 0x9f8);
  func_0x00010748f908();
  FUN_10748d7e8();
  func_0x00010748f8fc();
  FUN_10748b304();
  plVar5 = (long *)(lVar11 + 0xfe8);
  if (*(char *)(lVar11 + 0xff0) == '\0') {
    plVar5 = unaff_x20 + 1;
  }
  lStack_2928 = *plVar5;
  uVar1 = *(uint *)(plVar5 + 1);
  plVar5 = (long *)(lVar11 + 0xfe8);
  if (*(char *)(lVar11 + 0x1000) == '\0') {
    plVar5 = unaff_x20 + 1;
  }
  lStack_2930 = plVar5[2];
  uVar2 = *(uint *)(plVar5 + 3);
  auStack_2940[0] = 0;
  uStack_2938 = 0;
  if ((uVar2 & 1) == 0) {
    lStack_2930 = 0;
  }
  lStack_2930 = lStack_2930 + *unaff_x20;
  uVar4 = (uVar1 & 1) == 0;
  if ((bool)uVar4) {
    lStack_2928 = 0;
  }
  lStack_2928 = lStack_2930 + lStack_2928;
  FUN_10748b344(auStack_2920,auStack_d08);
  if (((uVar1 & 1) != 0) || ((uVar2 & 1) != 0)) {
    func_0x00010748f968();
    FUN_10748b2d8();
    uStack_e48 = 1;
    FUN_10748b264(auStack_2940,auStack_e50);
    func_0x00010748f968();
    FUN_10748a99c();
  }
  func_0x00010748f8fc();
  func_0x00010748a928();
  func_0x00010748f908();
  FUN_10748a94c();
  func_0x000107432f04(auStack_2a48,unaff_x19 + 0xa50);
  func_0x00010748f2e8(auStack_29f0,lVar11 + 0x1010);
  FUN_10748b224(auStack_b58,unaff_x19 + 0xaa8);
  func_0x00010748f44c(auStack_af0,lVar11 + 0x1070);
  func_0x000107482cec(auStack_c18,unaff_x19 + 0xb10);
  func_0x00010748f48c(auStack_bb8,lVar11 + 0x10e0);
  func_0x00010748f908();
  FUN_10748b670();
  func_0x00010748f8fc();
  func_0x00010748fd78();
  func_0x000107432f04(auStack_2af8,unaff_x19 + 0xbe8);
  func_0x00010748f2e8(auStack_2aa0,lVar11 + 0x11c8);
  func_0x000107432f04(auStack_2ba8,unaff_x19 + 0xc40);
  func_0x00010748f2e8(auStack_2b50,lVar11 + 0x1228);
  FUN_10748b224(auStack_dd8,unaff_x19 + 0xc98);
  func_0x00010748f44c(auStack_d70,lVar11 + 0x1288);
  FUN_10748b670(auStack_ec8,unaff_x19 + 0xd00);
  func_0x00010748f968();
  func_0x00010748fd78();
  func_0x000107482cec(auStack_f88,unaff_x19 + 0xd78);
  func_0x00010748f48c(auStack_f28,lVar11 + 0x1378);
  FUN_10748b670(auStack_1078,unaff_x19 + 0xdd8);
  func_0x00010748fd78(auStack_1000,lVar11 + 0x13e0);
  func_0x000107432f04(auStack_2c58,unaff_x19 + 0xe50);
  func_0x00010748f2e8(auStack_2c00,lVar11 + 0x1460);
  FUN_10748b224(auStack_1148,unaff_x19 + 0xea8);
  func_0x00010748f44c(auStack_10e0,lVar11 + 0x14c0);
  FUN_10748d954(alStack_1ff8,auStack_2050,auStack_b0,auStack_178,auStack_2100,auStack_238,
                auStack_2f8,auStack_21b0);
  func_0x00010748a800(auStack_10e0);
  func_0x00010748fcd8();
  func_0x000107410c2c(auStack_2c00);
  func_0x000107410c2c(auStack_2c58);
  func_0x00010748fce4();
  func_0x00010748fd20();
  func_0x00010748fc90();
  func_0x00010748fc24();
  func_0x00010748f968();
  func_0x00010748a86c();
  func_0x00010748fccc();
  func_0x00010748fc30();
  func_0x00010748fc9c();
  func_0x000107410c2c(auStack_2b50);
  func_0x000107410c2c(auStack_2ba8);
  func_0x000107410c2c(auStack_2aa0);
  func_0x000107410c2c(auStack_2af8);
  func_0x00010748f8fc();
  func_0x00010748a86c();
  func_0x00010748f908();
  func_0x00010748a86c();
  func_0x00010748fad0();
  func_0x00010748f9f8();
  func_0x00010748fa58();
  func_0x00010748faa0();
  func_0x000107410c2c(auStack_29f0);
  func_0x000107410c2c(auStack_2a48);
  func_0x00010748a928(auStack_2940);
  func_0x00010748a928(auStack_2998);
  func_0x00010748f80c(auStack_d60);
  func_0x00010748fa28();
  func_0x00010748f9d4();
  func_0x00010748fb00();
  func_0x00010748fa34();
  func_0x00010748fa7c();
  func_0x00010748fa04();
  func_0x00010748fa70();
  func_0x00010748fa1c();
  func_0x00010748f9c8();
  func_0x000107410c2c(auStack_2890);
  func_0x000107410c2c(auStack_28e8);
  func_0x00010748f9e0();
  func_0x00010748fac4();
  func_0x00010748a9e4(auStack_27e0);
  func_0x00010748a9e4(auStack_2838);
  FUN_10748aa80(auStack_2730);
  FUN_10748aa80(auStack_2788);
  func_0x00010748fa40();
  func_0x00010748fa94();
  func_0x00010748fab8();
  func_0x00010748f9ec();
  func_0x00010748f824();
  func_0x000107410c2c(auStack_26d8);
  func_0x000107410c2c(auStack_25d0);
  func_0x000107410c2c(auStack_2628);
  func_0x000107410c2c(auStack_2520);
  func_0x000107410c2c(auStack_2578);
  func_0x00010748a9e4(auStack_2470);
  func_0x00010748a9e4(auStack_24c8);
  func_0x00010748fa64();
  func_0x00010748fa4c();
  func_0x000107410c2c(auStack_23c0);
  func_0x000107410c2c(auStack_2418);
  func_0x000107410c2c(auStack_2310);
  func_0x000107410c2c(auStack_2368);
  func_0x000107410c2c(auStack_2260);
  func_0x000107410c2c(auStack_22b8);
  func_0x000107410c2c(auStack_21b0);
  func_0x000107410c2c(auStack_2208);
  func_0x00010748fa88();
  func_0x00010748fadc();
  func_0x00010748fb0c();
  func_0x00010748faac();
  func_0x000107410c2c(auStack_2100);
  func_0x000107410c2c(auStack_2158);
  func_0x00010748fae8();
  func_0x00010748fa10();
  FUN_1074335c8(auStack_b0);
  func_0x00010748faf4();
  func_0x000107410c2c(auStack_2050);
  func_0x000107410c2c(alStack_20a8);
  func_0x0001074334a8(unaff_x19 + 0x60,alStack_1ff8);
  func_0x00010743344c(unaff_x19 + 0xb8,auStack_1fa0);
  FUN_107482b94(unaff_x19 + 0x120,auStack_1f38);
  func_0x0001074334a8(unaff_x19 + 0x180,auStack_1ed8);
  FUN_107482b94(unaff_x19 + 0x1d8,auStack_1e80);
  FUN_107482b94(unaff_x19 + 0x238,auStack_1e20);
  func_0x0001074334a8(unaff_x19 + 0x298,auStack_1dc0);
  func_0x0001074334a8(unaff_x19 + 0x2f0,auStack_1d68);
  func_0x0001074334a8(unaff_x19 + 0x348,auStack_1d10);
  func_0x0001074334a8(unaff_x19 + 0x3a0,auStack_1cb8);
  FUN_107482b94(unaff_x19 + 0x3f8,auStack_1c60);
  func_0x00010748abd4(unaff_x19 + 0x458,auStack_1c00);
  func_0x0001074334a8(unaff_x19 + 0x4b0,auStack_1ba8);
  func_0x0001074334a8(unaff_x19 + 0x508,auStack_1b50);
  func_0x0001074334a8(unaff_x19 + 0x560,auStack_1af8);
  func_0x00010743344c(unaff_x19 + 0x5b8,auStack_1aa0);
  FUN_107482b94(unaff_x19 + 0x620,auStack_1a38);
  func_0x00010748abfc(unaff_x19 + 0x680,auStack_19d8);
  func_0x00010748abd4(unaff_x19 + 0x6d8,auStack_1980);
  func_0x00010743344c(unaff_x19 + 0x730,auStack_1928);
  func_0x0001074334a8(unaff_x19 + 0x798,auStack_18c0);
  func_0x00010748ac24(unaff_x19 + 0x7f0,auStack_1868);
  func_0x00010748ac24(unaff_x19 + 0x858,auStack_1800);
  func_0x00010748ac24(unaff_x19 + 0x8c0,auStack_1798);
  func_0x00010748ac24(unaff_x19 + 0x928,auStack_1730);
  func_0x00010748ac24(unaff_x19 + 0x990,auStack_16c8);
  FUN_10748b264(unaff_x19 + 0x9f8,auStack_1660);
  func_0x00010748f698(unaff_x19 + 0xa08);
  FUN_10748b3dc(unaff_x19 + 0xa18,auStack_1640);
  func_0x0001074334a8(unaff_x19 + 0xa50,auStack_1608);
  func_0x00010748ac24(unaff_x19 + 0xaa8,auStack_15b0);
  FUN_107482b94(unaff_x19 + 0xb10,auStack_1548);
  func_0x00010748ac4c(unaff_x19 + 0xb70,auStack_14e8);
  func_0x0001074334a8(unaff_x19 + 0xbe8,auStack_1470);
  func_0x0001074334a8(unaff_x19 + 0xc40,auStack_1418);
  func_0x00010748ac24(unaff_x19 + 0xc98,auStack_13c0);
  func_0x00010748ac4c(unaff_x19 + 0xd00,auStack_1358);
  FUN_107482b94(unaff_x19 + 0xd78,auStack_12e0);
  func_0x00010748ac4c(unaff_x19 + 0xdd8,auStack_1280);
  func_0x0001074334a8(unaff_x19 + 0xe50,auStack_1208);
  iVar10 = (int)auStack_11b0;
  func_0x00010748ac24(unaff_x19 + 0xea8);
  plVar5 = alStack_1ff8;
  func_0x00010748a6b0();
  func_0x00010748f188(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  if (iVar10 != 0) {
    func_0x000104bd46a0();
    func_0x00010748fcd8();
    func_0x000107410c2c(auStack_2c00);
    func_0x000107410c2c(auStack_2c58);
    func_0x00010748fce4();
    func_0x00010748fd20();
    func_0x00010748fc90();
    func_0x00010748fc24();
    func_0x00010748f968();
    func_0x00010748a86c();
    func_0x00010748fccc();
    func_0x00010748fc30();
    func_0x00010748fc9c();
    func_0x000107410c2c(auStack_2b50);
    func_0x000107410c2c(auStack_2ba8);
    func_0x000107410c2c(auStack_2aa0);
    func_0x000107410c2c(auStack_2af8);
    func_0x00010748f8fc();
    func_0x00010748a86c();
    func_0x00010748f908();
    func_0x00010748a86c();
    func_0x00010748fad0();
    func_0x00010748f9f8();
    func_0x00010748fa58();
    func_0x00010748faa0();
    func_0x000107410c2c(auStack_29f0);
    func_0x000107410c2c(auStack_2a48);
    func_0x00010748a928(auStack_2940);
    func_0x00010748a928(auStack_2998);
    func_0x00010748f80c(auStack_d60);
    func_0x00010748fa28();
    func_0x00010748f9d4();
    func_0x00010748fb00();
    func_0x00010748fa34();
    func_0x00010748fa7c();
    func_0x00010748fa04();
    func_0x00010748fa70();
    func_0x00010748fa1c();
    func_0x00010748f9c8();
    func_0x000107410c2c(auStack_2890);
    func_0x000107410c2c(auStack_28e8);
    func_0x00010748f9e0();
    func_0x00010748fac4();
    func_0x00010748a9e4(auStack_27e0);
    func_0x00010748a9e4(auStack_2838);
    FUN_10748aa80(auStack_2730);
    FUN_10748aa80(auStack_2788);
    func_0x00010748fa40();
    func_0x00010748fa94();
    func_0x00010748fab8();
    func_0x00010748f9ec();
    func_0x00010748f824();
    func_0x000107410c2c(auStack_26d8);
    func_0x000107410c2c(auStack_25d0);
    func_0x000107410c2c(auStack_2628);
    func_0x000107410c2c(auStack_2520);
    func_0x000107410c2c(auStack_2578);
    func_0x00010748a9e4(auStack_2470);
    func_0x00010748a9e4(auStack_24c8);
    func_0x00010748fa64();
    func_0x00010748fa4c();
    func_0x000107410c2c(auStack_23c0);
    func_0x000107410c2c(auStack_2418);
    func_0x000107410c2c(auStack_2310);
    func_0x000107410c2c(auStack_2368);
    func_0x000107410c2c(auStack_2260);
    func_0x000107410c2c(auStack_22b8);
    func_0x000107410c2c(auStack_21b0);
    func_0x000107410c2c(auStack_2208);
    func_0x00010748fa88();
    func_0x00010748fadc();
    func_0x00010748fb0c();
    func_0x00010748faac();
    func_0x000107410c2c(auStack_2100);
    func_0x000107410c2c(auStack_2158);
    func_0x00010748fae8();
    func_0x00010748fa10();
    FUN_1074335c8(auStack_b0);
    func_0x00010748faf4();
    func_0x000107410c2c(auStack_2050);
    plVar6 = alStack_20a8;
    func_0x000107410c2c(plVar6);
  }
  func_0x00010748f298();
  func_0x00010748f2f0();
  func_0x00010748f1bc();
  uStack_2df8 = extraout_x8_00;
  FUN_1073db818(&lStack_36e0,plVar6 + 3);
  FUN_10748145c(alStack_1ff8[0]);
  func_0x00010748fe10();
  lStack_3140 = alStack_1ff8[0];
  uStack_3138 = (ulong)uStack_3138._4_4_ << 0x20;
  uVar48 = param_3;
  FUN_107438e4c(auStack_35b0,plVar5 + 0xc,&lStack_3140,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_31c8 = alStack_1ff8[0];
  puStack_31b8 = (undefined8 *)0x3f80000000000000;
  uStack_31c0 = 0;
  FUN_1074384fc(&lStack_3140,plVar5 + 0x17,&lStack_31c8,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = 0;
  uVar12 = func_0x00010748fb18(plVar5 + 0x24);
  uVar36 = param_2;
  func_0x00010748f4fc();
  func_0x00010748fb20(auStack_35e8,plVar5 + 0x30);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = 0;
  uVar13 = func_0x00010748fb18(plVar5 + 0x3b);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = NEON_fmov(0x3f800000,4);
  uVar37 = uVar36;
  FUN_10748e03c(auStack_3180,plVar5 + 0x47,&lStack_31c8,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0._0_4_ = 0x3f800000;
  func_0x00010748fb20(auStack_3620,plVar5 + 0x53);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0._0_4_ = 0x40a00000;
  uVar14 = func_0x00010748f6cc(plVar5 + 0x5e);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0._0_4_ = 0x40a00000;
  uVar15 = func_0x00010748f6cc(plVar5 + 0x69);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = CONCAT44(uStack_31c0._4_4_,0x40a00000);
  uVar16 = func_0x00010748f6cc(plVar5 + 0x74);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = 0x3f4ccccd3f4ccccd;
  uVar17 = func_0x00010748fb18(plVar5 + 0x7f);
  lStack_31c8 = alStack_1ff8[0];
  uStack_31c0 = uStack_31c0 & 0xffffffffffffff00;
  plVar6 = plVar5 + 0x8b;
  uVar38 = uVar37;
  FUN_10748e27c(plVar6,&lStack_31c8,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  func_0x00010748f4fc();
  uVar18 = func_0x00010748f6cc(plVar5 + 0x96);
  func_0x00010748f4fc();
  uVar19 = func_0x00010748f6cc(plVar5 + 0xa1);
  func_0x00010748f4fc();
  func_0x00010748fb20(auStack_3658,plVar5 + 0xac);
  lStack_3210 = alStack_1ff8[0];
  uStack_3200 = 0x3f80000000000000;
  uStack_3208 = 0;
  FUN_1074384fc(&lStack_31c8,plVar5 + 0xb7,&lStack_3210,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_3210 = alStack_1ff8[0];
  uStack_3208 = 0;
  uVar20 = FUN_107483b68(plVar5 + 0xc4,&lStack_3210,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_3210 = alStack_1ff8[0];
  uStack_3208 = uStack_3208 & 0xffffffffffffff00;
  plVar7 = plVar5 + 0xd0;
  uVar39 = uVar38;
  FUN_10748e33c(plVar7,&lStack_3210,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_3210 = alStack_1ff8[0];
  uStack_3208 = CONCAT71(uStack_3208._1_7_,1);
  plVar8 = plVar5 + 0xdb;
  FUN_10748e27c(plVar8,&lStack_3210,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  lStack_3578 = alStack_1ff8[0];
  uStack_3568 = 0x3f80000000000000;
  uStack_3570 = 0;
  FUN_1074384fc(&lStack_3210,plVar5 + 0xe6,&lStack_3578,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  func_0x00010748f4c8();
  uVar21 = func_0x00010748f6b0(plVar5 + 0xf3);
  func_0x00010748f1dc();
  uVar22 = func_0x00010748f42c(plVar5 + 0xfe);
  uVar49 = uVar48;
  uVar56 = param_4;
  uVar40 = uVar39;
  func_0x00010748f1dc();
  uVar23 = func_0x00010748f42c(plVar5 + 0x10b);
  uVar50 = uVar49;
  uVar57 = uVar56;
  uVar41 = uVar40;
  func_0x00010748f1dc();
  uVar24 = func_0x00010748f42c(plVar5 + 0x118);
  uVar51 = uVar50;
  uVar58 = uVar57;
  uVar42 = uVar41;
  func_0x00010748f1dc();
  uVar25 = func_0x00010748f42c(plVar5 + 0x125);
  uVar52 = uVar51;
  uVar59 = uVar58;
  uVar43 = uVar42;
  func_0x00010748f1dc();
  uVar26 = func_0x00010748f42c(plVar5 + 0x132);
  uVar53 = uVar52;
  uVar60 = uVar59;
  uVar44 = uVar43;
  func_0x00010748f4c8();
  plVar9 = plVar5 + 0x13f;
  FUN_10748e7cc(plVar9,&lStack_3578);
  func_0x00010748fdb4();
  uVar27 = func_0x00010748f6b0(plVar5 + 0x14a);
  lStack_3578 = alStack_1ff8[0];
  auVar35 = NEON_fmov(0x3f800000,4);
  uStack_3568 = auVar35._8_8_;
  uStack_3570 = auVar35._0_8_;
  uVar28 = func_0x00010748f42c(plVar5 + 0x155);
  lStack_3578 = alStack_1ff8[0];
  uStack_3570 = 0x3f19999a3e4ccccd;
  uVar54 = uVar53;
  uVar61 = uVar60;
  uVar45 = uVar44;
  uVar29 = FUN_107483b68(plVar5 + 0x162,&lStack_3578,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  uVar46 = uVar45;
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_3678,plVar5 + 0x16e);
  func_0x00010748fdb4();
  uVar30 = func_0x00010748f6b0(plVar5 + 0x17d);
  func_0x00010748f4c8();
  uVar31 = func_0x00010748f6b0(plVar5 + 0x188);
  func_0x00010748f1dc();
  uVar32 = func_0x00010748f42c(plVar5 + 0x193);
  uVar55 = uVar54;
  uVar62 = uVar61;
  uVar47 = uVar46;
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_3698,plVar5 + 0x1a0);
  lStack_3578 = alStack_1ff8[0];
  uStack_3570 = NEON_fmov(0x41200000,4);
  uVar33 = FUN_107483b68(plVar5 + 0x1af,&lStack_3578,*(undefined8 *)(alStack_1ff8[0] + 0x10));
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_36b8,plVar5 + 0x1bb);
  func_0x00010748f4c8();
  uVar34 = func_0x00010748f6b0(plVar5 + 0x1ca);
  func_0x00010748f1dc();
  func_0x00010748f42c(plVar5 + 0x1d5);
  func_0x00010748fe10();
  FUN_1073dd9b0(&uStack_3550,auStack_35b0);
  FUN_107433134(auStack_3518,&lStack_3140);
  uStack_34d0 = uVar12;
  uStack_34cc = param_2;
  FUN_1073dd9b0(auStack_34c8,auStack_35e8);
  uStack_3490 = uVar13;
  uStack_348c = uVar36;
  FUN_1073f5d44(auStack_3488,auStack_3180);
  FUN_1073dd9b0(auStack_3448,auStack_3620);
  uStack_33fc = SUB81(plVar6,0);
  uStack_3410 = uVar14;
  uStack_340c = uVar15;
  uStack_3408 = uVar16;
  uStack_3404 = uVar17;
  uStack_3400 = uVar37;
  uStack_33f8 = uVar18;
  uStack_33f4 = uVar19;
  FUN_1073dd9b0(auStack_33f0,auStack_3658);
  FUN_107433134(auStack_33b8,&lStack_31c8);
  uStack_3368 = SUB81(plVar7,0);
  uStack_3367 = SUB81(plVar8,0);
  uStack_3370 = uVar20;
  uStack_336c = uVar38;
  FUN_107433134(auStack_3360,&lStack_3210);
  uStack_32c4 = SUB84(plVar9,0);
  uStack_329c = uStack_3670;
  uStack_32a4 = uStack_3678;
  uStack_328c = uStack_3660;
  uStack_3294 = uStack_3668;
  uStack_3264 = uStack_3690;
  uStack_326c = uStack_3698;
  uStack_3254 = uStack_3680;
  uStack_325c = uStack_3688;
  uStack_323c = uStack_36b0;
  uStack_3244 = uStack_36b8;
  uStack_322c = uStack_36a0;
  uStack_3234 = uStack_36a8;
  uStack_3318 = uVar21;
  uStack_3314 = uVar22;
  uStack_3310 = uVar39;
  uStack_330c = uVar48;
  uStack_3308 = param_4;
  uStack_3304 = uVar23;
  uStack_3300 = uVar40;
  uStack_32fc = uVar49;
  uStack_32f8 = uVar56;
  uStack_32f4 = uVar24;
  uStack_32f0 = uVar41;
  uStack_32ec = uVar50;
  uStack_32e8 = uVar57;
  uStack_32e4 = uVar25;
  uStack_32e0 = uVar42;
  uStack_32dc = uVar51;
  uStack_32d8 = uVar58;
  uStack_32d4 = uVar26;
  uStack_32d0 = uVar43;
  uStack_32cc = uVar52;
  uStack_32c8 = uVar59;
  uStack_32c0 = uVar27;
  uStack_32bc = uVar28;
  uStack_32b8 = uVar44;
  uStack_32b4 = uVar53;
  uStack_32b0 = uVar60;
  uStack_32ac = uVar29;
  uStack_32a8 = uVar45;
  uStack_3284 = uVar30;
  uStack_3280 = uVar31;
  uStack_327c = uVar32;
  uStack_3278 = uVar46;
  uStack_3274 = uVar54;
  uStack_3270 = uVar61;
  uStack_324c = uVar33;
  uStack_3248 = uVar47;
  uStack_3224 = uVar34;
  uStack_3218 = uVar55;
  uStack_3214 = uVar62;
  FUN_1073debc4(&lStack_3210);
  FUN_1073debc4(&lStack_31c8);
  FUN_1073dd4c4(auStack_3658);
  FUN_1073dd4c4(auStack_3620);
  FUN_1073deccc(auStack_3180);
  FUN_1073dd4c4(auStack_35e8);
  FUN_1073debc4(&lStack_3140);
  FUN_1073dd4c4(auStack_35b0);
  FUN_10748d58c(&lStack_31c8,1);
  puVar3 = puStack_31b8;
  puStack_31b8[1] = 0;
  puStack_31b8[2] = 0;
  *puStack_31b8 = &PTR_FUN_1109b3ec0;
  uStack_3208 = uStack_36d8;
  lStack_3210 = lStack_36e0;
  lStack_36e0 = 0;
  uStack_36d8 = 0;
  FUN_10748ece0(&lStack_3140,&uStack_3550);
  func_0x00010778d300(unaff_s8,unaff_s9,param_3,puVar3 + 3,&lStack_3210,&lStack_3140);
  func_0x00010748b94c(&lStack_3140);
  FUN_1073db868(&lStack_3210);
  puVar3 = puStack_31b8;
  puStack_31b8 = (undefined8 *)0x0;
  func_0x00010748d690(&lStack_31c8);
  uStack_3138 = 0;
  lStack_3140 = 0;
  func_0x00010748a68c(&lStack_3140);
  func_0x00010748b94c(&uStack_3550);
  FUN_1073db868(&lStack_36e0);
  *(undefined1 *)(plVar5 + 7) = 0x2e;
  *(undefined1 *)(puVar3 + 6) = 0x2e;
  uStack_36c8 = 0;
  uStack_36c0 = 0;
  uStack_3548 = 0;
  uStack_3550 = 0;
  lStack_3140 = plVar5[1];
  uStack_3138 = plVar5[2];
  plVar5[1] = (long)(puVar3 + 3);
  plVar5[2] = (long)puVar3;
  FUN_1073ad37c(&lStack_3140);
  func_0x0001073e930c(&uStack_3550);
  func_0x00010748a68c(&uStack_36c8);
  func_0x00010748f188(uStack_2df8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010748b94c(&uStack_3550);
  do {
    FUN_1073db868(&lStack_36e0);
    func_0x00010748f298();
    FUN_1073deccc(auStack_3180);
    FUN_1073dd4c4(auStack_35e8);
    FUN_1073debc4(&lStack_3140);
    FUN_1073dd4c4(auStack_35b0);
  } while( true );
}



/* Entry: 1074862d4; end: 107486b3f;  */

void FUN_1074862d4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  long lStack_980;
  undefined8 uStack_978;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined1 auStack_8f8 [56];
  undefined1 auStack_8c0 [56];
  undefined1 auStack_888 [56];
  undefined1 auStack_850 [56];
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7b8 [72];
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined1 auStack_768 [56];
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined1 auStack_728 [64];
  undefined1 auStack_6e8 [56];
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined1 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 auStack_690 [56];
  undefined1 auStack_658 [72];
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined1 uStack_608;
  undefined1 uStack_607;
  undefined1 auStack_600 [72];
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined8 uStack_544;
  undefined8 uStack_53c;
  undefined8 uStack_534;
  undefined8 uStack_52c;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined8 uStack_50c;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined8 uStack_4f4;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined8 uStack_4e4;
  undefined8 uStack_4dc;
  undefined8 uStack_4d4;
  undefined8 uStack_4cc;
  undefined4 uStack_4c4;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  long lStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_468;
  ulong uStack_460;
  undefined8 *puStack_458;
  undefined1 auStack_420 [64];
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_98;
  
  func_0x00010748f2f0();
  func_0x00010748f1bc();
  uStack_98 = extraout_x8;
  FUN_1073db818(&lStack_980,param_5 + 0x18);
  FUN_10748145c(*unaff_x20);
  func_0x00010748fe10();
  lVar6 = *unaff_x20;
  uStack_3d8 = (ulong)uStack_3d8._4_4_ << 0x20;
  uVar43 = param_3;
  lStack_3e0 = lVar6;
  FUN_107438e4c(auStack_850,unaff_x19 + 0x60,&lStack_3e0,*(undefined8 *)(lVar6 + 0x10));
  puStack_458 = (undefined8 *)0x3f80000000000000;
  uStack_460 = 0;
  lStack_468 = lVar6;
  FUN_1074384fc(&lStack_3e0,unaff_x19 + 0xb8,&lStack_468,*(undefined8 *)(lVar6 + 0x10));
  uStack_460 = 0;
  lStack_468 = lVar6;
  uVar7 = func_0x00010748fb18(unaff_x19 + 0x120);
  uVar31 = param_2;
  func_0x00010748f4fc();
  func_0x00010748fb20(auStack_888,unaff_x19 + 0x180);
  uStack_460 = 0;
  lStack_468 = lVar6;
  uVar8 = func_0x00010748fb18(unaff_x19 + 0x1d8);
  uStack_460 = NEON_fmov(0x3f800000,4);
  uVar32 = uVar31;
  lStack_468 = lVar6;
  FUN_10748e03c(auStack_420,unaff_x19 + 0x238,&lStack_468,*(undefined8 *)(lVar6 + 0x10));
  uStack_460._0_4_ = 0x3f800000;
  lStack_468 = lVar6;
  func_0x00010748fb20(auStack_8c0,unaff_x19 + 0x298);
  uStack_460._0_4_ = 0x40a00000;
  lStack_468 = lVar6;
  uVar9 = func_0x00010748f6cc(unaff_x19 + 0x2f0);
  uStack_460._0_4_ = 0x40a00000;
  lStack_468 = lVar6;
  uVar10 = func_0x00010748f6cc(unaff_x19 + 0x348);
  uStack_460 = CONCAT44(uStack_460._4_4_,0x40a00000);
  lStack_468 = lVar6;
  uVar11 = func_0x00010748f6cc(unaff_x19 + 0x3a0);
  uStack_460 = 0x3f4ccccd3f4ccccd;
  lStack_468 = lVar6;
  uVar12 = func_0x00010748fb18(unaff_x19 + 0x3f8);
  uStack_460 = uStack_460 & 0xffffffffffffff00;
  lVar2 = unaff_x19 + 0x458;
  uVar33 = uVar32;
  lStack_468 = lVar6;
  FUN_10748e27c(lVar2,&lStack_468,*(undefined8 *)(lVar6 + 0x10));
  func_0x00010748f4fc();
  uVar13 = func_0x00010748f6cc(unaff_x19 + 0x4b0);
  func_0x00010748f4fc();
  uVar14 = func_0x00010748f6cc(unaff_x19 + 0x508);
  func_0x00010748f4fc();
  func_0x00010748fb20(auStack_8f8,unaff_x19 + 0x560);
  uStack_4a0 = 0x3f80000000000000;
  uStack_4a8 = 0;
  lStack_4b0 = lVar6;
  FUN_1074384fc(&lStack_468,unaff_x19 + 0x5b8,&lStack_4b0,*(undefined8 *)(lVar6 + 0x10));
  uStack_4a8 = 0;
  lStack_4b0 = lVar6;
  uVar15 = FUN_107483b68(unaff_x19 + 0x620,&lStack_4b0,*(undefined8 *)(lVar6 + 0x10));
  uStack_4a8 = uStack_4a8 & 0xffffffffffffff00;
  lVar3 = unaff_x19 + 0x680;
  uVar34 = uVar33;
  lStack_4b0 = lVar6;
  FUN_10748e33c(lVar3,&lStack_4b0,*(undefined8 *)(lVar6 + 0x10));
  uStack_4a8 = CONCAT71(uStack_4a8._1_7_,1);
  lVar4 = unaff_x19 + 0x6d8;
  lStack_4b0 = lVar6;
  FUN_10748e27c(lVar4,&lStack_4b0,*(undefined8 *)(lVar6 + 0x10));
  uStack_808 = 0x3f80000000000000;
  uStack_810 = 0;
  lStack_818 = lVar6;
  FUN_1074384fc(&lStack_4b0,unaff_x19 + 0x730,&lStack_818,*(undefined8 *)(lVar6 + 0x10));
  func_0x00010748f4c8();
  uVar16 = func_0x00010748f6b0(unaff_x19 + 0x798);
  func_0x00010748f1dc();
  uVar17 = func_0x00010748f42c(unaff_x19 + 0x7f0);
  uVar44 = uVar43;
  uVar51 = param_4;
  uVar35 = uVar34;
  func_0x00010748f1dc();
  uVar18 = func_0x00010748f42c(unaff_x19 + 0x858);
  uVar45 = uVar44;
  uVar52 = uVar51;
  uVar36 = uVar35;
  func_0x00010748f1dc();
  uVar19 = func_0x00010748f42c(unaff_x19 + 0x8c0);
  uVar46 = uVar45;
  uVar53 = uVar52;
  uVar37 = uVar36;
  func_0x00010748f1dc();
  uVar20 = func_0x00010748f42c(unaff_x19 + 0x928);
  uVar47 = uVar46;
  uVar54 = uVar53;
  uVar38 = uVar37;
  func_0x00010748f1dc();
  uVar21 = func_0x00010748f42c(unaff_x19 + 0x990);
  uVar48 = uVar47;
  uVar55 = uVar54;
  uVar39 = uVar38;
  func_0x00010748f4c8();
  lVar5 = unaff_x19 + 0x9f8;
  FUN_10748e7cc(lVar5,&lStack_818);
  func_0x00010748fdb4();
  uVar22 = func_0x00010748f6b0(unaff_x19 + 0xa50);
  auVar30 = NEON_fmov(0x3f800000,4);
  uStack_808 = auVar30._8_8_;
  uStack_810 = auVar30._0_8_;
  lStack_818 = lVar6;
  uVar23 = func_0x00010748f42c(unaff_x19 + 0xaa8);
  uStack_810 = 0x3f19999a3e4ccccd;
  uVar49 = uVar48;
  uVar56 = uVar55;
  uVar40 = uVar39;
  lStack_818 = lVar6;
  uVar24 = FUN_107483b68(unaff_x19 + 0xb10,&lStack_818,*(undefined8 *)(lVar6 + 0x10));
  uVar41 = uVar40;
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_918,unaff_x19 + 0xb70);
  func_0x00010748fdb4();
  uVar25 = func_0x00010748f6b0(unaff_x19 + 0xbe8);
  func_0x00010748f4c8();
  uVar26 = func_0x00010748f6b0(unaff_x19 + 0xc40);
  func_0x00010748f1dc();
  uVar27 = func_0x00010748f42c(unaff_x19 + 0xc98);
  uVar50 = uVar49;
  uVar57 = uVar56;
  uVar42 = uVar41;
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_938,unaff_x19 + 0xd00);
  uStack_810 = NEON_fmov(0x41200000,4);
  lStack_818 = lVar6;
  uVar28 = FUN_107483b68(unaff_x19 + 0xd78,&lStack_818,*(undefined8 *)(lVar6 + 0x10));
  func_0x00010748f36c();
  func_0x00010748f980(&uStack_958,unaff_x19 + 0xdd8);
  func_0x00010748f4c8();
  uVar29 = func_0x00010748f6b0(unaff_x19 + 0xe50);
  func_0x00010748f1dc();
  func_0x00010748f42c(unaff_x19 + 0xea8);
  func_0x00010748fe10();
  FUN_1073dd9b0(&uStack_7f0,auStack_850);
  FUN_107433134(auStack_7b8,&lStack_3e0);
  uStack_770 = uVar7;
  uStack_76c = param_2;
  FUN_1073dd9b0(auStack_768,auStack_888);
  uStack_730 = uVar8;
  uStack_72c = uVar31;
  FUN_1073f5d44(auStack_728,auStack_420);
  FUN_1073dd9b0(auStack_6e8,auStack_8c0);
  uStack_69c = (undefined1)lVar2;
  uStack_6b0 = uVar9;
  uStack_6ac = uVar10;
  uStack_6a8 = uVar11;
  uStack_6a4 = uVar12;
  uStack_6a0 = uVar32;
  uStack_698 = uVar13;
  uStack_694 = uVar14;
  FUN_1073dd9b0(auStack_690,auStack_8f8);
  FUN_107433134(auStack_658,&lStack_468);
  uStack_608 = (undefined1)lVar3;
  uStack_607 = (undefined1)lVar4;
  uStack_610 = uVar15;
  uStack_60c = uVar33;
  FUN_107433134(auStack_600,&lStack_4b0);
  uStack_564 = (undefined4)lVar5;
  uStack_53c = uStack_910;
  uStack_544 = uStack_918;
  uStack_52c = uStack_900;
  uStack_534 = uStack_908;
  uStack_504 = uStack_930;
  uStack_50c = uStack_938;
  uStack_4f4 = uStack_920;
  uStack_4fc = uStack_928;
  uStack_4dc = uStack_950;
  uStack_4e4 = uStack_958;
  uStack_4cc = uStack_940;
  uStack_4d4 = uStack_948;
  uStack_5b8 = uVar16;
  uStack_5b4 = uVar17;
  uStack_5b0 = uVar34;
  uStack_5ac = uVar43;
  uStack_5a8 = param_4;
  uStack_5a4 = uVar18;
  uStack_5a0 = uVar35;
  uStack_59c = uVar44;
  uStack_598 = uVar51;
  uStack_594 = uVar19;
  uStack_590 = uVar36;
  uStack_58c = uVar45;
  uStack_588 = uVar52;
  uStack_584 = uVar20;
  uStack_580 = uVar37;
  uStack_57c = uVar46;
  uStack_578 = uVar53;
  uStack_574 = uVar21;
  uStack_570 = uVar38;
  uStack_56c = uVar47;
  uStack_568 = uVar54;
  uStack_560 = uVar22;
  uStack_55c = uVar23;
  uStack_558 = uVar39;
  uStack_554 = uVar48;
  uStack_550 = uVar55;
  uStack_54c = uVar24;
  uStack_548 = uVar40;
  uStack_524 = uVar25;
  uStack_520 = uVar26;
  uStack_51c = uVar27;
  uStack_518 = uVar41;
  uStack_514 = uVar49;
  uStack_510 = uVar56;
  uStack_4ec = uVar28;
  uStack_4e8 = uVar42;
  uStack_4c4 = uVar29;
  uStack_4b8 = uVar50;
  uStack_4b4 = uVar57;
  FUN_1073debc4(&lStack_4b0);
  FUN_1073debc4(&lStack_468);
  FUN_1073dd4c4(auStack_8f8);
  FUN_1073dd4c4(auStack_8c0);
  FUN_1073deccc(auStack_420);
  FUN_1073dd4c4(auStack_888);
  FUN_1073debc4(&lStack_3e0);
  FUN_1073dd4c4(auStack_850);
  FUN_10748d58c(&lStack_468,1);
  puVar1 = puStack_458;
  puStack_458[1] = 0;
  puStack_458[2] = 0;
  *puStack_458 = &PTR_FUN_1109b3ec0;
  uStack_4a8 = uStack_978;
  lStack_4b0 = lStack_980;
  lStack_980 = 0;
  uStack_978 = 0;
  FUN_10748ece0(&lStack_3e0,&uStack_7f0);
  func_0x00010778d300(unaff_s8,unaff_s9,param_3,puVar1 + 3,&lStack_4b0,&lStack_3e0);
  func_0x00010748b94c(&lStack_3e0);
  FUN_1073db868(&lStack_4b0);
  puVar1 = puStack_458;
  puStack_458 = (undefined8 *)0x0;
  func_0x00010748d690(&lStack_468);
  uStack_3d8 = 0;
  lStack_3e0 = 0;
  FUN_10748a68c(&lStack_3e0);
  func_0x00010748b94c(&uStack_7f0);
  FUN_1073db868(&lStack_980);
  *(undefined1 *)(unaff_x19 + 0x38) = 0x2e;
  *(undefined1 *)(puVar1 + 6) = 0x2e;
  uStack_968 = 0;
  uStack_960 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  lStack_3e0 = *(long *)(unaff_x19 + 8);
  uStack_3d8 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 **)(unaff_x19 + 8) = puVar1 + 3;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar1;
  FUN_1073ad37c(&lStack_3e0);
  func_0x0001073e930c(&uStack_7f0);
  FUN_10748a68c(&uStack_968);
  func_0x00010748f188(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010748b94c(&uStack_7f0);
  do {
    FUN_1073db868(&lStack_980);
    func_0x00010748f298();
    FUN_1073deccc(auStack_420);
    FUN_1073dd4c4(auStack_888);
    FUN_1073debc4(&lStack_3e0);
    FUN_1073dd4c4(auStack_850);
  } while( true );
}



/* Entry: 107486b40; end: 107486c9f;  */

byte FUN_107486b40(long param_1)

{
  return (((((((((*(char *)(param_1 + 0xc0) != '\0' || *(char *)(param_1 + 0x68) != '\0') ||
                (*(char *)(param_1 + 0x128) != '\0' || *(char *)(param_1 + 0x188) != '\0')) ||
               ((*(char *)(param_1 + 0x1e0) != '\0' || *(char *)(param_1 + 0x240) != '\0') ||
               *(char *)(param_1 + 0x2a0) != '\0')) ||
              (((*(char *)(param_1 + 0x2f8) != '\0' || *(char *)(param_1 + 0x350) != '\0') ||
               *(char *)(param_1 + 0x3a8) != '\0') || *(char *)(param_1 + 0x400) != '\0')) ||
             ((((*(char *)(param_1 + 0x460) != '\0' || *(char *)(param_1 + 0x4b8) != '\0') ||
               *(char *)(param_1 + 0x510) != '\0') || *(char *)(param_1 + 0x568) != '\0') ||
             *(char *)(param_1 + 0x5c0) != '\0')) ||
            (((((*(char *)(param_1 + 0x628) != '\0' || *(char *)(param_1 + 0x688) != '\0') ||
               *(char *)(param_1 + 0x6e0) != '\0') || *(char *)(param_1 + 0x738) != '\0') ||
             *(char *)(param_1 + 0x7a0) != '\0') || *(char *)(param_1 + 0x7f8) != '\0')) ||
           ((((((*(char *)(param_1 + 0x860) != '\0' || *(char *)(param_1 + 0x8c8) != '\0') ||
               *(char *)(param_1 + 0x930) != '\0') || *(char *)(param_1 + 0x998) != '\0') ||
             *(char *)(param_1 + 0xa00) != '\0') || *(char *)(param_1 + 0xa58) != '\0') ||
           *(char *)(param_1 + 0xab0) != '\0')) ||
          (((((((*(char *)(param_1 + 0xb18) != '\0' || *(char *)(param_1 + 0xb78) != '\0') ||
               *(char *)(param_1 + 0xbf0) != '\0') || *(char *)(param_1 + 0xc48) != '\0') ||
             *(char *)(param_1 + 0xca0) != '\0') || *(char *)(param_1 + 0xd08) != '\0') ||
           *(char *)(param_1 + 0xd80) != '\0') || *(char *)(param_1 + 0xde0) != '\0')) ||
         *(char *)(param_1 + 0xe58) != '\0') | *(byte *)(param_1 + 0xeb0) & 1;
}


