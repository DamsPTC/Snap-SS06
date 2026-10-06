/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000aa820; end: 000aabf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_000aa820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_84;
  long lStack_80;
  long lStack_78;
  
  lVar2 = 0xae60c8;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_84 = param_5;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar7 - extraout_x12_01;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar9)(lVar8,1,1,lVar2);
  (*pcVar9)(lVar7,1,1,lVar2);
  (*pcVar9)(lVar6,1,1,lVar2);
  (*pcVar9)(puVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_000ab7b0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00aecbd8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbe0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbe8);
  *puVar1 = uStack_98;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbf0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000aa704(uStack_90,lVar2 + _DAT_00aecbf8,0xae60c8,&UNK_007cccd0);
  *(char *)(lVar2 + _DAT_00aecc00) = (char)uStack_84;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00aecc30) = 0;
  func_0x000aa704(lVar8,lVar2 + _DAT_00aecc38,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar7,lVar2 + _DAT_00aecc48,0xae60c8,&UNK_007cccd0);
  *(undefined1 *)(lVar2 + _DAT_00aecc50) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar6,lVar2 + _DAT_00aecc70,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(puVar5,lVar2 + _DAT_00aecc98,0xae60c8,&UNK_007cccd0);
  plVar4 = &lStack_80;
  lStack_80 = lVar2;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_00abbf70);
  func_0x000aa74c(puVar5,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar6,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar7,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar8,0xae60c8,&UNK_007cccd0);
  return plVar4;
}



/* Entry: 000aabf4; end: 000ab007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_000aabf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  
  lVar4 = 0xae60c8;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_a8 = param_7;
  uStack_a0 = param_8;
  uStack_94 = param_10;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar9 - extraout_x12_01;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar11 + 0x38);
  (*pcVar6)(lVar10,1,1,lVar4);
  (**(code **)(lVar11 + 0x10))(lVar9,param_9,lVar4);
  (*pcVar6)(lVar9,0,1,lVar4);
  (*pcVar6)(lVar8,1,1,lVar4);
  (*pcVar6)(lVar7,1,1,lVar4);
  lVar11 = 0;
  FUN_000ab7b0();
  lVar4 = lVar11;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_00aecbd8) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecbe0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecbe8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecbf0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar10,lVar4 + _DAT_00aecbf8,0xae60c8,&UNK_007cccd0);
  uVar3 = uStack_a8;
  *(undefined1 *)(lVar4 + _DAT_00aecc00) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc08);
  *puVar1 = uStack_c0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc10);
  *puVar1 = uStack_b8;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc18);
  *puVar1 = uStack_b0;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc20);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc28);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_00aecc30) = uStack_a8;
  func_0x000aa704(uStack_a0,lVar4 + _DAT_00aecc38,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc40);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000aa704(lVar9,lVar4 + _DAT_00aecc48,0xae60c8,&UNK_007cccd0);
  *(char *)(lVar4 + _DAT_00aecc50) = (char)uStack_94;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar8,lVar4 + _DAT_00aecc70,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00aecc90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar7,lVar4 + _DAT_00aecc98,0xae60c8,&UNK_007cccd0);
  puVar2 = PTR_s_init_00abbf70;
  lStack_90 = lVar4;
  lStack_88 = lVar11;
  _swift_bridgeObjectRetain(uVar3);
  plVar5 = &lStack_90;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x000aa74c(lVar7,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar8,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar9,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar10,0xae60c8,&UNK_007cccd0);
  return plVar5;
}



/* Entry: 000ab008; end: 000ab7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_000ab008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar2 = 0xae60c8;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar7 - extraout_x12_01;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar9)(lVar8,1,1,lVar2);
  (*pcVar9)(lVar7,1,1,lVar2);
  (*pcVar9)(lVar6,1,1,lVar2);
  (*pcVar9)(puVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_000ab7b0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00aecbd8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbe0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbe8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecbf0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar8,lVar2 + _DAT_00aecbf8,0xae60c8,&UNK_007cccd0);
  *(undefined1 *)(lVar2 + _DAT_00aecc00) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc08);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc18);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_00aecc30) = 0;
  func_0x000aa704(lVar7,lVar2 + _DAT_00aecc38,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(lVar6,lVar2 + _DAT_00aecc48,0xae60c8,&UNK_007cccd0);
  *(undefined1 *)(lVar2 + _DAT_00aecc50) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc58);
  *puVar1 = uStack_98;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc60);
  *puVar1 = uStack_90;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc68);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000aa704(uStack_88,lVar2 + _DAT_00aecc70,0xae60c8,&UNK_007cccd0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00aecc90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000aa704(puVar5,lVar2 + _DAT_00aecc98,0xae60c8,&UNK_007cccd0);
  plVar4 = &lStack_80;
  lStack_80 = lVar2;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_00abbf70);
  func_0x000aa74c(puVar5,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar6,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar7,0xae60c8,&UNK_007cccd0);
  func_0x000aa74c(lVar8,0xae60c8,&UNK_007cccd0);
  return plVar4;
}



/* Entry: 000ab7a8; end: 000ab7af;  */

void FUN_000ab7a8(void)

{
  if (lRam0000000000aeccd0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_00842f4c);
  return;
}



/* Entry: 000ab7b0; end: 000ab7e7;  */

void FUN_000ab7b0(undefined8 param_1)

{
  if (lRam0000000000aeccd0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_00842f4c);
  return;
}



/* Entry: 000ab7e8; end: 000ab89f;  */

void FUN_000ab7e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_e8 = &UNK_007d6298;
  puStack_e0 = &UNK_007d62b0;
  puStack_d8 = &UNK_007d62b0;
  puStack_d0 = &UNK_007d62b0;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_c8 = *(long *)(lVar1 + -8) + 0x40;
    puStack_c0 = &UNK_007d62c8;
    puStack_b8 = &UNK_007d62b0;
    puStack_b0 = &UNK_007d62b0;
    puStack_a8 = &UNK_007d62b0;
    puStack_a0 = &UNK_007d62b0;
    puStack_98 = &UNK_007d62b0;
    puStack_90 = &UNK_007d62e0;
    puStack_80 = &UNK_007d62b0;
    puStack_70 = &UNK_007d62c8;
    puStack_68 = &UNK_007d62b0;
    puStack_60 = &UNK_007d62b0;
    puStack_58 = &UNK_007d62b0;
    puStack_48 = &UNK_007d62b0;
    puStack_40 = &UNK_007d62b0;
    puStack_38 = &UNK_007d62b0;
    puStack_30 = &UNK_007d62b0;
    lStack_88 = lStack_c8;
    lStack_78 = lStack_c8;
    lStack_50 = lStack_c8;
    lStack_28 = lStack_c8;
    _swift_updateClassMetadata2(param_1,0x100,0x19,&puStack_e8,param_1 + 0x50);
  }
  return;
}



/* Entry: 000ab8a0; end: 000aba07;  */

int FUN_000ab8a0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000ab91c;
        goto LAB_000ab900;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000ab900:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_000ab91c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000aba08; end: 000aba47;  */

void FUN_000aba08(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aecce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6318;
  _swift_getWitnessTable(&UNK_007d6318,&UNK_009a93f0);
  puRam0000000000aecce0 = puVar1;
  return;
}



/* Entry: 000aba48; end: 000aba67;  */

void FUN_000aba48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x000aa704(param_4,puVar4,0xae60c8,&UNK_007cccd0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,lVar3,param_2,param_3,puVar5,param_5 & 1);
  _objc_release(puVar5);
  return;
}



/* Entry: 000aba68; end: 000abaaf; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl syncFreshnessTimeoutSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aba68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00aecce8;
  _swift_beginAccess(param_1 + _DAT_00aecce8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 000abab0; end: 000ababb; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSyncFreshnessTimeoutSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aecce8;
  _swift_beginAccess(param_1 + _DAT_00aecce8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 000ababc; end: 000abb03; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToStartRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ababc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00aeccf0;
  _swift_beginAccess(param_1 + _DAT_00aeccf0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 000abb04; end: 000abb0f; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setAttemptNumberToStartRecovery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aeccf0;
  _swift_beginAccess(param_1 + _DAT_00aeccf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 000abb10; end: 000abb57; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToEnterSafeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00aeccf8;
  _swift_beginAccess(param_1 + _DAT_00aeccf8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 000abb58; end: 000abb63; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setAttemptNumberToEnterSafeMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aeccf8;
  _swift_beginAccess(param_1 + _DAT_00aeccf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 000abb64; end: 000abbab; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abb64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00aecd00;
  _swift_beginAccess(param_1 + _DAT_00aecd00,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 000abbac; end: 000abbb7; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abbac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aecd00;
  _swift_beginAccess(param_1 + _DAT_00aecd00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 000abbb8; end: 000abbff; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeTreatmentID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abbb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00aecd08;
  _swift_beginAccess(param_1 + _DAT_00aecd08,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 000abc00; end: 000abc0b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeTreatmentID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aecd08;
  _swift_beginAccess(param_1 + _DAT_00aecd08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 000abc0c; end: 000abc6b;  */

void FUN_000abc0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 000abc6c; end: 000abce3; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl safeModeStudyName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abc6c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00aecd10);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 000abce4; end: 000abd5b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl setSafeModeStudyName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abce4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00aecd10);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 000abd5c; end: 000abef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abd5c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_00aecce8;
  _swift_beginAccess(unaff_x20 + _DAT_00aecce8,auStack_68,0,0);
  lVar6 = _DAT_00aeccf0;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_00aeccf0,auStack_80,0,0);
  lVar5 = _DAT_00aeccf8;
  uVar13 = *(undefined8 *)(unaff_x20 + lVar6);
  _swift_beginAccess(unaff_x20 + _DAT_00aeccf8,auStack_98,0,0);
  lVar6 = _DAT_00aecd00;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_00aecd00,auStack_b0,0,0);
  lVar5 = _DAT_00aecd08;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar6);
  _swift_beginAccess(unaff_x20 + _DAT_00aecd08,auStack_c8,0,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aecd10);
  puVar7 = puVar1;
  _swift_beginAccess(puVar1,auStack_e0,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_000abef8();
  puVar8 = puVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)puVar8 + _DAT_00aecd18) = uVar9;
  *(undefined8 *)((long)puVar8 + _DAT_00aecd20) = uVar13;
  *(undefined8 *)((long)puVar8 + _DAT_00aecd28) = uVar10;
  *(undefined8 *)((long)puVar8 + _DAT_00aecd30) = uVar11;
  *(undefined8 *)((long)puVar8 + _DAT_00aecd38) = uVar12;
  puVar1 = (undefined8 *)((long)puVar8 + _DAT_00aecd40);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar4 = PTR_s_init_00abbf70;
  puStack_f0 = puVar8;
  puStack_e8 = puVar7;
  _objc_retain(uVar9);
  _objc_retain(uVar13);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&puStack_f0,puVar4);
  return;
}



