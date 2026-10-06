/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107404d24; end: 107404d5f;  */

long FUN_107404d24(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107404d60; end: 107404e97;  */

long FUN_107404d60(long param_1)

{
  FUN_107404cc4(param_1 + 0x788);
  FUN_1073bcebc(param_1 + 0x778);
  FUN_1074032e0(param_1 + 0x740);
  FUN_1073dd4c4(param_1 + 0x708);
  FUN_1073dd4c4(param_1 + 0x6c8);
  FUN_1073dd4c4(param_1 + 0x690);
  FUN_1073deccc(param_1 + 0x640);
  FUN_1073dd4c4(param_1 + 0x608);
  FUN_1073dd4c4(param_1 + 0x5c8);
  FUN_107403220(param_1 + 0x588);
  FUN_1073e720c(param_1 + 0x538);
  FUN_107403068(param_1 + 0x4e8);
  FUN_107402fa8(param_1 + 0x4b0);
  FUN_1073e720c(param_1 + 0x460);
  FUN_1073efbf4(param_1 + 0x418);
  FUN_1073e71cc(param_1 + 0x3d8);
  FUN_1073dd4c4(param_1 + 0x3a0);
  FUN_1073dd4c4(param_1 + 0x368);
  FUN_1073dd4c4(param_1 + 0x330);
  FUN_1073dd4c4(param_1 + 0x2f0);
  FUN_1073e720c(param_1 + 0x2a0);
  FUN_1073deccc(param_1 + 600);
  FUN_1073dd4c4(param_1 + 0x220);
  FUN_1073e720c(param_1 + 0x1d0);
  FUN_1073dd4c4(param_1 + 0x180);
  FUN_1073dd4c4(param_1 + 0x140);
  FUN_1073deccc(param_1 + 0xf0);
  FUN_1073e7178(param_1 + 0x50);
  FUN_107402fa8(param_1 + 8);
  return param_1;
}



/* Entry: 107404e98; end: 107404ea3;  */

void FUN_107404e98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010740a430();
  __Znwm(param_2);
  return;
}



/* Entry: 107404ea4; end: 107404ef3;  */

void FUN_107404ea4(undefined8 param_1,undefined8 param_2)

{
  __Znwm(param_2);
  return;
}



/* Entry: 107404ef4; end: 107404fb7;  */

void FUN_107404ef4(long *param_1,long param_2,byte *param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(byte *)(param_2 + 0x138) = *(byte *)(param_2 + 0x138) | *param_3 == 1;
  bVar1 = *param_3;
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_107404f70:
      plVar2 = param_1;
      func_0x00010740ac98();
      *(byte *)((long)plVar2 + 0x19) = bVar1;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar3;
      *plVar4 = (long)plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar2);
      func_0x00010740aa28(0);
      return;
    }
    while (plVar3 = plVar2, *(byte *)((long)plVar3 + 0x19) <= bVar1) {
      if (bVar1 <= *(byte *)((long)plVar3 + 0x19)) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_107404f70;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 107404fb8; end: 107404ffb;  */

undefined8 FUN_107404fb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (-1 < param_2) {
    func_0x00010740b24c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_107404e98();
  func_0x00010740acc8();
  func_0x00010740a3d4();
  return param_1;
}



/* Entry: 107404ffc; end: 107405017;  */

uint FUN_107404ffc(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x408) != 0) {
    uVar1 = (int)param_1 + 0x3d8;
    func_0x0001072804a4();
    if (((uVar1 >> 8 & 1) == 0) && (uVar1 = 0, *(char *)(param_1 + 0x401) == '\x01')) {
      uVar1 = (uint)*(byte *)(param_1 + 0x400);
    }
    return uVar1 & 1;
  }
  return (uint)*(byte *)(param_1 + 0x3d8);
}



/* Entry: 107405018; end: 107405023;  */

undefined4
FUN_107405018(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  func_0x00010740a430();
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 107405024; end: 10740504b;  */

undefined4
FUN_107405024(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 10740504c; end: 1074050eb;  */

void FUN_10740504c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_2 + 0x530) == 0) {
    func_0x0001072787e4(param_1,param_2 + 0x4e8);
  }
  else {
    func_0x0001072787e4(auStack_48,&uStack_60);
    FUN_107403f50(param_1,param_2 + 0x4e8,param_3,param_4,auStack_48);
    func_0x00010726afc0(auStack_48);
  }
  func_0x00010726afc0(&uStack_60);
  return;
}



/* Entry: 1074050ec; end: 107405107;  */

ulong FUN_1074050ec(long param_1)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  int unaff_w22;
  
  if (*(int *)(param_1 + 0x770) == 0) {
    return (ulong)*(byte *)(param_1 + 0x740);
  }
  puVar1 = (ulong *)(param_1 + 0x740);
  func_0x00010740a3b0();
  uVar2 = *puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775afc();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)*(byte *)(param_1 + 0x768);
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return uVar2;
}



/* Entry: 107405108; end: 10740514f;  */

