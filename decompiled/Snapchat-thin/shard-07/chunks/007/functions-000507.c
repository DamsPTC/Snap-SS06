/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059767fc; end: 10597689f;  */

void FUN_1059767fc(void)

{
  return;
}



/* Entry: 1059768a0; end: 105976973;  */

void FUN_1059768a0(long param_1,long param_2)

{
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [24];
  
  FUN_105976974(auStack_70,param_2);
  auStack_90[0] = 0;
  uStack_78 = 0;
  func_0x00010bcce248(param_2,&UNK_10f316023,0xf);
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\x04')) {
    func_0x0001098f3384(auStack_38);
    func_0x000100602604(auStack_90,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  func_0x000105976e80(param_1 + 0xc0);
  func_0x000105976e50();
  func_0x000105976ea0();
  func_0x000105976e80(param_1 + 0xe0);
  func_0x000105976e50();
  func_0x000105976e70();
  return;
}



/* Entry: 105976974; end: 105976a0b;  */

void FUN_105976974(undefined1 *param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  *param_1 = 0;
  param_1[0x30] = 0;
  func_0x00010bcce248(param_2,&UNK_10f316011,0x11);
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\x04')) {
    func_0x0001098f3384(auStack_70);
    FUN_105976c14(auStack_58,auStack_70);
    FUN_105976dc4(param_1,auStack_58);
    FUN_105976cd8(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  return;
}



/* Entry: 105976a0c; end: 105976abf;  */

void FUN_105976a0c(undefined1 *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x10);
    puVar3 = (ulong *)(param_2 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    lVar5 = (long)*(int *)(param_2 + 0x18) << 3;
    do {
      if (lVar5 == 0) {
        return;
      }
      uVar2 = *puVar3;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (*(int *)(uVar2 + 0x1c) != 2);
    ppuVar4 = *(undefined ***)(*(long *)(uVar2 + 0x10) + 0x18);
    ppuVar1 = &PTR_PTR_113113b38;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    FUN_10598997c(auStack_38,ppuVar1);
    func_0x000100602604(param_1,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 105976ac0; end: 105976b83;  */

void FUN_105976ac0(long param_1,long param_2)

{
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [24];
  
  FUN_105976b84(auStack_70,param_2);
  auStack_90[0] = 0;
  uStack_78 = 0;
  func_0x00010002b838(auStack_38,&UNK_10f316023);
  func_0x000100ab9b18(param_2,auStack_38);
  func_0x000105976e58();
  if (param_2 != 0) {
    func_0x0001002a8234(auStack_90,param_2 + 0x28);
  }
  func_0x000105976e80(param_1 + 0xc0);
  func_0x000105976e50();
  func_0x000105976ea0();
  func_0x000105976e80(param_1 + 0xe0);
  func_0x000105976e50();
  func_0x000105976e70();
  return;
}



/* Entry: 105976b84; end: 105976c13;  */

void FUN_105976b84(undefined1 *param_1,long param_2)

{
  undefined1 auStack_58 [56];
  
  *param_1 = 0;
  param_1[0x30] = 0;
  func_0x00010002b838(auStack_58,&UNK_10f316011);
  func_0x000100ab9b18(param_2,auStack_58);
  func_0x000105976e64();
  if (param_2 != 0) {
    FUN_105976c14(auStack_58,param_2 + 0x28);
    FUN_105976dc4(param_1,auStack_58);
    FUN_105976cd8(auStack_58);
  }
  return;
}



/* Entry: 105976c14; end: 105976cd7;  */

void FUN_105976c14(undefined1 *param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] != 0) {
      param_2 = (long *)*param_2;
      goto LAB_105976c44;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_105976c44:
    func_0x000100651b10(&uStack_38,param_2);
    ppuStack_68 = &PTR_FUN_1108c9170;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    pppuVar1 = &ppuStack_68;
    func_0x00010006369c(pppuVar1,uStack_38,iStack_30 - (int)uStack_38);
    if (((ulong)pppuVar1 & 1) == 0) {
      *param_1 = 0;
      param_1[0x30] = 0;
    }
    else {
      func_0x000105976cf8(param_1,&ppuStack_68);
    }
    FUN_10599d7c0(&ppuStack_68);
    func_0x000100100fec(&uStack_38);
    return;
  }
  *param_1 = 0;
  param_1[0x30] = 0;
  return;
}



/* Entry: 105976cd8; end: 105976d13;  */

void FUN_105976cd8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10599d7c0();
  }
  return;
}



/* Entry: 105976d14; end: 105976d1f;  */

undefined8 * FUN_105976d14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108c9170;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_105976d60(param_1,param_2);
  return param_1;
}



/* Entry: 105976d20; end: 105976d5f;  */

undefined8 * FUN_105976d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1108c9170;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_105976d60(param_1,param_3);
  return param_1;
}



/* Entry: 105976d60; end: 105976dc3;  */