/* Entry: 000abef8; end: 000abf17;  */

void FUN_000abef8(void)

{
  _objc_opt_self(&PTR_PTR_00aca830);
  return;
}



/* Entry: 000abf18; end: 000abf4b; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl immutableCopy] */

void FUN_000abf18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000abd5c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 000abf4c; end: 000abfd3; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abf4c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00aecce8) = 0;
  *(undefined8 *)(param_1 + _DAT_00aeccf0) = 0;
  *(undefined8 *)(param_1 + _DAT_00aeccf8) = 0;
  *(undefined8 *)(param_1 + _DAT_00aecd00) = 0;
  *(undefined8 *)(param_1 + _DAT_00aecd08) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_00aecd10);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000abfd4; end: 000ac04f; -[SCMutableConfigHeuristicRecoveryConstantsUpdateImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000abfd4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecce8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aeccf0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aeccf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd08));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00aecd10 + 8));
  return;
}



/* Entry: 000ac050; end: 000ac05f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl syncFreshnessTimeoutSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecd18));
  return;
}



/* Entry: 000ac060; end: 000ac06f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToStartRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecd20));
  return;
}



/* Entry: 000ac070; end: 000ac07f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl attemptNumberToEnterSafeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecd28));
  return;
}



/* Entry: 000ac080; end: 000ac08f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecd30));
  return;
}



/* Entry: 000ac090; end: 000ac09f; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeTreatmentID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aecd38));
  return;
}



/* Entry: 000ac0a0; end: 000ac0fb; -[SCConfigHeuristicRecoveryConstantsUpdateImpl safeModeStudyName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac0a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00aecd40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00aecd40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000ac0fc; end: 000ac127; -[SCConfigHeuristicRecoveryConstantsUpdateImpl init] */

void FUN_000ac0fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigCrashRecoveryImpl.ConfigHeuristicRecoveryConstantsUpdateImpl",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xac128);
  (*pcVar1)();
}



/* Entry: 000ac128; end: 000ac12b;  */

void FUN_000ac128(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000ac12c; end: 000ac15f;  */

void FUN_000ac12c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000ac160; end: 000ac1db; -[SCConfigHeuristicRecoveryConstantsUpdateImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac160(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecd38));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00aecd40 + 8));
  return;
}



/* Entry: 000ac1dc; end: 000ac1fb;  */

void FUN_000ac1dc(void)

{
  _objc_opt_self(&PTR_PTR_00aca750);
  return;
}



/* Entry: 000ac1fc; end: 000ac1ff;  */

void FUN_000ac1fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000ac200; end: 000ac547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte abStack_c0 [8];
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  lVar4 = 0xaecda0;
  func_0x000115a8(0xaecda0,&UNK_007d6450);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pbVar8 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pbVar7 = pbVar8 + -extraout_x12;
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_00aecd98;
  _swift_beginAccess(unaff_x20 + _DAT_00aecd98,auStack_78,0,0);
  FUN_000add40(unaff_x20 + lVar3,pbVar7,0xaecda0,&UNK_007d6450);
  pbVar10 = pbVar7;
  (**(code **)(lVar9 + 0x30))(pbVar7,1,lVar4);
  if ((int)pbVar10 != 1) {
    func_0x000addd8(pbVar7,(long)pbVar7 - extraout_x8_00);
    func_0x000addd8((long)pbVar7 - extraout_x8_00,param_1);
    return;
  }
  lVar6 = 0xaecda0;
  func_0x000ade28(pbVar7,0xaecda0,&UNK_007d6450);
  FUN_000ac548();
  pbVar10 = pbVar7;
  FUN_0021bab4();
  uStack_ac = (uint)*pbVar10;
  FUN_0021bb14();
  uStack_a8 = param_1;
  if (lVar6 != 0) {
    uStack_a0 = 0x2e;
    uStack_98 = 0xe100000000000000;
    pbStack_90 = pbVar7;
    lStack_88 = lVar6;
    FUN_00033a8c();
    puVar5 = &uStack_a0;
    __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
              (puVar5,PTR___sSSN_0099b040,PTR___sSSN_0099b040,pbVar10,pbVar10);
    if (1 < (ulong)puVar5[2]) {
      pbVar10 = (byte *)puVar5[4];
      uVar1 = puVar5[5];
      uStack_b8 = puVar5[6];
      uVar2 = puVar5[7];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(puVar5);
      pbStack_90 = pbVar10;
      lStack_88 = uVar1;
      __sSS6appendyySSF(uStack_b8,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      pbVar10 = pbStack_90;
      lVar11 = lStack_88;
      goto LAB_000ac420;
    }
    _swift_bridgeObjectRelease();
  }
  pbVar10 = (byte *)0x7974706d65;
  lVar11 = 0xe500000000000000;
LAB_000ac420:
  pbStack_90 = (byte *)0x42;
  if (uStack_ac == 0) {
    pbStack_90 = (byte *)0x50;
  }
  lStack_88 = 0xe100000000000000;
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(0x49,0xe100000000000000);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(pbVar10,lVar11);
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar11);
  lVar6 = lStack_88;
  pbVar10 = pbStack_90;
  pbStack_90 = (byte *)0xd000000000000022;
  lStack_88 = 0x80000000008b8010;
  __sSS6appendyySSF(pbVar10,lVar6);
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = lStack_88;
  uVar1 = uStack_a8;
  __s10Foundation3URLV6stringACSgSSh_tcfC(uStack_a8,pbStack_90,lStack_88);
  _swift_bridgeObjectRelease(lVar6);
  FUN_000add40(uVar1,pbVar8,0xae6dd0,&UNK_007ce690);
  (**(code **)(lVar9 + 0x38))(pbVar8,0,1,lVar4);
  _swift_beginAccess(unaff_x20 + lVar3,&pbStack_90,0x21,0);
  func_0x000add88(pbVar8,unaff_x20 + lVar3);
  _swift_endAccess(&pbStack_90);
  return;
}



/* Entry: 000ac548; end: 000ac63b;  */

undefined1  [16] FUN_000ac548(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar2 = (int)&uStack_70;
  puVar3 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self();
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR__kCFBundleVersionKey_00999d58 != 0) {
    puVar4 = puVar3;
    func_0x00789e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,puVar4);
      _swift_unknownObjectRelease(puVar4);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 == 0) {
      func_0x000ade28(&uStack_40,0xae65a0,&UNK_007ce270);
      uStack_70 = 0;
      uStack_68 = 0;
    }
    else {
      _swift_dynamicCast(&uStack_70,&uStack_40,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
      if (iVar2 == 0) {
        uStack_70 = 0;
        uStack_68 = 0;
      }
    }
    auVar5._8_8_ = uStack_68;
    auVar5._0_8_ = uStack_70;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xac63c);
  (*pcVar1)();
}



/* Entry: 000ac63c; end: 000ac7c7;  */

void FUN_000ac63c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_60 - extraout_x8;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2d);
  _swift_bridgeObjectRelease(uStack_58);
  uStack_60 = 0xd00000000000004a;
  uStack_58 = 0x80000000008b7fc0;
  FUN_000ac200(lVar6);
  __sSS10describingSSx_tclufC(lVar6,lVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(lVar2);
  uVar1 = uStack_58;
  uVar3 = uStack_60;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_60,uStack_58);
  _swift_bridgeObjectRelease(uVar1);
  FUN_0062e620(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_00ac3068;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSessionConfiguration_00ac3068);
  func_0x00781c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00790e20();
  puVar5 = PTR__OBJC_CLASS___NSURLSession_00ac3078;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_00ac3078);
  func_0x0078c900();
  _objc_retainAutoreleasedReturnValue();
  FUN_000ac200(lVar6);
  FUN_000ac7c8(lVar6,puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x000ade28(lVar6,0xae6dd0,&UNK_007ce690);
  return;
}



/* Entry: 000ac7c8; end: 000ad633;  */

