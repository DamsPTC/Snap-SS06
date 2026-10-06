/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086971c8; end: 10869757f;  */

void FUN_1086971c8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long lStack_40;
  long lStack_38;
  
  func_0x0001086978f0();
  func_0x00010869791c();
  if ((((bool)in_ZR) && (*(long *)(unaff_x19 + 0x68) != 0)) &&
     (func_0x000108697928(), extraout_x8 != 0)) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
    }
    if (uVar1 != 0) {
      FUN_10869715c(&lStack_40);
      *(undefined4 *)(lStack_40 + 0x1b8) = 1;
      *(undefined1 *)(lStack_40 + 0x1bc) = 1;
      func_0x000108697948(lStack_40 + 0x88);
      func_0x000107c27b98(lStack_40 + 0x68,param_2 + 0x18);
      *(undefined4 *)(lStack_40 + 0x1d0) = *(undefined4 *)(param_2 + 0x30);
      *(undefined1 *)(lStack_40 + 0x1d4) = 1;
      *(undefined4 *)(lStack_40 + 0x1c0) = *(undefined4 *)(param_2 + 0x34);
      *(undefined1 *)(lStack_40 + 0x1c4) = 1;
      *(ushort *)(lStack_40 + 0x1fa) = *(byte *)(param_2 + 0x38) | 0x100;
      *(ushort *)(lStack_40 + 0x1f8) = *(byte *)(param_2 + 0x39) | 0x100;
      if (*(char *)(param_2 + 0x58) == '\x01') {
        func_0x000107c27b98(lStack_40 + 0xa8,param_2 + 0x40);
      }
      if (*(char *)(param_2 + 0x78) == '\x01') {
        func_0x000107c27b98(lStack_40 + 0x18,param_2 + 0x60);
      }
      if (*(char *)(param_2 + 0x88) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x38) = *(undefined8 *)(param_2 + 0x80);
        *(undefined1 *)(lStack_40 + 0x40) = 1;
      }
      if (*(char *)(param_2 + 0x98) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x48) = *(undefined8 *)(param_2 + 0x90);
        *(undefined1 *)(lStack_40 + 0x50) = 1;
      }
      if (*(char *)(param_2 + 0xa8) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x58) = *(undefined8 *)(param_2 + 0xa0);
        *(undefined1 *)(lStack_40 + 0x60) = 1;
      }
      if (*(char *)(param_2 + 0xb8) == '\x01') {
        *(undefined8 *)(lStack_40 + 200) = *(undefined8 *)(param_2 + 0xb0);
        *(undefined1 *)(lStack_40 + 0xd0) = 1;
      }
      if (*(char *)(param_2 + 200) == '\x01') {
        *(undefined8 *)(lStack_40 + 0xd8) = *(undefined8 *)(param_2 + 0xc0);
        *(undefined1 *)(lStack_40 + 0xe0) = 1;
      }
      if (*(char *)(param_2 + 0xd8) == '\x01') {
        *(undefined8 *)(lStack_40 + 0xe8) = *(undefined8 *)(param_2 + 0xd0);
        *(undefined1 *)(lStack_40 + 0xf0) = 1;
      }
      if (*(char *)(param_2 + 0xe8) == '\x01') {
        *(undefined8 *)(lStack_40 + 0xf8) = *(undefined8 *)(param_2 + 0xe0);
        *(undefined1 *)(lStack_40 + 0x100) = 1;
      }
      if (*(char *)(param_2 + 0xf8) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x108) = *(undefined8 *)(param_2 + 0xf0);
        *(undefined1 *)(lStack_40 + 0x110) = 1;
      }
      if (*(char *)(param_2 + 0x108) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x118) = *(undefined8 *)(param_2 + 0x100);
        *(undefined1 *)(lStack_40 + 0x120) = 1;
      }
      if (*(char *)(param_2 + 0x118) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x128) = *(undefined8 *)(param_2 + 0x110);
        *(undefined1 *)(lStack_40 + 0x130) = 1;
      }
      if (*(char *)(param_2 + 0x128) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x138) = *(undefined8 *)(param_2 + 0x120);
        *(undefined1 *)(lStack_40 + 0x140) = 1;
      }
      if (*(char *)(param_2 + 0x138) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x148) = *(undefined8 *)(param_2 + 0x130);
        *(undefined1 *)(lStack_40 + 0x150) = 1;
      }
      if (*(char *)(param_2 + 0x148) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x158) = *(undefined8 *)(param_2 + 0x140);
        *(undefined1 *)(lStack_40 + 0x160) = 1;
      }
      if (*(char *)(param_2 + 0x158) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x168) = *(undefined8 *)(param_2 + 0x150);
        *(undefined1 *)(lStack_40 + 0x170) = 1;
      }
      if (*(char *)(param_2 + 0x168) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x178) = *(undefined8 *)(param_2 + 0x160);
        *(undefined1 *)(lStack_40 + 0x180) = 1;
      }
      if (*(char *)(param_2 + 0x178) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x188) = *(undefined8 *)(param_2 + 0x170);
        *(undefined1 *)(lStack_40 + 400) = 1;
      }
      if (*(char *)(param_2 + 0x184) == '\x01') {
        *(undefined4 *)(lStack_40 + 0x198) = *(undefined4 *)(param_2 + 0x180);
        *(undefined1 *)(lStack_40 + 0x19c) = 1;
      }
      if (*(char *)(param_2 + 0x18c) == '\x01') {
        *(undefined4 *)(lStack_40 + 0x1a0) = *(undefined4 *)(param_2 + 0x188);
        *(undefined1 *)(lStack_40 + 0x1a4) = 1;
      }
      if (*(char *)(param_2 + 0x198) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x1a8) = *(undefined8 *)(param_2 + 400);
        *(undefined1 *)(lStack_40 + 0x1b0) = 1;
      }
      if (*(char *)(param_2 + 0x1a4) == '\x01') {
        *(undefined4 *)(lStack_40 + 0x1c8) = *(undefined4 *)(param_2 + 0x1a0);
        *(undefined1 *)(lStack_40 + 0x1cc) = 1;
      }
      if (*(char *)(param_2 + 0x1ac) == '\x01') {
        *(undefined4 *)(lStack_40 + 0x1d8) = *(undefined4 *)(param_2 + 0x1a8);
        *(undefined1 *)(lStack_40 + 0x1dc) = 1;
      }
      if (*(char *)(param_2 + 0x1b4) == '\x01') {
        *(undefined4 *)(lStack_40 + 0x1e0) = *(undefined4 *)(param_2 + 0x1b0);
        *(undefined1 *)(lStack_40 + 0x1e4) = 1;
      }
      if (*(char *)(param_2 + 0x1c0) == '\x01') {
        *(undefined8 *)(lStack_40 + 0x1e8) = *(undefined8 *)(param_2 + 0x1b8);
        *(undefined1 *)(lStack_40 + 0x1f0) = 1;
      }
      plVar2 = *(long **)(unaff_x19 + 0x68);
      if (lStack_38 != 0) {
        do {
          func_0x000107c32414();
        } while (extraout_w10 != 0);
      }
      func_0x000108697940(*(undefined8 *)(*plVar2 + 0x10));
      func_0x0001086978e8();
      func_0x000108697904();
    }
  }
  return;
}



/* Entry: 108697580; end: 1086977db;  */

void FUN_108697580(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x000108697950();
  func_0x00010869791c();
  if (((bool)in_ZR) && (*(long *)(unaff_x19 + 0x68) != 0)) {
    if (*(char *)(param_2 + 0x80) == '\x01') {
      uVar1 = *(ulong *)(param_2 + 0x70);
      if (-1 < (char)*(byte *)(param_2 + 0x7f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x7f);
      }
      if (uVar1 == 0) {
        return;
      }
    }
    if (*(char *)(param_2 + 0x60) == '\x01') {
      uVar1 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if (uVar1 == 0) {
        return;
      }
      if (*(char *)(param_2 + 0x80) == '\0') {
        return;
      }
    }
    puVar6 = (undefined8 *)0x130;
    __Znwm();
    plVar8 = puVar6 + 1;
    *plVar8 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_110a63408;
    _bzero(puVar6 + 5,0x108);
    puStack_50 = puVar6 + 3;
    *puStack_50 = &PTR_DAT_110cef920;
    puVar6[4] = &PTR_DAT_110cef988;
    *(undefined1 *)(puVar6 + 0x22) = 0;
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(puVar6 + 6) = 1;
    *(undefined4 *)(puVar6 + 0xf) = uVar2;
    *(undefined1 *)((long)puVar6 + 0x7c) = 1;
    puStack_48 = puVar6;
    func_0x000108697948(puVar6 + 0x16);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(puVar6 + 0x1a) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(puVar6 + 0x1e) = uVar2;
    uVar2 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(puVar6 + 0x1f) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(puVar6 + 0x20) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puVar6[0x21] = *(undefined8 *)(param_2 + 0x40);
    *(undefined1 *)((long)puVar6 + 0xd4) = 1;
    *(undefined1 *)((long)puVar6 + 0xf4) = 1;
    *(undefined1 *)((long)puVar6 + 0xfc) = 1;
    *(undefined1 *)((long)puVar6 + 0x104) = 1;
    *(undefined1 *)(puVar6 + 0x22) = 1;
    puVar6[0x23] = uVar3;
    *(undefined1 *)(puVar6 + 0x24) = 1;
    *(undefined4 *)(puVar6 + 0x25) = *(undefined4 *)(param_2 + 0x30);
    *(undefined1 *)((long)puVar6 + 300) = 1;
    if (*(char *)(param_2 + 0x60) == '\x01') {
      func_0x000107c27b98(puVar6 + 7,param_2 + 0x48);
    }
    if (*(char *)(param_2 + 0x80) == '\x01') {
      func_0x000107c27b98(puVar6 + 0xb,param_2 + 0x68);
    }
    if (*(char *)(param_2 + 0x90) == '\x01') {
      puVar6[0x10] = *(undefined8 *)(param_2 + 0x88);
      *(undefined1 *)(puVar6 + 0x11) = 1;
    }
    if (*(char *)(param_2 + 0xa0) == '\x01') {
      puVar6[0x12] = *(undefined8 *)(param_2 + 0x98);
      *(undefined1 *)(puVar6 + 0x13) = 1;
    }
    if (*(char *)(param_2 + 0xb0) == '\x01') {
      puVar6[0x14] = *(undefined8 *)(param_2 + 0xa8);
      *(undefined1 *)(puVar6 + 0x15) = 1;
    }
    if (*(char *)(param_2 + 0xc0) == '\x01') {
      puVar6[0x1b] = *(undefined8 *)(param_2 + 0xb8);
      *(undefined1 *)(puVar6 + 0x1c) = 1;
    }
    if (*(char *)(param_2 + 0xcc) == '\x01') {
      *(undefined4 *)(puVar6 + 0x1d) = *(undefined4 *)(param_2 + 200);
      *(undefined1 *)((long)puVar6 + 0xec) = 1;
    }
    plVar7 = *(long **)(unaff_x19 + 0x68);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    func_0x000108697940(*(undefined8 *)(*plVar7 + 0x10));
    func_0x0001086978e8();
    FUN_1086978c0(&puStack_50);
  }
  return;
}



