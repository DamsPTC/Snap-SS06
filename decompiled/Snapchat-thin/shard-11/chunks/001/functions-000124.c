/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082655ec; end: 108265613;  */

ushort FUN_1082655ec(ulong param_1)

{
  long unaff_x19;
  
  func_0x0001082666c0();
  return *(ushort *)(unaff_x19 + (param_1 & 0xffffffff) * 0x18 + 0x80) & 1;
}



/* Entry: 108265614; end: 108265693;  */

void FUN_108265614(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_3,param_4);
  if ((int)param_1 != 0) {
    func_0x00010826673c(*(undefined1 *)(param_3 + 4));
    func_0x000108266524();
    func_0x000108266674();
    func_0x0001082664fc();
    do {
      func_0x00010826668c();
      if ((bool)in_ZR) {
        return;
      }
      func_0x0001082665d0();
    } while (!(bool)in_ZR);
  }
  return;
}



/* Entry: 108265694; end: 10826570b;  */

bool FUN_108265694(int param_1,undefined8 param_2,int param_3)

{
  func_0x000108266530();
  func_0x0001082656c0();
  return param_3 <= param_1;
}



/* Entry: 10826570c; end: 108265743;  */

uint FUN_10826570c(ulong param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  long unaff_x19;
  
  func_0x000108266530();
  func_0x0001082666c0();
  uVar1 = *(ushort *)(unaff_x19 + (param_1 & 0xffffffff) * 0x18 + 0x80);
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = uVar1 >> 1 & 1;
  }
  else {
    if ((int)*(uint *)(unaff_x19 + 0x36c) < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10826570c);
      (*pcVar3)();
    }
    uVar2 = *(uint *)(*(long *)(unaff_x19 + 0x360) + (ulong)*(uint *)(unaff_x19 + 0x36c) * 4 + -4);
  }
  return uVar2;
}



/* Entry: 108265744; end: 1082657c7;  */

uint FUN_108265744(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  
  iVar1 = param_2;
  if (param_2 < 2) {
    iVar1 = 1;
  }
  FUN_108265874();
  uVar2 = *(ushort *)(param_1 + (param_3 & 0xffffffff) * 0x18 + 0x80);
  if ((uVar2 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else if ((uVar2 >> 2 & 1) == 0) {
LAB_108265788:
    uVar3 = (uint)(param_2 < 2);
  }
  else {
    lVar4 = 0;
    do {
      if ((ulong)(*(uint *)(param_1 + 0x36c) &
                 ((int)*(uint *)(param_1 + 0x36c) >> 0x1f ^ 0xffffffffU)) << 2 == lVar4)
      goto LAB_108265788;
      uVar3 = *(uint *)(*(long *)(param_1 + 0x360) + lVar4);
      lVar4 = lVar4 + 4;
    } while ((int)uVar3 < iVar1);
  }
  return uVar3;
}



/* Entry: 1082657c8; end: 108265873;  */

void FUN_1082657c8(long param_1,int param_2,ulong *param_3,long param_4)

{
  int *piVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = param_3 + param_4;
  do {
    if (param_3 == puVar2) {
      return;
    }
    uVar4 = *param_3;
    FUN_108265874();
    lVar5 = param_1 + 0x80 + (uVar4 & 0xffffffff) * 0x18;
    uVar3 = *(uint *)(lVar5 + 0x10);
    lVar6 = 0;
    while ((ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) * 0xc + 0xc != lVar6 + 0xc) {
      piVar1 = (int *)(*(long *)(lVar5 + 8) + lVar6);
      lVar6 = lVar6 + 0xc;
      if (*piVar1 == param_2) {
        *(ulong *)(param_1 + (long)param_2 * 8 + 0x230) = *param_3;
        return;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}



/* Entry: 108265874; end: 1082658d3;  */

long FUN_108265874(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    if (lVar2 == 0x12) {
      FUN_10841076c(&UNK_10f4801bb);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082658d4);
      (*pcVar1)();
    }
    if (*(long *)(&UNK_10df11dd8 + lVar2 * 8) == param_1) break;
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}



/* Entry: 1082658d4; end: 10826591f;  */

void FUN_1082658d4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_2 * 0xc);
  __Znam();
  puVar2 = puVar1;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0x32103210;
    puVar2 = (undefined8 *)((long)puVar2 + 0xc);
  } while (puVar2 != (undefined8 *)((long)puVar1 + param_2 * 0xc));
  *param_1 = puVar1;
  return;
}



/* Entry: 108265920; end: 10826594b;  */

undefined2 FUN_108265920(void)

{
  undefined2 uStack_12;
  
  FUN_108266014(&uStack_12,&UNK_10f480283);
  return uStack_12;
}



/* Entry: 10826594c; end: 108265a1f;  */

bool FUN_10826594c(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x70))();
  if (plVar2 == (long *)0x0) {
    bVar1 = true;
  }
  else if ((int)plVar2[3] < 2) {
    (**(code **)(*param_2 + 0x60))(param_2);
    bVar1 = param_2 != (long *)0x0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108265a20; end: 108265a5b;  */

uint FUN_108265a20(undefined8 param_1,long *param_2)

{
  uint uVar1;
  
  (**(code **)(*param_2 + 8))();
  if (param_2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)('\x01' < (char)param_2[1]);
  }
  return uVar1 | uVar1 << 8;
}



/* Entry: 108265a5c; end: 108265ad7;  */

bool FUN_108265a5c(ulong param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = param_1;
  func_0x00010826673c(*(undefined1 *)(param_3 + 4));
  func_0x000108266524();
  lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x18;
  uVar1 = *(uint *)(lVar3 + 0x90);
  uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  uVar2 = 0;
  do {
    uVar5 = uVar2;
    uVar6 = uVar4;
    if (uVar5 == uVar4) break;
    uVar2 = uVar5 + 1;
    uVar6 = uVar5;
  } while (*(int *)(*(long *)(lVar3 + 0x88) + uVar5 * 0xc) != param_2);
  return (long)uVar6 < (long)(int)uVar1;
}