void FUN_000ac7c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  undefined8 uVar12;
  undefined8 unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [88];
  
  lVar1 = 0;
  uStack_130 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_108 = *(long *)(lVar1 + -8);
  lStack_100 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_108 + 0x40));
  lVar9 = (long)&pcStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_110 = lVar9;
  __s8Dispatch0A3QoSVMa();
  lStack_120 = *(long *)(lVar1 + -8);
  lStack_118 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_120 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_128 = lVar9;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_140 = *(long *)(lVar1 + -8);
  lStack_138 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_140 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_02;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar17 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar17 - extraout_x12;
  FUN_000add40(param_1,lVar13,0xae6dd0,&UNK_007ce690);
  lVar1 = lVar13;
  (**(code **)(lVar18 + 0x30))(lVar13,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000ade28(lVar13,0xae6dd0,&UNK_007ce690);
    uVar12 = *(undefined8 *)PTR__NSURLErrorDomain_00998fa0;
    lVar1 = 0xae8128;
    func_0x000115a8(0xae8128,&UNK_007cf778);
    puVar8 = auStack_b8;
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00998f38;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    puVar6 = PTR___sSSN_0099b040;
    *(undefined **)(lVar1 + 0x48) = PTR___sSSN_0099b040;
    *(undefined1 **)(lVar1 + 0x28) = puVar8;
    *(undefined8 *)(lVar1 + 0x30) = 0xd00000000000001d;
    *(undefined8 *)(lVar1 + 0x38) = 0x80000000008b7e10;
    _objc_retain(uVar12);
    lVar2 = lVar1;
    FUN_00051f24(lVar1);
    _swift_setDeallocating(lVar1);
    func_0x000ade28((undefined8 *)(lVar1 + 0x20),0xae8130,&UNK_007cf780);
    puVar4 = PTR__OBJC_CLASS___NSError_00ac2b00;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSError_00ac2b00);
    lVar1 = lVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,puVar6,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
    _swift_bridgeObjectRelease(lVar2);
    func_0x007853c0(puVar4);
    _objc_release(uVar12);
    _objc_release(lVar1);
    func_0x000ad7ec(0,0xf000000000000000,puVar4);
    _objc_release(puVar4);
  }
  else {
    pcStack_150 = *(code **)(lVar18 + 0x20);
    (*pcStack_150)(lVar10,lVar13,lVar2);
    uVar3 = 0xd000000000000037;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x80000000008b7e30);
    FUN_0062e620();
    _objc_release(uVar3);
    FUN_00088dc4(0);
    lVar13 = lStack_138;
    lVar1 = lStack_140;
    (**(code **)(lStack_140 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,lStack_138);
    lVar5 = lVar9;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    lStack_148 = lVar5;
    (**(code **)(lVar1 + 8))(lVar9,lVar13);
    (**(code **)(lVar18 + 0x10))(lVar17,lVar10,lVar2);
    uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    uVar16 = lVar15 + uVar14 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_009a9520;
    _swift_allocObject(&UNK_009a9520,uVar16 + 0x10,uVar11 | 7);
    (*pcStack_150)(puVar6 + uVar14,lVar17,lVar2);
    uVar3 = uStack_130;
    *(undefined8 *)(puVar6 + uVar16) = uStack_130;
    *(undefined8 *)(puVar6 + uVar16 + 8) = unaff_x20;
    pcStack_c8 = FUN_000adcd0;
    puStack_e8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_e0 = 0x42000000;
    uStack_d8 = 0x563e4;
    puStack_d0 = &UNK_009a9538;
    ppuVar7 = &puStack_e8;
    puStack_c0 = puVar6;
    __Block_copy(ppuVar7);
    _objc_retain(uVar3);
    _swift_retain(unaff_x20);
    lVar9 = lStack_128;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_128);
    puStack_f0 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00088e34();
    uVar3 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar12 = uVar3;
    func_0x00088e78();
    lVar15 = lStack_100;
    lVar13 = lStack_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lStack_110,&puStack_f0,uVar3,uVar12,lStack_100,unaff_x20);
    lVar1 = lStack_148;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar13,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(lVar1);
    (**(code **)(lStack_108 + 8))(lVar13,lVar15);
    (**(code **)(lStack_120 + 8))(lVar9,lStack_118);
    (**(code **)(lVar18 + 8))(lVar10,lVar2);
    _swift_release(puStack_c0);
  }
  return;
}



/* Entry: 000ad634; end: 000ad8a7;  */