/* Entry: 1086977dc; end: 1086977df;  */

undefined8 * FUN_1086977dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63348;
  func_0x000107c28e38(param_1 + 0xd);
  func_0x000107c289f8(param_1 + 7);
  func_0x000107c289f8(param_1 + 1);
  return param_1;
}



/* Entry: 1086977e0; end: 1086977f3;  */

void FUN_1086977e0(void)

{
  FUN_1086977f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086977f4; end: 108697837;  */

undefined8 * FUN_1086977f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63348;
  func_0x000107c28e38(param_1 + 0xd);
  func_0x000107c289f8(param_1 + 7);
  func_0x000107c289f8(param_1 + 1);
  return param_1;
}



/* Entry: 108697838; end: 10869783b;  */

void FUN_108697838(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a633b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10869783c; end: 10869784f;  */

void FUN_10869783c(void)

{
  func_0x000108697858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108697850; end: 108697867;  */

void FUN_108697850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108697964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108697868; end: 10869788f;  */

long FUN_108697868(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108697890; end: 108697893;  */

void FUN_108697890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a63408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108697894; end: 1086978a7;  */

void FUN_108697894(void)

{
  func_0x0001086978b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086978a8; end: 1086978bf;  */

void FUN_1086978a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108697964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1086978c0; end: 1086978e7;  */

long FUN_1086978c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086978e8; end: 108697967;  */

void FUN_1086978e8(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 108697968; end: 1086979ff;  */

void FUN_108697968(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (((((*(byte *)(param_1 + 0x35) & 1) == 0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)
       ) && (param_1[2] != 0)) && ((**(code **)(*plVar1 + 0x18))(), (int)plVar1 != 0)) {
    func_0x0001086979d8(param_1 + 4);
    func_0x000107c27b9c(param_1 + 4,param_2);
    plVar1 = (long *)param_1[2];
    (**(code **)(*plVar1 + 0x10))();
    param_1[7] = (long)plVar1;
  }
  return;
}



/* Entry: 108697a00; end: 108697d7b;  */

void FUN_108697a00(long *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined1 auStack_278 [24];
  undefined1 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  uint uStack_1f8;
  undefined1 uStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  int iStack_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  uint uStack_178;
  char cStack_174;
  uint uStack_170;
  char cStack_16c;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 uStack_150;
  ushort uStack_148;
  byte bStack_146;
  char acStack_140 [64];
  char acStack_100 [160];
  
  if ((char)param_1[0x35] != '\x01') {
    return;
  }
  lStack_1e8 = param_1[5];
  lStack_1f0 = param_1[4];
  lStack_1e0 = param_1[6];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  _memcpy(&uStack_1d8,param_1 + 7,0x6d);
  uStack_168 = uStack_168 & 0xffffffffffffff00;
  uStack_150 = (char)param_1[0x18] == '\x01';
  if ((bool)uStack_150) {
    lStack_160 = param_1[0x16];
    uStack_168 = param_1[0x15];
    lStack_158 = param_1[0x17];
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x15] = 0;
  }
  uStack_148 = *(ushort *)(param_1 + 0x19);
  bStack_146 = *(byte *)((long)param_1 + 0xca);
  FUN_1086983dc(acStack_140,param_1 + 0x1a);
  pcVar5 = acStack_100 + 8;
  FUN_1086983dc(pcVar5,param_1 + 0x23);
  FUN_1086983dc(acStack_100 + 0x50,param_1 + 0x2c);
  FUN_108697d7c(param_1 + 4);
  bVar2 = bStack_146;
  if (((bStack_1d0 & 1) == 0) || (*param_1 == 0)) goto LAB_108697cb8;
  if ((bStack_146 & 1) == 0) {
    if ((uStack_148 & 0x100) == 0) {
      if (uStack_1c8 == 5) {
        uVar4 = 0;
        uStack_178 = 10;
      }
      else if (uStack_1c8 == 0) {
        uVar4 = 8;
LAB_108697b4c:
        if (cStack_174 == '\0') {
          uStack_178 = uVar4;
        }
        uVar4 = uStack_178 & 0xffffff00;
      }
      else if ((uStack_1c8 & 0xfffffffe) == 2) {
LAB_108697b70:
        uVar4 = 0;
        uStack_178 = 3;
      }
      else if ((uStack_148 & 1) == 0) {
        if (iStack_1c4 == 5) {
          uVar4 = 5;
          uStack_178 = uStack_170;
          cStack_174 = cStack_16c;
          goto LAB_108697b4c;
        }
        if (iStack_1c4 - 1U < 3) goto LAB_108697b70;
        if (iStack_1c4 == 0) {
          uVar4 = 0;
          uStack_178 = 2;
        }
        else if (iStack_1cc == 3) {
          uVar4 = 0;
          uStack_178 = 1;
        }
        else if (iStack_1cc == 2) {
          uStack_178 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          uStack_178 = 0xb;
        }
      }
      else {
        uVar4 = 0;
        uStack_178 = 7;
      }
      uVar8 = uStack_178 & 0xff;
      uStack_29c = 2;
      if ((uVar4 | uVar8) == 0xb) {
        uStack_29c = 3;
      }
      uVar7 = 1;
      pcVar6 = pcVar5;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      uVar4 = 0;
      uStack_29c = 0;
      pcVar5 = acStack_140;
      pcVar6 = acStack_140;
    }
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uStack_29c = 1;
    pcVar6 = acStack_100 + 0x50;
  }
  lStack_2b0 = lStack_1e0;
  uStack_2a8 = 0xe;
  iStack_298 = iStack_1c4;
  lStack_2b8 = lStack_1e8;
  lStack_2c0 = lStack_1f0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_290 = uStack_1c0;
  uStack_288 = uStack_1d8;
  plVar3 = (long *)param_1[2];
  uStack_294 = param_2;
  (**(code **)(*plVar3 + 0x10))();
  auStack_278[0] = 0;
  uStack_260 = 0;
  auStack_258[0] = 0;
  uStack_240 = 0;
  uStack_238 = uStack_1b8;
  uStack_230 = uStack_1b0;
  uStack_228 = uStack_1a8;
  uStack_220 = uStack_1a0;
  uStack_210 = uStack_190;
  uStack_218 = uStack_198;
  uStack_200 = uStack_180;
  uStack_208 = uStack_188;
  uStack_1f8 = uVar4 | uVar8;
  pcVar1 = acStack_100 + 0x90;
  if (bVar2 == 0) {
    pcVar1 = pcVar5 + 0x40;
  }
  plStack_280 = plVar3;
  uStack_1f4 = uVar7;
  if (*pcVar1 == '\x01') {
    func_0x000107c27b98(auStack_258,pcVar6);
    pcVar6 = acStack_100 + 0x68;
    if (bVar2 == 0) {
      pcVar6 = pcVar5 + 0x18;
    }
    func_0x000107c27c5c(auStack_278,pcVar6);
  }
  (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,&lStack_2c0);
  FUN_108698490(&lStack_2c0);
LAB_108697cb8:
  func_0x0001086984c0(&lStack_1f0);
  return;
}



/* Entry: 108697d7c; end: 108697d9f;  */

void FUN_108697d7c(long param_1)

{
  if (*(char *)(param_1 + 0x188) == '\x01') {
    func_0x0001086984c0();
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  return;
}



/* Entry: 108697da0; end: 108697e0f;  */

void FUN_108697da0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x44) = *param_2;
    }
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 0x58) = uVar1;
    }
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 6);
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x68) = uVar1;
    }
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 10);
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x88) = uVar1;
    }
  }
  return;
}



