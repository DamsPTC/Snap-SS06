/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107349104; end: 10734922f;  */

undefined8 ***
FUN_107349104(undefined1 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 **appuStack_248 [2];
  char cStack_231;
  undefined8 **ppuStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010734aaf4();
  uStack_258 = param_3[1];
  uStack_260 = *param_3;
  uStack_48 = extraout_x8;
  func_0x000100060b18(appuStack_248,&uStack_260);
  uVar2 = cStack_231 == '\0';
  if (-1 < cStack_231) {
    appuStack_248[0] = appuStack_248;
  }
  uVar5 = *(undefined8 *)(param_2 + 8);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  ppuStack_b8 = appuStack_248[0];
  _strlen();
  uStack_b0 = SUB84(appuStack_248[0],0);
  func_0x000107303ce4(&uStack_60,&ppuStack_b8,uVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_248);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107751334(appuStack_248,*(undefined8 *)(param_2 + 0x18));
  FUN_107348220(&ppuStack_b8,&uStack_78,param_4,uVar5,uVar1,appuStack_248);
  FUN_1073492e0(&ppuStack_b8);
  func_0x000107267da8(appuStack_248);
  pppuVar3 = *(undefined8 ****)(param_2 + 0x20);
  puVar4 = &uStack_60;
  FUN_107348ef0(pppuVar3,puVar4,&uStack_78,*(undefined8 *)(param_2 + 8));
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x00010734aa8c(uStack_48);
  if ((bool)uVar2) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  pppuVar3 = appuStack_248;
  func_0x000107267da8(pppuVar3);
  func_0x00010734ab14();
  func_0x0001004a5364(puVar4,&PTR_DAT_1109a4218);
  pppuVar3 = pppuVar3 + 1;
  if ((int)puVar4 == 0) {
    pppuVar3 = (undefined8 ***)0x0;
  }
  return pppuVar3;
}



/* Entry: 107349230; end: 107349267;  */

long FUN_107349230(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a4218);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107349268; end: 107349273;  */

undefined ** FUN_107349268(void)

{
  return &PTR_DAT_1109a4218;
}



/* Entry: 107349274; end: 10734928b;  */

void FUN_107349274(void)

{
  FUN_10734928c();
  return;
}



/* Entry: 10734928c; end: 1073492bf;  */

void FUN_10734928c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1073492c0; end: 1073492df;  */

void FUN_1073492c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1073492e0; end: 1073493bb;  */

long FUN_1073492e0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104c2f714(param_1);
  }
  return param_1;
}



/* Entry: 1073493bc; end: 1073493cb;  */

undefined8 FUN_1073493bc(undefined8 *param_1)

{
  param_1[4] = param_1[4] + -0x10;
  func_0x000107349610(*param_1,0x7d);
  return 1;
}



/* Entry: 1073493cc; end: 10734941f;  */

undefined8 FUN_1073493cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  func_0x000107349544(param_1,4);
  puVar1 = (undefined8 *)param_1[4];
  if (param_1[5] - (long)puVar1 < 0x10) {
    func_0x00010734abbc();
    puVar1 = (undefined8 *)param_1[4];
  }
  param_1[4] = puVar1 + 2;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107349610(*param_1,0x5b);
  return 1;
}



/* Entry: 107349420; end: 10734942f;  */

undefined8 FUN_107349420(undefined8 *param_1)

{
  param_1[4] = param_1[4] + -0x10;
  func_0x000107349610(*param_1,0x5d);
  return 1;
}



/* Entry: 107349430; end: 10734946b;  */

undefined8 FUN_107349430(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010734ac28();
  func_0x000107349544();
  func_0x00010734ac10();
  FUN_107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar4 = extraout_x8; uVar4 < (param_3 & 0xffffffff); uVar4 = uVar4 + 1) {
    bVar1 = *(byte *)(unaff_x20 + uVar4);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar5 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar5 + 1;
    if (cVar2 == '\0') {
      *pbVar5 = bVar1;
    }
    else {
      *pbVar5 = 0x5c;
      pcVar7 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar7 + 1;
      *pcVar7 = cVar2;
      if (cVar2 == 'u') {
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 10734946c; end: 1073494a3;  */

bool FUN_10734946c(ulong param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x000107349544(param_2,6);
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    func_0x00010734ac10();
    FUN_1073499a4();
    lVar1 = param_2;
    func_0x0001073499e8(param_1);
    *(long *)(*unaff_x19 + 0x18) = *(long *)(*unaff_x19 + 0x18) + (lVar1 - param_2) + -0x19;
  }
  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}



/* Entry: 1073494a4; end: 107349657;  */

void FUN_1073494a4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010734aad8();
  func_0x00010734ab1c();
  uVar1 = *unaff_x20;
  FUN_1073499a4(uVar1,0xb);
  FUN_10734a2c4(unaff_x19,uVar1);
  func_0x00010734aac4();
  func_0x00010734ac1c();
  return;
}



/* Entry: 107349658; end: 10734966f;  */

void FUN_107349658(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  if (param_2 <= param_1[4] - param_1[3]) {
    return;
  }
  func_0x000107304438();
  if (param_1[2] == 0) {
    if (*unaff_x19 == 0) {
      func_0x0001073045a8();
      *unaff_x19 = (long)param_1;
      unaff_x19[1] = (long)param_1;
    }
    lVar3 = 0;
  }
  else {
    func_0x00010730460c();
    lVar3 = extraout_x8;
  }
  func_0x0001073045f8(unaff_x20 - lVar3);
  func_0x000107304460();
  lVar3 = param_1[2];
  lVar1 = param_1[3];
  lVar2 = *param_1;
  func_0x0001073038ac(lVar2,lVar3,*(long *)(unaff_x20 + 0x20) - lVar3,unaff_x19);
  *(long *)(unaff_x20 + 0x10) = lVar2;
  *(long *)(unaff_x20 + 0x18) = lVar2 + (lVar1 - lVar3);
  *(long *)(unaff_x20 + 0x20) = lVar2 + (long)unaff_x19;
  return;
}



/* Entry: 107349670; end: 10734970b;  */

undefined8 FUN_107349670(undefined8 param_1,int param_2)

{
  undefined1 extraout_w8;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *extraout_x9;
  long extraout_x9_00;
  undefined1 *extraout_x9_01;
  undefined1 uVar3;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 *puVar4;
  long *unaff_x19;
  
  func_0x00010734ac10();
  if (param_2 == 0) {
    FUN_107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x66;
    uVar1 = 0x73;
    uVar2 = 0x6c;
    uVar3 = 0x61;
  }
  else {
    FUN_107349658();
    uVar1 = 0x75;
    uVar2 = 0x72;
    uVar3 = 0x74;
  }
  puVar4 = *(undefined1 **)(*unaff_x19 + 0x18);
  *(undefined1 **)(*unaff_x19 + 0x18) = puVar4 + 1;
  *puVar4 = uVar3;
  puVar4 = *(undefined1 **)(*unaff_x19 + 0x18);
  *(undefined1 **)(*unaff_x19 + 0x18) = puVar4 + 1;
  *puVar4 = uVar2;
  func_0x00010734ab28(uVar1);
  *(undefined8 *)(extraout_x9_00 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x65;
  return 1;
}



/* Entry: 10734970c; end: 10734972b;  */

undefined8 FUN_10734970c(undefined8 *param_1)

{
  func_0x000107349610(*param_1,0x7b);
  return 1;
}



/* Entry: 10734972c; end: 10734979b;  */

void FUN_10734972c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if (*param_1 == 0) {
      lVar4 = 1;
      __Znwm();
      *param_1 = lVar4;
      param_1[1] = lVar4;
    }
    lVar4 = 0;
    uVar5 = param_1[5];
  }
  else {
    uVar5 = (param_1[4] - lVar4) + ((param_1[4] - lVar4) + 1U >> 1);
  }
  uVar1 = (param_1[3] - lVar4) + param_2 * 0x10;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  func_0x000107304460(param_1,uVar5);
  lVar4 = param_1[2];
  lVar2 = param_1[3];
  lVar3 = *param_1;
  func_0x0001073038ac(lVar3,lVar4,*(long *)(unaff_x20 + 0x20) - lVar4,unaff_x19);
  *(long *)(unaff_x20 + 0x10) = lVar3;
  *(long *)(unaff_x20 + 0x18) = lVar3 + (lVar2 - lVar4);
  *(long *)(unaff_x20 + 0x20) = lVar3 + unaff_x19;
  return;
}



/* Entry: 10734979c; end: 1073497fb;  */

undefined8 FUN_10734979c(undefined8 *param_1)

{
  func_0x000107349610(*param_1,0x7d);
  return 1;
}



/* Entry: 1073497fc; end: 107349923;  */

undefined8 FUN_1073497fc(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *unaff_x19;
  
  func_0x00010734ac10();
  FUN_107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar4 = extraout_x8; uVar4 < param_3; uVar4 = uVar4 + 1) {
    bVar1 = *(byte *)(param_2 + uVar4);
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar5 = *(byte **)(*unaff_x19 + 0x18);
    *(byte **)(*unaff_x19 + 0x18) = pbVar5 + 1;
    if (cVar2 == '\0') {
      *pbVar5 = bVar1;
    }
    else {
      *pbVar5 = 0x5c;
      pcVar7 = *(char **)(*unaff_x19 + 0x18);
      *(char **)(*unaff_x19 + 0x18) = pcVar7 + 1;
      *pcVar7 = cVar2;
      if (cVar2 == 'u') {
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar6 = *(undefined1 **)(*unaff_x19 + 0x18);
        *(undefined1 **)(*unaff_x19 + 0x18) = puVar6 + 1;
        *puVar6 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return 1;
}



/* Entry: 107349924; end: 1073499a3;  */

bool FUN_107349924(ulong param_1,long param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    func_0x00010734ac10();
    FUN_1073499a4();
    lVar1 = param_2;
    func_0x0001073499e8(param_1);
    *(long *)(*unaff_x19 + 0x18) = *(long *)(*unaff_x19 + 0x18) + (lVar1 - param_2) + -0x19;
  }
  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}



/* Entry: 1073499a4; end: 107349a5f;  */

void FUN_1073499a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) - lVar1 < param_2) {
    func_0x000107303c4c(param_1,param_2);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar1 + param_2;
  return;
}



/* Entry: 107349a60; end: 107349b63;  */

