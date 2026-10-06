/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048c9b44; end: 1048ca57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048c9b44(undefined8 ***param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **appuStack_230 [2];
  undefined8 **appuStack_220 [2];
  undefined8 **appuStack_210 [2];
  undefined8 **appuStack_200 [2];
  undefined8 **appuStack_1f0 [2];
  undefined8 **appuStack_1e0 [2];
  undefined8 **appuStack_1d0 [2];
  undefined8 **appuStack_1c0 [2];
  undefined8 **appuStack_1b0 [2];
  undefined8 **appuStack_1a0 [2];
  undefined8 **appuStack_190 [2];
  undefined8 **appuStack_180 [2];
  undefined8 **appuStack_170 [2];
  undefined8 **appuStack_160 [2];
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **appuStack_140 [2];
  undefined8 **appuStack_130 [2];
  undefined8 **appuStack_120 [2];
  undefined8 **appuStack_110 [2];
  undefined8 *apuStack_100 [2];
  undefined8 **appuStack_f0 [2];
  undefined8 *apuStack_e0 [2];
  undefined8 **appuStack_d0 [2];
  undefined8 **appuStack_c0 [2];
  undefined8 **appuStack_b0 [2];
  undefined8 **appuStack_a0 [2];
  undefined8 **appuStack_90 [2];
  undefined8 **appuStack_80 [2];
  undefined8 **appuStack_70 [2];
  undefined8 **appuStack_60 [2];
  undefined8 **appuStack_50 [2];
  undefined8 **appuStack_40 [2];
  
  pppuVar4 = appuStack_230;
  uVar3 = (uint)param_1;
  uVar1 = uVar3 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        func_0x0001048ca5bc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        bVar2 = (uVar3 & 0xff) == 1;
        pppuVar4 = (undefined8 ***)apuStack_e0;
        if (!bVar2) {
          pppuVar4 = (undefined8 ***)apuStack_100;
        }
        *(bool *)((long)pppuVar5 + _DAT_11309b560) = bVar2;
        *pppuVar4 = pppuVar5;
        pppuVar4[1] = param_1;
        _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
        param_1 = pppuVar4;
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x12;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 ****)((long)pppuVar5 + _DAT_11309b578) = pppuVar4;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_f0;
        appuStack_f0[0] = pppuVar5;
      }
      else {
        pppuVar4 = (undefined8 ***)(ulong)(uVar3 & 0xf);
        FUN_1048c9ad4();
        param_1 = pppuVar4;
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x19;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 ****)((long)pppuVar5 + _DAT_11309b580) = pppuVar4;
        pppuVar4 = appuStack_70;
        appuStack_70[0] = pppuVar5;
      }
    }
    else if (uVar1 == 2) {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x22) {
        if (uVar3 == 0x20) {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          appuStack_230[0] = pppuVar5;
        }
        else {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 1;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_220;
          appuStack_220[0] = pppuVar5;
        }
      }
      else if (uVar3 == 0x22) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 2;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_210;
        appuStack_210[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 3;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_200;
        appuStack_200[0] = pppuVar5;
      }
    }
    else {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x32) {
        if (uVar3 == 0x30) {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 4;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_1f0;
          appuStack_1f0[0] = pppuVar5;
        }
        else {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 5;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_1e0;
          appuStack_1e0[0] = pppuVar5;
        }
      }
      else if (uVar3 == 0x32) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 6;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_1d0;
        appuStack_1d0[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 7;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_1c0;
        appuStack_1c0[0] = pppuVar5;
      }
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x42) {
        if (uVar3 == 0x40) {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 8;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_1b0;
          appuStack_1b0[0] = pppuVar5;
        }
        else {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 9;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_1a0;
          appuStack_1a0[0] = pppuVar5;
        }
      }
      else if (uVar3 == 0x42) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 10;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_190;
        appuStack_190[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0xb;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_180;
        appuStack_180[0] = pppuVar5;
      }
    }
    else {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 0x52) {
        if (uVar3 == 0x50) {
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0xc;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_170;
          appuStack_170[0] = pppuVar5;
        }
        else {
          FUN_1048ca57c();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          pppuVar4 = &ppuStack_150;
          ppuStack_150 = pppuVar5;
          ppuStack_148 = param_1;
          _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
          param_1 = pppuVar4;
          func_0x0001005e21cc();
          pppuVar5 = param_1;
          _objc_allocWithZone();
          *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0xd;
          *(undefined8 ****)((long)pppuVar5 + _DAT_11309b570) = pppuVar4;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
          *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
          pppuVar4 = appuStack_160;
          appuStack_160[0] = pppuVar5;
        }
      }
      else if (uVar3 == 0x52) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0xe;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_140;
        appuStack_140[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0xf;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_130;
        appuStack_130[0] = pppuVar5;
      }
    }
  }
  else if (uVar1 == 6) {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 0x62) {
      if (uVar3 == 0x60) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x10;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_120;
        appuStack_120[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x11;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_110;
        appuStack_110[0] = pppuVar5;
      }
    }
    else if (uVar3 == 0x62) {
      func_0x0001005e21cc();
      pppuVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x13;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
      pppuVar4 = appuStack_d0;
      appuStack_d0[0] = pppuVar5;
    }
    else {
      func_0x0001005e21cc();
      pppuVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x14;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
      pppuVar4 = appuStack_c0;
      appuStack_c0[0] = pppuVar5;
    }
  }
  else if (uVar1 == 7) {
    uVar3 = uVar3 & 0xff;
    if (uVar3 < 0x72) {
      if (uVar3 == 0x70) {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x15;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_b0;
        appuStack_b0[0] = pppuVar5;
      }
      else {
        func_0x0001005e21cc();
        pppuVar5 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x16;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
        *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
        pppuVar4 = appuStack_a0;
        appuStack_a0[0] = pppuVar5;
      }
    }
    else if (uVar3 == 0x72) {
      func_0x0001005e21cc();
      pppuVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x17;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
      pppuVar4 = appuStack_90;
      appuStack_90[0] = pppuVar5;
    }
    else {
      func_0x0001005e21cc();
      pppuVar5 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x18;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
      *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
      pppuVar4 = appuStack_80;
      appuStack_80[0] = pppuVar5;
    }
  }
  else if ((uVar3 & 0xff) == 0x80) {
    func_0x0001005e21cc();
    pppuVar5 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x1a;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
    pppuVar4 = appuStack_60;
    appuStack_60[0] = pppuVar5;
  }
  else if ((uVar3 & 0xff) == 0x81) {
    func_0x0001005e21cc();
    pppuVar5 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x1b;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
    pppuVar4 = appuStack_50;
    appuStack_50[0] = pppuVar5;
  }
  else {
    func_0x0001005e21cc();
    pppuVar5 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)pppuVar5 + _DAT_11309b568) = 0x1c;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b570) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b578) = 0;
    *(undefined8 *)((long)pppuVar5 + _DAT_11309b580) = 0;
    pppuVar4 = appuStack_40;
    appuStack_40[0] = pppuVar5;
  }
  pppuVar4[1] = param_1;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048ca57c; end: 1048ca5db;  */