/* Entry: 108697e10; end: 108697eaf;  */

void FUN_108697e10(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [128];
  byte bStack_38;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8);
  func_0x000108698710();
  func_0x0001086986c4();
  func_0x0001086986dc();
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && ((*(byte *)(param_1 + 0xca) & 1) == 0)) {
    uVar1 = param_3 - 1U == 1;
    if ((param_3 - 1U < 2) && ((bStack_38 & 1) != 0)) {
      func_0x000107c27b98(param_1 + 0xa8,param_2);
      *(int *)(param_1 + 0x4c) = param_3;
      func_0x000108698794();
      if ((bool)uVar1) {
        *(undefined1 *)(param_1 + 0xa4) = 0;
      }
      *(undefined1 *)(param_1 + 200) = 0;
      func_0x000108698750();
    }
  }
  func_0x000108698700();
  return;
}



/* Entry: 108697eb0; end: 108697fa3;  */

void FUN_108697eb0(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  char cStack_30;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  else {
    FUN_108698500(auStack_60,param_2);
    if (cStack_30 == '\x01') {
      if (-1 < (char)bStack_31) {
        uStack_40 = (ulong)bStack_31;
      }
      if (uStack_40 == 0) {
        func_0x000104bffddc(auStack_48);
      }
    }
    FUN_10869854c(param_1,auStack_60);
    FUN_10868cd4c(auStack_60);
  }
  return;
}



/* Entry: 108697fa4; end: 108697ff7;  */

void FUN_108697fa4(int param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  FUN_1086986ac();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 1;
    func_0x000108698794();
    if ((bool)in_ZR) {
      *(undefined1 *)(unaff_x19 + 0xa4) = 0;
    }
    func_0x000108698720();
    func_0x000108698710();
    func_0x0001086986c4();
    func_0x00010869875c();
    func_0x000108698700();
    func_0x0001086986dc();
  }
  return;
}



/* Entry: 108697ff8; end: 10869801b;  */

bool FUN_108697ff8(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0x1a8) != '\x01') || ((*(byte *)(param_1 + 0xca) & 1) != 0)) {
    return false;
  }
  if (*(char *)(param_1 + 0xc0) != '\x01') {
    return false;
  }
  bVar4 = *(byte *)(param_1 + 0xbf);
  uVar1 = *(ulong *)(param_1 + 0xb0);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*(long *)(param_1 + 0xa8);
    if (-1 < (char)bVar4) {
      plVar6 = (long *)(param_1 + 0xa8);
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    func_0x000107c610b0(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10869801c; end: 10869806f;  */

void FUN_10869801c(int param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  FUN_1086986ac();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 2;
    func_0x000108698794();
    if ((bool)in_ZR) {
      *(undefined1 *)(unaff_x19 + 0xa4) = 0;
    }
    func_0x000108698720();
    func_0x000108698710();
    func_0x0001086986c4();
    func_0x00010869875c();
    func_0x000108698700();
    func_0x0001086986dc();
  }
  return;
}



/* Entry: 108698070; end: 1086980cf;  */

void FUN_108698070(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1086986ac();
  if (param_1 != 0) {
    cVar1 = *(char *)(unaff_x20 + 0x38);
    uVar2 = 3;
    if (cVar1 != '\0') {
      uVar2 = 4;
    }
    *(undefined4 *)(unaff_x19 + 0x4c) = uVar2;
    if (*(char *)(unaff_x19 + 0xa4) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0xa4) = 0;
    }
    *(undefined1 *)(unaff_x19 + 200) = 0;
    *(char *)(unaff_x19 + 0xc9) = cVar1;
    func_0x0001086986f4();
    func_0x00010869878c(unaff_x19 + 0xd0);
    func_0x0001086986ec();
    func_0x000108698768();
  }
  return;
}



/* Entry: 1086980d0; end: 10869814f;  */

void FUN_1086980d0(int param_1,undefined8 param_2,int param_3)

{
  long unaff_x19;
  undefined1 uStack_38;
  
  FUN_1086986ac();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 5;
    if (2 < param_3 - 4U) {
      param_3 = 5;
    }
    *(int *)(unaff_x19 + 0xa0) = param_3;
    *(undefined1 *)(unaff_x19 + 0xa4) = 1;
    func_0x000108698720();
    func_0x000108698710();
    func_0x0001086986c4();
    func_0x0001086986dc();
    if (uStack_38 == '\x01') {
      func_0x000108698750();
    }
    func_0x000108698700();
  }
  return;
}



/* Entry: 108698150; end: 1086981a3;  */

void FUN_108698150(int param_1)

{
  long unaff_x19;
  undefined1 uStack_28;
  
  FUN_1086986ac();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_x19 + 0x4c) = 5;
    *(undefined1 *)(unaff_x19 + 200) = 1;
    func_0x0001086986f4();
    if (uStack_28 == '\x01') {
      func_0x000108698774();
    }
    func_0x0001086986ec();
  }
  return;
}



/* Entry: 1086981a4; end: 1086981ef;  */