void FUN_000ad634(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    _swift_retain(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    _swift_retain(uVar2);
    lVar3 = param_2;
    _objc_retain(param_2);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  _objc_retain(param_3);
  uVar5 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  FUN_00023344(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 000ad8a8; end: 000ad8b7;  */

void FUN_000ad8a8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 000ad8b8; end: 000ad917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad8b8(void)

{
  long unaff_x20;
  
  FUN_00023344(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_000ad8a8(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000ade28(unaff_x20 + _DAT_00aecd98,0xaecda0,&UNK_007d6450);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000ad918; end: 000ad91f;  */

void FUN_000ad918(void)

{
  if (lRam0000000000aecdd0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0084302c);
  return;
}



/* Entry: 000ad920; end: 000ad957;  */

void FUN_000ad920(undefined8 param_1)

{
  if (lRam0000000000aecdd0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0084302c);
  return;
}



/* Entry: 000ad958; end: 000ada4f;  */

void FUN_000ad958(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = &UNK_007d64a8;
  puStack_40 = &UNK_007d64c0;
  puStack_30 = PTR___sBOWV_0099ae70 + 0x40;
  puStack_38 = &UNK_007d64d8;
  lVar1 = 0x13f;
  func_0x000ad9f0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 000ada50; end: 000adac7;  */

void FUN_000ada50(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  if (param_2 >> 0x3c < 0xf) {
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  }
  else {
    param_1 = 0;
  }
  if (param_3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 000adac8; end: 000adc27;  */

void FUN_000adac8(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = &UNK_009a94f8;
  _swift_allocObject(&UNK_009a94f8,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  __Block_copy(param_2);
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  FUN_000308a8(uVar1,uVar2);
  FUN_00023344(uVar1,uVar2);
  if (uVar2 >> 0x3c < 0xf) {
    FUN_00023344(0,0xf000000000000000);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      *(code **)(param_1 + 0x28) = FUN_000adc4c;
      *(undefined **)(param_1 + 0x30) = puVar3;
      _swift_retain(puVar3);
      FUN_000ad8a8(uVar1,uVar5);
      goto LAB_000adc08;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  _swift_errorRetain(lVar4);
  if (uVar2 >> 0x3c < 0xf) {
    FUN_000308a8(uVar1,uVar2);
    uVar5 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
    if (lVar4 == 0) goto LAB_000adbcc;
LAB_000adb9c:
    lVar6 = lVar4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(lVar4);
  }
  else {
    uVar5 = 0;
    if (lVar4 != 0) goto LAB_000adb9c;
LAB_000adbcc:
    lVar6 = 0;
  }
  (**(code **)(param_2 + 0x10))(param_2,uVar5,lVar6);
  _objc_release(uVar5);
  _objc_release(lVar6);
  _swift_errorRelease(lVar4);
  FUN_00023344(uVar1,uVar2);
LAB_000adc08:
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar3);
  return;
}



/* Entry: 000adc28; end: 000adc4b;  */

void FUN_000adc28(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000adc4c; end: 000adc53;  */

void FUN_000adc4c(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  }
  else {
    param_1 = 0;
  }
  if (param_3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 000adc54; end: 000adccf;  */

void FUN_000adc54(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000adcd0; end: 000add1b;  */

void FUN_000adcd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  uVar6 = *(undefined8 *)(unaff_x20 + uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + (uVar8 + 0xf & 0xffffffffffffff8));
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x10))(lVar3,unaff_x20 + uVar9,lVar5);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar10,0x4010000000000000,lVar3,0);
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  uStack_70 = 0xadd38;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_000ad634;
  puStack_78 = &UNK_009a9560;
  ppuVar4 = &puStack_90;
  uStack_68 = uVar7;
  __Block_copy(ppuVar4);
  uVar1 = uStack_68;
  _swift_retain(uVar7);
  _swift_release(uVar1);
  func_0x00781560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  _objc_release(lVar3);
  func_0x0078bb80(uVar6);
  _objc_release(uVar6);
  (**(code **)(lVar11 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 000add1c; end: 000add3f;  */

void FUN_000add1c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000add40; end: 000ade67;  */

undefined8 FUN_000add40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 000ade68; end: 000ade6f;  */

void FUN_000ade68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000ade70; end: 000ae03b;  */

void FUN_000ade70(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_0099bd20;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_00088dc4();
  uStack_78 = uVar4;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar4 = 0xaecff0;
  FUN_000b2a68(0xaecff0,puVar1,
               PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_0099bd30);
  uVar5 = 0xaecff8;
  func_0x000115a8(0xaecff8,&UNK_007d65c8);
  uVar6 = 0xaed000;
  func_0x000b2aa8(0xaed000,0xaecff8,&UNK_007d65c8);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4)
  ;
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_0099bd48
             ,lStack_70);
  uVar4 = 0xd00000000000002f;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000002f,0x80000000008b80b0,lVar3,lVar8,puVar7,0);
  uRam0000000000aecf70 = uVar4;
  return;
}



/* Entry: 000ae03c; end: 000ae0df;  */

void FUN_000ae03c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  uRam0000000000aecf10 = uVar1;
  return;
}



/* Entry: 000ae0e0; end: 000ae2e7;  */

void FUN_000ae0e0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar7 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  _objc_opt_self();
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0077bca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar3,lVar1);
  _objc_release(puVar3);
  lVar4 = *(long *)(puVar2 + 0x10);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(puVar2);
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (lVar6,puVar2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    _swift_bridgeObjectRelease(puVar2);
  }
  (**(code **)(lVar8 + 0x38))(lVar6,lVar4 == 0,1,lVar1);
  FUN_0002f2dc(lVar6,lVar7);
  lVar4 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar4 == 1) {
    func_0x0002f32c(lVar7);
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(param_1,0,0xe000000000000000);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar5,lVar7,lVar1);
    __s10Foundation3URLV22appendingPathComponentyACSSF
              (param_1,0xd000000000000019,0x80000000008b8090);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
  }
  func_0x0002f32c(lVar6);
  return;
}



/* Entry: 000ae2e8; end: 000ae493;  */

void FUN_000ae2e8(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000000aecfc8 != -1) {
    _swift_once(0xaecfc8,0xae098);
  }
  lVar2 = lVar1;
  FUN_00028010(lVar1,0xb64920);
  (**(code **)(lVar5 + 0x10))(puVar4,lVar2,lVar1);
  puVar3 = puVar4;
  FUN_000b1618();
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  puRam0000000000aecf20 = puVar3;
  return;
}



/* Entry: 000ae494; end: 000aeb8b;  */

/* WARNING: Removing unreachable block (ram,0x000ae96c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ae494(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  code *unaff_x20;
  code *pcVar13;
  undefined *puVar14;
  double unaff_x22;
  long lVar15;
  double dVar16;
  double adStack_130 [4];
  long alStack_110 [2];
  double dStack_100;
  uint uStack_f4;
  undefined *puStack_f0;
  long lStack_e8;
  double dStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&dStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar8 - extraout_x12;
  __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
  dVar16 = *(double *)(param_2 + _DAT_00aed038);
  if (lRam0000000000aecf68 != -1) {
    _swift_once(0xaecf68,FUN_000ade70);
  }
  pcVar13 = pcRam0000000000aecf70;
  puVar14 = (undefined *)0x0;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&dStack_b8,0xb2bec,&puStack_b0,PTR___sSdN_0099b258);
  lVar1 = _DAT_00aed040;
  if (param_1 - dVar16 < dStack_b8) {
    pcVar3 = (code *)0xd00000000000003b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003b,0x80000000008b84c0);
    FUN_0062e620();
    _objc_release(pcVar3);
    goto LAB_000aeb04;
  }
  unaff_x22 = (double)(*(long *)(param_2 + _DAT_00aed040) + 1);
  if (SCARRY8(*(long *)(param_2 + _DAT_00aed040),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xaeb60);
    (*pcVar3)();
  }
  puVar4 = &UNK_009a98e0;
  lStack_e8 = lVar8;
  _swift_allocObject(&UNK_009a98e0,0x20,7);
  *(code **)(puVar4 + 0x10) = pcVar3;
  *(double *)(puVar4 + 0x18) = unaff_x22;
  puVar5 = &UNK_009a9908;
  _swift_allocObject(&UNK_009a9908,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xb2b2c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_90 = 0xb2c78;
  puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
  pcStack_a8 = (code *)0x42000000;
  uStack_a0 = 0xae078;
  puStack_98 = &UNK_009a9920;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  __Block_copy(ppuVar6);
  puVar7 = puStack_88;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  _dispatch_sync(pcVar13,ppuVar6);
  __Block_release(ppuVar6);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x73,0x47,0x18,1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xaeb64);
    (*pcVar3)();
  }
  puStack_b0 = (undefined *)0x0;
  pcStack_a8 = (code *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3a);
  __sSS6appendyySSF(0x5b,0xe100000000000000);
  puStack_f0 = &UNK_007d6580;
  __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
  __sSS6appendyySSF(0xd000000000000035,0x80000000008b83d0);
  puVar4 = PTR___sSiN_0099b2c0;
  dStack_b8 = *(double *)(param_2 + lVar1);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  pcVar3 = pcStack_a8;
  puVar5 = puStack_b0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b0,pcStack_a8);
  _swift_bridgeObjectRelease(pcVar3);
  FUN_0062e620(puVar5);
  _objc_release(puVar5);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF(&dStack_b8,0xb2c00,&puStack_b0,puVar4)
  ;
  dVar16 = dStack_b8;
  if (unaff_x22 == dStack_b8) {
    pcVar3 = (code *)((long)&MACH_HEADER.magic + 1);
  }
  else if ((long)dStack_b8 < (long)unaff_x22) {
    if (dStack_b8 == 0.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xaeb84);
      (*pcVar3)();
    }
    lVar8 = 0;
    if (dStack_b8 != 0.0) {
      lVar8 = (long)unaff_x22 / (long)dStack_b8;
    }
    pcVar3 = (code *)(ulong)(unaff_x22 == (double)(lVar8 * (long)dStack_b8));
  }
  else {
    pcVar3 = (code *)0x0;
  }
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&dStack_b8,0xb2c14,&puStack_b0,PTR___sSdN_0099b258);
  *(double *)(param_2 + _DAT_00aed048) = dStack_b8;
  *(double *)(param_2 + _DAT_00aed050) = dVar16;
  *(double *)(param_2 + lVar1) = unaff_x22;
  if (lRam0000000000aecfc8 != -1) {
    _swift_once(0xaecfc8,0xae098);
  }
  lVar8 = lVar2;
  FUN_00028010(lVar2,0xb64920);
  (**(code **)(lVar12 + 0x10))(lVar15,lVar8,lVar2);
  puVar4 = PTR_PTR_00ac2ce8;
  _objc_opt_self();
  func_0x00781760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    pcVar13 = *(code **)(lVar12 + 8);
  }
  else {
    uStack_f4 = (uint)pcVar3;
    puVar5 = puVar4;
    dStack_100 = unaff_x22;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar4);
    lVar1 = lStack_e8;
    __s10Foundation3URLV25deletingLastPathComponentACyF(lStack_e8);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    _objc_opt_self();
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puStack_b0 = (undefined *)0x0;
    puVar9 = puVar4;
    func_0x00781140();
    _objc_release(puVar4);
    _objc_release(puVar7);
    puVar4 = puStack_b0;
    if ((int)puVar9 == 0) {
      puVar14 = puStack_b0;
      _objc_retain(puStack_b0);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar14);
      _swift_willThrow();
      FUN_00023358(puVar5,lVar8);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(lVar1,lVar2);
      _swift_errorRelease(puVar4);
    }
    else {
      _objc_retain(puStack_b0);
      __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                (lVar15,0,puVar5,lVar8);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(lVar1,lVar2);
      FUN_00023358(puVar5,lVar8);
      puVar4 = puVar14;
    }
    pcVar3 = (code *)(ulong)uStack_f4;
    puVar14 = puVar4;
    unaff_x22 = dStack_100;
  }
  (*pcVar13)(lVar15,lVar2);
  if ((int)pcVar3 != 0) {
    uVar10 = 0xd00000000000004f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000004f,0x80000000008b8470);
    FUN_0062e620();
    _objc_release(uVar10);
    FUN_000ac63c();
    FUN_000af954(0,2);
    uVar10 = 1;
    pcVar13 = unaff_x20;
    goto LAB_000aeb08;
  }
  if (SBORROW8((long)dVar16,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xaeb80);
    (*pcVar3)();
  }
  if (unaff_x22 == (double)((long)dVar16 + -1)) {
LAB_000aea50:
    puStack_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x58);
    __sSS6appendyySSF(0x5b,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000022,(ulong)puStack_f0 | 0x8000000000000000);
    __sSS6appendyySSF(0xd000000000000055,0x80000000008b8410);
    pcVar3 = pcStack_a8;
    puVar4 = puStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_b0,pcStack_a8);
    _swift_bridgeObjectRelease(pcVar3);
    FUN_0062e620(puVar4);
    _objc_release(puVar4);
    FUN_000af954(1,2);
    pcVar13 = unaff_x20;
  }
  else if ((long)dVar16 < (long)unaff_x22) {
    if (dVar16 == 0.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xaeb88);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (dVar16 != 0.0) {
      lVar2 = (long)unaff_x22 / (long)dVar16;
    }
    if ((long)unaff_x22 - lVar2 * (long)dVar16 == (long)dVar16 + -1) goto LAB_000aea50;
  }
LAB_000aeb04:
  uVar10 = 0;
  unaff_x20 = pcVar3;
LAB_000aeb08:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_80) {
    ___stack_chk_fail(uVar10);
    *(double *)(lVar15 + -0x30) = unaff_x22;
    *(undefined **)(lVar15 + -0x28) = puVar14;
    *(code **)(lVar15 + -0x20) = pcVar13;
    *(code **)(lVar15 + -0x18) = unaff_x20;
    *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar15 + -8) = FUN_000aeb8c;
    if (lRam0000000000aecf40 != -1) {
      _swift_once(0xaecf40,0xae3b4);
    }
    if (lRam0000000000aecf08 != -1) {
      _swift_once(0xaecf08,FUN_000ae03c);
    }
    __s11SwiftSCLock4LockC4lockyyF();
    if (lRam0000000000aecf38 != -1) {
      _swift_once(0xaecf38,FUN_000afdcc);
    }
    if (lRam0000000000aecf18 != -1) {
      _swift_once(0xaecf18,FUN_000ae2e8);
    }
    uVar10 = uRam0000000000aecf20;
    _objc_retain();
    uVar11 = uVar10;
    FUN_000aec94();
    _objc_release(uVar10);
    func_0x001d46c8();
    bRam0000000000b64919 = (byte)uVar11 & 1;
    return;
  }
  return;
}



/* Entry: 000aeb8c; end: 000aec93;  */

void FUN_000aeb8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000000aecf40 != -1) {
    _swift_once(0xaecf40,0xae3b4);
  }
  if (lRam0000000000aecf08 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  __s11SwiftSCLock4LockC4lockyyF();
  if (lRam0000000000aecf38 != -1) {
    _swift_once(0xaecf38,FUN_000afdcc);
  }
  if (lRam0000000000aecf18 != -1) {
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  uVar1 = uRam0000000000aecf20;
  _objc_retain();
  uVar2 = uVar1;
  FUN_000aec94();
  _objc_release(uVar1);
  func_0x001d46c8();
  bRam0000000000b64919 = (byte)uVar2 & 1;
  return;
}



/* Entry: 000aec94; end: 000af953;  */

/* WARNING: Removing unreachable block (ram,0x000af0e4) */
/* WARNING: Removing unreachable block (ram,0x000aef78) */
/* WARNING: Removing unreachable block (ram,0x000af74c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aec94(double param_1,double *****param_2,double *****param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  double *****pppppdVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  double *****pppppdVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  double *****extraout_x14;
  double *****pppppdVar14;
  double *****unaff_x20;
  double *****pppppdVar15;
  long lVar16;
  double *****unaff_x23;
  double *****pppppdVar17;
  ulong uVar18;
  double *****pppppdVar19;
  double *****pppppdVar20;
  double *****pppppdVar21;
  double *****unaff_x26;
  code *pcVar22;
  double ****ppppdVar23;
  double ***apppdStack_158 [13];
  double ***pppdStack_f0;
  double ****ppppdStack_e8;
  double ****ppppdStack_e0;
  double ****ppppdStack_d8;
  long lStack_d0;
  long lStack_c8;
  double ****ppppdStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  double ****ppppdStack_a8;
  double ****ppppdStack_a0;
  double ****ppppdStack_90;
  double ****ppppdStack_88;
  double ****ppppdStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppdVar15 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar16 = (long)&pppdStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pppppdVar14 = (double *****)((lVar16 - extraout_x12) - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar2 = (long)pppppdVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pppppdVar19 = (double *****)(lVar2 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pppppdVar20 = (double *****)((long)pppppdVar19 - extraout_x12_03);
  pppppdVar11 = unaff_x20;
  pppppdVar4 = pppppdVar19;
  pppppdVar21 = pppppdVar20;
  if (*(int *)((long)param_2 + (long)_DAT_00aed068) != -1) {
    ppppdStack_e0 = (double ****)_DAT_00aed068;
    lStack_d0 = _DAT_00aed040;
    pppppdVar17 = *(double ******)((long)param_2 + _DAT_00aed040);
    ppppdStack_e8 = (double ****)extraout_x14;
    ppppdStack_d8 = (double ****)pppppdVar15;
    lStack_c8 = extraout_x13;
    ppppdStack_c0 = (double ****)param_2;
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    unaff_x26 = (double *****)ppppdStack_d8;
    pppppdVar11 = pppppdRam0000000000aecf70;
    ppppdStack_80 = ppppdStack_d8;
    param_2 = (double *****)0x0;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&ppppdStack_a8,0xb2b1c,&ppppdStack_90,PTR___sSiN_0099b2c0);
    pppppdVar4 = (double *****)ppppdStack_c0;
    if (pppppdVar17 == (double *****)ppppdStack_a8) {
      __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
      pppppdVar15 = (double *****)ppppdStack_c0;
      pdVar1 = (double *)((long)ppppdStack_c0 + _DAT_00aed060);
      *pdVar1 = param_1;
      *(undefined1 *)(pdVar1 + 1) = 0;
      if (lRam0000000000aecfc8 != -1) {
        _swift_once(0xaecfc8,0xae098);
      }
      lVar16 = lStack_b8;
      lVar3 = lStack_b8;
      FUN_00028010(lStack_b8,0xb64920);
      lVar2 = lStack_c8;
      (**(code **)(lStack_c8 + 0x10))(pppppdVar20,lVar3,lVar16);
      pppppdVar11 = (double *****)PTR_PTR_00ac2ce8;
      _objc_opt_self();
      func_0x00781760();
      _objc_retainAutoreleasedReturnValue();
      if (pppppdVar11 == (double *****)0x0) {
        pcVar22 = *(code **)(lVar2 + 8);
      }
      else {
        unaff_x26 = pppppdVar11;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(pppppdVar11);
        __s10Foundation3URLV25deletingLastPathComponentACyF(pppppdVar19);
        puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
        _objc_opt_self();
        func_0x00781c40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        ppppdStack_90 = (double ****)0x0;
        puVar9 = puVar7;
        func_0x00781140();
        _objc_release(puVar7);
        _objc_release(puVar8);
        pppppdVar11 = (double *****)ppppdStack_90;
        if ((int)puVar9 == 0) {
          pppppdVar4 = (double *****)ppppdStack_90;
          _objc_retain(ppppdStack_90);
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(pppppdVar11);
          _objc_release(pppppdVar4);
          _swift_willThrow();
          FUN_00023358(unaff_x26,lVar3);
          lVar16 = lStack_b8;
          pcVar22 = *(code **)(lStack_c8 + 8);
          (*pcVar22)(pppppdVar19,lStack_b8);
          _swift_errorRelease(pppppdVar11);
        }
        else {
          _objc_retain(ppppdStack_90);
          __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                    (pppppdVar20,0,unaff_x26,lVar3);
          lVar16 = lStack_b8;
          pcVar22 = *(code **)(lStack_c8 + 8);
          (*pcVar22)(pppppdVar19,lStack_b8);
          FUN_00023358(unaff_x26,lVar3);
        }
      }
      (*pcVar22)(pppppdVar20,lVar16);
      FUN_000af954(3,2);
      ppppdStack_90 = (double ****)0x0;
      ppppdStack_88 = (double ****)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x3e);
      __sSS6appendyySSF(0x5b,0xe100000000000000);
      param_2 = (double *****)0xd000000000000022;
      __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
      __sSS6appendyySSF(0xd000000000000027,0x80000000008b8380);
      ppppdStack_a8 = *(double *****)((long)pppppdVar15 + lStack_d0);
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar7);
      __sSS6appendyySSF(0xd000000000000010,0x80000000008b83b0);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (param_1,&ppppdStack_90,PTR___ss26DefaultStringInterpolationVN_0099b698,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
      pppppdVar11 = (double *****)ppppdStack_88;
      pppppdVar14 = (double *****)ppppdStack_90;
      param_3 = (double *****)ppppdStack_88;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pppppdVar11);
      FUN_0062e620(pppppdVar14);
LAB_000af3c0:
      _objc_release(pppppdVar14);
      lVar2 = *(long *)((long)pppppdVar15 + (long)ppppdStack_e0);
      unaff_x23 = unaff_x20;
      pppppdVar4 = pppppdVar19;
      if (lVar2 != -1) {
        if (lVar2 == 1) {
          FUN_000afab4(pppppdVar15);
          pppppdVar11 = unaff_x20;
        }
        else if (lVar2 == 0) {
          FUN_000afab4(pppppdVar15);
          pppppdVar11 = unaff_x20;
          goto LAB_000af5d4;
        }
        uVar5 = 1;
        goto LAB_000af5d8;
      }
    }
    else {
      unaff_x23 = *(double ******)((long)ppppdStack_c0 + lStack_d0);
      ppppdStack_80 = (double ****)unaff_x26;
      param_3 = &ppppdStack_90;
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&ppppdStack_a8,0xb2bc4,param_3,PTR___sSiN_0099b2c0);
      unaff_x26 = (double *****)((long)pppppdVar4 + _DAT_00aed060);
      if ((long)ppppdStack_a8 < (long)unaff_x23) {
        *unaff_x26 = (double ****)0x0;
        *(undefined1 *)(unaff_x26 + 1) = 1;
        if (lRam0000000000aecfc8 != -1) {
          _swift_once(0xaecfc8,0xae098);
        }
        lVar3 = lStack_b8;
        lVar6 = lStack_b8;
        FUN_00028010(lStack_b8,0xb64920);
        lVar16 = lStack_c8;
        (**(code **)(lStack_c8 + 0x10))(lVar2,lVar6,lVar3);
        puVar7 = PTR_PTR_00ac2ce8;
        _objc_opt_self();
        ppppdVar23 = ppppdStack_c0;
        func_0x00781760();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          unaff_x26 = *(double ******)(lVar16 + 8);
          pppppdVar21 = pppppdVar11;
        }
        else {
          ppppdStack_e0 = (double ****)pppppdVar11;
          puVar8 = puVar7;
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
          _objc_release(puVar7);
          __s10Foundation3URLV25deletingLastPathComponentACyF(pppppdVar14);
          puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
          _objc_opt_self();
          func_0x00781c40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          ppppdStack_90 = (double ****)0x0;
          puVar10 = puVar7;
          func_0x00781140();
          _objc_release(puVar7);
          _objc_release(puVar9);
          pppppdVar15 = (double *****)ppppdStack_90;
          if ((int)puVar10 == 0) {
            pppppdVar11 = (double *****)ppppdStack_90;
            _objc_retain(ppppdStack_90);
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(pppppdVar15);
            _objc_release(pppppdVar11);
            _swift_willThrow();
            FUN_00023358(puVar8,lVar6);
            lVar3 = lStack_b8;
            unaff_x26 = *(double ******)(lStack_c8 + 8);
            (*(code *)unaff_x26)(pppppdVar14,lStack_b8);
            _swift_errorRelease(pppppdVar15);
            pppppdVar21 = (double *****)ppppdStack_e0;
          }
          else {
            _objc_retain(ppppdStack_90);
            __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                      (lVar2,0,puVar8,lVar6);
            lVar3 = lStack_b8;
            unaff_x26 = *(double ******)(lStack_c8 + 8);
            (*(code *)unaff_x26)(pppppdVar14,lStack_b8);
            FUN_00023358(puVar8,lVar6);
            pppppdVar21 = (double *****)ppppdStack_e0;
          }
        }
        param_2 = (double *****)0x0;
        (*(code *)unaff_x26)(lVar2,lVar3);
        FUN_000af954(0,1);
        ppppdStack_90 = (double ****)0x0;
        ppppdStack_88 = (double ****)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x81);
        ppppdStack_a8 = ppppdStack_90;
        ppppdStack_a0 = ppppdStack_88;
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
        __sSS6appendyySSF(0xd000000000000016,0x80000000008b82e0);
        pppppdVar15 = (double *****)PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
        puVar7 = PTR___sSiN_0099b2c0;
        ppppdStack_90 = *(double *****)((long)ppppdVar23 + lStack_d0);
        unaff_x20 = (double *****)PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj(PTR___sSiN_0099b2c0);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(unaff_x20);
        __sSS6appendyySSF(0xd000000000000022,0x80000000008b8300);
        ppppdStack_80 = ppppdStack_d8;
        __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                  (auStack_b0,0xb2bd8,&ppppdStack_90,puVar7);
        puVar8 = (undefined *)pppppdVar15;
        __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar7,pppppdVar15);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar8);
        __sSS6appendyySSF(0xd000000000000042,0x80000000008b8330);
        pppppdVar14 = (double *****)ppppdStack_a0;
        pppppdVar11 = (double *****)ppppdStack_a8;
        param_3 = (double *****)ppppdStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pppppdVar14);
        func_0x0062e624(pppppdVar11);
      }
      else {
        pppppdVar15 = unaff_x20;
        if (*(char *)(unaff_x26 + 1) == '\x01') goto LAB_000af5d4;
        pppppdVar19 = (double *****)0xd000000000000022;
        ppppdVar23 = *unaff_x26;
        __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
        param_1 = param_1 - (double)ppppdVar23;
        if (param_1 < 7200.0) {
          FUN_000af954(4,2);
          ppppdStack_90 = (double ****)0x0;
          ppppdStack_88 = (double ****)0xe000000000000000;
          __ss11_StringGutsV4growyySiF(0x70);
          __sSS6appendyySSF(0x5b,0xe100000000000000);
          __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
          __sSS6appendyySSF(0xd00000000000001c,0x80000000008b8270);
          param_2 = (double *****)
                    PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0;
          puVar7 = PTR___ss26DefaultStringInterpolationVN_0099b698;
          __sSd5write2toyxz_ts16TextOutputStreamRzlF
                    (param_1,&ppppdStack_90,PTR___ss26DefaultStringInterpolationVN_0099b698,
                     PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
          __sSS6appendyySSF(0xd000000000000044,0x80000000008b8290);
          __sSd5write2toyxz_ts16TextOutputStreamRzlF
                    (0x40bc200000000000,&ppppdStack_90,puVar7,param_2);
          __sSS6appendyySSF(0x73646e6f63657320,0xe90000000000002e);
          pppppdVar11 = (double *****)ppppdStack_88;
          pppppdVar14 = (double *****)ppppdStack_90;
          param_3 = (double *****)ppppdStack_88;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pppppdVar11);
          FUN_0062e620(pppppdVar14);
          pppppdVar15 = (double *****)ppppdStack_c0;
          goto LAB_000af3c0;
        }
        *unaff_x26 = (double ****)0x0;
        *(undefined1 *)(unaff_x26 + 1) = 1;
        if (lRam0000000000aecfc8 != -1) {
          _swift_once(0xaecfc8,0xae098);
        }
        lVar3 = lStack_b8;
        lVar6 = lStack_b8;
        FUN_00028010(lStack_b8,0xb64920);
        lVar2 = lStack_c8;
        (**(code **)(lStack_c8 + 0x10))(ppppdStack_e8,lVar6,lVar3);
        puVar7 = PTR_PTR_00ac2ce8;
        _objc_opt_self();
        func_0x00781760();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          pppppdVar21 = *(double ******)(lVar2 + 8);
          lVar2 = lStack_b8;
        }
        else {
          puVar8 = puVar7;
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
          _objc_release(puVar7);
          __s10Foundation3URLV25deletingLastPathComponentACyF(lVar16);
          puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
          _objc_opt_self();
          func_0x00781c40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          ppppdStack_90 = (double ****)0x0;
          puVar10 = puVar7;
          func_0x00781140();
          _objc_release(puVar7);
          _objc_release(puVar9);
          pppppdVar15 = (double *****)ppppdStack_90;
          if ((int)puVar10 == 0) {
            pppppdVar11 = (double *****)ppppdStack_90;
            _objc_retain(ppppdStack_90);
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(pppppdVar15);
            _objc_release(pppppdVar11);
            _swift_willThrow();
            FUN_00023358(puVar8,lVar6);
            lVar2 = lStack_b8;
            pppppdVar21 = *(double ******)(lStack_c8 + 8);
            (*(code *)pppppdVar21)(lVar16,lStack_b8);
            _swift_errorRelease(pppppdVar15);
          }
          else {
            _objc_retain(ppppdStack_90);
            __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                      (ppppdStack_e8,0,puVar8,lVar6);
            lVar2 = lStack_b8;
            pppppdVar21 = *(double ******)(lStack_c8 + 8);
            (*(code *)pppppdVar21)(lVar16,lStack_b8);
            FUN_00023358(puVar8,lVar6);
          }
        }
        pppppdVar15 = (double *****)0x73646e6f63657320;
        (*(code *)pppppdVar21)(ppppdStack_e8,lVar2);
        FUN_000af954(1,1);
        ppppdStack_90 = (double ****)0x0;
        ppppdStack_88 = (double ****)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x91);
        __sSS6appendyySSF(0x5b,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
        __sSS6appendyySSF(0xd000000000000034,0x80000000008b81e0);
        param_2 = (double *****)PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0
        ;
        puVar7 = PTR___ss26DefaultStringInterpolationVN_0099b698;
        __sSd5write2toyxz_ts16TextOutputStreamRzlF
                  (0x40bc200000000000,&ppppdStack_90,PTR___ss26DefaultStringInterpolationVN_0099b698
                   ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
        __sSS6appendyySSF(0xd00000000000004d,0x80000000008b8220);
        __sSd5write2toyxz_ts16TextOutputStreamRzlF(param_1,&ppppdStack_90,puVar7,param_2);
        __sSS6appendyySSF(0x73646e6f63657320,0xe90000000000002e);
        pppppdVar14 = (double *****)ppppdStack_88;
        pppppdVar11 = (double *****)ppppdStack_90;
        param_3 = (double *****)ppppdStack_88;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pppppdVar14);
        FUN_0062e620(pppppdVar11);
        unaff_x26 = (double *****)ppppdStack_e8;
      }
      pppppdVar4 = (double *****)0xd000000000000022;
      _objc_release(pppppdVar11);
      unaff_x23 = unaff_x20;
    }
  }
LAB_000af5d4:
  uVar5 = 0;
  unaff_x20 = unaff_x23;
  pppppdVar19 = pppppdVar4;
LAB_000af5d8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pppppdVar20[-10] = (double ****)unaff_x26;
  pppppdVar20[-9] = (double ****)pppppdVar21;
  pppppdVar20[-8] = (double ****)pppppdVar19;
  pppppdVar20[-7] = (double ****)unaff_x20;
  pppppdVar20[-6] = (double ****)pppppdVar15;
  pppppdVar20[-5] = (double ****)param_2;
  pppppdVar20[-4] = (double ****)pppppdVar11;
  pppppdVar20[-3] = (double ****)pppppdVar14;
  pppppdVar20[-2] = (double ****)&stack0xfffffffffffffff0;
  pppppdVar20[-1] = (double ****)FUN_000af954;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar2 = (long)pppppdVar11 + _DAT_00aecf88;
  lVar3 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  lVar16 = _DAT_00aecf90;
  if (lVar3 == 0) {
    _swift_beginAccess((long)pppppdVar11 + _DAT_00aecf90,pppppdVar20 + -0xd,0x21,0);
    uVar18 = *(ulong *)((long)pppppdVar11 + lVar16);
    uVar12 = uVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)((long)pppppdVar11 + lVar16) = uVar18;
    uVar13 = uVar18;
    if ((uVar12 & 1) == 0) {
      uVar13 = 0;
      FUN_000b13c0(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
      *(ulong *)((long)pppppdVar11 + lVar16) = uVar13;
    }
    uVar12 = *(ulong *)(uVar13 + 0x10);
    uVar18 = uVar13;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar12) {
      uVar18 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_000b13c0(uVar18,uVar12 + 1,1,uVar13);
    }
    *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
    lVar2 = uVar18 + uVar12 * 0x10;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(char *)(lVar2 + 0x28) = (char)param_3;
    *(ulong *)((long)pppppdVar11 + lVar16) = uVar18;
    _swift_endAccess(pppppdVar20 + -0xd);
    func_0x001d46c8();
    return;
  }
  lVar16 = *(long *)(lVar2 + 8);
  func_0x001d46c8();
  lVar2 = lVar3;
  _swift_getObjectType(lVar3);
  (**(code **)(lVar16 + 8))(uVar5,param_3,lVar2,lVar16);
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar3);
  return;
}



/* Entry: 000af954; end: 000afab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000af954(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  __s11SwiftSCLock4LockC4lockyyF();
  lVar2 = unaff_x20 + _DAT_00aecf88;
  lVar1 = lVar2;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _DAT_00aecf90;
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar2 + 8);
    func_0x001d46c8();
    lVar2 = lVar1;
    _swift_getObjectType(lVar1);
    (**(code **)(lVar5 + 8))(param_1,param_2,lVar2,lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar1);
    return;
  }
  _swift_beginAccess(unaff_x20 + _DAT_00aecf90,auStack_68,0x21,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar5);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar5) = uVar6;
  uVar4 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_000b13c0(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + lVar5) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_000b13c0(uVar6,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar2 = uVar6 + uVar3 * 0x10;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(char *)(lVar2 + 0x28) = (char)param_2;
  *(ulong *)(unaff_x20 + lVar5) = uVar6;
  _swift_endAccess(auStack_68);
  func_0x001d46c8();
  return;
}



/* Entry: 000afab4; end: 000afbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afab4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = ((undefined8 *)(param_1 + _DAT_00aed078))[1];
  if ((lVar4 != 0) && (*(char *)(param_1 + _DAT_00aed070 + 8) != '\x01')) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_00aed078);
    lVar1 = unaff_x20 + _DAT_00aecf28;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      _swift_bridgeObjectRetain(lVar4);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      puVar2 = PTR___sSiN_0099b2c0;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar3);
      func_0x007887a0(lVar1);
      _objc_release(uVar5);
      _objc_release(puVar2);
      _swift_unknownObjectRelease(lVar1);
    }
    *(bool *)(unaff_x20 + _DAT_00aecf30) = lVar1 == 0;
  }
  return;
}



/* Entry: 000afbd4; end: 000afcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afbd4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (lRam0000000000aecf08 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  __s11SwiftSCLock4LockC4lockyyF();
  if (lRam0000000000aecf18 != -1) {
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  uVar1 = uRam0000000000aecf20;
  _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_00aecf28,param_1);
  if (*(char *)(unaff_x20 + _DAT_00aecf30) == '\x01') {
    _objc_retain(uVar1);
    FUN_000afab4();
    _objc_release(uVar1);
  }
  func_0x001d46c8();
  return;
}



/* Entry: 000afcb0; end: 000afcf7; -[SCConfigHeuristicRecoveryManagerImpl setExperimentLogger:] */

void FUN_000afcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_000afbd4(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000afcf8; end: 000afdcb;  */

void FUN_000afcf8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_000b29bc();
  if (lRam0000000000aecf68 != -1) {
    _swift_once(0xaecf68,FUN_000ade70);
  }
  puVar1 = PTR___sSiN_0099b2c0;
  uStack_50 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&lStack_48,0xb2b0c,auStack_60,PTR___sSiN_0099b2c0);
  lVar2 = lStack_48;
  uStack_50 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&lStack_48,FUN_000b2bb0,auStack_60,puVar1);
  if (!SBORROW8(lStack_48,1)) {
    uRam0000000000b6491a = lStack_48 + -1 <= lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xafdcc);
  (*pcVar3)();
}



/* Entry: 000afdcc; end: 000afdef;  */

void FUN_000afdcc(undefined8 param_1)

{
  FUN_000b29bc();
  _objc_allocWithZone();
  func_0x007849a0();
  uRam0000000000b64910 = param_1;
  return;
}



/* Entry: 000afdf0; end: 000afe2f; +[SCConfigHeuristicRecoveryManagerImpl shared] */

void FUN_000afdf0(void)

{
  if (lRam0000000000aecf38 != -1) {
    _swift_once(0xaecf38,FUN_000afdcc);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)(uRam0000000000b64910);
  return;
}



/* Entry: 000afe30; end: 000afe4b; -[SCConfigHeuristicRecoveryManagerImpl isRecoveryNeeded] */

undefined1 FUN_000afe30(void)

{
  if (lRam0000000000aecf40 == -1) {
    return uRam0000000000b64918;
  }
  _swift_once(0xaecf40,0xae3b4);
  return uRam0000000000b64918;
}



/* Entry: 000afe4c; end: 000afe67; -[SCConfigHeuristicRecoveryManagerImpl isSafeModeNeeded] */

undefined1 FUN_000afe4c(void)

{
  if (lRam0000000000aecf48 == -1) {
    return uRam0000000000b64919;
  }
  _swift_once(0xaecf48,FUN_000aeb8c);
  return uRam0000000000b64919;
}



/* Entry: 000afe68; end: 000afe83; -[SCConfigHeuristicRecoveryManagerImpl isApprochingRecovery] */

undefined1 FUN_000afe68(void)

{
  if (lRam0000000000aecf50 == -1) {
    return uRam0000000000b6491a;
  }
  _swift_once(0xaecf50,FUN_000afcf8);
  return uRam0000000000b6491a;
}



/* Entry: 000afe84; end: 000afec7;  */

undefined1
FUN_000afe84(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4,
            undefined8 param_5)

{
  if (*param_3 == -1) {
    return *param_4;
  }
  _swift_once(param_3,param_5);
  return *param_4;
}



/* Entry: 000afec8; end: 000aff33; -[SCConfigHeuristicRecoveryManagerImpl getRecoveryPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __Block_copy(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_00aecf58);
  __Block_copy();
  _objc_retain(param_1);
  FUN_000adac8(uVar1,param_3);
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000aff34; end: 000aff93; -[SCConfigHeuristicRecoveryManagerImpl markRecoveryComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aff34(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  uVar1 = 0xd00000000000004a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000004a,0x80000000008b8040);
  FUN_0062e620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 000aff94; end: 000affe7; -[SCConfigHeuristicRecoveryManagerImpl waitForRecoveryIfNeededWithCompletion:] */

void FUN_000aff94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __Block_copy(param_3);
  __Block_copy();
  _objc_retain(param_1);
  FUN_000b1cec();
  __Block_release(param_3);
  __Block_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000affe8; end: 000b017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000affe8(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar7 = lVar8 - extraout_x12;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar8);
  if (lRam0000000000aed010 != -1) {
    _swift_once(0xaed010,FUN_000b110c);
  }
  lVar3 = lVar1;
  FUN_00028010(lVar1,0xaed018);
  (**(code **)(lVar9 + 0x10))(puVar5,lVar3,lVar1);
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(uVar7,lVar8,puVar5);
  (**(code **)(lVar9 + 8))(puVar5,lVar1);
  pcVar6 = *(code **)(lVar10 + 8);
  (*pcVar6)(lVar8,lVar2);
  uVar4 = uVar7;
  __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
  (*pcVar6)(uVar7,lVar2);
  __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar4,0);
  if ((uVar4 & 1) != 0) {
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  }
  (*param_2)();
  return;
}



