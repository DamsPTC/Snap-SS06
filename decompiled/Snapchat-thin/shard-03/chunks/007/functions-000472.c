/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102bc78e0; end: 102bc7c8b;  */

undefined * FUN_102bc78e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102bc7a04);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112efcdf0;
    func_0x0001000285a8(0x112efcdf0,&UNK_10db2eb00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11079f2f8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102bc7c8c; end: 102bc7e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc7c8c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c44abc();
  func_0x000107c61180();
  if (uVar2 == 0) {
LAB_102bc7cd4:
    uVar2 = param_1;
    func_0x000107c40e0c();
    if ((int)uVar2 == 4) goto LAB_102bc7ce4;
    func_0x0001000d224c(&uStack_50);
    uVar2 = uStack_50;
    func_0x000107c614f0();
    func_0x000102bb745c();
    func_0x000107c615e8(uStack_50);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x000107c3ec3c();
    func_0x000107c61180();
joined_r0x000102bc7dec:
    if (param_1 != 0) {
      func_0x000107c4223c();
      func_0x000107c61170(param_1);
    }
  }
  else {
    uVar1 = uVar2;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar2);
    if ((uVar1 & 1) == 0) goto LAB_102bc7cd4;
LAB_102bc7ce4:
    uVar2 = param_1;
    func_0x000107c5b9a4();
    func_0x000107c61180();
    if (uVar2 == 0) {
LAB_102bc7d10:
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      uVar1 = uStack_50;
      func_0x000107c614f0();
      FUN_102bb7300();
      func_0x000107c615e8(uVar2);
      if ((uVar1 & 1) == 0) {
        func_0x000107c3ec3c();
        func_0x000107c61180();
        goto joined_r0x000102bc7dec;
      }
    }
    else {
      uVar1 = uVar2;
      func_0x000107c49804();
      func_0x000107c61170(uVar2);
      if ((int)uVar1 == 0) goto LAB_102bc7d10;
    }
    if (*(char *)(unaff_x20 + _DAT_112efcd10 + 8) == '\x01') {
      func_0x0001000d224c(&uStack_50);
      func_0x000107c5b9a4();
      func_0x000107c61180();
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = param_1;
        func_0x000107c49804();
        func_0x000107c61170(param_1);
      }
      uVar1 = uStack_50;
      func_0x000107c614f0(uStack_50);
      func_0x000102bb7244(uVar2,uVar1,uStack_48);
      func_0x000107c615e8(uStack_50);
    }
  }
  return;
}



/* Entry: 102bc7e80; end: 102bc7ebb;  */

undefined1  [16] FUN_102bc7e80(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102bc7ebc; end: 102bc7ef7;  */

undefined8 FUN_102bc7ebc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1041d6e3c)(param_2,param_1);
  return param_2;
}



/* Entry: 102bc7ef8; end: 102bc7f3b;  */

void FUN_102bc7ef8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112efcdc8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010445584c(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112efcdc8 = puVar2;
  return;
}



/* Entry: 102bc7f3c; end: 102bc7f43;  */

