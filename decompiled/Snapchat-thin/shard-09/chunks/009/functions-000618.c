/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10731560c; end: 107315633;  */

undefined8 FUN_10731560c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010724b340(param_1 + 0x208);
  func_0x00010731d18c();
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107315634; end: 10731569f;  */

void FUN_107315634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  uint uVar10;
  char *unaff_x19;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [24];
  undefined ***pppuStack_2d0;
  undefined1 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 auStack_2b0 [64];
  undefined1 auStack_b0 [24];
  undefined8 *puStack_98;
  undefined **appuStack_90 [3];
  undefined ***pppuStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010054c994();
  func_0x00010054bdbc();
  uStack_28 = extraout_x8;
  func_0x000107319cc4(auStack_48,param_3);
  puVar9 = auStack_48;
  func_0x0001078a3b6c();
  puVar4 = auStack_48;
  func_0x000107319d0c();
  func_0x00010054c318(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731cb3c();
  func_0x000107319d0c();
  func_0x00010731c938();
  func_0x00010731d120();
  puVar5 = puVar4;
  pcVar8 = unaff_x19;
  func_0x00010054bdbc();
  puVar1 = &UNK_10f40a1c4;
  if (*pcVar8 != '\x03') {
    puVar1 = &UNK_10f40a1cf;
  }
  uVar2 = 10;
  if (*pcVar8 != '\x03') {
    uVar2 = 0xe;
  }
  uVar3 = puVar5[0x53] == '\x01';
  uStack_60 = extraout_x8_01;
  if ((bool)uVar3) {
    do {
      func_0x00010731d03c();
    } while (extraout_w11 != 0);
    uVar10 = extraout_w8 & 0xffffff00;
    uVar13 = extraout_w8 & 0xff;
    uVar12 = 0x100000000;
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
  }
  plVar11 = *(long **)(puVar4 + 0x40);
  func_0x00010731874c(&uStack_2c0,*(undefined8 *)(puVar4 + 0x20),*(undefined8 *)(puVar4 + 0x28));
  puVar6 = auStack_2b0;
  FUN_1072d488c(puVar6,unaff_x19);
  puStack_98 = (undefined8 *)0x0;
  func_0x00010731cf8c();
  *puVar6 = &PTR_SUB_1109a0628;
  puVar6[2] = uStack_2b8;
  puVar6[1] = uStack_2c0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  FUN_1072d488c(puVar6 + 3,auStack_2b0);
  puStack_98 = puVar6;
  func_0x00010731874c(auStack_318,*(undefined8 *)(puVar4 + 0x20),*(undefined8 *)(puVar4 + 0x28));
  FUN_10724cbe8(auStack_308,puVar9);
  pppuVar7 = appuStack_90;
  func_0x000107317d20(pppuVar7,auStack_318);
  pppuStack_2d0 = (undefined ***)0x0;
  func_0x00010731cac0();
  *pppuVar7 = &PTR_SUB_11099fe68;
  func_0x000107317d20(pppuVar7 + 1,appuStack_90);
  pppuStack_2d0 = pppuVar7;
  FUN_10731591c(appuStack_90);
  uStack_2c8 = 1;
  func_0x00010731ce30();
  appuStack_90[0] = &PTR_FUN_11099fee8;
  uStack_328 = 0;
  uStack_320 = 0;
  pppuStack_78 = appuStack_90;
  func_0x0001072aefa0(&uStack_328);
  uStack_70 = 1;
  (**(code **)(*plVar11 + 0x10))
            (plVar11,auStack_b0,auStack_2e8,appuStack_90,puVar1,uVar2,uVar12 | (uVar10 | uVar13));
  func_0x00010731cf74();
  func_0x00010731cb0c();
  func_0x00010731cfb4();
  FUN_10731591c(auStack_318);
  func_0x00010730ea24(auStack_b0);
  func_0x00010731593c(&uStack_2c0);
  *extraout_x8_00 = 0;
  func_0x00010054c318(uStack_60);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010731cf74();
    func_0x00010731cb0c();
    func_0x00010731cfb4();
    FUN_10731591c(auStack_318);
    func_0x00010730ea24(auStack_b0);
    do {
      func_0x00010731593c(&uStack_2c0);
      func_0x00010731c938();
      func_0x0001072aefa0(puVar6 + 1);
      __ZdlPv(puVar6);
    } while( true );
  }
  return;
}



/* Entry: 1073156a0; end: 10731591b;  */

void FUN_1073156a0(long param_1,char *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  char *pcVar7;
  uint extraout_w8;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [24];
  undefined ***pppuStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 auStack_260 [64];
  undefined1 auStack_60 [24];
  undefined8 *puStack_48;
  undefined **appuStack_40 [3];
  undefined ***pppuStack_28;
  undefined1 uStack_20;
  undefined8 uStack_10;
  
  func_0x00010731d120();
  lVar4 = param_1;
  pcVar7 = param_2;
  func_0x00010054bdbc();
  puVar1 = &UNK_10f40a1c4;
  if (*pcVar7 != '\x03') {
    puVar1 = &UNK_10f40a1cf;
  }
  uVar2 = 10;
  if (*pcVar7 != '\x03') {
    uVar2 = 0xe;
  }
  uVar3 = *(char *)(lVar4 + 0x53) == '\x01';
  uStack_10 = extraout_x8_00;
  if ((bool)uVar3) {
    do {
      func_0x00010731d03c();
    } while (extraout_w11 != 0);
    uVar8 = extraout_w8 & 0xffffff00;
    uVar11 = extraout_w8 & 0xff;
    uVar10 = 0x100000000;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  func_0x00010731874c(&uStack_270,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar5 = auStack_260;
  FUN_1072d488c(puVar5,param_2);
  puStack_48 = (undefined8 *)0x0;
  func_0x00010731cf8c();
  *puVar5 = &PTR_SUB_1109a0628;
  puVar5[2] = uStack_268;
  puVar5[1] = uStack_270;
  uStack_270 = 0;
  uStack_268 = 0;
  FUN_1072d488c(puVar5 + 3,auStack_260);
  puStack_48 = puVar5;
  func_0x00010731874c(auStack_2c8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_10724cbe8(auStack_2b8,param_3);
  pppuVar6 = appuStack_40;
  func_0x000107317d20(pppuVar6,auStack_2c8);
  pppuStack_280 = (undefined ***)0x0;
  func_0x00010731cac0();
  *pppuVar6 = &PTR_SUB_11099fe68;
  func_0x000107317d20(pppuVar6 + 1,appuStack_40);
  pppuStack_280 = pppuVar6;
  FUN_10731591c(appuStack_40);
  uStack_278 = 1;
  func_0x00010731ce30();
  appuStack_40[0] = &PTR_FUN_11099fee8;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  pppuStack_28 = appuStack_40;
  func_0x0001072aefa0(&uStack_2d8);
  uStack_20 = 1;
  (**(code **)(*plVar9 + 0x10))
            (plVar9,auStack_60,auStack_298,appuStack_40,puVar1,uVar2,uVar10 | (uVar8 | uVar11));
  func_0x00010731cf74();
  func_0x00010731cb0c();
  func_0x00010731cfb4();
  FUN_10731591c(auStack_2c8);
  func_0x00010730ea24(auStack_60);
  func_0x00010731593c(&uStack_270);
  *extraout_x8 = 0;
  func_0x00010054c318(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010731cf74();
    func_0x00010731cb0c();
    func_0x00010731cfb4();
    FUN_10731591c(auStack_2c8);
    func_0x00010730ea24(auStack_60);
    do {
      func_0x00010731593c(&uStack_270);
      func_0x00010731c938();
      func_0x0001072aefa0(puVar5 + 1);
      __ZdlPv(puVar5);
    } while( true );
  }
  return;
}



/* Entry: 10731591c; end: 10731595b;  */

long FUN_10731591c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010731cb48();
  func_0x0001006393ec();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10731595c; end: 107315ba7;  */

void FUN_10731595c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  uint extraout_w8;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_140 [3];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [24];
  undefined ***pppuStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  
  func_0x00010731d3a4();
  lVar2 = param_1;
  func_0x00010054bdbc();
  uVar1 = *(char *)(lVar2 + 0x53) == '\x01';
  uStack_70 = extraout_x8_00;
  if ((bool)uVar1) {
    do {
      func_0x00010731d03c();
    } while (extraout_w11 != 0);
    uVar8 = extraout_w8 & 0xffffff00;
    uVar7 = extraout_w8 & 0xff;
    uVar6 = 0x100000000;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
  }
  plVar5 = *(long **)(param_1 + 0x40);
  func_0x00010731ce30();
  puVar3 = auStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  puStack_a8 = (undefined8 *)0x0;
  func_0x00010731d1e8();
  *puVar3 = &PTR_FUN_1109a06a8;
  puVar3[2] = uStack_148;
  puVar3[1] = uStack_150;
  uStack_150 = 0;
  uStack_148 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 3,auStack_140);
  puStack_a8 = puVar3;
  func_0x00010731874c(auStack_118,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_10724cbe8(auStack_108);
  pppuVar4 = &ppuStack_a0;
  FUN_107317f68(pppuVar4,auStack_118);
  pppuStack_d0 = (undefined ***)0x0;
  func_0x00010731cac0();
  *pppuVar4 = &PTR_SUB_11099ff68;
  FUN_107317f68(pppuVar4 + 1,&ppuStack_a0);
  pppuStack_d0 = pppuVar4;
  FUN_107315ba8(&ppuStack_a0);
  uStack_c8 = 1;
  func_0x00010731874c(&uStack_160,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uStack_90 = uStack_158;
  uStack_98 = uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  ppuStack_a0 = &PTR_FUN_11099ffe8;
  uStack_128 = 0;
  uStack_120 = 0;
  pppuStack_88 = &ppuStack_a0;
  func_0x00010731d26c();
  uStack_80 = 1;
  (**(code **)(*plVar5 + 0x10))
            (plVar5,auStack_c0,auStack_e8,&ppuStack_a0,&UNK_10f40a1cf,0xe,uVar6 | (uVar8 | uVar7));
  func_0x00010731cf74();
  func_0x00010731cf28();
  FUN_10730b1b0(auStack_e8);
  FUN_107315ba8(auStack_118);
  func_0x00010730ea24(auStack_c0);
  func_0x000107315bc8(&uStack_150);
  *extraout_x8 = 0;
  func_0x00010054c318(uStack_70);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010731cf74();
    func_0x00010731cf28();
    FUN_10730b1b0(auStack_e8);
    FUN_107315ba8(auStack_118);
    func_0x00010730ea24(auStack_c0);
    do {
      func_0x000107315bc8(&uStack_150);
      func_0x00010731c938();
      func_0x0001072aefa0(puVar3 + 1);
      __ZdlPv(&ppuStack_a0);
    } while( true );
  }
  return;
}



/* Entry: 107315ba8; end: 107315be7;  */

long FUN_107315ba8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010731cb48();
  func_0x0001006393ec();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107315be8; end: 107315bef;  */

void FUN_107315be8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined **ppuStack_68;
  int iStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x40) + 0x38);
  FUN_107312488();
  iStack_60 = *(int *)(lVar5 + 8);
  uVar4 = iStack_60 == 2;
  if ((bool)uVar4) {
    func_0x000107314798();
    func_0x00010731480c();
    if (!(bool)uVar4) {
      piVar1 = (int *)(*(long *)(extraout_x8 + -8) + 0x24);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000107314778();
    lVar6 = *(long *)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x48) = 0;
    if (lVar6 != 0) {
      func_0x0001073147d0();
    }
    uVar7 = 0x1b0;
    __Znwm();
    uStack_58 = 0x1010001;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 2;
    uStack_40 = 0x100;
    uStack_3e = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0x101;
    uStack_32 = 1;
    uStack_44 = uStack_58;
    FUN_1073141e4();
    lVar6 = *(long *)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x48) = uVar7;
    if (lVar6 != 0) {
      func_0x0001073147d0();
    }
    func_0x0001073147a4(*(undefined8 *)(lVar5 + 0x30),&DAT_10f3f415b,5,&UNK_10de3a958);
    *param_1 = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_11099f6f8;
    FUN_10730f6d0(param_1,&ppuStack_68);
    __ZNSt9exceptionD2Ev(&ppuStack_68);
  }
  return;
}