void FUN_1086981a4(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_1086981f0(param_1,param_2,0);
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    uVar1 = 8;
    if (param_3 == 9) {
      uVar1 = 9;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  return;
}



/* Entry: 1086981f0; end: 10869825f;  */

void FUN_1086981f0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [64];
  char cStack_28;
  
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && ((*(byte *)(param_1 + 0xca) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = param_3;
    *(undefined4 *)(param_1 + 0x50) = param_4;
    *(undefined8 *)(param_1 + 0x78) = param_5;
    *(undefined1 *)(param_1 + 0x80) = param_6;
    func_0x00010869872c();
    if (cStack_28 == '\x01') {
      FUN_108698568(param_1 + 0xd0,auStack_68);
      func_0x000108698774();
    }
    func_0x0001086986ec();
  }
  return;
}



/* Entry: 108698260; end: 108698287;  */

void FUN_108698260(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_68 [64];
  char cStack_28;
  
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && ((*(byte *)(param_1 + 0xca) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined8 *)(param_1 + 0x78) = param_4;
    *(undefined1 *)(param_1 + 0x80) = param_5;
    func_0x00010869872c();
    if (cStack_28 == '\x01') {
      FUN_108698568(param_1 + 0xd0,auStack_68);
      func_0x000108698774();
    }
    func_0x0001086986ec();
  }
  return;
}



/* Entry: 108698288; end: 108698303;  */

void FUN_108698288(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((((*(char *)(param_1 + 0x1a8) != '\x01') || ((*(byte *)(param_1 + 0xca) & 1) == 0)) &&
      (FUN_1086981f0(param_1,param_2,4,param_3,param_4,param_5),
      *(char *)(param_1 + 0x1a8) == '\x01')) && ((*(byte *)(param_2 + 0x38) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xca) = 1;
    func_0x0001086986f4();
    func_0x00010869878c(param_1 + 0x160);
    func_0x0001086986ec();
  }
  return;
}



/* Entry: 108698304; end: 108698317;  */

void FUN_108698304(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_68 [64];
  char cStack_28;
  
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && ((*(byte *)(param_1 + 0xca) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 5;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined8 *)(param_1 + 0x78) = param_4;
    *(undefined1 *)(param_1 + 0x80) = param_5;
    func_0x00010869872c();
    if (cStack_28 == '\x01') {
      FUN_108698568(param_1 + 0xd0,auStack_68);
      func_0x000108698774();
    }
    func_0x0001086986ec();
  }
  return;
}



/* Entry: 108698318; end: 108698367;  */

void FUN_108698318(long param_1)

{
  func_0x000108698340();
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}



/* Entry: 108698368; end: 1086983db;  */

void FUN_108698368(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 6;
  *(undefined8 *)((long)param_1 + 0x24) = 0x100000004;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1086983dc; end: 108698417;  */

undefined1 * FUN_1086983dc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_108698418(param_1);
  }
  return param_1;
}



/* Entry: 108698418; end: 108698433;  */

void FUN_108698418(long param_1)

{
  FUN_108698434();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108698434; end: 10869848f;  */

void FUN_108698434(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return;
}



/* Entry: 108698490; end: 1086984ff;  */

void FUN_108698490(long param_1)

{
  func_0x000107c279a4(param_1 + 0x68);
  func_0x000107c279a4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 108698500; end: 10869854b;  */

long FUN_108698500(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c279a0(lVar1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 10869854c; end: 108698567;  */

void FUN_10869854c(long param_1)

{
  FUN_108698434();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108698568; end: 10869858f;  */

long FUN_108698568(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_10868cd4c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return param_1;
    }
    FUN_108698500();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x000107c27c5c(param_1 + 0x18,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    return param_1;
  }
  return param_1;
}



/* Entry: 108698590; end: 1086985c7;  */

long FUN_108698590(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000107c27c5c(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 1086985c8; end: 108698627;  */

void FUN_1086985c8(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10868cd4c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 108698628; end: 10869864b;  */

undefined8 FUN_108698628(undefined8 param_1)

{
  FUN_10869864c();
  return param_1;
}



/* Entry: 10869864c; end: 108698673;  */

long FUN_10869864c(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_10868cd4c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return param_1;
    }
    FUN_108698434();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x000107c27b9c();
    func_0x000107c27c54(param_1 + 0x18,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    return param_1;
  }
  return param_1;
}



/* Entry: 108698674; end: 1086986ab;  */

long FUN_108698674(long param_1,long param_2)

{
  func_0x000107c27b9c();
  func_0x000107c27c54(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 1086986ac; end: 10869879f;  */

bool FUN_1086986ac(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0x1a8) != '\x01') || ((*(byte *)(param_1 + 0xca) & 1) != 0)) {
    return false;
  }
  if (*(char *)(param_1 + 0xc0) != '\x01') {
    return false;
  }
  bVar4 = *(byte *)(param_1 + 0xbf);
  uVar1 = *(ulong *)(param_1 + 0xb0);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*(long *)(param_1 + 0xa8);
    if (-1 < (char)bVar4) {
      plVar6 = (long *)(param_1 + 0xa8);
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    func_0x000107c610b0(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 1086987a0; end: 108698a1f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001086988d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1086987a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long **pplVar4;
  undefined1 in_NG;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long ***ppplVar11;
  undefined8 extraout_x9;
  long **pplVar12;
  long ***ppplVar13;
  long ****pppplVar14;
  undefined8 *puVar15;
  long ***ppplVar16;
  long ***ppplVar17;
  long **pplStack_a0;
  long **pplStack_98;
  long ***ppplStack_90;
  long lStack_88;
  undefined4 uStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  undefined8 uStack_68;
  
  if (((*(byte *)(param_4 + 1) & 1) != 0) || (param_4[5] != 0)) {
    pplStack_98 = (long **)0x0;
    pplStack_a0 = (long **)0x0;
    lStack_88 = 0;
    ppplStack_90 = (long ***)0x0;
    uStack_80 = 0x3f800000;
    ppplVar13 = &pplStack_a0;
    pppplVar8 = (long ****)&pplStack_a0;
    FUN_108699994(pppplVar8,(long)(float)(ulong)param_4[5]);
    puVar15 = param_4 + 4;
    while (ppplVar16 = (long ***)pplStack_98, puVar15 = (undefined8 *)*puVar15,
          puVar15 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)(puVar15 + 3);
      ppplVar17 = (long ***)puVar15[2];
      if ((long ***)pplStack_98 != (long ***)0x0) {
        uVar10 = (long)pplStack_98 - 1;
        if (((ulong)pplStack_98 & uVar10) == 0) {
          ppplVar13 = (long ***)(uVar10 & (ulong)ppplVar17);
          in_NG = false;
        }
        else {
          in_NG = (long)ppplVar17 - (long)pplStack_98 < 0;
          ppplVar13 = ppplVar17;
          if (pplStack_98 <= ppplVar17) {
            uVar3 = 0;
            if ((long ***)pplStack_98 != (long ***)0x0) {
              uVar3 = (ulong)ppplVar17 / (ulong)pplStack_98;
            }
            ppplVar13 = (long ***)((long)ppplVar17 - uVar3 * (long)pplStack_98);
          }
        }
        pppplVar14 = (long ****)pplStack_a0[(long)ppplVar13];
        if (pppplVar14 != (long ****)0x0) {
          do {
            while( true ) {
              pppplVar14 = (long ****)*pppplVar14;
              if (pppplVar14 == (long ****)0x0) goto LAB_1086988a4;
              ppplVar11 = pppplVar14[1];
              if (ppplVar11 != ppplVar17) break;
              uVar6 = (long)pppplVar14[2] - (long)ppplVar17 < 0;
              in_NG = uVar6;
              pppplVar9 = pppplVar8;
              if (pppplVar14[2] == ppplVar17) goto LAB_1086989b0;
            }
            if (((ulong)pplStack_98 & uVar10) == 0) {
              ppplVar11 = (long ***)((ulong)ppplVar11 & uVar10);
            }
            else if (pplStack_98 <= ppplVar11) {
              uVar3 = 0;
              if ((long ***)pplStack_98 != (long ***)0x0) {
                uVar3 = (ulong)ppplVar11 / (ulong)pplStack_98;
              }
              ppplVar11 = (long ***)((long)ppplVar11 - uVar3 * (long)pplStack_98);
            }
            in_NG = (long)ppplVar11 - (long)ppplVar13 < 0;
          } while (ppplVar11 == ppplVar13);
        }
      }
LAB_1086988a4:
      func_0x00010869a4d4();
      uStack_68 = 1;
      ppplStack_78 = (long ***)pppplVar8;
      ppplStack_70 = (long ***)&ppplStack_90;
      *pppplVar8 = (long ***)0x0;
      pppplVar8[1] = ppplVar17;
      pppplVar8[2] = ppplVar17;
      *(undefined4 *)(pppplVar8 + 3) = 0;
      if (ppplVar16 == (long ***)0x0) {
LAB_1086988e0:
        bVar5 = (long ***)0x2 < ppplVar16;
        bVar7 = ppplVar16 == (long ***)0x3;
        func_0x00010869a380((long)ppplVar16 << 1);
        uVar1 = extraout_x8;
        if (!bVar5 || bVar7) {
          uVar1 = extraout_x9;
        }
        FUN_108699994(&pplStack_a0,uVar1);
        ppplVar16 = (long ***)pplStack_98;
        if (((ulong)pplStack_98 & (long)pplStack_98 - 1U) == 0) {
          uVar6 = false;
          ppplVar13 = (long ***)((long)pplStack_98 - 1U & (ulong)ppplVar17);
        }
        else {
          uVar6 = (long)ppplVar17 - (long)pplStack_98 < 0;
          ppplVar13 = ppplVar17;
          if (pplStack_98 <= ppplVar17) {
            uVar10 = 0;
            if ((long ***)pplStack_98 != (long ***)0x0) {
              uVar10 = (ulong)ppplVar17 / (ulong)pplStack_98;
            }
            ppplVar13 = (long ***)((long)ppplVar17 - uVar10 * (long)pplStack_98);
          }
        }
      }
      else {
        func_0x00010869a4b0(param_1,uStack_80,(float)ppplVar16);
        uVar6 = false;
        if ((bool)in_NG) goto LAB_1086988e0;
      }
      pplVar4 = pplStack_a0;
      pplVar12 = (long **)pplStack_a0[(long)ppplVar13];
      if (pplVar12 == (long **)0x0) {
        *pppplVar8 = ppplStack_90;
        ppplStack_90 = (long ***)pppplVar8;
        pplVar4[(long)ppplVar13] = (long *)&ppplStack_90;
        if (*pppplVar8 != (long ***)0x0) {
          ppplVar17 = (long ***)(*pppplVar8)[1];
          if (((ulong)ppplVar16 & (long)ppplVar16 - 1U) == 0) {
            ppplVar17 = (long ***)((ulong)ppplVar17 & (long)ppplVar16 - 1U);
            uVar6 = false;
          }
          else {
            uVar6 = (long)ppplVar17 - (long)ppplVar16 < 0;
            if (ppplVar16 <= ppplVar17) {
              uVar10 = 0;
              if (ppplVar16 != (long ***)0x0) {
                uVar10 = (ulong)ppplVar17 / (ulong)ppplVar16;
              }
              ppplVar17 = (long ***)((long)ppplVar17 - uVar10 * (long)ppplVar16);
            }
          }
          pplVar4[(long)ppplVar17] = (long *)pppplVar8;
        }
      }
      else {
        *pppplVar8 = (long ***)*pplVar12;
        *pplVar12 = (long *)pppplVar8;
      }
      ppplStack_78 = (long ***)0x0;
      lStack_88 = lStack_88 + 1;
      pppplVar9 = &ppplStack_78;
      FUN_108699aec();
      pppplVar14 = pppplVar8;
LAB_1086989b0:
      *(undefined4 *)(pppplVar14 + 3) = uVar2;
      in_NG = uVar6;
      pppplVar8 = pppplVar9;
    }
    (**(code **)(**(long **)(param_2 + 0x48) + 0x18))
              (*(long **)(param_2 + 0x48),param_3,&pplStack_a0,*param_4);
    FUN_108699950(&pplStack_a0);
  }
  return;
}



/* Entry: 108698a20; end: 108698af7;  */

void FUN_108698a20(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  uint7 uStack_67;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x00010869a410();
  if ((param_1 & 1) == 0) {
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_38 = 0x3f800000;
    plVar2 = (long *)(unaff_x20 + 0x20);
    FUN_10869921c();
    *plVar2 = (ulong)uStack_67 << 8;
    *(undefined1 *)(plVar2 + 1) = 0;
    if (plVar2[5] != 0) {
      FUN_10869960c(plVar2[4]);
      plVar2[4] = 0;
      puVar1 = (undefined8 *)plVar2[2];
      for (lVar3 = plVar2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      plVar2[5] = 0;
    }
    uStack_58 = 0;
    func_0x0001086995f4(plVar2 + 2,0);
    plVar2[3] = 0;
    plVar2[4] = 0;
    uStack_50 = 0;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0x3f800000;
    func_0x000108699634(&uStack_58);
  }
  return;
}



/* Entry: 108698af8; end: 108698bb7;  */

undefined8 FUN_108698af8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = param_1;
    func_0x00010869a3c8();
    func_0x00010869a400();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        func_0x00010869a4f4();
        uVar5 = unaff_x24;
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + uVar5 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) {
            return 0;
          }
          uVar2 = plVar3[1];
          if (unaff_x20 != uVar2) break;
          func_0x00010869a3ac();
          if ((int)lVar1 != 0) {
            return 1;
          }
        }
        if ((uVar4 & unaff_x23) == 0) {
          uVar2 = uVar2 & unaff_x23;
        }
        else if (uVar4 <= uVar2) {
          func_0x00010869a4e8();
          uVar2 = extraout_x8;
        }
      } while (uVar2 == uVar5);
    }
  }
  return 0;
}



/* Entry: 108698bb8; end: 108698c17;  */

void FUN_108698bb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = param_1;
  FUN_108698af8();
  if ((int)lVar4 == 0) {
    return;
  }
  plVar3 = (long *)(param_1 + 0x20);
  FUN_10869976c(plVar3,param_2);
  FUN_1086987a0(param_1,param_2,plVar3 + 5);
  uVar6 = *(ulong *)(param_1 + 0x28);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  plVar2 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar3);
  if (plVar7 == (long *)(param_1 + 0x30)) {
LAB_1086998a4:
    if (lVar4 == 0) {
LAB_1086998d4:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_1086998dc;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1086998d4;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1086998a4;
LAB_1086998dc:
    if (lVar4 == 0) goto LAB_108699914;
  }
  uVar10 = *(ulong *)(lVar4 + 8);
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar3;
  }
LAB_108699914:
  *plVar7 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
  FUN_108699728(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 108698c18; end: 108698c87;  */

void FUN_108698c18(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plStack_28;
  
  plVar3 = (long *)(param_1 + 0x20);
  FUN_10869976c();
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  plVar2 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar3);
  if (plVar7 == (long *)(param_1 + 0x30)) {
LAB_1086998a4:
    if (lVar4 == 0) {
LAB_1086998d4:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_1086998dc;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1086998d4;
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_1086998a4;
LAB_1086998dc:
    if (lVar4 == 0) goto LAB_108699914;
  }
  uVar10 = *(ulong *)(lVar4 + 8);
  if ((uVar6 & uVar8) == 0) {
    uVar10 = uVar10 & uVar8;
  }
  else if (uVar6 <= uVar10) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar10 / uVar6;
    }
    uVar10 = uVar10 - uVar8 * uVar6;
  }
  if (uVar10 != uVar5) {
    *(long **)(lVar9 + uVar10 * 8) = plVar7;
    lVar4 = *plVar3;
  }
LAB_108699914:
  *plVar7 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
  plStack_28 = plVar3;
  FUN_108699728(&plStack_28);
  return;
}