void FUN_107349a60(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lStack_90;
  int iStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulong uStack_40;
  int iStack_38;
  
  plVar3 = &lStack_90;
  func_0x00010734ac28();
  uVar6 = (uint)(param_1 >> 0x34);
  bVar1 = (uVar6 & 0x7ff) != 0;
  uStack_40 = param_1 & 0xfffffffffffff;
  if (bVar1) {
    uStack_40 = param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  iStack_38 = -0x432;
  if (bVar1) {
    iStack_38 = (uVar6 & 0x7ff) - 0x433;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_107349d60(&uStack_40,&uStack_50,&uStack_60);
  uVar2 = (ulong)uStack_58;
  FUN_107349df8();
  lStack_90 = uStack_40 << (LZCOUNT(uStack_40) & 0x3fU);
  iStack_88 = iStack_38 - (int)LZCOUNT(uStack_40);
  uStack_70 = uVar2;
  uStack_68 = param_4;
  func_0x00010734ab48();
  puVar4 = &uStack_60;
  puStack_80 = (undefined1 *)plVar3;
  uStack_78 = param_4;
  func_0x00010734ab48();
  puVar5 = &uStack_50;
  iStack_88 = param_4;
  func_0x00010734ab48(puVar5);
  lStack_90 = (long)puVar4 + -1;
  FUN_107349ebc(&puStack_80,&lStack_90,lStack_90 + ~(ulong)puVar5);
  return;
}



/* Entry: 107349b64; end: 107349d5f;  */

byte * FUN_107349b64(long param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  
  uVar2 = param_3 + param_2;
  if ((param_3 < 0) || (0x15 < (int)uVar2)) {
    uVar4 = uVar2 - 1;
    if (uVar4 < 0x15) {
      puVar1 = (undefined1 *)(param_1 + (ulong)uVar2);
      _memmove(param_1 + (ulong)(uVar2 + 1),puVar1,(long)-param_3);
      *puVar1 = 0x2e;
      if (param_4 + param_3 < 0) {
        uVar4 = uVar2 + param_4;
        pbVar5 = (byte *)(param_1 + (int)uVar4 + 1);
        for (; (int)(uVar2 + 1) < (int)uVar4; uVar4 = uVar4 - 1) {
          if (*(char *)(param_1 + (ulong)uVar4) != '0') {
            return pbVar5;
          }
          pbVar5 = pbVar5 + -1;
        }
        pbVar5 = puVar1 + 2;
      }
      else {
        pbVar5 = (byte *)(param_1 + param_2 + 1);
      }
    }
    else if (uVar2 + 5 < 6) {
      uVar2 = 2 - uVar2;
      _memmove(param_1 + (ulong)uVar2,param_1,(long)param_2);
      func_0x00010734ab38();
      for (uVar8 = 2; uVar8 < uVar2; uVar8 = uVar8 + 1) {
        *(undefined1 *)(param_1 + uVar8) = extraout_w8;
      }
      if (param_4 < -param_3) {
        uVar2 = param_4 + 1;
        do {
          uVar4 = uVar2;
          pbVar7 = (byte *)(ulong)uVar4;
          if ((int)uVar4 < 3) goto LAB_107349c98;
          uVar2 = uVar4 - 1;
        } while (*(char *)(param_1 + (ulong)uVar4) == '0');
        pbVar7 = (byte *)(param_1 + (ulong)uVar4 + 1);
LAB_107349c98:
        pbVar5 = (byte *)(param_1 + 3);
        if (2 < (int)uVar4) {
          pbVar5 = pbVar7;
        }
      }
      else {
        pbVar5 = (byte *)(param_1 + (long)(int)uVar2 + (long)param_2);
      }
    }
    else {
      if ((int)(uVar2 + param_4) < 0 == SCARRY4(uVar2,param_4)) {
        if (param_2 + -1 == 0) {
          *(undefined1 *)(param_1 + 1) = 0x65;
        }
        else {
          _memmove(param_1 + 2,param_1 + 1,(long)(param_2 + -1));
          *(undefined1 *)(param_1 + 1) = 0x2e;
          param_1 = param_1 + param_2;
          *(undefined1 *)(param_1 + 1) = 0x65;
        }
        pbVar5 = (byte *)(param_1 + 2);
        if ((int)uVar4 < 0) {
          pbVar5 = (byte *)(param_1 + 3);
          *(byte *)(param_1 + 2) = 0x2d;
          uVar4 = -uVar4;
        }
        if (uVar4 < 100) {
          if (uVar4 < 10) {
            pbVar7 = pbVar5 + 1;
            *pbVar5 = (byte)uVar4 | 0x30;
          }
          else {
            pbVar7 = pbVar5 + 2;
            *(undefined2 *)pbVar5 = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)uVar4 * 2);
          }
        }
        else {
          *pbVar5 = (char)(uVar4 / 100) + 0x30;
          *(undefined2 *)(pbVar5 + 1) = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar4 % 100) * 2);
          pbVar7 = pbVar5 + 3;
        }
        return pbVar7;
      }
      func_0x00010734ab38();
      *(undefined1 *)(param_1 + 2) = extraout_w8_00;
      pbVar5 = (byte *)(param_1 + 3);
    }
  }
  else {
    for (lVar6 = (long)param_2; lVar6 < (int)uVar2; lVar6 = lVar6 + 1) {
      *(undefined1 *)(param_1 + lVar6) = 0x30;
    }
    puVar3 = (undefined2 *)(param_1 + (int)uVar2);
    *puVar3 = 0x302e;
    pbVar5 = (byte *)(puVar3 + 1);
  }
  return pbVar5;
}



/* Entry: 107349d60; end: 107349df7;  */

void FUN_107349d60(long *param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long *unaff_x20;
  long *unaff_x21;
  ulong uStack_40;
  int iStack_38;
  
  puVar2 = &uStack_40;
  func_0x00010734ac28();
  uStack_40 = *param_1 << 1 | 1;
  iStack_38 = (int)param_1[1] + -1;
  FUN_10734a110();
  lVar4 = *unaff_x21;
  iVar3 = -2;
  if (lVar4 != 0x10000000000000) {
    iVar3 = -1;
  }
  lVar1 = 0x3fffffffffffff;
  if (lVar4 != 0x10000000000000) {
    lVar1 = lVar4 * 2 + -1;
  }
  lVar4 = unaff_x21[1];
  *param_3 = puVar2;
  *(int *)(param_3 + 1) = param_2;
  *unaff_x20 = lVar1 << ((ulong)(uint)(((int)lVar4 - param_2) + iVar3) & 0x3f);
  *(int *)(unaff_x20 + 1) = param_2;
  return;
}



/* Entry: 107349df8; end: 107349ebb;  */

undefined1  [16] FUN_107349df8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar3 = (double)(-0x3d - param_1) * 0.30102999566398114 + 347.0;
  iVar2 = (int)dVar3;
  if ((double)iVar2 < dVar3) {
    iVar2 = iVar2 + 1;
  }
  uVar1 = (iVar2 >> 3) + 1;
  auVar4._0_8_ = *(undefined8 *)(&UNK_10de4e548 + (ulong)uVar1 * 8);
  *param_2 = uVar1 * -8 + 0x15c;
  auVar4._8_8_ = (long)*(short *)(&UNK_10de4e800 + (ulong)uVar1 * 2) & 0xffffffff;
  return auVar4;
}



/* Entry: 107349ebc; end: 10734a10f;  */

void FUN_107349ebc(long *param_1,ulong *param_2,ulong param_3,long param_4,int *param_5,int *param_6
                  )

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar15 = (ulong)(uint)-(int)param_2[1];
  uVar6 = 1L << (uVar15 & 0x3f);
  uVar4 = *param_2;
  uVar5 = uVar4 - *param_1;
  uVar14 = uVar4 >> (uVar15 & 0x3f);
  uVar4 = uVar6 - 1 & uVar4;
  uVar3 = uVar14;
  func_0x00010734a13c();
  *param_5 = 0;
  uVar2 = (uint)uVar3;
  do {
    uVar12 = (uint)uVar14;
    if ((int)uVar3 < 1) {
      uVar2 = -(uVar2 & (int)uVar2 >> 0x1f);
      uVar11 = uVar4;
      do {
        uVar3 = uVar11 * 10 >> (uVar15 & 0x3f);
        iVar9 = *param_5;
        if (((uVar3 & 0xff) != 0) || (iVar9 != 0)) {
          *param_5 = iVar9 + 1;
          *(char *)(param_4 + iVar9) = (char)uVar3 + '0';
        }
        param_3 = param_3 * 10;
        uVar11 = uVar11 * 10 & uVar6 - 1;
        uVar2 = uVar2 + 1;
      } while (param_3 <= uVar11);
      *param_6 = *param_6 - uVar2;
      iVar9 = *param_5;
      if ((int)(1 - uVar2) < -7) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulong)*(uint *)(&UNK_10de4e8b0 + (ulong)uVar2 * 4);
      }
      uVar5 = uVar3 * uVar5;
      goto LAB_10734a0f0;
    }
    uVar1 = (int)uVar3 - 1;
    uVar3 = (ulong)uVar1;
    uVar8 = 0;
    uVar13 = uVar12;
    switch(uVar3) {
    case 0:
      break;
    case 1:
      uVar13 = uVar12 / 10;
      uVar8 = (ulong)(uVar12 % 10);
      break;
    case 2:
      uVar13 = uVar12 / 100;
      uVar8 = (ulong)(uVar12 % 100);
      break;
    case 3:
      uVar13 = uVar12 / 1000;
      uVar8 = (ulong)(uVar12 % 1000);
      break;
    case 4:
      uVar13 = uVar12 / 10000;
      uVar8 = (ulong)(uVar12 % 10000);
      break;
    case 5:
      uVar13 = uVar12 / 100000;
      uVar8 = (ulong)(uVar12 % 100000);
      break;
    case 6:
      uVar13 = uVar12 / 1000000;
      uVar8 = (ulong)(uVar12 % 1000000);
      break;
    case 7:
      uVar7 = 10000000;
      goto code_r0x000107349fd4;
    case 8:
      uVar7 = 100000000;
code_r0x000107349fd4:
      uVar13 = 0;
      if (uVar7 != 0) {
        uVar13 = uVar12 / uVar7;
      }
      uVar8 = (ulong)(uVar12 - uVar13 * uVar7);
      break;
    default:
      iVar9 = *param_5;
      uVar8 = uVar14;
      goto joined_r0x00010734a004;
    }
    iVar9 = *param_5;
    if (uVar13 == 0) {
joined_r0x00010734a004:
      if (iVar9 != 0) {
        cVar10 = '0';
        goto code_r0x00010734a00c;
      }
    }
    else {
      cVar10 = (char)uVar13 + '0';
code_r0x00010734a00c:
      *param_5 = iVar9 + 1;
      *(char *)(param_4 + iVar9) = cVar10;
    }
    uVar11 = ((uVar8 & 0xffffffff) << (uVar15 & 0x3f)) + uVar4;
    uVar14 = uVar8;
    if (uVar11 <= param_3) {
      *param_6 = *param_6 + uVar1;
      iVar9 = *param_5;
      uVar6 = (ulong)*(uint *)(&UNK_10de4e8b0 + (ulong)uVar1 * 4) << (uVar15 & 0x3f);
LAB_10734a0f0:
      param_3 = param_3 - uVar11;
      uVar3 = uVar5 - uVar11;
      for (; (uVar11 < uVar5 && uVar6 <= param_3 &&
             (uVar11 + uVar6 < uVar5 || (uVar6 - uVar5) + uVar11 < uVar3)); uVar3 = uVar3 - uVar6) {
        *(char *)(param_4 + -1 + (long)iVar9) = *(char *)(param_4 + -1 + (long)iVar9) + -1;
        param_3 = param_3 - uVar6;
        uVar11 = uVar11 + uVar6;
      }
      return;
    }
  } while( true );
}