/* Entry: 107315bf0; end: 107315d5f;  */

void FUN_107315bf0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong *extraout_x8_03;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_148 [8];
  long lStack_140;
  byte bStack_138;
  uint uStack_137;
  uint3 uStack_133;
  byte bStack_130;
  byte bStack_128;
  long alStack_c0 [15];
  undefined8 uStack_48;
  
  plVar3 = param_1;
  func_0x00010054bdbc();
  uStack_48 = extraout_x8;
  func_0x00010731c7d4();
  plVar4 = plVar3;
  if (*plVar3 != 0) {
    if (param_2 != (long *)0x0) {
      in_ZR = (char)param_1[0x12] == '\x01';
      if ((bool)in_ZR) {
        plVar4 = param_1 + 0x11;
        func_0x00010088b0cc();
        *param_2 = *plVar4;
      }
      else {
        plVar4 = alStack_c0;
        func_0x00010054b908(plVar4,*(undefined8 *)(*plVar3 + 8),&UNK_10f40a161,0x10);
        func_0x00010731cd40();
        func_0x00010731d27c();
        func_0x00010731d0ac();
        *param_2 = extraout_x8_01;
        param_1[0x11] = extraout_x8_01;
        *(undefined1 *)(param_1 + 0x12) = 1;
        func_0x00010731cf84();
        func_0x00010731cfe8();
      }
    }
    if (param_3 != (undefined8 *)0x0) {
      plVar4 = alStack_c0;
      func_0x00010054b908(plVar4,*(undefined8 *)(*plVar3 + 8),&UNK_10f40a172,0x11);
      func_0x00010731cd40();
      func_0x00010731d27c();
      func_0x00010731d0ac();
      *param_3 = extraout_x8_00;
      func_0x00010731cf84();
      func_0x00010731cfe8();
    }
    if (param_4 != (undefined8 *)0x0) {
      plVar4 = alStack_c0;
      func_0x00010054b908(plVar4,*(undefined8 *)(*plVar3 + 8),&UNK_10f40a184,0x15);
      func_0x00010731cd40();
      func_0x00010731d27c();
      func_0x00010731d0ac();
      *param_4 = extraout_x8_02;
      func_0x00010731cf84();
      func_0x00010731cfe8();
    }
  }
  func_0x00010054c318(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010731cb3c();
    func_0x00010054cb18();
    func_0x00010731cfe8();
    func_0x00010731c938();
    func_0x00010731c7d4();
    if (*plVar4 == 0) {
      *extraout_x8_03 = 0;
    }
    else {
      func_0x0001073a69ec(auStack_148,*(long *)(*plVar4 + 0x10) + 600);
      lVar2 = lStack_140;
      uVar5 = (uint)bStack_128;
      if (uVar5 == 0) {
        uVar7 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)bStack_138;
        bStack_128 = 0;
        param_3 = (undefined8 *)(ulong)bStack_130;
        uVar7 = (ulong)uStack_137 << 8 | (ulong)uStack_133 << 0x28;
      }
      lStack_140 = 0;
      uVar1 = 0;
      if (lVar2 != 0) {
        uVar1 = uVar5;
      }
      FUN_10731a030(auStack_148);
      uVar7 = uVar7 | uVar6;
      if ((uVar1 & (uint)param_3) == 0) {
        uVar7 = 0;
      }
      *extraout_x8_03 = uVar7;
    }
    *(undefined4 *)(extraout_x8_03 + 1) = 1;
    return;
  }
  return;
}



/* Entry: 107315d60; end: 107315e3b;  */

void FUN_107315d60(ulong *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  byte unaff_w21;
  ulong uVar5;
  undefined1 auStack_68 [8];
  long lStack_60;
  byte bStack_58;
  uint uStack_57;
  uint3 uStack_53;
  byte bStack_50;
  byte bStack_48;
  
  func_0x00010731c7d4();
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x0001073a69ec(auStack_68,*(long *)(*param_2 + 0x10) + 600);
    bVar3 = bStack_48;
    lVar2 = lStack_60;
    if (bStack_48 == 0) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)bStack_58;
      bStack_48 = 0;
      uVar5 = (ulong)uStack_57 << 8 | (ulong)uStack_53 << 0x28;
      unaff_w21 = bStack_50;
    }
    lStack_60 = 0;
    bVar1 = 0;
    if (lVar2 != 0) {
      bVar1 = bVar3;
    }
    FUN_10731a030(auStack_68);
    uVar5 = uVar5 | uVar4;
    if ((bVar1 & unaff_w21) == 0) {
      uVar5 = 0;
    }
    *param_1 = uVar5;
  }
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 107315e3c; end: 107315f2f;  */

undefined1  [16] FUN_107315e3c(long *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte unaff_w22;
  undefined1 auVar8 [16];
  undefined1 auStack_68 [8];
  long lStack_60;
  byte bStack_58;
  uint uStack_57;
  uint3 uStack_53;
  byte bStack_50;
  char cStack_48;
  
  func_0x00010731c7d4();
  if (*param_1 == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    func_0x0001073a69a4(auStack_68,*(undefined8 *)(*param_1 + 0x10),(long)param_2);
    cVar2 = cStack_48;
    lVar1 = lStack_60;
    if (cStack_48 == '\0') {
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)bStack_58;
      cStack_48 = '\0';
      uVar7 = (ulong)uStack_57 << 8 | (ulong)uStack_53 << 0x28;
      unaff_w22 = bStack_50;
    }
    lStack_60 = 0;
    FUN_10731a054(auStack_68);
    uVar3 = 0;
    if ((cVar2 == '\0') || (lVar1 == 0)) {
      uVar4 = 0;
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      if ((unaff_w22 & 1) != 0) {
        uVar7 = uVar7 | uVar6;
        FUN_107315f30(uVar7);
        uVar5 = uVar7 & 0xffffffffffffff00;
        uVar4 = uVar7 & 0xff;
        uVar3 = 1;
      }
    }
  }
  auVar8._0_8_ = uVar5 | uVar4;
  auVar8._8_8_ = uVar3;
  return auVar8;
}



/* Entry: 107315f30; end: 107315f4f;  */

long FUN_107315f30(long param_1)

{
  __ZNSt3__16chrono12system_clock11from_time_tEl();
  return param_1 / 1000000;
}



/* Entry: 107315f50; end: 107315fcf;  */

long FUN_107315f50(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010731c7d4();
  if (*param_1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*param_1 + 0x10);
    func_0x0001073a7014(uVar2,*param_2);
    iVar1 = (int)uVar2;
    func_0x00010731cc74();
    lVar3 = (long)iVar1;
  }
  return lVar3;
}



/* Entry: 107315fd0; end: 10731606b;  */