/* Entry: 000b0180; end: 000b01ab;  */

void FUN_000b0180(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000b01ac; end: 000b04eb;  */

/* WARNING: Removing unreachable block (ram,0x000b038c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b01ac(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  long alStack_b0 [6];
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = (undefined1 *)0x0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)puVar10 - extraout_x12;
  if (unaff_x20[_DAT_00aecf98] == '\x01') {
    unaff_x20[_DAT_00aecf98] = 0;
    uVar1 = *(long *)(param_1 + _DAT_00aed040) - 1;
    if (SBORROW8(*(long *)(param_1 + _DAT_00aed040),1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0xb04d0);
      (*pcVar11)();
    }
    *(ulong *)(param_1 + _DAT_00aed040) = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
    if (lRam0000000000aecfc8 != -1) {
      _swift_once(0xaecfc8,0xae098);
    }
    puVar3 = puVar2;
    FUN_00028010(puVar2,0xb64920);
    (**(code **)(lVar12 + 0x10))(lVar9,puVar3,puVar2);
    puVar4 = PTR_PTR_00ac2ce8;
    _objc_opt_self();
    param_3 = param_1;
    func_0x00781760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined1 *)0x0) {
      pcVar11 = *(code **)(lVar12 + 8);
    }
    else {
      puVar5 = puVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar4);
      __s10Foundation3URLV25deletingLastPathComponentACyF(puVar10);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      _objc_opt_self();
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      puStack_78 = (undefined1 *)0x0;
      puVar7 = puVar4;
      param_3 = puVar6;
      func_0x00781140();
      _objc_release(puVar4);
      _objc_release(puVar6);
      param_1 = puStack_78;
      if ((int)puVar7 == 0) {
        puVar6 = puStack_78;
        _objc_retain(puStack_78);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar6);
        _swift_willThrow();
        FUN_00023358(puVar5,puVar3);
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(puVar10,puVar2);
        _swift_errorRelease(param_1);
      }
      else {
        _objc_retain(puStack_78);
        param_1 = (undefined1 *)0x0;
        param_3 = puVar5;
        __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                  (lVar9,0,puVar5,puVar3);
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(puVar10,puVar2);
        FUN_00023358(puVar5,puVar3);
      }
    }
    (*pcVar11)(lVar9,puVar2);
    FUN_000af954(2,2);
    puStack_78 = (undefined1 *)0x0;
    puStack_70 = (undefined1 *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x43);
    __sSS6appendyySSF(0x5b,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000022,0x80000000007d6580);
    __sSS6appendyySSF(0xd000000000000040,0x80000000008b8190);
    puVar2 = puStack_70;
    unaff_x20 = puStack_78;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_78,puStack_70);
    _swift_bridgeObjectRelease(puVar2);
    FUN_0062e620(unaff_x20);
    puVar3 = unaff_x20;
    _objc_release(unaff_x20);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    lVar12 = lRam0000000000aecf40;
    if (param_3 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      return;
    }
    *(long *)(lVar9 + -0x30) = lVar9;
    *(undefined1 **)(lVar9 + -0x28) = param_1;
    *(undefined1 **)(lVar9 + -0x20) = unaff_x20;
    *(undefined1 **)(lVar9 + -0x18) = puVar2;
    *(undefined1 **)(lVar9 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar9 + -8) = FUN_000b04ec;
    _objc_retain();
    if (lVar12 != -1) {
      _swift_once(0xaecf40,0xae3b4);
    }
    if (lRam0000000000aecf08 != -1) {
      _swift_once(0xaecf08,FUN_000ae03c);
    }
    __s11SwiftSCLock4LockC4lockyyF();
    if (lRam0000000000aecf18 != -1) {
      _swift_once(0xaecf18,FUN_000ae2e8);
    }
    uVar8 = uRam0000000000aecf20;
    _objc_retain(uRam0000000000aecf20);
    FUN_000b01ac();
    _objc_release(uVar8);
    func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar3);
    return;
  }
  return;
}



/* Entry: 000b04ec; end: 000b05d3; -[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountOnBackgroundLaunchWithApplicationState:] */

void FUN_000b04ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam0000000000aecf40;
  if (param_3 == 2) {
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0xaecf40,0xae3b4);
    }
    if (lRam0000000000aecf08 != -1) {
      _swift_once(0xaecf08,FUN_000ae03c);
    }
    __s11SwiftSCLock4LockC4lockyyF();
    if (lRam0000000000aecf18 != -1) {
      _swift_once(0xaecf18,FUN_000ae2e8);
    }
    uVar2 = uRam0000000000aecf20;
    _objc_retain(uRam0000000000aecf20);
    FUN_000b01ac();
    _objc_release(uVar2);
    func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(param_1);
    return;
  }
  return;
}