/* Entry: 108265ad8; end: 108265b23;  */

void FUN_108265ad8(undefined4 *param_1,long param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = *(ulong *)(param_2 + (long)param_3 * 8 + 0x230);
  bVar1 = uVar2 == 0;
  if (bVar1) {
    uVar3 = 4;
  }
  else {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
    *(ulong *)(param_1 + 4) = uVar2 & 0xffffffff;
    uVar3 = 2;
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = !bVar1;
  *(bool *)(param_1 + 0x16) = !bVar1;
  param_1[0x1b] = (uint)!bVar1;
  return;
}



/* Entry: 108265b24; end: 108265bc7;  */

void FUN_108265b24(undefined4 *param_1,long param_2,undefined4 param_3)

{
  code *pcVar1;
  
  switch(param_3) {
  case 0:
  case 2:
  case 3:
    goto code_r0x000108265b84;
  case 1:
    if (*(int *)(param_2 + 0x350) == 1) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 1;
      param_1[0x1b] = 1;
      *(undefined ***)(param_1 + 2) = &PTR_DAT_110a32ac0;
      *(undefined8 *)(param_1 + 4) = 0xb4;
      *(undefined1 *)(param_1 + 0x16) = 1;
      return;
    }
code_r0x000108265b84:
    *param_1 = 4;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    param_1[0x1b] = 0;
    return;
  default:
    FUN_10841076c(&UNK_10f480253);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108265bc8);
    (*pcVar1)();
  }
}



/* Entry: 108265bc8; end: 108265c6f;  */

undefined2 FUN_108265bc8(void)

{
  undefined1 in_ZR;
  long extraout_x11;
  long extraout_x12;
  
  func_0x0001082665ec();
  func_0x000108266524();
  func_0x000108266674();
  func_0x0001082664fc();
  do {
    func_0x00010826668c();
    if ((bool)in_ZR) {
      return 0x3210;
    }
    func_0x0001082665d0();
  } while (!(bool)in_ZR);
  return *(undefined2 *)(extraout_x12 + extraout_x11 + -4);
}



/* Entry: 108265c70; end: 108265c83;  */