/* Entry: 108698c88; end: 108698ccb;  */

void FUN_108698c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_108698af8();
  if ((int)puVar1 != 0) {
    FUN_108698ccc(param_1,param_2);
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 108698ccc; end: 108698cff;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010869932c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_108698ccc(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *plVar12;
  long *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  long *unaff_x25;
  
  func_0x00010869a410();
  if (param_3 == 0) {
    return (long *)0x0;
  }
  plVar8 = (long *)(unaff_x20 + 0x20);
  func_0x00010869a4c8();
  plVar17 = (long *)unaff_x19[1];
  if (plVar17 != (long *)0x0) {
    uVar15 = (long)plVar17 - 1;
    uVar16 = (uint)plVar17;
    if (((ulong)plVar17 & uVar15) == 0) {
      unaff_x25 = (long *)((ulong)(uVar16 - 1) & (ulong)plVar8);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar17 < 0;
      unaff_x25 = plVar8;
      if (plVar17 <= plVar8) {
        uVar1 = 0;
        if (uVar16 != 0) {
          uVar1 = (uint)plVar8 / uVar16;
        }
        unaff_x25 = (long *)(ulong)((uint)plVar8 - uVar1 * uVar16);
      }
    }
    plVar13 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1086992d8;
          plVar6 = (long *)plVar13[1];
          in_NG = (long)plVar6 - (long)plVar8 < 0;
          if (plVar6 != plVar8) break;
          plVar6 = plVar13 + 2;
          func_0x000107c28078();
          if (((ulong)plVar6 & 1) != 0) goto LAB_108699534;
        }
        if (((ulong)plVar17 & uVar15) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar15);
        }
        else if (plVar17 <= plVar6) {
          uVar7 = 0;
          if (plVar17 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar17;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar17);
        }
        in_NG = (long)plVar6 - (long)unaff_x25 < 0;
      } while (plVar6 == unaff_x25);
    }
  }
LAB_1086992d8:
  plVar6 = unaff_x19 + 2;
  plVar13 = (long *)0x60;
  __Znwm();
  plVar9 = plVar13 + 2;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  func_0x000107c27994();
  plVar13[0xb] = 0;
  plVar13[10] = 0;
  plVar13[9] = 0;
  plVar13[8] = 0;
  plVar13[7] = 0;
  plVar13[6] = 0;
  plVar13[5] = 0;
  *(undefined4 *)(plVar13 + 0xb) = 0x3f800000;
  func_0x00010869a3ec();
  if ((plVar17 != (long *)0x0) &&
     (func_0x00010869a4b0(param_1,param_2,(float)plVar17), !(bool)in_NG)) goto LAB_1086994cc;
  func_0x00010869a480();
  bVar3 = (long *)0x2 < plVar17;
  bVar4 = plVar17 == (long *)0x3;
  func_0x00010869a380();
  plVar14 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar9 = plVar14;
  }
  plVar17 = (long *)unaff_x19[1];
  if (plVar17 < plVar14) {
LAB_108699378:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10869955c);
      (*pcVar2)();
    }
    lVar5 = (long)plVar14 << 3;
    __Znwm(lVar5);
    FUN_108699710(unaff_x19,lVar5);
    plVar17 = (long *)0x0;
    unaff_x19[1] = (long)plVar14;
    lVar5 = *unaff_x19;
    while (plVar14 != plVar17) {
      func_0x00010869a4dc();
      lVar5 = extraout_x8_00;
      plVar17 = extraout_x9_00;
    }
    plVar9 = (long *)*plVar6;
    plVar17 = plVar14;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar7 = (long)plVar14 - 1;
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar10 / (ulong)plVar14;
      }
      plVar11 = plVar10;
      if (plVar14 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar15 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar7);
      }
      *(long **)(lVar5 + (long)plVar11 * 8) = plVar6;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar7);
        }
        else if (plVar14 <= plVar12) {
          uVar15 = 0;
          if (plVar14 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar14);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar5 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            *plVar10 = *plVar9;
            func_0x00010869a394();
            lVar5 = extraout_x8_01;
            uVar7 = extraout_x9_01;
            plVar9 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar17) {
    func_0x00010869a498();
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010869a360();
    }
    if (plVar14 <= plVar9) {
      plVar14 = plVar9;
    }
    if (plVar14 < plVar17) {
      if (plVar14 != (long *)0x0) goto LAB_108699378;
      FUN_108699710(unaff_x19,0);
      unaff_x19[1] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x25 = (long *)((ulong)((int)plVar17 - 1) & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar17 <= plVar8) {
      uVar15 = 0;
      if (plVar17 != (long *)0x0) {
        uVar15 = (ulong)plVar8 / (ulong)plVar17;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    }
  }
LAB_1086994cc:
  lVar5 = *unaff_x19;
  plVar8 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar13 = *plVar6;
    *plVar6 = (long)plVar13;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
  }
  func_0x00010869a3d4();
  FUN_108699728();
LAB_108699534:
  return plVar13 + 5;
}



/* Entry: 108698d00; end: 108698fd3;  */