void FUN_1048ca57c(void)

{
  _objc_opt_self(&PTR_PTR_1129e1a50);
  return;
}



/* Entry: 1048ca5dc; end: 1048caac7;  */

int FUN_1048ca5dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1c) {
      iVar2 = 4;
    }
    if (param_2 + 0x1c >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ca658;
        goto LAB_1048ca63c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ca63c:
      return ((uint)*param_1 | uVar1 << 8) - 0x1c;
    }
  }
LAB_1048ca658:
  iVar2 = *param_1 - 0x1d;
  if (*param_1 < 0x1d) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048caac8; end: 1048cab07;  */

void FUN_1048caac8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44264;
  _swift_getWitnessTable(&UNK_10dd44264,&UNK_1107b3c38);
  puRam000000011309b630 = puVar1;
  return;
}



/* Entry: 1048cab08; end: 1048cab0b;  */

void FUN_1048cab08(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44304;
  _swift_getWitnessTable(&UNK_10dd44304,&UNK_1107b3ba8);
  puRam000000011309b638 = puVar1;
  return;
}



/* Entry: 1048cab0c; end: 1048cab4b;  */

void FUN_1048cab0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44304;
  _swift_getWitnessTable(&UNK_10dd44304,&UNK_1107b3ba8);
  puRam000000011309b638 = puVar1;
  return;
}



/* Entry: 1048cab4c; end: 1048cab4f;  */