undefined8 FUN_108265c70(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x10;
  
  func_0x000108266530();
  uVar1 = extraout_x10;
  if ((bool)in_ZR) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108265c84; end: 108265cf7;  */

undefined1  [16] FUN_108265c84(undefined8 param_1,ulong param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_108265cf8(param_2);
  func_0x00010826673c(*(undefined1 *)(param_3 + 4));
  func_0x000108266524();
  func_0x000108266674();
  func_0x0001082664fc();
  do {
    func_0x00010826668c();
    if ((bool)in_ZR) {
      uVar1 = 0;
      param_2 = 0;
      break;
    }
    func_0x000108266728();
  } while (!(bool)in_ZR);
  auVar2._0_8_ = param_2 & 0xffffffff;
  auVar2._8_8_ = uVar1;
  return auVar2;
}



/* Entry: 108265cf8; end: 108265d13;  */

undefined8 FUN_108265cf8(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0x24) {
    return *(undefined8 *)(&UNK_10df11ea8 + (ulong)param_1 * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108265d14);
  (*pcVar1)();
}



/* Entry: 108265d14; end: 108265d9f;  */

undefined1  [16] FUN_108265d14(undefined8 param_1,ulong param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_3;
  func_0x00010828398c();
  if ((int)lVar1 == 0) {
    uVar2 = param_2;
    FUN_108265cf8(param_2);
    func_0x00010826673c(*(undefined1 *)(param_3 + 4));
    func_0x000108266524();
    func_0x000108266674();
    func_0x0001082664fc();
    do {
      func_0x00010826668c();
      if ((bool)in_ZR) {
        uVar2 = 0;
        param_2 = 0;
        break;
      }
      func_0x000108266728();
    } while (!(bool)in_ZR);
    param_2 = param_2 & 0xffffffff;
  }
  else {
    param_2 = 0;
    uVar2 = 0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 108265da0; end: 108265ecf;  */

void FUN_108265da0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  uint extraout_w8;
  uint extraout_w9;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  *(long *)(param_1 + 0x88) = param_1;
  *(undefined8 *)(param_1 + 0x90) = 0x4400000000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_1082a3fe8(param_1,param_4,param_2);
  ppuStack_48 = &PTR_FUN_110a32f68;
  uStack_38 = 0;
  lStack_40 = param_1 + 0x88;
  func_0x00010826673c(*(undefined1 *)(param_4 + 0xc));
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  if ((extraout_w8 & extraout_w9) == 0) {
    uVar1 = 0;
  }
  FUN_1082660fc(&ppuStack_48,0x20,uVar1,"unknown",7);
  func_0x0001082666fc();
  func_0x0001082664e4();
  func_0x0001082666fc();
  func_0x0001082664e4();
  func_0x0001082666fc();
  func_0x0001082664e4();
  func_0x0001082a32fc(*(undefined8 *)(param_4 + 0x88),&ppuStack_48,param_2);
  func_0x0001082666fc();
  func_0x0001082664e4();
  FUN_108265ed0(&ppuStack_48);
  return;
}



/* Entry: 108265ed0; end: 108265f03;  */

void FUN_108265ed0(long param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_108266164(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 108265f04; end: 108265f17;  */

void FUN_108265f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a32f68;
  return;
}



/* Entry: 108265f18; end: 108265fc7;  */

ulong FUN_108265f18(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [136];
  
  puVar1 = auStack_c8;
  func_0x0001082662a0(puVar1,*(long *)(param_2 + 0x88) +
                             ((ulong)*(uint *)(param_2 + 0x98) & 0xfffffffc),
                      *(int *)(param_2 + 0x90) * 4 - *(uint *)(param_2 + 0x98));
  func_0x0001082666b8();
  func_0x0001082666b8();
  func_0x0001082666b8();
  func_0x0001082662f4(auStack_a8);
  return (ulong)puVar1 & 0xffffffff;
}



/* Entry: 108265fc8; end: 108265fcf;  */

void FUN_108265fc8(void)

{
  return;
}



/* Entry: 108265fd0; end: 108265fe3;  */

void FUN_108265fd0(void)

{
  FUN_108266364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108265fe4; end: 108266013;  */

undefined8 FUN_108265fe4(void)

{
  return 1;
}



/* Entry: 108266014; end: 10826606b;  */

ushort * FUN_108266014(ushort *param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (ushort)*param_2;
  FUN_10826606c();
  iVar2 = (int)param_2[1];
  FUN_10826606c();
  iVar3 = (int)param_2[2];
  FUN_10826606c();
  iVar4 = (int)param_2[3];
  FUN_10826606c();
  *param_1 = uVar1 | (ushort)(iVar2 << 4) | (ushort)(iVar3 << 8) | (ushort)(iVar4 << 0xc);
  return param_1;
}



/* Entry: 10826606c; end: 1082660c7;  */

undefined8 FUN_10826606c(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0x30) {
    return 4;
  }
  if (param_1 == 0x31) {
    return 5;
  }
  if (param_1 == 0x61) {
    return 3;
  }
  if (param_1 != 0x62) {
    if (param_1 == 0x72) {
      return 0;
    }
    if (param_1 == 0x67) {
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082660c8);
    (*pcVar1)();
  }
  return 2;
}



/* Entry: 1082660c8; end: 1082660f7;  */

void FUN_1082660c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 4;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082660f8; end: 1082660fb;  */

void FUN_1082660f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082660fc; end: 10826615f;  */

void FUN_1082660fc(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14) + param_2;
  *(uint *)(param_1 + 0x10) =
       *(uint *)(param_1 + 0x10) | param_3 << (ulong)(*(uint *)(param_1 + 0x14) & 0x1f);
  *(uint *)(param_1 + 0x14) = uVar1;
  if (0x1f < uVar1) {
    FUN_108266164(*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x14) + -0x20;
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = param_3 >> (ulong)(param_2 - iVar2 & 0x1f);
    }
    *(uint *)(param_1 + 0x10) = uVar1;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}



/* Entry: 108266160; end: 108266163;  */

void FUN_108266160(void)

{
  return;
}



/* Entry: 108266164; end: 1082661e7;  */

undefined4 * FUN_108266164(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *puVar2;
  
  func_0x000108266680();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    puVar2 = (undefined4 *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 4);
    *puVar2 = *unaff_x20;
  }
  else {
    plVar1 = unaff_x19;
    FUN_1082661e8(0x3ff8000000000000);
    puVar2 = (undefined4 *)((long)plVar1 + (long)(int)unaff_x19[1] * 4);
    *puVar2 = *unaff_x20;
    FUN_10826620c();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return puVar2;
}



/* Entry: 1082661e8; end: 10826620b;  */

void FUN_1082661e8(long param_1,int param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x4;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10826620c;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000108266680();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 >> 2;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10826620c; end: 108266273;  */

void FUN_10826620c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108266680();
  if (*(int *)(param_1 + 8) != 0) {
    _memcpy();
  }
  if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
    _free(*unaff_x19);
  }
  param_3 = param_3 >> 2;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108266274; end: 108266317;  */

undefined8 * FUN_108266274(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108266318; end: 108266363;  */

void FUN_108266318(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108266364; end: 1082663ff;  */

undefined8 * FUN_108266364(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110a32d10;
  FUN_10840f118(param_1 + 0x6b);
  lVar1 = 0x220;
  do {
    func_0x0001082663b0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x70);
  *param_1 = &PTR_DAT_110a32e30;
  func_0x0001082663dc(param_1 + 2);
  return param_1;
}



/* Entry: 108266400; end: 108266417;  */

void FUN_108266400(long *param_1,long param_2)

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



/* Entry: 108266418; end: 10826643b;  */

void FUN_108266418(long param_1)

{
  FUN_10826643c();
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  return;
}



/* Entry: 10826643c; end: 108266493;  */

void FUN_10826643c(undefined4 *param_1)

{
  *param_1 = 4;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0x11) = 1;
  *(undefined4 *)((long)param_1 + 0x13) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0x100;
  *(undefined8 *)((long)param_1 + 0x1e) = 0;
  *(undefined8 *)((long)param_1 + 0x23) = 0;
  *(char **)(param_1 + 0xc) = "";
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 108266494; end: 1082664bf;  */

long FUN_108266494(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 4 + -4;
}



/* Entry: 1082664c0; end: 108266747;  */

void FUN_1082664c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108266748; end: 10826684f;  */

void FUN_108266748(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___MTLCommandBufferDescriptor_1126d94d8;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLCommandBufferDescriptor_1126d94d8);
  func_0x00010c197220();
  func_0x00010bf41b00(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108267464();
  if (param_2 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)0x2f8;
    __Znwm();
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_110a32fa8;
    puVar2[0x22] = puVar2 + 2;
    puVar2[0x23] = 0x4000000000;
    puVar2[0x44] = puVar2 + 0x24;
    puVar2[0x45] = 0x4000000000;
    puVar2[0x56] = puVar2 + 0x46;
    puVar2[0x57] = 0x2000000000;
    func_0x0001082674d8();
    puVar2[0x58] = param_2;
    puVar2[0x5d] = 0;
    puVar2[0x59] = 0;
    puVar2[0x5b] = 0;
    puVar2[0x5a] = 0;
    *(undefined1 *)(puVar2 + 0x5c) = 0;
    puVar2[0x5e] = 0x100000000;
  }
  *param_1 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108266850; end: 108266877;  */

void FUN_108266850(int *param_1)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  piVar1 = param_1 + 1;
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 != 0) {
    return;
  }
  iVar7 = 1;
  if (*(long *)(param_1 + 0x1e) == 0) {
    if ((param_1[1] == 0) && (*param_1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + -2) + 0x18))(param_1 + -2);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1e) + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 108266878; end: 10826697b;  */

undefined8 * FUN_108266878(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110a32fa8;
  FUN_10826697c();
  func_0x0001082672f8(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x23) = 0;
  puVar1 = param_1 + 0x44;
  func_0x0001082672c8(puVar1);
  *(undefined4 *)(param_1 + 0x45) = 0;
  puVar2 = param_1 + 0x56;
  FUN_108267260(puVar2);
  *(undefined4 *)(param_1 + 0x57) = 0;
  puVar3 = param_1 + 0x5d;
  FUN_108267124(puVar3);
  uVar4 = param_1[0x58];
  param_1[0x58] = 0;
  _objc_release(uVar4);
  func_0x000108267144(puVar3);
  if ((*(byte *)((long)param_1 + 0x2f4) & 1) != 0) {
    _free(*puVar3);
  }
  _objc_release(param_1[0x5b]);
  func_0x000108267328(param_1 + 0x5a);
  _objc_release(param_1[0x59]);
  _objc_release(param_1[0x58]);
  FUN_108267260(puVar2);
  if ((*(byte *)((long)param_1 + 700) & 1) != 0) {
    _free(*puVar2);
  }
  func_0x0001082672c8(puVar1);
  if ((*(byte *)((long)param_1 + 0x22c) & 1) != 0) {
    _free(*puVar1);
  }
  func_0x0001082672f8(param_1 + 0x22);
  if ((*(byte *)((long)param_1 + 0x11c) & 1) != 0) {
    _free(param_1[0x22]);
  }
  return param_1;
}



/* Entry: 10826697c; end: 1082669db;  */

void FUN_10826697c(long param_1)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x2d0) != (undefined8 *)0x0) {
    func_0x00010bf94840(**(undefined8 **)(param_1 + 0x2d0));
    FUN_108267014(param_1 + 0x2d0,0);
    uVar1 = *(undefined8 *)(param_1 + 0x2d8);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    func_0x00010bf94840();
    uVar1 = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1082669dc; end: 1082669df;  */

undefined8 * FUN_1082669dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110a32fa8;
  FUN_10826697c();
  func_0x0001082672f8(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x23) = 0;
  puVar1 = param_1 + 0x44;
  func_0x0001082672c8(puVar1);
  *(undefined4 *)(param_1 + 0x45) = 0;
  puVar2 = param_1 + 0x56;
  FUN_108267260(puVar2);
  *(undefined4 *)(param_1 + 0x57) = 0;
  puVar3 = param_1 + 0x5d;
  FUN_108267124(puVar3);
  uVar4 = param_1[0x58];
  param_1[0x58] = 0;
  _objc_release(uVar4);
  func_0x000108267144(puVar3);
  if ((*(byte *)((long)param_1 + 0x2f4) & 1) != 0) {
    _free(*puVar3);
  }
  _objc_release(param_1[0x5b]);
  func_0x000108267328(param_1 + 0x5a);
  _objc_release(param_1[0x59]);
  _objc_release(param_1[0x58]);
  FUN_108267260(puVar2);
  if ((*(byte *)((long)param_1 + 700) & 1) != 0) {
    _free(*puVar2);
  }
  func_0x0001082672c8(puVar1);
  if ((*(byte *)((long)param_1 + 0x22c) & 1) != 0) {
    _free(*puVar1);
  }
  func_0x0001082672f8(param_1 + 0x22);
  if ((*(byte *)((long)param_1 + 0x11c) & 1) != 0) {
    _free(param_1[0x22]);
  }
  return param_1;
}