void FUN_107315fd0(long *param_1,undefined8 *param_2,byte *param_3,long param_4,undefined8 *param_5,
                  undefined1 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 in_ZR;
  char cVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined8 uVar22;
  uint uVar23;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_398 [24];
  undefined8 uStack_380;
  long *plStack_378;
  byte *pbStack_370;
  undefined1 *puStack_368;
  long lStack_360;
  ulong *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  long lStack_340;
  byte *pbStack_338;
  long *plStack_330;
  undefined1 *puStack_328;
  ulong uStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  uint uStack_304;
  undefined8 uStack_300;
  ulong auStack_2f8 [3];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [24];
  undefined1 uStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [56];
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  byte *pbStack_210;
  undefined1 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  ulong *puStack_1d8;
  ulong uStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  uint uStack_1b4;
  undefined8 uStack_1b0;
  byte abStack_1a8 [24];
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar13 = param_2;
  func_0x00010054bdbc();
  uStack_48 = extraout_x8;
  func_0x00010731c7d4();
  pbVar15 = param_3;
  lVar18 = param_4;
  if (*param_1 != 0) {
    unaff_x23 = *(long **)(*param_1 + 0x10);
    pbVar15 = *(byte **)(param_4 + 0x40);
    lVar18 = *(long *)(param_4 + 0x48);
    param_5 = (undefined8 *)(ulong)*(byte *)(param_4 + 0x1a);
    FUN_1072a5348(auStack_80,param_3);
    func_0x00010731d2d4();
    param_6 = auStack_98;
    param_1 = unaff_x23;
    func_0x0001073a6b10();
    func_0x00010731c9bc();
    func_0x00010731cfe0();
    puVar13 = param_2;
  }
  func_0x00010054c318(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731c8fc();
  func_0x00010731cfe0();
  func_0x00010731c938();
  pcStack_a8 = FUN_10731606c;
  pbVar16 = pbVar15;
  lVar19 = lVar18;
  puVar21 = param_6;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010054bdbc();
  uStack_110 = extraout_x8_00;
  func_0x00010731c7d4();
  if (*param_1 == 0) {
    lVar10 = 0;
  }
  else {
    uStack_1b0 = *(undefined8 *)(*param_1 + 0x10);
    uStack_1b4 = (uint)*pbVar15;
    lStack_1c0 = *(long *)(lVar18 + 0x40);
    unaff_x25 = *(undefined8 **)(lVar18 + 0x48);
    unaff_x26 = (undefined1 *)(ulong)*(byte *)(lVar18 + 0x1a);
    unaff_x27 = *(undefined8 *)(lVar18 + 0x30);
    unaff_x28 = *(undefined8 *)(lVar18 + 0x38);
    unaff_x24 = *puVar13;
    bVar4 = *(byte *)(lVar18 + 0x18);
    unaff_x23 = (long *)(ulong)bVar4;
    uVar23 = (uint)bVar4;
    cVar7 = SBORROW4(uVar23,1);
    cVar8 = (int)(uVar23 - 1) < 0;
    in_ZR = uVar23 == 1;
    if ((bool)in_ZR) {
      uStack_158 = 0;
      uStack_170 = uStack_170 & 0xffffffffffffff00;
    }
    else {
      func_0x00010731d0fc();
      uVar2 = extraout_x11;
      if (cVar8 == cVar7) {
        uVar2 = extraout_x8_01;
      }
      func_0x00010731cc10(uVar2,&uStack_190);
      uStack_168 = uStack_188;
      uStack_170 = uStack_190;
      uStack_160 = uStack_180;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_190 = 0;
      uStack_158 = 1;
    }
    FUN_1072a5348(auStack_148,pbVar15);
    pbVar15 = abStack_1a8;
    FUN_10724ef84(abStack_1a8,auStack_148);
    uStack_1d0 = (ulong)param_6 & 0xffffffff;
    puStack_1d8 = &uStack_170;
    pbVar16 = (byte *)(lVar18 + 0x50);
    puVar13 = (undefined8 *)(ulong)uStack_1b4;
    lVar19 = lStack_1c0;
    param_5 = unaff_x25;
    puVar21 = unaff_x26;
    uStack_1e0 = unaff_x24;
    pbStack_1c8 = pbVar15;
    func_0x0001073a6bac(uStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_1a8);
    func_0x000104c2f714(auStack_148);
    func_0x0001002a2294(&uStack_170);
    if ((bVar4 & 1) == 0) {
      func_0x000100100fec(&uStack_190);
    }
    iVar9 = (int)*(undefined8 *)(*param_1 + 8);
    func_0x00010bcc564c();
    lVar10 = (long)iVar9;
  }
  func_0x00010054c318(uStack_110);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_1a8);
    func_0x000104c2f714(auStack_148);
    puVar11 = &uStack_170;
    func_0x0001002a2294();
    if (((ulong)unaff_x23 & 1) == 0) {
      puVar11 = &uStack_190;
      func_0x000100100fec();
    }
    func_0x00010731c938();
    pcStack_1e8 = FUN_107316214;
    puVar14 = puVar13;
    pbVar17 = pbVar16;
    lVar20 = lVar19;
    uStack_240 = unaff_x28;
    uStack_238 = unaff_x27;
    puStack_230 = unaff_x26;
    puStack_228 = unaff_x25;
    uStack_220 = unaff_x24;
    plStack_218 = unaff_x23;
    pbStack_210 = pbVar15;
    puStack_208 = param_6;
    lStack_200 = lVar18;
    lStack_1f8 = lVar10;
    ppuStack_1f0 = &puStack_b0;
    func_0x00010054bdbc();
    uStack_250 = extraout_x8_02;
    func_0x00010731c7d4();
    if (*puVar11 != 0) {
      uStack_300 = *(undefined8 *)(*puVar11 + 0x10);
      FUN_10724ef84(auStack_2a0,pbVar16 + 8);
      uStack_304 = (uint)*pbVar16;
      uStack_310 = *(undefined8 *)(lVar19 + 0x40);
      unaff_x24 = *(undefined8 *)(lVar19 + 0x48);
      uVar5 = *(undefined1 *)(lVar19 + 0x1a);
      lVar18 = *(long *)(lVar19 + 0x30);
      pbVar15 = *(byte **)(lVar19 + 0x38);
      unaff_x23 = (long *)*puVar13;
      bVar4 = *(byte *)(lVar19 + 0x18);
      if (bVar4 == 1) {
        uVar23 = 0;
        auStack_2c0[0] = 0;
        uStack_2a8 = 0;
        in_ZR = 1;
      }
      else {
        bVar6 = *(byte *)((long)param_5 + 0x17);
        in_ZR = bVar6 == 0;
        uVar1 = param_5[1];
        puVar13 = (undefined8 *)*param_5;
        if (-1 < (char)bVar6) {
          uVar1 = (ulong)bVar6;
          puVar13 = param_5;
        }
        func_0x00010731cc10(uVar1,auStack_2e0,puVar13);
        func_0x00010731cdc8();
        uVar23 = *(byte *)(lVar19 + 0x18) ^ 1;
      }
      FUN_1072a5348(auStack_288,pbVar16);
      FUN_10724ef84(auStack_2f8,auStack_288);
      uStack_320 = (ulong)((uint)puVar21 & uVar23);
      puStack_328 = auStack_2c0;
      puVar14 = auStack_2a0;
      lVar20 = lVar19 + 0x50;
      pbVar17 = (byte *)(ulong)uStack_304;
      lStack_340 = lVar18;
      pbStack_338 = pbVar15;
      plStack_330 = unaff_x23;
      plStack_318 = (long *)auStack_2f8;
      func_0x0001073a6c60(uStack_300,puVar14,pbVar17,lVar20,uStack_310,unaff_x24,uVar5);
      puVar11 = auStack_2f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010731d020();
      func_0x00010731cff8();
      if ((bVar4 & 1) == 0) {
        func_0x00010731d028();
      }
      func_0x00010731cbbc();
    }
    func_0x00010054c318(uStack_250);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar12 = puVar11;
      func_0x00010731cbbc();
      func_0x00010731c938();
      pcStack_348 = FUN_107316394;
      uStack_380 = unaff_x24;
      plStack_378 = unaff_x23;
      pbStack_370 = pbVar15;
      puStack_368 = puVar21;
      lStack_360 = lVar18;
      puStack_358 = puVar11;
      ppuStack_350 = &ppuStack_1f0;
      func_0x00010731c7d4();
      if (*puVar12 != 0) {
        uVar22 = *(undefined8 *)(*puVar12 + 0x10);
        uVar2 = *(undefined8 *)(lVar20 + 0x40);
        uVar3 = *(undefined8 *)(lVar20 + 0x48);
        uVar5 = *(undefined1 *)(lVar20 + 0x1a);
        FUN_10724ef84(auStack_398,pbVar17);
        func_0x0001073a6dc4(uVar22,puVar14,uVar2,uVar3,uVar5,auStack_398,pbVar17[0x38],
                            (long)*(int *)(pbVar17 + 0x3c),(long)*(int *)(pbVar17 + 0x40),
                            (long)(char)pbVar17[0x44]);
        func_0x00010731cfd8();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10731606c; end: 107316213;  */

void FUN_10731606c(long *param_1,ulong *param_2,byte *param_3,long param_4,undefined8 *param_5,
                  ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined1 in_ZR;
  char cVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x11;
  undefined8 uVar20;
  uint uVar21;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 auStack_2f8 [24];
  ulong uStack_2e0;
  ulong uStack_2d8;
  byte *pbStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  ulong *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  long lStack_2a0;
  byte *pbStack_298;
  ulong uStack_290;
  undefined1 *puStack_288;
  ulong uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  uint uStack_264;
  undefined8 uStack_260;
  ulong auStack_258 [3];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  ulong auStack_200 [3];
  undefined1 auStack_1e8 [56];
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  byte *pbStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  byte *pbStack_128;
  long lStack_120;
  uint uStack_114;
  undefined8 uStack_110;
  byte abStack_108 [24];
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  pbVar15 = param_3;
  lVar17 = param_4;
  uVar19 = param_6;
  func_0x00010054bdbc();
  uStack_70 = extraout_x8;
  func_0x00010731c7d4();
  if (*param_1 == 0) {
    lVar11 = 0;
  }
  else {
    uStack_110 = *(undefined8 *)(*param_1 + 0x10);
    uStack_114 = (uint)*param_3;
    lStack_120 = *(long *)(param_4 + 0x40);
    unaff_x25 = *(undefined8 **)(param_4 + 0x48);
    unaff_x26 = (ulong)*(byte *)(param_4 + 0x1a);
    unaff_x27 = *(undefined8 *)(param_4 + 0x30);
    unaff_x28 = *(undefined8 *)(param_4 + 0x38);
    unaff_x24 = *param_2;
    bVar4 = *(byte *)(param_4 + 0x18);
    unaff_x23 = (ulong)bVar4;
    uVar21 = (uint)bVar4;
    cVar8 = SBORROW4(uVar21,1);
    cVar9 = (int)(uVar21 - 1) < 0;
    in_ZR = uVar21 == 1;
    if ((bool)in_ZR) {
      uStack_b8 = 0;
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    }
    else {
      func_0x00010731d0fc();
      uVar2 = extraout_x11;
      if (cVar9 == cVar8) {
        uVar2 = extraout_x8_00;
      }
      func_0x00010731cc10(uVar2,&uStack_f0);
      uStack_c8 = uStack_e8;
      uStack_d0 = uStack_f0;
      uStack_c0 = uStack_e0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f0 = 0;
      uStack_b8 = 1;
    }
    FUN_1072a5348(auStack_a8,param_3);
    param_3 = abStack_108;
    FUN_10724ef84(abStack_108,auStack_a8);
    uStack_130 = param_6 & 0xffffffff;
    puStack_138 = &uStack_d0;
    pbVar15 = (byte *)(param_4 + 0x50);
    param_2 = (ulong *)(ulong)uStack_114;
    lVar17 = lStack_120;
    param_5 = unaff_x25;
    uVar19 = unaff_x26;
    uStack_140 = unaff_x24;
    pbStack_128 = param_3;
    func_0x0001073a6bac(uStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_108);
    func_0x000104c2f714(auStack_a8);
    func_0x0001002a2294(&uStack_d0);
    if ((bVar4 & 1) == 0) {
      func_0x000100100fec(&uStack_f0);
    }
    iVar10 = (int)*(undefined8 *)(*param_1 + 8);
    func_0x00010bcc564c();
    lVar11 = (long)iVar10;
  }
  func_0x00010054c318(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(abStack_108);
  func_0x000104c2f714(auStack_a8);
  puVar12 = &uStack_d0;
  func_0x0001002a2294();
  if ((unaff_x23 & 1) == 0) {
    puVar12 = &uStack_f0;
    func_0x000100100fec();
  }
  func_0x00010731c938();
  pcStack_148 = FUN_107316214;
  puVar14 = param_2;
  pbVar16 = pbVar15;
  lVar18 = lVar17;
  uStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  pbStack_170 = param_3;
  uStack_168 = param_6;
  lStack_160 = param_4;
  lStack_158 = lVar11;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010054bdbc();
  uStack_1b0 = extraout_x8_01;
  func_0x00010731c7d4();
  if (*puVar12 != 0) {
    uStack_260 = *(undefined8 *)(*puVar12 + 0x10);
    FUN_10724ef84(auStack_200,pbVar15 + 8);
    uStack_264 = (uint)*pbVar15;
    uStack_270 = *(undefined8 *)(lVar17 + 0x40);
    unaff_x24 = *(ulong *)(lVar17 + 0x48);
    uVar5 = *(undefined1 *)(lVar17 + 0x1a);
    param_4 = *(long *)(lVar17 + 0x30);
    param_3 = *(byte **)(lVar17 + 0x38);
    unaff_x23 = *param_2;
    bVar4 = *(byte *)(lVar17 + 0x18);
    if (bVar4 == 1) {
      uVar21 = 0;
      auStack_220[0] = 0;
      uStack_208 = 0;
      in_ZR = 1;
    }
    else {
      bVar6 = *(byte *)((long)param_5 + 0x17);
      in_ZR = bVar6 == 0;
      uVar1 = param_5[1];
      puVar7 = (undefined8 *)*param_5;
      if (-1 < (char)bVar6) {
        uVar1 = (ulong)bVar6;
        puVar7 = param_5;
      }
      func_0x00010731cc10(uVar1,auStack_240,puVar7);
      func_0x00010731cdc8();
      uVar21 = *(byte *)(lVar17 + 0x18) ^ 1;
    }
    FUN_1072a5348(auStack_1e8,pbVar15);
    FUN_10724ef84(auStack_258,auStack_1e8);
    uStack_280 = (ulong)((uint)uVar19 & uVar21);
    puStack_288 = auStack_220;
    puVar14 = auStack_200;
    lVar18 = lVar17 + 0x50;
    pbVar16 = (byte *)(ulong)uStack_264;
    lStack_2a0 = param_4;
    pbStack_298 = param_3;
    uStack_290 = unaff_x23;
    plStack_278 = (long *)auStack_258;
    func_0x0001073a6c60(uStack_260,puVar14,pbVar16,lVar18,uStack_270,unaff_x24,uVar5);
    puVar12 = auStack_258;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010731d020();
    func_0x00010731cff8();
    if ((bVar4 & 1) == 0) {
      func_0x00010731d028();
    }
    func_0x00010731cbbc();
  }
  func_0x00010054c318(uStack_1b0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar13 = puVar12;
    func_0x00010731cbbc();
    func_0x00010731c938();
    pcStack_2a8 = FUN_107316394;
    uStack_2e0 = unaff_x24;
    uStack_2d8 = unaff_x23;
    pbStack_2d0 = param_3;
    uStack_2c8 = uVar19;
    lStack_2c0 = param_4;
    puStack_2b8 = puVar12;
    ppuStack_2b0 = &puStack_150;
    func_0x00010731c7d4();
    if (*puVar13 != 0) {
      uVar20 = *(undefined8 *)(*puVar13 + 0x10);
      uVar2 = *(undefined8 *)(lVar18 + 0x40);
      uVar3 = *(undefined8 *)(lVar18 + 0x48);
      uVar5 = *(undefined1 *)(lVar18 + 0x1a);
      FUN_10724ef84(auStack_2f8,pbVar16);
      func_0x0001073a6dc4(uVar20,puVar14,uVar2,uVar3,uVar5,auStack_2f8,pbVar16[0x38],
                          (long)*(int *)(pbVar16 + 0x3c),(long)*(int *)(pbVar16 + 0x40),
                          (long)(char)pbVar16[0x44]);
      func_0x00010731cfd8();
    }
    return;
  }
  return;
}



/* Entry: 107316214; end: 107316393;  */

void FUN_107316214(long *param_1,undefined8 *param_2,byte *param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 in_ZR;
  long *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  uint uVar12;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  ulong uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  long alStack_118 [3];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined8 auStack_c0 [3];
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  puVar8 = param_2;
  pbVar9 = param_3;
  lVar10 = param_4;
  func_0x00010054bdbc();
  uStack_70 = extraout_x8;
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    uStack_120 = *(undefined8 *)(*param_1 + 0x10);
    FUN_10724ef84(auStack_c0,param_3 + 8);
    uStack_124 = (uint)*param_3;
    uStack_130 = *(undefined8 *)(param_4 + 0x40);
    unaff_x24 = *(undefined8 *)(param_4 + 0x48);
    uVar4 = *(undefined1 *)(param_4 + 0x1a);
    unaff_x20 = *(undefined8 *)(param_4 + 0x30);
    unaff_x22 = *(undefined8 *)(param_4 + 0x38);
    unaff_x23 = *param_2;
    bVar5 = *(byte *)(param_4 + 0x18);
    if (bVar5 == 1) {
      uVar12 = 0;
      auStack_e0[0] = 0;
      uStack_c8 = 0;
      in_ZR = 1;
    }
    else {
      bVar6 = *(byte *)((long)param_5 + 0x17);
      in_ZR = bVar6 == 0;
      uVar1 = param_5[1];
      puVar8 = (undefined8 *)*param_5;
      if (-1 < (char)bVar6) {
        uVar1 = (ulong)bVar6;
        puVar8 = param_5;
      }
      func_0x00010731cc10(uVar1,auStack_100,puVar8);
      func_0x00010731cdc8();
      uVar12 = *(byte *)(param_4 + 0x18) ^ 1;
    }
    FUN_1072a5348(auStack_a8,param_3);
    FUN_10724ef84(alStack_118,auStack_a8);
    uStack_140 = (ulong)((uint)param_6 & uVar12);
    puStack_148 = auStack_e0;
    puVar8 = auStack_c0;
    lVar10 = param_4 + 0x50;
    pbVar9 = (byte *)(ulong)uStack_124;
    uStack_160 = unaff_x20;
    uStack_158 = unaff_x22;
    uStack_150 = unaff_x23;
    plStack_138 = alStack_118;
    func_0x0001073a6c60(uStack_120,puVar8,pbVar9,lVar10,uStack_130,unaff_x24,uVar4);
    param_1 = alStack_118;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010731d020();
    func_0x00010731cff8();
    if ((bVar5 & 1) == 0) {
      func_0x00010731d028();
    }
    func_0x00010731cbbc();
  }
  func_0x00010054c318(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar7 = param_1;
    func_0x00010731cbbc();
    func_0x00010731c938();
    pcStack_168 = FUN_107316394;
    uStack_1a0 = unaff_x24;
    uStack_198 = unaff_x23;
    uStack_190 = unaff_x22;
    uStack_188 = param_6;
    uStack_180 = unaff_x20;
    plStack_178 = param_1;
    puStack_170 = &stack0xfffffffffffffff0;
    func_0x00010731c7d4();
    if (*plVar7 != 0) {
      uVar11 = *(undefined8 *)(*plVar7 + 0x10);
      uVar2 = *(undefined8 *)(lVar10 + 0x40);
      uVar3 = *(undefined8 *)(lVar10 + 0x48);
      uVar4 = *(undefined1 *)(lVar10 + 0x1a);
      FUN_10724ef84(auStack_1b8,pbVar9);
      func_0x0001073a6dc4(uVar11,puVar8,uVar2,uVar3,uVar4,auStack_1b8,pbVar9[0x38],
                          (long)*(int *)(pbVar9 + 0x3c),(long)*(int *)(pbVar9 + 0x40),
                          (long)(char)pbVar9[0x44]);
      func_0x00010731cfd8();
    }
    return;
  }
  return;
}



/* Entry: 107316394; end: 10731641b;  */

void FUN_107316394(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    uVar4 = *(undefined8 *)(*param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_4 + 0x40);
    uVar2 = *(undefined8 *)(param_4 + 0x48);
    uVar3 = *(undefined1 *)(param_4 + 0x1a);
    FUN_10724ef84(auStack_58,param_3);
    func_0x0001073a6dc4(uVar4,param_2,uVar1,uVar2,uVar3,auStack_58,*(undefined1 *)(param_3 + 0x38),
                        (long)*(int *)(param_3 + 0x3c),(long)*(int *)(param_3 + 0x40),
                        (long)*(char *)(param_3 + 0x44));
    func_0x00010731cfd8();
  }
  return;
}



/* Entry: 10731641c; end: 10731657f;  */

long FUN_10731641c(long *param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5,
                  byte param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 extraout_x8;
  undefined8 uVar13;
  undefined8 extraout_x11;
  uint uVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined1 auStack_c8 [24];
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  func_0x00010731c7d4();
  if (*param_1 == 0) {
    lVar12 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_4 + 0x30);
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    uVar5 = *(undefined8 *)(param_4 + 0x48);
    uVar6 = *(undefined1 *)(param_4 + 0x1a);
    uVar16 = *param_2;
    bVar7 = *(byte *)(param_4 + 0x18);
    uVar14 = (uint)bVar7;
    cVar8 = SBORROW4(uVar14,1);
    cVar9 = (int)(uVar14 - 1) < 0;
    if (uVar14 == 1) {
      bVar15 = 0;
      uStack_78 = 0;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
    }
    else {
      func_0x00010731d0fc();
      uVar1 = extraout_x11;
      if (cVar9 == cVar8) {
        uVar1 = extraout_x8;
      }
      func_0x00010731cbd0(uVar1);
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      uStack_80 = uStack_a0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      bVar15 = *(byte *)(param_4 + 0x18) ^ 1;
      uStack_78 = 1;
    }
    FUN_10724ef84(auStack_c8,param_3);
    func_0x0001073a6e78(uVar13,uVar2,uVar4,param_4 + 0x50,uVar3,uVar5,uVar6,uVar16,&uStack_90,
                        param_6 & bVar15,auStack_c8,*(undefined1 *)(param_3 + 0x38),
                        (long)*(int *)(param_3 + 0x3c),(long)*(int *)(param_3 + 0x40),
                        (long)*(char *)(param_3 + 0x44));
    func_0x00010731cc00();
    puVar11 = &uStack_90;
    func_0x0001002a2294(puVar11);
    iVar10 = (int)puVar11;
    if ((bVar7 & 1) == 0) {
      func_0x00010731cbe4();
    }
    func_0x00010731cc74();
    lVar12 = (long)iVar10;
  }
  return lVar12;
}