/* Entry: 10734a110; end: 10734a27f;  */

undefined1  [16] FUN_10734a110(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  while( true ) {
    if ((uVar1 >> 0x35 & 1) != 0) break;
    uVar1 = uVar1 << 1;
    uVar2 = (ulong)((int)uVar2 - 1) | uVar2 & 0xffffffff00000000;
  }
  auVar3._0_8_ = uVar1 << 10;
  auVar3._8_8_ = (ulong)((int)uVar2 - 10) | uVar2 & 0xffffffff00000000;
  return auVar3;
}



/* Entry: 10734a280; end: 10734a2c3;  */

void FUN_10734a280(undefined8 *param_1)

{
  func_0x00010734ab1c();
  FUN_1073499a4(*param_1,0xb);
  FUN_10734a2c4();
  func_0x00010734aac4();
  func_0x00010734ac1c();
  return;
}



/* Entry: 10734a2c4; end: 10734a4cf;  */

byte * FUN_10734a2c4(uint param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if ((int)param_1 < 0) {
    *param_2 = 0x2d;
    param_1 = -param_1;
    param_2 = param_2 + 1;
  }
  if (0x270 < param_1 >> 4) {
    if (99999999 < param_1) {
      uVar4 = param_1 % 100000000;
      if (param_1 < 1000000000) {
        pbVar5 = param_2 + 1;
        *param_2 = (byte)(param_1 / 100000000) | 0x30;
      }
      else {
        pbVar5 = param_2 + 2;
        *(undefined2 *)param_2 = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(param_1 / 100000000) * 2);
      }
      *(undefined2 *)pbVar5 = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar4 / 1000000) * 2);
      *(undefined2 *)(pbVar5 + 2) =
           *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar4 / 10000) % 100) * 2);
      *(undefined2 *)(pbVar5 + 4) =
           *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar4 % 10000) / 100) * 2);
      *(undefined2 *)(pbVar5 + 6) =
           *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar4 % 10000) % 100) * 2);
      return pbVar5 + 8;
    }
    lVar1 = (ulong)(param_1 / 1000000) * 2;
    lVar3 = (ulong)((param_1 / 10000 & 0xffff) % 100) * 2;
    if (param_1 < 10000000) {
      if (999999 < param_1) goto LAB_10734a418;
      pbVar5 = param_2;
      if (param_1 >> 5 < 0xc35) goto LAB_10734a43c;
    }
    else {
      *param_2 = (&UNK_10de4e8d8)[lVar1];
      param_2 = param_2 + 1;
LAB_10734a418:
      *param_2 = (&UNK_10de4e8d9)[lVar1];
      pbVar5 = param_2 + 1;
    }
    param_2 = pbVar5 + 1;
    *pbVar5 = (&UNK_10de4e8d8)[lVar3];
LAB_10734a43c:
    func_0x00010734abe4(lVar3);
    return param_2;
  }
  uVar4 = (param_1 & 0xffff) / 100;
  lVar1 = (ulong)uVar4 * 2;
  uVar2 = (ulong)(param_1 + uVar4 * -100) << 1;
  uVar6 = uVar2 & 0x1fffe;
  if (param_1 < 1000) {
    if (99 < param_1) goto LAB_10734a3a0;
    pbVar5 = param_2;
    if (param_1 < 10) {
      uVar6 = uVar2 & 0xfffe;
      goto LAB_10734a3c4;
    }
  }
  else {
    *param_2 = (&UNK_10de4e8d8)[lVar1];
    param_2 = param_2 + 1;
LAB_10734a3a0:
    *param_2 = (&UNK_10de4e8d9)[lVar1];
    pbVar5 = param_2 + 1;
  }
  param_2 = pbVar5 + 1;
  *pbVar5 = (&UNK_10de4e8d8)[uVar6];
LAB_10734a3c4:
  *param_2 = (&UNK_10de4e8d9)[uVar6];
  return param_2 + 1;
}



/* Entry: 10734a4d0; end: 10734a55b;  */

void FUN_10734a4d0(undefined8 *param_1)

{
  func_0x00010734ab1c();
  FUN_1073499a4(*param_1,10);
  func_0x00010734a2dc();
  func_0x00010734aac4();
  func_0x00010734ac1c();
  return;
}



/* Entry: 10734a55c; end: 10734aa1f;  */

byte * FUN_10734a55c(ulong param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if ((long)param_1 < 0) {
    *param_2 = 0x2d;
    param_1 = -param_1;
    param_2 = param_2 + 1;
  }
  uVar7 = (uint)param_1;
  if (param_1 < 100000000) {
    if (0x270 < param_1 >> 4) {
      lVar1 = (ulong)(uVar7 / 1000000) * 2;
      lVar2 = (ulong)((uVar7 / 10000 & 0xffff) % 100) * 2;
      if (param_1 < 10000000) {
        if (999999 < param_1) goto LAB_10734a830;
        pbVar8 = param_2;
        if (param_1 >> 5 < 0xc35) goto LAB_10734a854;
      }
      else {
        *param_2 = (&UNK_10de4e8d8)[lVar1];
        param_2 = param_2 + 1;
LAB_10734a830:
        *param_2 = (&UNK_10de4e8d9)[lVar1];
        pbVar8 = param_2 + 1;
      }
      param_2 = pbVar8 + 1;
      *pbVar8 = (&UNK_10de4e8d8)[lVar2];
LAB_10734a854:
      func_0x00010734abe4(lVar2);
      return param_2;
    }
    lVar1 = (ulong)(uVar7 / 100) * 2;
    lVar2 = (ulong)(uVar7 % 100) * 2;
    if (param_1 < 1000) {
      if (99 < param_1) goto LAB_10734a720;
      pbVar8 = param_2;
      if (param_1 < 10) goto LAB_10734a744;
    }
    else {
      *param_2 = (&UNK_10de4e8d8)[lVar1];
      param_2 = param_2 + 1;
LAB_10734a720:
      *param_2 = (&UNK_10de4e8d9)[lVar1];
      pbVar8 = param_2 + 1;
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (&UNK_10de4e8d8)[lVar2];
LAB_10734a744:
    *param_2 = (&UNK_10de4e8d9)[lVar2];
    return param_2 + 1;
  }
  if (9999999999999999 < param_1) {
    uVar6 = param_1 / 10000000000000000;
    uVar7 = (uint)uVar6;
    if (param_1 < 100000000000000000) {
      pbVar8 = param_2 + 1;
      *param_2 = (byte)uVar6 | 0x30;
    }
    else if (param_1 < 1000000000000000000) {
      pbVar8 = param_2 + 2;
      *(undefined2 *)param_2 = *(undefined2 *)(&UNK_10de4e8d8 + uVar6 * 2);
    }
    else if (param_1 < 10000000000000000000) {
      *param_2 = (char)(uVar7 / 100) + 0x30;
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar7 % 100) * 2);
      pbVar8 = param_2 + 3;
    }
    else {
      *(undefined2 *)param_2 = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar7 / 100) * 2);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar7 % 100) * 2);
      pbVar8 = param_2 + 4;
    }
    uVar5 = (uint)((param_1 % 10000000000000000) / 100000000);
    uVar7 = (int)(param_1 % 10000000000000000) + uVar5 * -100000000;
    *(undefined2 *)pbVar8 = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar5 / 1000000) * 2);
    *(undefined2 *)(pbVar8 + 2) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar5 / 10000) % 100) * 2);
    *(undefined2 *)(pbVar8 + 4) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar5 % 10000) / 100) * 2);
    *(undefined2 *)(pbVar8 + 6) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar5 % 10000) % 100) * 2);
    *(undefined2 *)(pbVar8 + 8) = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar7 / 1000000) * 2);
    *(undefined2 *)(pbVar8 + 10) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 / 10000 & 0xffff) % 100) * 2);
    *(undefined2 *)(pbVar8 + 0xc) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 % 10000) / 100) * 2);
    *(undefined2 *)(pbVar8 + 0xe) =
         *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 % 10000) % 100) * 2);
    return pbVar8 + 0x10;
  }
  uVar5 = (uint)(param_1 / 100000000);
  uVar7 = uVar7 + uVar5 * -100000000;
  lVar1 = (ulong)(uVar5 / 1000000) * 2;
  lVar2 = (ulong)((uVar5 / 10000 & 0xffff) % 100) * 2;
  lVar3 = (ulong)((uVar5 % 10000) / 100) * 2;
  lVar4 = (ulong)((uVar5 % 10000) % 100) * 2;
  if (param_1 < 1000000000000000) {
    if (99999999999999 < param_1) goto LAB_10734a774;
    pbVar8 = param_2;
    if (9999999999999 < param_1) goto LAB_10734a788;
    if (999999999999 < param_1) goto LAB_10734a798;
    if (99999999999 < param_1) goto LAB_10734a7ac;
    if (9999999999 < param_1) goto LAB_10734a7bc;
    if (param_1 < 1000000000) goto LAB_10734a7e0;
  }
  else {
    *param_2 = (&UNK_10de4e8d8)[lVar1];
    param_2 = param_2 + 1;
LAB_10734a774:
    *param_2 = (&UNK_10de4e8d9)[lVar1];
    pbVar8 = param_2 + 1;
LAB_10734a788:
    param_2 = pbVar8 + 1;
    *pbVar8 = (&UNK_10de4e8d8)[lVar2];
LAB_10734a798:
    *param_2 = (&UNK_10de4e8d9)[lVar2];
    pbVar8 = param_2 + 1;
LAB_10734a7ac:
    param_2 = pbVar8 + 1;
    *pbVar8 = (&UNK_10de4e8d8)[lVar3];
LAB_10734a7bc:
    *param_2 = (&UNK_10de4e8d9)[lVar3];
    pbVar8 = param_2 + 1;
  }
  param_2 = pbVar8 + 1;
  *pbVar8 = (&UNK_10de4e8d8)[lVar4];
LAB_10734a7e0:
  *param_2 = (&UNK_10de4e8d9)[lVar4];
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&UNK_10de4e8d8 + (ulong)(uVar7 / 1000000) * 2);
  *(undefined2 *)(param_2 + 3) =
       *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 / 10000 & 0xffff) % 100) * 2);
  *(undefined2 *)(param_2 + 5) =
       *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 % 10000) / 100) * 2);
  *(undefined2 *)(param_2 + 7) =
       *(undefined2 *)(&UNK_10de4e8d8 + (ulong)((uVar7 % 10000) % 100) * 2);
  return param_2 + 9;
}



/* Entry: 10734aa20; end: 10734aa67;  */

void FUN_10734aa20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1073499a4(uVar1,0x14);
  func_0x00010734a574(param_2,uVar1);
  func_0x00010734aac4();
  func_0x00010734ac1c();
  return;
}



/* Entry: 10734aa68; end: 10734ac9f;  */

void FUN_10734aa68(void)

{
  func_0x000107303ce4();
  return;
}



/* Entry: 10734aca0; end: 10734b09b;  */