void FUN_108698d00(int param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined8 extraout_x9;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *unaff_x20;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x27;
  int iVar19;
  
  func_0x00010869a410();
  if (param_1 != 0) {
    FUN_108698ccc();
    puVar3 = (ulong *)param_3[1];
    plVar1 = unaff_x20 + 4;
    plVar8 = unaff_x20;
    for (puVar16 = (ulong *)*param_3; uVar6 = (long)puVar16 - (long)puVar3 < 0, puVar16 != puVar3;
        puVar16 = puVar16 + 2) {
      uVar18 = *puVar16;
      uVar17 = unaff_x20[3];
      if (uVar17 == 0) {
        iVar19 = (int)puVar16[1];
      }
      else {
        uVar13 = 0;
        if (uVar17 != 0) {
          uVar13 = uVar18 / uVar17;
        }
        if (unaff_x20[5] != 0) {
          uVar10 = uVar17 - 1;
          if ((uVar17 & uVar10) == 0) {
            uVar12 = uVar10 & uVar18;
          }
          else {
            uVar12 = uVar18;
            if (uVar17 <= uVar18) {
              uVar12 = uVar18 - uVar13 * uVar17;
            }
          }
          plVar14 = *(long **)(unaff_x20[2] + uVar12 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_108698dec;
                uVar15 = plVar14[1];
                if (uVar18 != uVar15) break;
                if (plVar14[2] == uVar18) {
                  iVar19 = (int)puVar16[1];
                  if (iVar19 == 1) {
                    func_0x00010869a4bc();
                    iVar19 = (int)*plVar8;
                    if (iVar19 != (int)puVar16[1]) goto LAB_108698f74;
                  }
                  func_0x00010869a4bc();
                  *(int *)plVar8 = iVar19;
                  goto LAB_108698f74;
                }
              }
              if ((uVar17 & uVar10) == 0) {
                uVar15 = uVar15 & uVar10;
              }
              else if (uVar17 <= uVar15) {
                uVar4 = 0;
                if (uVar17 != 0) {
                  uVar4 = uVar15 / uVar17;
                }
                uVar15 = uVar15 - uVar4 * uVar17;
              }
            } while (uVar15 == uVar12);
          }
        }
LAB_108698dec:
        uVar10 = uVar17 - 1;
        if ((uVar17 & uVar10) == 0) {
          unaff_x27 = uVar10 & uVar18;
          uVar6 = false;
        }
        else {
          uVar6 = (long)(uVar18 - uVar17) < 0;
          unaff_x27 = uVar18;
          if (uVar17 <= uVar18) {
            unaff_x27 = uVar18 - uVar13 * uVar17;
          }
        }
        iVar19 = (int)puVar16[1];
        plVar14 = *(long **)(unaff_x20[2] + unaff_x27 * 8);
        if (plVar14 != (long *)0x0) {
          do {
            while( true ) {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_108698e6c;
              uVar13 = plVar14[1];
              if (uVar13 != uVar18) break;
              uVar6 = (long)(plVar14[2] - uVar18) < 0;
              if (plVar14[2] == uVar18) goto LAB_108698f74;
            }
            if ((uVar17 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar17 <= uVar13) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar12 * uVar17;
            }
            uVar6 = (long)(uVar13 - unaff_x27) < 0;
          } while (uVar13 == unaff_x27);
        }
      }
LAB_108698e6c:
      func_0x00010869a4d4();
      *plVar8 = 0;
      plVar8[1] = uVar18;
      plVar8[2] = uVar18;
      *(int *)(plVar8 + 3) = iVar19;
      if ((uVar17 == 0) ||
         (plVar14 = plVar8,
         func_0x00010869a4b0((float)(unaff_x20[5] + 1),(int)unaff_x20[6],(float)uVar17), (bool)uVar6
         )) {
        bVar5 = 2 < uVar17;
        bVar7 = uVar17 == 3;
        func_0x00010869a380(uVar17 << 1);
        uVar2 = extraout_x8;
        if (!bVar5 || bVar7) {
          uVar2 = extraout_x9;
        }
        plVar14 = unaff_x20 + 2;
        FUN_108699b18(plVar14,uVar2);
        uVar17 = unaff_x20[3];
        if ((uVar17 & uVar17 - 1) == 0) {
          unaff_x27 = uVar17 - 1 & uVar18;
        }
        else {
          unaff_x27 = uVar18;
          if (uVar17 <= uVar18) {
            uVar13 = 0;
            if (uVar17 != 0) {
              uVar13 = uVar18 / uVar17;
            }
            unaff_x27 = uVar18 - uVar13 * uVar17;
          }
        }
      }
      lVar9 = unaff_x20[2];
      plVar11 = *(long **)(lVar9 + unaff_x27 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar8 = *plVar1;
        *plVar1 = (long)plVar8;
        *(long **)(lVar9 + unaff_x27 * 8) = plVar1;
        if (*plVar8 != 0) {
          uVar18 = *(ulong *)(*plVar8 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            uVar18 = uVar18 & uVar17 - 1;
          }
          else if (uVar17 <= uVar18) {
            uVar13 = 0;
            if (uVar17 != 0) {
              uVar13 = uVar18 / uVar17;
            }
            uVar18 = uVar18 - uVar13 * uVar17;
          }
          *(long **)(lVar9 + uVar18 * 8) = plVar8;
        }
      }
      else {
        *plVar8 = *plVar11;
        *plVar11 = (long)plVar8;
      }
      unaff_x20[5] = unaff_x20[5] + 1;
      func_0x00010869a44c();
      plVar8 = plVar14;
LAB_108698f74:
    }
  }
  return;
}



/* Entry: 108698fd4; end: 108698fdf;  */

undefined8 FUN_108698fd4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong uVar5;
  ulong unaff_x24;
  
  uVar4 = *(ulong *)(param_1 + 0x28);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar1 = param_1;
    func_0x00010869a3c8();
    func_0x00010869a400();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        func_0x00010869a4f4();
        uVar5 = unaff_x24;
      }
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + uVar5 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) {
            return 0;
          }
          uVar2 = plVar3[1];
          if (unaff_x20 != uVar2) break;
          func_0x00010869a3ac();
          if ((int)lVar1 != 0) {
            return 1;
          }
        }
        if ((uVar4 & unaff_x23) == 0) {
          uVar2 = uVar2 & unaff_x23;
        }
        else if (uVar4 <= uVar2) {
          func_0x00010869a4e8();
          uVar2 = extraout_x8;
        }
      } while (uVar2 == uVar5);
    }
  }
  return 0;
}



/* Entry: 108698fe0; end: 108699043;  */

void FUN_108698fe0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27ab0(param_1,*(undefined8 *)(param_2 + 0x38));
  plVar1 = (long *)(param_2 + 0x30);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000107c28840(param_1,plVar1 + 2);
  }
  return;
}



/* Entry: 108699044; end: 10869904b;  */

void FUN_108699044(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27ab0(param_1,*(undefined8 *)(param_2 + 0x20));
  plVar1 = (long *)(param_2 + 0x18);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000107c28840(param_1,plVar1 + 2);
  }
  return;
}



/* Entry: 10869904c; end: 10869921b;  */

long * FUN_10869904c(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  
  uVar12 = *param_4;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar12;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar11) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar8 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1086990f8;
          uVar8 = plVar10[1];
          if (uVar8 != uVar12) break;
          in_NG = (long)(plVar10[2] - uVar12) < 0;
          if (plVar10[2] == uVar12) goto LAB_1086991f4;
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar3 * uVar11;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1086990f8:
  plVar1 = param_3 + 2;
  plVar10 = param_3;
  func_0x00010869a4d4();
  *plVar10 = 0;
  plVar10[1] = uVar12;
  plVar10[2] = uVar12;
  *(undefined4 *)(plVar10 + 3) = 0;
  func_0x00010869a3ec();
  if ((uVar11 == 0) || (func_0x00010869a4b0(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    bVar4 = 2 < uVar11;
    bVar5 = uVar11 == 3;
    func_0x00010869a380(uVar11 << 1);
    uVar2 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar2 = extraout_x9;
    }
    FUN_108699b18(param_3,uVar2);
    uVar11 = param_3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *param_3;
  plVar9 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar10 = *plVar1;
    *plVar1 = (long)plVar10;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar6 * uVar11;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
  }
  func_0x00010869a3d4();
  FUN_108699c58();
LAB_1086991f4:
  return plVar10 + 3;
}