/* Entry: 107316580; end: 1073166b7;  */

void FUN_107316580(long *param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5,
                  byte param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [32];
  
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    uVar15 = *(undefined8 *)(*param_1 + 0x10);
    FUN_10724ef84(auStack_80,param_3);
    uVar8 = *(undefined1 *)(param_3 + 0x38);
    iVar6 = *(int *)(param_3 + 0x3c);
    iVar7 = *(int *)(param_3 + 0x40);
    cVar11 = *(char *)(param_3 + 0x44);
    uVar2 = *(undefined8 *)(param_4 + 0x30);
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    uVar9 = *(undefined1 *)(param_4 + 0x1a);
    uVar3 = *(undefined8 *)(param_4 + 0x40);
    uVar5 = *(undefined8 *)(param_4 + 0x48);
    uVar17 = *param_2;
    bVar10 = *(byte *)(param_4 + 0x18);
    uVar16 = (uint)bVar10;
    cVar12 = SBORROW4(uVar16,1);
    cVar13 = (int)(uVar16 - 1) < 0;
    if (uVar16 == 1) {
      bVar14 = 0;
      auStack_a0[0] = 0;
      uStack_88 = 0;
    }
    else {
      func_0x00010731d144();
      uVar1 = extraout_x11;
      if (cVar13 == cVar12) {
        uVar1 = extraout_x8;
      }
      func_0x00010731cc10(uVar1,auStack_c0);
      func_0x00010731cdc8();
      bVar14 = *(byte *)(param_4 + 0x18) ^ 1;
    }
    func_0x0001073a6f5c(uVar15,auStack_80,uVar8,(long)iVar6,(long)iVar7,(long)cVar11,uVar2,uVar4,
                        uVar9,param_4 + 0x50,uVar3,uVar5,uVar17,auStack_a0,param_6 & bVar14);
    func_0x00010731cff8();
    if ((bVar10 & 1) == 0) {
      func_0x00010731d028();
    }
    func_0x00010731cf54();
  }
  return;
}