void FUN_10734aca0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [24];
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  ulong uStack_190;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [40];
  
  func_0x00010734ba14();
  FUN_10734b09c(&uStack_198);
  uStack_150 = 0xc;
  uVar7 = uStack_190;
  if ((uStack_190 & 1) != 0) {
    uVar7 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
  }
  func_0x0001001a53d4(auStack_168,param_2,uVar7);
  if (*(char *)(param_2 + 0x48) == '\x01') {
    puVar6 = &uStack_198;
    FUN_10734b0a4();
    puVar6[2] = *(undefined8 *)(param_2 + 0x38);
    puVar6 = &uStack_198;
    FUN_10734b0a4();
    puVar6[3] = *(undefined8 *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar7 = uStack_190;
    if ((uStack_190 & 1) != 0) {
      uVar7 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(auStack_178,param_2 + 0x18,uVar7);
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    uVar7 = uStack_190;
    if ((uStack_190 & 1) != 0) {
      uVar7 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(auStack_170,param_2 + 0x50,uVar7);
  }
  lVar5 = param_2 + 0x70;
  if (*(char *)(param_2 + 0x88) == '\0') {
    lVar5 = param_1 + 0x18;
  }
  uVar4 = *(char *)(lVar5 + 0x18) == '\x01';
  if ((bool)uVar4) {
    if ((uStack_190 & 1) != 0) {
      uStack_190 = *(ulong *)(uStack_190 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(auStack_160,lVar5,uStack_190);
  }
  func_0x000104bff97c(auStack_1b0,param_2 + 0x18,"");
  if (param_4 == (long *)0x0) {
    uStack_1c0 = 0;
    uStack_b0 = 0;
    lStack_a8 = 0;
  }
  else {
    (**(code **)(*param_4 + 0x20))(&uStack_1d0,param_4);
    lStack_a8 = lStack_1c8;
    uStack_b0 = uStack_1d0;
    if (lStack_1c8 != 0) {
      plVar1 = (long *)(lStack_1c8 + 0x10);
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
  uStack_a0 = uStack_1c0;
  uStack_1d0 = uStack_b0;
  lStack_1c8 = lStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80,auStack_1b0);
  func_0x00010734b244(auStack_68,param_3);
  func_0x00010002b838(auStack_218,&DAT_10f31d688);
  lVar5 = param_2 + 0x90;
  func_0x000100ab9b18(lVar5,auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  if (lVar5 == 0) {
    func_0x00010002b838(auStack_1e8,"");
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1e8,lVar5 + 0x28);
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_10734b0e8(&uStack_140,&uStack_b0);
  puStack_b8 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  *puVar6 = &PTR_SUB_1109a4270;
  puVar6[3] = uStack_130;
  puVar6[2] = uStack_138;
  puVar6[1] = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar6[5] = uStack_120;
  puVar6[4] = uStack_128;
  puVar6[6] = uStack_118;
  uStack_128 = 0;
  uStack_120 = 0;
  puVar6[8] = uStack_108;
  puVar6[7] = uStack_110;
  puVar6[9] = uStack_100;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  func_0x00010734b244(puVar6 + 10,auStack_f8);
  puStack_b8 = puVar6;
  func_0x00010734b1b0(auStack_218,param_2 + 0x90);
  FUN_1073a1414(uVar8,&uStack_198,auStack_d0,auStack_218);
  func_0x00010062706c(auStack_218);
  FUN_10734b96c(auStack_d0);
  FUN_10734b160(&uStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  FUN_10734b160(&uStack_b0);
  func_0x00010725b1d4(&uStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
  puVar6 = &uStack_198;
  func_0x00010b588530();
  func_0x00010734b9c8();
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010b588530(&uStack_198);
    __Unwind_Resume();
    *puVar6 = &PTR_DAT_110d0f008;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = &DAT_11383d918;
    puVar6[4] = &DAT_11383d918;
    puVar6[5] = &DAT_11383d918;
    puVar6[6] = &DAT_11383d918;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[7] = &DAT_11383d918;
    *(undefined4 *)(puVar6 + 10) = 0;
    return;
  }
  return;
}



/* Entry: 10734b09c; end: 10734b0a3;  */

void FUN_10734b09c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d0f008;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 10734b0a4; end: 10734b0e7;  */

void FUN_10734b0a4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x0001072f043c();
    *(ulong *)(param_1 + 0x40) = uVar1;
  }
  return;
}



/* Entry: 10734b0e8; end: 10734b15f;  */

long FUN_10734b0e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107283e34();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x30,param_2 + 0x30);
  func_0x00010734b244(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



/* Entry: 10734b160; end: 10734b197;  */

undefined8 FUN_10734b160(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10734b1cc(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10734b198; end: 10734b19b;  */

undefined8 * FUN_10734b198(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4238;
  func_0x0001001148fc(param_1 + 3);
  func_0x0001072aa15c(param_1 + 1);
  return param_1;
}



/* Entry: 10734b19c; end: 10734b1cb;  */

void FUN_10734b19c(void)

{
  func_0x00010734b208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734b1cc; end: 10734b2c3;  */

long FUN_10734b1cc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010734b9e0(uVar1);
  return param_1;
}



/* Entry: 10734b2c4; end: 10734b2d7;  */

void FUN_10734b2c4(void)

{
  func_0x00010734b2a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734b2d8; end: 10734b30f;  */

undefined8 FUN_10734b2d8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_10734b5e0();
  return uVar1;
}



/* Entry: 10734b310; end: 10734b333;  */

void FUN_10734b310(long param_1,undefined8 param_2)

{
  func_0x00010734ba28(param_2,param_1 + 8);
  FUN_10734b0e8();
  return;
}



/* Entry: 10734b334; end: 10734b59b;  */

void FUN_10734b334(long param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int iStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  
  func_0x00010734ba14();
  FUN_10734b634(&uStack_1a0);
  iStack_120 = 0;
  if (param_2[0x20] == 0) {
    FUN_10734b600(&uStack_110,param_2);
    if (iStack_120 == 0) {
      FUN_10734b63c(&uStack_1a0,&uStack_110);
    }
    else {
      func_0x00010734ba0c();
      FUN_10734b704(&uStack_1a0,&uStack_110);
      iStack_120 = 0;
    }
    func_0x00010b588c28(&uStack_110);
  }
  else {
    if (param_2[0x20] != 1) goto LAB_10734b508;
    __ZNSt3__19to_stringEi(auStack_68,*param_2);
    func_0x0001004c3cd0(&uStack_110,&UNK_10f40ab54,auStack_68);
    in_ZR = iStack_120 == 1;
    if ((bool)in_ZR) {
      func_0x000100066230(&uStack_1a0,&uStack_110);
    }
    else {
      FUN_10734b6a0(&uStack_1a0);
      uStack_198 = uStack_108;
      uStack_1a0 = uStack_110;
      uStack_190 = uStack_100;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_110 = 0;
      iStack_120 = 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  func_0x000107284284(auStack_1b0,param_1 + 8);
  iVar2 = (int)param_1 + 8;
  func_0x0001072842e4();
  if (iVar2 == 0) {
    FUN_10734b950(*(undefined8 *)(param_1 + 0x68),&uStack_1a0);
  }
  else {
    plVar3 = (long *)(param_1 + 8);
    func_0x00010728433c();
    FUN_10734b730(&uStack_110,&uStack_1a0);
    func_0x00010734b244(auStack_88,param_1 + 0x50);
    puStack_50 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0xb0;
    __Znwm();
    *puVar4 = &PTR_FUN_1109a4310;
    FUN_10734b730(puVar4 + 1,&uStack_110);
    func_0x00010734b244(puVar4 + 0x12,auStack_88);
    puStack_50 = puVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_68);
    func_0x0001006393ec(auStack_68);
    FUN_10734b60c(&uStack_110);
  }
  func_0x000107270b00(auStack_1b0);
  func_0x00010734ba0c();
  func_0x00010734b9c8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10734b508:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10734b510);
  (*pcVar1)();
}



/* Entry: 10734b59c; end: 10734b5d3;  */

long FUN_10734b59c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a4390);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10734b5d4; end: 10734b5df;  */

undefined ** FUN_10734b5d4(void)

{
  return &PTR_DAT_1109a4390;
}



/* Entry: 10734b5e0; end: 10734b5ff;  */

void FUN_10734b5e0(void)

{
  func_0x00010734ba28();
  FUN_10734b0e8();
  return;
}



/* Entry: 10734b600; end: 10734b60b;  */

void FUN_10734b600(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b589a6c(param_1,0);
  *unaff_x19 = &PTR_DAT_110d0f058;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5899bc();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
  unaff_x19[5] = unaff_x21;
  func_0x00010b589450(unaff_x19 + 3,unaff_x20 + 0x18);
  lVar1 = unaff_x20 + 0x30;
  func_0x00010b589928();
  unaff_x19[6] = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x00010b589928();
  unaff_x19[7] = lVar1;
  lVar1 = unaff_x20 + 0x40;
  func_0x00010b589928();
  unaff_x19[8] = lVar1;
  lVar1 = unaff_x20 + 0x48;
  func_0x00010b589928();
  unaff_x19[9] = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010b589928();
  unaff_x19[10] = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010b589928();
  unaff_x19[0xb] = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00010b589928();
  unaff_x19[0xc] = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00010b589928();
  unaff_x19[0xd] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b58849c();
  }
  unaff_x19[0xe] = unaff_x21;
  unaff_x19[0xf] = *(undefined8 *)(unaff_x20 + 0x78);
  return;
}



/* Entry: 10734b60c; end: 10734b633;  */

long FUN_10734b60c(long param_1)

{
  FUN_10734b1cc(param_1 + 0x88);
  func_0x00010734b9ec();
  return param_1;
}



/* Entry: 10734b634; end: 10734b63b;  */

undefined8 * FUN_10734b634(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d0f058;
  param_1[1] = 0;
  func_0x00010b588b08();
  return param_1;
}



/* Entry: 10734b63c; end: 10734b69f;  */

long FUN_10734b63c(long param_1,long param_2)

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
      func_0x00010b589498(param_1);
    }
    else {
      func_0x00010b589460(param_1);
    }
  }
  return param_1;
}



/* Entry: 10734b6a0; end: 10734b6f3;  */

void FUN_10734b6a0(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x80) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a42e0)[*(uint *)(param_1 + 0x80)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  return;
}



/* Entry: 10734b6f4; end: 10734b703;  */

undefined8 FUN_10734b6f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b589930();
  func_0x00010b588c54(param_2);
  return param_2;
}



/* Entry: 10734b704; end: 10734b72f;  */

long FUN_10734b704(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010b588adc(param_1,0);
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
      func_0x00010b589498(param_1);
    }
    else {
      func_0x00010b589460(param_1);
    }
  }
  return param_1;
}



/* Entry: 10734b730; end: 10734b797;  */

undefined1 * FUN_10734b730(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  FUN_10734b6a0();
  uVar1 = *(uint *)(param_2 + 0x80);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_1109a42f0)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  return param_1;
}



/* Entry: 10734b798; end: 10734b7bf;  */

long FUN_10734b798(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  func_0x00010b588adc(lVar1,0);
  if (lVar1 != param_2) {
    uVar2 = *(ulong *)(lVar1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar3) {
      func_0x00010b589498(lVar1);
    }
    else {
      func_0x00010b589460(lVar1);
    }
  }
  return lVar1;
}