/* Entry: 000b05d4; end: 000b09e7;  */

/* WARNING: Removing unreachable block (ram,0x000b0870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b05d4(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  code *pcVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long lVar12;
  long lVar13;
  long alStack_e0 [8];
  undefined8 uStack_a0;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar11 = 0xd000000000000045;
  _swift_getObjectType();
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar13 - extraout_x12;
  if ((*(int *)(param_2 + _DAT_00aed068) == -1) ||
     (((uint)param_1 < 8 && ((1 << (ulong)((uint)param_1 & 0x1f) & 0x83U) != 0)))) {
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    unaff_x21 = 0;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&uStack_88,FUN_000b2aec,auStack_80,PTR___sSdN_0099b258);
    *(undefined8 *)(param_2 + _DAT_00aed048) = uStack_88;
    uVar11 = uStack_88;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&uStack_88,0xb2afc,auStack_80,PTR___sSiN_0099b2c0);
    *(undefined8 *)(param_2 + _DAT_00aed050) = uStack_88;
    __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
    *(undefined8 *)(param_2 + _DAT_00aed038) = uVar11;
    *(undefined8 *)(param_2 + _DAT_00aed040) = 0;
    if (lRam0000000000aecfc8 != -1) {
      _swift_once(0xaecfc8,0xae098);
    }
    lVar2 = lVar1;
    FUN_00028010(lVar1,0xb64920);
    (**(code **)(lVar9 + 0x10))(lVar12,lVar2,lVar1);
    puVar3 = PTR_PTR_00ac2ce8;
    _objc_opt_self();
    func_0x00781760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      pcVar10 = *(code **)(lVar9 + 8);
    }
    else {
      puVar4 = puVar3;
      uStack_a0 = param_1;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar3);
      __s10Foundation3URLV25deletingLastPathComponentACyF(lVar13);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      _objc_opt_self();
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      auStack_80[0] = 0;
      puVar6 = puVar3;
      param_2 = puVar5;
      func_0x00781140();
      _objc_release(puVar3);
      _objc_release(puVar5);
      uVar11 = auStack_80[0];
      if ((int)puVar6 == 0) {
        uVar7 = auStack_80[0];
        _objc_retain(auStack_80[0]);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(uVar7);
        _swift_willThrow();
        FUN_00023358(puVar4,lVar2);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar13,lVar1);
        _swift_errorRelease(uVar11);
        unaff_x21 = uVar11;
        param_1 = uStack_a0;
      }
      else {
        _objc_retain(auStack_80[0]);
        param_2 = puVar4;
        __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                  (lVar12,0,puVar4,lVar2);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar13,lVar1);
        FUN_00023358(puVar4,lVar2);
        param_1 = uStack_a0;
      }
    }
    (*pcVar10)(lVar12,lVar1);
    FUN_000af954(param_1,0);
    uVar7 = 0xd000000000000045;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x80000000008b8140);
    FUN_0062e620();
    uVar8 = uVar7;
    _objc_release(uVar7);
    param_3 = param_2;
    uVar11 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
  }
  else {
    uVar7 = 0xd000000000000051;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000051,0x80000000008b80e0);
    uVar8 = uVar7;
    FUN_0062e620();
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) goto code_r0x0077aa60;
  }
  ___stack_chk_fail();
  lVar9 = lRam0000000000aecf08;
  *(long *)(lVar12 + -0x40) = lVar12;
  *(long *)(lVar12 + -0x38) = lVar1;
  *(undefined8 *)(lVar12 + -0x30) = unaff_x20;
  *(undefined8 *)(lVar12 + -0x28) = unaff_x21;
  *(undefined8 *)(lVar12 + -0x20) = uVar11;
  *(undefined8 *)(lVar12 + -0x18) = uVar7;
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_000b09e8;
  _objc_retain();
  if (lVar9 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  __s11SwiftSCLock4LockC4lockyyF();
  if (lRam0000000000aecf18 != -1) {
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  uVar11 = uRam0000000000aecf20;
  _objc_retain(uRam0000000000aecf20);
  FUN_000b05d4(param_3,uVar11);
  _objc_release(uVar11);
  func_0x001d46c8();
  uVar7 = uVar8;
code_r0x0077aa60:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar7);
  return;
}



/* Entry: 000b09e8; end: 000b0aaf; -[SCConfigHeuristicRecoveryManagerImpl resetRecoveryWithReason:] */