void FUN_107405108(void)

{
  undefined1 auStack_40 [16];
  
  func_0x00010740aafc();
  FUN_107404168(auStack_40);
  func_0x00010740ab7c();
  func_0x00010740a92c();
  return;
}



/* Entry: 107405150; end: 1074051b3;  */

undefined1 FUN_107405150(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0x18);
  func_0x000107405928();
  return *puVar1;
}



/* Entry: 1074051b4; end: 107405287;  */

undefined8 * FUN_1074051b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_108 [12];
  undefined1 auStack_a8 [96];
  undefined8 uStack_48;
  
  func_0x00010740a3f8();
  uStack_48 = extraout_x8;
  FUN_107403678(auStack_108);
  if (*(int *)(param_2 + 0xe0) == 0) {
    func_0x000107278acc(param_1,param_2 + 0x50);
  }
  else {
    func_0x000107278acc(auStack_a8,auStack_108);
    FUN_1073df0ac(param_1,param_2 + 0x50,param_3,param_4,auStack_a8);
    func_0x00010726b164(auStack_a8);
  }
  puVar1 = auStack_108;
  func_0x00010726b164();
  func_0x00010740a39c(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010726b164(auStack_a8);
  puVar1 = auStack_108;
  func_0x00010726b164();
  func_0x00010740a584();
  *puVar1 = &PTR_FUN_1109ad8b8;
  func_0x00010726b144(puVar1 + 0x16);
  if (*(char *)(puVar1 + 0x15) == '\x01') {
    FUN_10740553c(puVar1 + 0xb);
  }
  func_0x0001072977d0(puVar1 + 8);
  FUN_107330fdc(puVar1 + 6);
  *puVar1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(puVar1 + 1);
  return puVar1;
}



/* Entry: 107405288; end: 10740528b;  */