/* Entry: 1082669e0; end: 1082669f3;  */

void FUN_1082669e0(void)

{
  FUN_108266878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082669f4; end: 108266a6b;  */

void FUN_1082669f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x2c8);
  if (lVar3 == 0) {
    lVar3 = param_1;
    FUN_10826697c();
    func_0x0001082674b0();
    if (lVar3 != 0) {
      _NSLog(&PTR____CFConstantStringClassReference_110ed6118);
      lVar3 = 0;
      goto LAB_108266a30;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x2c0);
    func_0x00010bf1cca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c8) = uVar1;
    _objc_release(uVar2);
    func_0x0001082674e8();
    lVar3 = *(long *)(param_1 + 0x2c8);
  }
  func_0x0001082674d8();
LAB_108266a30:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108266a6c; end: 108266c0b;  */

undefined8 FUN_108266a6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x2d8);
  if (lVar1 != 0) {
    func_0x00010bf40cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf40cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    FUN_108266c0c(lVar1,uVar4,param_3);
    if ((int)lVar1 == 0) {
      func_0x0001082674e0();
      func_0x0001082674b8();
      func_0x000108267474();
      func_0x0001082674c8();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x2d8);
      func_0x00010c2536a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c2536a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_108266c0c(uVar2,uVar4,param_3);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x0001082674e0();
      func_0x0001082674b8();
      func_0x000108267474();
      func_0x0001082674c8();
      if ((int)uVar3 != 0) {
        return *(undefined8 *)(param_1 + 0x2d0);
      }
    }
  }
  func_0x00010826747c(param_1,param_2);
  func_0x0001082674b0();
  if (param_1 == 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2c0);
    func_0x00010c12f840();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)0x190;
    __Znwm();
    _objc_retain(uVar4);
    *puVar5 = uVar4;
    _objc_initWeak(puVar5 + 1,0);
    _objc_initWeak(puVar5 + 2,0);
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    puVar5[9] = 0;
    _bzero(puVar5 + 0xd,0x120);
    puVar5[0x31] = 0xffffffffffffffff;
    FUN_108267014((undefined8 *)(unaff_x19 + 0x2d0),puVar5);
    func_0x000108267328(&stack0xffffffffffffffb8);
    _objc_release(uVar4);
    if (param_4 != 0) {
      func_0x00010826c744(param_4,*(undefined8 *)(unaff_x19 + 0x2d0));
    }
    func_0x0001082674d8();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2d8);
    *(undefined8 *)(unaff_x19 + 0x2d8) = unaff_x20;
    _objc_release(uVar4);
    func_0x0001082674e8();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2d0);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110ed6138);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 108266c0c; end: 108266e43;  */