void FUN_1048cab4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd443a4;
  _swift_getWitnessTable(&UNK_10dd443a4,&UNK_1107b3b18);
  puRam000000011309b640 = puVar1;
  return;
}



/* Entry: 1048cab50; end: 1048cab8f;  */

void FUN_1048cab50(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd443a4;
  _swift_getWitnessTable(&UNK_10dd443a4,&UNK_1107b3b18);
  puRam000000011309b640 = puVar1;
  return;
}



/* Entry: 1048cab90; end: 1048cab93;  */

void FUN_1048cab90(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44444;
  _swift_getWitnessTable(&UNK_10dd44444,&UNK_1107b3a88);
  puRam000000011309b648 = puVar1;
  return;
}



/* Entry: 1048cab94; end: 1048cabd3;  */

void FUN_1048cab94(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44444;
  _swift_getWitnessTable(&UNK_10dd44444,&UNK_1107b3a88);
  puRam000000011309b648 = puVar1;
  return;
}



/* Entry: 1048cabd4; end: 1048caca3;  */

ulong FUN_1048cabd4(ulong param_1)

{
  if (0x1c < param_1) {
    param_1 = 0x1d;
  }
  return param_1;
}



/* Entry: 1048caca4; end: 1048caca7; -[SCAttributedMapSettingsSubtask description] */

void FUN_1048caca4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048caca8; end: 1048cacab; -[SCAttributedMapUISubtask description] */