void FUN_000b09e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam0000000000aecf08;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  __s11SwiftSCLock4LockC4lockyyF();
  if (lRam0000000000aecf18 != -1) {
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  uVar2 = uRam0000000000aecf20;
  _objc_retain(uRam0000000000aecf20);
  FUN_000b05d4(param_3,uVar2);
  _objc_release(uVar2);
  func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000b0ab0; end: 000b0bcb; +[SCConfigHeuristicRecoveryManagerImpl markSceneConnected] */

void FUN_000b0ab0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (lRam0000000000aecf68 != -1) {
    _swift_once(0xaecf68,FUN_000ade70);
  }
  uVar1 = uRam0000000000aecf70;
  puVar3 = &UNK_009a9728;
  _swift_allocObject(&UNK_009a9728,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_000b14bc;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  uStack_40 = 0xb2c68;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0x42000000;
  uStack_50 = 0xae078;
  puStack_48 = &UNK_009a9740;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  puVar5 = puStack_38;
  _swift_retain(puVar3);
  _swift_release(puVar5);
  _dispatch_sync(uVar1,ppuVar4);
  __Block_release(ppuVar4);
  puVar5 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x73,0x1ab,0x14,1);
  _swift_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb0bcc);
  (*pcVar2)();
}



/* Entry: 000b0bcc; end: 000b0ce7; +[SCConfigHeuristicRecoveryManagerImpl disableHeadlessWakeDecrements] */

