/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073c88ec; end: 1073c898f;  */

void FUN_1073c88ec(void)

{
  return;
}



/* Entry: 1073c8990; end: 1073c89eb;  */

undefined4 FUN_1073c8990(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  func_0x00010785f1f4();
  uStack_21 = 1;
  lVar1 = param_1 + 0x4a0;
  func_0x00010724e2c8(lVar1,&uStack_21);
  uStack_22 = 0;
  param_1 = param_1 + 0x7a0;
  func_0x00010724e2c8(param_1,&uStack_22);
  uVar2 = 2;
  if ((int)param_1 == 0) {
    uVar2 = (undefined4)lVar1;
  }
  return uVar2;
}



/* Entry: 1073c89ec; end: 1073c8a0b;  */

undefined * FUN_1073c89ec(ulong param_1)

{
  FUN_1073c8990();
  return (&PTR_DAT_1109abc18)[param_1 & 0xffffffff];
}



/* Entry: 1073c8a0c; end: 1073c8d07;  */

void FUN_1073c8a0c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_e8 [16];
  undefined4 auStack_d8 [6];
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_68 [6];
  
  auStack_d8[0] = 0xfe;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_DAT_110996720;
  uStack_b0 = 0;
  uStack_98 = 0xfe;
  uStack_90 = 0;
  uStack_8c = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  puVar1 = auStack_d8;
  func_0x00010729d56c(puVar1,"api",param_4);
  func_0x0001073c8e0c(*param_3);
  FUN_1073c8d08();
  auStack_68[0] = 1;
  func_0x0001073c8dc0();
  func_0x0001073c8d88();
  func_0x0001073c8dec();
  func_0x0001073c8da0(0xff);
  func_0x0001073c8dfc();
  func_0x0001073c8dd8();
  func_0x0001073c8e0c(param_3[1]);
  FUN_1073c8d08();
  auStack_68[0] = 1;
  func_0x0001073c8dc0();
  func_0x0001073c8d88();
  func_0x0001073c8dec();
  func_0x0001073c8da0(0x100);
  uStack_8c = 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  func_0x0001073c8dd8();
  func_0x0001073c8e24();
  puVar2 = puVar1 + 8;
  func_0x0001073c8e2c();
  func_0x0001073c8df4();
  *(undefined1 *)(puVar1 + 0x13) = 1;
  auStack_68[0] = 1;
  func_0x0001073c8dc0();
  func_0x0001073c8d88();
  func_0x0001073c8dec();
  func_0x0001073c8da0(0x102);
  func_0x0001073c8dfc();
  func_0x0001073c8dd8();
  func_0x0001073c8e24();
  puVar1 = puVar2 + 8;
  func_0x0001073c8e2c();
  func_0x0001073c8df4();
  *(undefined1 *)(puVar2 + 0x13) = 1;
  auStack_68[0] = 1;
  func_0x0001073c8dc0();
  func_0x0001073c8d88();
  func_0x0001073c8dec();
  func_0x0001073c8da0(0x101);
  func_0x0001073c8dfc();
  func_0x0001073c8dd8();
  func_0x0001073c8e24();
  func_0x0001073c8e2c(puVar1 + 8);
  func_0x0001073c8df4();
  *(undefined1 *)(puVar1 + 0x13) = 1;
  auStack_68[0] = 1;
  func_0x0001073c8dc0();
  FUN_10743fa9c(param_2,puVar1,auStack_68,auStack_e8,7);
  func_0x0001073c8dec();
  return;
}



/* Entry: 1073c8d08; end: 1073c8d87;  */

long FUN_1073c8d08(long param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,PTR_DAT_1131ad5a8);
  func_0x00010729d5c0(param_1 + 0x20,auStack_38,(&PTR_DAT_1131ad5c8)[param_2 & 0x27]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1073c8d88; end: 1073c8e7f;  */

void FUN_1073c8d88(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  
  func_0x00010743fe30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (unaff_x19 != 0) {
    func_0x00010743fe78();
    func_0x00010743fe70(*(undefined8 *)(extraout_x8_00 + 0x28));
  }
  func_0x00010743fe58();
  return;
}



/* Entry: 1073c8e80; end: 1073c8ef3;  */

undefined8 *
FUN_1073c8e80(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,long param_6)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_6;
  *(undefined1 *)(param_1 + 3) = param_4;
  func_0x00010724e2fc(param_1 + 4,param_6);
  func_0x0001073c9620(param_1 + 5,param_2);
  if (param_6 != 0) {
    func_0x0001073c95f4();
  }
  return param_1;
}



/* Entry: 1073c8ef4; end: 1073c8f67;  */

void FUN_1073c8ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1073c922c(param_1,1);
  uStack_48 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_3;
  FUN_1073c9440(param_1,&uStack_48);
  return;
}



/* Entry: 1073c8f68; end: 1073c8fcf;  */

undefined8 *
FUN_1073c8f68(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 *param_5,ulong param_6,ulong param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = *param_5;
  *param_5 = 0;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_6;
  *(undefined1 *)(param_1 + 3) = param_4;
  lVar1 = 0;
  if (param_7 <= param_6) {
    lVar1 = param_6 - param_7;
  }
  FUN_1073c8ef4(param_1 + 5,param_2,lVar1,param_7);
  return param_1;
}



/* Entry: 1073c8fd0; end: 1073c90b7;  */

undefined8 *
FUN_1073c8fd0(undefined8 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             long param_5,long *param_6)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  if ((undefined8 *)*param_6 == (undefined8 *)param_6[1]) {
    *param_1 = 0;
  }
  else {
    *param_1 = *(undefined8 *)*param_6;
  }
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = param_5;
  *(undefined1 *)(param_1 + 3) = param_3;
  func_0x00010724e2fc(param_1 + 4,param_5);
  plVar1 = param_1 + 5;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar2 = *param_6;
  param_1[6] = param_6[1];
  *plVar1 = lVar2;
  param_1[7] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  if (*plVar1 == param_1[6]) {
    func_0x0001073c9620(auStack_58,*param_1);
    FUN_1073c957c(plVar1,auStack_58);
    func_0x00010725b5dc(auStack_58);
  }
  if (param_5 != 0) {
    func_0x0001073c95f4();
  }
  return param_1;
}



/* Entry: 1073c90b8; end: 1073c90e7;  */

void FUN_1073c90b8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x00010725b5b0();
    func_0x0001073c8e34();
  }
  return;
}



/* Entry: 1073c90e8; end: 1073c922b;  */

int FUN_1073c90e8(long param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 8) - 1 < 0x10) {
    iVar1 = 0xb;
    switch((uint)*(byte *)(param_1 + 8)) {
    case 1:
      iVar1 = 2;
      break;
    case 2:
      goto LAB_1073c91cc;
    case 3:
      iVar1 = 0x10;
      break;
    case 4:
      iVar1 = 0x12;
      break;
    case 5:
      iVar1 = 0x14;
      break;
    case 6:
      iVar1 = 0x16;
      break;
    case 7:
      iVar1 = 0x18;
      break;
    case 8:
      iVar1 = 0x1a;
      break;
    case 9:
      iVar1 = 0x1c;
      break;
    case 10:
      iVar1 = 0x1e;
      break;
    case 0xb:
      iVar1 = 0x20;
      break;
    case 0xc:
      iVar1 = 0x22;
      break;
    case 0xd:
      iVar1 = 0x24;
      break;
    case 0xe:
      iVar1 = 0x26;
      break;
    case 0xf:
      iVar1 = 0x28;
      break;
    case 0x10:
      iVar1 = 0x2a;
    }
    if (*(char *)(param_1 + 0x18) == '\x01') {
      iVar1 = iVar1 + 1;
    }
  }
  else {
    iVar1 = 0;
  }
LAB_1073c91cc:
  return iVar1;
}



/* Entry: 1073c922c; end: 1073c92b3;  */

void FUN_1073c922c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x18) < param_2) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_1073c92b4();
      func_0x0001073c95ec();
      func_0x0001073c960c();
      plVar1 = (long *)&UNK_10f40ecb2;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1073c9354(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x0001073c9614();
    func_0x0001073c95ec();
  }
  return;
}



/* Entry: 1073c92b4; end: 1073c92c7;  */

void FUN_1073c92b4(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f40ecb2;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1073c92c8; end: 1073c9353;  */

void FUN_1073c92c8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1073c9354; end: 1073c93c3;  */

long * FUN_1073c9354(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073c93a0();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1073c93c4; end: 1073c93ef;  */

long * FUN_1073c93c4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073c941c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c93f0; end: 1073c941b;  */

long * FUN_1073c93f0(long *param_1)

{
  FUN_1073c941c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c941c; end: 1073c943f;  */

void FUN_1073c941c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073c9440; end: 1073c948b;  */

undefined8 * FUN_1073c9440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = param_1;
    FUN_1073c948c();
  }
  param_1[1] = puVar1;
  return puVar1 + -3;
}



/* Entry: 1073c948c; end: 1073c952b;  */

long FUN_1073c948c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_1073c952c(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_1073c9354(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  puStack_48[2] = param_2[2];
  puStack_48[1] = uVar4;
  *puStack_48 = uVar3;
  puStack_48 = puStack_48 + 3;
  func_0x0001073c9614();
  lVar2 = param_1[1];
  func_0x0001073c95ec();
  return lVar2;
}



/* Entry: 1073c952c; end: 1073c957b;  */

long * FUN_1073c952c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_1073c92b4();
    plVar2 = param_1;
    func_0x0001073c95b8();
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return plVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 1073c957c; end: 1073c95eb;  */

void FUN_1073c957c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x0001073c95b8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1073c95ec; end: 1073c9633;  */

undefined8 * FUN_1073c95ec(void)

{
  long in_stack_00000008;
  
  FUN_1073c941c();
  if (in_stack_00000008 != 0) {
    __ZdlPv();
  }
  return &stack0x00000008;
}



/* Entry: 1073c9634; end: 1073c9783;  */

undefined4 FUN_1073c9634(char *param_1,ulong param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 < 4) {
    if (param_2 < 2) goto LAB_1073c96b0;
    cVar1 = *param_1;
  }
  else {
    cVar1 = *param_1;
    if (cVar1 == -0x77) {
      if (((param_1[1] == 'P') && (param_1[2] == 'N')) && (param_1[3] == 'G')) {
        return 1;
      }
      goto LAB_1073c96b0;
    }
  }
  if ((cVar1 == -1) && (param_1[1] == -0x28)) {
    return 0;
  }
LAB_1073c96b0:
  pcVar2 = param_1;
  FUN_1073c9784(param_1,param_2);
  if (((ulong)pcVar2 & 1) != 0) {
    return 2;
  }
  if (0xb < param_2) {
    if (*param_1 == -0x55) {
      if ((param_1[1] == 'K') && (param_1[2] == 'T')) {
        if (param_1[3] == 'X') {
          return 4;
        }
        return 5;
      }
    }
    else if (((*param_1 == 'R') && (param_1[1] == 'I')) &&
            ((param_1[2] == 'F' &&
             ((((param_1[3] == 'F' && (param_1[8] == 'W')) && (param_1[9] == 'E')) &&
              ((param_1[10] == 'B' && (param_1[0xb] == 'P')))))))) {
      return 3;
    }
  }
  return 5;
}



/* Entry: 1073c9784; end: 1073c97c7;  */

bool FUN_1073c9784(char *param_1,ulong param_2)

{
  if ((((3 < param_2) && (*param_1 == '\x13')) && (param_1[1] == -0x55)) && (param_1[2] == -0x5f)) {
    return param_1[3] == '\\';
  }
  return false;
}



/* Entry: 1073c97c8; end: 1073c9903;  */

void FUN_1073c97c8(uint param_1)

{
  FUN_1073c9634();
                    /* WARNING: Could not recover jumptable at 0x0001073c9804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10de64b98)[param_1] * 4 + 0x1073c9808))();
  return;
}



/* Entry: 1073c9904; end: 1073c990f;  */

void FUN_1073c9904(char *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined1 auStack_70 [64];
  
  if ((((((param_2 < 0xc) || (*param_1 != 'R')) || (param_1[1] != 'I')) ||
       ((param_1[2] != 'F' || (param_1[3] != 'F')))) ||
      ((param_1[8] != 'W' || ((param_1[9] != 'E' || (param_1[10] != 'B')))))) ||
     (param_1[0xb] != 'P')) {
    func_0x0001078ba994();
    _CFDataCreateWithBytesNoCopy();
    pcStack_78 = param_1;
    if (param_1 == (char *)0x0) {
      func_0x0001078ba9c4();
    }
    else {
      _CGImageSourceCreateWithData();
      pcStack_80 = param_1;
      if (param_1 == (char *)0x0) {
        func_0x0001078ba9c4();
      }
      else {
        func_0x0001078ba9d0();
        pcStack_88 = param_1;
        if (param_1 == (char *)0x0) {
          func_0x0001078ba9c4();
        }
        else {
          func_0x0001078ba7c8(auStack_70);
          func_0x0001078ba9fc();
          func_0x00010725b5b0(auStack_70);
        }
        func_0x0001078ba548(&pcStack_88);
      }
      func_0x0001078ba56c(&pcStack_80);
    }
    func_0x0001078ba590(&pcStack_78);
  }
  else {
    _objc_autoreleasePoolPush();
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x0001078baa30();
    puVar2 = puVar1;
    func_0x00010b696b1c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x0001078ba9c4();
    }
    else {
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1020();
      func_0x0001078ba7c8(auStack_70,puVar2);
      func_0x0001078ba9fc();
      func_0x00010725b5b0(auStack_70);
    }
    func_0x0001078ba9e8();
    _objc_release(puVar1);
    _objc_autoreleasePoolPop(param_1);
  }
  return;
}



/* Entry: 1073c9910; end: 1073c9cc7;  */

void FUN_1073c9910(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  int *piStack_c8;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int *piStack_70;
  int *piStack_68;
  
  piStack_68 = (int *)0x0;
  func_0x0001078df75c(param_1,param_2,1,&piStack_68);
  piVar5 = piStack_68;
  if ((int)param_1 != 0) {
    func_0x0001073c9efc();
    return;
  }
  piStack_70 = piStack_68;
  if (*piStack_68 == 2) {
    if ((*(char *)(*(long *)(piStack_68 + 0x20) + 0xc) != -0x5a) &&
       (*(char *)(*(long *)(piStack_68 + 0x20) + 0xc) != -0x5d)) {
      iVar3 = piStack_68[0x1e];
      switch(iVar3) {
      case 0x9d:
        goto code_r0x0001073c99d8;
      case 0x9e:
        goto code_r0x0001073c9a88;
      case 0x9f:
        goto code_r0x0001073c9a74;
      case 0xa0:
        goto code_r0x0001073c9a6c;
      case 0xa1:
        goto code_r0x0001073c9a94;
      case 0xa2:
        goto code_r0x0001073c9a4c;
      case 0xa3:
        goto code_r0x0001073c9a38;
      case 0xa4:
        goto code_r0x0001073c9a30;
      case 0xa5:
        goto code_r0x0001073c9a44;
      case 0xa6:
        goto code_r0x0001073c9a54;
      case 0xa7:
        goto code_r0x0001073c9ad0;
      case 0xa8:
        goto code_r0x0001073c9abc;
      case 0xa9:
        goto code_r0x0001073c9a14;
      case 0xaa:
        goto code_r0x0001073c9a0c;
      case 0xab:
        goto code_r0x0001073c9ab4;
      case 0xac:
        goto code_r0x0001073c9ac4;
      case 0xad:
        goto code_r0x0001073c99fc;
      case 0xae:
        goto code_r0x0001073c9adc;
      case 0xaf:
        goto code_r0x0001073c9a20;
      case 0xb0:
        goto code_r0x0001073c9a60;
      case 0xb1:
        goto code_r0x0001073c9b00;
      case 0xb2:
        goto code_r0x0001073c9a80;
      case 0xb3:
        goto code_r0x0001073c9af4;
      case 0xb4:
        goto code_r0x0001073c9aa0;
      case 0xb5:
        goto code_r0x0001073c9a28;
      case 0xb6:
        goto code_r0x0001073c9ae8;
      case 0xb7:
        goto code_r0x0001073c9a04;
      case 0xb8:
        goto code_r0x0001073c9aa8;
      default:
        if (iVar3 == 0x25) goto LAB_1073c9b28;
        if (iVar3 == 0x2b) goto LAB_1073c9b1c;
      }
    }
    goto LAB_1073c9c04;
  }
  if (*piStack_68 != 1) goto LAB_1073c9c04;
  iVar3 = piStack_68[0x1f];
  switch(iVar3) {
  case 0x93b0:
code_r0x0001073c99d8:
    uVar7 = 0;
    break;
  case 0x93b1:
code_r0x0001073c9a74:
    uVar7 = 0;
    goto code_r0x0001073c9a78;
  case 0x93b2:
code_r0x0001073c9a94:
    uVar7 = 0;
    goto code_r0x0001073c9a98;
  case 0x93b3:
code_r0x0001073c9a38:
    uVar7 = 0;
    goto code_r0x0001073c9a3c;
  case 0x93b4:
code_r0x0001073c9a44:
    uVar7 = 0;
    goto code_r0x0001073c9a58;
  case 0x93b5:
code_r0x0001073c9ad0:
    uVar7 = 0;
    goto code_r0x0001073c9ad4;
  case 0x93b6:
code_r0x0001073c9a14:
    uVar7 = 0;
    goto code_r0x0001073c9a18;
  case 0x93b7:
code_r0x0001073c9ab4:
    uVar7 = 0;
    goto code_r0x0001073c9ac8;
  case 0x93b8:
code_r0x0001073c99fc:
    uVar7 = 0;
    goto code_r0x0001073c9ae0;
  case 0x93b9:
code_r0x0001073c9a20:
    uVar7 = 0;
    goto code_r0x0001073c9a64;
  case 0x93ba:
code_r0x0001073c9b00:
    uVar7 = 0;
    goto code_r0x0001073c9b04;
  case 0x93bb:
code_r0x0001073c9af4:
    uVar7 = 0;
    goto code_r0x0001073c9af8;
  case 0x93bc:
code_r0x0001073c9a28:
    uVar7 = 0;
    goto code_r0x0001073c9aec;
  case 0x93bd:
code_r0x0001073c9a04:
    uVar7 = 0;
    goto code_r0x0001073c9aac;
  case 0x93be:
  case 0x93bf:
  case 0x93c0:
  case 0x93c1:
  case 0x93c2:
  case 0x93c3:
  case 0x93c4:
  case 0x93c5:
  case 0x93c6:
  case 0x93c7:
  case 0x93c8:
  case 0x93c9:
  case 0x93ca:
  case 0x93cb:
  case 0x93cc:
  case 0x93cd:
  case 0x93ce:
  case 0x93cf:
    goto LAB_1073c9c04;
  case 0x93d0:
code_r0x0001073c9a88:
    uVar7 = 1;
    break;
  case 0x93d1:
code_r0x0001073c9a6c:
    uVar7 = 1;
code_r0x0001073c9a78:
    uVar8 = 4;
    goto LAB_1073c9b30;
  case 0x93d2:
code_r0x0001073c9a4c:
    uVar7 = 1;
code_r0x0001073c9a98:
    uVar8 = 5;
    goto LAB_1073c9b30;
  case 0x93d3:
code_r0x0001073c9a30:
    uVar7 = 1;
code_r0x0001073c9a3c:
    uVar8 = 6;
    goto LAB_1073c9b30;
  case 0x93d4:
code_r0x0001073c9a54:
    uVar7 = 1;
code_r0x0001073c9a58:
    uVar8 = 7;
    goto LAB_1073c9b30;
  case 0x93d5:
code_r0x0001073c9abc:
    uVar7 = 1;
code_r0x0001073c9ad4:
    uVar8 = 8;
    goto LAB_1073c9b30;
  case 0x93d6:
code_r0x0001073c9a0c:
    uVar7 = 1;
code_r0x0001073c9a18:
    uVar8 = 9;
    goto LAB_1073c9b30;
  case 0x93d7:
code_r0x0001073c9ac4:
    uVar7 = 1;
code_r0x0001073c9ac8:
    uVar8 = 0xc;
    goto LAB_1073c9b30;
  case 0x93d8:
code_r0x0001073c9adc:
    uVar7 = 1;
code_r0x0001073c9ae0:
    uVar8 = 10;
    goto LAB_1073c9b30;
  case 0x93d9:
code_r0x0001073c9a60:
    uVar7 = 1;
code_r0x0001073c9a64:
    uVar8 = 0xb;
    goto LAB_1073c9b30;
  case 0x93da:
code_r0x0001073c9a80:
    uVar7 = 1;
code_r0x0001073c9b04:
    uVar8 = 0xd;
    goto LAB_1073c9b30;
  case 0x93db:
code_r0x0001073c9aa0:
    uVar7 = 1;
code_r0x0001073c9af8:
    uVar8 = 0xe;
    goto LAB_1073c9b30;
  case 0x93dc:
code_r0x0001073c9ae8:
    uVar7 = 1;
code_r0x0001073c9aec:
    uVar8 = 0xf;
    goto LAB_1073c9b30;
  case 0x93dd:
code_r0x0001073c9aa8:
    uVar7 = 1;
code_r0x0001073c9aac:
    uVar8 = 0x10;
    goto LAB_1073c9b30;
  default:
    if (iVar3 == 0x8058) {
LAB_1073c9b28:
      uVar7 = 0;
      uVar8 = 1;
    }
    else {
      if (iVar3 != 0x8c43) goto LAB_1073c9c04;
LAB_1073c9b1c:
      uVar8 = 1;
      uVar7 = 1;
    }
    goto LAB_1073c9b30;
  }
  uVar8 = 3;
LAB_1073c9b30:
  if (((piStack_68[0xf] == 1) && (piStack_68[0xe] == 1)) && (piStack_68[0xc] == 2)) {
    uVar4 = piStack_68[0xd];
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar1 = *(ulong *)(piStack_68 + 0x1a);
    uVar2 = *(undefined8 *)(piStack_68 + 0x1c);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_1073c922c(&uStack_90,uVar4);
    for (uVar9 = 0; uVar4 != uVar9; uVar9 = uVar9 + 1) {
      uStack_98 = 0;
      piVar6 = piVar5;
      (**(code **)(*(long *)(piVar5 + 2) + 8))(piVar5,uVar9,0,0,&uStack_98);
      if (((int)piVar6 != 0) ||
         (piVar6 = piVar5, (**(code **)(*(long *)(piVar5 + 2) + 0x18))(piVar5,uVar9),
         uVar1 < uStack_98 || (int *)(uVar1 - uStack_98) < piVar6)) {
        func_0x0001073c9efc();
        goto LAB_1073c9c84;
      }
      uVar10 = NEON_ushl(*(undefined8 *)(piVar5 + 9),CONCAT44(-uVar9,-uVar9),4);
      uStack_d8 = NEON_umax(uVar10,0x100000001,4);
      uStack_d0 = uStack_98;
      piStack_c8 = piVar6;
      FUN_1073c9440(&uStack_90,&uStack_d8);
    }
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_e0 = uStack_80;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_1073c8fd0(&uStack_d8,uVar8,uVar7,uVar2,uVar1,&uStack_f0);
    func_0x0001073c9f24();
    func_0x00010725b5b0(&uStack_d8);
    func_0x00010725b5dc(&uStack_f0);
LAB_1073c9c84:
    func_0x00010725b5dc(&uStack_90);
  }
  else {
LAB_1073c9c04:
    func_0x0001073c9efc();
  }
  FUN_1073c9ea4(&piStack_70);
  return;
}



/* Entry: 1073c9cc8; end: 1073c9e3b;  */

void FUN_1073c9cc8(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  FUN_1073c9634();
                    /* WARNING: Could not recover jumptable at 0x0001073c9d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10de64be8)[uVar1 & 0xffffffff] * 4 + 0x1073c9d10))();
  return;
}



/* Entry: 1073c9e3c; end: 1073c9e87;  */

uint FUN_1073c9e3c(uint param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0x2a;
  pbVar2 = &UNK_10de64bf0;
  while ((pbVar2[-2] != param_1 || (pbVar2[-1] != param_2))) {
    lVar4 = lVar4 + -3;
    pbVar2 = pbVar2 + 3;
    if (lVar4 == 0) {
      uVar3 = 0;
      iVar1 = 0;
LAB_1073c9e80:
      return uVar3 | iVar1 << 8;
    }
  }
  uVar3 = (uint)*pbVar2;
  iVar1 = 1;
  goto LAB_1073c9e80;
}



/* Entry: 1073c9e88; end: 1073c9ea3;  */

void FUN_1073c9e88(long param_1)

{
  func_0x0001073c8e34();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1073c9ea4; end: 1073c9edb;  */

long * FUN_1073c9ea4(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)**(undefined8 **)(*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 1073c9edc; end: 1073c9faf;  */

void FUN_1073c9edc(void)

{
  return;
}



/* Entry: 1073c9fb0; end: 1073ca0eb;  */

ulong FUN_1073c9fb0(uint *param_1,int param_2)

{
  long lVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  ulong *puStack_38;
  ulong uStack_30;
  undefined8 **ppuStack_28;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 2) != 0)) {
    func_0x0001073ca230((ulong)*param_1 + 0x9e3779b97f4a7c15);
  }
  func_0x0001073ca230();
  lVar1 = -0x61c8864680b583ec;
  if (param_1[8] != 0xffffffff) {
    lVar1 = (ulong)param_1[8] + 0x9e3779b97f4a7c15;
  }
  uStack_30 = lVar1 + extraout_x8 * 0x1000 + (extraout_x8 >> 4) ^ extraout_x8;
  puStack_38 = &uStack_30;
  FUN_1073ca12c(param_1 + 7);
  ppuStack_28 = &puStack_38;
  uVar2 = (ulong)param_1[8];
  if (param_1[8] == 0xffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  (*(code *)(&PTR_FUN_1109abc30)[uVar2])(&ppuStack_28,param_1 + 7);
  FUN_1073ca0ec(&uStack_30,param_1 + 9);
  FUN_1073ca0ec(&uStack_30,param_1 + 10);
  FUN_1073ca0ec(&uStack_30,param_1 + 0xb);
  FUN_1073ca0ec(&uStack_30,param_1 + 0xc);
  func_0x0001073ca1f0((ulong)(byte)param_1[0xd] + 0x9e3779b97f4a7c15 + uStack_30 * 0x1000 +
                      (uStack_30 >> 4) ^ uStack_30);
  func_0x0001073ca1f0();
  func_0x0001073ca1f0();
  func_0x0001073ca1f0();
  func_0x0001073ca1f0();
  return (ulong)param_1[4] + 0x9e3779b97f4a7c15 + extraout_x8_00 * 0x1000 + (extraout_x8_00 >> 4) ^
         extraout_x8_00;
}



/* Entry: 1073ca0ec; end: 1073ca12b;  */

void FUN_1073ca0ec(ulong *param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = -0x61c8864680b583eb;
  if (*param_2 != 0.0) {
    lVar1 = (ulong)(uint)*param_2 + 0x9e3779b97f4a7c15;
  }
  uVar2 = *param_1;
  *param_1 = (uVar2 >> 4) + uVar2 * 0x1000 + lVar1 ^ uVar2;
  return;
}



/* Entry: 1073ca12c; end: 1073ca147;  */

void FUN_1073ca12c(long param_1)

{
  ulong *extraout_x8;
  ulong extraout_x9;
  ulong uVar1;
  ulong extraout_x10;
  long extraout_x11;
  
  if (*(int *)(param_1 + 4) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001073ca204();
  uVar1 = extraout_x10 ^ extraout_x9;
  uVar1 = uVar1 * 0x1000 + (uVar1 >> 4) + extraout_x11 + 1 ^ uVar1;
  *extraout_x8 = uVar1 * 0x1000 + (uVar1 >> 4) + extraout_x11 ^ uVar1;
  return;
}



/* Entry: 1073ca148; end: 1073ca29b;  */

void FUN_1073ca148(void)

{
  ulong *extraout_x8;
  ulong extraout_x9;
  ulong uVar1;
  ulong extraout_x10;
  long extraout_x11;
  
  func_0x0001073ca204();
  uVar1 = extraout_x10 ^ extraout_x9;
  uVar1 = uVar1 * 0x1000 + (uVar1 >> 4) + extraout_x11 + 1 ^ uVar1;
  *extraout_x8 = uVar1 * 0x1000 + (uVar1 >> 4) + extraout_x11 ^ uVar1;
  return;
}



/* Entry: 1073ca29c; end: 1073ca60f;  */

void FUN_1073ca29c(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar7;
  ulong uVar8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined3 uStack_98;
  undefined5 uStack_95;
  undefined3 uStack_90;
  undefined8 uStack_8d;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  uVar8 = *(ulong *)((long)param_4 + 0x13);
  uStack_90 = (undefined3)((ulong)*(undefined8 *)((long)param_4 + 0xb) >> 0x28);
  uStack_a0 = *param_4;
  uStack_98 = (undefined3)param_4[1];
  uStack_95 = (undefined5)((ulong)param_4[1] >> 0x18);
  uStack_84 = *(undefined8 *)((long)param_4 + 0x1c);
  uStack_74 = *(undefined8 *)((long)param_4 + 0x2c);
  uStack_7c = *(undefined8 *)((long)param_4 + 0x24);
  uStack_6c = *(undefined4 *)((long)param_4 + 0x34);
  uStack_68 = *(undefined2 *)(param_4 + 7);
  uStack_8d._6_1_ = (byte)(uVar8 >> 0x30);
  uStack_8d._7_1_ = (byte)(uVar8 >> 0x38);
  bVar4 = uStack_8d._6_1_ | uStack_8d._7_1_;
  puVar5 = &uStack_a0;
  uStack_8d = uVar8;
  FUN_1073c9fb0(puVar5,*(char *)(param_2 + 1) == '\0');
  puVar1 = (undefined8 *)*param_3;
  if (*(byte *)(param_3 + 1) == 0) {
    puVar1 = puVar5;
  }
  if ((bVar4 & 1) == 0) {
    puVar5 = puVar1;
  }
  if ((((*(byte *)(param_3 + 1) & 1) == 0) && ((uStack_8d & 0x1000000000000) == 0)) &&
     ((uStack_8d & 0x100000000000000) == 0)) {
    *param_3 = (long)puVar5;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((((long *)param_2[7] == (long *)0x0) || (plVar6 = *(long **)param_2[7], plVar6 == (long *)0x0)
      ) || ((**(code **)(*plVar6 + 0x10))(), (int)plVar6 == 0)) {
    puStack_48 = puVar5;
    __ZNSt3__15mutex4lockEv(param_2 + 9);
    puVar5 = param_2 + 2;
    FUN_1073ca718(puVar5,&puStack_48);
    if ((int)puVar5 == 0) {
      uVar7 = *param_2;
      if ((((long *)param_2[7] == (long *)0x0) ||
          (plVar6 = *(long **)param_2[7], plVar6 == (long *)0x0)) ||
         ((**(code **)(*plVar6 + 0x18))(), (int)plVar6 == 0)) {
        bVar3 = false;
        uStack_60 = 0;
        lStack_58 = 0;
        bVar2 = true;
      }
      else {
        uStack_60 = param_2[7];
        lStack_58 = param_2[8];
        if (lStack_58 != 0) {
          do {
            func_0x0001073cae3c();
          } while (extraout_w10_00 != 0);
        }
        bVar2 = false;
        bVar3 = true;
      }
      FUN_1073ca690(&lStack_50,uVar7,&uStack_a0);
      func_0x0001073ca648(&lStack_c0,&lStack_50);
      if (lStack_50 != 0) {
        func_0x0001073cae30();
      }
      if (bVar2) {
        func_0x0001073cae4c();
      }
      if (bVar3) {
        func_0x0001073cae4c();
      }
      func_0x0001073ca75c(param_2 + 2,&puStack_48);
      FUN_1073ca790();
    }
    else {
      plVar6 = param_2 + 2;
      func_0x0001073ca734(plVar6,&puStack_48);
      lStack_b8 = plVar6[1];
      lStack_c0 = *plVar6;
      if (plVar6[1] != 0) {
        do {
          func_0x0001073cae3c();
        } while (extraout_w10 != 0);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 9);
    func_0x0001073ca610(param_1,&lStack_c0);
    func_0x0001073cae54();
  }
  else {
    plVar6 = *(long **)param_2[7];
    if (plVar6 == (long *)0x0) {
      uStack_60 = 0;
      lStack_58 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x20))(&uStack_60,plVar6,puVar5);
    }
    func_0x0001073cae64();
    func_0x00010730b734(&uStack_60);
    if (*param_1 == 0) {
      uVar7 = *param_2;
      plVar6 = *(long **)param_2[7];
      if ((plVar6 == (long *)0x0) || ((**(code **)(*plVar6 + 0x18))(), (int)plVar6 == 0)) {
        uStack_b0 = 0;
        lStack_a8 = 0;
      }
      else {
        uStack_b0 = param_2[7];
        lStack_a8 = param_2[8];
        if (lStack_a8 != 0) {
          do {
            func_0x0001073cae3c();
          } while (extraout_w10_01 != 0);
        }
      }
      FUN_1073ca690(&lStack_c0,uVar7,&uStack_a0);
      func_0x0001073ca648(&uStack_60,&lStack_c0);
      func_0x0001073cae64();
      func_0x00010730b734(&uStack_60);
      if (lStack_c0 != 0) {
        func_0x0001073cae30();
      }
      func_0x00010725afe8(&uStack_b0);
      plVar6 = *(long **)param_2[7];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,puVar5,param_1);
      }
    }
  }
  return;
}



/* Entry: 1073ca610; end: 1073ca68f;  */

undefined8 * FUN_1073ca610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001073cae54();
  return param_1;
}