undefined8 * FUN_107405288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad8b8;
  func_0x00010726b144(param_1 + 0x16);
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10740553c(param_1 + 0xb);
  }
  func_0x0001072977d0(param_1 + 8);
  FUN_107330fdc(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 10740528c; end: 10740529f;  */

void FUN_10740528c(void)

{
  func_0x000107406cf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074052a0; end: 107405307;  */

void FUN_1074052a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001074052ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 107405308; end: 107405383;  */

/* WARNING: Possible PIC construction at 0x000107405338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010740533c) */
/* WARNING: Removing unreachable block (ram,0x00010740a498) */

long FUN_107405308(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = param_4;
  if (*(int *)(param_4 + 0x40) != 0) {
    func_0x00010740aafc();
    unaff_x30 = 0x10740533c;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    param_1 = puVar2;
    lVar3 = param_5;
    unaff_x19 = param_4;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a6f4(param_1,lVar3);
  func_0x000107278b90();
  return unaff_x19;
}



/* Entry: 107405384; end: 1074053f7;  */

void FUN_107405384(void)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  undefined8 uVar2;
  
  func_0x00010740a658();
  FUN_107405414();
  func_0x00010065acbc(unaff_x19 + 0x18,unaff_x20 + 0x18);
  plVar1 = (long *)(unaff_x19 + 0x30);
  if (*plVar1 != 0) {
    FUN_107405454(plVar1);
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 1074053f8; end: 107405413;  */

void FUN_1074053f8(long param_1)

{
  func_0x0001074054bc();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 107405414; end: 107405453;  */

void FUN_107405414(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010002c968();
  if (*(char *)(param_1 + 0x17) < '\0') {
    __ZdlPv(*unaff_x20);
  }
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  *(undefined2 *)unaff_x19 = 0;
  return;
}



/* Entry: 107405454; end: 10740545b;  */

void FUN_107405454(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    func_0x000107405490();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10740545c; end: 1074054ff;  */

void FUN_10740545c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    func_0x000107405490();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107405500; end: 10740553b;  */

void FUN_107405500(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10740553c; end: 1074055df;  */

undefined8 * FUN_10740553c(undefined8 *param_1)

{
  func_0x000107405564(param_1 + 6);
  func_0x000100100fec(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 1074055e0; end: 1074056e7;  */

long * FUN_1074055e0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,ushort *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = param_2;
  if (param_2 != param_1 + 1) {
    if (*(ushort *)((long)param_2 + 0x1a) <= *param_5) {
      if (*param_5 <= *(ushort *)((long)param_2 + 0x1a)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar2 = (long *)0x1;
      FUN_107405784();
      if ((param_1 + 1 == plVar1) || (*param_5 < *(ushort *)((long)plVar1 + 0x1a))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar1;
          return plVar1;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_1074056a0;
    }
  }
  if ((param_2 == (long *)*param_1) ||
     (plVar2 = param_2, func_0x00010002c810(), *(ushort *)((long)plVar1 + 0x1a) < *param_5)) {
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar1;
      param_2 = plVar1 + 1;
    }
    return param_2;
  }
LAB_1074056a0:
  func_0x00010740ad78();
  plVar1 = plVar1 + 1;
  plVar3 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar4 = (long *)*plVar1;
    do {
      while (plVar3 = plVar4, *(ushort *)((long)plVar4 + 0x1a) <= *param_5) {
        if (*param_5 <= *(ushort *)((long)plVar4 + 0x1a)) goto LAB_10740577c;
        plVar1 = plVar4 + 1;
        plVar4 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10740577c;
      }
      plVar5 = (long *)*plVar4;
      plVar1 = plVar4;
      plVar4 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_10740577c:
  *plVar2 = (long)plVar3;
  return plVar1;
}



/* Entry: 1074056e8; end: 107405733;  */

void FUN_1074056e8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010740a600();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010740a974();
  func_0x00010740aa28();
  return;
}



/* Entry: 107405734; end: 107405783;  */

long * FUN_107405734(long param_1,long *param_2,ushort *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < *(ushort *)((long)plVar3 + 0x1a)) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_10740577c;
      }
      if (*param_3 <= *(ushort *)((long)plVar3 + 0x1a)) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_10740577c:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107405784; end: 1074057a7;  */

undefined8 FUN_107405784(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1074057a8(&uStack_18);
  return uStack_18;
}



/* Entry: 1074057a8; end: 10740582f;  */

void FUN_1074057a8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010002c968();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      func_0x000107405710();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x0001074057ec();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 107405830; end: 107405847;  */

void FUN_107405830(long *param_1,long param_2)

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



/* Entry: 107405848; end: 10740589b;  */

void FUN_107405848(void)

{
  func_0x00010740a5ac();
  func_0x00010740586c();
  return;
}



/* Entry: 10740589c; end: 1074058a3;  */

void FUN_10740589c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001074058d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074058a4; end: 107405907;  */

void FUN_1074058a4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001074058d8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107405908; end: 107405957;  */

void FUN_107405908(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010002c948();
  }
  return;
}



/* Entry: 107405958; end: 1074059eb;  */

undefined1  [16]
FUN_107405958(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_1074059ec(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_107405a64(alStack_60,param_1,param_3,param_4,param_5);
    FUN_107405ab8(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    FUN_107405c4c(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1074059ec; end: 107405a63;  */

long * FUN_1074059ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x00010002c968();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_107405ae0(param_3,plVar4 + 4), (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      FUN_107405ae0(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_107405a54;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_107405a54;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_107405a54:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 107405a64; end: 107405ab7;  */

void FUN_107405a64(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_107405c00(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 107405ab8; end: 107405adf;  */

void FUN_107405ab8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010740a600();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010740a974();
  func_0x00010740aa28();
  return;
}



/* Entry: 107405ae0; end: 107405aeb;  */

uint FUN_107405ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_107405b04(uVar1,*param_2);
  return (uint)uVar1 >> 7 & 1;
}



/* Entry: 107405aec; end: 107405b03;  */

uint FUN_107405aec(uint param_1)

{
  FUN_107405b04();
  return param_1 >> 7 & 1;
}



/* Entry: 107405b04; end: 107405b17;  */

void FUN_107405b04(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  FUN_107405b34(*param_1,param_1[1],*param_2,param_2[1],&uStack_11);
  return;
}



/* Entry: 107405b18; end: 107405b33;  */

void FUN_107405b18(void)

{
  FUN_107405b34();
  return;
}



/* Entry: 107405b34; end: 107405bbb;  */

void FUN_107405b34(ulong param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (long)(param_2 - param_1) / 0x38;
  uVar2 = (param_4 - param_3) / 0x38;
  if ((long)uVar1 <= (long)uVar2) {
    uVar2 = uVar1;
  }
  uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    func_0x00010740addc();
    FUN_107405bbc();
    if ((param_1 & 0xff) != 0) break;
    uVar2 = uVar2 - 1;
  }
  return;
}



/* Entry: 107405bbc; end: 107405bff;  */

void FUN_107405bbc(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x000104c2fc44(param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000104c2fc44(param_3,param_2);
  }
  return;
}



/* Entry: 107405c00; end: 107405c4b;  */

void FUN_107405c00(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000107405c24(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 107405c4c; end: 107405c6b;  */

void FUN_107405c4c(void)

{
  func_0x00010740ac8c();
  FUN_107405c6c();
  return;
}



/* Entry: 107405c6c; end: 107405c83;  */

void FUN_107405c6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107405cc4(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107405c84; end: 107405d3f;  */

void FUN_107405c84(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107405cc4(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107405d40; end: 107405d73;  */

void FUN_107405d40(void)

{
  func_0x000107405d58();
  return;
}



/* Entry: 107405d74; end: 107405dfb;  */

void FUN_107405d74(long *param_1,undefined8 param_2,undefined2 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_107405734(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    plVar2 = plVar1;
    func_0x00010740ac98();
    uStack_50 = 1;
    *(undefined2 *)((long)plVar2 + 0x1a) = *param_3;
    plStack_58 = param_1 + 1;
    FUN_1074056e8(param_1,uStack_48,plVar1,plVar2);
    uStack_60 = 0;
    func_0x000107405810(&uStack_60);
  }
  func_0x00010740addc();
  return;
}



/* Entry: 107405dfc; end: 107405e4f;  */

void FUN_107405dfc(void)

{
  func_0x00010002c93c();
  func_0x000107405e1c();
  return;
}



/* Entry: 107405e50; end: 107405e7f;  */

void FUN_107405e50(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010740b138();
  FUN_107406088();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x130;
  return;
}



/* Entry: 107405e80; end: 10740602f;  */

void FUN_107405e80(long param_1,long param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010740a658();
  if (param_1 != param_2) {
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    plVar6 = *(long **)(unaff_x20 + 0x18);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 != 0) {
      puVar3 = *(undefined8 **)(unaff_x19 + 8);
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      plVar5 = *(long **)(unaff_x19 + 0x18);
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      for (plVar7 = plVar6;
          (plVar6 = plVar7, plVar5 != (long *)0x0 && (plVar6 = (long *)0x0, plVar7 != (long *)0x0));
          plVar7 = (long *)*plVar7) {
        func_0x000107262f3c(plVar5 + 2,plVar7 + 2);
        func_0x0001072955a4(plVar5 + 10,plVar7 + 10);
        plVar5 = (long *)*plVar5;
        func_0x00010740afe8();
      }
      func_0x00010740afdc();
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      puVar3 = (undefined8 *)0xb8;
      __Znwm();
      uStack_48 = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puStack_58 = puVar3;
      lStack_50 = unaff_x19 + 0x18;
      FUN_10740665c(puVar3 + 2,plVar6 + 2);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      lVar4 = unaff_x19 + 0x20;
      func_0x00010726364c(lVar4,puVar3 + 2);
      puVar3[1] = lVar4;
      func_0x00010740afe8();
      puStack_58 = (undefined8 *)0x0;
      FUN_107406694(&puStack_58);
    }
  }
  func_0x0001073c13fc(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_10737cf48(unaff_x19 + 0x40,unaff_x20 + 0x40);
  cVar1 = *(char *)(unaff_x19 + 0xa8);
  if (cVar1 == *(char *)(unaff_x20 + 0xa8)) {
    if (cVar1 != '\0') {
      FUN_107405384(unaff_x19 + 0x58,unaff_x20 + 0x58);
    }
  }
  else if (cVar1 == '\0') {
    FUN_1074053f8(unaff_x19 + 0x58,unaff_x20 + 0x58);
  }
  else {
    FUN_10740553c();
    *(undefined1 *)(unaff_x19 + 0xa8) = 0;
  }
  FUN_107406ac4(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  uVar2 = *(undefined2 *)(unaff_x20 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar8;
  *(undefined2 *)(unaff_x19 + 0x128) = uVar2;
  return;
}



/* Entry: 107406030; end: 107406087;  */

ulong FUN_107406030(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0xd79435e50d7943 < param_2) {
    FUN_107406b10();
    func_0x00010740a658();
    FUN_107406120();
    *param_1 = (long)&PTR_FUN_1109ad8b8;
    lVar3 = *(long *)(unaff_x20 + 0x30);
    param_1[7] = *(long *)(unaff_x20 + 0x38);
    param_1[6] = lVar3;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    lVar3 = *(long *)(unaff_x20 + 0x40);
    param_1[9] = *(long *)(unaff_x20 + 0x48);
    param_1[8] = lVar3;
    param_1[10] = *(long *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
      FUN_1074053f8(param_1 + 0xb,unaff_x20 + 0x58);
    }
    func_0x0001072ca2b0(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
    *(undefined2 *)(unaff_x19 + 0x128) = *(undefined2 *)(unaff_x20 + 0x128);
    *(undefined8 *)(unaff_x19 + 0x120) = uVar5;
    *(undefined8 *)(unaff_x19 + 0x118) = uVar4;
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x130;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x6bca1af286bca0 < uVar1) {
    uVar2 = 0xd79435e50d7943;
  }
  return uVar2;
}



/* Entry: 107406088; end: 10740611f;  */

void FUN_107406088(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010740a658();
  FUN_107406120();
  *param_1 = &PTR_FUN_1109ad8b8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  param_1[7] = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[6] = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  param_1[9] = *(undefined8 *)(unaff_x20 + 0x48);
  param_1[8] = uVar1;
  param_1[10] = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
    FUN_1074053f8(param_1 + 0xb,unaff_x20 + 0x58);
  }
  func_0x0001072ca2b0(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined2 *)(unaff_x19 + 0x128) = *(undefined2 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar1;
  return;
}



/* Entry: 107406120; end: 107406143;  */

void FUN_107406120(undefined8 *param_1)

{
  FUN_107406144();
  *param_1 = &PTR_DAT_1109ad930;
  return;
}



/* Entry: 107406144; end: 107406177;  */

undefined8 * FUN_107406144(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_110998b48;
  FUN_107406178(param_1 + 1,param_2 + 8);
  return param_1;
}



/* Entry: 107406178; end: 1074061c7;  */

void FUN_107406178(undefined8 *param_1,long param_2)

{
  func_0x00010740a658();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x000107406200();
  func_0x0001074061c8();
  return;
}



/* Entry: 1074061c8; end: 10740629f;  */

void FUN_1074061c8(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010740a9b4();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x0001074063d0();
  }
  return;
}



/* Entry: 1074062a0; end: 10740639b;  */

void FUN_1074062a0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10740639c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1074063b4(plVar3);
    FUN_10740639c(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10740639c; end: 1074063b3;  */

void FUN_10740639c(long *param_1,long param_2)

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



/* Entry: 1074063b4; end: 107406403;  */

void FUN_1074063b4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074063e8();
  return;
}



/* Entry: 107406404; end: 107406607;  */

undefined1  [16] FUN_107406404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  plVar7 = param_1 + 3;
  func_0x00010726364c();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1074064c8;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x000104c32db4(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_1074065dc;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1074064c8:
  FUN_107406608(aplStack_68,param_1,plVar7,param_3);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    func_0x00010740aee0();
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x00010740b178();
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x000107406200(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = aplStack_68[0];
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar7;
    if (*aplStack_68[0] != 0) {
      plVar7 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107406694(aplStack_68);
  uVar4 = 1;
LAB_1074065dc:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 107406608; end: 10740665b;  */

void FUN_107406608(long param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 unaff_x21;
  
  func_0x00010740aafc();
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *extraout_x8 = puVar1;
  extraout_x8[1] = param_1 + 0x10;
  extraout_x8[2] = 0;
  *puVar1 = 0;
  puVar1[1] = unaff_x21;
  FUN_10740665c(puVar1 + 2);
  *(undefined1 *)(extraout_x8 + 2) = 1;
  return;
}



/* Entry: 10740665c; end: 107406693;  */

void FUN_10740665c(long param_1)

{
  long unaff_x20;
  
  func_0x00010740a658();
  func_0x000104c2fe00();
  func_0x0001072786d8(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 107406694; end: 1074066b3;  */

void FUN_107406694(void)

{
  func_0x00010740ac8c();
  FUN_1074066b4();
  return;
}



/* Entry: 1074066b4; end: 1074066cb;  */

void FUN_1074066b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010729651c(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1074066cc; end: 10740670b;  */

void FUN_1074066cc(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010729651c(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10740670c; end: 107406ac3;  */

void FUN_10740670c(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong extraout_x8;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  
  func_0x00010740a658();
  uVar8 = param_1 + 0x18;
  func_0x00010726364c(uVar8,param_2 + 0x10);
  puVar10 = (ulong *)(unaff_x19 + 1);
  uVar12 = *puVar10;
  unaff_x20[1] = uVar8;
  if ((uVar12 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar12))
  goto LAB_107406910;
  uVar13 = uVar8;
  func_0x00010740aee0();
  bVar1 = 2 < uVar12;
  bVar2 = uVar12 == 3;
  func_0x00010740b178();
  uVar11 = extraout_x8;
  if (!bVar1 || bVar2) {
    uVar11 = extraout_x9;
  }
  if (uVar11 - 1 == 0) {
    uVar11 = 2;
  }
  else if ((uVar11 & uVar11 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar12 = *puVar10;
    uVar13 = uVar11;
  }
  if (uVar12 < uVar11) {
LAB_1074067b4:
    FUN_1074063b4(puVar10,uVar11);
    FUN_10740639c();
    unaff_x19[1] = uVar11;
    lVar5 = *unaff_x19;
    for (uVar12 = 0; uVar11 != uVar12; uVar12 = uVar12 + 1) {
      *(undefined8 *)(lVar5 + uVar12 * 8) = 0;
    }
    plVar14 = (long *)unaff_x19[2];
    if (plVar14 != (long *)0x0) {
      uVar12 = plVar14[1];
      uVar13 = uVar11 - 1;
      if ((uVar11 & uVar13) == 0) {
        uVar12 = uVar12 & uVar13;
      }
      else if (uVar11 <= uVar12) {
        uVar17 = 0;
        if (uVar11 != 0) {
          uVar17 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar17 * uVar11;
      }
      *(long **)(lVar5 + uVar12 * 8) = unaff_x19 + 2;
      while (plVar16 = plVar14, plVar14 = (long *)*plVar16, plVar14 != (long *)0x0) {
        uVar17 = plVar14[1];
        if ((uVar11 & uVar13) == 0) {
          uVar17 = uVar17 & uVar13;
        }
        else if (uVar11 <= uVar17) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar17 / uVar11;
          }
          uVar17 = uVar17 - uVar9 * uVar11;
        }
        if (uVar17 != uVar12) {
          plVar7 = plVar14;
          if (*(long *)(lVar5 + uVar17 * 8) == 0) {
            *(long **)(lVar5 + uVar17 * 8) = plVar16;
            uVar12 = uVar17;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar4 = plVar14 + 2;
              func_0x000104c32db4(plVar4,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar16 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar17 * 8);
            **(undefined8 **)(lVar5 + uVar17 * 8) = plVar14;
            plVar14 = plVar16;
          }
        }
      }
    }
  }
  else if (uVar11 < uVar12) {
    func_0x00010740af10();
    if ((uVar12 < 3) || ((uVar12 & uVar12 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010740abe4();
    }
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    if (uVar11 < uVar12) {
      if (uVar11 != 0) goto LAB_1074067b4;
      FUN_10740639c();
      unaff_x19[1] = 0;
    }
  }
  uVar12 = *puVar10;
LAB_107406910:
  uVar11 = uVar12 - 1;
  if ((uVar12 & uVar11) == 0) {
    uVar13 = uVar11 & uVar8;
  }
  else {
    uVar13 = uVar8;
    if (uVar12 <= uVar8) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar8 / uVar12;
      }
      uVar13 = uVar8 - uVar13 * uVar12;
    }
  }
  plVar14 = *(long **)(*unaff_x19 + uVar13 * 8);
  if (plVar14 != (long *)0x0) {
    uVar15 = 0;
    bVar18 = 0;
    for (; lVar5 = *plVar14, lVar5 != 0; plVar14 = (long *)*plVar14) {
      uVar17 = *(ulong *)(lVar5 + 8);
      if ((uVar12 & uVar11) == 0) {
        uVar9 = uVar17 & uVar11;
      }
      else {
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar17 / uVar12;
          }
          uVar9 = uVar17 - uVar9 * uVar12;
        }
      }
      if (uVar9 != uVar13) break;
      if (uVar17 == uVar8) {
        lVar5 = lVar5 + 0x10;
        func_0x000104c32db4(lVar5,unaff_x20 + 2);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar15;
      if ((bool)(bVar18 & bVar2)) break;
      uVar15 = uVar15 | bVar2;
      bVar18 = bVar18 | bVar2;
    }
    uVar12 = *puVar10;
  }
  bVar18 = POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) + POPCOUNT((char)(uVar12 >> 0x10))
           + POPCOUNT((char)(uVar12 >> 0x18)) + POPCOUNT((char)(uVar12 >> 0x20)) +
           POPCOUNT((char)(uVar12 >> 0x28)) + POPCOUNT((char)(uVar12 >> 0x30)) +
           POPCOUNT((char)(uVar12 >> 0x38));
  uVar8 = unaff_x20[1];
  if (bVar18 < 2) {
    uVar8 = uVar12 - 1 & uVar8;
  }
  else if (uVar12 <= uVar8) {
    uVar11 = 0;
    if (uVar12 != 0) {
      uVar11 = uVar8 / uVar12;
    }
    uVar8 = uVar8 - uVar11 * uVar12;
  }
  if (plVar14 == (long *)0x0) {
    plVar14 = unaff_x19 + 2;
    *unaff_x20 = *plVar14;
    *plVar14 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar8 * 8) = plVar14;
    if (*unaff_x20 != 0) {
      uVar8 = *(ulong *)(*unaff_x20 + 8);
      if (bVar18 < 2) {
        uVar8 = uVar8 & uVar12 - 1;
      }
      else if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar8 = uVar8 - uVar11 * uVar12;
      }
      *(long **)(lVar5 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar14;
    *plVar14 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar11 = *(ulong *)(*unaff_x20 + 8);
      if (bVar18 < 2) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar13 = 0;
        if (uVar12 != 0) {
          uVar13 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar13 * uVar12;
      }
      if (uVar11 != uVar8) {
        *(long **)(*unaff_x19 + uVar11 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 107406ac4; end: 107406ae7;  */

undefined8 FUN_107406ac4(undefined8 param_1)

{
  FUN_107406ae8();
  return param_1;
}



/* Entry: 107406ae8; end: 107406b0f;  */

void FUN_107406ae8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 != *(char *)(param_2 + 0x60)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x60) == '\x01') {
        func_0x00010726b164();
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      return;
    }
    func_0x00010726ccd4();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001072747d8();
    func_0x000104c2f1f0();
    *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
    func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
    return;
  }
  return;
}



/* Entry: 107406b10; end: 107406b1b;  */

void FUN_107406b10(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong unaff_x20;
  
  func_0x00010740a430();
  uVar1 = param_3;
  func_0x00010740a658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0xd79435e50d7943 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010740a9b4();
      for (; param_3 != unaff_x20; param_3 = param_3 + 0x130) {
        FUN_107405e80(uVar1,param_3);
        uVar1 = uVar1 + 0x130;
      }
      return;
    }
    __Znwm(unaff_x20 * 0x130);
  }
  func_0x00010740a794(0x130);
  return;
}



/* Entry: 107406b1c; end: 107406bbf;  */

void FUN_107406b1c(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong unaff_x20;
  
  uVar1 = param_3;
  func_0x00010740a658();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0xd79435e50d7943 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010740a9b4();
      for (; param_3 != unaff_x20; param_3 = param_3 + 0x130) {
        FUN_107405e80(uVar1,param_3);
        uVar1 = uVar1 + 0x130;
      }
      return;
    }
    __Znwm(unaff_x20 * 0x130);
  }
  func_0x00010740a794(0x130);
  return;
}



/* Entry: 107406bc0; end: 107406c57;  */

void FUN_107406bc0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x130) {
    FUN_107406088(param_4,lVar1);
    param_4 = lStack_38 + 0x130;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x130) {
    func_0x00010740ace8();
  }
  FUN_107406c58(&uStack_60);
  return;
}



/* Entry: 107406c58; end: 107406ca7;  */

long FUN_107406c58(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      func_0x00010740ace8();
      lVar1 = lVar1 + -0x130;
    }
  }
  return param_1;
}



/* Entry: 107406ca8; end: 107406d47;  */

void FUN_107406ca8(void)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010740b138();
  while (unaff_x20 != unaff_x19[2]) {
    puVar1 = (undefined8 *)(unaff_x19[2] + -0x130);
    unaff_x19[2] = (long)puVar1;
    (**(code **)*puVar1)();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107406d48; end: 107406d6f;  */

ulong FUN_107406d48(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  int unaff_w22;
  
  if ((int)param_3[6] == 0) {
    return (ulong)(byte)*param_3;
  }
  puVar1 = param_3;
  func_0x00010740a3b0(param_3,param_1,param_2);
  uVar2 = *puVar1;
  func_0x00010740ac60();
  func_0x00010740b234();
  if ((bool)in_ZR) {
    func_0x00010740ace0();
    func_0x000107775a54();
    func_0x00010740ae98();
  }
  else {
    unaff_w21 = 0;
    unaff_w22 = 1;
  }
  func_0x00010740a4b8();
  if ((unaff_w22 != 0) && (func_0x00010740aeb8(), (bool)in_ZR)) {
    unaff_w21 = (uint)(byte)param_3[5];
  }
  func_0x00010740a384();
  if ((bool)in_ZR) {
    return (ulong)(unaff_w21 & 0xff);
  }
  ___stack_chk_fail();
  func_0x00010740a4b8();
  func_0x00010740a584();
  func_0x00010740b0c4();
  func_0x00010740acd4();
  return uVar2;
}



/* Entry: 107406d70; end: 107406dd7;  */

ulong FUN_107406d70(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3[0xe] != 0) {
    uVar1 = *param_4;
    uVar2 = 0;
    FUN_107339498(uVar1,param_4[1],param_3,param_1,param_2);
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*param_3;
}



/* Entry: 107406dd8; end: 107406e37;  */

void FUN_107406dd8(void)

{
  __Znwm();
  return;
}



/* Entry: 107406e38; end: 107406e5f;  */

void FUN_107406e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010740a3d4(param_3,param_1,param_2,param_1 + 0x608);
  return;
}



/* Entry: 107406e60; end: 107406e67;  */

void FUN_107406e60(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107406e9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107406e68; end: 107406eef;  */

void FUN_107406e68(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107406e9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107406ef0; end: 107406ef7;  */

void FUN_107406ef0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x80) {
    func_0x00010724b3d8(lVar1 + -0x48);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107406ef8; end: 107406f37;  */

void FUN_107406ef8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002c968();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x80) {
    func_0x00010724b3d8(lVar1 + -0x48);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107406f38; end: 107407037;  */

void FUN_107406f38(void)

{
  func_0x00010740a5ac();
  func_0x000107406f5c();
  return;
}



/* Entry: 107407038; end: 10740709b;  */

void FUN_107407038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  uVar3 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)((long)param_1 + 0x59) = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x51) = uVar3;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  return;
}



/* Entry: 10740709c; end: 1074070d3;  */

undefined8 FUN_10740709c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_107406f38(param_1 + 0x98);
  FUN_107406f38(param_1 + 0x68);
  FUN_107406f38(param_1 + 0x30);
  func_0x00010740a5ac(param_1);
  func_0x000107406f5c();
  return unaff_x19;
}



/* Entry: 1074070d4; end: 1074071b7;  */

undefined8 *
FUN_1074070d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  func_0x000104c318bc(param_1 + 1,param_3);
  func_0x000104c318bc(param_1 + 8,param_4);
  param_1[0xf] = param_5;
  func_0x000107299490(param_1 + 0x10,param_6);
  func_0x000107299490(param_1 + 0x12,param_7);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0;
  func_0x00010002b838(param_1 + 0x15,"");
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar1 = *param_8;
  param_1[0x22] = param_8[1];
  param_1[0x21] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  return param_1;
}



/* Entry: 1074071b8; end: 10740723b;  */

void FUN_1074071b8(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010002c968();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107407208(param_1 + 3,param_2 + 3);
  func_0x000107407208(unaff_x20 + 0x30,unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x59);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x51);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x59) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x51) = uVar1;
  return;
}



/* Entry: 10740723c; end: 107407247;  */

void FUN_10740723c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  
  uVar2 = param_3 - param_2 >> 3;
  uVar3 = uVar2;
  func_0x00010740aafc();
  if ((ulong)(param_1[2] - *param_1 >> 3) < uVar3) {
    func_0x000107407014(param_1);
    plVar1 = param_1;
    func_0x00010724df50(param_1,uVar2);
    func_0x00010724e718();
    func_0x00010740addc();
  }
  else {
    lVar5 = param_1[1] - *param_1;
    if (uVar2 <= (ulong)(lVar5 >> 3)) {
      FUN_10740730c();
      param_1[1] = (long)unaff_x20;
      return;
    }
    FUN_10740730c();
    plVar1 = (long *)(unaff_x21 + lVar5);
  }
  plVar4 = (long *)param_1[1];
  for (; plVar1 != unaff_x20; plVar1 = plVar1 + 1) {
    *plVar4 = *plVar1;
    plVar4 = plVar4 + 1;
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 107407248; end: 10740730b;  */

void FUN_107407248(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  
  uVar2 = param_4;
  func_0x00010740aafc();
  if ((ulong)(param_1[2] - *param_1 >> 3) < uVar2) {
    func_0x000107407014(param_1);
    plVar1 = param_1;
    func_0x00010724df50(param_1,param_4);
    func_0x00010724e718();
    func_0x00010740addc();
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar4 >> 3)) {
      FUN_10740730c();
      param_1[1] = (long)unaff_x20;
      return;
    }
    FUN_10740730c();
    plVar1 = (long *)(unaff_x21 + lVar4);
  }
  plVar3 = (long *)param_1[1];
  for (; plVar1 != unaff_x20; plVar1 = plVar1 + 1) {
    *plVar3 = *plVar1;
    plVar3 = plVar3 + 1;
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10740730c; end: 107407337;  */

void FUN_10740730c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_107407338(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 107407338; end: 107407363;  */

void FUN_107407338(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *param_4 = *param_2;
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 107407364; end: 107407377;  */

void FUN_107407364(void)

{
  FUN_1074073c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107407378; end: 1074073c7;  */

undefined8 FUN_107407378(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1073fb200(param_1 + 0xb0);
  FUN_1073fb200(param_1 + 0x90);
  FUN_1073fb11c(param_1 + 0x78);
  FUN_1073fb11c(param_1 + 0x60);
  FUN_1073fb11c(param_1 + 0x48);
  FUN_1073fb11c(param_1 + 0x30);
  func_0x000104c34268(param_1 + 0x18);
  func_0x000104c336ec();
  return unaff_x19;
}



/* Entry: 1074073c8; end: 1074073d7;  */

void FUN_1074073c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074073d8; end: 10740761f;  */

undefined8
FUN_1074073d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined4 *param_8,
             undefined1 *param_9,undefined8 param_10,undefined4 *param_11,undefined4 *param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 *param_17,undefined8 *param_18,undefined8 param_19,undefined8 param_20,
             undefined4 *param_21,undefined4 *param_22,undefined4 *param_23,undefined8 param_24,
             undefined1 *param_25)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 *in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined1 *in_stack_000000c0;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  uStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uVar11 = *param_7;
  uVar12 = *param_8;
  uVar2 = *param_9;
  uVar9 = *param_11;
  uVar10 = *param_12;
  uVar7 = *param_17;
  uVar8 = *param_18;
  func_0x000107407a9c(auStack_d8,param_19);
  func_0x00010726fe1c(auStack_f0,param_20);
  uVar13 = *param_21;
  uVar14 = *param_22;
  uVar15 = *param_23;
  uVar3 = *param_25;
  uVar4 = *in_stack_000000a0;
  func_0x000107299490(auStack_100,in_stack_000000b0);
  uStack_108 = in_stack_000000b8[1];
  uStack_110 = *in_stack_000000b8;
  if (in_stack_000000b8[1] != 0) {
    plVar1 = (long *)(in_stack_000000b8[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_1073fa8ac(uVar11,uVar12,uVar9,uVar10,uVar13,uVar14,uVar15,param_1,param_2,&uStack_c0,param_4,
                param_5,param_6,uVar2,param_10,param_13,param_14,param_15,param_16,uVar7,uVar8,
                auStack_d8,auStack_f0,param_24,uVar3,uVar4,auStack_100,&uStack_110,
                *in_stack_000000c0);
  FUN_107330fdc(&uStack_110);
  func_0x000107283194(auStack_100);
  func_0x00010726e078(auStack_f0);
  func_0x00010089ccb4(auStack_d8);
  FUN_1073e79d4(&uStack_c0);
  return param_1;
}



/* Entry: 107407620; end: 10740762b;  */

void FUN_107407620(void)

{
  func_0x00010740a430();
  FUN_10740764c();
  return;
}



/* Entry: 10740762c; end: 10740764b;  */

void FUN_10740762c(void)

{
  FUN_10740764c();
  return;
}