void FUN_1048caca8(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cacac; end: 1048cacbb; -[SCAttributedMapMessageSubtask description] */

void FUN_1048cacac(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cacbc; end: 1048cacbf; -[SCAttributedMapSettingsSubtask copyWithZone:] */

void FUN_1048cacbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cacc0; end: 1048caccb; -[SCAttributedMapUISubtask copyWithZone:] */

void FUN_1048cacc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048caccc; end: 1048cacd3; -[SCAttributedMapMessageSubtask copyWithZone:] */

void FUN_1048caccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cacd4; end: 1048cad03; -[SCAttributedMapTask copyWithZone:] */

void FUN_1048cacd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cad04; end: 1048cad1f; -[SCAttributedMDPDataSaverPromptSubTask description] */

void FUN_1048cad04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cad20; end: 1048cad67; -[SCAttributedMDPDataSaverPromptSubTask init] */

void FUN_1048cad20(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMDPTaskWrapper.swift",0x2e,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cad68);
  (*pcVar1)();
}



/* Entry: 1048cad68; end: 1048cadaf; -[SCAttributedMDPDataSaverPromptSubTask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cad68(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b660));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048cadb0; end: 1048cae4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048cadb0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_11309b660);
      cVar2 = *(char *)(lStack_58 + _DAT_11309b660);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048cae50; end: 1048caecf; -[SCAttributedMDPDataSaverPromptSubTask isEqual:] */

uint FUN_1048cae50(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048cadb0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048caed0; end: 1048caed7; +[SCAttributedMDPDataSaverPromptSubTask showPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048caed0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b660) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048caed8; end: 1048caef3; -[SCAttributedMDPDataSaverPromptSubTask matchExposeScope:showPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048caed8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_11309b660) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048caef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 1048caef4; end: 1048caf9f;  */

void FUN_1048caef4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048cafa0; end: 1048cafe3; -[SCAttributedMDPTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cafa0(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309b650) == '\x02') && (*(long *)(param_1 + _DAT_11309b658) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cafe4);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cafe4; end: 1048cb02b; -[SCAttributedMDPTask init] */

void FUN_1048cafe4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMDPTaskWrapper.swift",0x2e,2,0xa8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cb02c);
  (*pcVar1)();
}



/* Entry: 1048cb02c; end: 1048cb033; +[SCAttributedMDPTask legacyFetchMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb02c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b650) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309b658) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb034; end: 1048cb03b; +[SCAttributedMDPTask networkMapping] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb034(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b650) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309b658) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb03c; end: 1048cb043; +[SCAttributedMDPTask webProxyStateManagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb03c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b650) = 5;
  *(undefined8 *)(lVar1 + _DAT_11309b658) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb044; end: 1048cb04b; +[SCAttributedMDPTask contentDeliveryPrewarmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb044(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b650) = 6;
  *(undefined8 *)(lVar1 + _DAT_11309b658) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb04c; end: 1048cb0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb04c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined4 param_10,undefined4 param_11,code *param_12,undefined4 param_13,
                  undefined4 param_14,code *param_15)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_11309b650);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      (*param_1)();
    }
    else if (bVar1 == 1) {
      (*param_3)();
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_11309b658) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048cb0f8);
        (*pcVar2)();
      }
      (*param_5)();
    }
  }
  else {
    if (bVar1 < 5) {
      param_15 = param_9;
      if (bVar1 == 3) {
        (*param_7)();
        return;
      }
    }
    else if (bVar1 == 5) {
      param_15 = param_12;
    }
    (*param_15)();
  }
  return;
}



/* Entry: 1048cb0f8; end: 1048cb1ab; -[SCAttributedMDPTask matchCacheManagerUserAvailability:storageManagement:dataSaverModePrompt:legacyFetchMedia:networkMapping:webProxyStateManagement:contentDeliveryPrewarmer:] */

void FUN_1048cb0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_1048cb04c(0x1048cb768,auStack_40,0x1048cb790,auStack_60,0x1048cb770,auStack_80,0x1048cb794,
                auStack_a0,0x1048cb798,auStack_c0,0x1048cb79c,auStack_e0,0x1048cb7a0,auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 1048cb1ac; end: 1048cb1af;  */

void FUN_1048cb1ac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048cb1b0; end: 1048cb1e3;  */

void FUN_1048cb1b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048cb1e4; end: 1048cb407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb1e4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined1 uVar5;
  undefined8 *apuStack_c0 [2];
  undefined8 *apuStack_b0 [2];
  undefined8 auStack_a0 [2];
  undefined8 *apuStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 *apuStack_70 [2];
  undefined8 *apuStack_60 [2];
  undefined8 *apuStack_50 [2];
  undefined8 *apuStack_40 [2];
  
  ppuVar4 = apuStack_c0;
  uVar5 = 0;
  uVar1 = (uint)param_1 & 0xff;
  puVar3 = auStack_a0;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      puVar3 = auStack_80;
      uVar5 = 1;
    }
    else {
      if (uVar1 == 2) {
        func_0x0001009a18b0();
        puVar3 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 0;
        *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
        apuStack_c0[0] = puVar3;
        goto LAB_1048cb3e8;
      }
      if (uVar1 == 3) {
        func_0x0001009a18b0();
        puVar3 = param_1;
        _objc_allocWithZone();
        *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 1;
        *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
        ppuVar4 = apuStack_b0;
        apuStack_b0[0] = puVar3;
        goto LAB_1048cb3e8;
      }
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      func_0x0001009a18b0();
      puVar3 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 3;
      *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
      ppuVar4 = apuStack_70;
      apuStack_70[0] = puVar3;
      goto LAB_1048cb3e8;
    }
    if (uVar1 == 5) {
      func_0x0001009a18b0();
      puVar3 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 4;
      *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
      ppuVar4 = apuStack_60;
      apuStack_60[0] = puVar3;
      goto LAB_1048cb3e8;
    }
  }
  else {
    if (uVar1 == 6) {
      func_0x0001009a18b0();
      puVar3 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 5;
      *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
      ppuVar4 = apuStack_50;
      apuStack_50[0] = puVar3;
      goto LAB_1048cb3e8;
    }
    if (uVar1 == 7) {
      func_0x0001009a18b0();
      puVar3 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar3 + _DAT_11309b650) = 6;
      *(undefined8 *)((long)puVar3 + _DAT_11309b658) = 0;
      ppuVar4 = apuStack_40;
      apuStack_40[0] = puVar3;
      goto LAB_1048cb3e8;
    }
  }
  FUN_1048cb408();
  puVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)((long)puVar2 + _DAT_11309b660) = uVar5;
  *puVar3 = puVar2;
  puVar3[1] = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  param_1 = puVar3;
  func_0x0001009a18b0();
  puVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)((long)puVar2 + _DAT_11309b650) = 2;
  *(undefined8 **)((long)puVar2 + _DAT_11309b658) = puVar3;
  ppuVar4 = apuStack_90;
  apuStack_90[0] = puVar2;