/* Entry: 10734b7c0; end: 10734b7eb;  */

undefined8 * FUN_10734b7c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4310;
  FUN_10734b60c(param_1 + 1);
  return param_1;
}



/* Entry: 10734b7ec; end: 10734b7ff;  */

void FUN_10734b7ec(void)

{
  FUN_10734b7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734b800; end: 10734b837;  */

undefined8 FUN_10734b800(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm(0xb0);
  FUN_10734b8b0();
  return uVar1;
}



/* Entry: 10734b838; end: 10734b86b;  */

undefined8 * FUN_10734b838(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puStack_38;
  
  *param_2 = &PTR_FUN_1109a4310;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 0x11) = 0xffffffff;
  func_0x00010734b9ec();
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_2 + 1;
    (*(code *)(&PTR_FUN_1109a4370)[uVar1])(&puStack_38,param_1 + 8);
    *(uint *)(param_2 + 0x11) = uVar1;
  }
  func_0x00010734b244(param_2 + 0x12,param_1 + 0x90);
  return param_2;
}



/* Entry: 10734b86c; end: 10734b8a3;  */

long FUN_10734b86c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109a4380);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10734b8a4; end: 10734b8af;  */

undefined ** FUN_10734b8a4(void)

{
  return &PTR_DAT_1109a4380;
}



/* Entry: 10734b8b0; end: 10734b93f;  */

undefined8 * FUN_10734b8b0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_1109a4310;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  func_0x00010734b9ec();
  uVar1 = *(uint *)(param_2 + 0x80);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1 + 1;
    (*(code *)(&PTR_FUN_1109a4370)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x11) = uVar1;
  }
  func_0x00010734b244(param_1 + 0x12,param_2 + 0x88);
  return param_1;
}



/* Entry: 10734b940; end: 10734b94f;  */

void FUN_10734b940(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010b589a6c(*param_1,0);
  *unaff_x19 = &PTR_DAT_110d0f058;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5899bc();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)((long)unaff_x19 + 0x1c) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x14) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = 0;
  unaff_x19[5] = unaff_x21;
  func_0x00010b589450(unaff_x19 + 3,unaff_x20 + 0x18);
  lVar1 = unaff_x20 + 0x30;
  func_0x00010b589928();
  unaff_x19[6] = lVar1;
  lVar1 = unaff_x20 + 0x38;
  func_0x00010b589928();
  unaff_x19[7] = lVar1;
  lVar1 = unaff_x20 + 0x40;
  func_0x00010b589928();
  unaff_x19[8] = lVar1;
  lVar1 = unaff_x20 + 0x48;
  func_0x00010b589928();
  unaff_x19[9] = lVar1;
  lVar1 = unaff_x20 + 0x50;
  func_0x00010b589928();
  unaff_x19[10] = lVar1;
  lVar1 = unaff_x20 + 0x58;
  func_0x00010b589928();
  unaff_x19[0xb] = lVar1;
  lVar1 = unaff_x20 + 0x60;
  func_0x00010b589928();
  unaff_x19[0xc] = lVar1;
  lVar1 = unaff_x20 + 0x68;
  func_0x00010b589928();
  unaff_x19[0xd] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b58849c();
  }
  unaff_x19[0xe] = unaff_x21;
  unaff_x19[0xf] = *(undefined8 *)(unaff_x20 + 0x78);
  return;
}



/* Entry: 10734b950; end: 10734b96b;  */

long * FUN_10734b950(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010734b95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  if ((long *)param_1[3] == param_1) {
    uVar1 = 0x20;
  }
  else {
    if ((long *)param_1[3] == (long *)0x0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010734b9e0(uVar1);
  return param_1;
}



/* Entry: 10734b96c; end: 10734b9a7;  */

long FUN_10734b96c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010734b9e0(uVar1);
  return param_1;
}



/* Entry: 10734b9a8; end: 10734ba3b;  */

void FUN_10734b9a8(void)

{
  return;
}



/* Entry: 10734ba3c; end: 10734bd13;  */

void FUN_10734ba3c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  ulong *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  int extraout_w10;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  char cStack_a0;
  undefined1 auStack_98 [23];
  undefined1 uStack_81;
  undefined1 auStack_80 [24];
  byte bStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar5 = &uStack_f0;
  plVar7 = (long *)*param_2;
  func_0x00010002b838(&uStack_60,PTR_DAT_1131acfd0);
  (**(code **)(*plVar7 + 0x68))(auStack_80,plVar7,&uStack_60);
  func_0x000107351c4c();
  plVar7 = (long *)*param_2;
  func_0x00010002b838(auStack_e0,PTR_DAT_1131acfc0);
  (**(code **)(*plVar7 + 0x68))(&uStack_60,plVar7,auStack_e0);
  func_0x00010597a1d4(auStack_98,&uStack_60,&PTR_DAT_11099c990);
  func_0x000107351dec();
  func_0x000107351c30();
  uVar6 = *param_3;
  func_0x000107351afc(uStack_81);
  if (extraout_x8 == 0) {
    func_0x00010002b838(&uStack_60,&DAT_10f301125);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_60,auStack_98);
  }
  func_0x0001072d3d9c(&uStack_b0,uVar6,&uStack_60);
  func_0x000107351c4c();
  if ((bStack_68 & 1) == 0) {
    func_0x000104bdc2c8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10734bc74);
    (*pcVar1)();
  }
  func_0x0001002a82b4(auStack_e0,auStack_80);
  uVar2 = SUB81(auStack_e0,0);
  func_0x0001072daee8();
  uStack_60 = CONCAT71(uStack_60._1_7_,uVar2);
  func_0x000107351da4();
  if (cStack_a0 == '\x01') {
    lStack_e8 = lStack_a8;
    uStack_f0 = uStack_b0;
    if (lStack_a8 != 0) {
      do {
        func_0x0001073518c8();
      } while (extraout_w10 != 0);
    }
  }
  else {
    uStack_f0 = 0;
    lStack_e8 = 0;
  }
  puVar3 = (undefined8 *)0x30;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  *puVar3 = &PTR_FUN_1109a43f8;
  FUN_1073a1170(puVar4,&uStack_60,&uStack_f0,param_4);
  puStack_c0 = puVar4;
  puStack_b8 = puVar3;
  func_0x000104bff3c8();
  func_0x000107351d9c();
  func_0x000107351c38();
  func_0x000107351d70();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_1109a4448;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  uStack_48 = (char)param_5[3] == '\x01';
  if ((bool)uStack_48) {
    uStack_58 = param_5[1];
    uStack_60 = *param_5;
    uStack_50 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
  }
  func_0x00010734ac34(puVar5 + 3,&puStack_c0,&uStack_60);
  func_0x000107351dec();
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  func_0x0001072aa15c(&puStack_c0);
  func_0x0001072ba1e0(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x0001001148fc(auStack_80);
  return;
}



/* Entry: 10734bd14; end: 10734bfcf;  */

undefined8 *
FUN_10734bd14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [56];
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_68;
  
  puVar1 = param_1;
  func_0x0001073518a8();
  *puVar1 = &PTR_FUN_1109a43b0;
  uStack_68 = extraout_x8;
  FUN_1073af27c(&uStack_90,0,0);
  uStack_b8 = param_11;
  uStack_c0 = param_10;
  puVar1[2] = uStack_88;
  puVar1[1] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_c8 = puVar1 + 1;
  func_0x00010724b8b8(&uStack_90);
  uVar2 = *param_2;
  puStack_d0 = param_1 + 3;
  param_1[4] = param_2[1];
  *puStack_d0 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = *param_4;
  puVar3 = param_1 + 7;
  param_1[8] = param_4[1];
  *puVar3 = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  func_0x0001072ae058(param_1 + 0xb,param_5);
  uVar2 = *param_6;
  param_1[0x14] = param_6[1];
  param_1[0x13] = uVar2;
  *param_6 = 0;
  param_6[1] = 0;
  uVar5 = param_7[1];
  uVar2 = *param_7;
  param_1[0x17] = param_7[2];
  param_1[0x16] = uVar5;
  param_1[0x15] = uVar2;
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  uVar5 = param_8[1];
  uVar2 = *param_8;
  param_1[0x1a] = param_8[2];
  param_1[0x19] = uVar5;
  param_1[0x18] = uVar2;
  param_8[1] = 0;
  param_8[2] = 0;
  *param_8 = 0;
  uVar5 = *param_9;
  uVar2 = param_9[2];
  param_1[0x1c] = param_9[1];
  param_1[0x1b] = uVar5;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uStack_c0;
  *(undefined8 *)((long)param_1 + 0xfc) = uStack_b8;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  func_0x000107306764(param_1 + 0x26);
  func_0x00010726ed14(param_1 + 0x40);
  param_1[0x42] = param_1;
  uVar2 = *(undefined8 *)(param_1[3] + 8);
  (**(code **)(*(long *)param_1[5] + 0x30))();
  FUN_10734bfd0(uVar2);
  plVar4 = (long *)param_1[5];
  puVar1 = &uStack_b0;
  FUN_10734d68c(puVar1,param_1 + 0x40);
  puStack_78 = (undefined8 *)0x0;
  puStack_98 = param_1;
  func_0x000107351c54();
  *puVar1 = &PTR_SUB_1109a4498;
  puVar1[2] = uStack_a8;
  puVar1[1] = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar1[3] = uStack_a0;
  puVar1[4] = param_1;
  puStack_78 = puVar1;
  (**(code **)(*plVar4 + 0x10))(plVar4,&uStack_90);
  *(int *)(param_1 + 0x1f) = (int)plVar4;
  func_0x0001072d19fc(&uStack_90);
  puVar1 = &uStack_b0;
  func_0x00010725b1d4(puVar1);
  func_0x000107351844(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072d19fc(&uStack_90);
  func_0x00010725b1d4(&uStack_b0);
  FUN_10734ddc8(param_1 + 0x40);
  func_0x000107306434(param_1 + 0x26);
  FUN_10734d6dc(param_1 + 0x21);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  func_0x00010724bd50(param_1 + 0x13);
  func_0x0001072ab460(param_1 + 0xb);
  func_0x0001072aa15c(param_1 + 9);
  func_0x0001072ac9dc(puVar3);
  func_0x0001072ac8e0(param_1 + 5);
  func_0x00010726eedc(puStack_d0);
  func_0x00010724b8b8(puStack_c8);
  __Unwind_Resume(puVar1);
  pcStack_d8 = FUN_10734bfd0;
  puVar1 = puVar1 + 0xe4;
  puStack_f0 = param_3;
  puStack_e8 = puVar3;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_1073283b8(auStack_128,puVar1);
  func_0x0001073518f8();
  func_0x000107351ab0();
  func_0x000107351b44();
  return puVar1;
}



/* Entry: 10734bfd0; end: 10734c007;  */

void FUN_10734bfd0(long param_1)

{
  undefined1 auStack_58 [56];
  
  FUN_1073283b8(auStack_58,param_1 + 0x720);
  func_0x0001073518f8();
  func_0x000107351ab0();
  func_0x000107351b44();
  return;
}