uint FUN_108266c0c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = param_1;
  func_0x00010c26ce20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c26ce20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  _objc_release();
  func_0x000108267474();
  func_0x000108267454();
  if (lVar4 == 1) {
    uVar7 = 1;
  }
  else {
    func_0x000108267454();
    uVar7 = (uint)(lVar4 == 0);
  }
  lVar4 = param_2;
  func_0x00010c09aca0();
  if (lVar4 == 1) {
    uVar6 = 1;
    lVar4 = 1;
    if (param_3 != 0) goto LAB_108266c94;
LAB_108266cbc:
    param_3 = 1;
  }
  else {
    lVar4 = param_2;
    func_0x00010c09aca0();
    uVar6 = (uint)(lVar4 == 0);
    if (param_3 == 0) goto LAB_108266cbc;
LAB_108266c94:
    FUN_10826db10(param_3,param_1);
    lVar4 = param_3;
  }
  func_0x0001082674c0();
  if (lVar4 == 0) {
    func_0x000108267454();
    bVar1 = lVar4 == 0;
  }
  else {
    func_0x0001082674c0();
    if (lVar4 != 1) {
      func_0x0001082674c0();
      if (lVar4 == 2) {
        lVar4 = param_1;
        func_0x00010c13ae60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13ae60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != param_2) goto LAB_108266d88;
        lVar4 = param_2;
        func_0x000108267454();
        if (lVar4 == 2) {
          uVar7 = 1;
        }
        else {
          func_0x000108267454();
LAB_108266da4:
          uVar7 = (uint)(lVar4 == 3);
        }
      }
      else {
        func_0x0001082674c0();
        if (lVar4 != 3) goto LAB_108266d90;
        lVar4 = param_1;
        func_0x00010c13ae60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c13ae60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == param_2) {
          lVar4 = param_2;
          func_0x000108267454();
          goto LAB_108266da4;
        }
LAB_108266d88:
        uVar7 = 0;
      }
      _objc_release(param_2);
      func_0x0001082674b8();
      uVar5 = uVar7;
      goto LAB_108266dbc;
    }
    func_0x000108267454();
    if (lVar4 == 1) {
LAB_108266d90:
      uVar5 = 1;
      goto LAB_108266dbc;
    }
    func_0x000108267454();
    bVar1 = lVar4 == 3;
  }
  uVar5 = (uint)bVar1;
LAB_108266dbc:
  if (lVar2 == lVar3) {
    func_0x00010c26ce20();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = (uint)param_3 & uVar7 & uVar6 & uVar5;
    }
    _objc_release();
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 108266e44; end: 108266f5b;  */

undefined8 FUN_108266e44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  
  func_0x00010826747c();
  func_0x0001082674b0();
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2c0);
    func_0x00010c12f840();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined8 *)0x190;
    __Znwm();
    _objc_retain(uVar1);
    *puVar2 = uVar1;
    _objc_initWeak(puVar2 + 1,0);
    _objc_initWeak(puVar2 + 2,0);
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[3] = 0;
    puVar2[9] = 0;
    _bzero(puVar2 + 0xd,0x120);
    puVar2[0x31] = 0xffffffffffffffff;
    uStack_48 = 0;
    FUN_108267014((undefined8 *)(unaff_x19 + 0x2d0),puVar2);
    func_0x000108267328(&uStack_48);
    _objc_release(uVar1);
    if (param_3 != 0) {
      func_0x00010826c744(param_3,*(undefined8 *)(unaff_x19 + 0x2d0));
    }
    func_0x0001082674d8();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2d8);
    *(undefined8 *)(unaff_x19 + 0x2d8) = unaff_x20;
    _objc_release(uVar1);
    func_0x0001082674e8();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2d0);
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110ed6138);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108266f5c; end: 108267013;  */