LAB_1048cb3e8:
  ppuVar4[1] = param_1;
  _objc_msgSendSuper2(ppuVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048cb408; end: 1048cb427;  */

void FUN_1048cb408(void)

{
  _objc_opt_self(&PTR_PTR_1129e1d68);
  return;
}



/* Entry: 1048cb428; end: 1048cb6d3;  */

int FUN_1048cb428(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048cb4a4;
        goto LAB_1048cb488;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048cb488:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1048cb4a4:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048cb6d4; end: 1048cb713;  */

void FUN_1048cb6d4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4458c;
  _swift_getWitnessTable(&UNK_10dd4458c,&UNK_1107b3db0);
  puRam000000011309b6b8 = puVar1;
  return;
}



/* Entry: 1048cb714; end: 1048cb717;  */

void FUN_1048cb714(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4462c;
  _swift_getWitnessTable(&UNK_10dd4462c,&UNK_1107b3d20);
  puRam000000011309b6c0 = puVar1;
  return;
}



/* Entry: 1048cb718; end: 1048cb757;  */

void FUN_1048cb718(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4462c;
  _swift_getWitnessTable(&UNK_10dd4462c,&UNK_1107b3d20);
  puRam000000011309b6c0 = puVar1;
  return;
}



/* Entry: 1048cb758; end: 1048cb7cb;  */

ulong FUN_1048cb758(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 1048cb7cc; end: 1048cb7cf; -[SCAttributedMDPDataSaverPromptSubTask copyWithZone:] */

void FUN_1048cb7cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cb7d0; end: 1048cb7d7; -[SCAttributedMDPTask copyWithZone:] */

void FUN_1048cb7d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cb7d8; end: 1048cb7ff;  */

void FUN_1048cb7d8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1048cc51c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1048cb800; end: 1048cb81b; -[SCVSRTask description] */

void FUN_1048cb800(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb81c; end: 1048cb863; -[SCVSRTask init] */

void FUN_1048cb81c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMediaEngineTaskWrapper.swift",0x36,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cb864);
  (*pcVar1)();
}



/* Entry: 1048cb864; end: 1048cb86b; +[SCVSRTask loadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb864(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb86c; end: 1048cb873; +[SCVSRTask unloadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb86c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb874; end: 1048cb87b; +[SCVSRTask processSampleBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb874(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb87c; end: 1048cb883; +[SCVSRTask setupVSRNeoPlayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb87c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb884; end: 1048cb88b; +[SCVSRTask debugView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb884(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb88c; end: 1048cb8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb88c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b6c8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb8dc; end: 1048cb927; -[SCVSRTask matchLoadModel:unloadModel:processSampleBuffer:setupVSRNeoPlayerView:debugView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cb8dc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309b6c8);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001048cb920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048cb928; end: 1048cb9d3;  */

void FUN_1048cb928(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048cb9d4; end: 1048cb9f7; -[SCAttributedMediaEngineTask description] */

void FUN_1048cb9d4(void)

{
  _objc_retain();
  func_0x0001000b79c8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cb9f8; end: 1048cba3f; -[SCAttributedMediaEngineTask init] */

void FUN_1048cb9f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMediaEngineTaskWrapper.swift",0x36,2,0xc3,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cba40);
  (*pcVar1)();
}



/* Entry: 1048cba40; end: 1048cbadb; +[SCAttributedMediaEngineTask videoTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cba40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbadc; end: 1048cbb77; +[SCAttributedMediaEngineTask imageTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbb78; end: 1048cbc17; +[SCAttributedMediaEngineTask snapDocParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbb78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbc18; end: 1048cbc1f; +[SCAttributedMediaEngineTask videoFilterCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbc18(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbc20; end: 1048cbccb; +[SCAttributedMediaEngineTask videoSuperResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11309b6d0) = 4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar3 + _DAT_11309b6f0) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbccc; end: 1048cbcd3; +[SCAttributedMediaEngineTask warmupAudioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbccc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 5;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbcd4; end: 1048cbcdb; +[SCAttributedMediaEngineTask warmupNeoPlayerAppleCodecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbcd4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = 6;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbcdc; end: 1048cbe87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbcdc(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309b6d0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b6e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309b6f0) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cbe88; end: 1048cbf3b; -[SCAttributedMediaEngineTask matchVideoTranscoder:imageTranscoder:snapDocParser:videoFilterCoordinator:videoSuperResolution:warmupAudioSession:warmupNeoPlayerAppleCodecs:] */

void FUN_1048cbe88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048cbd78(0x1048cc53c,auStack_40,0x1048cc5a8,auStack_60,0x1048cc5ac,auStack_80,
                      0x1048cc544,auStack_a0,0x1048cc54c,auStack_c0,0x1048cc56c,auStack_e0,
                      0x1048cc570,auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 1048cbf3c; end: 1048cbf6f;  */

void FUN_1048cbf3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048cbf70; end: 1048cbff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbf70(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_70 [10];
  
  uVar4 = param_1;
  FUN_1048cc1cc();
  uVar5 = uVar4;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_70 + 6;
  if (uVar1 != 3) {
    puVar2 = auStack_70 + 8;
  }
  puVar3 = auStack_70 + 4;
  if (uVar1 != 2) {
    puVar3 = puVar2;
  }
  puVar2 = auStack_70;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_70 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  *(char *)(uVar5 + _DAT_11309b6c8) = (char)param_1;
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048cbff8; end: 1048cc1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cbff8(ulong param_1,byte param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 uVar10;
  ulong auStack_d0 [14];
  
  uVar7 = param_1;
  if (param_2 < 2) {
    uVar6 = (ulong)param_2;
    bVar2 = param_2 == 0;
    uVar4 = uVar6;
    uVar8 = uVar6;
    if (!bVar2) {
      uVar7 = 0;
      uVar4 = 0;
      uVar8 = param_1;
    }
    uVar10 = 1;
    puVar5 = auStack_d0;
    bVar9 = param_2;
    if (param_2 != 0) {
      uVar6 = 0;
      puVar5 = auStack_d0 + 2;
    }
  }
  else {
    uVar4 = param_1;
    if (param_2 == 2) {
      uVar7 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar6 = 0;
      bVar2 = true;
      puVar5 = auStack_d0 + 4;
      bVar9 = 1;
    }
    else {
      if (param_2 == 3) {
        FUN_1048cbf70();
        puVar5 = auStack_d0 + 8;
        param_2 = 4;
        uVar6 = param_1;
      }
      else {
        if (param_1 == 0) {
          param_2 = 3;
          bVar2 = true;
          uVar10 = 1;
          puVar5 = auStack_d0 + 6;
          uVar6 = param_1;
          uVar8 = param_1;
          bVar9 = 1;
          goto LAB_1048cc138;
        }
        if (param_1 == 1) {
          uVar6 = 0;
          puVar5 = auStack_d0 + 10;
          param_2 = 5;
        }
        else {
          uVar6 = 0;
          puVar5 = auStack_d0 + 0xc;
          param_2 = 6;
        }
      }
      bVar2 = true;
      uVar10 = 1;
      uVar4 = 0;
      uVar7 = 0;
      uVar8 = 0;
      bVar9 = 1;
    }
  }
LAB_1048cc138:
  func_0x0001000b76a0();
  uVar3 = param_1;
  _objc_allocWithZone();
  *(byte *)(uVar3 + _DAT_11309b6d0) = param_2;
  puVar1 = (ulong *)(uVar3 + _DAT_11309b6d8);
  *puVar1 = uVar7;
  *(byte *)(puVar1 + 1) = bVar9;
  puVar1 = (ulong *)(uVar3 + _DAT_11309b6e0);
  *puVar1 = uVar8;
  *(bool *)(puVar1 + 1) = bVar2;
  puVar1 = (ulong *)(uVar3 + _DAT_11309b6e8);
  *puVar1 = uVar4;
  *(undefined1 *)(puVar1 + 1) = uVar10;
  *(ulong *)(uVar3 + _DAT_11309b6f0) = uVar6;
  *puVar5 = uVar3;
  puVar5[1] = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048cc1cc; end: 1048cc1eb;  */

void FUN_1048cc1cc(void)

{
  _objc_opt_self(&PTR_PTR_1129e1ef0);
  return;
}



/* Entry: 1048cc1ec; end: 1048cc497;  */

int FUN_1048cc1ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048cc268;
        goto LAB_1048cc24c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048cc24c:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1048cc268:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048cc498; end: 1048cc4d7;  */

void FUN_1048cc498(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd44730;
  _swift_getWitnessTable(&UNK_10dd44730,&UNK_1107b3f28);
  puRam000000011309b748 = puVar1;
  return;
}



/* Entry: 1048cc4d8; end: 1048cc4db;  */

void FUN_1048cc4d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd447d0;
  _swift_getWitnessTable(&UNK_10dd447d0,&UNK_1107b3e98);
  puRam000000011309b750 = puVar1;
  return;
}



/* Entry: 1048cc4dc; end: 1048cc51b;  */

void FUN_1048cc4dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309b750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd447d0;
  _swift_getWitnessTable(&UNK_10dd447d0,&UNK_1107b3e98);
  puRam000000011309b750 = puVar1;
  return;
}



/* Entry: 1048cc51c; end: 1048cc59b;  */

ulong FUN_1048cc51c(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1048cc59c; end: 1048cc59f; -[SCAttributedMediaEngineTask copyWithZone:] */

void FUN_1048cc59c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cc5a0; end: 1048cc5af; -[SCVSRTask copyWithZone:] */

void FUN_1048cc5a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048cc5b0; end: 1048cc5f7; -[SCAttributedMemoriesEncryptionSubtask init] */

void FUN_1048cc5b0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cc5f8);
  (*pcVar1)();
}



/* Entry: 1048cc5f8; end: 1048cc603; -[SCAttributedMemoriesEncryptionSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc5f8(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b758));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048cc604; end: 1048cc60f; -[SCAttributedMemoriesEncryptionSubtask isEqual:] */

uint FUN_1048cc604(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048cc85c(&uStack_50,&DAT_11309b758);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048cc610; end: 1048cc61f; +[SCAttributedMemoriesEncryptionSubtask doubleEncryptionResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc610(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b758) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc620; end: 1048cc62f; +[SCAttributedMemoriesEncryptionSubtask doubleEncryptionInvoker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc620(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b758) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc630; end: 1048cc63f; +[SCAttributedMemoriesEncryptionSubtask encryptionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc630(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b758) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc640; end: 1048cc64b; -[SCAttributedMemoriesEncryptionSubtask matchDoubleEncryptionResolver:doubleEncryptionInvoker:encryptionInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc640(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309b758) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309b758) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048cc79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048cc64c; end: 1048cc693; -[SCAttributedMemoriesTranscodingSubtask init] */

void FUN_1048cc64c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0xa2,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cc694);
  (*pcVar1)();
}



/* Entry: 1048cc694; end: 1048cc69f; -[SCAttributedMemoriesTranscodingSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc694(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b760));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048cc6a0; end: 1048cc6ab; -[SCAttributedMemoriesTranscodingSubtask isEqual:] */

uint FUN_1048cc6a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048cc85c(&uStack_50,&DAT_11309b760);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048cc6ac; end: 1048cc73b;  */

uint FUN_1048cc6ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048cc85c(&uStack_50,param_4);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048cc73c; end: 1048cc74b; +[SCAttributedMemoriesTranscodingSubtask opportunisticRetranscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc73c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b760) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc74c; end: 1048cc75b; +[SCAttributedMemoriesTranscodingSubtask snapDocTranscode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc74c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b760) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc75c; end: 1048cc76b; +[SCAttributedMemoriesTranscodingSubtask snapDocTranscodeForExport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc75c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b760) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc76c; end: 1048cc7bf; -[SCAttributedMemoriesTranscodingSubtask matchOpportunisticRetranscode:snapDocTranscode:snapDocTranscodeForExport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc76c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309b760) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309b760) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048cc79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048cc7c0; end: 1048cc807; -[SCAttributedMemoriesUISubtask init] */

void FUN_1048cc7c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedMemoriesTaskWrapper.swift",0x33,2,0x111,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048cc808);
  (*pcVar1)();
}



/* Entry: 1048cc808; end: 1048cc813; -[SCAttributedMemoriesUISubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc808(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309b768));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048cc814; end: 1048cc85b;  */

void FUN_1048cc814(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + *param_3));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048cc85c; end: 1048cc8fb;  */

bool FUN_1048cc85c(undefined8 param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + *param_2);
      cVar2 = *(char *)(lStack_58 + *param_2);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 1048cc8fc; end: 1048cc917; -[SCAttributedMemoriesUISubtask isEqual:] */

uint FUN_1048cc8fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1048cc85c(&uStack_50,&DAT_11309b768);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1048cc918; end: 1048cc927; +[SCAttributedMemoriesUISubtask general] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048cc918(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309b768) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048cc928; end: 1048cc97b;  */

void FUN_1048cc928(long *param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + *param_1) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}