/* Entry: 10734c008; end: 10734c0a7;  */

undefined8 * FUN_10734c008(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_1109a43b0;
  func_0x000107351e14(param_1[5],*(undefined4 *)(param_1 + 0x1f));
  (*extraout_x8)();
  FUN_10734ddc8(param_1 + 0x40);
  func_0x000107306434(param_1 + 0x26);
  FUN_10734d6dc(param_1 + 0x21);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  func_0x00010724bd50(param_1 + 0x13);
  func_0x0001072ab460(param_1 + 0xb);
  func_0x0001072aa15c(param_1 + 9);
  func_0x0001072ac9dc(param_1 + 7);
  func_0x0001072ac8e0(param_1 + 5);
  func_0x00010726eedc(param_1 + 3);
  func_0x00010724b8b8(param_1 + 1);
  return param_1;
}



/* Entry: 10734c0a8; end: 10734c0ab;  */

undefined8 * FUN_10734c0a8(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_1109a43b0;
  func_0x000107351e14(param_1[5],*(undefined4 *)(param_1 + 0x1f));
  (*extraout_x8)();
  FUN_10734ddc8(param_1 + 0x40);
  func_0x000107306434(param_1 + 0x26);
  FUN_10734d6dc(param_1 + 0x21);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  func_0x00010724bd50(param_1 + 0x13);
  func_0x0001072ab460(param_1 + 0xb);
  func_0x0001072aa15c(param_1 + 9);
  func_0x0001072ac9dc(param_1 + 7);
  func_0x0001072ac8e0(param_1 + 5);
  func_0x00010726eedc(param_1 + 3);
  func_0x00010724b8b8(param_1 + 1);
  return param_1;
}



/* Entry: 10734c0ac; end: 10734c0bf;  */

void FUN_10734c0ac(void)

{
  FUN_10734c008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10734c0c0; end: 10734c383;  */

void FUN_10734c0c0(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x0001073518a8();
  uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 8);
  auStack_98[0] = 0;
  puVar7 = (undefined8 *)(lVar1 + 0x28);
  uVar2 = *puVar7;
  uStack_48 = extraout_x8;
  func_0x000107351cb4(uVar2);
  uVar3 = *puVar7;
  func_0x000107351cc0(uVar3);
  FUN_10734c384(auStack_80,auStack_98,uVar6,uVar2,uVar3);
  lStack_b0._0_1_ = 1;
  plVar4 = (long *)*puVar7;
  (**(code **)(*plVar4 + 0x30))();
  plVar5 = &lStack_b0;
  FUN_10734c384(auStack_98,plVar5,uVar6,plVar4,1);
  FUN_1073af260();
  (**(code **)(*plVar5 + 0x20))(&lStack_b0);
  plVar4 = *(long **)(param_1 + 8);
  uStack_188 = CONCAT71(lStack_b0._1_7_,(undefined1)lStack_b0);
  lStack_180 = lStack_a8;
  lStack_190 = param_1;
  if (lStack_a8 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  uStack_178 = uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,auStack_98);
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107351bd8(&uStack_130);
  puVar7 = &uStack_118;
  FUN_10734d7d4(puVar7,&lStack_190);
  puStack_50 = (undefined8 *)0x0;
  func_0x000107351bd0();
  puVar7[2] = uStack_128;
  puVar7[1] = uStack_130;
  puVar7[6] = uStack_108;
  puVar7[5] = uStack_110;
  *puVar7 = &PTR_SUB_1109a4518;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar7[4] = uStack_118;
  puVar7[3] = uStack_120;
  puVar7[7] = uStack_100;
  uStack_110 = 0;
  uStack_108 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 8,auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar7 + 0xb,auStack_e0);
  puVar7[0xf] = lStack_c0;
  puVar7[0xe] = uStack_c8;
  if (lStack_c0 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_01 != 0);
  }
  puStack_50 = puVar7;
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_68);
  func_0x0001006393ec(auStack_68);
  FUN_10734c48c(&uStack_130);
  func_0x00010734c4ac(&lStack_190);
  func_0x00010725b1d4(&lStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000107351844(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_68);
    FUN_10734c48c(&uStack_130);
    func_0x00010734c4ac(&lStack_190);
    func_0x00010725b1d4(&lStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
      func_0x00010735190c();
    } while( true );
  }
  return;
}



/* Entry: 10734c384; end: 10734c48b;  */

void FUN_10734c384(undefined8 *param_1,byte *param_2,long param_3,int param_4,int param_5)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x23;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_10734bfd0(param_3);
  if ((param_5 != 0) && ((*param_2 & 1) != 0)) {
    func_0x00010002b838(auStack_60,&UNK_10f40ab95);
    FUN_10732836c(&uStack_48,param_3 + 0x750,auStack_60);
    func_0x0001073519e4();
    func_0x000107351afc((char)((ulong)unaff_x23 >> 0x38));
    if (extraout_x8_00 == 0) {
      func_0x000100060b18(param_1,&stack0xffffffffffffffd0);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,&uStack_48);
    }
    func_0x000107351dd8();
    return;
  }
  func_0x000107351dcc();
  func_0x0001073518f8();
  func_0x000107351ab0();
  func_0x000107351afc(uStack_48._7_1_);
  if (extraout_x8 == 0) {
    if (param_4 == 2) {
      FUN_10734d740(param_1,param_3 + 0x740,&UNK_10f40abc4,0x12);
    }
    else {
      FUN_10734d72c(param_1,param_3);
    }
  }
  else {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[2] = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
  }
  func_0x000107351b44();
  return;
}



/* Entry: 10734c48c; end: 10734c4db;  */

long FUN_10734c48c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107351a14();
  func_0x00010734c4ac();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10734c4dc; end: 10734c53b;  */

void FUN_10734c4dc(long param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  byte *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 unaff_x23;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107351b54();
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000107351cb4();
  iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107351cc0();
  FUN_10734bfd0(lVar3);
  if ((iVar2 != 0) && ((*unaff_x19 & 1) != 0)) {
    func_0x00010002b838(auStack_60,&UNK_10f40ab95);
    FUN_10732836c(&uStack_48,lVar3 + 0x750,auStack_60);
    func_0x0001073519e4();
    func_0x000107351afc((char)((ulong)unaff_x23 >> 0x38));
    if (extraout_x8_01 == 0) {
      func_0x000100060b18(extraout_x8_00,&stack0xffffffffffffffd0);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (extraout_x8_00,&uStack_48);
    }
    func_0x000107351dd8();
    return;
  }
  func_0x000107351dcc();
  func_0x0001073518f8();
  func_0x000107351ab0();
  func_0x000107351afc(uStack_48._7_1_);
  if (extraout_x8 == 0) {
    if (iVar1 == 2) {
      FUN_10734d740(extraout_x8_00,lVar3 + 0x740,&UNK_10f40abc4,0x12);
    }
    else {
      FUN_10734d72c(extraout_x8_00,lVar3);
    }
  }
  else {
    extraout_x8_00[1] = uStack_50;
    *extraout_x8_00 = uStack_58;
    extraout_x8_00[2] = uStack_48;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
  }
  func_0x000107351b44();
  return;
}



/* Entry: 10734c53c; end: 10734ca87;  */

ulong FUN_10734c53c(long param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  code *extraout_x8_03;
  ulong uVar10;
  ulong extraout_x9;
  ulong uVar11;
  ulong extraout_x9_00;
  long *extraout_x10;
  ulong uVar12;
  ulong uVar13;
  ulong extraout_x11;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_x24;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auStack_e0 [24];
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  uint auStack_b0 [2];
  undefined1 auStack_a8 [24];
  byte bStack_90;
  long alStack_88 [3];
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x0001073518a8();
  uStack_68 = extraout_x8;
  FUN_10734c4dc(auStack_e0);
  plVar14 = *(long **)(param_1 + 0x28);
  func_0x000107351de0();
  func_0x00010727f9a8(&plStack_c8,auStack_b0,&UNK_10f40ab95);
  func_0x0001001148fc(auStack_b0);
  func_0x000107351afc(uStack_b8._7_1_);
  if (extraout_x8_00 == 0) {
    uVar16 = 0;
  }
  else {
    (**(code **)(*plVar14 + 0x48))(plVar14);
    uVar16 = (uint)plVar14 & (uint)*param_2 ^ 1;
  }
  func_0x000107351dd8();
  uVar1 = uRam00000001136ca250 + 1;
  uVar15 = (ulong)uVar1;
  uRam00000001136ca250 = uVar1;
  auStack_b0[0] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,auStack_e0);
  bStack_90 = *param_2;
  plVar14 = alStack_88;
  func_0x00010734f97c(alStack_88,param_3);
  uVar18 = *(ulong *)(param_1 + 0x110);
  if (uVar18 != 0) {
    uVar8 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar8) == 0) {
      unaff_x24 = (ulong)(uVar17 - 1 & uVar1);
    }
    else {
      unaff_x24 = uVar15;
      if (uVar18 <= uVar15) {
        uVar3 = 0;
        if (uVar17 != 0) {
          uVar3 = uVar1 / uVar17;
        }
        unaff_x24 = (ulong)(uVar1 - uVar3 * uVar17);
      }
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x108) + unaff_x24 * 8);
    if (plVar19 != (long *)0x0) {
      do {
        while( true ) {
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_10734c6b0;
          uVar10 = plVar19[1];
          if (uVar10 != uVar15) break;
          if (*(uint *)(plVar19 + 2) == uVar1) goto LAB_10734c940;
        }
        if ((uVar18 & uVar8) == 0) {
          uVar10 = uVar10 & uVar8;
        }
        else if (uVar18 <= uVar10) {
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar11 = uVar10 / uVar18;
          }
          uVar10 = uVar10 - uVar11 * uVar18;
        }
      } while (uVar10 == unaff_x24);
    }
  }