void FUN_102bc7f3c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102bba250(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102bc7f44; end: 102bc7f77;  */

void FUN_102bc7f44(void)

{
  long unaff_x20;
  
  FUN_102bbe344(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102bc7f78; end: 102bc7f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc7f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112efccd8);
    puVar2 = &UNK_1105ac508;
    func_0x000107c613fc(&UNK_1105ac508,0x30,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_1;
    uStack_78 = 0x102bc898c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105ac520;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102bc7f80; end: 102bc7faf;  */

void FUN_102bc7f80(void)

{
  func_0x000102bc6188();
  return;
}



/* Entry: 102bc7fb0; end: 102bc7feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc7fb0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112efccd8);
    puVar2 = &UNK_1105ac468;
    func_0x000107c613fc(&UNK_1105ac468,0x31,7);
    puVar2[0x10] = param_3 & 1;
    *(long *)(puVar2 + 0x18) = lVar4;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    *(undefined8 *)(puVar2 + 0x28) = param_2;
    puVar2[0x30] = uVar1;
    uStack_68 = 0x102bc8970;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ac480;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(lVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102bc7fec; end: 102bc804b;  */

void FUN_102bc7fec(void)

{
  FUN_102bc36a4();
  return;
}



/* Entry: 102bc804c; end: 102bc8053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc804c(byte param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112efccd8);
    puVar2 = &UNK_1105ac1e8;
    func_0x000107c613fc(&UNK_1105ac1e8,0x19,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    puVar2[0x18] = param_1 & 1;
    pcStack_58 = FUN_102bc88e8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ac200;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102bc8054; end: 102bc80b3;  */

void FUN_102bc8054(void)

{
  func_0x000102bc6188();
  return;
}



/* Entry: 102bc80b4; end: 102bc80c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc80b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c5dc50(param_1,param_2);
    func_0x000107c61180();
    uVar6 = 0x16;
    if (param_3 != 1) {
      uVar6 = 0x14;
    }
    uVar3 = 0x15;
    if (param_3 != 2) {
      uVar3 = uVar6;
    }
    func_0x000107c5fe40();
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112efccd8);
    puVar4 = &UNK_1105abb58;
    func_0x000107c613fc(&UNK_1105abb58,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    *(undefined8 *)(puVar4 + 0x20) = uVar3;
    uStack_78 = 0x102bc8600;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105abb70;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(lVar1);
    func_0x000107c61174(puVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar6);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 102bc80c4; end: 102bc8153;  */

void FUN_102bc80c4(void)

{
  FUN_102bc5c8c();
  return;
}



/* Entry: 102bc8154; end: 102bc815b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8154(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_2 >> 0x3e == 0) {
      uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar7 = param_2;
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102bc78c4(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc49b8);
        (*pcVar1)();
      }
      uVar8 = 0;
      do {
        puVar9 = puStack_98;
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc499c);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(param_2 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar8;
          FUN_102bc743c(uVar8,param_2,&PTR_PTR_1126ac088,0x112efcdd8);
        }
        uStack_e8 = uVar3;
        FUN_102bc49b8(&puStack_e0,&uStack_e8);
        func_0x000107c61170(uVar3);
        uVar3 = *(ulong *)(puVar9 + 0x10);
        puStack_98 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          FUN_102bc78c4(1 < *(ulong *)(puVar9 + 0x18),uVar3 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_98 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puStack_98 + uVar3 * 0x48 + 0x28) = uStack_d8;
        *(undefined **)(puStack_98 + uVar3 * 0x48 + 0x20) = puStack_e0;
        *(undefined8 *)(puStack_98 + uVar3 * 0x48 + 0x60) = uStack_a0;
        *(undefined **)(puStack_98 + uVar3 * 0x48 + 0x48) = puStack_b8;
        *(code **)(puStack_98 + uVar3 * 0x48 + 0x40) = pcStack_c0;
        *(undefined8 *)(puStack_98 + uVar3 * 0x48 + 0x58) = uStack_a8;
        *(undefined8 *)(puStack_98 + uVar3 * 0x48 + 0x50) = uStack_b0;
        *(undefined **)(puStack_98 + uVar3 * 0x48 + 0x38) = puStack_c8;
        *(undefined **)(puStack_98 + uVar3 * 0x48 + 0x30) = puStack_d0;
        puVar9 = puStack_98;
      } while (uVar7 != uVar8);
    }
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112efccd8);
    puVar4 = &UNK_1105ab978;
    func_0x000107c613fc(&UNK_1105ab978,0x29,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined **)(puVar4 + 0x18) = puVar9;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    puVar4[0x28] = 0;
    pcStack_c0 = FUN_102bc82cc;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_1105ab990;
    ppuVar5 = &puStack_e0;
    puStack_b8 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar9 = puStack_b8;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar9);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 102bc815c; end: 102bc821b;  */

void FUN_102bc815c(void)

{
  func_0x000102bc6188();
  return;
}



/* Entry: 102bc821c; end: 102bc8233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc821c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_102bc2108(param_2,param_3);
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112efccd8);
    puVar3 = &UNK_1105ab7e8;
    func_0x000107c613fc(&UNK_1105ab7e8,0x38,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    uStack_88 = 0x102bc825c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105ab800;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(lVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102bc8234; end: 102bc8253;  */

void FUN_102bc8234(void)

{
  FUN_102bc55cc();
  return;
}



/* Entry: 102bc8254; end: 102bc8293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8254(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 *puVar9;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)((long)puVar5 + _DAT_112efcca8);
  puVar9 = puVar5;
  func_0x000103b82380();
  uVar3 = *puVar9;
  uVar6 = puVar9[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar9 = *(undefined8 **)((long)puVar5 + _DAT_112efcd00);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c61174();
  puVar5 = puVar9;
  func_0x000103b826f4();
  uVar1 = puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  uVar6 = 0x112da1fa0;
  func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  lVar7 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000102bc85b8((undefined8 *)(lVar4 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar4 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102bc8294; end: 102bc82cb;  */

void FUN_102bc8294(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bc82cc; end: 102bc832b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc82cc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 *puVar8;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)((long)puVar3 + _DAT_112efcca8);
  puVar8 = puVar3;
  func_0x000103b827e4();
  uVar1 = *puVar8;
  uVar5 = puVar8[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  puVar8 = *(undefined8 **)((long)puVar3 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c61174();
  puVar3 = puVar8;
  func_0x000103b82820();
  uVar5 = puVar3[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  FUN_102bc71b0();
  func_0x000107c613fc();
  puVar3[3] = 3;
  puVar3[2] = 1;
  func_0x0001042a8530(0);
  func_0x000107c61434(uVar5);
  func_0x000107c61434();
  func_0x0001042a7bf0();
  puVar3[4] = uVar4;
  uVar5 = 0x112efcde0;
  func_0x0001000285a8(0x112efcde0,&UNK_10db2eaf0);
  *(undefined8 *)(lVar2 + 0x48) = uVar5;
  *(undefined8 **)(lVar2 + 0x30) = puVar3;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000102bc85b8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc832c; end: 102bc8567;  */

void FUN_102bc832c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  do {
    if (uVar2 == 0) {
      func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
      func_0x000107c61574(param_3);
      return;
    }
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar10 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar9 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc8554);
      (*pcVar3)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar9) {
      func_0x000100102b0c(lVar9,param_4 & 1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc8568);
        (*pcVar3)();
      }
LAB_102bc84ac:
      if ((uVar5 & 1) == 0) goto LAB_102bc84b0;
LAB_102bc83c4:
      lVar9 = *param_5;
      lVar7 = uVar4 * 0x20;
      func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar7,auStack_130);
      func_0x0001000bb420(auStack_130,auStack_110);
      func_0x000107c6142c(uVar2);
      func_0x000100183ab8(auStack_130);
      func_0x000100183ab8(auStack_f0);
      lVar9 = *(long *)(lVar9 + 0x38);
      func_0x000100183ab8(lVar9 + lVar7);
      func_0x000100102924(auStack_110,lVar9 + lVar7);
    }
    else {
      if ((param_4 & 1) != 0) goto LAB_102bc84ac;
      func_0x0001010fc388();
      if ((uVar5 & 1) != 0) goto LAB_102bc83c4;
LAB_102bc84b0:
      lVar7 = *param_5;
      lVar9 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102bc8558);
        (*pcVar3)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    func_0x000100216040(&uStack_d0);
    param_4 = 1;
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  } while( true );
}



/* Entry: 102bc8568; end: 102bc85f7;  */

undefined8 FUN_102bc8568(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d74040;
  func_0x0001000285a8(0x112d74040,&UNK_10d934650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102bc85f8; end: 102bc8623;  */

undefined * FUN_102bc85f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_102bc6a1c();
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 102bc8624; end: 102bc86b3;  */

void FUN_102bc8624(void)

{
  FUN_102bc5f08();
  return;
}



/* Entry: 102bc86b4; end: 102bc86d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc86b4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112efccd8);
    puVar2 = &UNK_1105abe50;
    func_0x000107c613fc(&UNK_1105abe50,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    pcStack_68 = FUN_102bc8760;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105abe68;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102bc86d4; end: 102bc86ff;  */

void FUN_102bc86d4(void)

{
  long unaff_x20;
  
  FUN_102bc17b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102bc8700; end: 102bc870b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8700(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_112efcd30;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar8 + _DAT_112efcd30,auStack_78,0,0);
  uVar13 = *(ulong *)(lVar8 + lVar9);
  uVar5 = uVar3;
  func_0x000100077018(uVar3,uVar11,uVar13);
  if ((uVar5 & 1) == 0) {
    func_0x000107c61428(lVar8 + lVar9,auStack_90,0x21,0);
    func_0x000107c61434(uVar11);
    uVar5 = uVar13;
    func_0x000107c61558();
    *(ulong *)(lVar8 + lVar9) = uVar13;
    uVar10 = uVar13;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
      func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *(ulong *)(lVar8 + lVar9) = uVar10;
    }
    uVar5 = *(ulong *)(uVar10 + 0x10);
    uVar13 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001000d182c(uVar13,uVar5 + 1,1,uVar10);
    }
    *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
    lVar1 = uVar13 + uVar5 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x28) = uVar11;
    *(ulong *)(lVar8 + lVar9) = uVar13;
    puVar6 = auStack_90;
    func_0x000107c614a8();
    uVar14 = *(undefined8 *)(lVar8 + _DAT_112efcca8);
    func_0x000103b82b3c();
    uVar7 = *puVar6;
    uVar2 = puVar6[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c6142c(uVar2);
    puVar12 = *(undefined8 **)(lVar8 + _DAT_112efcd00);
    lVar8 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    func_0x000107c61174();
    puVar6 = puVar12;
    func_0x000103b82bb0();
    uVar2 = puVar6[1];
    *(undefined8 *)(lVar8 + 0x20) = *puVar6;
    puVar4 = PTR___sSSN_11034da80;
    *(undefined **)(lVar8 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    *(ulong *)(lVar8 + 0x30) = uVar3;
    *(undefined8 *)(lVar8 + 0x38) = uVar11;
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar2);
    lVar9 = lVar8;
    func_0x000100214a84(lVar8);
    func_0x000107c61588(lVar8);
    func_0x000102bc85b8((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    lVar8 = lVar9;
    func_0x000107c5f9dc(lVar9,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar9);
    func_0x000107c4df80(uVar14);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 102bc870c; end: 102bc8737;  */

void FUN_102bc870c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bc8738; end: 102bc875f;  */

void FUN_102bc8738(void)

{
  long unaff_x20;
  
  FUN_102bc1174(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102bc8760; end: 102bc8777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8760(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  puVar6 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)((long)puVar6 + _DAT_112efcca8);
  puVar1 = puVar6;
  func_0x000103b81458();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar6 = *(undefined8 **)((long)puVar6 + _DAT_112efcd00);
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  func_0x000107c61174();
  puVar1 = puVar6;
  func_0x000103b81670();
  uVar4 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  func_0x000107c61434();
  func_0x000107c5fdd0(uVar8);
  uVar8 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar3 + 0x48) = uVar8;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000102bc85b8((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c4df80(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102bc8778; end: 102bc87a3;  */

void FUN_102bc8778(void)

{
  long unaff_x20;
  
  FUN_102bc0b04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102bc87a4; end: 102bc87af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc87a4(void)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  iVar1 = *(int *)(unaff_x20 + 0x18);
  lVar5 = lVar6 + _DAT_112efcc88;
  func_0x000107c61618();
  if (lVar5 != 0) {
    if ((iVar1 != 1) && (iVar1 != 0)) {
      func_0x000102bb70d0(0);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102bc0b04);
      (*pcVar4)();
    }
    FUN_102bb7bbc();
    lVar3 = _DAT_112efcb78;
    *(char *)(lVar5 + _DAT_112efcb78) = (char)iVar1;
    FUN_102bb7b08();
    uVar2 = *(undefined1 *)(lVar5 + lVar3);
    func_0x000107c615e8(lVar5);
    *(undefined1 *)(lVar6 + _DAT_112efccf8) = uVar2;
  }
  return;
}



/* Entry: 102bc87b0; end: 102bc8803;  */

void FUN_102bc87b0(void)

{
  long unaff_x20;
  
  FUN_102bc07ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102bc8804; end: 102bc880b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8804(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  
  puVar10 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)((long)puVar10 + _DAT_112efcca8);
  puVar4 = puVar10;
  func_0x000103bb543c();
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  lVar7 = _DAT_112efcd00;
  uVar6 = *(undefined8 *)((long)puVar10 + _DAT_112efcd00);
  func_0x000107c61174(uVar6);
  puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  puVar12 = puVar4;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar4);
  func_0x000107c4df80(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170();
  func_0x000103bb60a8();
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  puVar12 = *(undefined8 **)((long)puVar10 + lVar7);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  func_0x000107c61174();
  puVar4 = puVar12;
  func_0x000103bb630c();
  uVar6 = puVar4[1];
  *(undefined8 *)(lVar7 + 0x20) = *puVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  func_0x000107c61434();
  uVar6 = 0x11;
  func_0x000107c601c8();
  uVar8 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar7 + 0x48) = uVar8;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  lVar9 = lVar7;
  func_0x000100214a84(lVar7);
  func_0x000107c61588(lVar7);
  func_0x000102bc85b8((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar7 = lVar9;
  func_0x000107c5f9dc(lVar9,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(lVar9);
  func_0x000107c4df80(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 102bc880c; end: 102bc889b;  */

void FUN_102bc880c(void)

{
  func_0x000102bc6188();
  return;
}



/* Entry: 102bc889c; end: 102bc88a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc889c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)((long)puVar7 + _DAT_112efcca8);
  puVar4 = puVar7;
  func_0x000103b82204();
  uVar1 = *puVar4;
  uVar5 = puVar4[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar1,uVar5);
  func_0x000107c6142c(uVar5);
  puVar7 = *(undefined8 **)((long)puVar7 + _DAT_112efcd00);
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  func_0x000107c61174();
  puVar4 = puVar7;
  func_0x000103b82400();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x20) = *puVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  func_0x000107c61434();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c5dc50(uVar9,uVar10);
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  *(undefined8 **)(lVar2 + 0x48) = puVar4;
  *(undefined **)(lVar2 + 0x30) = puVar3;
  func_0x000103b81bc8();
  uVar5 = puVar4[1];
  *(undefined8 *)(lVar2 + 0x50) = *puVar4;
  *(undefined8 *)(lVar2 + 0x58) = uVar5;
  func_0x000107c61434();
  uVar5 = 3;
  func_0x000107c5fe40();
  uVar9 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x78) = uVar9;
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  lVar6 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar5);
  lVar2 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar6);
  func_0x000107c4df80(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102bc88a8; end: 102bc88e7;  */

void FUN_102bc88a8(void)

{
  long unaff_x20;
  
  FUN_102bc3640(*(undefined8 *)(unaff_x20 + 0x10),&UNK_103bb5f38);
  return;
}



/* Entry: 102bc88e8; end: 102bc88f3;  */

/* WARNING: Possible PIC construction at 0x000102bc1c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bc1d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc1c70) */
/* WARNING: Removing unreachable block (ram,0x000102bc1c90) */
/* WARNING: Removing unreachable block (ram,0x000102bc1d1c) */

void FUN_102bc88e8(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168(PTR_PTR_1126affa8,*(undefined1 *)(unaff_x20 + 0x18));
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c4e57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc1d40);
  (*pcVar1)();
}



/* Entry: 102bc88f4; end: 102bc8913;  */

void FUN_102bc88f4(void)

{
  FUN_102bc33a0();
  return;
}



/* Entry: 102bc8914; end: 102bc899b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8914(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_118 [168];
  
  puVar8 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)((long)puVar8 + _DAT_112efcca8);
  puVar3 = puVar8;
  func_0x000103bb5474();
  uVar4 = *puVar3;
  uVar6 = puVar3[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  lVar2 = _DAT_112efcd00;
  puVar11 = *(undefined8 **)((long)puVar8 + _DAT_112efcd00);
  puVar3 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar5 = puVar3;
  func_0x000107c61534();
  puVar5[3] = 2;
  puVar5[2] = 1;
  func_0x000107c61174();
  puVar10 = puVar11;
  func_0x000103b937c0();
  uVar6 = puVar10[1];
  puVar5[4] = *puVar10;
  puVar5[5] = uVar6;
  func_0x000107c61434();
  uVar6 = 0;
  FUN_102bc2108(uVar12,uVar13);
  uVar12 = 0;
  func_0x000102bc89c0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar5[9] = uVar12;
  puVar5[6] = uVar6;
  puVar10 = puVar5;
  func_0x000100214a84();
  func_0x000107c61588(puVar5);
  func_0x000102bc85b8(puVar5 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar1 = PTR___sSSN_11034da80;
  puVar5 = puVar10;
  func_0x000107c5f9dc(puVar10,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c6142c(puVar10);
  func_0x000107c4df80(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170();
  func_0x000103bb60a8();
  uVar4 = *puVar5;
  uVar6 = puVar5[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  puVar10 = *(undefined8 **)((long)puVar8 + lVar2);
  func_0x000107c61534(puVar3,auStack_118);
  puVar3[3] = 2;
  puVar3[2] = 1;
  func_0x000107c61174();
  puVar5 = puVar10;
  func_0x000103bb630c();
  uVar6 = puVar5[1];
  puVar3[4] = *puVar5;
  puVar3[5] = uVar6;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c490d4();
  uVar6 = 0;
  func_0x000102bc89c0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3[9] = uVar6;
  puVar3[6] = puVar7;
  puVar5 = puVar3;
  func_0x000100214a84(puVar3);
  func_0x000107c61588(puVar3);
  func_0x000102bc85b8(puVar3 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar3 = puVar5;
  func_0x000107c5f9dc(puVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar5);
  func_0x000107c4df80(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102bc899c; end: 102bc89ff;  */

undefined8 FUN_102bc899c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102bc8a00; end: 102bc8cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8a00(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + _DAT_112efccd8);
    puVar2 = &UNK_1105ac3c8;
    func_0x000107c613fc(&UNK_1105ac3c8,0x38,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    puVar2[0x28] = uVar1;
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
    uStack_68 = 0x102bc8950;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105ac3e0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(lVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 102bc8cac; end: 102bc8f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc8cac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  
  func_0x000103b81390();
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar3 = 0x112efcf38;
  func_0x0001000285a8(0x112efcf38,&UNK_10db2ebd8);
  func_0x000107c61534();
  uVar11 = 4;
  *(undefined8 *)(lVar3 + 0x18) = 8;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  puVar4 = puVar2;
  func_0x000107c61434();
  func_0x000103b81590();
  uVar10 = puVar4[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar10;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar10);
  func_0x000107c46ed0();
  puVar6 = (undefined8 *)0x0;
  func_0x0001002ed07c();
  *(undefined8 **)(lVar3 + 0x48) = puVar6;
  *(undefined **)(lVar3 + 0x30) = puVar5;
  puVar4 = puVar6;
  func_0x000103b81bc8();
  uVar10 = puVar4[1];
  *(undefined8 *)(lVar3 + 0x50) = *puVar4;
  *(undefined8 *)(lVar3 + 0x58) = uVar10;
  FUN_102bcb4dc(param_2);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar10);
  func_0x000107c46ed0();
  *(undefined8 **)(lVar3 + 0x78) = puVar6;
  *(undefined8 **)(lVar3 + 0x60) = puVar4;
  func_0x000103b823bc();
  uVar10 = puVar4[1];
  *(undefined8 *)(lVar3 + 0x80) = *puVar4;
  *(undefined8 *)(lVar3 + 0x88) = uVar10;
  puVar4 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    puVar4 = (undefined8 *)0x0;
  }
  *(undefined8 **)(lVar3 + 0x90) = puVar4;
  *(undefined8 **)(lVar3 + 0xa8) = puVar6;
  func_0x000107c61434();
  func_0x000107c61174();
  func_0x000103b82400();
  uVar10 = param_3[1];
  *(undefined8 *)(lVar3 + 0xb0) = *param_3;
  *(undefined8 *)(lVar3 + 0xb8) = uVar10;
  if (param_4 == 0) {
    *(undefined8 *)(lVar3 + 200) = 0;
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 0xd8) = 0;
    *(undefined8 *)(lVar3 + 0xd0) = 0;
    func_0x000107c61434();
  }
  else {
    func_0x000107c61434();
    func_0x000107c61174(param_4);
    func_0x000107c5e9e0();
    uVar10 = uVar11;
    func_0x000107c5e9f0(param_4);
    uVar7 = 0;
    func_0x000100f6e714();
    *(undefined8 *)(lVar3 + 0xd8) = uVar7;
    *(undefined8 *)(lVar3 + 0xc0) = uVar11;
    *(undefined8 *)(lVar3 + 200) = uVar10;
    func_0x000107c61170(param_4);
  }
  lVar8 = lVar3;
  FUN_102bcb3b0();
  func_0x000107c61588(lVar3);
  uVar10 = 0x112efcf40;
  func_0x0001000285a8(0x112efcf40,&UNK_10db2ebe0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),4,uVar10);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efce20);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar5 = &UNK_1105acc48;
  func_0x000107c613fc(&UNK_1105acc48,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar10;
  *(long *)(puVar5 + 0x30) = lVar8;
  uStack_168 = 0x102bcb610;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0x42000000;
  puStack_178 = &UNK_1000f6b44;
  puStack_170 = &UNK_1105acc60;
  ppuVar9 = &puStack_188;
  puStack_160 = puVar5;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_160;
  func_0x000107c61174(uVar10);
  func_0x000107c61434(lVar8);
  func_0x000107c61434(puVar2);
  func_0x000107c615f0(uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(lVar8);
  return;
}



/* Entry: 102bc8f94; end: 102bc9027; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers triggerAttachmentWithTriggerType:tapAttachmentSource:collectionItemIndex:touchPoint:] */

/* WARNING: Possible PIC construction at 0x000102bc9000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9004) */

void FUN_102bc8f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_102bc8cac(param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bc9028; end: 102bc9117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9028(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar1 = &UNK_1105acbd0;
  func_0x000107c613fc(&UNK_1105acbd0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  pcStack_50 = FUN_102bcb360;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105acbe8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102bc9118; end: 102bc9167; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers submitLeadGenFromEndCardWithResult:] */

/* WARNING: Possible PIC construction at 0x000102bc9150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9154) */

void FUN_102bc9118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bc9028(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bc9168; end: 102bc916b; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers openBrandProfileWithTouchPoint:] */

void FUN_102bc9168(void)

{
  return;
}



/* Entry: 102bc916c; end: 102bc928f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc916c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if ((*(byte *)(unaff_x20 + _DAT_112efce18) & 1) == 0) {
    if (((ulong)param_1 & 1) == 0) {
      func_0x000103bad614();
    }
    else {
      func_0x000103bad64c();
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    func_0x000107c61434(uVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efce20);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
    puVar3 = &UNK_1105acb80;
    func_0x000107c613fc(&UNK_1105acb80,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    uStack_50 = 0x102bcb60c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105acb98;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(uVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c615f0(uVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 102bc9290; end: 102bc92bf; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setVerticalActionMenuIsVisibleWithIsVisible:] */

void FUN_102bc9290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc916c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc92c0; end: 102bc93d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc92c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (((ulong)param_1 & 1) == 0) {
    func_0x000103bad5a4();
  }
  else {
    func_0x000103bad5dc();
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61434(uVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efce20);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar3 = &UNK_1105acb30;
  func_0x000107c613fc(&UNK_1105acb30,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  pcStack_50 = FUN_102bcb314;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105acb48;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(uVar5);
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102bc93d4; end: 102bc9403; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setBottomActionBarIsVisibleWithIsVisible:] */

void FUN_102bc93d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc92c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9404; end: 102bc9527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9404(void)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  plVar1 = (long *)(unaff_x20 + _DAT_112efce10);
  uVar5 = 2;
  if (*plVar1 != 6) {
    uVar5 = 0;
  }
  if (*plVar1 == 5) {
    uVar5 = 1;
  }
  uVar2 = 0;
  if ((char)plVar1[1] != '\x01') {
    uVar2 = uVar5;
  }
  *plVar1 = 0;
  *(undefined1 *)(plVar1 + 1) = 1;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar3 = &UNK_1105acab8;
  func_0x000107c613fc(&UNK_1105acab8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  puVar3[0x18] = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  pcStack_50 = FUN_102bcb2d8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105acad0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102bc9528; end: 102bc954f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers navigateToNextPage] */

void FUN_102bc9528(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bc9404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9550; end: 102bc958f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers pauseVideo] */

void FUN_102bc9550(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bc9994(&UNK_1105aca40,0x102bcb248,&UNK_1105aca58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9590; end: 102bc95cf; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers restartVideo] */

void FUN_102bc9590(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bc9994(&UNK_1105ac9c8,0x102bcb1e4,&UNK_1105ac9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc95d0; end: 102bc960f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers resumeVideo] */

void FUN_102bc95d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bc9994(&UNK_1105ac950,0x102bcb1ac,&UNK_1105ac968);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9610; end: 102bc9657; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setVideoLoopingWithLoopingEnabled:] */

void FUN_102bc9610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc986c(param_3,&UNK_1105ac8d8,0x102bcb16c,&UNK_1105ac8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9658; end: 102bc969f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setPlaybackAutoAdvanceWithIsEnabled:] */

void FUN_102bc9658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc986c(param_3,&UNK_1105ac860,0x102bcb12c,&UNK_1105ac878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc96a0; end: 102bc96e7; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setSwipeUpTriggerAttachmentEnabledWithIsEnabled:] */

void FUN_102bc96a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc986c(param_3,&UNK_1105ac7e8,FUN_102bcb0ec,&UNK_1105ac800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc96e8; end: 102bc9807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc96e8(undefined8 param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c5e9e0();
  uVar7 = param_1;
  func_0x000107c5e9f0(param_2);
  lVar1 = 0;
  if (param_4 - 1U < 4) {
    lVar1 = (ulong)(param_4 - 1U) + 1;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar2 = &UNK_1105ac770;
  func_0x000107c613fc(&UNK_1105ac770,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  puVar2[0x28] = param_3;
  *(long *)(puVar2 + 0x30) = lVar1;
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  pcStack_60 = FUN_102bcb0d8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105ac788;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102bc9808; end: 102bc986b; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers onTooltipPresentedWithTouchPoint:hidden:source:] */

/* WARNING: Possible PIC construction at 0x000102bc9854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9858) */

void FUN_102bc9808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102bc96e8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102bc986c; end: 102bc994b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc986c(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  func_0x000107c613fc(param_2,0x28,7);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined1 *)(param_2 + 0x18) = param_1;
  *(undefined8 *)(param_2 + 0x20) = uVar5;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_4;
  uStack_50 = param_3;
  lStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102bc994c; end: 102bc9993; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers setSwipeDownToDismissDisabledWithIsDisabled:] */

void FUN_102bc994c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102bc986c(param_3,&UNK_1105ac6f8,0x102bcb098,&UNK_1105ac710);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9994; end: 102bc9a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  func_0x000107c613fc(param_1,0x20,7);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_3;
  uStack_50 = param_2;
  lStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102bc9a64; end: 102bc9aa3; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers onEndCardScreenshotSwipe] */

void FUN_102bc9a64(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bc9994(&UNK_1105ac680,FUN_102bcb060,&UNK_1105ac698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bc9aa4; end: 102bc9baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9aa4(double param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  dVar10 = (double)(long)param_1;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (dVar10 < 9.223372036854776e+18) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar10)) {
      bVar1 = dVar10 < -9.223372036854778e+18;
      bVar2 = dVar10 == -9.223372036854778e+18;
      bVar3 = false;
    }
  }
  lVar6 = (long)param_1;
  if (bVar2 || bVar1 != bVar3) {
    lVar6 = 0;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar4 = &UNK_1105ac608;
  func_0x000107c613fc(&UNK_1105ac608,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(long *)(puVar4 + 0x18) = lVar6;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  uStack_50 = 0x102bcb054;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ac620;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(uVar7);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102bc9bb0; end: 102bc9be7; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers onEndCardScreenshotsRenderedWithCount:] */

void FUN_102bc9bb0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102bc9aa4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102bc9be8; end: 102bc9cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9be8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112efce30);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112efce28);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efce08);
  puVar1 = &UNK_1105ac590;
  func_0x000107c613fc(&UNK_1105ac590,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  uStack_50 = 0x102bcb02c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ac5a8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(uVar4);
  func_0x000107c61434(param_1);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102bc9cd8; end: 102bc9d2f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers notifyDisplayedReviewIdsForEndCardWithDisplayedReviewIds:] */

void FUN_102bc9cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_102bc9be8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102bc9d30; end: 102bc9d8f; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers init] */

void FUN_102bc9d30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdContextEmbeddedContent.AdPageActionHandlers",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bc9d5c);
  (*pcVar1)();
}



/* Entry: 102bc9d90; end: 102bc9de7; -[_TtC24AdContextEmbeddedContent20AdPageActionHandlers .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bc9dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bc9d90(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efce08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112efce20));
  return;
}



/* Entry: 102bc9de8; end: 102bc9e07;  */

void FUN_102bc9de8(void)

{
  func_0x000107c61168(&PTR_PTR_1128945e0);
  return;
}



/* Entry: 102bc9e08; end: 102bc9eb3;  */

/* WARNING: Possible PIC construction at 0x000102bc9e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9e98) */

void FUN_102bc9e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5fadc(param_2,param_3);
  if (param_5 != 0) {
    FUN_102bc9eb4(param_5);
    func_0x000107c5f9dc();
    func_0x000107c6142c(param_5);
  }
  func_0x000107c4df80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102bc9eb4; end: 102bca1bb;  */

undefined * FUN_102bc9eb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar14 = (ulong *)(param_1 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar17 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar14;
  func_0x000107c61434();
  lVar15 = 0;
  lVar16 = lVar15;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      FUN_102bcb54c(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_88,0x112d387f8,&UNK_10d902650);
      FUN_102bcb54c(auStack_88,auStack_130,0x112d387f8,&UNK_10d902650);
      if (lStack_118 == 0) {
        func_0x000107c61434(uVar2);
        puVar8 = auStack_130;
      }
      else {
        func_0x000100102924(auStack_130,auStack_b8);
        FUN_102bcb54c(&uStack_98,&uStack_e8,0x112efcf20,&UNK_10db2ebc0);
        uVar5 = uStack_e0;
        uVar4 = uStack_e8;
        uVar9 = *(ulong *)(puVar3 + 0x10);
        if (uVar9 < *(ulong *)(puVar3 + 0x18)) {
          func_0x000107c61434(uVar2);
        }
        else {
          func_0x000107c61434(uVar2);
          func_0x000100102b0c(uVar9 + 1,1);
        }
        func_0x000107c6068c(auStack_130,*(undefined8 *)(puVar3 + 0x28));
        puVar8 = auStack_130;
        func_0x000107c5fb58(puVar8,uVar4,uVar5);
        func_0x000107c606a8();
        uVar13 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar11 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar9 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar3 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar13 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102bca1bc);
              (*pcVar6)();
            }
            uVar10 = 0;
            if (uVar11 != uVar9) {
              uVar10 = uVar11;
            }
            bVar7 = (bool)(uVar11 == uVar9 | bVar7);
          } while (*(ulong *)(puVar3 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar3 + uVar10 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar10 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar3 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        func_0x000100102924(auStack_b8,*(long *)(puVar3 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        puVar8 = auStack_d8;
      }
      FUN_102bcb320(puVar8,0x112d387f8,&UNK_10d902650);
      FUN_102bcb320(&uStack_98,0x112efcf20,&UNK_10db2ebc0);
      lVar16 = lVar15;
    }
    bVar7 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102bca1b8);
      (*pcVar6)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar15) break;
    uVar17 = puVar14[lVar15];
  }
  FUN_102bcb314(param_1,puVar14,~uVar12,lVar16,0);
  return puVar3;
}



/* Entry: 102bca1bc; end: 102bca413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bca1bc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_1b0 [64];
  undefined *apuStack_170 [3];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (param_3 != (long *)0x0) {
    plVar2 = param_3;
    uVar6 = param_4;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar10 = *(long *)((long)param_3 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar10 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar4 = *plVar2;
      uVar1 = plVar2[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar10);
      uVar9 = uVar1;
      func_0x000100029284(lVar4);
      if ((uVar9 & 1) == 0) {
        func_0x000107c6142c(lVar10);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar10 + 0x38) + lVar4 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar10);
        if (lStack_78 != 0) {
          puVar5 = &uStack_a0;
          func_0x000107c6147c(puVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)puVar5 & 1) != 0) {
            bStack_110 = (byte)param_4 & 1;
            uStack_f0 = uStack_a0;
            uStack_e8 = uStack_98;
            uStack_120 = param_1;
            uStack_118 = param_2;
            uStack_108 = param_5;
            plStack_100 = plVar3;
            uStack_f8 = uVar6;
            func_0x0001000d224c(auStack_148);
            func_0x0001000a8868(auStack_148,uStack_130);
            uVar6 = 0x112efcea0;
            func_0x0001000285a8(0x112efcea0,&UNK_10db2eb80);
            uVar7 = 0x112efcea8;
            uStack_158 = uVar6;
            FUN_102bcb36c(0x112efcea8,0x112efcea0,&UNK_10db2eb80);
            puVar8 = &UNK_1105ac7c0;
            uStack_150 = uVar7;
            func_0x000107c613fc(&UNK_1105ac7c0,0x50,7);
            uStack_d0 = CONCAT71(uStack_10f,bStack_110);
            uStack_d8 = uStack_118;
            uStack_e0 = uStack_120;
            uStack_c8 = uStack_108;
            uStack_b8 = uStack_f8;
            plStack_c0 = plStack_100;
            uStack_a8 = uStack_e8;
            uStack_b0 = uStack_f0;
            *(undefined8 *)(puVar8 + 0x18) = uStack_118;
            *(undefined8 *)(puVar8 + 0x10) = uStack_120;
            *(undefined8 *)(puVar8 + 0x28) = uStack_108;
            *(undefined8 *)(puVar8 + 0x20) = uStack_d0;
            *(undefined8 *)(puVar8 + 0x38) = uStack_f8;
            *(long **)(puVar8 + 0x30) = plStack_100;
            *(undefined8 *)(puVar8 + 0x48) = uStack_e8;
            *(undefined8 *)(puVar8 + 0x40) = uStack_f0;
            pcVar11 = *(code **)(lStack_128 + 0x10);
            apuStack_170[0] = puVar8;
            FUN_102bcb54c(&uStack_e0,auStack_1b0,0x112efcea0,&UNK_10db2eb80);
            (*pcVar11)(apuStack_170,uStack_130,lStack_128);
            FUN_102bcb320(&uStack_120,0x112efcea0,&UNK_10db2eb80);
            func_0x0001000834e4(apuStack_170);
            func_0x0001000834e4(auStack_148);
            return;
          }
          func_0x000107c6142c(uVar6);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar6);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bca414; end: 102bcb013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bca414(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_1 != (long *)0x0) {
    plVar2 = param_1;
    uVar9 = param_2;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar11 = *(long *)((long)param_1 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar11 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar4 = *plVar2;
      uVar1 = plVar2[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar11);
      uVar10 = uVar1;
      func_0x000100029284(lVar4);
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(lVar11);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar11);
        if (lStack_78 != 0) {
          ppuVar5 = &puStack_b8;
          func_0x000107c6147c(ppuVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar5 & 1) != 0) {
            func_0x000107c61174();
            func_0x0001000d224c(&uStack_90);
            func_0x0001000a8868(&uStack_90,lStack_78);
            uVar6 = 0x112efcf28;
            func_0x0001000285a8(0x112efcf28,&UNK_10db2ebd0);
            uVar7 = 0x112efcf30;
            uStack_a0 = uVar6;
            FUN_102bcb36c(0x112efcf30,0x112efcf28,&UNK_10db2ebd0);
            puVar8 = &UNK_1105acc20;
            uStack_98 = uVar7;
            func_0x000107c613fc(&UNK_1105acc20,0x38,7);
            *(undefined8 *)(puVar8 + 0x10) = param_2;
            *(long **)(puVar8 + 0x18) = plVar3;
            *(undefined8 *)(puVar8 + 0x20) = uVar9;
            *(undefined **)(puVar8 + 0x28) = puStack_b8;
            *(undefined8 *)(puVar8 + 0x30) = uStack_b0;
            puStack_b8 = puVar8;
            (**(code **)(lStack_70 + 0x10))(&puStack_b8,lStack_78,lStack_70);
            func_0x0001000834e4(&puStack_b8);
            func_0x0001000834e4(&uStack_90);
            return;
          }
          func_0x000107c6142c(uVar9);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar9);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bcb014; end: 102bcb05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb014(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1b0 [64];
  undefined *apuStack_170 [3];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar13 = *param_2;
  uVar14 = param_2[1];
  bVar2 = *(byte *)(param_2 + 2);
  uVar10 = (ulong)bVar2;
  uVar9 = param_2[3];
  if (param_1 != (long *)0x0) {
    plVar3 = param_1;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    plVar4 = plVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar11 = *(long *)((long)param_1 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar11 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar5 = *plVar3;
      uVar1 = plVar3[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar11);
      uVar8 = uVar1;
      func_0x000100029284(lVar5);
      if ((uVar8 & 1) == 0) {
        func_0x000107c6142c(lVar11);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar5 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar11);
        if (lStack_78 != 0) {
          puVar6 = &uStack_a0;
          func_0x000107c6147c(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)puVar6 & 1) != 0) {
            bStack_110 = bVar2 & 1;
            uStack_f0 = uStack_a0;
            uStack_e8 = uStack_98;
            uStack_120 = uVar13;
            uStack_118 = uVar14;
            uStack_108 = uVar9;
            plStack_100 = plVar4;
            uStack_f8 = uVar10;
            func_0x0001000d224c(auStack_148);
            func_0x0001000a8868(auStack_148,uStack_130);
            uVar9 = 0x112efcea0;
            func_0x0001000285a8(0x112efcea0,&UNK_10db2eb80);
            uVar13 = 0x112efcea8;
            uStack_158 = uVar9;
            FUN_102bcb36c(0x112efcea8,0x112efcea0,&UNK_10db2eb80);
            puVar7 = &UNK_1105ac7c0;
            uStack_150 = uVar13;
            func_0x000107c613fc(&UNK_1105ac7c0,0x50,7);
            uStack_d0 = CONCAT71(uStack_10f,bStack_110);
            uStack_d8 = uStack_118;
            uStack_e0 = uStack_120;
            uStack_c8 = uStack_108;
            uStack_b8 = uStack_f8;
            plStack_c0 = plStack_100;
            uStack_a8 = uStack_e8;
            uStack_b0 = uStack_f0;
            *(undefined8 *)(puVar7 + 0x18) = uStack_118;
            *(undefined8 *)(puVar7 + 0x10) = uStack_120;
            *(undefined8 *)(puVar7 + 0x28) = uStack_108;
            *(undefined8 *)(puVar7 + 0x20) = uStack_d0;
            *(ulong *)(puVar7 + 0x38) = uStack_f8;
            *(long **)(puVar7 + 0x30) = plStack_100;
            *(undefined8 *)(puVar7 + 0x48) = uStack_e8;
            *(undefined8 *)(puVar7 + 0x40) = uStack_f0;
            pcVar12 = *(code **)(lStack_128 + 0x10);
            apuStack_170[0] = puVar7;
            FUN_102bcb54c(&uStack_e0,auStack_1b0,0x112efcea0,&UNK_10db2eb80);
            (*pcVar12)(apuStack_170,uStack_130,lStack_128);
            FUN_102bcb320(&uStack_120,0x112efcea0,&UNK_10db2eb80);
            func_0x0001000834e4(apuStack_170);
            func_0x0001000834e4(auStack_148);
            return;
          }
          func_0x000107c6142c(uVar10);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar10);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bcb060; end: 102bcb0d7;  */

void FUN_102bcb060(void)

{
  long unaff_x20;
  
  func_0x000102bca818(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      0x112efce80,&UNK_10db2eb70,0x112efce88,&UNK_1105ac6d0);
  return;
}



/* Entry: 102bcb0d8; end: 102bcb0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb0d8(void)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1b0 [64];
  undefined *apuStack_170 [3];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  uVar11 = (ulong)bVar2;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9;
    func_0x000107c3b9ac();
    func_0x000107c61180();
    plVar4 = plVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar12 = *(long *)((long)plVar9 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar12 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar5 = *plVar3;
      uVar1 = plVar3[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar12);
      uVar10 = uVar1;
      func_0x000100029284(lVar5);
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(lVar12);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar12 + 0x38) + lVar5 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar12);
        if (lStack_78 != 0) {
          puVar6 = &uStack_a0;
          func_0x000107c6147c(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)puVar6 & 1) != 0) {
            bStack_110 = bVar2 & 1;
            uStack_f0 = uStack_a0;
            uStack_e8 = uStack_98;
            uStack_120 = uVar14;
            uStack_118 = uVar15;
            uStack_108 = uVar7;
            plStack_100 = plVar4;
            uStack_f8 = uVar11;
            func_0x0001000d224c(auStack_148);
            func_0x0001000a8868(auStack_148,uStack_130);
            uVar7 = 0x112efcea0;
            func_0x0001000285a8(0x112efcea0,&UNK_10db2eb80);
            uVar14 = 0x112efcea8;
            uStack_158 = uVar7;
            FUN_102bcb36c(0x112efcea8,0x112efcea0,&UNK_10db2eb80);
            puVar8 = &UNK_1105ac7c0;
            uStack_150 = uVar14;
            func_0x000107c613fc(&UNK_1105ac7c0,0x50,7);
            uStack_d0 = CONCAT71(uStack_10f,bStack_110);
            uStack_d8 = uStack_118;
            uStack_e0 = uStack_120;
            uStack_c8 = uStack_108;
            uStack_b8 = uStack_f8;
            plStack_c0 = plStack_100;
            uStack_a8 = uStack_e8;
            uStack_b0 = uStack_f0;
            *(undefined8 *)(puVar8 + 0x18) = uStack_118;
            *(undefined8 *)(puVar8 + 0x10) = uStack_120;
            *(undefined8 *)(puVar8 + 0x28) = uStack_108;
            *(undefined8 *)(puVar8 + 0x20) = uStack_d0;
            *(ulong *)(puVar8 + 0x38) = uStack_f8;
            *(long **)(puVar8 + 0x30) = plStack_100;
            *(undefined8 *)(puVar8 + 0x48) = uStack_e8;
            *(undefined8 *)(puVar8 + 0x40) = uStack_f0;
            pcVar13 = *(code **)(lStack_128 + 0x10);
            apuStack_170[0] = puVar8;
            FUN_102bcb54c(&uStack_e0,auStack_1b0,0x112efcea0,&UNK_10db2eb80);
            (*pcVar13)(apuStack_170,uStack_130,lStack_128);
            FUN_102bcb320(&uStack_120,0x112efcea0,&UNK_10db2eb80);
            func_0x0001000834e4(apuStack_170);
            func_0x0001000834e4(auStack_148);
            return;
          }
          func_0x000107c6142c(uVar11);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar11);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bcb0ec; end: 102bcb2d7;  */

void FUN_102bcb0ec(void)

{
  long unaff_x20;
  
  func_0x000102bcaa0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),0x112efceb0,&UNK_10db2eb88,0x112efceb8,
                      &UNK_1105ac838);
  return;
}



/* Entry: 102bcb2d8; end: 102bcb2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb2d8(void)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar10 = *(long **)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar12 = (ulong)bVar2;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10;
    func_0x000107c3b9ac(plVar10,uVar12,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c61180();
    plVar4 = plVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar13 = *(long *)((long)plVar10 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar13 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar5 = *plVar3;
      uVar1 = plVar3[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar13);
      uVar11 = uVar1;
      func_0x000100029284(lVar5);
      if ((uVar11 & 1) == 0) {
        func_0x000107c6142c(lVar13);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar13 + 0x38) + lVar5 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar13);
        if (lStack_78 != 0) {
          ppuVar6 = &puStack_b8;
          func_0x000107c6147c(ppuVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar6 & 1) != 0) {
            func_0x0001000d224c(&uStack_90);
            func_0x0001000a8868(&uStack_90,lStack_78);
            uVar7 = 0x112efcf10;
            func_0x0001000285a8(0x112efcf10,&UNK_10db2ebb8);
            uVar8 = 0x112efcf18;
            uStack_a0 = uVar7;
            FUN_102bcb36c(0x112efcf18,0x112efcf10,&UNK_10db2ebb8);
            puVar9 = &UNK_1105acb08;
            uStack_98 = uVar8;
            func_0x000107c613fc(&UNK_1105acb08,0x38,7);
            puVar9[0x10] = bVar2;
            *(long **)(puVar9 + 0x18) = plVar4;
            *(ulong *)(puVar9 + 0x20) = uVar12;
            *(undefined **)(puVar9 + 0x28) = puStack_b8;
            *(undefined8 *)(puVar9 + 0x30) = uStack_b0;
            puStack_b8 = puVar9;
            (**(code **)(lStack_70 + 0x10))(&puStack_b8,lStack_78,lStack_70);
            func_0x0001000834e4(&puStack_b8);
            func_0x0001000834e4(&uStack_90);
            return;
          }
          func_0x000107c6142c(uVar12);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar12);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bcb2e8; end: 102bcb313;  */

void FUN_102bcb2e8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bcb314; end: 102bcb31f;  */

/* WARNING: Possible PIC construction at 0x000102bc9e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9e98) */

void FUN_102bcb314(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  if (lVar3 != 0) {
    FUN_102bc9eb4(lVar3);
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c4df80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102bcb320; end: 102bcb35f;  */

undefined8 FUN_102bcb320(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102bcb360; end: 102bcb36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb360(void)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar10 = *(long **)(unaff_x20 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10;
    uVar11 = uVar6;
    func_0x000107c3b9ac(plVar10,uVar6,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    lVar13 = *(long *)((long)plVar10 + _DAT_11307abc8);
    func_0x00010404c5e0();
    if (*(long *)(lVar13 + 0x10) == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar4 = *plVar2;
      uVar1 = plVar2[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar13);
      uVar12 = uVar1;
      func_0x000100029284(lVar4);
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(lVar13);
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar13 + 0x38) + lVar4 * 0x20,&uStack_90);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar13);
        if (lStack_78 != 0) {
          ppuVar5 = &puStack_b8;
          func_0x000107c6147c(ppuVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar5 & 1) != 0) {
            func_0x000107c61174();
            func_0x0001000d224c(&uStack_90);
            func_0x0001000a8868(&uStack_90,lStack_78);
            uVar7 = 0x112efcf28;
            func_0x0001000285a8(0x112efcf28,&UNK_10db2ebd0);
            uVar8 = 0x112efcf30;
            uStack_a0 = uVar7;
            FUN_102bcb36c(0x112efcf30,0x112efcf28,&UNK_10db2ebd0);
            puVar9 = &UNK_1105acc20;
            uStack_98 = uVar8;
            func_0x000107c613fc(&UNK_1105acc20,0x38,7);
            *(undefined8 *)(puVar9 + 0x10) = uVar6;
            *(long **)(puVar9 + 0x18) = plVar3;
            *(undefined8 *)(puVar9 + 0x20) = uVar11;
            *(undefined **)(puVar9 + 0x28) = puStack_b8;
            *(undefined8 *)(puVar9 + 0x30) = uStack_b0;
            puStack_b8 = puVar9;
            (**(code **)(lStack_70 + 0x10))(&puStack_b8,lStack_78,lStack_70);
            func_0x0001000834e4(&puStack_b8);
            func_0x0001000834e4(&uStack_90);
            return;
          }
          func_0x000107c6142c(uVar11);
          return;
        }
      }
    }
    func_0x000107c6142c(uVar11);
    FUN_102bcb320(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return;
}



/* Entry: 102bcb36c; end: 102bcb3af;  */

void FUN_102bcb36c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10db4158c;
    func_0x000107c61520(&DAT_10db4158c,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102bcb3b0; end: 102bcb4db;  */

undefined * FUN_102bcb3b0(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112efcf48,&UNK_10db2ebe8);
    puVar6 = puVar9;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      FUN_102bcb54c(param_1,&uStack_90,0x112efcf40,&UNK_10db2ebe0);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bcb4d8);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      puVar2[1] = uStack_78;
      *puVar2 = uStack_80;
      puVar2[3] = uStack_68;
      puVar2[2] = uStack_70;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102bcb4dc);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102bcb4dc; end: 102bcb4ff;  */

undefined8 FUN_102bcb4dc(int param_1)

{
  if (param_1 - 1U < 0x15) {
    return *(undefined8 *)(&UNK_10db2ebf0 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 102bcb500; end: 102bcb53b;  */

void FUN_102bcb500(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102bcb53c; end: 102bcb54b;  */

/* WARNING: Possible PIC construction at 0x000102bc9e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bc9e98) */

void FUN_102bcb53c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  if (lVar3 != 0) {
    FUN_102bc9eb4(lVar3);
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c4df80(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102bcb54c; end: 102bcb593;  */

undefined8 FUN_102bcb54c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102bcb594; end: 102bcb613;  */

void FUN_102bcb594(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102bcb614; end: 102bcb623; -[_TtC24AdContextEmbeddedContent17AdPageEventStream pageVisibilityStateChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efcf50));
  return;
}



/* Entry: 102bcb624; end: 102bcb657; -[_TtC24AdContextEmbeddedContent17AdPageEventStream setPageVisibilityStateChangedObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112efcf50);
  *(undefined8 *)(param_1 + _DAT_112efcf50) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bcb658; end: 102bcb667; -[_TtC24AdContextEmbeddedContent17AdPageEventStream didInterceptGestureIntentionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efcf58));
  return;
}



/* Entry: 102bcb668; end: 102bcb69b; -[_TtC24AdContextEmbeddedContent17AdPageEventStream setDidInterceptGestureIntentionObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112efcf58);
  *(undefined8 *)(param_1 + _DAT_112efcf58) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102bcb69c; end: 102bcb6ab; -[_TtC24AdContextEmbeddedContent17AdPageEventStream videoProgressDidUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efcf60));
  return;
}



/* Entry: 102bcb6ac; end: 102bcb6df; -[_TtC24AdContextEmbeddedContent17AdPageEventStream setVideoProgressDidUpdateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bcb6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112efcf60);
  *(undefined8 *)(param_1 + _DAT_112efcf60) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