long FUN_105976d60(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10599da18(param_1);
    }
    else {
      FUN_10599d9e0(param_1);
    }
  }
  return param_1;
}



/* Entry: 105976dc4; end: 105976de7;  */

undefined8 FUN_105976dc4(undefined8 param_1)

{
  FUN_105976de8();
  return param_1;
}



/* Entry: 105976de8; end: 105976e0f;  */

long FUN_105976de8(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_10599d7c0();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return param_1;
    }
    FUN_105976d14();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_10599da18(param_1);
      }
      else {
        FUN_10599d9e0(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 105976e10; end: 105976e4f;  */

void FUN_105976e10(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10599d7c0();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 105976e50; end: 105976ebb;  */

void FUN_105976e50(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 105976ebc; end: 105976f1b;  */

undefined8 * FUN_105976ebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1059774d4(param_1 + 3);
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  func_0x0001004b4eb0(param_1 + 0x1b);
  return param_1;
}



/* Entry: 105976f1c; end: 105976f67;  */

undefined8 FUN_105976f1c(long *param_1)

{
  undefined8 unaff_x19;
  
  FUN_105976f68(param_1 + 3);
  if (((*(byte *)(param_1 + 2) & 1) == 0) && (*param_1 != 0)) {
    FUN_105976f90(param_1);
  }
  FUN_10597751c(param_1 + 0x20);
  func_0x000100902b18();
  if (param_1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 105976f68; end: 105976f8f;  */

void FUN_105976f68(long param_1)

{
  func_0x0001005529b4(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 105976f90; end: 1059773a7;  */

void FUN_105976f90(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_d8 [24];
  char *apcStack_c0 [3];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    puVar3 = param_1 + 0x1b;
    func_0x0001005e3518();
    uStack_f8 = 1;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_1108c28b8;
    uStack_88 = 0;
    uStack_70 = 0x1f;
    puStack_100 = puVar3;
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,&ppuStack_90,&puStack_100);
    func_0x000105977a80();
  }
  pcVar11 = (char *)(param_1 + 8);
  for (uVar10 = 0; uVar10 != 4; uVar10 = uVar10 + 1) {
    pcVar4 = pcVar11 + -0x28;
    if ((*pcVar11 == '\x01') && (pcVar11[-0x10] == '\x01')) {
      func_0x0001005e3518();
      plVar8 = (long *)*param_1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      ppuStack_90 = &PTR_FUN_1108c28b8;
      uStack_70 = 0x20;
      apcStack_c0[0] = pcVar4;
      func_0x000105977abc(auStack_a8);
      pcVar4 = "Unknown";
      if ((uVar10 & 0xfffffffc) == 0) {
        pcVar4 = (&PTR_DAT_1108c4370)[uVar10 & 3];
      }
      func_0x000100906e58(&ppuStack_90,auStack_a8,pcVar4);
      func_0x000105977aac();
      func_0x000105977a88();
      func_0x000105977a80();
      (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_100,apcStack_c0);
      func_0x000105977a90();
    }
    pcVar11 = pcVar11 + 0x30;
  }
  lVar1 = param_1[0x21];
  for (lVar9 = param_1[0x20]; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
    plVar8 = (long *)*param_1;
    uVar2 = *(uint *)(lVar9 + 0x18);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_1108c28b8;
    uStack_70 = 0x21;
    func_0x000105977abc(apcStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,lVar9);
    pppuVar5 = &ppuStack_90;
    FUN_105973c64(pppuVar5,apcStack_c0,auStack_d8);
    puVar6 = &UNK_10f316049;
    if (uVar2 >> 0x12 < 3) {
      puVar6 = (&PTR_DAT_11310f028)[uVar2 >> 0x10];
    }
    func_0x00010002b838(auStack_a8,puVar6);
    puVar6 = &UNK_10f31605a;
    if ((uVar2 & 0xffff) < 0x24) {
      puVar6 = (&PTR_DAT_11310f088)[uVar2 & 0xffff];
    }
    func_0x000100906e58(pppuVar5,auStack_a8,puVar6);
    func_0x000105977a88();
    FUN_10596dc7c(&puStack_100,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    func_0x000105977a98();
    func_0x000105977a80();
    (**(code **)(*plVar8 + 0x18))(plVar8,&puStack_100);
    func_0x000105977a90();
    if (*(char *)(lVar9 + 0x28) == '\x01') {
      plVar8 = (long *)*param_1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      ppuStack_90 = &PTR_FUN_1108c28b8;
      uStack_70 = 0x22;
      func_0x000105977abc(auStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(apcStack_c0,lVar9);
      FUN_105973c64(&ppuStack_90,auStack_a8,apcStack_c0);
      func_0x000105977aac();
      func_0x000105977a98();
      func_0x000105977a88();
      func_0x000105977a80();
      (**(code **)(*plVar8 + 0x28))(plVar8,&puStack_100,*(undefined8 *)(lVar9 + 0x20));
      func_0x000105977a90();
    }
  }
  if ((*(byte *)((long)param_1 + 0x124) & 1) != 0) {
    plVar8 = (long *)*param_1;
    uVar10 = *(ulong *)((long)param_1 + 0x11c);
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_1108c28b8;
    uStack_88 = 0;
    uStack_70 = 0x23;
    pppuVar5 = &ppuStack_90;
    FUN_1059779d8(pppuVar5,*(undefined4 *)(param_1 + 0x23));
    func_0x00010002b838(auStack_a8,&DAT_10f2faa11);
    uVar7 = (undefined4)uVar10;
    if ((uVar10 & 0x100000000) == 0) {
      uVar7 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(apcStack_c0,uVar7);
    FUN_105973c64(pppuVar5,auStack_a8,apcStack_c0);
    func_0x000105977aac();
    func_0x000105977a98();
    func_0x000105977a88();
    func_0x000105977a80();
    (**(code **)(*plVar8 + 0x18))(plVar8,&puStack_100);
    func_0x000105977a90();
  }
  return;
}



/* Entry: 1059773a8; end: 1059773f7;  */

void FUN_1059773a8(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1;
  func_0x0001004b4e98();
  puVar2 = (undefined8 *)(param_1 + (long)param_2 * 0x30);
  if ((*(byte *)(puVar2 + 5) & 1) == 0) {
    *(undefined1 *)(puVar2 + 5) = 1;
  }
  *puVar2 = 0;
  puVar2[1] = lVar1;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  return;
}



/* Entry: 1059773f8; end: 105977403;  */

void FUN_1059773f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18 + (long)(int)param_2 * 0x30;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    FUN_1059773a8(param_1 + 0x18,param_2);
  }
  func_0x0001005529b4(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(int *)(param_1 + 0xf4) = (int)param_2;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



/* Entry: 105977404; end: 105977467;  */

void FUN_105977404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (long)(int)param_2 * 0x30;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    FUN_1059773a8(param_1,param_2);
  }
  func_0x0001005529b4(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(int *)(lVar1 + 0x1c) = (int)param_3;
  *(char *)(lVar1 + 0x20) = (char)((ulong)param_3 >> 0x20);
  *(int *)(param_1 + 0xdc) = (int)param_2;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}



/* Entry: 105977468; end: 105977497;  */

void FUN_105977468(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_24 = param_3;
  uStack_20 = param_4;
  uStack_18 = param_5;
  FUN_105977498(param_1 + 0x100,param_2,&uStack_24,&uStack_20);
  return;
}



/* Entry: 105977498; end: 1059774d3;  */

long FUN_105977498(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1059775cc();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_105977600();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 1059774d4; end: 1059774fb;  */

void FUN_1059774d4(long param_1)

{
  FUN_1059774fc();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 1059774fc; end: 10597751b;  */

void FUN_1059774fc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    ((undefined1 *)(param_1 + lVar1))[0x28] = 0;
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0xc0);
  return;
}



/* Entry: 10597751c; end: 10597758b;  */

undefined8 FUN_10597751c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000105977550(&uStack_28);
  return param_1;
}



/* Entry: 10597758c; end: 105977593;  */

void FUN_10597758c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 105977594; end: 1059775cb;  */

void FUN_105977594(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1059775cc; end: 1059775ff;  */

void FUN_1059775cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1059776c0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 105977600; end: 1059776bf;  */

long FUN_105977600(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  FUN_1059776f8(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_1059777e0(auStack_68,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_1059776c0(lStack_58,param_2,param_3,param_4);
  lStack_58 = lStack_58 + 0x30;
  FUN_105977748(param_1,auStack_68);
  lVar2 = param_1[1];
  func_0x00010597796c(auStack_68);
  return lVar2;
}



/* Entry: 1059776c0; end: 1059776f7;  */

void FUN_1059776c0(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 1059776f8; end: 105977747;  */

long * FUN_1059776f8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_1059777cc();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10597787c(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 105977748; end: 1059777cb;  */

void FUN_105977748(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10597787c(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 1059777cc; end: 1059777df;  */

long * FUN_1059777cc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f316033;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010597782c();
  }
  lVar2 = param_4 + param_3 * 0x30;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x30;
  return plVar1;
}



/* Entry: 1059777e0; end: 10597784f;  */

long * FUN_1059777e0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010597782c();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 105977850; end: 10597787b;  */

void FUN_105977850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_38[2] = puVar1[2];
    puStack_38[1] = uVar3;
    *puStack_38 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    *(undefined1 *)(puStack_38 + 5) = *(undefined1 *)(puVar1 + 5);
    puStack_38[4] = uVar3;
    puStack_38[3] = uVar2;
    puStack_38 = puStack_38 + 6;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  func_0x000105977928(&uStack_60);
  return;
}



/* Entry: 10597787c; end: 105977997;  */

void FUN_10597787c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_28[2] = puVar1[2];
    puStack_28[1] = uVar3;
    *puStack_28 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    *(undefined1 *)(puStack_28 + 5) = *(undefined1 *)(puVar1 + 5);
    puStack_28[4] = uVar3;
    puStack_28[3] = uVar2;
    puStack_28 = puStack_28 + 6;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  func_0x000105977928(&uStack_50);
  return;
}



/* Entry: 105977998; end: 10597799f;  */

void FUN_105977998(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1059779a0; end: 1059779d7;  */

void FUN_1059779a0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1059779d8; end: 105977a6f;  */

undefined8 FUN_1059779d8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    puVar2 = (&PTR_DAT_11310f028)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f316049;
  }
  func_0x00010002b838(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    puVar2 = (&PTR_DAT_11310f088)[uVar1];
  }
  else {
    puVar2 = &UNK_10f31605a;
  }
  func_0x000100906e58(param_1,auStack_38,puVar2);
  func_0x000105977ac4();
  return param_1;
}



/* Entry: 105977a70; end: 105977acf;  */

void FUN_105977a70(void)

{
  return;
}



/* Entry: 105977ad0; end: 105977c37;  */

void FUN_105977ad0(undefined1 *param_1,long param_2)

{
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [40];
  byte bStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_2 + 0xb8) == 0) || ((*(byte *)(param_2 + 0x60) & 1) == 0)) {
    *param_1 = 0;
    param_1[0x98] = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000100114fd0(auStack_88,param_2 + 0x48,&uStack_58);
    if ((bStack_60 & 1) == 0) {
      *param_1 = 0;
      param_1[0x98] = 0;
    }
    else {
      FUN_105976974(auStack_c0,auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,param_2);
      uStack_140 = *(undefined8 *)(param_2 + 0x68);
      if (*(char *)(param_2 + 0x70) == '\0') {
        uStack_140 = 0;
      }
      FUN_105977c38(auStack_138,auStack_c0);
      func_0x00010028af84(auStack_100,param_2 + 0xc0);
      func_0x00010028af84(auStack_e0,param_2 + 0xe0);
      FUN_105977cb0(param_1,auStack_158);
      FUN_105977dc8(auStack_158);
      FUN_105976cd8(auStack_c0);
    }
    func_0x00010011a53c(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  return;
}



/* Entry: 105977c38; end: 105977c73;  */

undefined1 * FUN_105977c38(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_105977c74();
  return param_1;
}



/* Entry: 105977c74; end: 105977c87;  */

void FUN_105977c74(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_105977ca4();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 105977c88; end: 105977ca3;  */

void FUN_105977c88(long param_1)

{
  FUN_105977ca4();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 105977ca4; end: 105977caf;  */

undefined8 * FUN_105977ca4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1108c9170;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010599e314();
  }
  FUN_10599e064(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 105977cb0; end: 105977ccb;  */

void FUN_105977cb0(long param_1)

{
  FUN_105977ccc();
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 105977ccc; end: 105977d87;  */

undefined8 * FUN_105977ccc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  FUN_105977d88(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar2 = param_2[0x10];
    uVar1 = param_2[0xf];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0xf] = uVar1;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0xf] = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return param_1;
}



/* Entry: 105977d88; end: 105977db3;  */

undefined1 * FUN_105977d88(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_105977db4();
  return param_1;
}



/* Entry: 105977db4; end: 105977dc7;  */

void FUN_105977db4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_105976d14();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 105977dc8; end: 105977dff;  */

void FUN_105977dc8(long param_1)

{
  func_0x0001001148fc(param_1 + 0x78);
  func_0x0001001148fc(param_1 + 0x58);
  FUN_105976cd8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 105977e00; end: 105977e07;  */

void FUN_105977e00(void)

{
  return;
}



/* Entry: 105977e08; end: 10597814f;  */

void FUN_105977e08(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***apppuStack_a8 [4];
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  
  if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    uVar11 = *(ulong *)(param_3 + 0x30);
    puVar2 = (ulong *)(param_3 + 0x30);
    if ((uVar11 & 1) != 0) {
      puVar2 = (ulong *)(uVar11 + 7);
    }
    pppuStack_b8 = (undefined8 ****)0x0;
    pppuStack_b0 = (undefined8 ****)0x0;
    apppuStack_a8[0] = (undefined8 ****)0x0;
    for (lVar15 = (long)*(int *)(param_3 + 0x38) << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
      if (*(int *)(*puVar2 + 0x1c) == 1) {
        if ((*(char *)(param_2 + 0x18) == '\x01') && ((*(byte *)(param_3 + 0x70) & 1) != 0)) {
          puVar8 = &UNK_10f3160b2;
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&pppuStack_88,&UNK_10f3160b2,param_3 + 0x58);
          func_0x0001059782ec();
          if (*(undefined **)(param_2 + 8) <= puVar8 + 1) {
            func_0x0001059782c0();
            func_0x0001059782f8();
            func_0x0001059782a0();
            func_0x0001059782d0();
            func_0x0001059782d8();
            pppuVar13 = (undefined8 ***)0x10000000000;
            goto LAB_105977fa0;
          }
          func_0x0001059782c0();
          func_0x0001059782f8();
          func_0x0001059782a0();
          func_0x0001059782d0();
          func_0x0001059782d8();
        }
      }
      else if (((*(int *)(*puVar2 + 0x1c) == 2) && (*(char *)(param_2 + 0x30) == '\x01')) &&
              ((*(byte *)(param_3 + 0x90) & 1) != 0)) {
        puVar8 = &UNK_10f3160c3;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&pppuStack_88,&UNK_10f3160c3,param_3 + 0x78);
        func_0x0001059782ec();
        puVar12 = *(undefined **)(param_2 + 0x20);
        if (puVar12 < puVar8 + 1) {
          func_0x0001059782b0();
          func_0x0001059782f8();
          func_0x0001059782a0();
        }
        else {
          func_0x0001059782b0();
          func_0x0001059782f8();
          func_0x0001059782a0();
        }
        func_0x0001059782d0();
        func_0x0001059782d8();
        if (puVar12 < puVar8 + 1) {
          pppuVar13 = (undefined8 ***)0x100000000000001;
LAB_105977fa0:
          if (pppuStack_b0 < apppuStack_a8[0]) {
            *pppuStack_b0 = pppuVar13;
            pppuStack_b0 = pppuStack_b0 + 1;
          }
          else {
            ppppuVar9 = &pppuStack_b8;
            FUN_10595b834(ppppuVar9,((long)pppuStack_b0 - (long)pppuStack_b8 >> 3) + 1);
            pppuVar7 = pppuStack_b0;
            pppuVar6 = pppuStack_b8;
            pppuStack_68 = apppuStack_a8;
            if (ppppuVar9 == (undefined8 ****)0x0) {
              ppppuVar10 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar10 = apppuStack_a8;
              FUN_10595b7a0();
            }
            puVar1 = (undefined8 *)((long)ppppuVar10 + ((long)pppuVar7 - (long)pppuVar6));
            *puVar1 = pppuVar13;
            ppppuVar14 = (undefined8 ****)((long)puVar1 - ((long)pppuStack_b0 - (long)pppuStack_b8))
            ;
            pppuStack_88 = ppppuVar10;
            pppuStack_80 = (undefined8 ***)puVar1;
            pppuStack_78 = (undefined8 ***)(puVar1 + 1);
            pppuStack_70 = ppppuVar10 + (long)ppppuVar9;
            _memcpy(ppppuVar14);
            pppuVar6 = pppuStack_78;
            pppuVar13 = apppuStack_a8[0];
            apppuStack_a8[0] = pppuStack_70;
            pppuStack_b0 = pppuStack_78;
            pppuStack_78 = pppuStack_b8;
            pppuStack_70 = pppuVar13;
            pppuStack_88 = pppuStack_b8;
            pppuStack_80 = pppuStack_b8;
            pppuStack_b8 = ppppuVar14;
            FUN_10595b7e0(&pppuStack_88);
            pppuStack_b0 = pppuVar6;
          }
        }
      }
      puVar2 = puVar2 + 1;
    }
    if (pppuStack_b8 == pppuStack_b0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      FUN_10596a7cc(&uStack_d0,&pppuStack_b8);
      uVar5 = uStack_c0;
      uVar4 = uStack_c8;
      uVar3 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_1[2] = uVar5;
      pppuStack_80 = (undefined8 ****)0x0;
      pppuStack_78 = (undefined8 ****)0x0;
      pppuStack_88 = (undefined8 ****)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_10595b740(&pppuStack_88);
      FUN_10595b740(&uStack_d0);
    }
    FUN_10595b740(&pppuStack_b8);
  }
  return;
}



/* Entry: 105978150; end: 105978157;  */

void FUN_105978150(void)

{
  return;
}



/* Entry: 105978158; end: 105978287;  */

long FUN_105978158(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  
  lVar2 = 0;
  param_3 = param_3 + 0x58;
  do {
    if (param_3 + -0x58 == param_4) {
      return lVar2;
    }
    if (param_2 <= *(long *)(param_3 + -0x40)) {
      auStack_70[0] = 0;
      uStack_58 = 0;
      if (*(int *)(param_5 + 0x1c) == 2) {
        if (*(char *)(param_3 + 0x38) == '\x01') {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_88,&UNK_10f3160c3,param_3 + 0x20);
          func_0x0001059782e0();
          goto LAB_105978214;
        }
      }
      else if ((*(int *)(param_5 + 0x1c) == 1) && (*(char *)(param_3 + 0x18) == '\x01')) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_88,&UNK_10f3160b2,param_3);
        func_0x0001059782e0();
LAB_105978214:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      }
      puVar1 = auStack_70;
      func_0x000105978288(puVar1,param_1);
      lVar2 = lVar2 + ((ulong)puVar1 & 0xffffffff);
      func_0x0001001148fc(auStack_70);
    }
    param_3 = param_3 + 0x98;
  } while( true );
}



/* Entry: 105978288; end: 105978317;  */

bool FUN_105978288(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if ((char)param_1[3] != '\x01') {
    return false;
  }
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
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



/* Entry: 105978318; end: 105978333;  */

void FUN_105978318(void)

{
  undefined1 uStack_11;
  
  FUN_105978334(&uStack_11);
  return;
}



/* Entry: 105978334; end: 1059783a3;  */

void FUN_105978334(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x0001009030a4();
  uStack_28 = extraout_x8;
  FUN_1059783a4(auStack_40,1);
  *puStack_30 = &PTR_FUN_1108c4440;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1108c43f0;
  func_0x000100903274();
  func_0x00010597840c();
  func_0x00010090329c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000100903138();
  FUN_1059783c4();
  func_0x000100903190();
  return;
}



/* Entry: 1059783a4; end: 1059783c3;  */

void FUN_1059783a4(void)

{
  func_0x000100903138();
  FUN_1059783c4();
  func_0x000100903190();
  return;
}



/* Entry: 1059783c4; end: 1059783df;  */

void FUN_1059783c4(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108c4440;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059783e0; end: 1059783e3;  */

void FUN_1059783e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4440;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059783e4; end: 1059783f7;  */

void FUN_1059783e4(void)

{
  func_0x000105978400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059783f8; end: 10597841b;  */

void FUN_1059783f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105978548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10597841c; end: 10597843f;  */

void FUN_10597841c(long param_1)

{
  func_0x0001009035ac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105978440; end: 105978443;  */

void FUN_105978440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105978444; end: 105978457;  */

void FUN_105978444(void)

{
  FUN_10597849c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105978458; end: 10597849b;  */

undefined8 FUN_105978458(long param_1)

{
  undefined8 unaff_x19;
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x40);
  if (*plVar1 != 0) {
    FUN_1059784ac(plVar1);
    __ZdlPv(*plVar1);
  }
  func_0x000100902af4(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x00010090269c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10597849c; end: 1059784ab;  */

void FUN_10597849c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059784ac; end: 1059784e7;  */

void FUN_1059784ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x98;
    FUN_105977dc8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1059784e8; end: 1059784eb;  */

void FUN_1059784e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c44e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059784ec; end: 1059784ff;  */

void FUN_1059784ec(void)

{
  func_0x000105978508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105978500; end: 105978517;  */

void FUN_105978500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105978548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105978518; end: 10597852b;  */

void FUN_105978518(void)

{
  func_0x000105978534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10597852c; end: 105978567;  */

void FUN_10597852c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105978548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105978568; end: 1059788c7;  */

void FUN_105978568(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_240 [24];
  char cStack_228;
  undefined1 auStack_220 [80];
  char cStack_1d0;
  byte bStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [16];
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  byte bStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_100;
  byte bStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d0;
  byte bStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a0;
  byte bStack_98;
  
  uStack_178 = *(undefined8 *)(param_2 + 0x30);
  uStack_180 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x30) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_105976ebc(auStack_168,&uStack_180);
  puVar4 = &uStack_180;
  func_0x000100902b24();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x0001004b4e98();
  if ((bStack_128 & 1) == 0) {
    bStack_128 = 1;
  }
  uStack_150 = 0;
  uStack_140 = 1;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  puStack_148 = puVar4;
  FUN_105977ad0(auStack_220,param_3);
  puVar5 = auStack_168;
  FUN_1059773f8(puVar5,0);
  if ((bStack_188 & 1) == 0) {
    uStack_158 = 1;
    goto LAB_105978790;
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    if (cStack_1d0 == '\0') goto LAB_105978790;
    *(undefined1 *)(param_2 + 0x38) = 1;
LAB_105978644:
    func_0x0001004b4e98();
    if ((bStack_f8 & 1) == 0) {
      bStack_f8 = 1;
    }
    uStack_120 = 0;
    uStack_110 = 1;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    lVar6 = *(long *)(param_2 + 0x18);
    puStack_118 = puVar5;
    func_0x0001002a8308(auStack_240,param_3);
    FUN_105978964(lVar6,auStack_240);
    func_0x0001001148fc(auStack_240);
    puVar5 = auStack_168;
    FUN_1059773f8(puVar5,1);
    func_0x0001004b4e98();
    if ((bStack_c8 & 1) == 0) {
      bStack_c8 = 1;
    }
    uStack_f0 = 0;
    uStack_e0 = 1;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    puStack_e8 = puVar5;
    (**(code **)(**(long **)(param_2 + 8) + 0x10))
              (auStack_240,*(long **)(param_2 + 8),auStack_220,lVar6 + 0x28,auStack_168);
    cVar2 = (char)param_1[3];
    if (cVar2 == cStack_228) {
      if (cVar2 != '\0') {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        FUN_105978948();
      }
    }
    else if (cVar2 == '\0') {
      FUN_105978948();
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      FUN_10595b740(param_1);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    FUN_10596a8f8(auStack_240);
    puVar5 = auStack_168;
    FUN_1059773f8(puVar5,2);
  }
  else if (cStack_1d0 != '\0') goto LAB_105978644;
  func_0x0001004b4e98();
  if ((bStack_98 & 1) == 0) {
    bStack_98 = 1;
  }
  uStack_c0 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  puStack_b8 = puVar5;
  FUN_105978c2c(*(undefined8 *)(param_2 + 0x18),auStack_220);
  FUN_1059773f8(auStack_168,3);
LAB_105978790:
  func_0x0001059788e0(auStack_220);
  FUN_105976f1c(auStack_168);
  return;
}



/* Entry: 1059788c8; end: 1059788cb;  */

undefined8 * FUN_1059788c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4580;
  func_0x000100902b24(param_1 + 5);
  func_0x0001009035b8(param_1 + 3);
  func_0x0001009035dc(param_1 + 1);
  return param_1;
}



/* Entry: 1059788cc; end: 1059788ff;  */

void FUN_1059788cc(void)

{
  FUN_105978900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105978900; end: 105978947;  */

undefined8 * FUN_105978900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4580;
  func_0x000100902b24(param_1 + 5);
  func_0x0001009035b8(param_1 + 3);
  func_0x0001009035dc(param_1 + 1);
  return param_1;
}



/* Entry: 105978948; end: 105978963;  */

void FUN_105978948(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  return;
}



/* Entry: 105978964; end: 105978c2b;  */

void FUN_105978964(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_238;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  byte bStack_100;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined1 auStack_e8 [104];
  char cStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x000105979388();
    func_0x00010597935c();
    FUN_10596e860(auStack_f8,*unaff_x19,param_1 - unaff_x19[4]);
    lStack_170 = 0;
    auStack_168[0] = 0;
    bStack_100 = 0;
    if (cStack_80 == '\0') {
      lVar4 = 0;
    }
    else {
      FUN_1059638f8(auStack_168,auStack_e8);
      FUN_105963824(auStack_e8);
      lVar4 = lStack_170;
    }
    lStack_170 = lStack_f0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    lStack_1f0 = 0;
    uStack_180 = 0;
    lStack_f0 = lVar4;
    while ((((bStack_100 & 1) != 0 || ((uStack_180 & 1) != 0)) && (lStack_170 != lStack_1f0))) {
      if ((bStack_100 & 1) == 0) {
        uVar3 = *(undefined8 *)(lStack_170 + 8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_78,lStack_170 + 0x58);
        func_0x0001004c3cd0(auStack_288,&UNK_10f2e0451,auStack_78);
        func_0x00010bcc7444(uVar3,0x65,auStack_288);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      }
      if (*(char *)(unaff_x20 + 0x18) == '\x01') {
        uVar1 = 0;
        func_0x0001000e107c();
        if ((uVar1 & 1) == 0) goto LAB_105978a98;
      }
      else {
LAB_105978a98:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_288,auStack_168);
        uStack_270 = uStack_150;
        uStack_268 = 0;
        uStack_238 = 0;
        func_0x00010028af84(auStack_230,auStack_140);
        func_0x00010028af84(auStack_210,auStack_120);
        uVar1 = unaff_x19[6];
        if (uVar1 < (ulong)unaff_x19[7]) {
          FUN_105977ccc(uVar1,auStack_288);
          lVar4 = uVar1 + 0x98;
          unaff_x19[6] = lVar4;
        }
        else {
          puVar2 = unaff_x19 + 5;
          FUN_105978f1c(puVar2,(long)(uVar1 - unaff_x19[5]) / 0x98 + 1);
          FUN_10597901c(auStack_78,puVar2,(long)(unaff_x19[6] - unaff_x19[5]) / 0x98,unaff_x19 + 7);
          FUN_105977ccc(lStack_68,auStack_288);
          lStack_68 = lStack_68 + 0x98;
          FUN_105978f7c(unaff_x19 + 5,auStack_78);
          lVar4 = unaff_x19[6];
          func_0x000105979198(auStack_78);
        }
        unaff_x19[6] = lVar4;
        FUN_105977dc8(auStack_288);
      }
      FUN_10596377c(&lStack_170);
    }
    func_0x00010597936c();
    FUN_1059639d4(auStack_168);
    FUN_1059792dc(auStack_f8);
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  return;
}



/* Entry: 105978c2c; end: 105978cd3;  */

void FUN_105978c2c(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  func_0x000105979388();
  auStack_60[0] = 0;
  uStack_48 = 0;
  FUN_105978964();
  func_0x0001001148fc(auStack_60);
  uVar3 = *(ulong *)(unaff_x19 + 0x28);
  uVar1 = *(ulong *)(unaff_x19 + 0x30);
  while ((uVar4 = uVar1, uVar3 != uVar1 &&
         (uVar2 = uVar3, func_0x0001000e107c(), uVar4 = uVar3, (uVar2 & 1) == 0))) {
    uVar3 = uVar3 + 0x98;
  }
  if (uVar4 == *(ulong *)(unaff_x19 + 0x30)) {
    func_0x000105978d88((ulong *)(unaff_x19 + 0x28));
    func_0x000105978cd4();
  }
  return;
}



/* Entry: 105978cd4; end: 105978dc3;  */

long FUN_105978cd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x30)) {
    func_0x00010597935c();
    lVar1 = *(long *)(param_1 + 0x28);
    for (lVar4 = lVar1;
        (lVar3 = *(long *)(param_1 + 0x30), lVar4 != *(long *)(param_1 + 0x30) &&
        (lVar3 = lVar4, *(long *)(lVar4 + 0x18) < lVar2 - *(long *)(param_1 + 0x20)));
        lVar4 = lVar4 + 0x98) {
    }
    if (lVar3 != lVar1) {
      if (lVar1 != lVar3) {
        FUN_105979204(lVar3,*(undefined8 *)(param_1 + 0x30),lVar1);
        FUN_1059784ac((long *)(param_1 + 0x28));
      }
      return lVar1;
    }
  }
  return lVar2;
}



/* Entry: 105978dc4; end: 105978df7;  */

void FUN_105978dc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_105978e9c(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x98;
  return;
}



/* Entry: 105978df8; end: 105978e9b;  */

long FUN_105978df8(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000105979388();
  FUN_105978f1c();
  FUN_10597901c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x98,unaff_x19 + 2);
  FUN_105978e9c(lStack_48);
  lStack_48 = lStack_48 + 0x98;
  FUN_105978f7c();
  lVar1 = unaff_x19[1];
  func_0x000105979198(auStack_58);
  return lVar1;
}



/* Entry: 105978e9c; end: 105978f1b;  */

void FUN_105978e9c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000105979388();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_105977c38(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x00010028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  func_0x00010028af84(unaff_x19 + 0x78,unaff_x20 + 0x78);
  return;
}



/* Entry: 105978f1c; end: 105978f7b;  */

long * FUN_105978f1c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x1af286bca1af287) {
    uVar1 = (param_1[2] - *param_1) / 0x98;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xd79435e50d7942 < uVar1) {
      plVar2 = (long *)0x1af286bca1af286;
    }
    return plVar2;
  }
  FUN_105979008();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_1059790bc(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 105978f7c; end: 105979007;  */

void FUN_105978f7c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_1059790bc(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 105979008; end: 10597901b;  */

long * FUN_105979008(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f3160f6;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105979068();
  }
  lVar2 = param_4 + param_3 * 0x98;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x98;
  return plVar1;
}



/* Entry: 10597901c; end: 10597908b;  */

long * FUN_10597901c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105979068();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 10597908c; end: 1059790bb;  */

void FUN_10597908c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x98) {
    FUN_105977ccc(param_4,uVar1);
    param_4 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_105977dc8(param_2);
  }
  FUN_105979154(&uStack_70);
  return;
}



/* Entry: 1059790bc; end: 105979153;  */

void FUN_1059790bc(undefined8 param_1,long param_2,long param_3,long param_4)

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
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x98) {
    FUN_105977ccc(param_4,lVar1);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_105977dc8(param_2);
  }
  FUN_105979154(&uStack_60);
  return;
}