LAB_10734c6b0:
  func_0x000107351d94();
  plVar2 = (long *)(param_1 + 0x118);
  uStack_b8 = 1;
  plStack_c8 = plVar14;
  plStack_c0 = plVar2;
  *plVar14 = 0;
  plVar14[1] = uVar15;
  *(uint *)(plVar14 + 2) = uVar1;
  plVar14[4] = 0;
  plVar14[3] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[10] = 0;
  plVar14[9] = 0;
  plVar14[0xb] = 0;
  if ((uVar18 == 0) ||
     (*(float *)(param_1 + 0x128) * (float)uVar18 < (float)(*(long *)(param_1 + 0x120) + 1))) {
    bVar5 = 2 < uVar18;
    bVar6 = uVar18 == 3;
    func_0x000107351a7c(uVar18 << 1);
    uVar8 = extraout_x8_01;
    if (!bVar5 || bVar6) {
      uVar8 = extraout_x9;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = *(ulong *)(param_1 + 0x110);
    }
    if (uVar18 < uVar8) {
LAB_10734c75c:
      if (uVar8 >> 0x3d != 0) goto LAB_10734ca18;
      lVar9 = uVar8 << 3;
      __Znwm(lVar9);
      FUN_10734f8e4(param_1 + 0x108,lVar9);
      *(ulong *)(param_1 + 0x110) = uVar8;
      lVar9 = *(long *)(param_1 + 0x108);
      for (uVar18 = 0; uVar8 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar9 + uVar18 * 8) = 0;
      }
      plVar14 = (long *)*plVar2;
      uVar18 = uVar8;
      if (plVar14 != (long *)0x0) {
        uVar12 = plVar14[1];
        uVar11 = uVar8 - 1;
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar12 / uVar8;
        }
        uVar13 = uVar12;
        if (uVar8 <= uVar12) {
          uVar13 = uVar12 - uVar10 * uVar8;
        }
        if ((uVar8 & uVar11) == 0) {
          uVar13 = uVar12 & uVar11;
        }
        *(long **)(lVar9 + uVar13 * 8) = plVar2;
        while (plVar19 = plVar14, plVar14 = (long *)*plVar19, plVar14 != (long *)0x0) {
          uVar10 = plVar14[1];
          if ((uVar8 & uVar11) == 0) {
            uVar10 = uVar10 & uVar11;
          }
          else if (uVar8 <= uVar10) {
            uVar12 = 0;
            if (uVar8 != 0) {
              uVar12 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar12 * uVar8;
          }
          if (uVar10 != uVar13) {
            if (*(long *)(lVar9 + uVar10 * 8) == 0) {
              *(long **)(lVar9 + uVar10 * 8) = plVar19;
              uVar13 = uVar10;
            }
            else {
              *plVar19 = *plVar14;
              func_0x000107351978();
              lVar9 = extraout_x8_02;
              uVar11 = extraout_x9_00;
              plVar14 = extraout_x10;
              uVar13 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar8 < uVar18) {
      uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x120) / *(float *)(param_1 + 0x128));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000107351b60();
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar18) {
        if (uVar8 != 0) goto LAB_10734c75c;
        FUN_10734f8e4(param_1 + 0x108,0);
        *(undefined8 *)(param_1 + 0x110) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(param_1 + 0x110);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar18 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar15;
      if (uVar18 <= uVar15) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar15 / uVar18;
        }
        unaff_x24 = uVar15 - uVar8 * uVar18;
      }
    }
  }
  plVar19 = plStack_c8;
  lVar9 = *(long *)(param_1 + 0x108);
  plVar14 = *(long **)(lVar9 + unaff_x24 * 8);
  if (plVar14 == (long *)0x0) {
    *plStack_c8 = *plVar2;
    *plVar2 = (long)plStack_c8;
    *(long **)(lVar9 + unaff_x24 * 8) = plVar2;
    if (*plStack_c8 != 0) {
      uVar8 = *(ulong *)(*plStack_c8 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar8 = uVar8 & uVar18 - 1;
      }
      else if (uVar18 <= uVar8) {
        uVar10 = 0;
        if (uVar18 != 0) {
          uVar10 = uVar8 / uVar18;
        }
        uVar8 = uVar8 - uVar10 * uVar18;
      }
      *(long **)(lVar9 + uVar8 * 8) = plStack_c8;
    }
  }
  else {
    *plStack_c8 = *plVar14;
    *plVar14 = (long)plStack_c8;
  }
  plStack_c8 = (long *)0x0;
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  FUN_10734f8fc(&plStack_c8);
LAB_10734c940:
  *(uint *)(plVar19 + 3) = auStack_b0[0];
  func_0x000100066230(plVar19 + 4,auStack_a8);
  *(byte *)(plVar19 + 7) = bStack_90;
  plVar14 = (long *)plVar19[0xb];
  plVar19[0xb] = 0;
  uVar7 = plVar14 == plVar19 + 8;
  if ((bool)uVar7) {
    lVar9 = 0x20;
LAB_10734c980:
    (**(code **)(*plVar14 + lVar9))();
  }
  else if (plVar14 != (long *)0x0) {
    lVar9 = 0x28;
    goto LAB_10734c980;
  }
  if (plStack_70 == (long *)0x0) {
    plVar19[0xb] = 0;
  }
  else {
    uVar7 = plStack_70 == alStack_88;
    if ((bool)uVar7) {
      plVar19[0xb] = (long)(plVar19 + 8);
      func_0x000107351e14();
      (*extraout_x8_03)();
    }
    else {
      plVar19[0xb] = (long)plStack_70;
      plStack_70 = (long *)0x0;
    }
  }
  func_0x00010734d880(auStack_b0);
  FUN_10734ca88(param_1,auStack_e0,uVar16,uVar15,param_3);
  func_0x0001073519e4();
  func_0x000107351844(uStack_68);
  if ((bool)uVar7) {
    return uVar15;
  }
  ___stack_chk_fail();
LAB_10734ca18:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10734ca20);
  (*pcVar4)();
}



/* Entry: 10734ca88; end: 10734cfbf;  */

/* WARNING: Type propagation algorithm not settling */

long ** FUN_10734ca88(long param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                     long **param_5)

{
  long *plVar1;
  undefined1 uVar2;
  long **pplVar3;
  long **pplVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar10;
  long *plVar11;
  long **pplStack_398;
  long *plStack_390;
  long **pplStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  long *plStack_368;
  long lStack_360;
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [24];
  undefined1 *puStack_320;
  undefined8 uStack_318;
  long **pplStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  long *plStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_280;
  undefined1 auStack_238 [24];
  long *aplStack_220 [3];
  char cStack_208;
  long **pplStack_200;
  undefined1 *puStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar8 = auStack_2e0;
  func_0x0001073518a8();
  aplStack_220[0]._0_1_ = 0;
  cStack_208 = '\0';
  uStack_68 = extraout_x8;
  FUN_10734d498(auStack_238);
  pplVar3 = *(long ***)(param_1 + 0x38);
  uVar9 = 0;
  (*(code *)(*pplVar3)[5])();
  if ((uVar9 & 1) == 0) {
    pcVar6 = &DAT_10f6842c6;
  }
  else {
    func_0x000107351de0();
    func_0x00010727f9a8(&plStack_1f0,&plStack_2b0,&UNK_10f40ab95);
    func_0x0001001148fc(&plStack_2b0);
    func_0x000107351afc(uStack_1e0._7_1_);
    uVar10 = 300;
    if (extraout_x8_00 != 0) {
      uVar10 = 10;
    }
    func_0x000107351c5c();
    FUN_10734d4ac(pplVar3,uVar10);
    puVar7 = auStack_238;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x48))(&plStack_1f0);
    pplVar4 = &plStack_1f0;
    func_0x0001005d466c();
    pplStack_200 = pplVar4;
    puStack_1f8 = puVar7;
    func_0x0001003a91d4(&UNK_10f40ab80);
    func_0x0001003a9204(&plStack_2b0);
    func_0x000100602604(aplStack_220,&plStack_2b0);
    pplVar4 = &plStack_2b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107351c5c();
    if ((int)pplVar3 == 0) {
      pcVar6 = &DAT_10f6842c6;
      goto LAB_10734cd5c;
    }
    pcVar6 = "true";
    pplVar3 = pplVar4;
  }
  FUN_1073af260();
  (*(code *)(*pplVar3)[4])(&plStack_2b0);
  plVar11 = *(long **)(param_1 + 8);
  lStack_1c8 = lStack_2a8;
  plStack_1d0 = plStack_2b0;
  lStack_1d8 = param_1;
  if (lStack_2a8 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  uStack_1c0 = uStack_2a0;
  func_0x000107351b4c(auStack_1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,auStack_238);
  func_0x00010028af84(auStack_188,aplStack_220);
  uStack_168 = param_3;
  uStack_164 = param_4;
  func_0x00010734f97c(auStack_160,param_5);
  FUN_10734d68c(&uStack_140,param_1 + 0x200);
  FUN_10734d8f8(&uStack_128,&lStack_1d8);
  puStack_70 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  puVar5[2] = uStack_138;
  puVar5[1] = uStack_140;
  puVar5[6] = uStack_118;
  puVar5[5] = uStack_120;
  *puVar5 = &PTR_SUB_1109a47a8;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar5[4] = uStack_128;
  puVar5[3] = uStack_130;
  puVar5[7] = uStack_110;
  uStack_120 = 0;
  uStack_118 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 8,auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 0xb,auStack_f0);
  *(undefined1 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  if (cStack_c0 == '\x01') {
    puVar5[0xf] = uStack_d0;
    puVar5[0xe] = uStack_d8;
    puVar5[0x10] = uStack_c8;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    *(undefined1 *)(puVar5 + 0x11) = 1;
  }
  puVar5[0x12] = uStack_b8;
  func_0x00010734f97c(puVar5 + 0x13,auStack_b0);
  puStack_70 = puVar5;
  (**(code **)(*plVar11 + 0x10))(plVar11,auStack_88);
  func_0x0001006393ec(auStack_88);
  func_0x00010734d4e4(&uStack_140);
  func_0x00010734d504(&lStack_1d8);
  func_0x00010725b1d4(&plStack_2b0);
LAB_10734cd5c:
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  uVar2 = cStack_208 == '\x01';
  if ((bool)uVar2) {
    func_0x0001073519a0();
    pcVar6 = (char *)&plStack_2b0;
    func_0x00010729d56c(pcVar6,&UNK_10f40ab8a,"true");
    func_0x000107351b34();
    puVar7 = auStack_2c8;
    func_0x000107351b4c(puVar7);
    func_0x000107351b8c();
    puVar8 = auStack_2c8;
    func_0x000107351dc4();
    func_0x000107351990(uVar10,puVar7);
    func_0x000107351dd8();
    func_0x000107351d44();
    pplVar3 = aplStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&plStack_1f0,pplVar3);
    lStack_2a8 = lStack_1e8;
    plStack_2b0 = plStack_1f0;
    uStack_2a0 = uStack_1e0;
    lStack_1e8 = 0;
    uStack_1e0 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_280 = 1;
    func_0x000107351d60(param_5[3]);
    func_0x000107351a74();
    func_0x000107351c5c();
  }
  else {
    func_0x0001073519a0();
    param_5 = &plStack_2b0;
    func_0x00010729d56c(param_5,&UNK_10f40ab8a,&DAT_10f6842c6);
    func_0x000107351b4c(auStack_2e0);
    func_0x000107351b8c();
    pplVar3 = param_5;
    func_0x00010726e300(param_5);
    func_0x000107351990(uVar10,pplVar3);
    func_0x0001073519e4();
    func_0x000107351d44();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
  pplVar4 = aplStack_220;
  func_0x0001001148fc(pplVar4);
  func_0x000107351844(uStack_68);
  if ((bool)uVar2) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x000107351a48();
  func_0x000107351c5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
  puVar7 = (undefined1 *)aplStack_220;
  func_0x0001001148fc();
  func_0x00010735190c();
  pcStack_2e8 = FUN_10734cfc0;
  pplStack_310 = (long **)pcVar6;
  uStack_308 = uVar10;
  uStack_300 = param_2;
  pplStack_2f8 = param_5;
  puStack_2f0 = &stack0xfffffffffffffff0;
  func_0x0001073518a8();
  plVar11 = (long *)(puVar7 + 0x58);
  uStack_318 = extraout_x8_01;
  FUN_10734d0c8();
  plVar1 = (long *)*plVar11;
  lStack_360 = plVar11[1];
  plStack_368 = plVar1;
  if (lStack_360 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10_00 != 0);
  }
  if (plVar1 != (long *)0x0) {
    puVar7 = auStack_358;
    func_0x00010734f97c(puVar7,puVar8);
    puStack_320 = (undefined1 *)0x0;
    func_0x000107351c54();
    puVar8 = puVar7;
    func_0x000107351c64();
    func_0x00010734f97c();
    puStack_320 = puVar7;
    FUN_1073af260();
    (**(code **)(*plVar1 + 0x10))(plVar1,pplVar3,auStack_338,puVar8);
    FUN_10734b1cc(auStack_338);
    func_0x0001072cc30c(auStack_358);
  }
  pplVar3 = &plStack_368;
  func_0x0001072ab4a4();
  func_0x000107351844(uStack_318);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107351b1c();
    func_0x0001072cc30c(auStack_358);
    pplVar4 = &plStack_368;
    func_0x0001072ab4a4();
    func_0x00010735190c();
    pcStack_378 = FUN_10734d0c8;
    pplStack_398 = pplVar4;
    plStack_390 = plVar1;
    pplStack_388 = pplVar3;
    ppuStack_380 = &puStack_2f0;
    FUN_10734e86c(pplVar4 + 7,&pplStack_398);
    return pplVar4 + 4;
  }
  return pplVar3;
}