/* Entry: 10869921c; end: 10869956f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010869932c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10869921c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *plVar11;
  long *unaff_x19;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long *unaff_x25;
  
  func_0x00010869a4c8();
  plVar16 = (long *)unaff_x19[1];
  if (plVar16 != (long *)0x0) {
    uVar14 = (long)plVar16 - 1;
    uVar15 = (uint)plVar16;
    if (((ulong)plVar16 & uVar14) == 0) {
      unaff_x25 = (long *)((ulong)(uVar15 - 1) & (ulong)param_3);
      in_NG = false;
    }
    else {
      in_NG = (long)param_3 - (long)plVar16 < 0;
      unaff_x25 = param_3;
      if (plVar16 <= param_3) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = (uint)param_3 / uVar15;
        }
        unaff_x25 = (long *)(ulong)((uint)param_3 - uVar1 * uVar15);
      }
    }
    plVar12 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1086992d8;
          plVar5 = (long *)plVar12[1];
          in_NG = (long)plVar5 - (long)param_3 < 0;
          if (plVar5 != param_3) break;
          plVar5 = plVar12 + 2;
          func_0x000107c28078(plVar5,param_4);
          if (((ulong)plVar5 & 1) != 0) goto LAB_108699534;
        }
        if (((ulong)plVar16 & uVar14) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar14);
        }
        else if (plVar16 <= plVar5) {
          uVar7 = 0;
          if (plVar16 != (long *)0x0) {
            uVar7 = (ulong)plVar5 / (ulong)plVar16;
          }
          plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar16);
        }
        in_NG = (long)plVar5 - (long)unaff_x25 < 0;
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1086992d8:
  plVar5 = unaff_x19 + 2;
  plVar12 = (long *)0x60;
  __Znwm();
  plVar8 = plVar12 + 2;
  *plVar12 = 0;
  plVar12[1] = (long)param_3;
  func_0x000107c27994(plVar8,param_4);
  plVar12[0xb] = 0;
  plVar12[10] = 0;
  plVar12[9] = 0;
  plVar12[8] = 0;
  plVar12[7] = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 0xb) = 0x3f800000;
  func_0x00010869a3ec();
  if ((plVar16 != (long *)0x0) &&
     (func_0x00010869a4b0(param_1,param_2,(float)plVar16), !(bool)in_NG)) goto LAB_1086994cc;
  func_0x00010869a480();
  bVar3 = (long *)0x2 < plVar16;
  bVar4 = plVar16 == (long *)0x3;
  func_0x00010869a380();
  plVar13 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = plVar13;
  }
  plVar16 = (long *)unaff_x19[1];
  if (plVar16 < plVar13) {
LAB_108699378:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10869955c);
      (*pcVar2)();
    }
    __Znwm((long)plVar13 << 3);
    FUN_108699710();
    plVar16 = (long *)0x0;
    unaff_x19[1] = (long)plVar13;
    lVar6 = *unaff_x19;
    while (plVar13 != plVar16) {
      func_0x00010869a4dc();
      lVar6 = extraout_x8_00;
      plVar16 = extraout_x9_00;
    }
    plVar8 = (long *)*plVar5;
    plVar16 = plVar13;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar7 = (long)plVar13 - 1;
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar13;
      }
      plVar10 = plVar9;
      if (plVar13 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar7) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar7);
      }
      *(long **)(lVar6 + (long)plVar10 * 8) = plVar5;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar13 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar13 <= plVar11) {
          uVar14 = 0;
          if (plVar13 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar6 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            func_0x00010869a394();
            lVar6 = extraout_x8_01;
            uVar7 = extraout_x9_01;
            plVar8 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar16) {
    func_0x00010869a498();
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010869a360();
    }
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if (plVar13 < plVar16) {
      if (plVar13 != (long *)0x0) goto LAB_108699378;
      FUN_108699710();
      unaff_x19[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x25 = (long *)((ulong)((int)plVar16 - 1) & (ulong)param_3);
  }
  else {
    unaff_x25 = param_3;
    if (plVar16 <= param_3) {
      uVar14 = 0;
      if (plVar16 != (long *)0x0) {
        uVar14 = (ulong)param_3 / (ulong)plVar16;
      }
      unaff_x25 = (long *)((long)param_3 - uVar14 * (long)plVar16);
    }
  }
LAB_1086994cc:
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      plVar5 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar5) {
        uVar14 = 0;
        if (plVar16 != (long *)0x0) {
          uVar14 = (ulong)plVar5 / (ulong)plVar16;
        }
        plVar5 = (long *)((long)plVar5 - uVar14 * (long)plVar16);
      }
      *(long **)(lVar6 + (long)plVar5 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  func_0x00010869a3d4();
  FUN_108699728();
LAB_108699534:
  return plVar12 + 5;
}



/* Entry: 108699570; end: 108699577;  */

bool FUN_108699570(long param_1)

{
  param_1 = param_1 + 0x58;
  FUN_108699c84(param_1);
  return param_1 != 0;
}



/* Entry: 108699578; end: 108699593;  */

bool FUN_108699578(long param_1)

{
  FUN_108699c84();
  return param_1 != 0;
}



/* Entry: 108699594; end: 1086995ab;  */

bool FUN_108699594(long param_1)

{
  param_1 = param_1 + 0x40;
  FUN_108699c84(param_1);
  return param_1 != 0;
}



/* Entry: 1086995ac; end: 1086995c3;  */

void FUN_1086995ac(void)

{
  FUN_108699d34();
  return;
}



/* Entry: 1086995c4; end: 1086995cf;  */

void FUN_1086995c4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    FUN_108699d34();
    return;
  }
  lVar1 = param_1 + 0x40;
  FUN_10869a15c();
  if (lVar1 != 0) {
    FUN_10869a20c(param_1 + 0x40,lVar1);
  }
  return;
}



/* Entry: 1086995d0; end: 1086995e3;  */

void FUN_1086995d0(void)

{
  FUN_108699668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086995e4; end: 10869960b;  */

undefined8 * FUN_1086995e4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1 + -3;
  *puVar2 = &PTR_DAT_110a63458;
  *param_1 = &PTR_FUN_110a63550;
  func_0x000100864b68(param_1 + 8);
  func_0x000107c28e48(param_1 + 6);
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    FUN_1086996e8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  *puVar2 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + -2);
  return puVar2;
}



/* Entry: 10869960c; end: 108699667;  */

void FUN_10869960c(long *param_1)