bool FUN_108266f5c(long param_1,int param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = param_1;
  FUN_10826697c();
  func_0x0001082674b0();
  if (lVar3 == 0) {
    ppuVar2 = *(undefined ***)(param_1 + 0x2c0);
    func_0x00010bf42760();
    if (param_2 != 0) {
      ppuVar2 = *(undefined ***)(param_1 + 0x2c0);
      func_0x00010c2a14a0();
    }
    func_0x0001082674b0();
    if (ppuVar2 == (undefined **)0x5) {
      FUN_10841076c(&UNK_10f480376);
      lVar3 = *(long *)(param_1 + 0x2c0);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = (undefined **)0x0;
      if (lVar3 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110dc4658;
        _NSLog(&PTR____CFConstantStringClassReference_110dc4658);
      }
      func_0x000108267474();
    }
    func_0x0001082674b0();
    bVar1 = ppuVar2 != (undefined **)0x5;
  }
  else {
    _NSLog(&PTR____CFConstantStringClassReference_110ed6158);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108267014; end: 10826702b;  */

void FUN_108267014(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108267368(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10826702c; end: 108267093;  */

void FUN_10826702c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010826747c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2c0);
  uVar1 = *unaff_x20;
  FUN_108267094(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93140(uVar2,param_2,uVar1,param_3);
  func_0x000108267464();
  func_0x000108267488();
  func_0x0001082674e8();
  return;
}



/* Entry: 108267094; end: 1082670bb;  */

void FUN_108267094(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1082670bc; end: 108267123;  */

void FUN_1082670bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010826747c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2c0);
  uVar1 = *unaff_x20;
  FUN_108267094(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf932a0(uVar2,param_2,uVar1,param_3);
  func_0x000108267464();
  func_0x000108267488();
  func_0x0001082674e8();
  return;
}



/* Entry: 108267124; end: 1082671e3;  */

void FUN_108267124(long param_1)

{
  func_0x000108267144();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1082671e4; end: 10826725f;  */

undefined8 * FUN_1082671e4(undefined8 *param_1)

{
  if ((code *)param_1[3] == (code *)0x0) {
    if ((code *)param_1[1] == (code *)0x0) {
      if ((code *)param_1[2] == (code *)0x0) {
        if ((code *)*param_1 != (code *)0x0) {
          (*(code *)*param_1)(param_1[4]);
        }
      }
      else {
        (*(code *)param_1[2])(param_1[4],*(undefined1 *)(param_1 + 5));
      }
    }
    else {
      (*(code *)param_1[1])(param_1[4],param_1 + 6);
    }
  }
  else {
    (*(code *)param_1[3])(param_1[4],*(undefined1 *)(param_1 + 5),param_1 + 6);
  }
  return param_1;
}



/* Entry: 108267260; end: 10826728f;  */

void FUN_108267260(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108267500();
    do {
      FUN_108267290();
      func_0x0001082674f4();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 108267290; end: 1082672b7;  */

undefined8 * FUN_108267290(undefined8 *param_1)

{
  FUN_1082672b8(*param_1);
  return param_1;
}



/* Entry: 1082672b8; end: 1082672c7;  */

void FUN_1082672b8(long *param_1)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  piVar1 = (int *)((long)param_1 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 != 0) {
    return;
  }
  iVar7 = 1;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)param_1[1] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082672c8; end: 10826734b;  */

void FUN_1082672c8(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108267500();
    do {
      FUN_1082647e4();
      func_0x0001082674f4();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10826734c; end: 108267367;  */

void FUN_10826734c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108267368(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108267368; end: 1082673d3;  */

undefined8 * FUN_108267368(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0xe0;
  do {
    _objc_destroyWeak((long)param_1 + lVar1);
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x60);
  _objc_destroyWeak(param_1 + 9);
  _objc_destroyWeak(param_1 + 5);
  _objc_destroyWeak(param_1 + 4);
  _objc_destroyWeak(param_1 + 3);
  _objc_destroyWeak(param_1 + 2);
  _objc_destroyWeak(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 1082673d4; end: 1082673ff;  */

long * FUN_1082673d4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108267400();
  }
  return param_1;
}



/* Entry: 108267400; end: 10826741f;  */

void FUN_108267400(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = param_1 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000108267450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



/* Entry: 108267420; end: 108267453;  */

void FUN_108267420(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000108267450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 108267454; end: 108267533;  */

void FUN_108267454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c257450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108267534; end: 1082675e7;  */

void FUN_108267534(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
  if ((param_1 & 0xfff80000) == 0) {
    func_0x00010c20a5a0(puVar1);
  }
  func_0x00010c1e7e80(puVar1);
  func_0x00010c227420(puVar1);
  func_0x00010826750c((ushort)(param_1 >> 0x30) & 0xff);
  func_0x00010c18bf40(puVar1);
  func_0x00010826750c(param_1 >> 0x38);
  func_0x00010c20a5c0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1082675e8; end: 10826778f;  */

undefined8 * FUN_1082675e8(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8);
  if ((*param_2 & 1) == 0) {
    if ((*param_2 >> 4 & 1) == 0) {
      lVar1 = 0xe;
      if ((int)param_3 != 0) {
        lVar1 = 4;
      }
      FUN_108267534(*(undefined8 *)((long)param_2 + lVar1),
                    *(undefined2 *)((undefined8 *)((long)param_2 + lVar1) + 1));
      _objc_retainAutoreleasedReturnValue();
      FUN_1082678cc();
      func_0x00010c1a12a0();
      func_0x0001082678dc();
      lVar1 = 4;
      if ((int)param_3 != 0) {
        lVar1 = 0xe;
      }
      FUN_108267534(*(undefined8 *)((long)param_2 + lVar1),
                    *(undefined2 *)((undefined8 *)((long)param_2 + lVar1) + 1));
      _objc_retainAutoreleasedReturnValue();
      FUN_1082678cc();
      func_0x00010c16e280();
    }
    else {
      FUN_108267534(*(undefined8 *)(param_2 + 1),(short)param_2[3]);
      _objc_retainAutoreleasedReturnValue();
      FUN_1082678cc();
      func_0x00010c1a12a0();
      func_0x0001082678dc();
      func_0x00010bfbb260(puVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_1082678cc();
      func_0x00010c16e280();
    }
    func_0x0001082678dc();
  }
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  FUN_1082635ac();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0d8880();
  FUN_108267790(puVar3 + 3,param_2,param_3);
  _objc_retain(uVar4);
  *(undefined4 *)(puVar3 + 1) = 1;
  *puVar3 = &PTR_DAT_110a32fe8;
  puVar3[2] = uVar4;
  _objc_release(uVar4);
  _objc_release(param_1);
  func_0x0001082678e4();
  return puVar3;
}



/* Entry: 108267790; end: 108267837;  */

void FUN_108267790(undefined8 *param_1,uint *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((*param_2 & 1) == 0) {
    if ((*param_2 >> 4 & 1) == 0) {
      lVar1 = 0xe;
      if (param_3 != 0) {
        lVar1 = 4;
      }
      lVar2 = 4;
      if (param_3 != 0) {
        lVar2 = 0xe;
      }
      FUN_108267838(*(undefined8 *)((long)param_2 + lVar1),
                    *(undefined2 *)((undefined8 *)((long)param_2 + lVar1) + 1),param_1);
      uVar5 = *(undefined8 *)((long)param_2 + lVar2);
      uVar3 = *(ushort *)((undefined8 *)((long)param_2 + lVar2) + 1);
      uVar4 = (uint)((ulong)uVar5 >> 0x20);
      *(uint *)((long)param_1 + 0xc) = uVar4 & 0xffff;
      *(uint *)(param_1 + 2) = (uint)uVar3;
      *(uint *)((long)param_1 + 0x14) =
           uVar4 >> 0xd & 0x7f8 | (uint)uVar5 >> 0x10 | uVar4 >> 0x12 & 0x3fc0;
      return;
    }
    FUN_108267838(*(undefined8 *)(param_2 + 1),(short)param_2[3],param_1);
    *(undefined8 *)((long)param_1 + 0xc) = *param_1;
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 108267838; end: 108267867;  */

void FUN_108267838(undefined8 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  *param_3 = uVar1 & 0xffff;
  param_3[1] = param_2 & 0xffff;
  param_3[2] = uVar1 >> 0xd & 0x7f8 | (uint)param_1 >> 0x10 | uVar1 >> 0x12 & 0x3fc0;
  return;
}



/* Entry: 108267868; end: 10826787b;  */

void FUN_108267868(void)

{
  FUN_10826788c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10826787c; end: 10826788b;  */

void FUN_10826787c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10826788c; end: 1082678cb;  */

undefined8 * FUN_10826788c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a32fe8;
  uVar1 = param_1[2];
  param_1[2] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[2]);
  return param_1;
}



/* Entry: 1082678cc; end: 1082678eb;  */

void FUN_1082678cc(void)

{
  return;
}



/* Entry: 1082678ec; end: 1082679d3;  */

void FUN_1082678ec(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_10828c07c(auStack_40,2);
  FUN_1082679d4(&plStack_38,2,param_3,auStack_40);
  FUN_108267a54(auStack_40);
  FUN_108267c00(&lStack_48,param_2,param_3,plStack_38);
  plVar2 = (long *)plStack_38[0xe];
  plStack_38[0xe] = lStack_48;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar1 = plStack_38;
  (**(code **)(*plStack_38 + 0x20))();
  plVar2 = plStack_38;
  if (((ulong)plVar1 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plStack_38 = (long *)0x0;
  }
  *param_1 = (ulong)plVar2;
  func_0x000108114364(&plStack_38);
  return;
}



/* Entry: 1082679d4; end: 108267a53;  */

void FUN_1082679d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = 0xa8;
  __Znwm();
  uStack_38 = *param_4;
  *param_4 = 0;
  FUN_10828ea78();
  *param_1 = uVar1;
  FUN_108267a54(&uStack_38);
  return;
}



/* Entry: 108267a54; end: 108267a9f;  */

long * FUN_108267a54(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 108267aa0; end: 108267b5b;  */

void FUN_108267aa0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  if (param_2 != 0) {
    do {
      FUN_108267bf0();
    } while (extraout_w10 != 0);
  }
  if (param_3 != 0) {
    do {
      FUN_108267bf0();
    } while (extraout_w10_00 != 0);
  }
  if (param_4 != 0) {
    do {
      FUN_108267bf0();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a33050;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  uStack_58 = 0;
  puVar1[4] = param_4;
  FUN_108267bbc(&uStack_58);
  FUN_108267bbc(&uStack_50);
  FUN_108267bbc(&uStack_48);
  *param_1 = puVar1;
  return;
}



/* Entry: 108267b5c; end: 108267ba3;  */

undefined8 * FUN_108267b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33050;
  FUN_108267bbc(param_1 + 4);
  FUN_108267bbc(param_1 + 3);
  FUN_108267bbc(param_1 + 2);
  return param_1;
}



/* Entry: 108267ba4; end: 108267ba7;  */

undefined8 * FUN_108267ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33050;
  FUN_108267bbc(param_1 + 4);
  FUN_108267bbc(param_1 + 3);
  FUN_108267bbc(param_1 + 2);
  return param_1;
}



/* Entry: 108267ba8; end: 108267bbb;  */

void FUN_108267ba8(void)

{
  FUN_108267b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108267bbc; end: 108267bef;  */

long * FUN_108267bbc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082647c0(*param_1 + 8);
  }
  return param_1;
}



/* Entry: 108267bf0; end: 108267bff;  */

void FUN_108267bf0(int *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108267c00; end: 108267c73;  */

void FUN_108267c00(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1a0;
    __Znwm();
    FUN_108267c74();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 108267c74; end: 108267e5b;  */

undefined8 *
FUN_108267c74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  func_0x00010829ef2c();
  *puVar2 = &PTR_FUN_110a33090;
  plVar5 = puVar2 + 0x10;
  *plVar5 = 0;
  _objc_retain(param_4);
  param_1[0x11] = param_4;
  _objc_retain(param_5);
  param_1[0x13] = 0;
  param_1[0x12] = param_5;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x800000000;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  FUN_108271c4c(param_1 + 0x1b,param_1);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = param_1;
  param_1[0x28] = param_1;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0x20000;
  param_1[0x2e] = 0x100;
  *(undefined4 *)(param_1 + 0x2f) = 5;
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  lVar3 = 0x380;
  __Znwm();
  FUN_1082648b4();
  lVar4 = *plVar5;
  *plVar5 = lVar3;
  FUN_10826b65c(lVar4);
  if (*plVar5 != 0) {
    do {
      func_0x00010826b8f4();
    } while (extraout_w10 != 0);
  }
  uStack_48 = 0;
  func_0x00010828c59c(param_1 + 2);
  FUN_10826b6c8(&uStack_48);
  FUN_108266748(&uStack_50,param_1[0x12]);
  uVar1 = uStack_50;
  uStack_50 = 0;
  FUN_1082682ec(param_1 + 0x13,uVar1);
  FUN_10826b680(&uStack_50);
  return param_1;
}



/* Entry: 108267e5c; end: 108267edb;  */

undefined8 * FUN_108267e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33090;
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    FUN_108267edc(param_1);
  }
  FUN_10826afe0(param_1 + 0x28);
  func_0x00010826b05c(param_1 + 0x24);
  func_0x00010826b0c8(param_1 + 0x1b);
  FUN_10840eaf0(param_1 + 0x14);
  FUN_10826b680(param_1 + 0x13);
  _objc_release(param_1[0x12]);
  _objc_release(param_1[0x11]);
  FUN_10826b638(param_1 + 0x10);
  *param_1 = &PTR_DAT_110a35a90;
  FUN_10829efb0(param_1,0);
  FUN_1082a0044(param_1 + 0xd);
  FUN_10826b6c8(param_1 + 2);
  return param_1;
}



/* Entry: 108267edc; end: 108267f8b;  */

void FUN_108267edc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_108267fe4(param_1,0);
  FUN_1082682ec(param_1 + 0x98,0);
  while (*(int *)(param_1 + 0xd0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010840ec10(param_1 + 0xa0);
    FUN_10826b680(uVar1);
  }
  lVar2 = 0;
  for (uVar3 = 0; uVar3 < (ulong)((*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120)) / 0x18);
      uVar3 = uVar3 + 1) {
    func_0x0001082a0268(*(undefined8 *)(*(long *)(param_1 + 0x120) + lVar2));
    lVar2 = lVar2 + 0x18;
  }
  FUN_10826b08c(param_1 + 0x120);
  FUN_108272428(param_1 + 0xd8);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108267f8c; end: 108267f8f;  */

undefined8 * FUN_108267f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33090;
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    FUN_108267edc(param_1);
  }
  FUN_10826afe0(param_1 + 0x28);
  func_0x00010826b05c(param_1 + 0x24);
  func_0x00010826b0c8(param_1 + 0x1b);
  FUN_10840eaf0(param_1 + 0x14);
  FUN_10826b680(param_1 + 0x13);
  _objc_release(param_1[0x12]);
  _objc_release(param_1[0x11]);
  FUN_10826b638(param_1 + 0x10);
  *param_1 = &PTR_DAT_110a35a90;
  FUN_10829efb0(param_1,0);
  FUN_1082a0044(param_1 + 0xd);
  FUN_10826b6c8(param_1 + 2);
  return param_1;
}



/* Entry: 108267f90; end: 108267fa3;  */

void FUN_108267f90(void)

{
  FUN_108267e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108267fa4; end: 108267fd3;  */

void FUN_108267fa4(long param_1)

{
  if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
    FUN_108267edc();
    *(undefined1 *)(param_1 + 0x198) = 1;
  }
  return;
}



/* Entry: 108267fd4; end: 108267fe3;  */

undefined8 FUN_108267fd4(void)

{
  return 0;
}



/* Entry: 108267fe4; end: 10826809b;  */

long FUN_108267fe4(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w11;
  
  lVar1 = param_1[0x13];
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x2e0) & 1) == 0)) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      FUN_108268290(param_1);
      lVar1 = param_1[0x13];
    }
    if (lVar1 != 0) {
      FUN_108267124(lVar1 + 0x2e8);
    }
    lVar1 = 1;
  }
  else {
    FUN_108266f5c(lVar1,param_2 == 0);
    if ((int)lVar1 != 0) {
      plVar2 = param_1 + 0x14;
      func_0x00010840eb84();
      lVar3 = 0;
      if (param_1[0x13] != 0) {
        do {
          func_0x00010826b964();
          lVar3 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *plVar2 = lVar3;
    }
    FUN_1082682ec(param_1 + 0x13,0);
    FUN_108268290(param_1);
  }
  return lVar1;
}



/* Entry: 10826809c; end: 1082681a3;  */

undefined8 FUN_10826809c(long param_1,long param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  int extraout_w10;
  long lStack_60;
  long lStack_58;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x000108265f7c(uVar1,param_2);
  }
  FUN_1082717f4(param_2,uVar1,param_4 != 0);
  if (param_2 == 0) {
    uVar1 = 0;
    lStack_58 = 0;
  }
  else {
    do {
      func_0x00010826b8f4();
    } while (extraout_w10 != 0);
    uVar1 = 0x80;
    lStack_58 = param_2;
    __Znwm(0x80);
    lStack_58 = 0;
    lStack_60 = param_2;
    FUN_10826bc9c();
    FUN_10826b710(&lStack_60);
  }
  FUN_10826b710(&lStack_58);
  return uVar1;
}



/* Entry: 1082681a4; end: 108268207;  */

long FUN_1082681a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_28;
  
  plVar3 = (long *)(param_1 + 0x98);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    FUN_108266748(&uStack_28,*(undefined8 *)(param_1 + 0x90));
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_1082682ec(plVar3,uVar1);
    FUN_10826b680(&uStack_28);
    lVar2 = *plVar3;
  }
  return lVar2;
}



/* Entry: 108268208; end: 108268253;  */

void FUN_108268208(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x00010826bc18();
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010826bb88(uVar1);
  FUN_108264668(param_1 + 0x220,auStack_28);
  FUN_1082647e4(auStack_28);
  return;
}



/* Entry: 108268254; end: 10826828f;  */

void FUN_108268254(undefined8 param_1,long *param_2)

{
  FUN_10826bfd0(param_2);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108268284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}