/* Entry: 105979154; end: 1059791c3;  */

long FUN_105979154(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x98;
      FUN_105977dc8();
    }
  }
  return param_1;
}



/* Entry: 1059791c4; end: 1059791cb;  */

void FUN_1059791c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    FUN_105977dc8();
  }
  return;
}



/* Entry: 1059791cc; end: 105979203;  */

void FUN_1059791cc(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    FUN_105977dc8();
  }
  return;
}



/* Entry: 105979204; end: 10597922f;  */

void FUN_105979204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_105979230(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 105979230; end: 10597928b;  */

undefined1  [16] FUN_105979230(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    FUN_10597928c(lVar1,param_2);
    lVar1 = lVar1 + 0x98;
    param_4 = param_4 + 0x98;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10597928c; end: 1059792db;  */

long FUN_10597928c(long param_1,long param_2)

{
  func_0x000100066230();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_105976dc4(param_1 + 0x20,param_2 + 0x20);
  func_0x0001002a8208(param_1 + 0x58,param_2 + 0x58);
  func_0x0001002a8208(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



/* Entry: 1059792dc; end: 105979353;  */

undefined8 * FUN_1059792dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xf) != '\0') {
    FUN_105963824(param_1 + 2);
  }
  FUN_1059639d4((ulong)&uStack_a0 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_1059639d4(param_1 + 2);
  return param_1;
}



/* Entry: 105979354; end: 105979393;  */

void FUN_105979354(void)

{
  return;
}