{
  while (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 108699668; end: 1086996e7;  */

undefined8 * FUN_108699668(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110a63458;
  param_1[3] = &PTR_FUN_110a63550;
  func_0x000100864b68(param_1 + 0xb);
  func_0x000107c28e48(param_1 + 9);
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1086996e8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 1086996e8; end: 10869970f;  */

long FUN_1086996e8(long param_1)

{
  long lStack_28;
  
  func_0x000108699634(param_1 + 0x28);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108699710; end: 108699727;  */

void FUN_108699710(long *param_1,long param_2)

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



/* Entry: 108699728; end: 10869976b;  */

long * FUN_108699728(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1086996e8(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10869976c; end: 10869981b;  */

long FUN_10869976c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (param_1[3] != 0)) {
    plVar1 = param_1;
    func_0x00010869a3c8();
    func_0x00010869a400();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        func_0x00010869a4f4();
        uVar5 = unaff_x24;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x00010869a3ac();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x00010869a4e8();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 10869981c; end: 10869994f;  */

void FUN_10869981c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plStack_28;
  long *plStack_20;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined3 uStack_13;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *param_1;
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_2);
  plStack_20 = param_1 + 2;
  if (plVar6 == plStack_20) {
LAB_1086998a4:
    if (lVar3 == 0) {
LAB_1086998d4:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_1086998dc;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1086998d4;
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_1086998a4;
LAB_1086998dc:
    if (lVar3 == 0) goto LAB_108699914;
  }
  uVar9 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar5 <= uVar9) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar9 / uVar5;
    }
    uVar9 = uVar9 - uVar7 * uVar5;
  }
  if (uVar9 != uVar4) {
    *(long **)(lVar8 + uVar9 * 8) = plVar6;
    lVar3 = *param_2;
  }
LAB_108699914:
  *plVar6 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_18 = 1;
  uStack_17 = 0;
  uStack_13 = 0;
  plStack_28 = param_2;
  FUN_108699728(&plStack_28);
  return;
}



/* Entry: 108699950; end: 108699993;  */

long * FUN_108699950(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108699994; end: 108699ad3;  */

void FUN_108699994(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x00010869a454();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x00010869a360();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_108699ad4(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_108699ad4(param_1,lVar3);
    func_0x00010869a470();
    plVar6 = extraout_x9;
    while (param_2 != plVar6) {
      func_0x00010869a4dc();
      plVar6 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x00010869a438();
      func_0x00010869a424();
      lVar3 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar5 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar6, plVar6 = (long *)*plVar8, plVar6 != (long *)0x0) {
        plVar7 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar6;
            func_0x00010869a394();
            lVar3 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar5 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108699ad4; end: 108699aeb;  */

void FUN_108699ad4(long *param_1,long param_2)

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



/* Entry: 108699aec; end: 108699b17;  */

long * FUN_108699aec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108699b18; end: 108699c57;  */

long * FUN_108699b18(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *plVar7;
  long *extraout_x11_00;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (!bVar2 || param_2 == plVar9) {
    if (bVar2) {
      return plVar4;
    }
    func_0x00010869a454();
    if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
      func_0x00010869a360();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return plVar4;
    }
    if (param_2 == (long *)0x0) {
      plVar4 = param_1;
      func_0x0001086995f4(param_1,0);
      param_1[1] = 0;
      return plVar4;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    plVar4 = param_1;
    func_0x0001086995f4(param_1,lVar3);
    func_0x00010869a470();
    plVar9 = extraout_x9;
    while (param_2 != plVar9) {
      func_0x00010869a4dc();
      plVar9 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x00010869a438();
      func_0x00010869a424();
      lVar3 = extraout_x8;
      plVar9 = extraout_x9_01;
      uVar6 = extraout_x10;
      plVar7 = extraout_x11;
      while (plVar5 = plVar9, plVar9 = (long *)*plVar5, plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        if (plVar8 != plVar7) {
          if (*(long *)(lVar3 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar8 * 8) = plVar5;
            plVar7 = plVar8;
          }
          else {
            *plVar5 = *plVar9;
            func_0x00010869a394();
            lVar3 = extraout_x8_00;
            plVar9 = extraout_x9_02;
            uVar6 = extraout_x10_00;
            plVar7 = extraout_x11_00;
          }
        }
      }
    }
    return plVar4;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar4;
  *plVar4 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 108699c58; end: 108699c83;  */

long * FUN_108699c58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108699c84; end: 108699d33;  */

long FUN_108699c84(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (param_1[3] != 0)) {
    plVar1 = param_1;
    func_0x00010869a3c8();
    func_0x00010869a400();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        func_0x00010869a4f4();
        uVar5 = unaff_x24;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (unaff_x20 != uVar2) break;
        func_0x00010869a3ac();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x00010869a4e8();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 108699d34; end: 108699d67;  */

void FUN_108699d34(void)

{
  func_0x000108699d4c();
  return;
}



/* Entry: 108699d68; end: 108699f4f;  */

undefined1  [16]
FUN_108699d68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  func_0x00010869a4c8();
  uVar9 = unaff_x19[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    if ((uVar9 & uVar10) == 0) {
      unaff_x25 = uVar8 - 1 & param_3;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar9) < 0;
      unaff_x25 = param_3;
      if (uVar9 <= param_3) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = (uint)param_3 / uVar8;
        }
        unaff_x25 = (ulong)((uint)param_3 - uVar1 * uVar8);
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_108699e28;
          uVar5 = plVar7[1];
          in_NG = (long)(uVar5 - param_3) < 0;
          if (uVar5 != param_3) break;
          plVar3 = plVar7 + 2;
          func_0x000107c28078(plVar3,param_4);
          if (((ulong)plVar3 & 1) != 0) {
            uVar4 = 0;
            aplStack_68[0] = plVar7;
            goto LAB_108699f20;
          }
        }
        if ((uVar9 & uVar10) == 0) {
          uVar5 = uVar5 & uVar10;
        }
        else if (uVar9 <= uVar5) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar2 * uVar9;
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
      } while (uVar5 == unaff_x25);
    }
  }
LAB_108699e28:
  FUN_108699f50(aplStack_68);
  func_0x00010869a3ec();
  if ((uVar9 == 0) || (func_0x00010869a4b0(param_1,param_2,(float)uVar9), (bool)in_NG)) {
    func_0x00010869a480();
    func_0x00010869a380();
    func_0x0001008649dc();
    uVar9 = unaff_x19[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = (int)uVar9 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar9 <= param_3) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = param_3 / uVar9;
        }
        unaff_x25 = param_3 - uVar10 * uVar9;
      }
    }
  }
  lVar6 = *unaff_x19;
  plVar7 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = unaff_x19 + 2;
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
    *(long **)(lVar6 + unaff_x25 * 8) = plVar7;
    if (*aplStack_68[0] != 0) {
      uVar10 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar5 * uVar9;
      }
      *(long **)(lVar6 + uVar10 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar7;
    *plVar7 = (long)aplStack_68[0];
  }
  func_0x00010869a3d4();
  FUN_10869a0ac();
  uVar4 = 1;
LAB_108699f20:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = aplStack_68[0];
  return auVar11;
}



/* Entry: 108699f50; end: 108699faf;  */

void FUN_108699f50(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x000107c27994(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108699fb0; end: 10869a077;  */

void FUN_108699fb0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10869a078(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_10869a090(lVar2);
    FUN_10869a078(param_1,lVar2);
    func_0x00010869a470();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x00010869a4dc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010869a438();
      func_0x00010869a424();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x00010869a394();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10869a078; end: 10869a08f;  */

void FUN_10869a078(long *param_1,long param_2)

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



/* Entry: 10869a090; end: 10869a0ab;  */

long FUN_10869a090(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10869a0d0();
  return param_1;
}



/* Entry: 10869a0ac; end: 10869a0cf;  */

undefined8 FUN_10869a0ac(undefined8 param_1)

{
  FUN_10869a0d0(param_1,0);
  return param_1;
}



/* Entry: 10869a0d0; end: 10869a0e7;  */

void FUN_10869a0d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27914(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10869a0e8; end: 10869a15b;  */

void FUN_10869a0e8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27914(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10869a15c; end: 10869a20b;  */

long FUN_10869a15c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (param_1[3] != 0)) {
    plVar1 = param_1;
    func_0x00010869a3c8();
    func_0x00010869a400();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        func_0x00010869a4f4();
        uVar5 = unaff_x24;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x00010869a3ac();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x00010869a4e8();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 10869a20c; end: 10869a243;  */

undefined8 FUN_10869a20c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10869a244(auStack_38);
  FUN_10869a0ac(auStack_38);
  return uVar1;
}



/* Entry: 10869a244; end: 10869a4ff;  */

void FUN_10869a244(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10869a2f8;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10869a2f8;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10869a2f8:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10869a500; end: 10869a5c7;  */

undefined1  [16] FUN_10869a500(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_1 + 0x880) == '\x01') {
    uVar3 = *(ulong *)(param_1 + 0x878);
    uVar2 = *(ulong *)(param_1 + 0x880);
    uVar4 = uVar3 & 0xffffffffffffff00;
  }
  else if (((*(char *)(param_1 + 0x330) == '\x01') &&
           (*(long *)(param_1 + 0x90) == *(long *)(param_1 + 0x98))) &&
          (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) == 0x18)) {
    FUN_108869d18(auStack_38,param_2,*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x328));
    func_0x000107c28404(auStack_38);
    func_0x00010869b690();
    func_0x000107c28410();
    bVar1 = (unaff_x19 & 0x100000000) != 0;
    uVar2 = (ulong)bVar1;
    uVar3 = 0;
    if (bVar1) {
      uVar3 = unaff_x19;
    }
    uVar4 = 0;
    if (bVar1) {
      uVar4 = (long)(int)unaff_x19 & 0xffffffffffffff00;
    }
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar5._0_8_ = uVar4 | uVar3 & 0xff;
  auVar5._8_8_ = uVar2;
  return auVar5;
}



/* Entry: 10869a5c8; end: 10869a64f;  */

void FUN_10869a5c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  byte bStack_38;
  undefined7 uStack_37;
  
  func_0x00010869b770(*(undefined8 *)(param_2 + 0x30));
  FUN_10869a650(&uStack_50);
  if ((bStack_38 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (((bStack_40 & 1) != 0) && (FUN_108869dc4(param_5,param_3,uStack_48), (int)param_5 != 0)) {
      uStack_50 = 1;
    }
    param_1[1] = uStack_48;
    *param_1 = CONCAT44(uStack_4c,uStack_50);
    param_1[3] = CONCAT71(uStack_37,bStack_38);
    param_1[2] = CONCAT71(uStack_3f,bStack_40);
  }
  return;
}



/* Entry: 10869a650; end: 10869a6cb;  */

void FUN_10869a650(undefined4 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_2 + 0x150);
  if (iVar1 != 0) {
    if (iVar1 == 0xd) {
      uVar2 = *(int *)(param_2 + 0x148) - 1;
      if (uVar2 < 3) {
        uVar4 = *(undefined4 *)(&UNK_10df42608 + (ulong)uVar2 * 4);
      }
      else {
        uVar4 = 0;
      }
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 2) = 0;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_10869a6c4;
    }
    if (iVar1 == 0xc) {
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x148) + 0x10);
      *param_1 = 0;
      *(undefined8 *)(param_1 + 2) = uVar5;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_10869a6c4;
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10869a6c4:
  *(undefined1 *)(param_1 + 6) = uVar3;
  return;
}



/* Entry: 10869a6cc; end: 10869a817;  */

void FUN_10869a6cc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  plVar5 = (long *)(param_2 + 0x10);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    FUN_10886a540(param_4,param_1,plVar5 + 3,*(undefined4 *)(plVar5 + 2));
    FUN_108869ee0(&lStack_98,param_4,param_1,plVar5 + 3);
    if (lStack_98 != lStack_90) {
      lVar4 = lStack_98;
      lVar6 = lStack_90;
      if (lStack_68 == 0) {
        lVar1 = param_5[1];
        for (lVar2 = *param_5; lVar4 = lStack_98, lVar6 = lStack_90, lVar2 != lVar1;
            lVar2 = lVar2 + 0x1a8) {
          FUN_10867b1ac(&uStack_80,lVar2 + 0x18);
        }
      }
      for (; lVar4 != lVar6; lVar4 = lVar4 + 0x1a8) {
        lVar2 = param_3;
        func_0x00010869af60(param_3,lVar4 + 0x18);
        if (lVar2 == 0) {
          puVar3 = &uStack_80;
          func_0x000100c5494c(puVar3,lVar4 + 0x18);
          if (puVar3 == (undefined8 *)0x0) {
            func_0x00010869af7c(&uStack_80,lVar4 + 0x18);
            FUN_10867b444(param_5,lVar4);
          }
        }
      }
    }
    func_0x00010867b9fc(&lStack_98);
  }
  func_0x00010867bb84(&uStack_80);
  return;
}



/* Entry: 10869a818; end: 10869a84b;  */

ulong FUN_10869a818(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 < 0x18) {
    return *(ulong *)(&UNK_10df426d8 + (ulong)uVar1 * 8) |
           *(ulong *)(&UNK_10df42618 + (ulong)uVar1 * 8);
  }
  return 0;
}



/* Entry: 10869a84c; end: 10869a987;  */

void FUN_10869a84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x170;
  func_0x000107c278b8(auStack_98,&UNK_10f4b0979);
  FUN_108842444(auStack_b0,param_1);
  pppuVar1 = &ppuStack_80;
  func_0x000107c28820(pppuVar1,auStack_98,auStack_b0);
  FUN_10869a988();
  func_0x000108846b30(param_3);
  FUN_10869a9f8(pppuVar1,param_3);
  func_0x000107c2884c(auStack_58,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2884c(auStack_d8,auStack_58);
  (**(code **)(*param_4 + 0x50))(param_4,auStack_d8);
  func_0x000107c2882c(auStack_d8);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 10869a988; end: 10869a9f7;  */

void FUN_10869a988(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010869b75c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010869b734();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010869b6fc();
  func_0x00010869b670();
  return;
}



/* Entry: 10869a9f8; end: 10869aa67;  */

void FUN_10869a9f8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_38 [24];
  
  func_0x00010869b75c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010869b734();
  }
  func_0x000107c278b8(auStack_38);
  func_0x00010869b6fc();
  func_0x00010869b670();
  return;
}