/* Entry: 10734cfc0; end: 10734d0c7;  */

long ** FUN_10734cfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  long **pplStack_b8;
  long *plStack_b0;
  long **pplStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001073518a8();
  plVar2 = (long *)(param_1 + 0x58);
  uStack_38 = extraout_x8;
  FUN_10734d0c8();
  plVar1 = (long *)*plVar2;
  lStack_80 = plVar2[1];
  plStack_88 = plVar1;
  if (lStack_80 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  if (plVar1 != (long *)0x0) {
    puVar3 = auStack_78;
    func_0x00010734f97c(puVar3,param_3);
    puStack_40 = (undefined1 *)0x0;
    func_0x000107351c54();
    puVar4 = puVar3;
    func_0x000107351c64();
    func_0x00010734f97c();
    puStack_40 = puVar3;
    FUN_1073af260();
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,auStack_58,puVar4);
    FUN_10734b1cc(auStack_58);
    func_0x0001072cc30c(auStack_78);
  }
  pplVar5 = &plStack_88;
  func_0x0001072ab4a4();
  func_0x000107351844(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107351b1c();
    func_0x0001072cc30c(auStack_78);
    pplVar6 = &plStack_88;
    func_0x0001072ab4a4();
    func_0x00010735190c();
    pcStack_98 = FUN_10734d0c8;
    pplStack_b8 = pplVar6;
    plStack_b0 = plVar1;
    pplStack_a8 = pplVar5;
    puStack_a0 = &stack0xfffffffffffffff0;
    FUN_10734e86c(pplVar6 + 7,&pplStack_b8);
    return pplVar6 + 4;
  }
  return pplVar5;
}



/* Entry: 10734d0c8; end: 10734d0f7;  */

long FUN_10734d0c8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1;
  FUN_10734e86c(param_1 + 0x38,&lStack_28);
  return param_1 + 0x20;
}



/* Entry: 10734d0f8; end: 10734d1bf;  */

void FUN_10734d0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [184];
  
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))(auStack_110,*(long **)(param_1 + 0x38),param_3);
  FUN_10734d1c0(auStack_f8,param_2,auStack_110,param_1 + 0xd8,param_1 + 0xa8,param_1 + 0xc0,
                param_1 + 0xfc);
  func_0x0001073519e4();
  puVar1 = (undefined8 *)(param_1 + 0x58);
  FUN_10734d0c8();
  plVar2 = (long *)*puVar1;
  func_0x00010728433c(param_5);
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_f8,param_4,param_5);
  func_0x000107351c18();
  return;
}



/* Entry: 10734d1c0; end: 10734d497;  */

void FUN_10734d1c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,long param_6,long param_7)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  lVar5 = param_5;
  lVar4 = param_7;
  func_0x0001073518a8();
  uStack_58 = extraout_x8;
  func_0x000107351afc(*(undefined1 *)(param_6 + 0x17));
  if (extraout_x8_00 != 0) {
    lVar5 = param_6;
  }
  if (*(char *)(lVar4 + 4) == '\x01') {
    FUN_10734d8a8(param_7);
    func_0x000107859d40(auStack_120);
  }
  else {
    func_0x00010002b838(auStack_120,&UNK_10f40abd7);
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (&uStack_108,&DAT_10f40ab60);
  func_0x000105988308(auStack_f0,auStack_120,&uStack_108);
  func_0x0001003a91d4(&UNK_10f40ab64);
  func_0x0001003a9204(auStack_138);
  func_0x000107351d10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2);
  func_0x0001002a8308(param_1 + 0x18,param_3);
  uVar6 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_4 + 2);
  func_0x0001002a8308(param_1 + 0x50,param_5);
  cVar1 = *(char *)(param_7 + 4);
  if (cVar1 != '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    FUN_10734d8a8(param_7);
    func_0x000107859d40(&uStack_108,param_7);
    *(undefined8 *)(param_1 + 0x78) = uStack_100;
    *(undefined8 *)(param_1 + 0x70) = uStack_108;
    *(undefined8 *)(param_1 + 0x80) = uStack_f8;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
  }
  *(bool *)(param_1 + 0x88) = cVar1 == '\x01';
  func_0x00010002b838(auStack_f0,&UNK_10f40abdf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,auStack_138);
  func_0x00010002b838(auStack_c0,&UNK_10f40abf3);
  func_0x000107351b4c(auStack_a8);
  FUN_10734d8c0(auStack_90,&DAT_10f31d688,lVar5);
  func_0x000104bd4884(param_1 + 0x90,auStack_f0,3);
  lVar5 = 0x60;
  do {
    lVar4 = lVar5;
    func_0x0001002aa0bc(auStack_f0 + lVar4);
    uVar2 = lVar4 + -0x30 == -0x30;
    lVar5 = lVar4 + -0x30;
  } while (!(bool)uVar2);
  if (cVar1 != '\0') {
    func_0x000107351d10();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000107351844(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_90;
  lVar5 = -0x90;
  do {
    func_0x0001002aa0bc(puVar3);
    puVar3 = puVar3 + -0x30;
    lVar5 = lVar5 + 0x30;
  } while (lVar5 != 0);
  func_0x0001001148fc(lVar4 + 0x40);
  if (cVar1 != '\0') {
    func_0x000107351d10();
  }
  func_0x000107351df4();
  func_0x0001001148fc(lVar4 + -0x18);
  func_0x000107351d24();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  puVar3 = auStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
  func_0x000107351914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9__110346968
  )(puVar3,&UNK_10f40ac0c);
  return;
}



/* Entry: 10734d498; end: 10734d4ab;  */

void FUN_10734d498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9__110346968
  )(param_1,&UNK_10f40ac0c);
  return;
}



/* Entry: 10734d4ac; end: 10734d537;  */

bool FUN_10734d4ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107351b54();
  __ZNSt3__16chrono12system_clock3nowEv();
  return unaff_x19 * 1000000 < param_1 - unaff_x20;
}



/* Entry: 10734d538; end: 10734d573;  */

void FUN_10734d538(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 3;
  uStack_30 = *param_1;
  uStack_28 = 3;
  uStack_20 = param_3;
  FUN_10743fa9c(param_1,param_2,&uStack_20,&uStack_30,7);
  return;
}



/* Entry: 10734d574; end: 10734d5df;  */

undefined8 FUN_10734d574(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c2f714(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10734d5e0; end: 10734d68b;  */

void FUN_10734d5e0(undefined1 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_2 + 0x110);
  if ((uVar4 != 0) && (*(long *)(param_2 + 0x120) != 0)) {
    uVar5 = (ulong)param_3;
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1 & param_3);
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
        uVar7 = (ulong)(param_3 - uVar1 * uVar3);
      }
    }
    plVar8 = *(long **)(*(long *)(param_2 + 0x108) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10734d678;
          uVar9 = plVar8[1];
          if (uVar9 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_3) {
            func_0x000107c60c94(param_1,plVar8 + 4);
            param_1[0x18] = 1;
            return;
          }
        }
        if ((uVar4 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar4 <= uVar9) {
          uVar2 = 0;
          if (uVar4 != 0) {
            uVar2 = uVar9 / uVar4;
          }
          uVar9 = uVar9 - uVar2 * uVar4;
        }
      } while (uVar9 == uVar7);
    }
  }
LAB_10734d678:
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10734d68c; end: 10734d6db;  */

void FUN_10734d68c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10734d6dc; end: 10734d72b;  */

long * FUN_10734d6dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010734d880(lVar1);
    func_0x000107351be0();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10734d72c; end: 10734d73f;  */

void FUN_10734d72c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [23];
  undefined1 uStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f40abb0;
  uStack_28 = 0x13;
  func_0x00010002b838(auStack_60,&UNK_10f40ab95);
  FUN_10732836c(auStack_48,param_2 + 0x730,auStack_60);
  func_0x0001073519e4();
  func_0x000107351afc(uStack_31);
  if (extraout_x8 == 0) {
    func_0x000100060b18(param_1,&puStack_30);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_48);
  }
  func_0x000107351dd8();
  return;
}



/* Entry: 10734d740; end: 10734d7d3;  */

void FUN_10734d740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [23];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010002b838(auStack_60,&UNK_10f40ab95);
  FUN_10732836c(auStack_48,param_2,auStack_60);
  func_0x0001073519e4();
  func_0x000107351afc(uStack_31);
  if (extraout_x8 == 0) {
    func_0x000100060b18(param_1,&uStack_30);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_48);
  }
  func_0x000107351dd8();
  return;
}



/* Entry: 10734d7d4; end: 10734d857;  */

void FUN_10734d7d4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107351a08();
  *param_1 = *param_2;
  func_0x000107283e34(param_1 + 1,param_2 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 4,param_2 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x38,unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073518c8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10734d858; end: 10734d8a7;  */

long FUN_10734d858(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10734d8a8; end: 10734d8bf;  */

long FUN_10734d8a8(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x000107351b4c(lVar1 + 0x18);
  return param_1;
}



/* Entry: 10734d8c0; end: 10734d8f7;  */

long FUN_10734d8c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838();
  func_0x000107351b4c(lVar1 + 0x18);
  return param_1;
}



/* Entry: 10734d8f8; end: 10734d97f;  */

void FUN_10734d8f8(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107351ad8();
  func_0x000107283e34();
  func_0x000107351d54();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x38,unaff_x21 + 0x38);
  func_0x00010028af84(unaff_x19 + 0x50,unaff_x21 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x21 + 0x70);
  func_0x00010734f97c(unaff_x19 + 0x78,unaff_x21 + 0x78);
  return;
}



/* Entry: 10734d980; end: 10734d9cf;  */

void FUN_10734d980(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a43d0)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10734d9d0; end: 10734d9e7;  */

void FUN_10734d9d0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107351a14(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}


