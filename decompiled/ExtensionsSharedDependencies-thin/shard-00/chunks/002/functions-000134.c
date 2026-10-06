/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0035690c; end: 0035691f;  */

undefined ** FUN_0035690c(void)

{
  return &PTR_DAT_009dc570;
}



/* Entry: 00356920; end: 00356943;  */

void FUN_00356920(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dc590;
  return;
}



/* Entry: 00356944; end: 0035695b;  */

void FUN_00356944(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_009dc590;
  return;
}



/* Entry: 0035695c; end: 003569d3;  */

void FUN_0035695c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)*param_2;
  if ((uStack_28 & 1) != 0) {
    piVar3 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003fbec4(&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003569d4; end: 00356a0f;  */

long FUN_003569d4(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc600);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356a10; end: 00356a23;  */

undefined ** FUN_00356a10(void)

{
  return &PTR_DAT_009dc600;
}



/* Entry: 00356a24; end: 00356a5b;  */

void FUN_00356a24(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dc620;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(pdVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00356a5c; end: 00356a87;  */

void FUN_00356a5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_009dc620;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 00356a88; end: 00356ac3;  */

long FUN_00356a88(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc680);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356ac4; end: 00356ad7;  */

undefined ** FUN_00356ac4(void)

{
  return &PTR_DAT_009dc680;
}



/* Entry: 00356ad8; end: 00356b0b;  */

void FUN_00356ad8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dc6a0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00356b0c; end: 00356b2f;  */

void FUN_00356b0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dc6a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00356b30; end: 00356b6b;  */

long FUN_00356b30(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc700);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356b6c; end: 00356b77;  */

undefined ** FUN_00356b6c(void)

{
  return &PTR_DAT_009dc700;
}



/* Entry: 00356b78; end: 00356ba7;  */

long * FUN_00356b78(long *param_1)

{
  if (*param_1 != 0) {
    FUN_003589bc();
  }
  return param_1;
}



/* Entry: 00356ba8; end: 00356c73;  */

undefined8 *
FUN_00356ba8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plStack_48;
  long alStack_40 [2];
  
  uVar1 = *param_2;
  *param_2 = 0;
  uVar2 = *param_4;
  plVar4 = param_4 + 1;
  alStack_40[0] = *plVar4;
  lVar3 = param_4[2];
  plStack_48 = alStack_40;
  if (lVar3 == 0) {
    *param_1 = uVar1;
    param_1[1] = param_3;
    param_1[3] = alStack_40[0];
    param_1[4] = 0;
    param_1[2] = param_1 + 3;
  }
  else {
    *param_4 = plVar4;
    *plVar4 = 0;
    param_4[2] = 0;
    *param_1 = uVar1;
    param_1[1] = param_3;
    param_1[2] = uVar2;
    param_1[3] = alStack_40[0];
    param_1[4] = lVar3;
    *(undefined8 **)(alStack_40[0] + 0x10) = param_1 + 3;
    alStack_40[0] = 0;
  }
  alStack_40[1] = 0;
  FUN_0034b20c(&plStack_48,alStack_40[0]);
  param_1[5] = &PTR_FUN_009dc720;
  param_1[6] = param_5;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 **)(param_6 + 0x40) = param_1;
  *(code **)(param_6 + 0x48) = FUN_00356c74;
  return param_1;
}



/* Entry: 00356c74; end: 00356ccf;  */

void FUN_00356c74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_0034b20c(param_1 + 2,param_1[3]);
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00356ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00356cd0; end: 00356cf3;  */

void FUN_00356cd0(void)

{
  return;
}



/* Entry: 00356cf4; end: 00356d33;  */

void FUN_00356cf4(long param_1)

{
  if ((*(long **)(param_1 + 8) != (long *)0x0) && (*(char *)(param_1 + 0x10) == '\0')) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 00356d34; end: 00356d3b;  */

void FUN_00356d34(void)

{
  return;
}



/* Entry: 00356d3c; end: 00356d6f;  */

void FUN_00356d3c(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dc778;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00356d70; end: 00356d8b;  */

void FUN_00356d70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dc778;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00356d8c; end: 00356e7b;  */

bool FUN_00356d8c(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long lStack_38;
  
  plVar5 = (long *)*param_2;
  if (*plVar5 == 0) {
    func_0x00771964();
  }
  else {
    unaff_x19 = param_1[1];
    FUN_003566b4(&lStack_38,*(undefined8 *)(*plVar5 + 0x18));
    param_1 = *(long **)(unaff_x19 + 0xd8);
    unaff_x20 = lStack_38;
    if (param_1 == (long *)0x0) goto LAB_00356de0;
    plVar3 = param_1 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 != 0) goto LAB_00356de0;
  }
  (**(code **)(*param_1 + 8))();
LAB_00356de0:
  *(long *)(unaff_x19 + 0xd8) = unaff_x20;
  if (unaff_x20 == 0) {
    FUN_00348e40(unaff_x19);
  }
  else {
    plVar3 = (long *)plVar5[1];
    plVar5[1] = 0;
    plVar5 = *(long **)(unaff_x19 + 0xe8);
    *(long **)(unaff_x19 + 0xe8) = plVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar3 = *(long **)(unaff_x19 + 0xe8);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (*(char *)(unaff_x19 + 200) != '\0') {
      FUN_00346820(*(undefined8 *)(unaff_x19 + 0x10),unaff_x19 + 0xb8,
                   *(undefined8 *)(unaff_x19 + 0x60));
      *(undefined1 *)(unaff_x19 + 200) = 0;
      *(undefined8 *)(unaff_x19 + 0xd0) = 0;
    }
  }
  return unaff_x20 != 0;
}



/* Entry: 00356e7c; end: 00356eb7;  */

long FUN_00356e7c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc7e8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356eb8; end: 00356ecb;  */

undefined ** FUN_00356eb8(void)

{
  return &PTR_DAT_009dc7e8;
}



/* Entry: 00356ecc; end: 00356eff;  */

void FUN_00356ecc(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dc808;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00356f00; end: 00356f1b;  */

void FUN_00356f00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dc808;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00356f1c; end: 00356f37;  */

undefined8 FUN_00356f1c(long param_1)

{
  FUN_00348e40(*(undefined8 *)(param_1 + 8));
  return 0;
}



/* Entry: 00356f38; end: 00356f73;  */

long FUN_00356f38(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc878);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00356f74; end: 00356f87;  */

undefined ** FUN_00356f74(void)

{
  return &PTR_DAT_009dc878;
}



/* Entry: 00356f88; end: 00356fc7;  */

void FUN_00356f88(long param_1)

{
  segment_command *psVar1;
  undefined8 uVar2;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_DAT_009dc898;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(psVar1->segname + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)psVar1->segname = uVar2;
  psVar1->vmaddr = *(qword *)(param_1 + 0x18);
  return;
}



/* Entry: 00356fc8; end: 00356fef;  */

void FUN_00356fc8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_009dc898;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00356ff0; end: 00357153;  */

bool FUN_00356ff0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_00348e40(lVar6);
    goto LAB_003570e4;
  }
  uStack_40 = *(ulong *)*param_2;
  if ((uStack_40 & 1) != 0) {
    piVar5 = (int *)(uStack_40 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_003fbec4(&uStack_38,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_003bdf2c(&uStack_48,2,"Failed to pick subchannel",0x19,&uStack_49,1,&uStack_38);
  uVar4 = *(ulong *)**(undefined8 **)(param_1 + 0x18);
  if (uStack_48 == uVar4) {
LAB_003570a4:
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *(ulong *)**(undefined8 **)(param_1 + 0x18) = uStack_48;
    uStack_48 = 0x36;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
      uVar4 = uStack_48;
      goto LAB_003570a4;
    }
  }
  if (*(char *)(lVar6 + 200) != '\0') {
    FUN_00346820(*(undefined8 *)(lVar6 + 0x10),lVar6 + 0xb8,*(undefined8 *)(lVar6 + 0x60));
    *(undefined1 *)(lVar6 + 200) = 0;
    *(undefined8 *)(lVar6 + 0xd0) = 0;
  }
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003570e4:
  return (uVar1 & 0x20) == 0;
}



/* Entry: 00357154; end: 0035718f;  */

long FUN_00357154(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc908);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00357190; end: 003571a3;  */

undefined ** FUN_00357190(void)

{
  return &PTR_DAT_009dc908;
}



/* Entry: 003571a4; end: 003571db;  */

void FUN_003571a4(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dc928;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(pdVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003571dc; end: 003571fb;  */

void FUN_003571dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_009dc928;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 003571fc; end: 00357333;  */

undefined8 FUN_003571fc(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = *(ulong *)*param_2;
  if ((uStack_38 & 1) != 0) {
    piVar4 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003fbec4(&uStack_30,&uStack_38);
  FUN_003be104(&uStack_28,&uStack_30,0xe,1);
  uVar3 = *(ulong *)**(undefined8 **)(param_1 + 0x10);
  if (uStack_28 != uVar3) {
    *(ulong *)**(undefined8 **)(param_1 + 0x10) = uStack_28;
    uStack_28 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_00357290;
    FUN_0055293c();
    uVar3 = uStack_28;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
LAB_00357290:
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(char *)(lVar5 + 200) != '\0') {
    FUN_00346820(*(undefined8 *)(lVar5 + 0x10),lVar5 + 0xb8,*(undefined8 *)(lVar5 + 0x60));
    *(undefined1 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
  }
  return 1;
}



/* Entry: 00357334; end: 0035736f;  */

long FUN_00357334(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dc998);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00357370; end: 0035738f;  */

undefined ** FUN_00357370(void)

{
  return &PTR_DAT_009dc998;
}



/* Entry: 00357390; end: 003574fb;  */

undefined8 * FUN_00357390(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_003a83bc(param_1,2,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009dc9b8;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_00339d50(param_1 + 8);
  param_1[0x10] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a8620(param_1 + 0x14);
  FUN_003a74c4(param_1 + 0x18,param_3);
  return param_1;
}



/* Entry: 003574fc; end: 003574ff;  */

undefined8 * FUN_003574fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(&uStack_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_003a83bc(param_1,2,&uStack_50);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  *param_1 = &PTR_FUN_009dc9b8;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_00339d50(param_1 + 8);
  param_1[0x10] = 0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[0x13] = param_2[2];
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_003a8620(param_1 + 0x14);
  FUN_003a74c4(param_1 + 0x18,param_3);
  return param_1;
}



/* Entry: 00357500; end: 0035758b;  */

undefined8 * FUN_00357500(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dc9b8;
  FUN_003a7518(param_1 + 0x18);
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  plVar4 = (long *)param_1[0x10];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x00339d70(param_1 + 8);
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 0035758c; end: 0035758f;  */

undefined8 * FUN_0035758c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dc9b8;
  FUN_003a7518(param_1 + 0x18);
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  plVar4 = (long *)param_1[0x10];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x00339d70(param_1 + 8);
  *param_1 = &PTR_FUN_009df558;
  FUN_003abd20();
  FUN_003abe50();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 00357590; end: 003575a3;  */

void FUN_00357590(void)

{
  FUN_00357500();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003575a4; end: 003575ab;  */

void FUN_003575a4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 003575ac; end: 00357627;  */

void FUN_003575ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00339d8c(param_1 + 0x40);
  uVar6 = *param_2;
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *param_2 = 0;
  func_0x00339da8(param_1 + 0x40);
  return;
}



/* Entry: 00357628; end: 00357f33;  */

/* WARNING: Removing unreachable block (ram,0x00357d80) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00357628(undefined4 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  undefined1 **ppuVar8;
  long **pplStack_290;
  undefined1 uStack_288;
  char cStack_279;
  undefined1 uStack_271;
  long *plStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  long *plStack_240;
  long **pplStack_238;
  long *aplStack_230 [2];
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  int aiStack_208 [2];
  undefined8 uStack_200;
  char cStack_1e9;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined1 uStack_199;
  undefined1 *puStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long alStack_150 [5];
  undefined1 *apuStack_128 [2];
  char cStack_111;
  undefined4 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char acStack_a9 [9];
  undefined8 auStack_a0 [2];
  char acStack_89 [9];
  long *aplStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x38);
  FUN_003fae60();
  plStack_240 = plVar3;
  FUN_00357f34(&ppuStack_190,"state",&plStack_240);
  FUN_003490ec(aiStack_208,&ppuStack_190,1,&plStack_258);
  func_0x003580b4(apuStack_128,"state",aiStack_208);
  FUN_00358124(auStack_c0,"target",param_2 + 0x88);
  FUN_003490ec(auStack_1b8,apuStack_128,2,&plStack_220);
  lVar7 = 0;
  do {
    plStack_220 = (long *)((long)aplStack_80 + lVar7 + 0x10);
    FUN_0034a050(&plStack_220);
    func_0x003499b4(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
    if (acStack_89[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
    }
    if (acStack_a9[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
    }
    lVar7 = lVar7 + -0x68;
  } while (lVar7 != -0xd0);
  func_0x003499b4(aiStack_208,uStack_200);
  plStack_220 = alStack_150 + 2;
  FUN_0034a050(&plStack_220);
  func_0x003499b4(&plStack_158,alStack_150[0]);
  if (uStack_160._7_1_ < '\0') {
    __ZdlPv(plStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  FUN_003a7aec(aiStack_208,param_2 + 0xc0);
  if (aiStack_208[0] != 0) {
    FUN_00353254(apuStack_128,"trace");
    puVar4 = auStack_1b8;
    ppuStack_190 = apuStack_128;
    FUN_003583d4(puVar4,apuStack_128,&UNK_008000a0,&ppuStack_190,&plStack_220);
    FUN_00358178(puVar4 + 0x38,aiStack_208);
    if (cStack_111 < '\0') {
      __ZdlPv(apuStack_128[0]);
    }
  }
  FUN_003a879c(param_2 + 0xa0,auStack_1b8);
  __ZNSt3__19to_stringEl(&plStack_258,*(undefined8 *)(param_2 + 0x18));
  FUN_00353254(&ppuStack_190,"subchannelId");
  uStack_160 = lStack_248;
  lStack_178 = CONCAT44(lStack_178._4_4_,4);
  lStack_168 = lStack_250;
  plStack_170 = plStack_258;
  plStack_258 = (long *)0x0;
  lStack_250 = 0;
  lStack_248 = 0;
  plStack_158 = alStack_150;
  alStack_150[0] = 0;
  alStack_150[1] = 0;
  alStack_150[3] = 0;
  alStack_150[4] = 0;
  alStack_150[2] = 0;
  FUN_003490ec(&plStack_240,&ppuStack_190,1,&pplStack_290);
  FUN_003582a0(apuStack_128,"ref",&plStack_240);
  func_0x00358310(auStack_c0,"data",auStack_1b8);
  FUN_003490ec(&plStack_220,apuStack_128,2,&plStack_270);
  lVar7 = 0;
  do {
    plStack_270 = (long *)((long)aplStack_80 + lVar7 + 0x10);
    FUN_0034a050(&plStack_270);
    func_0x003499b4(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
    if (acStack_89[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
    }
    if (acStack_a9[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
    }
    lVar7 = lVar7 + -0x68;
  } while (lVar7 != -0xd0);
  func_0x003499b4(&plStack_240,pplStack_238);
  plStack_270 = alStack_150 + 2;
  FUN_0034a050(&plStack_270);
  func_0x003499b4(&plStack_158,alStack_150[0]);
  if (uStack_160 < 0) {
    __ZdlPv(plStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  if (lStack_248 < 0) {
    __ZdlPv(plStack_258);
  }
  ppuVar8 = (undefined1 **)(param_2 + 0x40);
  func_0x00339d8c(ppuVar8);
  if (*(long *)(param_2 + 0x80) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)(*(long *)(param_2 + 0x80) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = *(long **)(param_2 + 0x80);
  }
  func_0x00339da8(ppuVar8);
  if ((plVar3 != (long *)0x0) && (plVar3[3] != 0)) {
    __ZNSt3__19to_stringEl(&plStack_270);
    FUN_00353254(apuStack_128,"socketId");
    lStack_f8 = lStack_260;
    uStack_110 = 4;
    uStack_100 = uStack_268;
    plStack_108 = plStack_270;
    plStack_270 = (long *)0x0;
    uStack_268 = 0;
    lStack_260 = 0;
    puStack_f0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    FUN_00358380(auStack_c0,"name",plVar3 + 4);
    FUN_003490ec(&plStack_258,apuStack_128,2,&uStack_271);
    ppuStack_190 = (undefined1 **)CONCAT44(ppuStack_190._4_4_,5);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    plStack_170 = plStack_258;
    lStack_168 = lStack_250;
    uStack_160 = lStack_248;
    plVar5 = &lStack_168;
    if (lStack_248 != 0) {
      plStack_258 = &lStack_250;
      *(long **)(lStack_250 + 0x10) = &lStack_168;
      lStack_250 = 0;
      lStack_248 = 0;
      plVar5 = plStack_170;
    }
    plStack_170 = plVar5;
    plStack_158 = (long *)0x0;
    alStack_150[0] = 0;
    alStack_150[1] = 0;
    pplStack_290 = &plStack_240;
    pplStack_238 = (long **)0x0;
    aplStack_230[0] = (long *)0x0;
    plStack_240 = (long *)0x0;
    uStack_288 = 0;
    plVar5 = (long *)0x50;
    __Znwm();
    pplVar6 = aplStack_230;
    aplStack_230[0] = plVar5 + 10;
    plStack_240 = plVar5;
    pplStack_238 = (long **)plVar5;
    FUN_00349fb0(pplVar6,&ppuStack_190,alStack_150 + 2,plVar5);
    pplStack_238 = pplVar6;
    FUN_00353254(&pplStack_290,"socketRef");
    pplVar6 = &plStack_220;
    puStack_198 = (undefined1 *)&pplStack_290;
    FUN_003583d4(pplVar6,&pplStack_290,&UNK_008000a0,&puStack_198,&uStack_199);
    *(undefined4 *)(pplVar6 + 7) = 6;
    FUN_00349c88(pplVar6 + 0xe);
    pplVar6[0xf] = (long *)pplStack_238;
    pplVar6[0xe] = plStack_240;
    pplVar6[0x10] = aplStack_230[0];
    pplStack_238 = (long **)0x0;
    aplStack_230[0] = (long *)0x0;
    plStack_240 = (long *)0x0;
    if (cStack_279 < '\0') {
      __ZdlPv(pplStack_290);
    }
    pplStack_290 = &plStack_240;
    FUN_0034a050(&pplStack_290);
    pplStack_290 = &plStack_158;
    FUN_0034a050(&pplStack_290);
    func_0x003499b4(&plStack_170,lStack_168);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    func_0x003499b4(&plStack_258,lStack_250);
    lVar7 = 0;
    do {
      pplStack_290 = (long **)((long)aplStack_80 + lVar7 + 0x10);
      FUN_0034a050(&pplStack_290);
      func_0x003499b4(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
      if (acStack_89[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
      }
      if (acStack_a9[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
      }
      lVar7 = lVar7 + -0x68;
    } while (lVar7 != -0xd0);
    ppuVar8 = (undefined1 **)0xffffffffffffff30;
    if (lStack_260 < 0) {
      __ZdlPv(plStack_270);
    }
  }
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_220;
  plVar5 = (long *)(param_1 + 10);
  *plVar5 = lStack_218;
  *(long *)(param_1 + 0xc) = lStack_210;
  if (lStack_210 == 0) {
    *(long **)(param_1 + 8) = plVar5;
  }
  else {
    *(long **)(lStack_218 + 0x10) = plVar5;
    plStack_220 = &lStack_218;
    lStack_218 = 0;
    lStack_210 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  func_0x003499b4(&plStack_220,lStack_218);
  apuStack_128[0] = auStack_1d0;
  FUN_0034a050(apuStack_128);
  func_0x003499b4(auStack_1e8,uStack_1e0);
  if (cStack_1e9 < '\0') {
    __ZdlPv(uStack_200);
  }
  puVar4 = auStack_1b8;
  func_0x003499b4(puVar4,uStack_1b0);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_279 < '\0') {
      __ZdlPv(pplStack_290);
    }
    pplStack_290 = &plStack_240;
    FUN_0034a050(&pplStack_290);
    FUN_00348fc0(&ppuStack_190);
    func_0x003499b4(&plStack_258,lStack_250);
    lVar7 = 0x68;
    do {
      func_0x00349014((long)apuStack_128 + lVar7);
      lVar7 = lVar7 + -0x68;
    } while (lVar7 != -0x68);
    if (lStack_260 < 0) {
      __ZdlPv(plStack_270);
    }
    plVar5 = plVar3 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    func_0x003499b4(&plStack_220,lStack_218);
    FUN_00348fc0(aiStack_208);
    func_0x003499b4(auStack_1b8,uStack_1b0);
    do {
      do {
        __Unwind_Resume(puVar4);
        func_0x003499b4(aiStack_208,uStack_200);
        func_0x00349014(&ppuStack_190);
      } while (apuStack_128 == ppuVar8);
      do {
        ppuVar8 = ppuVar8 + -0xd;
        func_0x00349014(ppuVar8);
      } while (ppuVar8 != apuStack_128);
    } while( true );
  }
  return;
}



/* Entry: 00357f34; end: 00357f87;  */

long FUN_00357f34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00357f88(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 00357f88; end: 00358047;  */

undefined4 * FUN_00357f88(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  FUN_00353254(&uStack_38);
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (cStack_21 < '\0') {
    FUN_002971d4(param_1 + 2,uStack_38,uStack_30);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_30;
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(undefined8 *)(param_1 + 10) = 0;
    *(ulong *)(param_1 + 6) = CONCAT17(cStack_21,uStack_28);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}



/* Entry: 00358048; end: 00358123;  */

undefined4 * FUN_00358048(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 6) = param_2[2];
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  return param_1;
}



/* Entry: 00358124; end: 00358177;  */

long FUN_00358124(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00358048(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 00358178; end: 0035829f;  */

void FUN_00358178(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *param_2 = 0;
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 2));
    }
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar7;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if (iVar2 == 5) {
      piVar1 = param_1 + 8;
      plVar6 = (long *)(param_1 + 10);
      func_0x003499b4(piVar1,*plVar6);
      *(undefined8 *)piVar1 = *(undefined8 *)(param_2 + 8);
      plVar3 = (long *)(param_2 + 10);
      lVar4 = *plVar3;
      *plVar6 = lVar4;
      lVar5 = *(long *)(param_2 + 0xc);
      *(long *)(param_1 + 0xc) = lVar5;
      if (lVar5 == 0) {
        *(long **)piVar1 = plVar6;
      }
      else {
        *(long **)(lVar4 + 0x10) = plVar6;
        *(long **)(param_2 + 8) = plVar3;
        *plVar3 = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
      }
      return;
    }
    if (iVar2 == 6) {
      FUN_00349c88(param_1 + 0xe);
      uVar7 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
    }
  }
  return;
}



/* Entry: 003582a0; end: 0035837f;  */

void FUN_003582a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  FUN_00353254();
  *(undefined4 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_3;
  plVar1 = param_3 + 1;
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x40);
  *plVar2 = lVar3;
  lVar4 = param_3[2];
  *(long *)(param_1 + 0x48) = lVar4;
  if (lVar4 == 0) {
    *(long **)(param_1 + 0x38) = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_3 = plVar1;
    *plVar1 = 0;
    param_3[2] = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 00358380; end: 003583d3;  */

long FUN_00358380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00353254();
  FUN_00358048(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 003583d4; end: 003584af;  */

undefined1  [16]
FUN_003583d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_00349454(param_1,&uStack_48,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x88;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(long *)(lVar4 + 0x58) = lVar4 + 0x60;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    uStack_50 = 1;
    plStack_58 = param_1 + 1;
    FUN_00349400(param_1,uStack_48,plVar2,lVar4);
    uStack_60 = 0;
    func_0x00349f6c(&uStack_60,0);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 003584b0; end: 003584bf;  */

undefined1  [16] FUN_003584b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = "grpc.client_channel_factory";
  return auVar1;
}



/* Entry: 003584c0; end: 00358527;  */

void FUN_003584c0(undefined8 param_1)

{
  FUN_003a28d0(param_1,"grpc.client_channel_factory");
  return;
}



/* Entry: 00358528; end: 00358613;  */

void FUN_00358528(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003645ec();
  FUN_0036d8e4(param_1);
  appuStack_48[0] = &PTR_FUN_009dc9f8;
  pppuStack_30 = appuStack_48;
  FUN_003f517c(param_1 + 0x18,0,&UNK_00002710,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar3 = 4;
    pppuVar1 = appuStack_48;
LAB_003585a0:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_003585a0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == appuStack_48) {
    lVar3 = 4;
    pppuVar2 = appuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_0035860c;
    lVar3 = 5;
    pppuVar2 = pppuStack_30;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0035860c:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 00358614; end: 0035861b;  */

void FUN_00358614(void)

{
  return;
}



/* Entry: 0035861c; end: 0035863f;  */

void FUN_0035861c(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009dc9f8;
  return;
}



/* Entry: 00358640; end: 00358657;  */

void FUN_00358640(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009dc9f8;
  return;
}



/* Entry: 00358658; end: 0035867b;  */

undefined8 FUN_00358658(undefined8 param_1,undefined8 *param_2)

{
  FUN_003a6e14(*param_2,&PTR_FUN_009dba00);
  return 1;
}



/* Entry: 0035867c; end: 003586b7;  */

long FUN_0035867c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dca58);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003586b8; end: 003586c3;  */

undefined ** FUN_003586b8(void)

{
  return &PTR_DAT_009dca58;
}



/* Entry: 003586c4; end: 00358723;  */

void FUN_003586c4(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_003a28d0(param_2,"grpc.internal.config_selector");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
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
  *param_1 = lVar4;
  return;
}



/* Entry: 00358724; end: 003588eb;  */

long * FUN_00358724(long *param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uStack_90;
  ulong auStack_88 [2];
  char cStack_71;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  plStack_58 = param_2 + 2;
  lStack_60 = param_2[9];
  lStack_38 = param_2[10];
  uStack_68 = 0;
  lStack_50 = param_2[6];
  lStack_40 = param_2[8];
  lStack_48 = param_2[7];
  plStack_70 = param_1 + 2;
  FUN_003a6824(auStack_88,*(undefined8 *)(*param_1 + 0x10),1,FUN_003588ec,param_1,&plStack_70);
  uStack_90 = auStack_88[0];
  uVar3 = *param_3;
  if (auStack_88[0] != uVar3) {
    *param_3 = auStack_88[0];
    auStack_88[0] = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_003587d4;
    FUN_0055293c();
    uVar3 = auStack_88[0];
  }
  if ((uVar3 & 1) != 0) {
    FUN_0055293c();
  }
  uStack_90 = *param_3;
LAB_003587d4:
  if (uStack_90 == 0) {
    FUN_003a6958(param_1 + 2,param_2[1]);
  }
  else {
    if ((uStack_90 & 1) != 0) {
      piVar4 = (int *)(uStack_90 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be004(auStack_88,&uStack_90);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                 ,0x45,2,"error: %s");
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    FUN_0033c494(&uStack_90);
  }
  return param_1;
}



/* Entry: 003588ec; end: 0035895f;  */

void FUN_003588ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  FUN_003a69ac(param_1 + 2,0,param_1[1]);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00358944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 00358960; end: 00358993;  */

void FUN_00358960(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00358990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 00358994; end: 003589bb;  */

void FUN_00358994(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (param_2 != 0) {
      *(long *)(param_1 + 8) = param_2;
      return;
    }
  }
  else {
    func_0x007719f8();
  }
  FUN_007719c0();
  plVar3 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003c3188();
    if ((((ulong)plVar3 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_38 = 0;
      FUN_003c2968(param_1 + 0x18,&uStack_38,0,0);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_48 = 0;
    FUN_003c1e6c(&uStack_39,param_1 + 0x18,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003589bc; end: 003589db;  */

void FUN_003589bc(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar3 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_003c3188();
    if ((((ulong)plVar3 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(param_1 + 0x18,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,param_1 + 0x18,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003589dc; end: 00358be7;  */

void FUN_003589dc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  dword *pdVar6;
  int *piVar7;
  long lVar8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [32];
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lStack_68 = param_3[1];
  lVar8 = *param_3;
  lStack_60 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  lStack_70 = lVar8;
  FUN_00358be8(&uStack_50,param_2,&lStack_70);
  if (lVar8 != 0) {
    lStack_68 = lVar8;
    __ZdlPv();
  }
  uVar4 = uStack_48;
  if (uStack_48 == 0) {
LAB_00358afc:
    pdVar6 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined ***)pdVar6 = &PTR_FUN_009dca78;
    *(undefined8 *)(pdVar6 + 2) = 1;
    *(undefined8 *)(pdVar6 + 4) = uStack_50;
    *param_1 = pdVar6;
    return;
  }
  uStack_78 = uStack_48;
  if ((uStack_48 & 1) != 0) {
    piVar7 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = *piVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003f93b8(auStack_98,&uStack_78);
  FUN_003a1ecc(param_2,auStack_98,1);
  pdVar6 = &MACH_HEADER.cpusubtype;
  __Znwm();
  pdStack_b8 = pdVar6 + 2;
  *(undefined ***)pdVar6 = &PTR_DAT_009e1cd0;
  pdStack_c0 = pdVar6;
  pdStack_b0 = pdStack_b8;
  FUN_00358be8(&uStack_a8,param_2,&pdStack_c0);
  uVar3 = uStack_a0;
  uStack_50 = uStack_a8;
  if (uStack_a0 == uVar4) {
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
    __ZdlPv(pdVar6);
  }
  else {
    uStack_48 = uStack_a0;
    uStack_a0 = 0x36;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
    pdStack_b8 = pdVar6;
    __ZdlPv(pdVar6);
    if (uVar3 == 0) {
      FUN_003a2a64(param_2);
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_00358afc;
    }
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
               ,0xb7,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x358b7c);
  (*pcVar5)();
}



/* Entry: 00358be8; end: 00358d6f;  */

void FUN_00358be8(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  ulong uStack_38;
  
  lVar3 = *param_3;
  FUN_003a6518(lVar3,param_3[1] - lVar3 >> 3);
  func_0x00338c94();
  FUN_003a6574(&uStack_38,1,FUN_00358f44,lVar3,*param_3,param_3[1] - *param_3 >> 3,param_2,
               "DynamicFilters",lVar3);
  if (uStack_38 == 0) {
    *param_1 = lVar3;
    param_1[1] = 0;
  }
  else {
    uStack_58 = uStack_38;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003be004(auStack_50,&uStack_58);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                 ,0x9e,2,"error initializing client internal stack: %s");
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003a6784(lVar3);
    FUN_00338cb8(lVar3);
    *param_1 = 0;
    param_1[1] = uStack_38;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  return;
}



/* Entry: 00358d70; end: 00358d9f;  */

long FUN_00358d70(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00358da0; end: 00358def;  */

undefined8 * FUN_00358da0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dca78;
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 00358df0; end: 00358df3;  */

undefined8 * FUN_00358df0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_009dca78;
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_004005ec();
  }
  return param_1;
}



/* Entry: 00358df4; end: 00358e07;  */

void FUN_00358df4(void)

{
  FUN_00358da0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00358e08; end: 00358f43;  */

void FUN_00358e08(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar3 = *(int *)(*(long *)(param_2 + 0x10) + 0x38);
  puVar6 = (ulong *)param_3[8];
  do {
    uVar8 = *puVar6;
    uVar2 = uVar8 + ((ulong)(iVar3 + 0x1f) & 0xfffffff0);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar5) {
      *puVar6 = uVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (puVar6[2] < uVar2) {
    func_0x003d6048();
  }
  else {
    puVar6 = (ulong *)((long)puVar6 + uVar8 + 0x30);
  }
  plStack_90 = (long *)*param_3;
  *param_3 = 0;
  uStack_70 = param_3[4];
  uStack_78 = param_3[3];
  uStack_60 = param_3[6];
  uStack_68 = param_3[5];
  uStack_50 = param_3[8];
  uStack_58 = param_3[7];
  uStack_40 = param_3[10];
  uStack_48 = param_3[9];
  uStack_80 = param_3[2];
  uStack_88 = param_3[1];
  FUN_00358724(puVar6,&plStack_90,param_4);
  plVar7 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plStack_90 + 8))();
    }
  }
  *param_1 = (long)puVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_90 != (long *)0x0) {
    func_0x00771a30();
  }
  __Unwind_Resume(plVar7);
  FUN_003a6784();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(plVar7);
  return;
}



/* Entry: 00358f44; end: 00358f67;  */

void FUN_00358f44(undefined8 param_1)

{
  FUN_003a6784();
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 00358f68; end: 00359017;  */

void FUN_00358f68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000000b5e6f8 & 1) == 0) {
    iVar4 = 0xb5e6f8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      lVar5 = 0x68;
      __Znwm();
      FUN_003592dc();
      lRam0000000000b5e6f0 = lVar5;
      ___cxa_guard_release(0xb5e6f8);
    }
  }
  lVar5 = lRam0000000000b5e6f0;
  plVar1 = (long *)(lRam0000000000b5e6f0 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar5;
  return;
}



/* Entry: 00359018; end: 00359143;  */

void FUN_00359018(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  func_0x00339d8c(param_2 + 0x28);
  lVar5 = param_2 + 0x10;
  lVar6 = lVar5;
  FUN_003593c8(lVar5,param_3);
  if (param_2 + 0x18 != lVar6) {
    lVar6 = *(long *)(lVar6 + 0xb0);
    puVar1 = (ulong *)(lVar6 + 8);
    uVar4 = *puVar1;
    do {
      while( true ) {
        if (uVar4 >> 0x20 == 0) {
          *param_1 = 0;
          goto LAB_003590c0;
        }
        uVar7 = *puVar1;
        if (uVar7 == uVar4) break;
        ClearExclusiveLocal();
        uVar4 = uVar7;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar4 = uVar7;
    } while (cVar2 != '\0');
    *param_1 = lVar6;
    if (lVar6 != 0) goto LAB_003590fc;
LAB_003590c0:
    FUN_0035615c(param_1);
  }
  lVar6 = *param_4;
  uStack_48 = param_3;
  FUN_00359440(lVar5,param_3,&UNK_008000a0,&uStack_48,&uStack_49);
  *(long *)(lVar5 + 0xb0) = lVar6;
  *param_1 = *param_4;
  *param_4 = 0;
LAB_003590fc:
  func_0x00339da8(param_2 + 0x28);
  return;
}



/* Entry: 00359144; end: 003591f3;  */

void FUN_00359144(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00339d8c(param_1 + 0x28);
  lVar1 = param_1 + 0x10;
  lVar2 = lVar1;
  FUN_003593c8(lVar1,param_2);
  if ((param_1 + 0x18 != lVar2) && (*(long *)(lVar2 + 0xb0) == param_3)) {
    func_0x00359680(lVar1,lVar2);
    FUN_00375958(lVar2 + 0x20);
    __ZdlPv(lVar2);
  }
  func_0x00339da8(param_1 + 0x28);
  return;
}



/* Entry: 003591f4; end: 003592c3;  */

void FUN_003591f4(long *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00339d8c(param_2 + 0x28);
  lVar5 = param_2 + 0x10;
  FUN_003593c8(lVar5,param_3);
  if (param_2 + 0x18 == lVar5) {
LAB_00359288:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0xb0);
    puVar1 = (ulong *)(lVar5 + 8);
    uVar4 = *puVar1;
    do {
      while( true ) {
        if (uVar4 >> 0x20 == 0) goto LAB_00359288;
        uVar6 = *puVar1;
        if (uVar6 == uVar4) break;
        ClearExclusiveLocal();
        uVar4 = uVar6;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar4 = uVar6;
    } while (cVar2 != '\0');
  }
  *param_1 = lVar5;
  func_0x00339da8(param_2 + 0x28);
  return;
}



/* Entry: 003592c4; end: 003592c7;  */

long FUN_003592c4(long param_1)

{
  func_0x00339d70(param_1 + 0x28);
  FUN_00359348(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 003592c8; end: 003592db;  */

void FUN_003592c8(void)

{
  FUN_00359390();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003592dc; end: 00359347;  */

undefined8 * FUN_003592dc(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = &PTR_FUN_009dcac8;
  param_1[1] = 1;
  param_1[2] = param_1 + 3;
  param_1[4] = 0;
  FUN_00339d50(param_1 + 5);
  return param_1;
}



/* Entry: 00359348; end: 0035938f;  */

void FUN_00359348(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00359348(param_1,*param_2);
    FUN_00359348(param_1,param_2[1]);
    FUN_00375958(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00359390; end: 003593c7;  */

long FUN_00359390(long param_1)

{
  func_0x00339d70(param_1 + 0x28);
  FUN_00359348(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 003593c8; end: 0035943f;  */

long * FUN_003593c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      plVar2 = plVar5 + 4;
      FUN_00375a20(plVar2,param_2);
      plVar1 = plVar5 + 1;
      if ((int)plVar2 == 0) {
        plVar4 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (FUN_00375a20(param_2,plVar4 + 4), (int)param_2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}



/* Entry: 00359440; end: 00359577;  */

undefined1  [16]
FUN_00359440(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x003594e8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_00359578(alStack_60,param_1,param_3,param_4,param_5);
    FUN_003595e8(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x0035963c(alStack_60,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00359578; end: 003595e7;  */

void FUN_00359578(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00375984(lVar1 + 0x20,*param_4);
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 003595e8; end: 003596ef;  */

void FUN_003595e8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003596f0; end: 00359843;  */

void FUN_003596f0(undefined8 *param_1,qword *param_2,long *param_3,undefined8 param_4,qword *param_5
                 ,undefined8 *param_6)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  qword qVar8;
  undefined8 uVar9;
  
  pcVar5 = segment_command_00000020.segname + 8;
  __Znwm();
  qVar8 = param_2[1];
  *(qword *)(pcVar5 + 8) = *param_2;
  *(qword *)(pcVar5 + 0x10) = qVar8;
  *(undefined8 *)(pcVar5 + 0x17) = *(undefined8 *)((long)param_2 + 0xf);
  uVar2 = *(undefined1 *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  qVar8 = *param_5;
  *param_5 = 0;
  uVar9 = *param_6;
  *param_6 = 0;
  *(undefined ***)pcVar5 = &PTR_FUN_009dcb48;
  pcVar5[0x1f] = uVar2;
  *(qword *)(pcVar5 + 0x20) = qVar8;
  *(undefined8 *)(pcVar5 + 0x28) = uVar9;
  uVar9 = 0x230;
  __Znwm();
  plVar6 = (long *)*param_3;
  *param_3 = 0;
  FUN_00376148();
  *param_1 = uVar9;
  if (pcVar5 != (char *)0x0) {
    (**(code **)(*(long *)pcVar5 + 8))();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}



/* Entry: 00359844; end: 0035997b;  */

undefined8 * FUN_00359844(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dcb48;
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 0035997c; end: 003599b7;  */

void FUN_0035997c(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0x1c;
  param_1[2] = "/grpc.health.v1.Health/Watch";
  return;
}



/* Entry: 003599b8; end: 00359aa3;  */

void FUN_003599b8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  lVar1 = 0;
  FUN_005d20a4(0,0,&PTR_FUN_00b1f0c8);
  plVar2 = (long *)&UNK_00a06a98;
  FUN_005d0f6c(&UNK_00a06a98,lVar1);
  if ((char)*(byte *)(param_2 + 0x1f) < '\0') {
    lVar3 = *(long *)(param_2 + 8);
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  else {
    lVar3 = param_2 + 8;
    uVar4 = (ulong)*(byte *)(param_2 + 0x1f);
  }
  *plVar2 = lVar3;
  plVar2[1] = uVar4;
  FUN_005cf770();
  FUN_003ec0c8(param_1,uStack_38);
  lVar3 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar3 = param_1[2];
  }
  _memcpy(lVar3,plVar2,uStack_38);
  if (lVar1 != 0) {
    FUN_005d2198(lVar1);
  }
  return;
}



/* Entry: 00359aa4; end: 00359c97;  */

void FUN_00359aa4(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *****pppppuVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 ****appppuStack_68 [2];
  char cStack_51;
  ulong uStack_50;
  char cStack_48;
  
  lVar5 = 0;
  FUN_005d20a4(0,0,&PTR_FUN_00b1f0c8);
  piVar7 = (int *)&UNK_00a06ab0;
  FUN_005d0f6c(&UNK_00a06ab0,lVar5);
  if ((piVar7 == (int *)0x0) ||
     (FUN_005cef54(param_4,param_5,piVar7,&UNK_00a06ab0,0,0,lVar5), (int)param_4 != 0)) {
    func_0x005535e8(appppuStack_68,"cannot parse health check response",0x22);
    FUN_00359de0(&uStack_50,appppuStack_68);
    if (((ulong)appppuStack_68[0] & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    cStack_48 = *piVar7 == 1;
    uStack_50 = 0;
  }
  if (lVar5 != 0) {
    FUN_005d2198(lVar5);
  }
  if (uStack_50 == 0) {
    uVar6 = 2;
    if (cStack_48 == '\0') {
      uVar6 = 3;
    }
    pcVar2 = "backend unhealthy";
    if (cStack_48 != '\0') {
      pcVar2 = "OK";
    }
    FUN_00359d48(param_2,uVar6,pcVar2);
    *param_1 = 0;
  }
  else {
    FUN_00552ec8(appppuStack_68,&uStack_50,1);
    pppppuVar1 = (undefined8 *****)appppuStack_68[0];
    if (-1 < cStack_51) {
      pppppuVar1 = appppuStack_68;
    }
    FUN_00359d48(param_2,3,pppppuVar1);
    if (cStack_51 < '\0') {
      __ZdlPv(appppuStack_68[0]);
    }
    *param_1 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_00359e38(&uStack_50);
  return;
}



/* Entry: 00359c98; end: 00359d47;  */

void FUN_00359c98(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uStack_88;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((int)param_3 == 0xc) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x73,2,&UNK_007f3bc4);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_003ec14c(auStack_48,&UNK_007f3bc4);
      FUN_003a75b4(lVar2 + 0xc0,3,auStack_48);
    }
    param_3 = &UNK_007f3bc4;
    param_2 = 2;
    FUN_00359d48(param_1,2,&UNK_007f3bc4);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = *(long **)(param_1 + 0x28);
  if ((int)param_2 == 3) {
    puVar1 = param_3;
    _strlen(param_3);
    func_0x00553624(&uStack_88,param_3,puVar1);
  }
  else {
    uStack_88 = 0;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00359d48; end: 00359ddf;  */

void FUN_00359d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((int)param_2 == 3) {
    uVar1 = param_3;
    _strlen(param_3);
    func_0x00553624(&uStack_38,param_3,uVar1);
  }
  else {
    uStack_38 = 0;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 00359de0; end: 00359e37;  */

long * FUN_00359de0(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}