void FUN_000b0bcc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (lRam0000000000aecf68 != -1) {
    _swift_once(0xaecf68,FUN_000ade70);
  }
  uVar1 = uRam0000000000aecf70;
  puVar3 = &UNK_009a96d8;
  _swift_allocObject(&UNK_009a96d8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_000b14ec;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  pcStack_40 = FUN_000b2c64;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0x42000000;
  uStack_50 = 0xae078;
  puStack_48 = &UNK_009a96f0;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  puVar5 = puStack_38;
  _swift_retain(puVar3);
  _swift_release(puVar5);
  _dispatch_sync(uVar1,ppuVar4);
  __Block_release(ppuVar4);
  puVar5 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x73,0x1b3,0x14,1);
  _swift_release(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb0ce8);
  (*pcVar2)();
}



/* Entry: 000b0ce8; end: 000b0fbf;  */

void FUN_000b0ce8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_b0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000000aecf68 != -1) {
    _swift_once(0xaecf68,FUN_000ade70);
  }
  uVar4 = 0xaecf78;
  func_0x000115a8(0xaecf78,&UNK_007d6508);
  uVar5 = 0;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF(&puStack_a8,0xb14fc,&puStack_a0,uVar4)
  ;
  func_0x0021bdf0();
  if ((((uVar5 & 1) != 0) && (((ushort)puStack_a8 & 1) == 0)) && (((ushort)puStack_a8 & 0x100) == 0)
     ) {
    FUN_00088dc4(0);
    (**(code **)(lVar13 + 0x68))
              (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_0099bca0,
               lVar3);
    lVar6 = lVar12;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    lStack_b8 = lVar6;
    (**(code **)(lVar13 + 8))(lVar12,lVar3);
    puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_98 = 0x42000000;
    ppuVar7 = &puStack_a0;
    __Block_copy(ppuVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    puStack_a8 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar4 = 0xae97a0;
    FUN_000b2a68(0xae97a0,PTR___s8Dispatch0A13WorkItemFlagsVMa_0099bc70,
                 PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80);
    uVar8 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar9 = 0xae97b0;
    func_0x000b2aa8(0xae97b0,0xae97a8,&UNK_007d4680);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar10,&puStack_a8,uVar8,uVar9,lVar1,uVar4);
    lVar3 = lStack_b8;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,puVar10,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(lVar3);
    (**(code **)(lVar14 + 8))(puVar10,lVar1);
    (**(code **)(lStack_b0 + 8))(lVar11,lVar2);
    _swift_release(0);
  }
  return;
}



/* Entry: 000b0fc0; end: 000b0fe3; +[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountForHeadlessWake] */

void FUN_000b0fc0(void)

{
  _swift_getObjCClassMetadata();
  FUN_000b0ce8();
  return;
}



/* Entry: 000b0fe4; end: 000b102b; -[SCConfigHeuristicRecoveryManagerImpl updateConstantsWithUpdate:] */

void FUN_000b0fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_000b2010(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000b102c; end: 000b110b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b102c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [24];
  
  __s11SwiftSCLock4LockC4lockyyF();
  lVar2 = unaff_x20 + _DAT_00aecf88;
  *(long *)(lVar2 + 8) = param_2;
  _swift_unknownObjectWeakAssign(lVar2,param_1);
  lVar2 = _DAT_00aecf90;
  _swift_beginAccess(unaff_x20 + _DAT_00aecf90,auStack_68,1,0);
  lVar1 = *(long *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_0099b8f0;
  func_0x001d46c8();
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    _swift_getObjectType(param_1);
    pcVar3 = *(code **)(param_2 + 8);
    puVar4 = (undefined1 *)(lVar1 + 0x28);
    do {
      (*pcVar3)(*(undefined8 *)(puVar4 + -8),*puVar4,param_1,param_2);
      lVar2 = lVar2 + -1;
      puVar4 = puVar4 + 0x10;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease(lVar1);
  return;
}



/* Entry: 000b110c; end: 000b116b;  */

void FUN_000b110c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x0;
  __s8Dispatch0A12TimeIntervalOMa();
  FUN_00028504();
  puVar2 = puVar1;
  FUN_00028010(puVar1,0xaed018);
  *puVar2 = 0x1e;
                    /* WARNING: Could not recover jumptable at 0x000b1168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1[-1] + 0x68))();
  return;
}



/* Entry: 000b116c; end: 000b12d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b116c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_00aecf98) = 1;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_00aecf28,0);
  *(undefined1 *)(unaff_x20 + _DAT_00aecf30) = 0;
  lVar2 = _DAT_00aecf58;
  lVar3 = 0;
  FUN_000ad920();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 0xf000000000000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  uVar4 = 1;
  _dispatch_semaphore_create();
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  lVar1 = _DAT_00aecd98;
  lVar5 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar3 + lVar1,1,1,lVar5);
  *(long *)(unaff_x20 + lVar2) = lVar3;
  lVar5 = _DAT_00aecf60;
  uVar4 = 0;
  _dispatch_semaphore_create();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar5 = unaff_x20 + _DAT_00aecf88;
  *(undefined8 *)(lVar5 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar5,0);
  *(undefined **)(unaff_x20 + _DAT_00aecf90) = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar5 = _DAT_00aecf80;
  uVar4 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000b12d4; end: 000b12f3; -[SCConfigHeuristicRecoveryManagerImpl init] */

void FUN_000b12d4(void)

{
  FUN_000b116c();
  return;
}



/* Entry: 000b12f4; end: 000b1327;  */

void FUN_000b12f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000b1328; end: 000b13bf; -[SCConfigHeuristicRecoveryManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b1328(long param_1)

{
  FUN_000b28c8(param_1 + _DAT_00aecf28);
  _swift_release(*(undefined8 *)(param_1 + _DAT_00aecf58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00aecf60));
  FUN_000b28c8(param_1 + _DAT_00aecf88);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00aecf90));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00aecf80));
  return;
}



/* Entry: 000b13c0; end: 000b14bb;  */

undefined * FUN_000b13c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb14bc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xaed008;
    func_0x000115a8(0xaed008,&UNK_007d65d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    _memcpy();
  }
  else {
    if (puVar3 != param_4 || param_4 + uVar6 * 0x10 + 0x20 <= puVar3 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000b14bc; end: 000b14cb;  */

void FUN_000b14bc(void)

{
  uRam0000000000aecfe8 = 1;
  return;
}



/* Entry: 000b14cc; end: 000b14eb;  */

void FUN_000b14cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 000b14ec; end: 000b1517;  */

void FUN_000b14ec(void)

{
  uRam0000000000aecfe9 = 1;
  return;
}