/* Entry: 1073166b8; end: 10731677f;  */

long FUN_1073166b8(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    lVar2 = 0;
    *(undefined1 *)(param_3 + 0x18) = 1;
  }
  else {
    if (param_2 == 0) {
      plVar1 = param_1;
      FUN_107316780();
      lVar2 = *plVar1;
      FUN_107316780();
      func_0x0001005f7044(auStack_58,lVar2,param_1[1]);
      func_0x00010731d230();
    }
    else {
      func_0x0001078a8e40(auStack_58,*param_1,param_1[1] - *param_1,0,0);
      func_0x00010731d230();
    }
    FUN_10724ac30(param_3 + 0x20,auStack_40);
    FUN_10724c894(auStack_40);
    func_0x00010731c9bc();
    lVar2 = (long)*(char *)(*(long *)(param_3 + 0x20) + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    }
  }
  return lVar2;
}



/* Entry: 107316780; end: 107316797;  */

long FUN_107316780(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010731cb48();
  func_0x000104c2f714();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107316798; end: 1073167d7;  */

long FUN_107316798(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010731cb48();
  func_0x000104c2f714();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073167d8; end: 107316bab;  */

void FUN_1073167d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [40];
  undefined1 auStack_368 [48];
  undefined1 auStack_338 [24];
  undefined8 uStack_320;
  char cStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [80];
  undefined1 auStack_290 [24];
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 auStack_260 [10];
  undefined1 auStack_210 [24];
  undefined8 *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [40];
  long lStack_1b0;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [72];
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [8];
  undefined8 uStack_e8;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x00010731d114();
  func_0x00010054bdbc();
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_58 = extraout_x8;
  func_0x00010731874c(&uStack_270,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar1 = auStack_260;
  FUN_1072d4a48();
  func_0x00010731cdec();
  *puVar1 = &PTR_SUB_1109a0970;
  puVar1[2] = uStack_268;
  puVar1[1] = uStack_270;
  uStack_270 = 0;
  uStack_268 = 0;
  FUN_1072d4a48(puVar1 + 3,auStack_260);
  puStack_1f8 = puVar1;
  func_0x00010731874c(&uStack_310,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010731cf9c(auStack_300);
  FUN_1072d4a48(auStack_2e0);
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a0a00;
  puVar1[2] = uStack_308;
  puVar1[1] = uStack_310;
  uStack_310 = 0;
  uStack_308 = 0;
  FUN_1073181d0(puVar1 + 3,auStack_300);
  FUN_1072d4a48(puVar1 + 7,auStack_2e0);
  puStack_278 = puVar1;
  func_0x00010731d1a8();
  func_0x00010731cf9c(unaff_x20 + 0x10);
  plVar2 = &lStack_140;
  FUN_1073181b0(plVar2,auStack_368);
  uStack_320 = 0;
  func_0x00010731cac0();
  func_0x00010731d0dc();
  *plVar2 = extraout_x8_00;
  FUN_1073181b0(plVar2 + 1,&lStack_140);
  uStack_320 = param_3;
  FUN_107316bac(&lStack_140);
  cStack_318 = '\x01';
  func_0x00010731d354();
  lVar3 = *(long *)(lVar4 + 0x38);
  puStack_3a0 = &UNK_10f40a1ee;
  uStack_398 = 8;
  lVar4 = *(long *)(lVar3 + 0x60);
  lStack_3a8 = lVar3;
  if (lVar4 == 0) {
    func_0x00010731a420(&lStack_140,lVar3);
    lVar4 = lStack_140;
    lStack_1f0 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_1f0);
    if (lVar4 == 0) {
      FUN_10731a454(&lStack_3a8,auStack_210,auStack_290,auStack_338,auStack_390);
    }
    else {
      in_ZR = cStack_318 == '\x01';
      if ((bool)in_ZR) {
        FUN_10730fa34(auStack_338,&lStack_140);
      }
    }
    __ZNSt13exception_ptrD1Ev(&lStack_140);
  }
  else {
    puStack_1e8 = &UNK_10f40a1ee;
    uStack_1e0 = 8;
    lStack_1f0 = lVar3;
    FUN_10731a960(auStack_1d8,auStack_390);
    lStack_1b0 = lVar3;
    FUN_10731a9b0(auStack_1a8,auStack_210);
    FUN_10731a9f4(auStack_188,auStack_290);
    func_0x00010731d314();
    func_0x00010731d28c(&lStack_140);
    puVar1 = auStack_128;
    FUN_10731a89c(puVar1,&lStack_1f0);
    puStack_60 = (undefined8 *)0x0;
    func_0x00010731ccd4();
    *puVar1 = &PTR_FUN_1109a08f0;
    puVar1[2] = uStack_138;
    puVar1[1] = lStack_140;
    lStack_140 = 0;
    uStack_138 = 0;
    func_0x00010731ccb8(uStack_130);
    func_0x00010731d07c();
    FUN_10731a960();
    func_0x00010731d06c(uStack_e8);
    FUN_10731a9b0();
    FUN_10731a9f4(puVar1 + 0x11,auStack_c0);
    func_0x00010731cc80();
    puStack_60 = puVar1;
    func_0x00010731d138();
    (*extraout_x8_01)(lVar4,auStack_78);
    func_0x0001006393ec(auStack_78);
    FUN_10731abc0(&lStack_140);
    func_0x00010731abe4(&lStack_1f0);
  }
  FUN_107318480(auStack_390);
  func_0x00010731ceec();
  FUN_107316bac(auStack_368);
  func_0x00010731b3cc(auStack_290);
  func_0x000107316bcc(&uStack_310);
  FUN_10731af24(auStack_210);
  func_0x000107316bf8(&uStack_270);
  func_0x00010054c318(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt13exception_ptrD1Ev(&lStack_140);
  FUN_107318480(auStack_390);
  func_0x00010731ceec();
  FUN_107316bac(auStack_368);
  do {
    func_0x00010731b3cc(auStack_290);
    func_0x000107316bcc(&uStack_310);
    FUN_10731af24(auStack_210);
    func_0x000107316bf8(&uStack_270);
    func_0x00010731c938();
    func_0x00010731cd8c();
  } while( true );
}



/* Entry: 107316bac; end: 107316c37;  */

long FUN_107316bac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010731cb48();
  func_0x000107319d0c();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107316c38; end: 107317047;  */

void FUN_107316c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar3;
  long lStack_6b8;
  undefined *puStack_6b0;
  undefined8 uStack_6a8;
  undefined1 auStack_6a0 [40];
  undefined1 auStack_678 [48];
  undefined1 auStack_648 [24];
  undefined8 uStack_630;
  char cStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 auStack_610 [32];
  undefined1 auStack_5f0 [512];
  undefined1 auStack_3f0 [24];
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 auStack_3c0 [64];
  undefined1 auStack_1c0 [24];
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [40];
  long lStack_160;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [72];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [8];
  undefined8 uStack_98;
  undefined1 auStack_70 [96];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x00010731d120();
  func_0x00010731d114();
  func_0x00010054bdbc();
  lVar3 = *(long *)(param_1 + 0x40);
  uStack_8 = extraout_x8;
  func_0x00010731874c(&uStack_3d0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar1 = auStack_3c0;
  FUN_1072d488c();
  func_0x00010731cf8c();
  *puVar1 = &PTR_DAT_1109a0c10;
  puVar1[2] = uStack_3c8;
  puVar1[1] = uStack_3d0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  FUN_1072d488c(puVar1 + 3,auStack_3c0);
  puStack_1a8 = puVar1;
  func_0x00010731874c(&uStack_620,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010731cf9c(auStack_610);
  FUN_1072d488c(auStack_5f0);
  puVar1 = (undefined8 *)0x230;
  __Znwm();
  *puVar1 = &PTR_DAT_1109a0ca0;
  puVar1[2] = uStack_618;
  puVar1[1] = uStack_620;
  uStack_620 = 0;
  uStack_618 = 0;
  FUN_1073181d0(puVar1 + 3,auStack_610);
  FUN_1072d488c(puVar1 + 7,auStack_5f0);
  puStack_3d8 = puVar1;
  func_0x00010731d1a8();
  func_0x00010731cf9c(unaff_x20 + 0x10);
  plVar2 = &lStack_f0;
  func_0x0001073184c0(plVar2,auStack_678);
  uStack_630 = 0;
  func_0x00010731cac0();
  func_0x00010731d0cc();
  *plVar2 = extraout_x8_00;
  func_0x0001073184c0(plVar2 + 1,&lStack_f0);
  uStack_630 = param_3;
  FUN_107317048(&lStack_f0);
  cStack_628 = '\x01';
  func_0x00010731d354();
  lVar3 = *(long *)(lVar3 + 0x38);
  puStack_6b0 = &UNK_10f40a206;
  uStack_6a8 = 0xc;
  lStack_6b8 = lVar3;
  if (*(long *)(lVar3 + 0x60) == 0) {
    FUN_10731b6f8(&lStack_f0,lVar3);
    lVar3 = lStack_f0;
    lStack_1a0 = 0;
    __ZNSt13exception_ptrD1Ev(&lStack_1a0);
    if (lVar3 == 0) {
      FUN_10731b72c(&lStack_6b8,auStack_1c0,auStack_3f0,auStack_648,auStack_6a0);
    }
    else {
      in_ZR = cStack_628 == '\x01';
      if ((bool)in_ZR) {
        FUN_10730fa34(auStack_648,&lStack_f0);
      }
    }
    __ZNSt13exception_ptrD1Ev(&lStack_f0);
  }
  else {
    puStack_198 = &UNK_10f40a206;
    uStack_190 = 0xc;
    lStack_1a0 = lVar3;
    FUN_10731bc38(auStack_188,auStack_6a0);
    lStack_160 = lVar3;
    FUN_10731bc88(auStack_158,auStack_1c0);
    FUN_10731bccc(auStack_138,auStack_3f0);
    func_0x00010731d314();
    func_0x00010731d28c(&lStack_f0);
    puVar1 = auStack_d8;
    FUN_10731bb74(puVar1,&lStack_1a0);
    puStack_10 = (undefined8 *)0x0;
    func_0x00010731ccd4();
    *puVar1 = &PTR_FUN_1109a0b90;
    puVar1[2] = uStack_e8;
    puVar1[1] = lStack_f0;
    lStack_f0 = 0;
    uStack_e8 = 0;
    func_0x00010731ccb8(uStack_e0);
    func_0x00010731d07c();
    FUN_10731bc38();
    func_0x00010731d06c(uStack_98);
    FUN_10731bc88();
    FUN_10731bccc(puVar1 + 0x11,auStack_70);
    func_0x00010731cc80();
    puStack_10 = puVar1;
    func_0x00010731d138();
    func_0x00010731d260();
    func_0x00010731cf6c();
    func_0x00010731be98(&lStack_f0);
    func_0x00010731bebc(&lStack_1a0);
  }
  func_0x0001073186a8(auStack_6a0);
  func_0x00010731ceec();
  FUN_107317048(auStack_678);
  func_0x00010731c7a0(auStack_3f0);
  func_0x000107317068(&uStack_620);
  func_0x00010731c244(auStack_1c0);
  func_0x000107317094(&uStack_3d0);
  func_0x00010054c318(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt13exception_ptrD1Ev(&lStack_f0);
  func_0x0001073186a8(auStack_6a0);
  func_0x00010731ceec();
  FUN_107317048(auStack_678);
  do {
    func_0x00010731c7a0(auStack_3f0);
    func_0x000107317068(&uStack_620);
    func_0x00010731c244(auStack_1c0);
    func_0x000107317094(&uStack_3d0);
    func_0x00010731c938();
    func_0x00010731cd8c();
  } while( true );
}



/* Entry: 107317048; end: 1073170b3;  */

long FUN_107317048(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010731cb48();
  func_0x000107319d0c();
  lVar1 = unaff_x19;
  func_0x0001072afb28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1073170b4; end: 10731710f;  */

void FUN_1073170b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    uVar1 = *(undefined8 *)(*param_1 + 0x10);
    FUN_10724ef84(auStack_38,param_2);
    func_0x0001073a70ac(uVar1,auStack_38,*(undefined1 *)(param_2 + 0x38),
                        (long)*(int *)(param_2 + 0x3c),(long)*(int *)(param_2 + 0x40),
                        (long)*(char *)(param_2 + 0x44));
    func_0x00010731c9bc();
  }
  return;
}



/* Entry: 107317110; end: 10731718f;  */

void FUN_107317110(long *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar2;
  undefined1 auStack_c8 [24];
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010054bdbc();
  uStack_28 = extraout_x8;
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    lVar2 = *(long *)(*param_1 + 0x10);
    FUN_1072a5348(auStack_60,param_2);
    func_0x00010731d2d4();
    param_1 = (long *)(lVar2 + 3000);
    param_2 = auStack_78;
    func_0x000105653850();
    func_0x00010731c9bc();
    func_0x00010731cfe0();
  }
  func_0x00010054c318(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731c8fc();
  func_0x00010731cfe0();
  func_0x00010731c938();
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    puVar1 = param_2;
    func_0x0001005d466c();
    puStack_b0 = param_2;
    puStack_a8 = puVar1;
    func_0x0001003a91d4(&UNK_10f40a19a);
    func_0x0001003a9204(auStack_c8);
    func_0x00010731d138();
    func_0x000105653850(extraout_x8_00 + 0xc40,auStack_c8);
    func_0x00010731c9bc();
  }
  return;
}



/* Entry: 107317190; end: 1073171fb;  */

void FUN_107317190(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010731c7d4();
  if (*param_1 != 0) {
    uVar1 = param_2;
    func_0x0001005d466c();
    uStack_30 = param_2;
    uStack_28 = uVar1;
    func_0x0001003a91d4(&UNK_10f40a19a);
    func_0x0001003a9204(auStack_48);
    func_0x00010731d138();
    func_0x000105653850(extraout_x8 + 0xc40,auStack_48);
    func_0x00010731c9bc();
  }
  return;
}



/* Entry: 1073171fc; end: 1073173f7;  */

byte FUN_1073171fc(byte *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  undefined1 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar22;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x11;
  byte *unaff_x21;
  uint uVar23;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined1 auStack_210 [24];
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [32];
  byte *pbStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  byte abStack_118 [56];
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  byte abStack_c0 [24];
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  pbVar16 = param_1;
  pbVar18 = param_2;
  pbVar19 = param_3;
  pbVar20 = param_4;
  uVar21 = param_5;
  func_0x00010054bdbc();
  uVar15 = pbVar16[0x52] == 1;
  if ((bool)uVar15) {
    uStack_70 = extraout_x8;
    func_0x00010789a00c();
    bVar8 = param_3[0x19];
    unaff_x24 = (ulong)bVar8;
    uVar15 = bVar8 == 1;
    if ((bool)uVar15) {
      pbVar17 = param_1;
      pbVar18 = pbVar16;
      pbVar19 = param_2;
      (**(code **)(*(long *)param_1 + 0xf0))();
      pbVar20 = param_3;
    }
    else {
      pbVar17 = pbVar16;
      func_0x00010731c7d4();
      if (*(long *)pbVar17 != 0) {
        uStack_120 = *(undefined8 *)(*(long *)pbVar17 + 0x10);
        FUN_10724ef84(abStack_c0,param_2 + 8);
        uStack_124 = (uint)*param_2;
        uStack_130 = *(undefined8 *)(param_3 + 0x40);
        uStack_138 = *(undefined8 *)(param_3 + 0x48);
        unaff_x27 = (ulong)param_3[0x1a];
        unaff_x25 = *(undefined8 *)(param_3 + 0x30);
        unaff_x26 = *(undefined8 *)(param_3 + 0x38);
        bVar9 = param_3[0x18];
        param_1 = (byte *)(ulong)bVar9;
        uVar23 = (uint)bVar9;
        cVar13 = SBORROW4(uVar23,1);
        cVar14 = (int)(uVar23 - 1) < 0;
        uVar15 = uVar23 == 1;
        if ((bool)uVar15) {
          param_4 = (byte *)0x0;
          auStack_e0[0] = 0;
          uStack_c8 = 0;
        }
        else {
          func_0x00010731d144();
          uVar21 = extraout_x11;
          if (cVar14 == cVar13) {
            uVar21 = extraout_x8_00;
          }
          func_0x00010731cbd0(uVar21);
          func_0x00010731ccfc();
          param_4 = (byte *)(ulong)(extraout_w8 ^ 1);
        }
        FUN_1072a5348(auStack_a8,param_2);
        param_2 = abStack_118;
        FUN_10724ef84(abStack_118,auStack_a8);
        uStack_150 = (ulong)((uint)param_5 & (uint)param_4);
        puStack_158 = auStack_e0;
        pbVar18 = abStack_c0;
        pbVar20 = param_3 + 0x50;
        pbVar19 = (byte *)(ulong)uStack_124;
        uVar21 = uStack_130;
        uStack_170 = unaff_x25;
        uStack_168 = unaff_x26;
        pbStack_160 = pbVar16;
        pbStack_148 = param_2;
        func_0x0001073a6cec(uStack_120);
        func_0x00010731cc00();
        func_0x00010731d020();
        func_0x00010731cef4();
        if ((bVar9 & 1) == 0) {
          func_0x00010731cbe4();
        }
        pbVar17 = abStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    func_0x00010054c318(uStack_70);
    pbStack_188 = pbVar17;
    unaff_x21 = pbVar16;
    if ((bool)uVar15) {
      return bVar8 ^ 1;
    }
  }
  else {
    func_0x00010054c318(extraout_x8);
    pbStack_188 = pbVar16;
    if ((bool)uVar15) {
      func_0x0001078a3d28(param_1,param_2,param_3,param_4,param_5);
      func_0x0001078a3d94();
      if ((bool)uVar15) {
        func_0x0001078a3d64(*(undefined8 *)(extraout_x8_01 + 0xf0));
      }
      else {
        func_0x0001078a3d0c(*(undefined8 *)(extraout_x8_01 + 0xf8));
        (*extraout_x8_02)();
        if (param_1 == (byte *)0x0) {
          func_0x0001078a3d0c(*(undefined8 *)(*unaff_x23 + 0x100));
          (*extraout_x8_03)();
          return 1;
        }
      }
      return 0;
    }
  }
  ___stack_chk_fail();
  pbVar16 = abStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010731c938();
  pcStack_178 = FUN_1073173f8;
  uVar15 = pbVar16[0x52] == 1;
  pbStack_1d0 = param_4;
  uStack_1c8 = unaff_x27;
  uStack_1c0 = unaff_x26;
  uStack_1b8 = unaff_x25;
  uStack_1b0 = unaff_x24;
  pbStack_1a8 = param_1;
  pbStack_1a0 = param_2;
  pbStack_198 = unaff_x21;
  uStack_190 = param_5;
  puStack_180 = &stack0xfffffffffffffff0;
  if ((bool)uVar15) {
    pbVar17 = pbVar16;
    func_0x00010789a00c();
    bVar8 = pbVar19[0x19];
    if (bVar8 == 1) {
      (**(code **)(*(long *)pbVar16 + 0x108))(pbVar16,pbVar17,pbVar18,pbVar19);
    }
    else {
      pbVar16 = pbVar17;
      func_0x00010731c7d4();
      if (*(long *)pbVar16 != 0) {
        uVar22 = *(undefined8 *)(*(long *)pbVar16 + 0x10);
        FUN_10724ef84(auStack_1f0,pbVar18);
        bVar9 = pbVar18[0x38];
        iVar6 = *(int *)(pbVar18 + 0x3c);
        iVar7 = *(int *)(pbVar18 + 0x40);
        bVar12 = pbVar18[0x44];
        uVar2 = *(undefined8 *)(pbVar19 + 0x30);
        uVar4 = *(undefined8 *)(pbVar19 + 0x38);
        bVar10 = pbVar19[0x1a];
        uVar3 = *(undefined8 *)(pbVar19 + 0x40);
        uVar5 = *(undefined8 *)(pbVar19 + 0x48);
        bVar11 = pbVar19[0x18];
        if (bVar11 == 1) {
          uVar23 = 0;
          auStack_210[0] = 0;
          uStack_1f8 = 0;
        }
        else {
          uVar1 = *(ulong *)(pbVar20 + 8);
          if (-1 < (char)pbVar20[0x17]) {
            uVar1 = (ulong)pbVar20[0x17];
          }
          func_0x00010731cbd0(uVar1);
          func_0x00010731ccfc();
          uVar23 = extraout_w8_00 ^ 1;
        }
        func_0x0001073a6ff0(uVar22,auStack_1f0,bVar9,(long)iVar6,(long)iVar7,(long)(char)bVar12,
                            uVar2,uVar4,bVar10,pbVar19 + 0x50,uVar3,uVar5,pbVar17,auStack_210,
                            (uint)uVar21 & uVar23);
        func_0x00010731cef4();
        if ((bVar11 & 1) == 0) {
          func_0x00010731cbe4();
        }
        func_0x00010731cf54();
      }
    }
    return bVar8 ^ 1;
  }
  pcStack_178 = FUN_1073173f8;
  func_0x0001078a3d28(pbVar16,pbVar18,pbVar19,pbVar20,uVar21);
  func_0x0001078a3d94();
  if ((bool)uVar15) {
    func_0x0001078a3d64(*(undefined8 *)(extraout_x8_04 + 0x108));
  }
  else {
    func_0x0001078a3d0c(*(undefined8 *)(extraout_x8_04 + 0x110));
    (*extraout_x8_05)();
    if (pbVar16 == (byte *)0x0) {
      func_0x0001078a3d0c(*(undefined8 *)(*(long *)param_1 + 0x118));
      (*extraout_x8_06)();
      return 1;
    }
  }
  return 0;
}



/* Entry: 1073173f8; end: 1073175af;  */

byte FUN_1073173f8(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  long *plVar13;
  long *plVar14;
  uint extraout_w8;
  uint uVar15;
  undefined8 uVar16;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x23;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [32];
  
  uVar12 = *(char *)((long)param_1 + 0x52) == '\x01';
  if ((bool)uVar12) {
    plVar13 = param_1;
    func_0x00010789a00c();
    bVar8 = *(byte *)(param_3 + 0x19);
    if (bVar8 == 1) {
      (**(code **)(*param_1 + 0x108))(param_1,plVar13,param_2,param_3);
    }
    else {
      plVar14 = plVar13;
      func_0x00010731c7d4();
      if (*plVar14 != 0) {
        uVar16 = *(undefined8 *)(*plVar14 + 0x10);
        FUN_10724ef84(auStack_80,param_2);
        uVar12 = *(undefined1 *)(param_2 + 0x38);
        iVar6 = *(int *)(param_2 + 0x3c);
        iVar7 = *(int *)(param_2 + 0x40);
        cVar11 = *(char *)(param_2 + 0x44);
        uVar2 = *(undefined8 *)(param_3 + 0x30);
        uVar4 = *(undefined8 *)(param_3 + 0x38);
        uVar9 = *(undefined1 *)(param_3 + 0x1a);
        uVar3 = *(undefined8 *)(param_3 + 0x40);
        uVar5 = *(undefined8 *)(param_3 + 0x48);
        bVar10 = *(byte *)(param_3 + 0x18);
        if (bVar10 == 1) {
          uVar15 = 0;
          auStack_a0[0] = 0;
          uStack_88 = 0;
        }
        else {
          uVar1 = *(ulong *)(param_4 + 8);
          if (-1 < (char)*(byte *)(param_4 + 0x17)) {
            uVar1 = (ulong)*(byte *)(param_4 + 0x17);
          }
          func_0x00010731cbd0(uVar1);
          func_0x00010731ccfc();
          uVar15 = extraout_w8 ^ 1;
        }
        func_0x0001073a6ff0(uVar16,auStack_80,uVar12,(long)iVar6,(long)iVar7,(long)cVar11,uVar2,
                            uVar4,uVar9,param_3 + 0x50,uVar3,uVar5,plVar13,auStack_a0,
                            (uint)param_5 & uVar15);
        func_0x00010731cef4();
        if ((bVar10 & 1) == 0) {
          func_0x00010731cbe4();
        }
        func_0x00010731cf54();
      }
    }
    return bVar8 ^ 1;
  }
  func_0x0001078a3d28(param_1,param_2,param_3,param_4,param_5);
  func_0x0001078a3d94();
  if ((bool)uVar12) {
    func_0x0001078a3d64(*(undefined8 *)(extraout_x8 + 0x108));
  }
  else {
    func_0x0001078a3d0c(*(undefined8 *)(extraout_x8 + 0x110));
    (*extraout_x8_00)();
    if (param_1 == (long *)0x0) {
      func_0x0001078a3d0c(*(undefined8 *)(*unaff_x23 + 0x118));
      (*extraout_x8_01)();
      return 1;
    }
  }
  return 0;
}



/* Entry: 1073175b0; end: 1073175b3;  */

undefined8 * FUN_1073175b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099fa18;
  FUN_107317628(param_1 + 0x27);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x1f);
  func_0x000107317678(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  func_0x0001072ac970(param_1 + 8);
  func_0x00010724b8b8(param_1 + 6);
  FUN_1072aef58(param_1 + 4);
  return param_1;
}



/* Entry: 1073175b4; end: 1073175c7;  */

void FUN_1073175b4(void)

{
  func_0x0001073186e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073175c8; end: 107317627;  */

void FUN_1073175c8(void)

{
  return;
}



/* Entry: 107317628; end: 1073176c7;  */

void FUN_107317628(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010731ce98();
    while (unaff_x20 != unaff_x19) {
      lVar1 = *(long *)(unaff_x20 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + 0x10);
      __ZdlPv(unaff_x20);
      unaff_x20 = lVar1;
    }
  }
  return;
}



/* Entry: 1073176c8; end: 1073176e3;  */

void FUN_1073176c8(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1073176e4; end: 10731773f;  */

undefined8 FUN_1073176e4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001001148fc(param_1 + 0x290);
  func_0x00010724b340(param_1 + 0x208);
  func_0x00010731d18c();
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107317740; end: 107317753;  */

void FUN_107317740(void)

{
  func_0x000107317714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317754; end: 10731778b;  */

undefined8 FUN_107317754(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2b8;
  __Znwm(0x2b8);
  FUN_107317870();
  return uVar1;
}



/* Entry: 10731778c; end: 1073177af;  */

void FUN_10731778c(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010731d114(param_3,param_2 + 8);
  func_0x00010731c8b4(&PTR_SUB_11099fbc8);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  FUN_1072d488c(unaff_x20 + 0x18,unaff_x21 + 0x10);
  func_0x00010731d1fc(unaff_x20 + 0x210);
  *(undefined1 *)(unaff_x20 + 0x290) = *(undefined1 *)(unaff_x21 + 0x288);
  func_0x00010028af84(unaff_x20 + 0x298,unaff_x21 + 0x290);
  return;
}



/* Entry: 1073177b0; end: 107317863;  */

void FUN_1073177b0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = param_1;
  func_0x00010731c7d4();
  *puVar4 = param_2;
  func_0x0001078a3908(param_1[1],param_1 + 3,param_1 + 0x42,
                      (*(byte *)(param_1[1] + 0x50) ^ 0xff) & 1,param_1 + 0x52);
  lVar7 = param_1[0x46];
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (long)*(char *)(lVar7 + 0x17);
    if (lVar6 < 0) {
      lVar6 = *(long *)(lVar7 + 8);
    }
  }
  iVar5 = 0xb4;
  if (*(char *)(param_1 + 3) != '\x03') {
    iVar5 = 0x136;
  }
  piVar1 = (int *)(param_1[1] + 0x84);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + (int)lVar6 + iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 107317864; end: 10731786f;  */

undefined ** FUN_107317864(void)

{
  return &PTR_DAT_11099fc28;
}



/* Entry: 107317870; end: 107317907;  */

void FUN_107317870(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010731d114();
  func_0x00010731c8b4(&PTR_SUB_11099fbc8);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  FUN_1072d488c(unaff_x20 + 0x18,unaff_x21 + 0x10);
  func_0x00010731d1fc(unaff_x20 + 0x210);
  *(undefined1 *)(unaff_x20 + 0x290) = *(undefined1 *)(unaff_x21 + 0x288);
  func_0x00010028af84(unaff_x20 + 0x298,unaff_x21 + 0x290);
  return;
}



/* Entry: 107317908; end: 10731792f;  */

undefined8 FUN_107317908(undefined8 param_1)

{
  func_0x00010731ca8c(&PTR_FUN_11099fc48);
  return param_1;
}



/* Entry: 107317930; end: 107317943;  */

void FUN_107317930(void)

{
  FUN_107317908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317944; end: 107317977;  */

void FUN_107317944(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_FUN_11099fc48);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317978; end: 1073179b7;  */

void FUN_107317978(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_FUN_11099fc48);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073179b8; end: 1073179cf;  */

void FUN_1073179b8(undefined8 *param_1)

{
  func_0x00010731c7d4();
  *param_1 = 0;
  return;
}



/* Entry: 1073179d0; end: 1073179f7;  */

void FUN_1073179d0(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099fca8);
  func_0x00010731c874();
  return;
}



/* Entry: 1073179f8; end: 107317a03;  */

undefined ** FUN_1073179f8(void)

{
  return &PTR_DAT_11099fca8;
}



/* Entry: 107317a04; end: 107317a2b;  */

undefined8 FUN_107317a04(undefined8 param_1)

{
  func_0x00010731ca8c(&PTR_FUN_11099fcc8);
  return param_1;
}



/* Entry: 107317a2c; end: 107317a3f;  */

void FUN_107317a2c(void)

{
  FUN_107317a04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317a40; end: 107317a73;  */

void FUN_107317a40(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_FUN_11099fcc8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317a74; end: 107317ab3;  */

void FUN_107317a74(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_FUN_11099fcc8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317ab4; end: 107317acb;  */

void FUN_107317ab4(undefined8 *param_1)

{
  func_0x00010731c7d4();
  *param_1 = 0;
  return;
}



/* Entry: 107317acc; end: 107317af3;  */

void FUN_107317acc(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099fd38);
  func_0x00010731c874();
  return;
}



/* Entry: 107317af4; end: 107317aff;  */

undefined ** FUN_107317af4(void)

{
  return &PTR_DAT_11099fd38;
}



/* Entry: 107317b00; end: 107317b27;  */

undefined8 FUN_107317b00(undefined8 param_1)

{
  func_0x00010731ca8c(&PTR_FUN_11099fd58);
  return param_1;
}



/* Entry: 107317b28; end: 107317b3b;  */

void FUN_107317b28(void)

{
  FUN_107317b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317b3c; end: 107317b6f;  */

void FUN_107317b3c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_FUN_11099fd58);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317b70; end: 107317baf;  */

void FUN_107317b70(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_FUN_11099fd58);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317bb0; end: 107317bc7;  */

void FUN_107317bb0(void)

{
  func_0x00010731c810();
  func_0x00010731ccdc();
  return;
}



/* Entry: 107317bc8; end: 107317bef;  */

void FUN_107317bc8(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099fdb8);
  func_0x00010731c874();
  return;
}



/* Entry: 107317bf0; end: 107317c03;  */

undefined ** FUN_107317bf0(void)

{
  return &PTR_DAT_11099fdb8;
}



/* Entry: 107317c04; end: 107317c23;  */

void FUN_107317c04(undefined8 *param_1)

{
  func_0x00010731d274();
  *param_1 = &PTR_DAT_11099fdd8;
  return;
}



/* Entry: 107317c24; end: 107317c3f;  */

void FUN_107317c24(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099fdd8;
  return;
}



/* Entry: 107317c40; end: 107317cab;  */

void FUN_107317c40(undefined8 param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x00010731d284(param_1,PTR_DAT_1131ad598);
    func_0x00010731d218();
    func_0x00010731c9bc();
    *(undefined1 *)(param_3 + 0x4c) = 1;
  }
  return;
}



/* Entry: 107317cac; end: 107317cd3;  */

void FUN_107317cac(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099fe48);
  func_0x00010731c874();
  return;
}



/* Entry: 107317cd4; end: 107317cdf;  */

undefined ** FUN_107317cd4(void)

{
  return &PTR_DAT_11099fe48;
}



/* Entry: 107317ce0; end: 107317d6b;  */

void FUN_107317ce0(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010731d0bc();
  if ((bool)in_ZR) {
    if (*(long *)(unaff_x19 + 0x18) == unaff_x19) {
      uVar1 = 0x20;
    }
    else {
      if (*(long *)(unaff_x19 + 0x18) == 0) {
        return;
      }
      uVar1 = 0x28;
    }
    func_0x00010731c8d0(uVar1);
  }
  return;
}



/* Entry: 107317d6c; end: 107317d7f;  */

void FUN_107317d6c(void)

{
  func_0x000107317d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317d80; end: 107317daf;  */

undefined8 FUN_107317d80(undefined8 param_1)

{
  func_0x00010731c98c();
  FUN_107317e24();
  return param_1;
}



/* Entry: 107317db0; end: 107317dd3;  */

undefined8 FUN_107317db0(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_11099fe68,param_2,param_1 + 8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_10724cbe8();
  return param_2;
}



/* Entry: 107317dd4; end: 107317def;  */

void FUN_107317dd4(undefined8 *param_1)

{
  long extraout_x8;
  
  func_0x00010731c810();
  *param_1 = 0;
  if (*(long **)(extraout_x8 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(extraout_x8 + 0x30) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 107317df0; end: 107317e17;  */

void FUN_107317df0(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099fec8);
  func_0x00010731c874();
  return;
}



/* Entry: 107317e18; end: 107317e23;  */

undefined ** FUN_107317e18(void)

{
  return &PTR_DAT_11099fec8;
}



/* Entry: 107317e24; end: 107317e6b;  */

undefined8 FUN_107317e24(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_11099fe68);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_10724cbe8();
  return param_1;
}



/* Entry: 107317e6c; end: 107317e93;  */

undefined8 FUN_107317e6c(undefined8 param_1)

{
  func_0x00010731ca8c(&PTR_FUN_11099fee8);
  return param_1;
}



/* Entry: 107317e94; end: 107317ea7;  */

void FUN_107317e94(void)

{
  FUN_107317e6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317ea8; end: 107317edb;  */

void FUN_107317ea8(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_FUN_11099fee8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317edc; end: 107317f1b;  */

void FUN_107317edc(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_FUN_11099fee8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107317f1c; end: 107317f33;  */

void FUN_107317f1c(undefined8 *param_1)

{
  func_0x00010731c7d4();
  *param_1 = 0;
  return;
}



/* Entry: 107317f34; end: 107317f5b;  */

void FUN_107317f34(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099ff48);
  func_0x00010731c874();
  return;
}



/* Entry: 107317f5c; end: 107317f67;  */

undefined ** FUN_107317f5c(void)

{
  return &PTR_DAT_11099ff48;
}



/* Entry: 107317f68; end: 107317fb3;  */

void FUN_107317f68(void)

{
  func_0x00010731c9cc();
  func_0x000105302f48();
  return;
}



/* Entry: 107317fb4; end: 107317fc7;  */

void FUN_107317fb4(void)

{
  func_0x000107317f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107317fc8; end: 107317ff7;  */

undefined8 FUN_107317fc8(undefined8 param_1)

{
  func_0x00010731c98c();
  FUN_10731806c();
  return param_1;
}



/* Entry: 107317ff8; end: 10731801b;  */

undefined8 FUN_107317ff8(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_11099ff68,param_2,param_1 + 8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_10724cbe8();
  return param_2;
}



/* Entry: 10731801c; end: 107318037;  */

void FUN_10731801c(undefined8 *param_1)

{
  long extraout_x8;
  
  func_0x00010731c810();
  *param_1 = 0;
  if (*(long **)(extraout_x8 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(extraout_x8 + 0x30) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 107318038; end: 10731805f;  */

void FUN_107318038(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_11099ffc8);
  func_0x00010731c874();
  return;
}



/* Entry: 107318060; end: 10731806b;  */

undefined ** FUN_107318060(void)

{
  return &PTR_DAT_11099ffc8;
}



/* Entry: 10731806c; end: 1073180b3;  */

undefined8 FUN_10731806c(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_11099ff68);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_10724cbe8();
  return param_1;
}



/* Entry: 1073180b4; end: 1073180db;  */

undefined8 FUN_1073180b4(undefined8 param_1)

{
  func_0x00010731ca8c(&PTR_FUN_11099ffe8);
  return param_1;
}



/* Entry: 1073180dc; end: 1073180ef;  */

void FUN_1073180dc(void)

{
  FUN_1073180b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073180f0; end: 107318123;  */

void FUN_1073180f0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_FUN_11099ffe8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107318124; end: 107318163;  */

void FUN_107318124(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_FUN_11099ffe8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107318164; end: 10731817b;  */

void FUN_107318164(undefined8 *param_1)

{
  func_0x00010731c7d4();
  *param_1 = 0;
  return;
}



/* Entry: 10731817c; end: 1073181a3;  */

void FUN_10731817c(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0048);
  func_0x00010731c874();
  return;
}



/* Entry: 1073181a4; end: 1073181af;  */

undefined ** FUN_1073181a4(void)

{
  return &PTR_DAT_1109a0048;
}



/* Entry: 1073181b0; end: 1073181cf;  */

void FUN_1073181b0(void)

{
  func_0x00010731c9cc();
  FUN_1073181d0();
  return;
}



/* Entry: 1073181d0; end: 107318213;  */

void FUN_1073181d0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010731ceb8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010731c7fc();
    func_0x00010731c9e0();
  }
  else {
    func_0x00010731cbb0();
  }
  return;
}