/* Entry: 1073ca690; end: 1073ca717;  */

void FUN_1073ca690(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (param_5 != 0) {
    plVar1 = (long *)(param_5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = param_4;
  lStack_30 = param_5;
  (**(code **)(*param_2 + 0xa0))(&uStack_28,param_2,param_3,&uStack_38);
  *param_1 = uStack_28;
  uStack_28 = 0;
  func_0x00010725afe8(&uStack_38);
  return;
}



/* Entry: 1073ca718; end: 1073ca78f;  */

bool FUN_1073ca718(long param_1)

{
  func_0x0001073ca824();
  return param_1 != 0;
}



/* Entry: 1073ca790; end: 1073ca7d7;  */

undefined8 * FUN_1073ca790(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001073cae3c();
    } while (extraout_w10 != 0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001073cae54();
  return param_1;
}



/* Entry: 1073ca7d8; end: 1073ca7db;  */

void FUN_1073ca7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109abc60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073ca7dc; end: 1073ca7ef;  */

void FUN_1073ca7dc(void)

{
  func_0x0001073ca814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073ca7f0; end: 1073ca95b;  */

void FUN_1073ca7f0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073ca808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 1073ca95c; end: 1073cab63;  */

undefined1  [16] FUN_1073ca95c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1073caa08;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if (plVar8[2] == uVar7) {
            uVar2 = 0;
            goto LAB_1073cab34;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_1073caa08:
  FUN_1073cab64(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x0001073cabb4(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1073cadac(aplStack_58);
  uVar2 = 1;
LAB_1073cab34:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 1073cab64; end: 1073cac7b;  */

void FUN_1073cab64(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *(undefined8 *)*param_5;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 1073cac7c; end: 1073cad77;  */

void FUN_1073cac7c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1073cad78(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1073cad90(plVar3);
    FUN_1073cad78(param_1,plVar3);
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



/* Entry: 1073cad78; end: 1073cad8f;  */

void FUN_1073cad78(long *param_1,long param_2)

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



/* Entry: 1073cad90; end: 1073cadab;  */

long FUN_1073cad90(long param_1,ulong param_2)

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
  FUN_1073cadd4();
  return param_1;
}



/* Entry: 1073cadac; end: 1073cadd3;  */

undefined8 FUN_1073cadac(undefined8 param_1)

{
  FUN_1073cadd4(param_1,0);
  return param_1;
}



/* Entry: 1073cadd4; end: 1073cadeb;  */

void FUN_1073cadd4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010730b734(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1073cadec; end: 1073cae2f;  */

void FUN_1073cadec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010730b734(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1073cae30; end: 1073cae87;  */

void FUN_1073cae30(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073cae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1073cae88; end: 1073caf13;  */

undefined8 * FUN_1073cae88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109abcb0;
  FUN_1073caf1c(param_1 + 1);
  return param_1;
}



/* Entry: 1073caf14; end: 1073caf1b;  */

undefined8 FUN_1073caf14(void)

{
  return 0;
}



/* Entry: 1073caf1c; end: 1073cafb3;  */

long * FUN_1073caf1c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1073cafb4();
  }
  return param_1;
}



/* Entry: 1073cafb4; end: 1073cafe3;  */

void FUN_1073cafb4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073cafbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 1073cafe4; end: 1073cce3f;  */

undefined * FUN_1073cafe4(ulong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uStack_180;
  
  func_0x0001073d8bcc();
  uVar1 = (int)param_1 == 0x37;
  switch(param_1 & 0xffffffff) {
  case 0:
    iVar2 = 0x136ca540;
    puVar4 = (undefined *)0x1136caa60;
    if (((bRam00000001136ca540 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caa60);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caa60;
    break;
  case 1:
    iVar2 = 0x136ca558;
    puVar4 = (undefined *)0x1136caaa8;
    if (((bRam00000001136ca558 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caaa8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caaa8;
    break;
  case 2:
    iVar2 = 0x136ca570;
    puVar4 = (undefined *)0x1136caaf0;
    if (((bRam00000001136ca570 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caaf0);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caaf0;
    break;
  case 3:
    iVar2 = 0x136ca588;
    puVar4 = (undefined *)0x1136cab38;
    if (((bRam00000001136ca588 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cab38);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cab38;
    break;
  case 4:
    iVar2 = 0x136ca598;
    puVar4 = (undefined *)0x1136cab68;
    if (((bRam00000001136ca598 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cab68);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cab68;
    break;
  case 5:
    iVar2 = 0x136ca5a8;
    puVar4 = (undefined *)0x1136cab98;
    if (((bRam00000001136ca5a8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d94fc();
    func_0x0001073d9954(0xb);
    func_0x0001073d9a1c();
    func_0x0001073d94fc();
    func_0x0001073d95b4(0x1136cab98);
    FUN_1073d813c();
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cab98;
    break;
  case 6:
    iVar2 = 0x136ca5b8;
    puVar4 = (undefined *)0x1136cabc8;
    if (((bRam00000001136ca5b8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cabc8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cabc8;
    break;
  case 7:
    iVar2 = 0x136ca5d0;
    puVar4 = (undefined *)0x1136cac10;
    if (((bRam00000001136ca5d0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cac10);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cac10;
    break;
  case 8:
    iVar2 = 0x136ca5e8;
    puVar4 = (undefined *)0x1136cac58;
    if (((bRam00000001136ca5e8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cac58);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cac58;
    break;
  case 9:
    iVar2 = 0x136ca600;
    puVar4 = (undefined *)0x1136caca0;
    if (((bRam00000001136ca600 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d94fc();
    func_0x0001073d9954(0xb);
    func_0x0001073d9a1c();
    func_0x0001073d94fc();
    func_0x0001073d90cc(0x1136caca0);
    FUN_1073d813c();
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136caca0;
    break;
  case 10:
    iVar2 = 0x136ca610;
    puVar4 = (undefined *)0x1136cacd0;
    if (((bRam00000001136ca610 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cacd0);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cacd0;
    break;
  case 0xb:
    iVar2 = 0x136ca628;
    puVar4 = (undefined *)0x1136cad18;
    if (((bRam00000001136ca628 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cad18);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cad18;
    break;
  case 0xc:
    iVar2 = 0x136ca640;
    puVar4 = (undefined *)0x1136cad60;
    if (((bRam00000001136ca640 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8fd4();
    func_0x0001073d9614(0xb);
    func_0x0001073d8e4c(0x1136cad60);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cad60;
    break;
  case 0xd:
    iVar2 = 0x136ca658;
    puVar4 = (undefined *)0x1136cada8;
    if (((bRam00000001136ca658 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d9c3c();
    func_0x0001073d8d70();
    func_0x0001073d92fc(0x1a);
    func_0x0001073d94fc();
    func_0x0001073d92c4();
    func_0x0001073d94fc();
    func_0x0001073d92b4(9);
    func_0x0001073d94fc();
    func_0x0001073d9708();
    func_0x0001073d94fc();
    func_0x0001073d9e14();
    func_0x0001073d8dac(0x1136cada8);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cada8;
    break;
  case 0xe:
    iVar2 = 0x136ca668;
    puVar4 = (undefined *)0x1136cadd8;
    if (((bRam00000001136ca668 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d9c3c();
    func_0x0001073d8d70();
    func_0x0001073d92fc(0x1a);
    func_0x0001073d94fc();
    func_0x0001073d92c4();
    func_0x0001073d94fc();
    func_0x0001073d92b4(9);
    func_0x0001073d94fc();
    func_0x0001073d9708();
    func_0x0001073d94fc();
    func_0x0001073d9e14();
    func_0x0001073d8dac(0x1136cadd8);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cadd8;
    break;
  case 0xf:
    iVar2 = 0x136ca678;
    puVar4 = (undefined *)0x1136cae08;
    if (((bRam00000001136ca678 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d9c3c();
    func_0x0001073d8d70();
    func_0x0001073d92fc(0x1a);
    func_0x0001073d94fc();
    func_0x0001073d92c4();
    func_0x0001073d94fc();
    func_0x0001073d92b4(9);
    func_0x0001073d94fc();
    func_0x0001073d9708();
    func_0x0001073d94fc();
    func_0x0001073d9e14();
    func_0x0001073d8dac(0x1136cae08);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cae08;
    break;
  case 0x10:
    iVar2 = 0x136ca688;
    puVar4 = (undefined *)0x1136cae38;
    if (((bRam00000001136ca688 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cae38);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cae38;
    break;
  case 0x11:
    iVar2 = 0x136ca6a0;
    puVar4 = (undefined *)0x1136cae80;
    if (((bRam00000001136ca6a0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cae80);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cae80;
    break;
  case 0x12:
    iVar2 = 0x136ca6b8;
    puVar4 = (undefined *)0x1136caec8;
    if (((bRam00000001136ca6b8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caec8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caec8;
    break;
  case 0x13:
    iVar2 = 0x136ca6d0;
    puVar4 = (undefined *)0x1136caf10;
    if (((bRam00000001136ca6d0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caf10);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caf10;
    break;
  case 0x14:
    iVar2 = 0x136ca6e8;
    puVar4 = (undefined *)0x1136caf58;
    if (((bRam00000001136ca6e8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136caf58);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136caf58;
    break;
  case 0x15:
    iVar2 = 0x136ca700;
    puVar4 = (undefined *)0x1136cafa0;
    if (((bRam00000001136ca700 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cafa0);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cafa0;
    break;
  case 0x16:
    iVar2 = 0x136ca718;
    puVar4 = (undefined *)0x1136cafe8;
    if (((bRam00000001136ca718 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cafe8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cafe8;
    break;
  case 0x17:
    iVar2 = 0x136ca730;
    puVar4 = (undefined *)0x1136cb030;
    if (((bRam00000001136ca730 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d94fc();
    func_0x0001073d9a1c();
    func_0x0001073d94fc();
    func_0x0001073d90cc(0x1136cb030);
    FUN_1073d813c();
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb030;
    break;
  case 0x18:
    iVar2 = 0x136ca748;
    puVar4 = (undefined *)0x1136cb078;
    if (((bRam00000001136ca748 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d94fc();
    func_0x0001073d9a1c();
    func_0x0001073d94fc();
    func_0x0001073d90cc(0x1136cb078);
    FUN_1073d813c();
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb078;
    break;
  case 0x19:
    iVar2 = 0x136ca760;
    puVar4 = (undefined *)0x1136cb0c0;
    if (((bRam00000001136ca760 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d91cc();
    func_0x0001073d98bc();
    func_0x0001073d8e3c(0x1136cb0c0);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb0c0;
    break;
  case 0x1a:
    iVar2 = 0x136ca778;
    puVar4 = (undefined *)0x1136cb108;
    if (((bRam00000001136ca778 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d91cc();
    func_0x0001073d98bc();
    func_0x0001073d8e3c(0x1136cb108);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb108;
    break;
  case 0x1b:
    iVar2 = 0x136ca790;
    puVar4 = (undefined *)0x1136cb150;
    if (((bRam00000001136ca790 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d91cc();
    func_0x0001073d98bc();
    func_0x0001073d8e3c(0x1136cb150);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb150;
    break;
  case 0x1c:
    iVar2 = 0x136ca7a8;
    puVar4 = (undefined *)0x1136cb198;
    if (((bRam00000001136ca7a8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d91cc();
    func_0x0001073d98bc();
    func_0x0001073d8e3c(0x1136cb198);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb198;
    break;
  case 0x1d:
    iVar2 = 0x136ca7c0;
    puVar4 = (undefined *)0x1136cb1e0;
    if (((bRam00000001136ca7c0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8d70();
    func_0x0001073d8ee0();
    func_0x0001073d91cc();
    func_0x0001073d98bc();
    func_0x0001073d8e3c(0x1136cb1e0);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb1e0;
    break;
  case 0x1e:
    iVar2 = 0x136ca7d8;
    puVar4 = (undefined *)0x1136cb228;
    if (((bRam00000001136ca7d8 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d9650();
    func_0x0001073d8e3c(0x1136cb228);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb228;
    break;
  case 0x1f:
    iVar2 = 0x136ca7f0;
    puVar4 = (undefined *)0x1136cb270;
    if (((bRam00000001136ca7f0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d977c();
    func_0x0001073d8d70();
    func_0x0001073d9650();
    func_0x0001073d8e3c(0x1136cb270);
    do {
      func_0x0001073d9620();
      func_0x0001073d9638();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb270;
    break;
  case 0x20:
    iVar2 = 0x136ca808;
    puVar4 = (undefined *)0x1136cb2b8;
    if (((bRam00000001136ca808 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cb2b8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cb2b8;
    break;
  case 0x21:
    iVar2 = 0x136ca820;
    puVar4 = (undefined *)0x1136cb300;
    if (((bRam00000001136ca820 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cb300);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cb300;
    break;
  case 0x22:
    iVar2 = 0x136ca838;
    puVar4 = (undefined *)0x1136cb348;
    if (((bRam00000001136ca838 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cb348);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cb348;
    break;
  case 0x23:
    iVar2 = 0x136ca850;
    puVar4 = (undefined *)0x1136cb390;
    if (((bRam00000001136ca850 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cb390);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cb390;
    break;
  case 0x24:
    iVar2 = 0x136ca868;
    puVar4 = (undefined *)0x1136cb3d8;
    if (((bRam00000001136ca868 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8c24();
    func_0x0001073d8ee0();
    func_0x0001073d8e4c(0x1136cb3d8);
    func_0x0001073d94dc();
    puVar4 = (undefined *)0x1136cb3d8;
    break;
  case 0x25:
    iVar2 = 0x136ca880;
    puVar4 = (undefined *)0x1136cb420;
    if (((bRam00000001136ca880 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8f44();
    func_0x0001073d94b8();
    func_0x0001073d91dc();
    func_0x0001073d92c4();
    func_0x0001073d919c();
    func_0x0001073d92b4(0xb);
    func_0x0001073d918c();
    func_0x0001073d8e70(0x1b);
    func_0x0001073d917c();
    func_0x0001073d9494();
    func_0x0001073d8dac(0x1136cb420);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb420;
    break;
  case 0x26:
    iVar2 = 0x136ca898;
    puVar4 = (undefined *)0x1136cb468;
    if (((bRam00000001136ca898 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8f44();
    func_0x0001073d94b8();
    func_0x0001073d91dc();
    func_0x0001073d92c4();
    func_0x0001073d919c();
    func_0x0001073d92b4(0xb);
    func_0x0001073d918c();
    func_0x0001073d8e70(0x1b);
    func_0x0001073d917c();
    func_0x0001073d9494();
    func_0x0001073d8dac(0x1136cb468);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb468;
    break;
  case 0x27:
    iVar2 = 0x136ca8b0;
    puVar4 = (undefined *)0x1136cb4b0;
    if (((bRam00000001136ca8b0 & 1) != 0) || (func_0x0001073d95dc(), iVar2 == 0))
    goto LAB_1073cc5dc;
    func_0x0001073d8f44();
    func_0x0001073d94b8();
    func_0x0001073d91dc();
    func_0x0001073d92c4();
    func_0x0001073d919c();
    func_0x0001073d92b4(0xb);
    func_0x0001073d918c();
    func_0x0001073d8e70(0x1b);
    func_0x0001073d917c();
    func_0x0001073d9494();
    func_0x0001073d8dac(0x1136cb4b0);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb4b0;
    break;
  case 0x28:
    iVar2 = 0x136ca8c8;
    puVar4 = (undefined *)0x1136cb4f8;
    if (((bRam00000001136ca8c8 & 1) != 0) ||
       (func_0x0001073d95dc(), puVar4 = (undefined *)0x1136cb4f8, iVar2 == 0)) goto LAB_1073cc5dc;
    func_0x0001073d9c3c();
    func_0x0001073d8d70();
    func_0x0001073d92fc(0x1a);
    func_0x0001073d94fc();
    func_0x0001073d92c4();
    func_0x0001073d94fc();
    func_0x0001073d92b4(0x10d);
    func_0x0001073d94fc();
    func_0x0001073d8e70(0x10e);
    func_0x0001073d94fc();
    func_0x0001073da0c8();
    func_0x0001073d8dac(0x1136cb4f8);
    do {
      func_0x0001073d9514();
      func_0x0001073d9664();
    } while (!(bool)uVar1);
    puVar4 = (undefined *)0x1136cb4f8;
    break;
  case 0x29:
    if ((bRam00000001136ca8e0 & 1) == 0) {
      iVar2 = 0x136ca8e0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9c3c();
        func_0x0001073d8d70();
        func_0x0001073d92fc(0x1a);
        func_0x0001073d94fc();
        func_0x0001073d92c4();
        func_0x0001073d94fc();
        func_0x0001073d92b4(0x10d);
        func_0x0001073d94fc();
        func_0x0001073d8e70(0x10e);
        func_0x0001073d94fc();
        func_0x0001073da0c8();
        func_0x0001073d8dac(0x1136cb540);
        do {
          func_0x0001073d9514();
          func_0x0001073d9664();
        } while (!(bool)uVar1);
        puVar4 = (undefined *)0x1136cb540;
        uStack_180 = 0x1136ca8e0;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb540;
    goto LAB_1073cc5dc;
  case 0x2a:
    if ((bRam00000001136ca8f8 & 1) == 0) {
      iVar2 = 0x136ca8f8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb588);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb588;
        uStack_180 = 0x1136ca8f8;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb588;
    goto LAB_1073cc5dc;
  case 0x2b:
    if ((bRam00000001136ca910 & 1) == 0) {
      iVar2 = 0x136ca910;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb5d0);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb5d0;
        uStack_180 = 0x1136ca910;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb5d0;
    goto LAB_1073cc5dc;
  case 0x2c:
    if ((bRam00000001136ca928 & 1) == 0) {
      iVar2 = 0x136ca928;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb618);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb618;
        uStack_180 = 0x1136ca928;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb618;
    goto LAB_1073cc5dc;
  case 0x2d:
    if ((bRam00000001136ca938 & 1) == 0) {
      iVar2 = 0x136ca938;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb648);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb648;
        uStack_180 = 0x1136ca938;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb648;
    goto LAB_1073cc5dc;
  case 0x2e:
    if ((bRam00000001136ca948 & 1) == 0) {
      iVar2 = 0x136ca948;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8d70();
        func_0x0001073d9614(4);
        func_0x0001073d9650();
        func_0x0001073d9954(0x18);
        func_0x0001073d8e3c(0x1136cb678);
        do {
          func_0x0001073d9620();
          func_0x0001073d9638();
        } while (!(bool)uVar1);
        puVar4 = (undefined *)0x1136cb678;
        uStack_180 = 0x1136ca948;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb678;
    goto LAB_1073cc5dc;
  case 0x2f:
    if ((bRam00000001136ca960 & 1) == 0) {
      iVar2 = 0x136ca960;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8d70();
        func_0x0001073d9614(4);
        func_0x0001073d9650();
        func_0x0001073d9954(0x18);
        func_0x0001073d8e3c(0x1136cb6c0);
        do {
          func_0x0001073d9620();
          func_0x0001073d9638();
        } while (!(bool)uVar1);
        puVar4 = (undefined *)0x1136cb6c0;
        uStack_180 = 0x1136ca960;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb6c0;
    goto LAB_1073cc5dc;
  case 0x30:
    if ((bRam00000001136ca978 & 1) == 0) {
      iVar2 = 0x136ca978;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb708);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb708;
        uStack_180 = 0x1136ca978;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb708;
    goto LAB_1073cc5dc;
  case 0x31:
    if ((bRam00000001136ca988 & 1) == 0) {
      iVar2 = 0x136ca988;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9004();
        func_0x0001073d9614(10);
        func_0x0001073d8e4c(0x1136cb738);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb738;
        uStack_180 = 0x1136ca988;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb738;
    goto LAB_1073cc5dc;
  case 0x32:
    if ((bRam00000001136ca998 & 1) == 0) {
      iVar2 = 0x136ca998;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9c3c();
        func_0x0001073d94d4();
        func_0x0001073d9614(0x1a);
        func_0x0001073d8e4c(0x1136cb768);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb768;
        uStack_180 = 0x1136ca998;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb768;
    goto LAB_1073cc5dc;
  case 0x33:
    if ((bRam00000001136ca9b0 & 1) == 0) {
      iVar2 = 0x136ca9b0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9c3c();
        func_0x0001073d94d4();
        func_0x0001073d9614(0x1a);
        func_0x0001073d8e4c(0x1136cb7b0);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb7b0;
        uStack_180 = 0x1136ca9b0;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb7b0;
    goto LAB_1073cc5dc;
  case 0x34:
    if ((bRam00000001136ca9c8 & 1) == 0) {
      iVar2 = 0x136ca9c8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8c24();
        func_0x0001073d8ee0();
        func_0x0001073d8e4c(0x1136cb7f8);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb7f8;
        uStack_180 = 0x1136ca9c8;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb7f8;
    goto LAB_1073cc5dc;
  case 0x35:
    if ((bRam00000001136ca9d8 & 1) == 0) {
      iVar2 = 0x136ca9d8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8c24();
        func_0x0001073d8ee0();
        func_0x0001073d8e4c(0x1136cb828);
        func_0x0001073d94dc();
        puVar4 = (undefined *)0x1136cb828;
        uStack_180 = 0x1136ca9d8;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb828;
    goto LAB_1073cc5dc;
  case 0x36:
    if ((bRam00000001136ca9e8 & 1) == 0) {
      iVar2 = 0x136ca9e8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8f44();
        func_0x0001073d94b8();
        func_0x0001073d91dc();
        func_0x0001073d92c4();
        func_0x0001073d919c();
        func_0x0001073d92b4(0xb);
        func_0x0001073d918c();
        func_0x0001073d8e70(0x1b);
        func_0x0001073d917c();
        func_0x0001073d9494();
        func_0x0001073d8dac(0x1136cb858);
        do {
          func_0x0001073d9514();
          func_0x0001073d9664();
        } while (!(bool)uVar1);
        puVar4 = (undefined *)0x1136cb858;
        uStack_180 = 0x1136ca9e8;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb858;
    goto LAB_1073cc5dc;
  case 0x37:
    if ((bRam00000001136caa00 & 1) == 0) {
      iVar2 = 0x136caa00;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8f44();
        func_0x0001073d94b8();
        func_0x0001073d91dc();
        func_0x0001073d92c4();
        func_0x0001073d919c();
        func_0x0001073d92b4(0xb);
        func_0x0001073d918c();
        func_0x0001073d8e70(0x1b);
        func_0x0001073d917c();
        func_0x0001073d9494();
        func_0x0001073d8dac(0x1136cb8a0);
        do {
          func_0x0001073d9514();
          func_0x0001073d9664();
        } while (!(bool)uVar1);
        puVar4 = (undefined *)0x1136cb8a0;
        uStack_180 = 0x1136caa00;
        break;
      }
    }
    puVar4 = (undefined *)0x1136cb8a0;
    goto LAB_1073cc5dc;
  default:
    puVar4 = (undefined *)0x1136caa18;
    goto LAB_1073cc5dc;
  }
  ___cxa_guard_release(uStack_180);
LAB_1073cc5dc:
  func_0x0001073d8b8c();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001073d8d7c();
    uVar3 = 0x136ca9b0;
    ___cxa_guard_abort();
    func_0x0001073d95e4();
    switch(uVar3) {
    case 0:
      FUN_1073cd1ac();
      puVar4 = (undefined *)0x113822350;
      break;
    case 1:
      FUN_1073cd464();
      puVar4 = (undefined *)0x113822368;
      break;
    case 2:
      puVar4 = &UNK_10de64f18;
      break;
    case 3:
      FUN_1073cd8f8();
      puVar4 = (undefined *)0x113822398;
      break;
    case 4:
      puVar4 = &UNK_10de64f90;
      break;
    case 5:
      FUN_1073cda44();
      puVar4 = (undefined *)0x1138223c8;
      break;
    case 6:
      FUN_1073cdbfc();
      puVar4 = (undefined *)0x1138223e0;
      break;
    case 7:
      FUN_1073cdd70();
      puVar4 = (undefined *)0x1138223f8;
      break;
    case 8:
      FUN_1073cde30();
      puVar4 = (undefined *)0x113822418;
      break;
    case 9:
      puVar4 = &UNK_10de650b0;
      break;
    case 10:
      puVar4 = &UNK_10de650f8;
      break;
    case 0xb:
      puVar4 = &UNK_10de65128;
      break;
    case 0xc:
      puVar4 = &UNK_10de65158;
      break;
    case 0xd:
      FUN_1073cdf24();
      puVar4 = (undefined *)0x1138224b8;
      break;
    case 0xe:
      FUN_1073ce098();
      puVar4 = (undefined *)0x1138224d0;
      break;
    case 0xf:
      puVar4 = &UNK_10de65218;
      break;
    case 0x10:
      FUN_1073ce224();
      puVar4 = (undefined *)0x113822508;
      break;
    case 0x11:
      FUN_1073ce378();
      puVar4 = (undefined *)0x113822520;
      break;
    case 0x12:
      FUN_1073ce5e0();
      puVar4 = (undefined *)0x113822558;
      break;
    case 0x13:
      FUN_1073ce8c8();
      puVar4 = (undefined *)0x113822590;
      break;
    case 0x14:
      FUN_1073cebe8();
      puVar4 = (undefined *)0x1138225c0;
      break;
    case 0x15:
      puVar4 = &UNK_10de652f0;
      break;
    case 0x16:
      puVar4 = &UNK_10de65308;
      break;
    case 0x17:
      FUN_1073cef58();
      puVar4 = (undefined *)0x113822658;
      break;
    case 0x18:
      puVar4 = &UNK_10de65338;
      break;
    case 0x19:
      FUN_1073cf2c4();
      puVar4 = (undefined *)0x1138226b8;
      break;
    case 0x1a:
      FUN_1073cf4f8();
      puVar4 = (undefined *)0x1138226e8;
      break;
    case 0x1b:
      FUN_1073cf72c();
      puVar4 = (undefined *)0x113822718;
      break;
    case 0x1c:
      FUN_1073cfa20();
      puVar4 = (undefined *)0x113822748;
      break;
    case 0x1d:
      puVar4 = &UNK_10de653b0;
      break;
    case 0x1e:
      FUN_1073cfd1c();
      puVar4 = (undefined *)0x1138227a8;
      break;
    case 0x1f:
      puVar4 = &UNK_10de653f8;
      break;
    case 0x20:
      FUN_1073cff80();
      puVar4 = (undefined *)0x1138227e0;
      break;
    case 0x21:
      FUN_1073d0064();
      puVar4 = (undefined *)0x113822800;
      break;
    case 0x22:
      FUN_1073d025c();
      puVar4 = (undefined *)0x113822818;
      break;
    case 0x23:
      FUN_1073d03ac();
      puVar4 = (undefined *)0x113822830;
      break;
    case 0x24:
      FUN_1073d0530();
      puVar4 = (undefined *)0x113822848;
      break;
    case 0x25:
      FUN_1073d06b4();
      puVar4 = (undefined *)0x113822860;
      break;
    case 0x26:
      FUN_1073d0848();
      puVar4 = (undefined *)0x113822898;
      break;
    case 0x27:
      puVar4 = &UNK_10de65548;
      break;
    case 0x28:
      FUN_1073d0a94();
      puVar4 = (undefined *)0x113822900;
      break;
    case 0x29:
      puVar4 = &UNK_10de65590;
      break;
    case 0x2a:
      FUN_1073d104c();
      puVar4 = (undefined *)0x113822930;
      break;
    case 0x2b:
      puVar4 = &UNK_10de655f0;
      break;
    case 0x2c:
      FUN_1073d113c();
      puVar4 = (undefined *)0x113822970;
      break;
    case 0x2d:
      puVar4 = &UNK_10de65668;
      break;
    case 0x2e:
      FUN_1073d122c();
      puVar4 = (undefined *)0x1138229b0;
      break;
    case 0x2f:
      puVar4 = &UNK_10de656e0;
      break;
    case 0x30:
      FUN_1073d1428();
      puVar4 = (undefined *)0x1138229e8;
      break;
    case 0x31:
      puVar4 = &UNK_10de65758;
      break;
    case 0x32:
      FUN_1073d15a0();
      puVar4 = (undefined *)0x113822a20;
      break;
    case 0x33:
      puVar4 = &UNK_10de657d0;
      break;
    case 0x34:
      FUN_1073d1660();
      puVar4 = (undefined *)0x113822a60;
      break;
    case 0x35:
      puVar4 = &UNK_10de65848;
      break;
    case 0x36:
      FUN_1073d1744();
      puVar4 = (undefined *)0x113822aa0;
      break;
    case 0x37:
      FUN_1073d1920();
      puVar4 = (undefined *)0x113822ad0;
      break;
    default:
      puVar4 = (undefined *)0x113822308;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1073cce40; end: 1073cd1ab;  */

undefined * FUN_1073cce40(undefined4 param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    FUN_1073cd1ac();
    puVar1 = (undefined *)0x113822350;
    break;
  case 1:
    FUN_1073cd464();
    puVar1 = (undefined *)0x113822368;
    break;
  case 2:
    puVar1 = &UNK_10de64f18;
    break;
  case 3:
    FUN_1073cd8f8();
    puVar1 = (undefined *)0x113822398;
    break;
  case 4:
    puVar1 = &UNK_10de64f90;
    break;
  case 5:
    FUN_1073cda44();
    puVar1 = (undefined *)0x1138223c8;
    break;
  case 6:
    FUN_1073cdbfc();
    puVar1 = (undefined *)0x1138223e0;
    break;
  case 7:
    FUN_1073cdd70();
    puVar1 = (undefined *)0x1138223f8;
    break;
  case 8:
    FUN_1073cde30();
    puVar1 = (undefined *)0x113822418;
    break;
  case 9:
    puVar1 = &UNK_10de650b0;
    break;
  case 10:
    puVar1 = &UNK_10de650f8;
    break;
  case 0xb:
    puVar1 = &UNK_10de65128;
    break;
  case 0xc:
    puVar1 = &UNK_10de65158;
    break;
  case 0xd:
    FUN_1073cdf24();
    puVar1 = (undefined *)0x1138224b8;
    break;
  case 0xe:
    FUN_1073ce098();
    puVar1 = (undefined *)0x1138224d0;
    break;
  case 0xf:
    puVar1 = &UNK_10de65218;
    break;
  case 0x10:
    FUN_1073ce224();
    puVar1 = (undefined *)0x113822508;
    break;
  case 0x11:
    FUN_1073ce378();
    puVar1 = (undefined *)0x113822520;
    break;
  case 0x12:
    FUN_1073ce5e0();
    puVar1 = (undefined *)0x113822558;
    break;
  case 0x13:
    FUN_1073ce8c8();
    puVar1 = (undefined *)0x113822590;
    break;
  case 0x14:
    FUN_1073cebe8();
    puVar1 = (undefined *)0x1138225c0;
    break;
  case 0x15:
    puVar1 = &UNK_10de652f0;
    break;
  case 0x16:
    puVar1 = &UNK_10de65308;
    break;
  case 0x17:
    FUN_1073cef58();
    puVar1 = (undefined *)0x113822658;
    break;
  case 0x18:
    puVar1 = &UNK_10de65338;
    break;
  case 0x19:
    FUN_1073cf2c4();
    puVar1 = (undefined *)0x1138226b8;
    break;
  case 0x1a:
    FUN_1073cf4f8();
    puVar1 = (undefined *)0x1138226e8;
    break;
  case 0x1b:
    FUN_1073cf72c();
    puVar1 = (undefined *)0x113822718;
    break;
  case 0x1c:
    FUN_1073cfa20();
    puVar1 = (undefined *)0x113822748;
    break;
  case 0x1d:
    puVar1 = &UNK_10de653b0;
    break;
  case 0x1e:
    FUN_1073cfd1c();
    puVar1 = (undefined *)0x1138227a8;
    break;
  case 0x1f:
    puVar1 = &UNK_10de653f8;
    break;
  case 0x20:
    FUN_1073cff80();
    puVar1 = (undefined *)0x1138227e0;
    break;
  case 0x21:
    FUN_1073d0064();
    puVar1 = (undefined *)0x113822800;
    break;
  case 0x22:
    FUN_1073d025c();
    puVar1 = (undefined *)0x113822818;
    break;
  case 0x23:
    FUN_1073d03ac();
    puVar1 = (undefined *)0x113822830;
    break;
  case 0x24:
    FUN_1073d0530();
    puVar1 = (undefined *)0x113822848;
    break;
  case 0x25:
    FUN_1073d06b4();
    puVar1 = (undefined *)0x113822860;
    break;
  case 0x26:
    FUN_1073d0848();
    puVar1 = (undefined *)0x113822898;
    break;
  case 0x27:
    puVar1 = &UNK_10de65548;
    break;
  case 0x28:
    FUN_1073d0a94();
    puVar1 = (undefined *)0x113822900;
    break;
  case 0x29:
    puVar1 = &UNK_10de65590;
    break;
  case 0x2a:
    FUN_1073d104c();
    puVar1 = (undefined *)0x113822930;
    break;
  case 0x2b:
    puVar1 = &UNK_10de655f0;
    break;
  case 0x2c:
    FUN_1073d113c();
    puVar1 = (undefined *)0x113822970;
    break;
  case 0x2d:
    puVar1 = &UNK_10de65668;
    break;
  case 0x2e:
    FUN_1073d122c();
    puVar1 = (undefined *)0x1138229b0;
    break;
  case 0x2f:
    puVar1 = &UNK_10de656e0;
    break;
  case 0x30:
    FUN_1073d1428();
    puVar1 = (undefined *)0x1138229e8;
    break;
  case 0x31:
    puVar1 = &UNK_10de65758;
    break;
  case 0x32:
    FUN_1073d15a0();
    puVar1 = (undefined *)0x113822a20;
    break;
  case 0x33:
    puVar1 = &UNK_10de657d0;
    break;
  case 0x34:
    FUN_1073d1660();
    puVar1 = (undefined *)0x113822a60;
    break;
  case 0x35:
    puVar1 = &UNK_10de65848;
    break;
  case 0x36:
    FUN_1073d1744();
    puVar1 = (undefined *)0x113822aa0;
    break;
  case 0x37:
    FUN_1073d1920();
    puVar1 = (undefined *)0x113822ad0;
    break;
  default:
    puVar1 = (undefined *)0x113822308;
  }
  return puVar1;
}



/* Entry: 1073cd1ac; end: 1073cd463;  */

/* WARNING: Removing unreachable block (ram,0x0001073cd3f4) */
/* WARNING: Removing unreachable block (ram,0x0001073cd44c) */

undefined8 FUN_1073cd1ac(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_590 [416];
  undefined1 uStack_3f0;
  undefined1 uStack_318;
  undefined1 uStack_2d0;
  undefined2 uStack_2c8;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined2 uStack_280;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3b0 & 1) == 0) {
    iVar1 = 0x136ca3b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d9064();
      func_0x0001073d9294();
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d8e88();
      func_0x0001073d8c00();
      func_0x0001073d9fe0();
      func_0x0001073d9348();
      func_0x0001073d8bf0();
      func_0x0001073d9f8c(7);
      func_0x0001073d9888(0xff04);
      func_0x0001073d8be0();
      func_0x0001073d9e04();
      func_0x0001073d9f80(0xc05);
      func_0x0001073d8d0c();
      uStack_3f0 = 7;
      func_0x0001073d9274(0xff06);
      func_0x0001073d9338();
      func_0x0001073d9dd4(4);
      func_0x0001073d99f8(0xff);
      func_0x0001073d9328();
      func_0x0001073d96dc(0x1ff);
      func_0x0001073d94cc();
      uStack_318 = 2;
      func_0x0001073d9ca8(0x2ff);
      func_0x0001073d8cbc();
      uStack_2d0 = 4;
      uStack_2c8 = 0x3ff;
      func_0x0001073d8cac();
      uStack_288 = 4;
      uStack_284 = 1;
      uStack_280 = 0x4ff;
      func_0x0001073d8c9c();
      uStack_240 = 4;
      uStack_23c = 1;
      func_0x0001073d96bc(0x5ff);
      func_0x0001073d8c8c();
      uStack_1f8 = 6;
      uStack_1f4 = 1;
      func_0x0001073d9c80(0x6ff);
      func_0x0001073d8c7c();
      uStack_1b0 = 1;
      uStack_1ac = 1;
      func_0x0001073d9524(0x7ff);
      func_0x0001073d8c6c();
      uStack_168 = 7;
      uStack_164 = 1;
      func_0x0001073d9c74(0x8ff);
      func_0x0001073d8cfc();
      uStack_120 = 1;
      uStack_11c = 1;
      func_0x0001073d95c4(0x9ff);
      func_0x0001073d8de4();
      func_0x0001073da15c(3);
      func_0x0001073d9c48(0xaff);
      func_0x0001073d8d4c();
      uStack_90 = 6;
      uStack_8c = 1;
      uStack_88 = 0xbff;
      func_0x0001073d8cec(auStack_590);
      uStack_48 = 1;
      uStack_44 = 1;
      uStack_40 = 0xdff;
      func_0x0001073d983c(0x113822350);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3b0);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822350;
}



/* Entry: 1073cd464; end: 1073cd8f7;  */

/* WARNING: Removing unreachable block (ram,0x0001073cd858) */
/* WARNING: Removing unreachable block (ram,0x0001073cd8e0) */

undefined8 FUN_1073cd464(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_8f0 [128];
  undefined1 uStack_870;
  undefined1 uStack_828;
  undefined1 uStack_7e0;
  undefined4 uStack_7dc;
  undefined1 uStack_798;
  undefined4 uStack_794;
  undefined1 uStack_750;
  undefined4 uStack_74c;
  undefined1 uStack_708;
  undefined4 uStack_704;
  undefined1 uStack_6c0;
  undefined4 uStack_6bc;
  undefined1 uStack_678;
  undefined4 uStack_674;
  undefined1 uStack_630;
  undefined4 uStack_62c;
  undefined1 uStack_558;
  undefined4 uStack_554;
  undefined1 uStack_510;
  undefined4 uStack_50c;
  undefined2 uStack_508;
  undefined1 uStack_4c8;
  undefined4 uStack_4c4;
  undefined2 uStack_4c0;
  undefined1 uStack_480;
  undefined4 uStack_47c;
  undefined1 uStack_438;
  undefined4 uStack_434;
  undefined1 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined2 uStack_280;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 uStack_1f0;
  undefined1 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3b8 & 1) == 0) {
    iVar1 = 0x136ca3b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d8ccc();
      func_0x0001073d94cc();
      uStack_870 = 2;
      func_0x0001073d8e88();
      func_0x0001073d94cc();
      uStack_828 = 2;
      func_0x0001073d9348();
      func_0x0001073d94cc();
      uStack_7e0 = 2;
      uStack_7dc = 1;
      func_0x0001073d9888(0xff04);
      func_0x0001073d94cc();
      uStack_798 = 2;
      uStack_794 = 1;
      func_0x0001073d9f80(0xff05);
      func_0x0001073d94cc();
      uStack_750 = 1;
      uStack_74c = 1;
      func_0x0001073d9274(0xff06);
      func_0x0001073d94cc();
      uStack_708 = 1;
      uStack_704 = 1;
      func_0x0001073d99f8(0xff07);
      func_0x0001073d94cc();
      uStack_6c0 = 1;
      uStack_6bc = 1;
      func_0x0001073d96dc(0xff08);
      func_0x0001073d8d1c();
      uStack_678 = 7;
      uStack_674 = 1;
      func_0x0001073d9ca8(0xff09);
      func_0x0001073d8c00();
      uStack_630 = 4;
      uStack_62c = 1;
      func_0x0001073d9534(0xff0a);
      func_0x0001073d8bf0();
      func_0x0001073d9e44();
      func_0x0001073d9bcc(0xff0b);
      func_0x0001073d8be0();
      func_0x0001073da150();
      func_0x0001073d96bc(0x110c);
      func_0x0001073d8d0c();
      uStack_558 = 7;
      uStack_554 = 1;
      func_0x0001073d9c80(0xff0d);
      func_0x0001073d94cc();
      uStack_510 = 2;
      uStack_50c = 1;
      uStack_508 = 0xff;
      func_0x0001073d94cc();
      uStack_4c8 = 2;
      uStack_4c4 = 1;
      uStack_4c0 = 0x1ff;
      func_0x0001073d94cc();
      uStack_480 = 2;
      uStack_47c = 1;
      func_0x0001073d95c4(0x2ff);
      func_0x0001073d94cc();
      uStack_438 = 2;
      uStack_434 = 1;
      func_0x0001073d9c48(0x3ff);
      func_0x0001073d8ea8();
      uStack_3f0 = 2;
      uStack_3ec = 1;
      func_0x0001073d9944(0x4ff);
      func_0x0001073d94cc();
      uStack_3a8 = 1;
      uStack_3a4 = 1;
      func_0x0001073da04c(0x5ff);
      func_0x0001073d9328();
      func_0x0001073d9ff8();
      func_0x0001073d9904(0x6ff);
      func_0x0001073d94cc();
      uStack_318 = 2;
      uStack_314 = 1;
      func_0x0001073d9fec(0x7ff);
      func_0x0001073d8cbc();
      uStack_2d0 = 4;
      uStack_2cc = 1;
      uStack_2c8 = 0x8ff;
      func_0x0001073d8cac();
      uStack_288 = 4;
      uStack_284 = 1;
      uStack_280 = 0x9ff;
      func_0x0001073d8c9c();
      uStack_240 = 4;
      uStack_23c = 1;
      uStack_238 = 0xaff;
      func_0x0001073d8c8c();
      uStack_1f8 = 6;
      uStack_1f4 = 1;
      uStack_1f0 = 0xbff;
      func_0x0001073d8c7c();
      uStack_1b0 = 1;
      uStack_1ac = 1;
      uStack_1a8 = 0xcff;
      func_0x0001073d8c6c();
      uStack_168 = 7;
      uStack_164 = 1;
      uStack_160 = 0xdff;
      func_0x0001073d8cfc();
      uStack_120 = 1;
      uStack_11c = 1;
      uStack_118 = 0xeff;
      func_0x0001073d8de4();
      uStack_d8 = 3;
      uStack_d4 = 1;
      uStack_d0 = 0xfff;
      func_0x0001073d8d4c();
      uStack_90 = 6;
      uStack_8c = 1;
      uStack_88 = 0x10ff;
      func_0x0001073d8cec(auStack_8f0);
      uStack_48 = 1;
      uStack_44 = 1;
      uStack_40 = 0x12ff;
      func_0x0001073d983c(0x113822368);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3b8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822368;
}



/* Entry: 1073cd8f8; end: 1073cda43;  */

/* WARNING: Removing unreachable block (ram,0x0001073cda0c) */
/* WARNING: Removing unreachable block (ram,0x0001073cda88) */
/* WARNING: Removing unreachable block (ram,0x0001073cda98) */
/* WARNING: Removing unreachable block (ram,0x0001073cdb80) */
/* WARNING: Removing unreachable block (ram,0x0001073cdb8c) */
/* WARNING: Removing unreachable block (ram,0x0001073cda6c) */
/* WARNING: Removing unreachable block (ram,0x0001073cda74) */
/* WARNING: Removing unreachable block (ram,0x0001073cdb9c) */
/* WARNING: Removing unreachable block (ram,0x0001073cdbac) */
/* WARNING: Removing unreachable block (ram,0x0001073cdbb8) */
/* WARNING: Removing unreachable block (ram,0x0001073cdbe4) */

undefined8 FUN_1073cd8f8(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3c8 & 1) == 0) {
    iVar1 = 0x136ca3c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d8ccc();
      func_0x0001073d8c00();
      func_0x0001073d8e88();
      func_0x0001073d8bf0();
      func_0x0001073d9348();
      func_0x0001073d8be0();
      func_0x0001073d9fd4();
      func_0x0001073d94cc();
      func_0x0001073d983c(0x113822398);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release();
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822398;
}



/* Entry: 1073cda44; end: 1073cdbfb;  */

/* WARNING: Removing unreachable block (ram,0x0001073cdbb8) */
/* WARNING: Removing unreachable block (ram,0x0001073cdbe4) */

undefined8 FUN_1073cda44(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_278 [200];
  undefined1 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_160;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3d8 & 1) == 0) {
    iVar1 = 0x136ca3d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9248();
      func_0x0001073d9974(0xff03);
      func_0x0001073d94cc();
      func_0x0001073d920c(0xff04);
      func_0x0001073d94cc();
      uStack_1b0 = 1;
      uStack_1ac = 1;
      func_0x0001073d99b0(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d9fb0();
      uStack_160 = 0xff06;
      func_0x0001073d94cc();
      uStack_120 = 1;
      uStack_11c = 1;
      uStack_118 = 0xff07;
      func_0x0001073d8c00();
      uStack_d8 = 4;
      uStack_d4 = 1;
      func_0x0001073d92ec(0xff08);
      func_0x0001073d8bf0();
      func_0x0001073d9564(7);
      func_0x0001073d9ac8(0xff09);
      func_0x0001073d8be0();
      uStack_44 = SUB84(auStack_278,0);
      uStack_48 = SUB81(auStack_278,0);
      uStack_40 = 0xff0a;
      func_0x0001073d95ec(0x1138223c8);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3d8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138223c8;
}



/* Entry: 1073cdbfc; end: 1073cdd6f;  */

/* WARNING: Removing unreachable block (ram,0x0001073cdf04) */
/* WARNING: Removing unreachable block (ram,0x0001073cdf64) */
/* WARNING: Removing unreachable block (ram,0x0001073cdf74) */
/* WARNING: Removing unreachable block (ram,0x0001073ce024) */
/* WARNING: Removing unreachable block (ram,0x0001073ce030) */
/* WARNING: Removing unreachable block (ram,0x0001073cdf4c) */
/* WARNING: Removing unreachable block (ram,0x0001073cdf54) */
/* WARNING: Removing unreachable block (ram,0x0001073ce040) */
/* WARNING: Removing unreachable block (ram,0x0001073ce050) */
/* WARNING: Removing unreachable block (ram,0x0001073cdd38) */
/* WARNING: Removing unreachable block (ram,0x0001073cddb4) */
/* WARNING: Removing unreachable block (ram,0x0001073cddc4) */
/* WARNING: Removing unreachable block (ram,0x0001073cdd98) */
/* WARNING: Removing unreachable block (ram,0x0001073cdda4) */
/* WARNING: Removing unreachable block (ram,0x0001073cde0c) */
/* WARNING: Removing unreachable block (ram,0x0001073cde70) */
/* WARNING: Removing unreachable block (ram,0x0001073cde80) */
/* WARNING: Removing unreachable block (ram,0x0001073cded4) */
/* WARNING: Removing unreachable block (ram,0x0001073cdee0) */
/* WARNING: Removing unreachable block (ram,0x0001073cde58) */
/* WARNING: Removing unreachable block (ram,0x0001073cde60) */
/* WARNING: Removing unreachable block (ram,0x0001073cdef0) */
/* WARNING: Removing unreachable block (ram,0x0001073cdef8) */
/* WARNING: Removing unreachable block (ram,0x0001073ce05c) */
/* WARNING: Removing unreachable block (ram,0x0001073ce080) */

undefined8 FUN_1073cdbfc(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3e0 & 1) == 0) {
    iVar1 = 0x136ca3e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d925c();
      func_0x0001073d94fc();
      func_0x0001073d94fc();
      func_0x0001073d94fc();
      func_0x0001073d9670(0x1138223e0);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release();
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while( true );
  }
  return 0x1138223e0;
}



/* Entry: 1073cdd70; end: 1073cde2f;  */

/* WARNING: Removing unreachable block (ram,0x0001073ce05c) */
/* WARNING: Removing unreachable block (ram,0x0001073ce080) */

undefined8 FUN_1073cdd70(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auStack_70 [56];
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001073d8df4();
  uStack_28 = extraout_x8;
  if ((bRam0000000113822410 & 1) == 0) {
    iVar1 = 0x13822410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000100060964(auStack_70,&UNK_10f40f415);
      uStack_38 = 2;
      uStack_34 = 1;
      uStack_30 = 1;
      func_0x0001073da07c(0x1138223f8);
      func_0x000104c2f714(auStack_70);
      ___cxa_guard_release(0x113822410);
    }
  }
  func_0x0001073d8ba4(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138223f8;
  }
  ___stack_chk_fail();
  func_0x0001073d9c04();
  func_0x000104c2f714();
  ___cxa_guard_abort(0x113822410);
  func_0x0001073d95e4();
  func_0x0001073d8bcc();
  if ((bRam0000000113822430 & 1) == 0) {
    iVar1 = 0x13822430;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9b84();
      func_0x0001073d8fa4(0x113822418);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822430);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822430);
    func_0x0001073d95e4();
    func_0x0001073d8bcc();
    if ((bRam00000001136ca3e8 & 1) == 0) {
      iVar1 = 0x136ca3e8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x0001073d8d5c();
        func_0x0001073d9248();
        func_0x0001073d9974(0xff05);
        func_0x0001073d94cc();
        func_0x0001073d9eb4();
        func_0x0001073d94cc();
        func_0x0001073d8c00();
        func_0x0001073d91fc(0xff08);
        func_0x0001073d8bf0();
        func_0x0001073d99a4(0xff09);
        func_0x0001073d8be0();
        func_0x0001073d95ec(0x1138224b8);
        func_0x0001073d8468();
        do {
          func_0x0001073d9514();
          func_0x0001073d96b0();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x1136ca3e8);
      }
    }
    func_0x0001073d8b8c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      do {
        func_0x0001073d9504();
        func_0x0001073d9698();
      } while( true );
    }
    return 0x1138224b8;
  }
  return 0x113822418;
}



/* Entry: 1073cde30; end: 1073cdf23;  */

/* WARNING: Removing unreachable block (ram,0x0001073ce05c) */
/* WARNING: Removing unreachable block (ram,0x0001073ce080) */

undefined8 FUN_1073cde30(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  
  func_0x0001073d8bcc();
  if ((bRam0000000113822430 & 1) == 0) {
    iVar1 = 0x13822430;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9b84();
      func_0x0001073d8fa4(0x113822418);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822430);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822430);
    func_0x0001073d95e4();
    func_0x0001073d8bcc();
    if ((bRam00000001136ca3e8 & 1) == 0) {
      iVar1 = 0x136ca3e8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x0001073d8d5c();
        func_0x0001073d9248();
        func_0x0001073d9974(0xff05);
        func_0x0001073d94cc();
        func_0x0001073d9eb4();
        func_0x0001073d94cc();
        func_0x0001073d8c00();
        func_0x0001073d91fc(0xff08);
        func_0x0001073d8bf0();
        func_0x0001073d99a4(0xff09);
        func_0x0001073d8be0();
        func_0x0001073d95ec(0x1138224b8);
        func_0x0001073d8468();
        do {
          func_0x0001073d9514();
          func_0x0001073d96b0();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x1136ca3e8);
      }
    }
    func_0x0001073d8b8c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      do {
        func_0x0001073d9504();
        func_0x0001073d9698();
      } while( true );
    }
    return 0x1138224b8;
  }
  return 0x113822418;
}



/* Entry: 1073cdf24; end: 1073ce097;  */

/* WARNING: Removing unreachable block (ram,0x0001073ce05c) */
/* WARNING: Removing unreachable block (ram,0x0001073ce080) */

undefined8 FUN_1073cdf24(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3e8 & 1) == 0) {
    iVar1 = 0x136ca3e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9248();
      func_0x0001073d9974(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d9eb4();
      func_0x0001073d94cc();
      func_0x0001073d8c00();
      func_0x0001073d91fc(0xff08);
      func_0x0001073d8bf0();
      func_0x0001073d99a4(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d95ec(0x1138224b8);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3e8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138224b8;
}



/* Entry: 1073ce098; end: 1073ce223;  */

undefined8 FUN_1073ce098(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *unaff_x21;
  undefined1 auStack_230 [56];
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 uStack_1a8;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3f0 & 1) == 0) {
    iVar1 = 0x136ca3f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      uStack_1f8 = 7;
      uStack_1f4 = 1;
      func_0x0001073d986c(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d9af0();
      uStack_1a8 = 0xff06;
      func_0x0001073d94cc();
      uStack_168 = 1;
      uStack_164 = 1;
      uStack_160 = 0xff07;
      func_0x0001073d8c00();
      uStack_120 = 4;
      uStack_11c = 1;
      func_0x0001073d9284(0xff08);
      func_0x0001073d8bf0();
      func_0x0001073d9e24(7);
      func_0x0001073d9a04(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d9cfc();
      func_0x0001073d9de4(0xff0a);
      func_0x0001073d94cc();
      uStack_48 = 1;
      uStack_44 = 1;
      uStack_40 = 0xff;
      func_0x0001073d97d8(0x1138224d0);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3f0);
      unaff_x21 = auStack_230;
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f34();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != (undefined1 *)0x0);
    do {
      ___cxa_guard_abort(0x1136ca3f0);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x1138224d0;
}



/* Entry: 1073ce224; end: 1073ce377;  */

undefined8 FUN_1073ce224(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca3f8 & 1) == 0) {
    iVar1 = 0x136ca3f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d8ccc();
      func_0x0001073d94cc();
      func_0x0001073d8e88();
      func_0x0001073d8c00();
      func_0x0001073d9fe0();
      unaff_x21 = 1;
      func_0x0001073d9348();
      func_0x0001073d8bf0();
      func_0x0001073d9f8c(7);
      func_0x0001073d9284(0xff04);
      func_0x0001073d8e1c();
      func_0x0001073d9e84();
      func_0x0001073d9a04(0xff05);
      func_0x0001073d8be0();
      func_0x0001073d9cfc();
      func_0x0001073d9de4(0xff06);
      func_0x0001073d9338();
      func_0x0001073d97d8(0x113822508);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca3f8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f34();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca3f8);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822508;
}



/* Entry: 1073ce378; end: 1073ce5df;  */

/* WARNING: Removing unreachable block (ram,0x0001073ce578) */
/* WARNING: Removing unreachable block (ram,0x0001073ce5c8) */

undefined8 FUN_1073ce378(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_500 [488];
  undefined1 uStack_318;
  undefined1 uStack_2d0;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined2 uStack_280;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_168;
  undefined1 uStack_d8;
  undefined1 uStack_90;
  undefined2 uStack_88;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca400 & 1) == 0) {
    iVar1 = 0x136ca400;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d9064();
      func_0x0001073d9294();
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d8e88();
      func_0x0001073d8c00();
      func_0x0001073d9fe0();
      func_0x0001073d9348();
      func_0x0001073d8bf0();
      func_0x0001073d9f8c(7);
      func_0x0001073d9284(0xff04);
      func_0x0001073d8e1c();
      func_0x0001073d9e84();
      func_0x0001073d9a04(0xff05);
      func_0x0001073d8be0();
      func_0x0001073d9cfc();
      func_0x0001073d9274(0x906);
      func_0x0001073d8d0c();
      uStack_318 = 7;
      func_0x0001073d99f8(0xff07);
      func_0x0001073d8cbc();
      uStack_2d0 = 4;
      func_0x0001073d9dc4(0xff);
      func_0x0001073d8cac();
      uStack_288 = 4;
      uStack_284 = 1;
      uStack_280 = 0x1ff;
      func_0x0001073d8c9c();
      uStack_240 = 4;
      uStack_23c = 1;
      func_0x0001073d9534(0x2ff);
      func_0x0001073d8c8c();
      func_0x0001073d9ee4(6);
      func_0x0001073d9bcc(0x3ff);
      func_0x0001073d8c7c();
      func_0x0001073da150();
      func_0x0001073d96bc(0x4ff);
      func_0x0001073d8c6c();
      uStack_168 = 7;
      func_0x0001073d9c80(0x5ff);
      func_0x0001073d8cfc();
      func_0x0001073d9524(0x6ff);
      func_0x0001073d8de4();
      uStack_d8 = 3;
      func_0x0001073d9c74(0x7ff);
      func_0x0001073d8d4c();
      uStack_90 = 6;
      uStack_88 = 0x8ff;
      func_0x0001073d8cec(auStack_500);
      uStack_48 = 1;
      uStack_44 = 1;
      uStack_40 = 0xaff;
      func_0x0001073d983c(0x113822520);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca400);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822520;
}



/* Entry: 1073ce5e0; end: 1073ce8c7;  */

/* WARNING: Removing unreachable block (ram,0x0001073ce85c) */
/* WARNING: Removing unreachable block (ram,0x0001073ce8b0) */

undefined8 FUN_1073ce5e0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_558 [200];
  undefined1 uStack_490;
  undefined1 uStack_448;
  undefined1 uStack_400;
  undefined1 uStack_3b8;
  undefined2 uStack_3b0;
  undefined1 uStack_370;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  undefined1 uStack_328;
  undefined4 uStack_324;
  undefined2 uStack_320;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined2 uStack_2d8;
  undefined1 uStack_298;
  undefined4 uStack_294;
  undefined1 uStack_250;
  undefined4 uStack_24c;
  undefined1 uStack_208;
  undefined4 uStack_204;
  undefined2 uStack_1b8;
  undefined1 uStack_178;
  undefined4 uStack_174;
  undefined2 uStack_170;
  undefined1 uStack_130;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined1 uStack_e8;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined1 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca408 & 1) == 0) {
    iVar1 = 0x136ca408;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9318();
      func_0x0001073d9974(0xff01);
      func_0x0001073d8d1c();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff02);
      func_0x0001073d8fb4();
      uStack_490 = 2;
      func_0x0001073d99b0(0xff03);
      func_0x0001073d8c00();
      uStack_448 = 4;
      func_0x0001073d91fc(0xff04);
      func_0x0001073d8bf0();
      uStack_400 = 7;
      func_0x0001073d99a4(0xff05);
      func_0x0001073d8e1c();
      uStack_3b8 = 4;
      uStack_3b0 = 0xff06;
      func_0x0001073d8be0();
      uStack_370 = 1;
      uStack_36c = 1;
      uStack_368 = 0x907;
      func_0x0001073d8d0c();
      uStack_328 = 7;
      uStack_324 = 1;
      uStack_320 = 0xff08;
      func_0x0001073d8cbc();
      uStack_2e0 = 4;
      uStack_2dc = 1;
      uStack_2d8 = 0xff;
      func_0x0001073d8cac();
      uStack_298 = 4;
      uStack_294 = 1;
      func_0x0001073d96cc(0x1ff);
      func_0x0001073d8c9c();
      uStack_250 = 4;
      uStack_24c = 1;
      func_0x0001073d9c9c(0x2ff);
      func_0x0001073d8c8c();
      uStack_208 = 6;
      uStack_204 = 1;
      func_0x0001073d9db4(0x3ff);
      func_0x0001073d8c7c();
      func_0x0001073d9df4();
      uStack_1b8 = 0x4ff;
      func_0x0001073d8c6c();
      uStack_178 = 7;
      uVar2 = SUB84(auStack_558,0);
      uStack_170 = 0x5ff;
      uStack_174 = uVar2;
      func_0x0001073d8cfc();
      uStack_130 = SUB81(auStack_558,0);
      uStack_128 = 0x6ff;
      uStack_12c = uVar2;
      func_0x0001073d8de4();
      uStack_e8 = 3;
      uStack_e0 = 0x7ff;
      uStack_e4 = uVar2;
      func_0x0001073d8d4c();
      uStack_a0 = 6;
      uStack_9c = 1;
      uStack_98 = 0x8ff;
      func_0x0001073d8cec();
      uStack_58 = 1;
      uStack_54 = 1;
      uStack_50 = 0xaff;
      func_0x0001073d95ec(0x113822558);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca408);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822558;
}



/* Entry: 1073ce8c8; end: 1073cebe7;  */

undefined8 FUN_1073ce8c8(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca410 & 1) == 0) {
    iVar1 = 0x136ca410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d9064();
      func_0x0001073d9294();
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d8e88();
      func_0x0001073d8fb4();
      func_0x0001073d9898(0xff03);
      func_0x0001073d94cc();
      func_0x0001073d9284(0xff04);
      func_0x0001073d94cc();
      func_0x0001073d9e24(2);
      func_0x0001073d9a04(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d8c00();
      func_0x0001073d8bf0();
      func_0x0001073d96dc(0xff08);
      func_0x0001073d8e1c();
      func_0x0001073d9ca8(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d9534(0xb0a);
      func_0x0001073d8d0c();
      func_0x0001073d9e44();
      func_0x0001073d9bcc(0xff0b);
      func_0x0001073d8ea8();
      func_0x0001073d94cc();
      func_0x0001073d8cbc();
      func_0x0001073d9524(0x2ff);
      func_0x0001073d8cac();
      unaff_x21 = 1;
      func_0x0001073d9c74(0x3ff);
      func_0x0001073d8c9c();
      func_0x0001073d9ea4();
      func_0x0001073d95c4(0x4ff);
      func_0x0001073d8c8c();
      func_0x0001073da15c(6);
      func_0x0001073d9c48(0x5ff);
      func_0x0001073d8c7c();
      func_0x0001073d9944(0x6ff);
      func_0x0001073d8c6c();
      func_0x0001073d9e54();
      func_0x0001073da04c(0x7ff);
      func_0x0001073d8cfc();
      func_0x0001073d9ff8();
      func_0x0001073d9904(0x8ff);
      func_0x0001073d8de4();
      func_0x0001073d9f64();
      func_0x0001073d9fec(0x9ff);
      func_0x0001073d8d4c();
      func_0x0001073d9da4();
      func_0x0001073d9ae0(0xaff);
      func_0x0001073d8cec();
      func_0x0001073d9ed4();
      func_0x0001073d938c(0x113822590);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca410);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9b24();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca410);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822590;
}



/* Entry: 1073cebe8; end: 1073cef57;  */

/* WARNING: Removing unreachable block (ram,0x0001073ceedc) */
/* WARNING: Removing unreachable block (ram,0x0001073cef40) */

undefined8 FUN_1073cebe8(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca420 & 1) == 0) {
    iVar1 = 0x136ca420;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9248();
      func_0x0001073d9974(0xff01);
      func_0x0001073d94cc();
      func_0x0001073d920c(0xff02);
      func_0x0001073d94cc();
      func_0x0001073d99b0(0xff03);
      func_0x0001073d94cc();
      func_0x0001073d91fc(0xff04);
      func_0x0001073d8d1c();
      func_0x0001073d99a4(0xff05);
      func_0x0001073d8c00();
      func_0x0001073d92ec(0xff06);
      func_0x0001073d8bf0();
      func_0x0001073d9ac8(0xff07);
      func_0x0001073d8e1c();
      func_0x0001073d9e94();
      func_0x0001073d9ab8(0xff08);
      func_0x0001073d8be0();
      func_0x0001073d8d0c();
      func_0x0001073d9e34();
      func_0x0001073d96cc(0xff0a);
      func_0x0001073d8ea8();
      func_0x0001073d9c9c(0xff);
      func_0x0001073d94cc();
      func_0x0001073d9878(0x1ff);
      func_0x0001073d8cbc();
      func_0x0001073d8cac();
      func_0x0001073d9a58(0x3ff);
      func_0x0001073d8c9c();
      func_0x0001073d8c8c();
      func_0x0001073d8c7c();
      func_0x0001073d8c6c();
      func_0x0001073d8cfc();
      func_0x0001073d8de4();
      func_0x0001073d8d4c();
      func_0x0001073d8cec();
      func_0x0001073d95ec(0x1138225c0);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca420);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138225c0;
}



/* Entry: 1073cef58; end: 1073cf2c3;  */

undefined8 FUN_1073cef58(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca448 & 1) == 0) {
    iVar1 = 0x136ca448;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8f2c();
      func_0x0001073d9064();
      func_0x0001073d986c(0xff03);
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d9034(0xff04);
      func_0x0001073d94cc();
      func_0x0001073d9898(0xa05);
      func_0x0001073d94cc();
      func_0x0001073d9f8c(3);
      func_0x0001073d9888(0xff06);
      func_0x0001073d94cc();
      func_0x0001073d9e04();
      func_0x0001073d9f80(0xff07);
      func_0x0001073d8cbc();
      func_0x0001073d9274(0xff);
      func_0x0001073d8cac();
      func_0x0001073d99f8(0x1ff);
      func_0x0001073d8c9c();
      func_0x0001073d9dc4(0x2ff);
      func_0x0001073d8c7c();
      func_0x0001073d94cc();
      func_0x0001073d9534(0x4ff);
      func_0x0001073d8c8c();
      func_0x0001073d9ee4(6);
      func_0x0001073d9bcc(0x5ff);
      func_0x0001073d8c6c();
      func_0x0001073d96bc(0x6ff);
      func_0x0001073d8cfc();
      func_0x0001073d9c80(0x7ff);
      func_0x0001073d8cec();
      func_0x0001073d9524(0x8ff);
      func_0x0001073d94cc();
      func_0x0001073d9c74(0x9ff);
      func_0x0001073d94cc();
      func_0x0001073d9ea4();
      func_0x0001073d95c4(0xbff);
      func_0x0001073d94cc();
      func_0x0001073da15c(2);
      func_0x0001073d9c48(0xcff);
      func_0x0001073d94cc();
      func_0x0001073d9944(0xdff);
      func_0x0001073d94cc();
      unaff_x21 = 4;
      func_0x0001073da04c(0xeff);
      func_0x0001073d94cc();
      func_0x0001073d9ff8();
      func_0x0001073d9904(0xfff);
      func_0x0001073d94cc();
      func_0x0001073d9fec(0x10ff);
      func_0x0001073d94cc();
      func_0x0001073d9ae0(0x11ff);
      func_0x0001073d94cc();
      func_0x0001073d938c(0x113822658);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca448);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9b24();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca448);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822658;
}



/* Entry: 1073cf2c4; end: 1073cf4f7;  */

/* WARNING: Removing unreachable block (ram,0x0001073cf484) */
/* WARNING: Removing unreachable block (ram,0x0001073cf4e0) */

undefined8 FUN_1073cf2c4(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca468 & 1) == 0) {
    iVar1 = 0x136ca468;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9318();
      func_0x0001073d9974(0xff02);
      func_0x0001073d8d1c();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff03);
      func_0x0001073d9484();
      func_0x0001073d98a4();
      func_0x0001073d8f1c();
      func_0x0001073d9fb0();
      func_0x0001073d91fc(5);
      func_0x0001073d9474();
      func_0x0001073d99a4(0xff06);
      func_0x0001073d8c00();
      func_0x0001073d92ec(0xff07);
      func_0x0001073d8bf0();
      func_0x0001073d9564(7);
      func_0x0001073d9ac8(0xff08);
      func_0x0001073d8e1c();
      func_0x0001073d9e94();
      func_0x0001073d9ab8(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d9cc4();
      func_0x0001073d8d0c();
      func_0x0001073d9e34();
      func_0x0001073d96cc(0xff0b);
      func_0x0001073d8cbc();
      func_0x0001073d9c9c(0x1ff);
      func_0x0001073d8cac();
      func_0x0001073d9878(0x2ff);
      func_0x0001073d8c9c();
      func_0x0001073d9c10();
      func_0x0001073d8c8c();
      func_0x0001073d9b8c();
      func_0x0001073d8c7c();
      func_0x0001073d9ce0();
      func_0x0001073d8c6c();
      func_0x0001073d9be4();
      func_0x0001073d8cfc();
      func_0x0001073da01c();
      func_0x0001073d8de4();
      func_0x0001073d9c54();
      func_0x0001073d8d4c();
      func_0x0001073d9bac();
      func_0x0001073d8cec();
      func_0x0001073da130();
      func_0x0001073d95ec(0x1138226b8);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca468);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138226b8;
}



/* Entry: 1073cf4f8; end: 1073cf72b;  */

/* WARNING: Removing unreachable block (ram,0x0001073cf6b8) */
/* WARNING: Removing unreachable block (ram,0x0001073cf714) */

undefined8 FUN_1073cf4f8(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca478 & 1) == 0) {
    iVar1 = 0x136ca478;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9318();
      func_0x0001073d9974(0xff02);
      func_0x0001073d8d1c();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff03);
      func_0x0001073d9484();
      func_0x0001073d98a4();
      func_0x0001073d8f1c();
      func_0x0001073d9fb0();
      func_0x0001073d91fc(5);
      func_0x0001073d9474();
      func_0x0001073d99a4(0xff06);
      func_0x0001073d8c00();
      func_0x0001073d92ec(0xff07);
      func_0x0001073d8bf0();
      func_0x0001073d9564(7);
      func_0x0001073d9ac8(0xff08);
      func_0x0001073d8e1c();
      func_0x0001073d9e94();
      func_0x0001073d9ab8(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d9cc4();
      func_0x0001073d8d0c();
      func_0x0001073d9e34();
      func_0x0001073d96cc(0xff0b);
      func_0x0001073d8cbc();
      func_0x0001073d9c9c(0x1ff);
      func_0x0001073d8cac();
      func_0x0001073d9878(0x2ff);
      func_0x0001073d8c9c();
      func_0x0001073d9c10();
      func_0x0001073d8c8c();
      func_0x0001073d9b8c();
      func_0x0001073d8c7c();
      func_0x0001073d9ce0();
      func_0x0001073d8c6c();
      func_0x0001073d9be4();
      func_0x0001073d8cfc();
      func_0x0001073da01c();
      func_0x0001073d8de4();
      func_0x0001073d9c54();
      func_0x0001073d8d4c();
      func_0x0001073d9bac();
      func_0x0001073d8cec();
      func_0x0001073da130();
      func_0x0001073d95ec(0x1138226e8);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca478);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138226e8;
}



/* Entry: 1073cf72c; end: 1073cfa1f;  */

undefined8 FUN_1073cf72c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca488 & 1) == 0) {
    iVar1 = 0x136ca488;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d9064();
      func_0x0001073d986c(0xff02);
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d9034(0xff03);
      func_0x0001073d9474();
      func_0x0001073d9fe0();
      func_0x0001073d9898(0xff04);
      func_0x0001073d9484();
      func_0x0001073d9fd4();
      func_0x0001073d9888(0xff05);
      func_0x0001073d8f1c();
      func_0x0001073d9e04();
      func_0x0001073d9f80(6);
      func_0x0001073d8c00();
      func_0x0001073d9274(0xff07);
      func_0x0001073d8bf0();
      func_0x0001073d9dd4(7);
      func_0x0001073d99f8(0xff08);
      func_0x0001073d8e1c();
      func_0x0001073d9dc4(0xff09);
      func_0x0001073d8be0();
      func_0x0001073d8d0c();
      func_0x0001073d9534(0xff0b);
      func_0x0001073d8ea8();
      func_0x0001073d9ee4(2);
      func_0x0001073d9bcc(0x1ff);
      func_0x0001073d94cc();
      func_0x0001073da150();
      func_0x0001073d96bc(0x2ff);
      func_0x0001073d94cc();
      func_0x0001073d9c80(0x3ff);
      func_0x0001073d8cbc();
      func_0x0001073d9524(0x4ff);
      func_0x0001073d8cac();
      func_0x0001073d9c74(0x5ff);
      func_0x0001073d8c9c();
      func_0x0001073d95c4(0x6ff);
      func_0x0001073d8c8c();
      unaff_x21 = 1;
      func_0x0001073d9c48(0x7ff);
      func_0x0001073d8c7c();
      func_0x0001073d9944(0x8ff);
      func_0x0001073d8c6c();
      func_0x0001073d9e54();
      func_0x0001073da04c(0x9ff);
      func_0x0001073d8cfc();
      func_0x0001073d9ff8();
      func_0x0001073d9904(0xaff);
      func_0x0001073d8de4();
      func_0x0001073d9f64();
      func_0x0001073d9fec(0xbff);
      func_0x0001073d8d4c();
      func_0x0001073d9da4();
      func_0x0001073d9ae0(0xcff);
      func_0x0001073d8cec();
      func_0x0001073d9ed4();
      func_0x0001073d938c(0x113822718);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca488);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9b24();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca488);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822718;
}



/* Entry: 1073cfa20; end: 1073cfd1b;  */

undefined8 FUN_1073cfa20(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca498 & 1) == 0) {
    iVar1 = 0x136ca498;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8c34();
      func_0x0001073d9064();
      func_0x0001073d986c(0xff02);
      func_0x0001073d8d1c();
      func_0x0001073d9b4c();
      func_0x0001073d9034(0xff03);
      func_0x0001073d9484();
      func_0x0001073d9898(0xff04);
      func_0x0001073d8f1c();
      func_0x0001073d9fd4();
      func_0x0001073d9284(5);
      func_0x0001073d94cc();
      func_0x0001073d9a04(0xff06);
      func_0x0001073d9474();
      func_0x0001073d9274(0xff07);
      func_0x0001073d8c00();
      func_0x0001073d9dd4(4);
      func_0x0001073d99f8(0xff08);
      func_0x0001073d8bf0();
      func_0x0001073d96dc(0xff09);
      func_0x0001073d8e1c();
      func_0x0001073d9ca8(0xff0a);
      func_0x0001073d8be0();
      func_0x0001073d9534(0xc0b);
      func_0x0001073d8d0c();
      func_0x0001073d9e44();
      func_0x0001073d9bcc(0xff0c);
      func_0x0001073d94cc();
      func_0x0001073da150();
      func_0x0001073d94cc();
      func_0x0001073d8cbc();
      func_0x0001073d9524(0x3ff);
      func_0x0001073d8cac();
      unaff_x21 = 1;
      func_0x0001073d9c74(0x4ff);
      func_0x0001073d8c9c();
      func_0x0001073d9ea4();
      func_0x0001073d95c4(0x5ff);
      func_0x0001073d8c8c();
      func_0x0001073da15c(6);
      func_0x0001073d9c48(0x6ff);
      func_0x0001073d8c7c();
      func_0x0001073d9944(0x7ff);
      func_0x0001073d8c6c();
      func_0x0001073d9e54();
      func_0x0001073da04c(0x8ff);
      func_0x0001073d8cfc();
      func_0x0001073d9ff8();
      func_0x0001073d9904(0x9ff);
      func_0x0001073d8de4();
      func_0x0001073d9f64();
      func_0x0001073d9fec(0xaff);
      func_0x0001073d8d4c();
      func_0x0001073d9da4();
      func_0x0001073d9ae0(0xbff);
      func_0x0001073d8cec();
      func_0x0001073d9ed4();
      func_0x0001073d938c(0x113822748);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca498);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9b24();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca498);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822748;
}



/* Entry: 1073cfd1c; end: 1073cff7f;  */

/* WARNING: Removing unreachable block (ram,0x0001073cff24) */
/* WARNING: Removing unreachable block (ram,0x0001073cff68) */

undefined8 FUN_1073cfd1c(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_428 [344];
  undefined1 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 uStack_1f0;
  undefined1 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  undefined2 uStack_88;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca4b8 & 1) == 0) {
    iVar1 = 0x136ca4b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d5c();
      func_0x0001073d9248();
      func_0x0001073d9974(0xff02);
      func_0x0001073d94cc();
      func_0x0001073d9eb4();
      func_0x0001073d920c(0xff03);
      func_0x0001073d94cc();
      func_0x0001073d98a4();
      func_0x0001073d94cc();
      func_0x0001073d9fb0();
      func_0x0001073d91fc(0xff05);
      func_0x0001073d8c00();
      uStack_2d0 = 4;
      uStack_2cc = 1;
      func_0x0001073d99a4(0xff06);
      func_0x0001073d8bf0();
      uStack_288 = 7;
      uStack_284 = 1;
      func_0x0001073d92ec(0xff07);
      func_0x0001073d8be0();
      uStack_240 = 1;
      uStack_23c = 1;
      func_0x0001073d9ac8(0xff08);
      func_0x0001073d94cc();
      uStack_1f8 = 1;
      uStack_1f4 = 1;
      uStack_1f0 = 0xff;
      func_0x0001073d9328();
      uStack_1b0 = 1;
      uStack_1ac = 1;
      uStack_1a8 = 0x1ff;
      func_0x0001073d94cc();
      uStack_168 = 1;
      uStack_164 = 1;
      func_0x0001073d96cc(0x2ff);
      func_0x0001073d94cc();
      uStack_120 = 1;
      uStack_11c = 1;
      func_0x0001073d9c9c(0x3ff);
      func_0x0001073d94cc();
      uStack_d8 = 1;
      uStack_d4 = 1;
      func_0x0001073d9db4(0x4ff);
      func_0x0001073d94cc();
      func_0x0001073d9df4();
      uStack_88 = 0x5ff;
      func_0x0001073d94cc();
      uStack_48 = 3;
      uStack_44 = SUB84(auStack_428,0);
      uStack_40 = 0x6ff;
      func_0x0001073d95ec(0x1138227a8);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4b8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x1138227a8;
}



/* Entry: 1073cff80; end: 1073d0063;  */

/* WARNING: Removing unreachable block (ram,0x0001073d020c) */
/* WARNING: Removing unreachable block (ram,0x0001073d0244) */

undefined8 FUN_1073cff80(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined1 auStack_420 [200];
  undefined1 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined1 uStack_118;
  undefined4 uStack_114;
  undefined2 uStack_110;
  
  func_0x0001073d8bcc();
  if ((bRam00000001138227f8 & 1) == 0) {
    iVar1 = 0x138227f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8d70();
      func_0x0001073d9248();
      func_0x0001073d9bd8();
      func_0x0001073d9b84();
      func_0x0001073d8fa4(0x1138227e0);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1138227f8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x1138227f8);
    func_0x0001073d95e4();
    func_0x0001073d8bcc();
    if ((bRam00000001136ca4c0 & 1) == 0) {
      iVar1 = 0x136ca4c0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x0001073d9c30();
        func_0x0001073d8f2c();
        func_0x0001073d8ccc();
        func_0x0001073d8fb4();
        func_0x0001073d9af0();
        func_0x0001073d8e88();
        func_0x0001073d94cc();
        uStack_358 = 6;
        uStack_354 = 1;
        func_0x0001073d9898(0xff);
        func_0x0001073d94cc();
        func_0x0001073d9f8c(3);
        func_0x0001073d9284(0x1ff);
        func_0x0001073d94cc();
        func_0x0001073d9e84();
        func_0x0001073d9a04(0x2ff);
        func_0x0001073d94cc();
        func_0x0001073d9cfc();
        func_0x0001073d9274(0x3ff);
        func_0x0001073d94cc();
        uStack_238 = 1;
        uStack_234 = 9;
        func_0x0001073d99f8(0x4ff);
        func_0x0001073d942c();
        uStack_1f0 = 1;
        uStack_1ec = 1;
        func_0x0001073d96dc(0x5ff);
        func_0x0001073d941c();
        uStack_1a8 = 1;
        uStack_1a4 = 1;
        func_0x0001073d9ca8(0x6ff);
        func_0x0001073d940c();
        uStack_160 = 1;
        uStack_15c = 1;
        uStack_158 = 0x7ff;
        func_0x0001073d93fc(auStack_420);
        uStack_118 = 1;
        uStack_114 = 1;
        uStack_110 = 0x8ff;
        func_0x0001073d983c(0x113822800);
        func_0x0001073d8468();
        do {
          func_0x0001073d9514();
          func_0x0001073d96b0();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x1136ca4c0);
      }
    }
    func_0x0001073d8b8c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      do {
        func_0x0001073d9504();
        func_0x0001073d9698();
      } while( true );
    }
    return 0x113822800;
  }
  return 0x1138227e0;
}



/* Entry: 1073d0064; end: 1073d025b;  */

/* WARNING: Removing unreachable block (ram,0x0001073d020c) */
/* WARNING: Removing unreachable block (ram,0x0001073d0244) */

undefined8 FUN_1073d0064(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_350 [200];
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca4c0 & 1) == 0) {
    iVar1 = 0x136ca4c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8f2c();
      func_0x0001073d8ccc();
      func_0x0001073d8fb4();
      func_0x0001073d9af0();
      func_0x0001073d8e88();
      func_0x0001073d94cc();
      uStack_288 = 6;
      uStack_284 = 1;
      func_0x0001073d9898(0xff);
      func_0x0001073d94cc();
      func_0x0001073d9f8c(3);
      func_0x0001073d9284(0x1ff);
      func_0x0001073d94cc();
      func_0x0001073d9e84();
      func_0x0001073d9a04(0x2ff);
      func_0x0001073d94cc();
      func_0x0001073d9cfc();
      func_0x0001073d9274(0x3ff);
      func_0x0001073d94cc();
      uStack_168 = 1;
      uStack_164 = 9;
      func_0x0001073d99f8(0x4ff);
      func_0x0001073d942c();
      uStack_120 = 1;
      uStack_11c = 1;
      func_0x0001073d96dc(0x5ff);
      func_0x0001073d941c();
      uStack_d8 = 1;
      uStack_d4 = 1;
      func_0x0001073d9ca8(0x6ff);
      func_0x0001073d940c();
      uStack_90 = 1;
      uStack_8c = 1;
      uStack_88 = 0x7ff;
      func_0x0001073d93fc(auStack_350);
      uStack_48 = 1;
      uStack_44 = 1;
      uStack_40 = 0x8ff;
      func_0x0001073d983c(0x113822800);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4c0);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822800;
}



/* Entry: 1073d025c; end: 1073d03ab;  */

/* WARNING: Removing unreachable block (ram,0x0001073d0370) */
/* WARNING: Removing unreachable block (ram,0x0001073d0394) */

undefined8 FUN_1073d025c(void)

{
  undefined1 in_ZR;
  int iVar1;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca4c8 & 1) == 0) {
    iVar1 = 0x136ca4c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8d70();
      func_0x0001073d9248();
      func_0x0001073d9974(0xff01);
      func_0x0001073d8fb4();
      func_0x0001073d9eb4();
      func_0x0001073d920c(0xff02);
      func_0x0001073d942c();
      func_0x0001073d99b0(0xff);
      func_0x0001073d941c();
      func_0x0001073d9fb0();
      func_0x0001073d91fc(0x1ff);
      func_0x0001073d940c();
      func_0x0001073d99a4(0x2ff);
      func_0x0001073d93fc();
      func_0x0001073d95ec(0x113822818);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4c8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822818;
}



/* Entry: 1073d03ac; end: 1073d052f;  */

undefined8 FUN_1073d03ac(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined1 auStack_2c0 [204];
  undefined4 uStack_1f4;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca4d0 & 1) == 0) {
    iVar1 = 0x136ca4d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8f2c();
      func_0x0001073d8ccc();
      func_0x0001073d8fb4();
      func_0x0001073d9af0();
      func_0x0001073d8e88();
      func_0x0001073d94cc();
      func_0x0001073d9fe0();
      unaff_x21 = 1;
      uStack_1f4 = 1;
      func_0x0001073d9898(0xff);
      func_0x0001073d94cc();
      func_0x0001073d9fd4();
      func_0x0001073d9284(0x1ff);
      func_0x0001073d94cc();
      uStack_168 = 1;
      uStack_164 = 1;
      func_0x0001073d9a04(0x2ff);
      func_0x0001073d942c();
      func_0x0001073d9cfc();
      func_0x0001073d9274(0x3ff);
      func_0x0001073d941c();
      uStack_d8 = 1;
      uStack_d4 = 1;
      func_0x0001073d99f8(0x4ff);
      func_0x0001073d940c();
      func_0x0001073d9a74();
      func_0x0001073d93fc(auStack_2c0);
      func_0x0001073da004();
      func_0x0001073d97c8(0x113822830);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4d0);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f54();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca4d0);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822830;
}



/* Entry: 1073d0530; end: 1073d06b3;  */

undefined8 FUN_1073d0530(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined1 auStack_2c0 [200];
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca4d8 & 1) == 0) {
    iVar1 = 0x136ca4d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x0001073d8f2c();
      func_0x0001073d8ccc();
      func_0x0001073d8fb4();
      func_0x0001073d9af0();
      func_0x0001073d8e88();
      func_0x0001073d94cc();
      unaff_x21 = 1;
      uStack_1f8 = 1;
      uStack_1f4 = 1;
      func_0x0001073d9898(0xff);
      func_0x0001073d94cc();
      func_0x0001073d9fd4();
      func_0x0001073d9284(0x1ff);
      func_0x0001073d94cc();
      uStack_168 = 1;
      uStack_164 = 1;
      func_0x0001073d9a04(0x2ff);
      func_0x0001073d942c();
      func_0x0001073d9cfc();
      func_0x0001073d9274(0x3ff);
      func_0x0001073d941c();
      uStack_d8 = 1;
      uStack_d4 = 1;
      func_0x0001073d99f8(0x4ff);
      func_0x0001073d940c();
      func_0x0001073d9a74();
      func_0x0001073d93fc(auStack_2c0);
      func_0x0001073da004();
      func_0x0001073d97c8(0x113822848);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4d8);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f54();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca4d8);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822848;
}



/* Entry: 1073d06b4; end: 1073d0847;  */

/* WARNING: Removing unreachable block (ram,0x0001073d07f4) */
/* WARNING: Removing unreachable block (ram,0x0001073d0830) */

undefined8 FUN_1073d06b4(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca4e0 & 1) == 0) {
    iVar1 = 0x136ca4e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9044();
      func_0x0001073d93ec();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff06);
      func_0x0001073d8fc4();
      func_0x0001073d9078();
      func_0x0001073d93dc();
      func_0x0001073d91fc(0xff08);
      func_0x0001073d93cc();
      func_0x0001073d945c();
      func_0x0001073d93bc();
      func_0x0001073d922c();
      func_0x0001073d93ac();
      func_0x0001073d9564(4);
      func_0x0001073d9ac8(0xff0b);
      func_0x0001073d8ea8();
      func_0x0001073d9594();
      func_0x0001073d8c00();
      func_0x0001073d9724();
      func_0x0001073d8bf0();
      func_0x0001073d9544();
      func_0x0001073d939c();
      func_0x0001073d96ec();
      func_0x0001073d8be0();
      func_0x0001073d95ec(0x113822860);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4e0);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822860;
}



/* Entry: 1073d0848; end: 1073d0a93;  */

undefined8 FUN_1073d0848(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca4e8 & 1) == 0) {
    iVar1 = 0x136ca4e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9044();
      func_0x0001073d93ec();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff06);
      func_0x0001073d8fc4();
      func_0x0001073d9078();
      func_0x0001073d93dc();
      func_0x0001073d91fc(0xff08);
      func_0x0001073d93cc();
      func_0x0001073d945c();
      func_0x0001073d93bc();
      func_0x0001073d922c();
      func_0x0001073d93ac();
      func_0x0001073d9564(4);
      func_0x0001073d9ac8(0xff0b);
      func_0x0001073d8ea8();
      func_0x0001073d9ab8(0xff0c);
      func_0x0001073d94cc();
      func_0x0001073d8c00();
      func_0x0001073d96cc(0xff0e);
      func_0x0001073d8bf0();
      func_0x0001073d9c9c(0xff0f);
      func_0x0001073d939c();
      func_0x0001073d9db4(0xff10);
      func_0x0001073d8be0();
      func_0x0001073d9df4();
      func_0x0001073d94cc();
      func_0x0001073d9a58(0xff);
      func_0x0001073d94cc();
      unaff_x21 = 1;
      func_0x0001073d8f1c();
      func_0x0001073d95ec(0x113822898);
      func_0x0001073da064();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca4e8);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f44();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca4e8);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822898;
}



/* Entry: 1073d0a94; end: 1073d104b;  */

/* WARNING: Removing unreachable block (ram,0x0001073d0f9c) */
/* WARNING: Removing unreachable block (ram,0x0001073d1034) */

undefined8 FUN_1073d0a94(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 auStack_a20 [56];
  undefined1 uStack_9e8;
  undefined4 uStack_9e4;
  undefined1 uStack_9a0;
  undefined4 uStack_99c;
  undefined1 uStack_958;
  undefined4 uStack_954;
  undefined1 uStack_910;
  undefined4 uStack_90c;
  undefined1 uStack_8c8;
  undefined4 uStack_8c4;
  undefined1 uStack_880;
  undefined4 uStack_87c;
  undefined2 uStack_878;
  undefined1 uStack_838;
  undefined4 uStack_834;
  undefined2 uStack_830;
  undefined1 uStack_7f0;
  undefined4 uStack_7ec;
  undefined1 uStack_7a8;
  undefined4 uStack_7a4;
  undefined1 uStack_760;
  undefined4 uStack_75c;
  undefined1 uStack_718;
  undefined4 uStack_714;
  undefined1 uStack_6d0;
  undefined4 uStack_6cc;
  undefined1 uStack_688;
  undefined4 uStack_684;
  undefined1 uStack_640;
  undefined4 uStack_63c;
  undefined1 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 uStack_568;
  undefined4 uStack_564;
  undefined1 uStack_520;
  undefined4 uStack_51c;
  undefined2 uStack_518;
  undefined1 uStack_4d8;
  undefined4 uStack_4d4;
  undefined2 uStack_4d0;
  undefined1 uStack_490;
  undefined4 uStack_48c;
  undefined2 uStack_488;
  undefined1 uStack_448;
  undefined4 uStack_444;
  undefined2 uStack_440;
  undefined1 uStack_400;
  undefined4 uStack_3fc;
  undefined2 uStack_3f8;
  undefined1 uStack_3b8;
  undefined4 uStack_3b4;
  undefined2 uStack_3b0;
  undefined1 uStack_370;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  undefined1 uStack_328;
  undefined4 uStack_324;
  undefined2 uStack_320;
  undefined1 uStack_2e0;
  undefined4 uStack_2dc;
  undefined2 uStack_2d8;
  undefined1 uStack_298;
  undefined4 uStack_294;
  undefined2 uStack_290;
  undefined1 uStack_250;
  undefined4 uStack_24c;
  undefined2 uStack_248;
  undefined1 uStack_208;
  undefined4 uStack_204;
  undefined2 uStack_200;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined1 uStack_178;
  undefined4 uStack_174;
  undefined2 uStack_170;
  undefined1 uStack_130;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined1 uStack_e8;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined1 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca500 & 1) == 0) {
    iVar1 = 0x136ca500;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8f2c();
      uStack_9e8 = 7;
      uStack_9e4 = 0x20;
      func_0x0001073d986c(0xff05);
      func_0x0001073d94cc();
      uStack_9a0 = 7;
      uStack_99c = 1;
      func_0x0001073d9034(0xff06);
      func_0x0001073d94cc();
      uStack_958 = 6;
      uStack_954 = 0x20;
      func_0x0001073d9898(0xff07);
      func_0x0001073d94cc();
      uStack_910 = 6;
      uStack_90c = 1;
      func_0x0001073d9284(0xff08);
      func_0x0001073d94cc();
      uStack_8c8 = 1;
      uStack_8c4 = 0x20;
      func_0x0001073d9a04(0xff09);
      func_0x0001073d9328();
      uStack_880 = 1;
      uStack_87c = 1;
      uStack_878 = 0xff0a;
      func_0x0001073d94cc();
      uStack_838 = 1;
      uStack_834 = 0x20;
      uStack_830 = 0xff0b;
      func_0x0001073d94cc();
      uStack_7f0 = 1;
      uStack_7ec = 1;
      func_0x0001073d96dc(0xff0c);
      func_0x0001073d94cc();
      uStack_7a8 = 7;
      uStack_7a4 = 0x20;
      func_0x0001073d9ca8(0xff0d);
      func_0x0001073d8fc4();
      uStack_760 = 7;
      uStack_75c = 1;
      func_0x0001073d9534(0xff0e);
      func_0x0001073d94cc();
      uStack_718 = 7;
      uStack_714 = 0x20;
      func_0x0001073d9bcc(0xff0f);
      func_0x0001073d94cc();
      uStack_6d0 = 7;
      uStack_6cc = 1;
      func_0x0001073d96bc(0xff10);
      func_0x0001073d94cc();
      uStack_688 = 6;
      uStack_684 = 0x20;
      func_0x0001073d9c80(0xff11);
      func_0x0001073d94cc();
      uStack_640 = 6;
      uStack_63c = 1;
      func_0x0001073d9524(0xff12);
      func_0x0001073d94cc();
      uStack_5f8 = 4;
      uStack_5f4 = 0x20;
      func_0x0001073d9c74(0xff13);
      func_0x0001073d94cc();
      uStack_5b0 = 4;
      uStack_5ac = 1;
      func_0x0001073d95c4(0xff14);
      func_0x0001073d94cc();
      uStack_568 = 4;
      uStack_564 = 0x20;
      func_0x0001073d9c48(0xff15);
      func_0x0001073d8c00();
      uStack_520 = 4;
      uStack_51c = 1;
      uStack_518 = 0xff16;
      func_0x0001073d8bf0();
      uStack_4d8 = 7;
      uStack_4d4 = 1;
      uStack_4d0 = 0xff17;
      func_0x0001073d8be0();
      uStack_490 = 1;
      uStack_48c = 1;
      uStack_488 = 0x718;
      func_0x0001073d8d0c();
      uStack_448 = 7;
      uStack_444 = 1;
      uStack_440 = 0xff19;
      func_0x0001073d8cbc();
      uStack_400 = 4;
      uStack_3fc = 1;
      uStack_3f8 = 0xff;
      func_0x0001073d8cac();
      uStack_3b8 = 4;
      uStack_3b4 = 1;
      uStack_3b0 = 0x1ff;
      func_0x0001073d8c9c();
      uStack_370 = 4;
      uStack_36c = 1;
      uStack_368 = 0x2ff;
      func_0x0001073d8c7c();
      uStack_328 = 1;
      uStack_324 = 1;
      uStack_320 = 0x3ff;
      func_0x0001073d94cc();
      uStack_2e0 = 2;
      uStack_2dc = 1;
      uStack_2d8 = 0x4ff;
      func_0x0001073d8c8c();
      uStack_298 = 6;
      uStack_294 = 1;
      uStack_290 = 0x5ff;
      func_0x0001073d8d4c();
      uStack_250 = 6;
      uStack_24c = 1;
      uStack_248 = 0x6ff;
      func_0x0001073d8c6c();
      uStack_208 = 7;
      uStack_204 = 1;
      uStack_200 = 0x8ff;
      func_0x0001073d8cfc();
      uStack_1c0 = 1;
      uStack_1bc = 1;
      uStack_1b8 = 0x9ff;
      func_0x0001073d8cec();
      uStack_178 = 1;
      uStack_174 = 1;
      uStack_170 = 0xaff;
      func_0x0001073d94cc();
      uStack_130 = 4;
      uStack_12c = 1;
      uStack_128 = 0xbff;
      func_0x0001073d94cc();
      uStack_e8 = 2;
      uStack_e4 = 1;
      uStack_e0 = 0xcff;
      func_0x0001073d94cc();
      uStack_a0 = 3;
      uStack_9c = 1;
      uStack_98 = 0xdff;
      func_0x0001073d94cc(auStack_a20);
      uStack_58 = 1;
      uStack_54 = 1;
      uStack_50 = 0xeff;
      func_0x0001073d983c(0x113822900);
      func_0x0001073d8468();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca500);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while( true );
  }
  return 0x113822900;
}



/* Entry: 1073d104c; end: 1073d113b;  */

undefined8 FUN_1073d104c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_470 [56];
  undefined1 uStack_438;
  undefined4 uStack_434;
  undefined1 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 uStack_360;
  undefined4 uStack_35c;
  undefined1 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_238;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 uStack_1f0;
  undefined8 uStack_1e8;
  
  func_0x0001073d8bcc();
  if ((bRam0000000113822948 & 1) == 0) {
    iVar2 = 0x13822948;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9bd8();
      func_0x0001073d9b84();
      func_0x0001073d8fa4(0x113822930);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822948);
    }
  }
  func_0x0001073d8b8c();
  if ((bool)in_ZR) {
    uVar3 = 0x113822930;
  }
  else {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822948);
    func_0x0001073d95e4();
    func_0x0001073d8bcc();
    if ((bRam0000000113822988 & 1) == 0) {
      iVar2 = 0x13822988;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8d70();
        func_0x0001073d9bd8();
        func_0x0001073d9b84();
        func_0x0001073d8fa4(0x113822970);
        func_0x0001073d8468();
        do {
          func_0x0001073d9620();
          func_0x0001073d9d7c();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x113822988);
      }
    }
    func_0x0001073d8b8c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001073d98f4();
      func_0x0001073d950c();
      func_0x0001073d9d88();
      ___cxa_guard_abort(0x113822988);
      func_0x0001073d95e4();
      func_0x0001073d8d88();
      bVar1 = false;
      if ((bRam00000001136ca510 & 1) == 0) {
        iVar2 = 0x136ca510;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x0001073d8f2c();
          uStack_438 = 4;
          uStack_434 = 1;
          func_0x0001073d986c(0xff02);
          func_0x0001073d94cc();
          func_0x0001073d9b4c();
          func_0x0001073d9034(0xff03);
          func_0x0001073d94cc();
          uStack_3a8 = 4;
          uStack_3a4 = 1;
          func_0x0001073d9898(0xff04);
          func_0x0001073d94cc();
          uStack_360 = 4;
          uStack_35c = 1;
          func_0x0001073d9284(0xff05);
          func_0x0001073d94cc();
          func_0x0001073d9e24(4);
          func_0x0001073d9a04(0xff06);
          func_0x0001073d94cc();
          uStack_2d0 = 3;
          uStack_2cc = 4;
          func_0x0001073d9274(0xff07);
          func_0x0001073d94cc();
          bVar1 = true;
          uStack_288 = 4;
          uStack_284 = 1;
          func_0x0001073d99f8(0xff08);
          func_0x0001073d94cc();
          uStack_240 = 4;
          uStack_23c = 1;
          uStack_238 = 0xff09;
          func_0x0001073d9338(auStack_470);
          uStack_1f8 = 4;
          uStack_1f4 = 1;
          uStack_1f0 = 0xff;
          func_0x0001073d97c8(0x1138229b0);
          do {
            func_0x0001073d9514();
            func_0x0001073d96b0();
          } while (!(bool)in_ZR);
          ___cxa_guard_release(0x1136ca510);
        }
      }
      func_0x0001073d8ba4(uStack_1e8);
      if ((bool)in_ZR) {
        return 0x1138229b0;
      }
      ___stack_chk_fail();
      func_0x0001073d9f54();
      do {
        func_0x0001073d9504();
        func_0x0001073d9698();
      } while (bVar1);
      do {
        ___cxa_guard_abort(0x1136ca510);
        func_0x0001073d951c();
      } while( true );
    }
    uVar3 = 0x113822970;
  }
  return uVar3;
}



/* Entry: 1073d113c; end: 1073d122b;  */

undefined8 FUN_1073d113c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  long unaff_x21;
  undefined1 auStack_3a0 [56];
  undefined1 uStack_368;
  undefined4 uStack_364;
  undefined1 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 uStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 uStack_170;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined1 uStack_128;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined8 uStack_118;
  
  func_0x0001073d8bcc();
  if ((bRam0000000113822988 & 1) == 0) {
    iVar2 = 0x13822988;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9bd8();
      func_0x0001073d9b84();
      func_0x0001073d8fa4(0x113822970);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822988);
    }
  }
  func_0x0001073d8b8c();
  if ((bool)in_ZR) {
    return 0x113822970;
  }
  ___stack_chk_fail();
  func_0x0001073d98f4();
  do {
    func_0x0001073d950c();
    func_0x0001073d9d88();
  } while (unaff_x21 != 0);
  ___cxa_guard_abort(0x113822988);
  func_0x0001073d95e4();
  func_0x0001073d8d88();
  bVar1 = false;
  if ((bRam00000001136ca510 & 1) == 0) {
    iVar2 = 0x136ca510;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001073d8f2c();
      uStack_368 = 4;
      uStack_364 = 1;
      func_0x0001073d986c(0xff02);
      func_0x0001073d94cc();
      func_0x0001073d9b4c();
      func_0x0001073d9034(0xff03);
      func_0x0001073d94cc();
      uStack_2d8 = 4;
      uStack_2d4 = 1;
      func_0x0001073d9898(0xff04);
      func_0x0001073d94cc();
      uStack_290 = 4;
      uStack_28c = 1;
      func_0x0001073d9284(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d9e24(4);
      func_0x0001073d9a04(0xff06);
      func_0x0001073d94cc();
      uStack_200 = 3;
      uStack_1fc = 4;
      func_0x0001073d9274(0xff07);
      func_0x0001073d94cc();
      bVar1 = true;
      uStack_1b8 = 4;
      uStack_1b4 = 1;
      func_0x0001073d99f8(0xff08);
      func_0x0001073d94cc();
      uStack_170 = 4;
      uStack_16c = 1;
      uStack_168 = 0xff09;
      func_0x0001073d9338(auStack_3a0);
      uStack_128 = 4;
      uStack_124 = 1;
      uStack_120 = 0xff;
      func_0x0001073d97c8(0x1138229b0);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca510);
    }
  }
  func_0x0001073d8ba4(uStack_118);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f54();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (bVar1);
    do {
      ___cxa_guard_abort(0x1136ca510);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x1138229b0;
}



/* Entry: 1073d122c; end: 1073d1427;  */

undefined8 FUN_1073d122c(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined1 auStack_2d0 [56];
  undefined1 uStack_298;
  undefined4 uStack_294;
  undefined1 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca510 & 1) == 0) {
    iVar1 = 0x136ca510;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8f2c();
      uStack_298 = 4;
      uStack_294 = 1;
      func_0x0001073d986c(0xff02);
      func_0x0001073d94cc();
      func_0x0001073d9b4c();
      func_0x0001073d9034(0xff03);
      func_0x0001073d94cc();
      uStack_208 = 4;
      uStack_204 = 1;
      func_0x0001073d9898(0xff04);
      func_0x0001073d94cc();
      uStack_1c0 = 4;
      uStack_1bc = 1;
      func_0x0001073d9284(0xff05);
      func_0x0001073d94cc();
      func_0x0001073d9e24(4);
      func_0x0001073d9a04(0xff06);
      func_0x0001073d94cc();
      uStack_130 = 3;
      uStack_12c = 4;
      func_0x0001073d9274(0xff07);
      func_0x0001073d94cc();
      unaff_x21 = 4;
      uStack_e8 = 4;
      uStack_e4 = 1;
      func_0x0001073d99f8(0xff08);
      func_0x0001073d94cc();
      uStack_a0 = 4;
      uStack_9c = 1;
      uStack_98 = 0xff09;
      func_0x0001073d9338(auStack_2d0);
      uStack_58 = 4;
      uStack_54 = 1;
      uStack_50 = 0xff;
      func_0x0001073d97c8(0x1138229b0);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca510);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f54();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca510);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x1138229b0;
}



/* Entry: 1073d1428; end: 1073d159f;  */

undefined8 FUN_1073d1428(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  
  func_0x0001073d8bcc();
  if ((bRam00000001136ca518 & 1) == 0) {
    iVar1 = 0x136ca518;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8f2c();
      func_0x0001073d9064();
      func_0x0001073d9294();
      func_0x0001073d8fc4();
      func_0x0001073d9b4c();
      func_0x0001073d8e88();
      func_0x0001073d94cc();
      func_0x0001073d9898(0xff03);
      func_0x0001073d8c00();
      func_0x0001073d9888(0xff04);
      func_0x0001073d8bf0();
      func_0x0001073d9f80(0xff05);
      func_0x0001073d8be0();
      func_0x0001073d9de4(0xff06);
      func_0x0001073d9338();
      func_0x0001073d97d8(0x1138229e8);
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca518);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f34();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca518);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x1138229e8;
}



/* Entry: 1073d15a0; end: 1073d165f;  */

undefined8 FUN_1073d15a0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined8 uStack_188;
  undefined1 auStack_70 [56];
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001073d8df4();
  uStack_28 = extraout_x8;
  if ((bRam0000000113822a38 & 1) == 0) {
    iVar1 = 0x13822a38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d9c30();
      func_0x000100060964(auStack_70);
      uStack_38 = 7;
      uStack_34 = 1;
      uStack_30 = 0xff01;
      func_0x0001073da07c(0x113822a20);
      func_0x000104c2f714(auStack_70);
      ___cxa_guard_release(0x113822a38);
    }
  }
  func_0x0001073d8ba4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113822a20;
  }
  ___stack_chk_fail();
  func_0x0001073d9c04();
  func_0x000104c2f714();
  ___cxa_guard_abort(0x113822a38);
  func_0x0001073d95e4();
  func_0x0001073d8bcc();
  if ((bRam0000000113822a78 & 1) == 0) {
    iVar1 = 0x13822a78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9318();
      func_0x0001073d9bd8();
      func_0x0001073d9b84();
      func_0x0001073d9b58();
      func_0x0001073d8fa4(0x113822a60);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822a78);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822a78);
    func_0x0001073d95e4();
    func_0x0001073d8d88();
    if ((bRam00000001136ca520 & 1) == 0) {
      iVar1 = 0x136ca520;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x0001073d8d70();
        func_0x0001073d9044();
        func_0x0001073d93ec();
        func_0x0001073d9b58();
        func_0x0001073d920c(0xff06);
        func_0x0001073d8fc4();
        func_0x0001073d9078();
        func_0x0001073d93dc();
        func_0x0001073d91fc(0xff08);
        func_0x0001073d93cc();
        func_0x0001073d945c();
        func_0x0001073d93bc();
        func_0x0001073d922c();
        func_0x0001073d93ac();
        func_0x0001073d9564(4);
        func_0x0001073d9ac8(0x40b);
        func_0x0001073d8ea8();
        func_0x0001073d9594();
        func_0x0001073d8c00();
        func_0x0001073d9724();
        func_0x0001073d8bf0();
        func_0x0001073d9544();
        func_0x0001073d939c();
        func_0x0001073d96ec();
        func_0x0001073d8be0();
        func_0x0001073d9878(0xff10);
        func_0x0001073d94cc();
        func_0x0001073d9d60();
        func_0x0001073d94cc();
        func_0x0001073d9a58(0x1ff);
        func_0x0001073d94cc();
        func_0x0001073d9f98();
        func_0x0001073d8f1c();
        func_0x0001073da0b4();
        func_0x0001073d95ec(0x113822aa0);
        func_0x0001073da064();
        do {
          func_0x0001073d9514();
          func_0x0001073d96b0();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x1136ca520);
      }
    }
    func_0x0001073d8ba4(uStack_188);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001073d9f44();
      func_0x0001073d9504();
      func_0x0001073d9698();
      do {
        ___cxa_guard_abort(0x1136ca520);
        func_0x0001073d951c();
      } while( true );
    }
    return 0x113822aa0;
  }
  return 0x113822a60;
}



/* Entry: 1073d1660; end: 1073d1743;  */

undefined8 FUN_1073d1660(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_118;
  
  func_0x0001073d8bcc();
  if ((bRam0000000113822a78 & 1) == 0) {
    iVar1 = 0x13822a78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9318();
      func_0x0001073d9bd8();
      func_0x0001073d9b84();
      func_0x0001073d9b58();
      func_0x0001073d8fa4(0x113822a60);
      func_0x0001073d8468();
      do {
        func_0x0001073d9620();
        func_0x0001073d9d7c();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822a78);
    }
  }
  func_0x0001073d8b8c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d98f4();
    do {
      func_0x0001073d950c();
      func_0x0001073d9d88();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822a78);
    func_0x0001073d95e4();
    func_0x0001073d8d88();
    if ((bRam00000001136ca520 & 1) == 0) {
      iVar1 = 0x136ca520;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x0001073d8d70();
        func_0x0001073d9044();
        func_0x0001073d93ec();
        func_0x0001073d9b58();
        func_0x0001073d920c(0xff06);
        func_0x0001073d8fc4();
        func_0x0001073d9078();
        func_0x0001073d93dc();
        func_0x0001073d91fc(0xff08);
        func_0x0001073d93cc();
        func_0x0001073d945c();
        func_0x0001073d93bc();
        func_0x0001073d922c();
        func_0x0001073d93ac();
        func_0x0001073d9564(4);
        func_0x0001073d9ac8(0x40b);
        func_0x0001073d8ea8();
        func_0x0001073d9594();
        func_0x0001073d8c00();
        func_0x0001073d9724();
        func_0x0001073d8bf0();
        func_0x0001073d9544();
        func_0x0001073d939c();
        func_0x0001073d96ec();
        func_0x0001073d8be0();
        func_0x0001073d9878(0xff10);
        func_0x0001073d94cc();
        func_0x0001073d9d60();
        func_0x0001073d94cc();
        func_0x0001073d9a58(0x1ff);
        func_0x0001073d94cc();
        func_0x0001073d9f98();
        func_0x0001073d8f1c();
        func_0x0001073da0b4();
        func_0x0001073d95ec(0x113822aa0);
        func_0x0001073da064();
        do {
          func_0x0001073d9514();
          func_0x0001073d96b0();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x1136ca520);
      }
    }
    func_0x0001073d8ba4(uStack_118);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001073d9f44();
      func_0x0001073d9504();
      func_0x0001073d9698();
      do {
        ___cxa_guard_abort(0x1136ca520);
        func_0x0001073d951c();
      } while( true );
    }
    return 0x113822aa0;
  }
  return 0x113822a60;
}



/* Entry: 1073d1744; end: 1073d191f;  */

undefined8 FUN_1073d1744(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca520 & 1) == 0) {
    iVar1 = 0x136ca520;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9044();
      func_0x0001073d93ec();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff06);
      func_0x0001073d8fc4();
      func_0x0001073d9078();
      func_0x0001073d93dc();
      func_0x0001073d91fc(0xff08);
      func_0x0001073d93cc();
      func_0x0001073d945c();
      func_0x0001073d93bc();
      func_0x0001073d922c();
      func_0x0001073d93ac();
      func_0x0001073d9564(4);
      func_0x0001073d9ac8(0x40b);
      func_0x0001073d8ea8();
      func_0x0001073d9594();
      func_0x0001073d8c00();
      func_0x0001073d9724();
      func_0x0001073d8bf0();
      func_0x0001073d9544();
      func_0x0001073d939c();
      func_0x0001073d96ec();
      func_0x0001073d8be0();
      func_0x0001073d9878(0xff10);
      func_0x0001073d94cc();
      func_0x0001073d9d60();
      func_0x0001073d94cc();
      func_0x0001073d9a58(0x1ff);
      func_0x0001073d94cc();
      func_0x0001073d9f98();
      func_0x0001073d8f1c();
      func_0x0001073da0b4();
      func_0x0001073d95ec(0x113822aa0);
      func_0x0001073da064();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca520);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f44();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca520);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822aa0;
}



/* Entry: 1073d1920; end: 1073d1afb;  */

undefined8 FUN_1073d1920(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x21;
  undefined8 uStack_48;
  
  func_0x0001073d8d88();
  if ((bRam00000001136ca530 & 1) == 0) {
    iVar1 = 0x136ca530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001073d8d70();
      func_0x0001073d9044();
      func_0x0001073d93ec();
      func_0x0001073d9b58();
      func_0x0001073d920c(0xff06);
      func_0x0001073d8fc4();
      func_0x0001073d9078();
      func_0x0001073d93dc();
      func_0x0001073d91fc(0xff08);
      func_0x0001073d93cc();
      func_0x0001073d945c();
      func_0x0001073d93bc();
      func_0x0001073d922c();
      func_0x0001073d93ac();
      func_0x0001073d9564(4);
      func_0x0001073d9ac8(0x40b);
      func_0x0001073d8ea8();
      func_0x0001073d9594();
      func_0x0001073d8c00();
      func_0x0001073d9724();
      func_0x0001073d8bf0();
      func_0x0001073d9544();
      func_0x0001073d939c();
      func_0x0001073d96ec();
      func_0x0001073d8be0();
      func_0x0001073d9878(0xff10);
      func_0x0001073d94cc();
      func_0x0001073d9d60();
      func_0x0001073d94cc();
      func_0x0001073d9a58(0x1ff);
      func_0x0001073d94cc();
      func_0x0001073d9f98();
      func_0x0001073d8f1c();
      func_0x0001073da0b4();
      func_0x0001073d95ec(0x113822ad0);
      func_0x0001073da064();
      do {
        func_0x0001073d9514();
        func_0x0001073d96b0();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x1136ca530);
    }
  }
  func_0x0001073d8ba4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073d9f44();
    do {
      func_0x0001073d9504();
      func_0x0001073d9698();
    } while (unaff_x21 != 0);
    do {
      ___cxa_guard_abort(0x1136ca530);
      func_0x0001073d951c();
    } while( true );
  }
  return 0x113822ad0;
}



/* Entry: 1073d1afc; end: 1073d328f;  */

undefined * FUN_1073d1afc(ulong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_1f8 [56];
  undefined4 uStack_1c0;
  undefined4 uStack_40;
  
  func_0x0001073d8bcc();
  iVar2 = (int)param_1;
  uVar1 = iVar2 == 0x37;
  switch(param_1 & 0xffffffff) {
  case 0:
    puVar3 = (undefined *)0x1136caa90;
    if (((bRam00000001136ca550 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9998();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136caa90);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caa90;
    }
    break;
  case 1:
    puVar3 = (undefined *)0x1136caad8;
    if (((bRam00000001136ca568 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      FUN_1073d86a8(0x1136caad8,auStack_1f8,3);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caad8;
    }
    break;
  case 2:
    puVar3 = (undefined *)0x1136cab20;
    if (((bRam00000001136ca580 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9d08();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cab20);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cab20;
    }
    break;
  case 3:
    puVar3 = &UNK_10de64f60;
    break;
  case 4:
    puVar3 = &UNK_10de64fa8;
    break;
  case 5:
    puVar3 = &UNK_10de64ff0;
    break;
  case 6:
    puVar3 = (undefined *)0x1136cabf8;
    if (((bRam00000001136ca5c8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9628();
      func_0x0001073d8eb8();
      func_0x0001073d9628();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cabf8);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cabf8;
    }
    break;
  case 7:
    puVar3 = (undefined *)0x1136cac40;
    if (((bRam00000001136ca5e0 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cac40);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cac40;
    }
    break;
  case 8:
    puVar3 = (undefined *)0x1136cac88;
    if (((bRam00000001136ca5f8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cac88);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cac88;
    }
    break;
  case 9:
    puVar3 = &UNK_10de650c8;
    break;
  case 10:
    puVar3 = (undefined *)0x1136cad00;
    if (((bRam00000001136ca620 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9628();
      func_0x0001073d8eb8();
      func_0x0001073d9628();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cad00);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cad00;
    }
    break;
  case 0xb:
    puVar3 = (undefined *)0x1136cad48;
    if (((bRam00000001136ca638 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cad48);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cad48;
    }
    break;
  case 0xc:
    puVar3 = (undefined *)0x1136cad90;
    if (((bRam00000001136ca650 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cad90);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cad90;
    }
    break;
  case 0xd:
    puVar3 = &UNK_10de651a0;
    break;
  case 0xe:
    puVar3 = &UNK_10de651e8;
    break;
  case 0xf:
    puVar3 = &UNK_10de65230;
    break;
  case 0x10:
    puVar3 = (undefined *)0x1136cae68;
    if (((bRam00000001136ca698 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d94d4();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cae68);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cae68;
    }
    break;
  case 0x11:
    puVar3 = (undefined *)0x1136caeb0;
    if (((bRam00000001136ca6b0 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9998();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136caeb0);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caeb0;
    }
    break;
  case 0x12:
    puVar3 = (undefined *)0x1136caef8;
    if (((bRam00000001136ca6c8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9998();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136caef8);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caef8;
    }
    break;
  case 0x13:
    puVar3 = (undefined *)0x1136caf40;
    if (((bRam00000001136ca6e0 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136caf40);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caf40;
    }
    break;
  case 0x14:
    puVar3 = (undefined *)0x1136caf88;
    if (((bRam00000001136ca6f8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136caf88);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136caf88;
    }
    break;
  case 0x15:
    puVar3 = (undefined *)0x1136cafd0;
    if (((bRam00000001136ca710 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9d08();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cafd0);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cafd0;
    }
    break;
  case 0x16:
    puVar3 = (undefined *)0x1136cb018;
    if (((bRam00000001136ca728 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9d08();
      func_0x0001073d9628();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cb018);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb018;
    }
    break;
  case 0x17:
    puVar3 = (undefined *)0x1136cb060;
    if (((bRam00000001136ca740 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9998();
      func_0x0001073d8d70();
      func_0x0001073d998c();
      func_0x0001073d9628();
      func_0x0001073d9644();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073da124();
      func_0x0001073d9628();
      func_0x0001073d99e0();
      func_0x0001073da118(auStack_1f8);
      func_0x0001073d9628();
      func_0x0001073d9b64();
      func_0x0001073d8f94(0x1136cb060);
      FUN_1073d86a8();
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb060;
    }
    break;
  case 0x18:
    puVar3 = (undefined *)0x1136cb0a8;
    if (((bRam00000001136ca758 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9d08();
      func_0x0001073d8d70();
      func_0x0001073d998c();
      func_0x0001073d8dbc();
      func_0x0001073d9644();
      func_0x0001073da124();
      func_0x0001073d9628();
      func_0x0001073d979c();
      func_0x0001073da118();
      func_0x0001073d9628();
      func_0x0001073d99e0();
      func_0x0001073d95ec(0x1136cb0a8);
      FUN_1073d86a8();
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb0a8;
    }
    break;
  case 0x19:
    puVar3 = (undefined *)0x1136cb0f0;
    if (((bRam00000001136ca770 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d9998();
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9014();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb0f0);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb0f0;
    }
    break;
  case 0x1a:
    puVar3 = (undefined *)0x1136cb138;
    if (((bRam00000001136ca788 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cb138);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb138;
    }
    break;
  case 0x1b:
    puVar3 = (undefined *)0x1136cb180;
    if (((bRam00000001136ca7a0 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cb180);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb180;
    }
    break;
  case 0x1c:
    puVar3 = (undefined *)0x1136cb1c8;
    if (((bRam00000001136ca7b8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9024();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cb1c8);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb1c8;
    }
    break;
  case 0x1d:
    puVar3 = (undefined *)0x1136cb210;
    if (((bRam00000001136ca7d0 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8c10();
      func_0x0001073d998c();
      func_0x0001073d9d08();
      func_0x0001073d9628();
      func_0x0001073d8eb8();
      func_0x0001073d8dbc();
      func_0x0001073d979c();
      func_0x0001073d8e2c(0x1136cb210);
      do {
        func_0x0001073d982c();
        func_0x0001073d99d4();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb210;
    }
    break;
  case 0x1e:
    puVar3 = (undefined *)0x1136cb258;
    if (((bRam00000001136ca7e8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9650();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb258);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb258;
    }
    break;
  case 0x1f:
    puVar3 = (undefined *)0x1136cb2a0;
    if (((bRam00000001136ca800 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb2a0);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb2a0;
    }
    break;
  case 0x20:
    puVar3 = (undefined *)0x1136cb2e8;
    if (((bRam00000001136ca818 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb2e8);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb2e8;
    }
    break;
  case 0x21:
    puVar3 = (undefined *)0x1136cb330;
    if (((bRam00000001136ca830 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb330);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb330;
    }
    break;
  case 0x22:
    puVar3 = (undefined *)0x1136cb378;
    if (((bRam00000001136ca848 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d9c();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb378);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb378;
    }
    break;
  case 0x23:
    puVar3 = (undefined *)0x1136cb3c0;
    if (((bRam00000001136ca860 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9650();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb3c0);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb3c0;
    }
    break;
  case 0x24:
    puVar3 = (undefined *)0x1136cb408;
    if (((bRam00000001136ca878 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9650();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb408);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb408;
    }
    break;
  case 0x25:
    puVar3 = (undefined *)0x1136cb450;
    if (((bRam00000001136ca890 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d91bc();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb450);
      func_0x0001073d94dc();
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb450;
    }
    break;
  case 0x26:
    puVar3 = (undefined *)0x1136cb498;
    if (((bRam00000001136ca8a8 & 1) == 0) && (func_0x0001073d960c(), iVar2 != 0)) {
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9650();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb498);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb498;
    }
    break;
  case 0x27:
    puVar3 = (undefined *)0x1136cb4e0;
    if (((bRam00000001136ca8c0 & 1) == 0) &&
       (func_0x0001073d960c(), puVar3 = (undefined *)0x1136cb4e0, iVar2 != 0)) {
      func_0x0001073d8d70();
      uStack_1c0 = 0;
      func_0x0001073d9650();
      func_0x0001073d9644();
      func_0x0001073d8d3c(0x1136cb4e0);
      do {
        func_0x0001073d9818();
        func_0x0001073d9638();
      } while (!(bool)uVar1);
      func_0x0001073d9604();
      puVar3 = (undefined *)0x1136cb4e0;
    }
    break;
  case 0x28:
    if ((bRam00000001136ca8d8 & 1) == 0) {
      iVar2 = 0x136ca8d8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9998();
        func_0x0001073d8d70();
        uStack_1c0 = 0;
        func_0x0001073d94fc();
        func_0x0001073d9644();
        func_0x0001073d9820();
        func_0x0001073d94fc();
        func_0x0001073d979c();
        func_0x0001073da124();
        func_0x0001073d94fc();
        func_0x0001073d99e0();
        func_0x0001073da118();
        func_0x0001073d94fc();
        func_0x0001073d9b64();
        func_0x0001073d94fc();
        func_0x0001073da0f4();
        func_0x0001073d94fc(auStack_1f8);
        uStack_40 = 6;
        func_0x0001073d95ec(0x1136cb528);
        FUN_1073d86a8();
        do {
          func_0x0001073d9514();
          func_0x0001073d9664();
        } while (!(bool)uVar1);
        ___cxa_guard_release(0x1136ca8d8);
      }
    }
    puVar3 = (undefined *)0x1136cb528;
    break;
  case 0x29:
    if ((bRam00000001136ca8f0 & 1) == 0) {
      iVar2 = 0x136ca8f0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9d08();
        func_0x0001073d8d70();
        uStack_1c0 = 0;
        func_0x0001073d94fc();
        func_0x0001073d9644();
        func_0x0001073d9820();
        func_0x0001073da124();
        func_0x0001073d94fc();
        func_0x0001073d979c();
        func_0x0001073da118();
        func_0x0001073d94fc();
        func_0x0001073d99e0();
        func_0x0001073d94fc();
        func_0x0001073d9b64();
        func_0x0001073d94fc();
        func_0x0001073da0f4();
        func_0x0001073d95ec(0x1136cb570);
        FUN_1073d86a8();
        do {
          func_0x0001073d9514();
          func_0x0001073d9664();
        } while (!(bool)uVar1);
        ___cxa_guard_release(0x1136ca8f0);
      }
    }
    puVar3 = (undefined *)0x1136cb570;
    break;
  case 0x2a:
    if ((bRam00000001136ca908 & 1) == 0) {
      iVar2 = 0x136ca908;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8d9c();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb5b8);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca908);
      }
    }
    puVar3 = (undefined *)0x1136cb5b8;
    break;
  case 0x2b:
    if ((bRam00000001136ca920 & 1) == 0) {
      iVar2 = 0x136ca920;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d8d9c();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb600);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca920);
      }
    }
    puVar3 = (undefined *)0x1136cb600;
    break;
  case 0x2c:
    puVar3 = &UNK_10de65638;
    break;
  case 0x2d:
    puVar3 = &UNK_10de65680;
    break;
  case 0x2e:
    if ((bRam00000001136ca958 & 1) == 0) {
      iVar2 = 0x136ca958;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d91bc();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb6a8);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca958);
      }
    }
    puVar3 = (undefined *)0x1136cb6a8;
    break;
  case 0x2f:
    if ((bRam00000001136ca970 & 1) == 0) {
      iVar2 = 0x136ca970;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d91bc();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb6f0);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca970);
      }
    }
    puVar3 = (undefined *)0x1136cb6f0;
    break;
  case 0x30:
    puVar3 = &UNK_10de65728;
    break;
  case 0x31:
    puVar3 = &UNK_10de65770;
    break;
  case 0x32:
    if ((bRam00000001136ca9a8 & 1) == 0) goto code_r0x0001073d2884;
    goto LAB_1073d1ba0;
  case 0x33:
    if ((bRam00000001136ca9c0 & 1) == 0) {
      iVar2 = 0x136ca9c0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d94d4();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb7e0);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca9c0);
      }
    }
    puVar3 = (undefined *)0x1136cb7e0;
    break;
  case 0x34:
    puVar3 = &UNK_10de65818;
    break;
  case 0x35:
    puVar3 = &UNK_10de65860;
    break;
  case 0x36:
    if ((bRam00000001136ca9f8 & 1) == 0) {
      iVar2 = 0x136ca9f8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d91bc();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb888);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136ca9f8);
      }
    }
    puVar3 = (undefined *)0x1136cb888;
    break;
  case 0x37:
    if ((bRam00000001136caa10 & 1) == 0) {
      iVar2 = 0x136caa10;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d91bc();
        uStack_1c0 = 0;
        func_0x0001073d8ef0(0x1136cb8d0);
        func_0x0001073d94dc();
        ___cxa_guard_release(0x1136caa10);
      }
    }
    puVar3 = (undefined *)0x1136cb8d0;
    break;
  default:
    puVar3 = (undefined *)0x1136caa30;
  }
  while (func_0x0001073d8b8c(), !(bool)uVar1) {
    ___stack_chk_fail();
code_r0x0001073d2884:
    iVar2 = 0x136ca9a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001073d94d4();
      uStack_1c0 = 0;
      func_0x0001073d8ef0(0x1136cb798);
      func_0x0001073d94dc();
      ___cxa_guard_release(0x1136ca9a8);
    }
LAB_1073d1ba0:
    puVar3 = (undefined *)0x1136cb798;
  }
  return puVar3;
}



/* Entry: 1073d3290; end: 1073d35b3;  */

undefined * FUN_1073d3290(undefined4 param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = &UNK_10de64ed0;
    break;
  case 1:
    puVar1 = &UNK_10de64f00;
    break;
  case 2:
    puVar1 = &UNK_10de64f30;
    break;
  case 3:
    puVar1 = &UNK_10de64f78;
    break;
  case 4:
    puVar1 = &UNK_10de64fc0;
    break;
  case 5:
    puVar1 = &UNK_10de65008;
    break;
  case 6:
    puVar1 = &UNK_10de65038;
    break;
  case 7:
    puVar1 = &UNK_10de65068;
    break;
  case 8:
    puVar1 = &UNK_10de65098;
    break;
  case 9:
    puVar1 = &UNK_10de650e0;
    break;
  case 10:
    puVar1 = &UNK_10de65110;
    break;
  case 0xb:
    puVar1 = &UNK_10de65140;
    break;
  case 0xc:
    puVar1 = &UNK_10de65170;
    break;
  case 0xd:
    puVar1 = &UNK_10de651b8;
    break;
  case 0xe:
    puVar1 = &UNK_10de65200;
    break;
  case 0xf:
    puVar1 = &UNK_10de65248;
    break;
  case 0x10:
    puVar1 = &UNK_10de65278;
    break;
  case 0x11:
    FUN_1073d35b4();
    puVar1 = (undefined *)0x113822538;
    break;
  case 0x12:
    FUN_1073d36bc();
    puVar1 = (undefined *)0x113822570;
    break;
  case 0x13:
    FUN_1073d37c4();
    puVar1 = (undefined *)0x1138225a8;
    break;
  case 0x14:
    FUN_1073d38e4();
    puVar1 = (undefined *)0x1138225d8;
    break;
  case 0x15:
    FUN_1073d3a04();
    puVar1 = (undefined *)0x113822608;
    break;
  case 0x16:
    FUN_1073d3b0c();
    puVar1 = (undefined *)0x113822640;
    break;
  case 0x17:
    FUN_1073d3c28();
    puVar1 = (undefined *)0x113822670;
    break;
  case 0x18:
    FUN_1073d3db0();
    puVar1 = (undefined *)0x1138226a0;
    break;
  case 0x19:
    FUN_1073d3f3c();
    puVar1 = (undefined *)0x1138226d0;
    break;
  case 0x1a:
    FUN_1073d409c();
    puVar1 = (undefined *)0x113822700;
    break;
  case 0x1b:
    FUN_1073d41d4();
    puVar1 = (undefined *)0x113822730;
    break;
  case 0x1c:
    FUN_1073d4348();
    puVar1 = (undefined *)0x113822760;
    break;
  case 0x1d:
    FUN_1073d44b4();
    puVar1 = (undefined *)0x113822790;
    break;
  case 0x1e:
    puVar1 = &UNK_10de653e0;
    break;
  case 0x1f:
    puVar1 = &UNK_10de65410;
    break;
  case 0x20:
    puVar1 = &UNK_10de65440;
    break;
  case 0x21:
    puVar1 = &UNK_10de65470;
    break;
  case 0x22:
    puVar1 = &UNK_10de654a0;
    break;
  case 0x23:
    puVar1 = &UNK_10de654d0;
    break;
  case 0x24:
    puVar1 = &UNK_10de65500;
    break;
  case 0x25:
    FUN_1073d4620();
    puVar1 = (undefined *)0x113822878;
    break;
  case 0x26:
    FUN_1073d4704();
    puVar1 = (undefined *)0x1138228b0;
    break;
  case 0x27:
    FUN_1073d4828();
    puVar1 = (undefined *)0x1138228e8;
    break;
  case 0x28:
    puVar1 = &UNK_10de65578;
    break;
  case 0x29:
    puVar1 = &UNK_10de655a8;
    break;
  case 0x2a:
    puVar1 = &UNK_10de655d8;
    break;
  case 0x2b:
    puVar1 = &UNK_10de65608;
    break;
  case 0x2c:
    puVar1 = &UNK_10de65650;
    break;
  case 0x2d:
    puVar1 = &UNK_10de65698;
    break;
  case 0x2e:
    puVar1 = &UNK_10de656c8;
    break;
  case 0x2f:
    puVar1 = &UNK_10de656f8;
    break;
  case 0x30:
    puVar1 = &UNK_10de65740;
    break;
  case 0x31:
    puVar1 = &UNK_10de65788;
    break;
  case 0x32:
    puVar1 = &UNK_10de657b8;
    break;
  case 0x33:
    puVar1 = &UNK_10de657e8;
    break;
  case 0x34:
    puVar1 = &UNK_10de65830;
    break;
  case 0x35:
    puVar1 = &UNK_10de65878;
    break;
  case 0x36:
    FUN_1073d496c();
    puVar1 = (undefined *)0x113822ab8;
    break;
  case 0x37:
    FUN_1073d4a90();
    puVar1 = (undefined *)0x113822ae8;
    break;
  default:
    puVar1 = (undefined *)0x113822320;
  }
  return puVar1;
}



/* Entry: 1073d35b4; end: 1073d36bb;  */

undefined8 FUN_1073d35b4(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  
  func_0x0001073d8bcc();
  if ((bRam0000000113822550 & 1) == 0) {
    iVar2 = 0x13822550;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001073d8d70();
      func_0x0001073da058();
      func_0x0001073d9f74(8);
      func_0x0001073d9968();
      func_0x0001073d94fc();
      func_0x0001073d9a1c();
      func_0x0001073d8fe4();
      func_0x0001073d95b4(0x113822538);
      FUN_1073d898c();
      do {
        func_0x0001073d9620();
        func_0x0001073d9638();
      } while (!(bool)in_ZR);
      ___cxa_guard_release(0x113822550);
    }
  }
  func_0x0001073d8b8c();
  if ((bool)in_ZR) {
    uVar3 = 0x113822538;
  }
  else {
    ___stack_chk_fail();
    func_0x0001073d9574();
    do {
      func_0x0001073d950c();
      func_0x0001073d95f8();
    } while (unaff_x21 != 0);
    ___cxa_guard_abort(0x113822550);
    func_0x0001073d95e4();
    func_0x0001073d8bcc();
    if ((bRam0000000113822588 & 1) == 0) {
      iVar2 = 0x13822588;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x0001073d9968();
        func_0x0001073d8d70();
        func_0x0001073da144();
        func_0x0001073d9f74(9);
        func_0x0001073d8fe4();
        func_0x0001073d9a1c();
        func_0x0001073d94fc();
        func_0x0001073d95b4(0x113822570);
        FUN_1073d898c();
        do {
          func_0x0001073d9620();
          func_0x0001073d9638();
        } while (!(bool)in_ZR);
        ___cxa_guard_release(0x113822588);
      }
    }
    func_0x0001073d8b8c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001073d9574();
      func_0x0001073d950c();
      func_0x0001073d95f8();
      ___cxa_guard_abort(0x113822588);
      func_0x0001073d95e4();
      func_0x0001073d8bcc();
      bVar1 = false;
      if ((bRam00000001136ca418 & 1) == 0) {
        iVar2 = 0x136ca418;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x0001073d9968();
          func_0x0001073d8d70();
          func_0x0001073da144();
          func_0x0001073d9f74(0xc);
          func_0x0001073d8fe4();
          func_0x0001073d9820();
          func_0x0001073da100();
          func_0x0001073d94fc();
          bVar1 = true;
          func_0x0001073da0e8();
          func_0x0001073d94fc();
          func_0x0001073d9670(0x1138225a8);
          func_0x0001073da06c();
          do {
            func_0x0001073d9620();
            func_0x0001073d9638();
          } while (!(bool)in_ZR);
          ___cxa_guard_release(0x1136ca418);
        }
      }
      func_0x0001073d8b8c();
      if ((bool)in_ZR) {
        uVar3 = 0x1138225a8;
      }
      else {
        ___stack_chk_fail();
        func_0x0001073d98cc();
        do {
          func_0x0001073d950c();
          func_0x0001073d95f8();
        } while (bVar1);
        ___cxa_guard_abort(0x1136ca418);
        func_0x0001073d95e4();
        func_0x0001073d8bcc();
        bVar1 = false;
        if ((bRam00000001136ca428 & 1) == 0) {
          iVar2 = 0x136ca428;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x0001073d9968();
            func_0x0001073d8d70();
            func_0x0001073da144();
            func_0x0001073d9f74(0xb);
            func_0x0001073d8fe4();
            func_0x0001073d9820();
            func_0x0001073da100();
            func_0x0001073d94fc();
            bVar1 = true;
            func_0x0001073da0e8();
            func_0x0001073d94fc();
            func_0x0001073d9670(0x1138225d8);
            func_0x0001073da06c();
            do {
              func_0x0001073d9620();
              func_0x0001073d9638();
            } while (!(bool)in_ZR);
            ___cxa_guard_release(0x1136ca428);
          }
        }
        func_0x0001073d8b8c();
        if ((bool)in_ZR) {
          uVar3 = 0x1138225d8;
        }
        else {
          ___stack_chk_fail();
          func_0x0001073d98cc();
          do {
            func_0x0001073d950c();
            func_0x0001073d95f8();
          } while (bVar1);
          ___cxa_guard_abort(0x1136ca428);
          func_0x0001073d95e4();
          func_0x0001073d8bcc();
          bVar1 = false;
          if ((bRam0000000113822620 & 1) == 0) {
            iVar2 = 0x13822620;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x0001073d925c();
              bVar1 = true;
              func_0x0001073d9968();
              func_0x0001073d94fc();
              func_0x0001073d9a1c();
              func_0x0001073d8fe4();
              func_0x0001073d95b4(0x113822608);
              FUN_1073d898c();
              do {
                func_0x0001073d9620();
                func_0x0001073d9638();
              } while (!(bool)in_ZR);
              ___cxa_guard_release(0x113822620);
            }
          }
          func_0x0001073d8b8c();
          if ((bool)in_ZR) {
            return 0x113822608;
          }
          ___stack_chk_fail();
          func_0x0001073d9574();
          do {
            func_0x0001073d950c();
            func_0x0001073d95f8();
          } while (bVar1);
          ___cxa_guard_abort(0x113822620);
          func_0x0001073d95e4();
          func_0x0001073d8bcc();
          bVar1 = false;
          if ((bRam00000001136ca440 & 1) == 0) {
            iVar2 = 0x136ca440;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x0001073d9968();
              func_0x0001073d8d70();
              func_0x0001073da144();
              func_0x0001073d9f74();
              func_0x0001073d8fe4();
              func_0x0001073d9820();
              func_0x0001073da100();
              func_0x0001073d94fc();
              bVar1 = true;
              func_0x0001073da0e8();
              func_0x0001073d94fc();
              func_0x0001073d9670(0x113822640);
              func_0x0001073da06c();
              do {
                func_0x0001073d9620();
                func_0x0001073d9638();
              } while (!(bool)in_ZR);
              ___cxa_guard_release(0x1136ca440);
            }
          }
          func_0x0001073d8b8c();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001073d98cc();
            do {
              func_0x0001073d950c();
              func_0x0001073d95f8();
            } while (bVar1);
            ___cxa_guard_abort(0x1136ca440);
            func_0x0001073d95e4();
            func_0x0001073d8bcc();
            lVar4 = 0;
            if ((bRam00000001136ca450 & 1) == 0) {
              iVar2 = 0x136ca450;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x0001073d8d70();
                func_0x0001073d99ec(8);
                func_0x0001073d916c();
                func_0x0001073da174();
                func_0x0001073d91ec(10);
                func_0x0001073d94cc();
                func_0x0001073d99bc(0xc);
                func_0x0001073d8efc();
                func_0x0001073d94a8(0xe);
                func_0x0001073d8d2c();
                func_0x0001073d9b70(0x10);
                func_0x0001073d94cc();
                func_0x0001073d9a94(0x12);
                func_0x0001073d94cc();
                lVar4 = 3;
                func_0x0001073da0dc(0x14);
                func_0x0001073d94cc();
                func_0x0001073d91ac(0x113822670);
                do {
                  func_0x0001073d9514();
                  func_0x0001073d9664();
                } while (!(bool)in_ZR);
                ___cxa_guard_release(0x1136ca450);
              }
            }
            func_0x0001073d8b8c();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001073d9934();
              do {
                func_0x0001073d9504();
                func_0x0001073d9848();
              } while (lVar4 != 0);
              do {
                ___cxa_guard_abort(0x1136ca450);
                func_0x0001073d951c();
              } while( true );
            }
            return 0x113822670;
          }
          uVar3 = 0x113822640;
        }
      }
      return uVar3;
    }
    uVar3 = 0x113822570;
  }
  return uVar3;
}


