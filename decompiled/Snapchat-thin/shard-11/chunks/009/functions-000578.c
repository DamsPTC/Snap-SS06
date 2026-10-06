/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108998ba8; end: 108998bc7;  */

void FUN_108998ba8(void)

{
  return;
}



/* Entry: 108998bc8; end: 108998c6b;  */

void FUN_108998bc8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 1) {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    func_0x0001089992a8();
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)((long)puVar1 + 100) = 0;
    *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  }
  else if (param_2 == 4 || param_2 == 2) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_110aa3be0;
    puVar1[1] = &PTR_DAT_110aaac48;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    *(undefined8 *)((long)puVar1 + 0x51) = 0;
    *(undefined8 *)((long)puVar1 + 0x49) = 0;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 108998c6c; end: 108998c77;  */

long FUN_108998c6c(long param_1)

{
  return param_1 + 8;
}



/* Entry: 108998c78; end: 108998e07;  */

void FUN_108998c78(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  int unaff_w22;
  ulong uVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  undefined4 uStack_44;
  
  func_0x0001089991c8();
  if (param_1 != (undefined8 *)0x0) {
    uStack_44 = 0;
    uStack_50 = 0;
    func_0x0001089991b8();
    _CMVideoFormatDescriptionGetHEVCParameterSetAtIndex();
    if ((int)param_1 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      if (unaff_w22 != 0) {
        for (uVar4 = 0; iVar1 = (int)param_1, uVar4 < uStack_50; uVar4 = uVar4 + 1) {
          func_0x000108999254();
          _CMVideoFormatDescriptionGetHEVCParameterSetAtIndex();
          if (iVar1 != 0) goto LAB_108998dcc;
          param_1 = &uStack_70;
          func_0x000104bd9994(param_1,uStack_68,&UNK_10df7c83d,&DAT_10df7c841);
          func_0x000108999288(0);
        }
      }
      _CMSampleBufferGetDataBuffer();
      if (unaff_x20 != 0) {
        lStack_78 = 0;
        lVar2 = unaff_x20;
        func_0x000108999244();
        iVar1 = (int)lVar2;
        if (iVar1 == 0) {
          func_0x000108999194();
          if (iVar1 != 0) goto LAB_108998dcc;
        }
        else {
          _CFRetain(unaff_x20);
          lStack_78 = unaff_x20;
        }
        lVar2 = lStack_78;
        _CMBlockBufferGetDataLength();
        lVar3 = lStack_78;
        func_0x0001089991b8();
        iVar1 = (int)lVar3;
        _CMBlockBufferGetDataPointer();
        if (iVar1 == 0) {
          while (lVar2 != 0) {
            func_0x000104bd9994(&uStack_70,uStack_68,&UNK_10df7c83d,&DAT_10df7c841);
            func_0x000108999204();
            FUN_108998e4c(&uStack_70);
            func_0x000108999228();
          }
          _CFRelease(lStack_78);
          func_0x000108999270();
        }
        else {
          _CFRelease(lStack_78);
        }
      }
LAB_108998dcc:
      func_0x00010899929c();
      func_0x000108999220();
      return;
    }
  }
  func_0x00010899929c();
  return;
}



/* Entry: 108998e08; end: 108998e37;  */

undefined8 * FUN_108998e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3be0;
  func_0x000108a35cc8(param_1 + 1);
  return param_1;
}



/* Entry: 108998e38; end: 108998e4b;  */

void FUN_108998e38(void)

{
  FUN_108998e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108998e4c; end: 108998f8f;  */

void FUN_108998e4c(long *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar5 = param_4 - (long)param_3;
  if (0 < lVar5) {
    plVar3 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar3 - lVar4 < lVar5) {
      plVar2 = param_1;
      func_0x000107c27908(param_1,(lVar5 - *param_1) + lVar4);
      lVar4 = *param_1;
      plStack_68 = (long *)0x0;
      plStack_48 = plVar3;
      if (plVar2 != (long *)0x0) {
        func_0x000107c2790c();
        plStack_68 = plVar3;
      }
      puStack_60 = (undefined1 *)((long)plStack_68 + ((long)param_2 - lVar4));
      lStack_50 = (long)plStack_68 + (long)plVar2;
      puStack_58 = puStack_60 + lVar5;
      puVar1 = puStack_60;
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar1 = *param_3;
        puVar1 = puVar1 + 1;
        param_3 = param_3 + 1;
      }
      func_0x000104bd9b18(param_1,&plStack_68,param_2);
      func_0x000107c27910(&plStack_68);
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      if (lVar5 - lVar4 == 0 || lVar5 < lVar4) {
        func_0x0001089991dc();
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *param_2 = *param_3;
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
        }
      }
      else {
        func_0x000100a7e774(param_1,param_3 + lVar4,param_4,lVar5 - lVar4);
        if (0 < lVar4) {
          func_0x0001089991dc();
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            *param_2 = *param_3;
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108998f90; end: 108998f97;  */

long FUN_108998f90(long param_1)

{
  return param_1 + 8;
}



/* Entry: 108998f98; end: 108998fef;  */

void FUN_108998f98(undefined8 param_1,undefined8 param_2)

{
  _VTSessionSetProperty
            (param_2,*(undefined8 *)PTR__kVTCompressionPropertyKey_ProfileLevel_11034b0a0,
             *(undefined8 *)PTR__kVTProfileLevel_H264_High_AutoLevel_11034b0c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__VTSessionSetProperty_11034b060)
            (param_2,*(undefined8 *)PTR__kVTCompressionPropertyKey_H264EntropyMode_11034b088,
             *(undefined8 *)PTR__kVTH264EntropyMode_CABAC_11034b0c0);
  return;
}



/* Entry: 108998ff0; end: 10899917f;  */

void FUN_108998ff0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  int unaff_w22;
  ulong uVar4;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  undefined4 uStack_44;
  
  func_0x0001089991c8();
  if (param_1 != (undefined8 *)0x0) {
    uStack_44 = 0;
    uStack_50 = 0;
    func_0x0001089991b8();
    _CMVideoFormatDescriptionGetH264ParameterSetAtIndex();
    if ((int)param_1 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      if (unaff_w22 != 0) {
        for (uVar4 = 0; iVar1 = (int)param_1, uVar4 < uStack_50; uVar4 = uVar4 + 1) {
          func_0x000108999254();
          _CMVideoFormatDescriptionGetH264ParameterSetAtIndex();
          if (iVar1 != 0) goto LAB_108999144;
          param_1 = &uStack_70;
          FUN_1088793cc(param_1,uStack_68,&UNK_10df7c876,&UNK_10df7c87a);
          func_0x000108999288(0);
        }
      }
      _CMSampleBufferGetDataBuffer();
      if (unaff_x20 != 0) {
        lStack_78 = 0;
        lVar2 = unaff_x20;
        func_0x000108999244();
        iVar1 = (int)lVar2;
        if (iVar1 == 0) {
          func_0x000108999194();
          if (iVar1 != 0) goto LAB_108999144;
        }
        else {
          _CFRetain(unaff_x20);
          lStack_78 = unaff_x20;
        }
        lVar2 = lStack_78;
        _CMBlockBufferGetDataLength();
        lVar3 = lStack_78;
        func_0x0001089991b8();
        iVar1 = (int)lVar3;
        _CMBlockBufferGetDataPointer();
        if (iVar1 == 0) {
          while (lVar2 != 0) {
            FUN_1088793cc(&uStack_70,uStack_68,&UNK_10df7c876,&UNK_10df7c87a);
            func_0x000108999204();
            FUN_108998e4c(&uStack_70);
            func_0x000108999228();
          }
          _CFRelease(lStack_78);
          func_0x000108999270();
        }
        else {
          _CFRelease(lStack_78);
        }
      }
LAB_108999144:
      func_0x00010899929c();
      func_0x000108999220();
      return;
    }
  }
  func_0x00010899929c();
  return;
}



/* Entry: 108999180; end: 1089992c3;  */

void FUN_108999180(void)

{
  func_0x0001089992a8();
  return;
}



/* Entry: 1089992c4; end: 10899931b;  */

void FUN_1089992c4(long param_1)

{
  func_0x0001089992ec(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10899931c; end: 1089993ff;  */

void FUN_10899931c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  pppuVar3 = &ppuStack_70;
  pppuVar4 = &ppuStack_70;
  uVar1 = param_1[1];
  if (uVar1 != 0 && uVar1 != 3) {
    uStack_50 = 0x34;
    if (uVar1 == 2) {
      uStack_50 = 0x36;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    ppuStack_70 = &PTR_DAT_1107eac58;
    uStack_68 = 0;
    uVar2 = (ulong)*param_1;
    func_0x000108996b30(uVar2);
    FUN_108949d24(&ppuStack_70,uVar2);
    func_0x000108942850(auStack_48,pppuVar3);
    func_0x000104c03ee4();
    FUN_1089a3c0c();
    func_0x000107c28148(param_1 + 4);
    puVar5 = *pppuVar4;
    func_0x000108999e58(*(undefined8 *)*puVar5);
    FUN_1089a3c0c();
    FUN_10895e074(param_1 + 4);
    func_0x000108999e68(*puVar5);
    func_0x000108999e58();
    func_0x000108999e30();
  }
  return;
}



/* Entry: 108999400; end: 108999457;  */

void FUN_108999400(long param_1,int param_2)

{
  if (param_2 == 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else if (param_2 == 1) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    return;
  }
  return;
}



/* Entry: 108999458; end: 1089994af;  */

void FUN_108999458(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_70 [80];
  
  FUN_1089994b0(auStack_70);
  if (*(int *)(param_1 + 4) == 1) {
    lVar1 = 0x58;
  }
  else {
    if (*(int *)(param_1 + 4) != 2) {
      return;
    }
    lVar1 = 0xa8;
  }
  _memcpy(param_2 + lVar1,auStack_70,0x49);
  return;
}



/* Entry: 1089994b0; end: 1089997b7;  */

void FUN_1089994b0(undefined1 *param_1,long param_2,long param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  long lStack_f8;
  int iStack_f0;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 *puStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  uint *puStack_90;
  int *piStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  
  if (((*(byte *)(param_5 + 0x6c) & 1) != 0) ||
     (iStack_128 = *(int *)(param_5 + 100), iStack_128 == 0)) {
    *param_1 = 0;
    param_1[0x48] = 0;
    return;
  }
  uStack_12c = *(undefined4 *)(param_5 + 0x68);
  iStack_130 = 0;
  lStack_120 = -1;
  plStack_118 = (long *)0xffffffffffffffff;
  uStack_110 = 0;
  uStack_108 = 0;
  iStack_100 = 0;
  lStack_f8 = -1;
  iStack_f0 = 0;
  lVar7 = param_5 + 0xa0;
  uStack_e4 = param_4;
  FUN_108999dbc(lVar7,&uStack_e4);
  if ((param_5 + 0xa8 == lVar7) || (*(char *)(lVar7 + 0x160) != '\x01')) goto LAB_108999780;
  lStack_120 = (long)*(int *)(lVar7 + 0x134);
  uVar4 = *(uint *)(lVar7 + 300);
  iVar2 = 0;
  if (*(uint *)(param_2 + 0x2c) <= uVar4) {
    iVar2 = uVar4 - *(uint *)(param_2 + 0x2c);
  }
  *(uint *)(param_2 + 0x2c) = uVar4;
  uStack_108._4_4_ = iVar2;
  if (*(long *)(lVar7 + 0x158) == 0) {
    plVar8 = (long *)0xffffffffffffffff;
  }
  else {
    lStack_b0 = *(long *)(lVar7 + 0x148);
    plVar8 = &lStack_b0;
    FUN_1089801c8();
  }
  uVar4 = *(uint *)(lVar7 + 0x34);
  iVar3 = 0;
  if (*(uint *)(param_2 + 0x30) <= uVar4) {
    iVar3 = uVar4 - *(uint *)(param_2 + 0x30);
  }
  *(uint *)(param_2 + 0x30) = uVar4;
  uVar4 = *(uint *)(lVar7 + 0x110);
  uVar5 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x38) = uVar4;
  lVar1 = lVar7 + 0x28;
  iVar6 = 0;
  if (uVar5 <= uVar4) {
    iVar6 = uVar4 - uVar5;
  }
  uStack_110 = CONCAT44(iVar6,iVar3);
  uVar4 = *(uint *)(lVar7 + 0x78);
  iVar3 = 0;
  if (*(uint *)(param_2 + 0x28) <= uVar4) {
    iVar3 = uVar4 - *(uint *)(param_2 + 0x28);
  }
  *(uint *)(param_2 + 0x28) = uVar4;
  uVar4 = *(uint *)(lVar7 + 0x170);
  iStack_100 = 0;
  if (*(uint *)(param_2 + 0x34) <= uVar4) {
    iStack_100 = uVar4 - *(uint *)(param_2 + 0x34);
  }
  *(uint *)(param_2 + 0x34) = uVar4;
  uStack_108 = CONCAT44(uStack_108._4_4_,iVar3);
  plStack_118 = plVar8;
  if (*(char *)(lVar7 + 0x180) == '\x01') {
    puVar9 = (ulong *)(lVar7 + 0x178);
    func_0x000107267f8c();
    uVar12 = *puVar9;
    lStack_f8 = 0;
    if (*(ulong *)(param_2 + 0x40) <= uVar12) {
      lStack_f8 = uVar12 - *(ulong *)(param_2 + 0x40);
    }
    *(ulong *)(param_2 + 0x40) = uVar12;
  }
  iStack_f0 = *(int *)(lVar7 + 0x40) * *(int *)(lVar7 + 0x3c);
  iVar6 = (int)param_2 + 0x10;
  func_0x00010563be04();
  iStack_130 = iVar6 - *(int *)(param_2 + 0x48);
  if (iStack_130 == 0 || iVar6 < *(int *)(param_2 + 0x48)) {
    iStack_130 = 0;
  }
  *(int *)(param_2 + 0x48) = iVar6;
  uVar4 = iVar2 + iVar3;
  uStack_64 = 0;
  if (uVar4 != 0) {
    uStack_64 = 0;
    if (uVar4 != 0) {
      uStack_64 = (uint)(iVar2 * 100) / uVar4;
    }
  }
  uStack_68 = 0x8001b;
  if (*(int *)(param_3 + 0x18) != 2) {
    uStack_68 = 0x8001c;
  }
  uStack_6c = 0x20005;
  if (*(char *)(param_3 + 0x1c) != '\0') {
    uStack_6c = 0x20006;
  }
  puStack_c8 = &uStack_68;
  puStack_b8 = &uStack_6c;
  puStack_90 = &uStack_64;
  piStack_88 = &iStack_130;
  lStack_e0 = param_3;
  lStack_d8 = lVar1;
  lStack_d0 = param_2;
  lStack_c0 = param_5;
  lStack_b0 = lVar1;
  puStack_a8 = puStack_c8;
  puStack_a0 = puStack_b8;
  lStack_98 = param_5;
  lStack_80 = param_2;
  lStack_78 = param_3;
  if (*(int *)(param_2 + 4) == 2) {
    FUN_1089997b8(&lStack_b0,0x11,0x17,0x19,0x26,0x3b,0x2a,0x2e,0x23);
    uVar10 = 0x1b;
    uVar11 = 0;
LAB_10899973c:
    FUN_108999a58(&lStack_e0,uVar10,uVar11);
  }
  else if (*(int *)(param_2 + 4) == 1) {
    FUN_1089997b8(&lStack_b0,0xf,0x16,0x18,0x24,0x39,0x28,0x2c,0x22);
    uVar10 = 0x1a;
    uVar11 = 0x10000001c;
    goto LAB_10899973c;
  }
  FUN_108999c70(param_2,0x1e,param_2 + 0x4c);
  FUN_108999c70(param_2,0x1f,param_2 + 0x50);
  FUN_108999c70(param_2,0x20,param_2 + 0x54);
  FUN_108999c70(param_2,0x21,param_2 + 0x58);
LAB_108999780:
  _memcpy(param_1,&iStack_130,0x48);
  param_1[0x48] = 1;
  return;
}



/* Entry: 1089997b8; end: 108999a57;  */

void FUN_1089997b8(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long *plVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  uint *puVar4;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar4 = (uint *)param_1[6];
  plVar1 = param_1;
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_2;
  func_0x000108999e74(*(undefined4 *)(*param_1 + 0x1c));
  func_0x000108999e38();
  func_0x000108999e58();
  func_0x000108999e30();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_3;
  FUN_108999d28(&ppuStack_88,*(undefined4 *)param_1[1]);
  FUN_10895dfd8();
  func_0x000108999e74(*(undefined4 *)(*param_1 + 0x1c));
  plVar1 = (long *)*plVar1;
  (**(code **)(*plVar1 + 0x10))();
  func_0x000108999e30();
  FUN_1089a3c0c();
  func_0x000108999e48();
  uStack_68 = param_4;
  FUN_108999d28(&ppuStack_88,*(undefined4 *)param_1[1]);
  FUN_10895dfd8();
  func_0x000108999e74(*(undefined4 *)(param_1[3] + 100));
  plVar1 = (long *)*plVar1;
  (**(code **)(*plVar1 + 0x10))();
  func_0x000108999e30();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_5;
  func_0x000108999e38();
  func_0x000108999e58();
  func_0x000108999e30();
  FUN_1089a3c0c();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_DAT_1107eac58;
  uStack_80 = 0;
  uStack_68 = param_6;
  func_0x000108999e38();
  func_0x000108999e58();
  func_0x000108999e30();
  FUN_1089a3c0c();
  func_0x000108999e48();
  uStack_68 = param_7;
  func_0x000108999e38();
  func_0x000108999e58();
  func_0x000108999e30();
  if (*(int *)(param_1[5] + 0x24) != 0) {
    FUN_1089a3c0c();
    func_0x000108999e48();
    pppuVar2 = &ppuStack_88;
    uStack_68 = param_8;
    FUN_10895dfd8(pppuVar2,*(undefined4 *)param_1[2]);
    plVar1 = (long *)*plVar1;
    func_0x000108999e68(plVar1,pppuVar2,*(undefined4 *)(param_1[5] + 0x24));
    (*extraout_x8)();
    func_0x000108999e30();
  }
  FUN_1089a3c0c();
  func_0x000108999e48();
  uStack_68 = param_9;
  uVar3 = (ulong)*puVar4;
  func_0x000108996b30(uVar3);
  pppuVar2 = &ppuStack_88;
  FUN_108949d24(pppuVar2,uVar3);
  func_0x000107c278b8(auStack_a0,&UNK_10f4edfe2);
  FUN_108957f58(pppuVar2,auStack_a0,*(undefined4 *)(*param_1 + 0x14));
  func_0x000108999e68(*plVar1,pppuVar2,*(undefined8 *)(param_1[7] + 0x10));
  (*extraout_x8_00)();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  func_0x000108999e30();
  return;
}



/* Entry: 108999a58; end: 108999c6f;  */

void FUN_108999a58(long *param_1,undefined4 param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 auStack_70 [3];
  undefined8 auStack_58 [3];
  
  if ((*(byte *)(*param_1 + 0x1c) & 1) == 0) {
    puVar1 = (uint *)param_1[2];
    uVar2 = *(int *)(param_1[1] + 0x1c) / 1000;
    puVar3 = auStack_58;
    func_0x000107c278b8(puVar3,&DAT_10f3dd8f1);
    if (uVar2 < 0x9c5) {
      uVar2 = uVar2 + (((uVar2 & 0xffff) / 0xfa) * 0xfa - (uVar2 & 0xffff));
      ppuStack_a0 = (undefined **)(ulong)uVar2;
      uStack_98 = 0;
      uStack_90 = (ulong)(uVar2 + 0xf9);
      uStack_88 = 0;
      func_0x000107c2793c(&UNK_10f2e0482);
      func_0x000107c3173c(auStack_70);
      func_0x000107c27b9c(auStack_58,auStack_70);
      puVar3 = auStack_70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    FUN_1089a3c0c();
    uStack_90 = 0;
    uStack_88 = 0;
    ppuStack_a0 = &PTR_DAT_1107eac58;
    uStack_98 = 0;
    uVar4 = (ulong)*puVar1;
    uStack_80 = param_2;
    func_0x000108996b30(uVar4);
    pppuVar5 = &ppuStack_a0;
    FUN_108949d24(pppuVar5,uVar4);
    func_0x000107c278b8(auStack_b8,"bucket");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d0,auStack_58);
    FUN_1089427e0(pppuVar5,auStack_b8,auStack_d0);
    FUN_108999d28();
    func_0x000108999e68(*puVar3,pppuVar5,*(undefined8 *)(*param_1 + 0x10));
    (*extraout_x8)();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    puVar3 = auStack_b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000108999e84();
    if ((param_3 >> 0x20 != 0) && (*(int *)(param_1[4] + 100) < 0xc351)) {
      FUN_1089a3c0c();
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_DAT_1107eac58;
      uStack_98 = 0;
      uStack_80 = (undefined4)param_3;
      pppuVar5 = &ppuStack_a0;
      FUN_108999d28(pppuVar5,*(undefined4 *)param_1[3]);
      FUN_10895dfd8();
      func_0x000108999e68(*puVar3,pppuVar5,*(undefined8 *)(*param_1 + 0x10));
      (*extraout_x8_00)();
      func_0x000108999e84();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return;
}



/* Entry: 108999c70; end: 108999d27;  */

void FUN_108999c70(undefined8 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  code *extraout_x8;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*param_3 != 0) {
    puVar2 = param_1;
    FUN_1089a3c0c();
    uStack_48 = 0;
    uStack_40 = 0;
    ppuStack_58 = &PTR_DAT_1107eac58;
    uStack_50 = 0;
    if (*(uint *)((long)param_1 + 4) < 4) {
      uVar1 = *(undefined4 *)(&UNK_10df7c880 + (ulong)*(uint *)((long)param_1 + 4) * 4);
    }
    else {
      uVar1 = 0x9001f;
    }
    pppuVar3 = &ppuStack_58;
    uStack_38 = param_2;
    FUN_108983f80(pppuVar3,uVar1);
    func_0x000108999e68(*puVar2,pppuVar3,*param_3);
    (*extraout_x8)();
    func_0x000104c03ee4(&ppuStack_58);
    *param_3 = 0;
  }
  return;
}



/* Entry: 108999d28; end: 108999dbb;  */

undefined8 FUN_108999d28(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xf) {
    puVar2 = (&PTR_DAT_113289a60)[uVar3];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2d) {
    puVar2 = (&PTR_DAT_113289ad8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  FUN_108949f78(param_1,auStack_38,puVar2);
  func_0x000108999e8c();
  return param_1;
}



/* Entry: 108999dbc; end: 108999e03;  */

void FUN_108999dbc(long param_1,undefined8 param_2)

{
  FUN_108999e04(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108999e04; end: 108999ea3;  */

long FUN_108999e04(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(uint *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108999ea4; end: 108999f33;  */

undefined8 FUN_108999ea4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 10);
  if (param_1[3] == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar4 = param_1[6];
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10899ac64(lVar4 + 8,&uStack_30);
    func_0x00010899b350(&uStack_30);
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 10);
  return uVar5;
}



/* Entry: 108999f34; end: 10899a363;  */

int FUN_108999f34(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long **pplVar3;
  long lVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plStack_a8;
  long lStack_a0;
  long **pplStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    lStack_58 = CONCAT71(lStack_58._1_7_,1);
    plStack_60 = (long *)(param_1 + 0x50);
    __ZNSt3__15mutex4lockEv();
    if (*(long *)(param_1 + 0x18) == 0) {
      iVar6 = -1;
    }
    else if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x90) != 0)) {
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar2 == 0) {
LAB_108999ff8:
        if (*(long *)(param_2 + 0x90) != 0) {
          iVar6 = -4;
          goto LAB_10899a028;
        }
      }
      else {
        func_0x00010899b8e8();
        (*extraout_x8_00)();
        if (lVar2 == 0) goto LAB_108999ff8;
      }
      plStack_90 = (long *)CONCAT44(plStack_90._4_4_,*(undefined4 *)(param_2 + 0x98));
      uStack_88 = *(undefined8 *)(param_2 + 8);
      func_0x00010899b504(param_1 + 0xa0,&plStack_90);
      plStack_90 = (long *)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      lVar2 = param_1 + 200;
      pppuStack_78 = &pppuStack_78;
      pppuStack_70 = &pppuStack_78;
      FUN_10899a364(lVar2,*(undefined4 *)(param_2 + 0x98));
      plStack_90 = (long *)((lVar2 * 1000000) / 90000);
      bVar1 = *(int *)(param_2 + 0x18) != 3;
      uStack_80 = CONCAT11(uStack_80._1_1_,bVar1);
      if ((int)param_3 != 0) {
        uStack_80 = CONCAT11(1,bVar1);
      }
      pplStack_98 = &plStack_90;
      if (*(int *)(param_1 + 0x10) == 1) {
        lVar2 = 0;
        bVar1 = false;
        uVar9 = 0;
        for (uVar8 = 0; uVar8 < *(ulong *)(param_2 + 0x90); uVar8 = uVar8 + 1) {
          lVar4 = *(long *)(param_2 + 0x88);
          func_0x00010899b8e8();
          (*extraout_x8_02)();
          if (*(char *)(lVar4 + uVar8) == '\0') {
            uVar9 = uVar9 + 1;
          }
          else if (uVar9 < 3 || *(char *)(lVar4 + uVar8) != '\x01') {
            uVar9 = 0;
          }
          else {
            if ((bVar1) && (4 < (uVar8 - lVar2) - 3)) {
              lVar2 = *(long *)(param_2 + 0x88);
              if (lVar2 == 0) {
                lVar2 = 0;
              }
              else {
                func_0x00010899b8e8();
                (*extraout_x8_03)();
              }
              func_0x00010899b90c(lVar2);
            }
            uVar9 = 0;
            bVar1 = true;
            lVar2 = uVar8 - 3;
          }
        }
        if ((bVar1) && (4 < *(ulong *)(param_2 + 0x90) - lVar2)) {
          lVar2 = *(long *)(param_2 + 0x88);
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            func_0x00010899b8e8();
            (*extraout_x8_05)();
          }
          func_0x00010899b90c(lVar2);
        }
      }
      else {
        lVar2 = *(long *)(param_2 + 0x88);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          func_0x00010899b8e8();
          (*extraout_x8_04)();
        }
        FUN_10899a3c0(&pplStack_98,lVar2,*(undefined8 *)(param_2 + 0x90));
      }
      if (lStack_68 == 0) {
        iVar6 = -1;
      }
      else {
        *(undefined1 *)(pppuStack_78[2] + 3) = 1;
        plVar5 = *(long **)(param_1 + 0x18);
        lStack_a0 = *(long *)(param_1 + 0x20);
        plStack_a8 = plVar5;
        if (lStack_a0 != 0) {
          do {
            func_0x00010899b888();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c280c4(&plStack_60);
        (**(code **)(*plVar5 + 0x18))(plVar5,&plStack_90);
        iVar6 = -(uint)(((uint)plVar5 & 0xfffffffe) != 2);
        func_0x00010899b374(&plStack_a8);
      }
      FUN_10898c92c(&pppuStack_78);
    }
    else {
      iVar6 = -7;
    }
LAB_10899a028:
    pplVar3 = &plStack_60;
    goto LAB_10899a02c;
  }
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  plStack_90 = (long *)(param_1 + 0x50);
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar6 = -1;
  }
  else if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x90) != 0)) {
    lVar2 = *(long *)(param_2 + 0x88);
    if (lVar2 == 0) {
LAB_108999fa8:
      if (*(long *)(param_2 + 0x90) != 0) {
        iVar6 = -4;
        goto LAB_10899a01c;
      }
    }
    else {
      func_0x00010899b8e8();
      (*extraout_x8)();
      if (lVar2 == 0) goto LAB_108999fa8;
    }
    plStack_60 = (long *)CONCAT44(plStack_60._4_4_,*(undefined4 *)(param_2 + 0x98));
    lStack_58 = *(undefined8 *)(param_2 + 8);
    func_0x00010899b504(param_1 + 0xa0,&plStack_60);
    lVar2 = *(long *)(param_2 + 0x88);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x00010899b8e8();
      (*extraout_x8_01)();
    }
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    lVar4 = param_1 + 200;
    FUN_10899a364(lVar4,*(undefined4 *)(param_2 + 0x98));
    iVar6 = *(int *)(param_2 + 0x18);
    plVar5 = *(long **)(param_1 + 0x18);
    lStack_58 = *(long *)(param_1 + 0x20);
    plStack_60 = plVar5;
    if (lStack_58 != 0) {
      do {
        func_0x00010899b888();
      } while (extraout_w10 != 0);
    }
    func_0x000107c280c4(&plStack_90);
    (**(code **)(*plVar5 + 0x28))(plVar5,lVar2,uVar7,(lVar4 * 1000000) / 90000,iVar6 == 3,param_3);
    iVar6 = (int)plVar5 + -1;
    func_0x00010899b374(&plStack_60);
  }
  else {
    iVar6 = -7;
  }
LAB_10899a01c:
  pplVar3 = &plStack_90;
LAB_10899a02c:
  func_0x000107c2798c(pplVar3);
  return iVar6;
}



/* Entry: 10899a364; end: 10899a3bf;  */

ulong FUN_10899a364(ulong *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
    uVar3 = (ulong)param_2;
  }
  else {
    uVar1 = param_2 - (uint)param_1[1];
    bVar2 = (uint)param_1[1] <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar2 = uVar1 < 0x80000000;
    }
    uVar3 = (ulong)uVar1;
    if (!bVar2) {
      uVar3 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar3 = uVar3 + *param_1;
  }
  *param_1 = uVar3;
  *(uint *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  return uVar3;
}



/* Entry: 10899a3c0; end: 10899a44b;  */

void FUN_10899a3c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[2] = 0;
  puStack_40 = puVar1 + 3;
  *puStack_40 = 0;
  *puVar1 = &PTR_FUN_110aa3c90;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puStack_38 = puVar1;
  func_0x000108990a68(puStack_40,param_2,param_3);
  *(undefined1 *)(puVar1 + 6) = 0;
  FUN_10898c8e0(*param_1 + 0x18,&puStack_40);
  func_0x00010898c9b4(&puStack_40);
  return;
}



/* Entry: 10899a44c; end: 10899a47b;  */

undefined8 FUN_10899a44c(long param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010899b91c();
  __ZNSt3__15mutex4lockEv(param_1 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x90) = unaff_x19;
  func_0x00010899b8fc();
  return 0;
}



/* Entry: 10899a47c; end: 10899a527;  */

undefined8 FUN_10899a47c(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long *plStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x50;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x18);
  lStack_38 = *(long *)(param_1 + 0x20);
  plStack_40 = plVar1;
  if (lStack_38 != 0) {
    do {
      FUN_10899b888();
    } while (extraout_w10 != 0);
  }
  func_0x000107c280c4(&lStack_30);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  func_0x00010899b374(&plStack_40);
  func_0x000107c2798c(&lStack_30);
  return 0;
}



/* Entry: 10899a528; end: 10899a607;  */

/* WARNING: Possible PIC construction at 0x00010899a5d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010899a5d8) */

void FUN_10899a528(undefined1 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  func_0x00010899b91c();
  *param_1 = 0;
  param_1[0x10] = 0;
  if (unaff_x19[4] == 0) {
    return;
  }
  puVar4 = (uint *)unaff_x19[2];
  uVar3 = *puVar4;
  uVar1 = uVar3 + 0x2d;
  if (uVar1 - param_3 == -0x80000000) {
    if (param_3 < uVar1) {
LAB_10899a584:
      uVar1 = uVar3 - 0x2d;
      if (uVar1 - param_3 == -0x80000000) {
        if (uVar1 <= param_3) {
LAB_10899a5e4:
          uVar5 = *(undefined8 *)puVar4;
          unaff_x20[1] = *(undefined8 *)(puVar4 + 2);
          *unaff_x20 = uVar5;
          *(undefined1 *)(unaff_x20 + 2) = 1;
          goto SUB_10899b568;
        }
      }
      else if ((uVar1 == param_3) || ((int)(uVar1 - param_3) < 0)) goto LAB_10899a5e4;
    }
  }
  else if ((uVar1 != param_3) && (-1 < (int)(uVar1 - param_3))) goto LAB_10899a584;
  if (uVar3 - param_3 == -0x80000000) {
    if (param_3 < uVar3) {
      return;
    }
  }
  else if ((uVar3 != param_3) && (-1 < (int)(uVar3 - param_3))) {
    return;
  }
SUB_10899b568:
  lVar2 = unaff_x19[2];
  unaff_x19[2] = lVar2 + 0x10;
  if (lVar2 + 0x10 == unaff_x19[1]) {
    unaff_x19[2] = *unaff_x19;
  }
  unaff_x19[4] = unaff_x19[4] + -1;
  return;
}



/* Entry: 10899a608; end: 10899a6a3;  */

void FUN_10899a608(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *(long *)*param_2;
  lVar3 = *(long *)(lVar2 + 0x30);
  while (lVar3 != lVar2 + 0x38) {
    uVar1 = *(uint *)(lVar3 + 0x20);
    if ((uVar1 < 5) && ((0x17U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      FUN_10899a6a4(param_1,(&PTR_DAT_110aa3eb8)[uVar1]);
    }
    func_0x000107c27be0();
  }
  return;
}



/* Entry: 10899a6a4; end: 10899a6df;  */

long FUN_10899a6a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10899acd4();
    lVar2 = uVar1 + 0x60;
  }
  else {
    lVar2 = param_1;
    FUN_10899ad08();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x60;
}



/* Entry: 10899a6e0; end: 10899ab47;  */

void FUN_10899a6e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x22;
  long *plStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  undefined4 uStack_94;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined ***pppuStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  func_0x00010899b904(param_2,&DAT_10df7b434);
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010899b904();
    if (((ulong)puVar6 & 1) != 0) {
      uStack_94 = 1;
      goto LAB_10899a770;
    }
    func_0x00010899b904();
    if (((ulong)puVar6 & 1) != 0) {
      uStack_94 = 2;
      goto LAB_10899a770;
    }
    uVar9 = 0xdf7b44a;
    func_0x00010899b904();
    if (((ulong)puVar6 & 1) != 0) {
      uStack_94 = 4;
      goto LAB_10899a770;
    }
  }
  else {
    uStack_94 = 0;
LAB_10899a770:
    puVar6 = (undefined8 *)(*(long *)*param_2 + 0x30);
    uVar9 = SUB84(&uStack_94,0);
    FUN_1089919e0();
    unaff_x22 = puVar6;
    if ((undefined8 *)(*(long *)*param_2 + 0x38) != puVar6) {
      func_0x000107c278b8(&ppuStack_70,&UNK_10f4edf47);
      puVar5 = param_3 + 3;
      FUN_10899b594(puVar5,&ppuStack_70);
      func_0x00010899b940();
      if (param_3 + 4 == puVar5) {
        func_0x000107c278b8(auStack_b0,"");
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_b0,puVar5 + 7);
      }
      (**(code **)(*(long *)puVar6[5] + 0x18))
                (&uStack_c0,(long *)puVar6[5],auStack_b0,*(undefined4 *)(param_2 + 1));
      uVar9 = uStack_94;
      uVar2 = *(undefined1 *)(*(long *)*param_2 + 0x48);
      lStack_d8 = lStack_b8;
      uStack_e0 = uStack_c0;
      param_2 = (undefined8 *)0xe8;
      __Znwm();
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = uVar9;
      param_2[4] = lStack_d8;
      param_2[3] = uStack_e0;
      if (lStack_b8 != 0) {
        do {
          func_0x00010899b888();
        } while (extraout_w10 != 0);
      }
      *(undefined1 *)(param_2 + 5) = uVar2;
      puVar6 = (undefined8 *)0x30;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110aa3ce0;
      puVar6[3] = &PTR_DAT_110aa3d30;
      puVar6[4] = 0;
      puVar6[5] = 0;
      param_2[6] = puVar6 + 3;
      param_2[7] = puVar6;
      func_0x000107c278b8(&ppuStack_70,&UNK_10f4edfee);
      FUN_10898d738(param_2 + 8);
      func_0x00010899b940();
      param_2[10] = 0x32aaaba7;
      param_2[0xc] = 0;
      param_2[0xb] = 0;
      param_2[0xe] = 0;
      param_2[0xd] = 0;
      param_2[0x10] = 0;
      param_2[0xf] = 0;
      param_2[0x12] = 0;
      param_2[0x11] = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x18] = 0;
      lVar7 = 0x1e0;
      __Znwm();
      param_2[0x14] = lVar7;
      param_2[0x15] = lVar7 + 0x1e0;
      param_2[0x16] = lVar7;
      param_2[0x17] = lVar7;
      param_2[0x19] = 0;
      *(undefined1 *)(param_2 + 0x1a) = 0;
      *(undefined1 *)((long)param_2 + 0xd4) = 0;
      *(undefined4 *)(param_2 + 0x1b) = 0;
      ppuStack_70 = &PTR_FUN_110aa3d78;
      puStack_68 = param_2;
      pppuStack_58 = &ppuStack_70;
      (**(code **)(*(long *)param_2[3] + 0x10))((long *)param_2[3],&ppuStack_70);
      func_0x00010898e374(&ppuStack_70);
      puStack_68 = (undefined8 *)param_2[7];
      ppuStack_70 = (undefined **)param_2[6];
      if (param_2[7] != 0) {
        do {
          func_0x00010899b888();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010899b8e8();
      uVar9 = SUB84(&ppuStack_70,0);
      (*extraout_x8)();
      func_0x00010898d258(&ppuStack_70);
      param_3 = (undefined8 *)0x18;
      puStack_c8 = param_2;
      __Znwm();
      unaff_x22 = (undefined8 *)0x20;
      puStack_90 = param_2;
      __Znwm();
      plVar8 = unaff_x22 + 1;
      *plVar8 = 0;
      *unaff_x22 = &PTR_FUN_110aa3e08;
      unaff_x22[2] = 0;
      unaff_x22[3] = param_2;
      lVar7 = param_2[1];
      puStack_88 = unaff_x22;
      if ((lVar7 == 0) || (*(long *)(lVar7 + 8) == -1)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar1 = unaff_x22 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_70 = (undefined **)*param_2;
        *param_2 = param_2;
        param_2[1] = unaff_x22;
        puStack_80 = param_2;
        puStack_78 = unaff_x22;
        puStack_68 = (undefined8 *)lVar7;
        func_0x00010899b350(&ppuStack_70);
        FUN_10899b2cc(&puStack_80);
      }
      puStack_c8 = (undefined8 *)0x0;
      *param_3 = &PTR_DAT_110aa4c00;
      param_3[1] = param_2;
      param_3[2] = unaff_x22;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_10899b2cc(&puStack_90);
      *param_1 = param_3;
      FUN_10899b638(&puStack_c8);
      func_0x00010899b374(&uStack_c0);
      puVar6 = auStack_b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10899aa48;
    }
  }
  *param_1 = 0;
LAB_10899aa48:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __ZdlPv(param_3);
    FUN_10899b638(&puStack_c8);
    func_0x00010899b374(&uStack_c0);
    puVar5 = auStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010899b8d4();
    pcStack_e8 = FUN_10899ab48;
    plVar8 = (long *)0x10;
    puStack_110 = unaff_x22;
    puStack_108 = param_3;
    puStack_100 = param_2;
    puStack_f8 = puVar6;
    puStack_f0 = &stack0xfffffffffffffff0;
    __Znwm();
    *plVar8 = (long)puVar5;
    *(undefined4 *)(plVar8 + 1) = uVar9;
    plStack_118 = plVar8;
    FUN_10899aba4(extraout_x8_00,&plStack_118);
    FUN_10899b778(&plStack_118);
    return;
  }
  return;
}



/* Entry: 10899ab48; end: 10899aba3;  */

void FUN_10899ab48(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = param_3;
  puStack_38 = puVar1;
  FUN_10899aba4(param_1,&puStack_38);
  FUN_10899b778(&puStack_38);
  return;
}



/* Entry: 10899aba4; end: 10899ac27;  */

void FUN_10899aba4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  FUN_10899b7b4(&uStack_40,param_2);
  *puVar1 = &PTR_DAT_110aa4bc8;
  puVar1[2] = lStack_38;
  puVar1[1] = uStack_40;
  if (lStack_38 != 0) {
    do {
      FUN_10899b888();
    } while (extraout_w10 != 0);
  }
  *param_1 = puVar1;
  FUN_10899b864(&uStack_40);
  return;
}



/* Entry: 10899ac28; end: 10899ac63;  */

void FUN_10899ac28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 0x10;
    if (lVar1 + 0x10 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899ac64; end: 10899ac9f;  */

undefined8 * FUN_10899ac64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010899b350(&uStack_30);
  return param_1;
}



/* Entry: 10899aca0; end: 10899aca3;  */

void FUN_10899aca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3c90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899aca4; end: 10899acb7;  */

void FUN_10899aca4(void)

{
  func_0x00010899acc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899acb8; end: 10899acd3;  */

long FUN_10899acb8(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 10899acd4; end: 10899ad07;  */

void FUN_10899acd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10899adac(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x60;
  return;
}



/* Entry: 10899ad08; end: 10899adab;  */

long FUN_10899ad08(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10899adec(param_1,(param_1[1] - *param_1) / 0x60 + 1);
  FUN_10899aed0(auStack_58,plVar1,(param_1[1] - *param_1) / 0x60,param_1 + 2);
  FUN_10899adac(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x60;
  FUN_10899ae3c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010899b084(auStack_58);
  return lVar2;
}



/* Entry: 10899adac; end: 10899adeb;  */

void FUN_10899adac(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010899b928();
  func_0x000107c278b8();
  func_0x000108a02620();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10899adec; end: 10899ae3b;  */

long * FUN_10899adec(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x2aaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x60;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x155555555555554 < uVar1) {
      plVar3 = (long *)0x2aaaaaaaaaaaaaa;
    }
    return plVar3;
  }
  FUN_10899aebc();
  func_0x00010899b91c();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x60) * 0x60;
  FUN_10899af6c(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10899ae3c; end: 10899aebb;  */

void FUN_10899ae3c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010899b91c();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x60) * 0x60;
  FUN_10899af6c(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10899aebc; end: 10899aecf;  */

long * FUN_10899aebc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f4ee00b;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010899af1c();
  }
  lVar2 = param_4 + param_3 * 0x60;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x60;
  return plVar1;
}



/* Entry: 10899aed0; end: 10899af3f;  */

long * FUN_10899aed0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010899af1c();
  }
  lVar1 = param_4 + param_3 * 0x60;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x60;
  return param_1;
}



/* Entry: 10899af40; end: 10899af6b;  */

void FUN_10899af40(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x60) {
    func_0x000108a02680(param_4,uVar1);
    param_4 = lStack_48 + 0x60;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x000108a027e0(param_2);
  }
  FUN_10899b004(&uStack_70);
  return;
}



/* Entry: 10899af6c; end: 10899b003;  */

void FUN_10899af6c(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x60) {
    func_0x000108a02680(param_4,lVar1);
    param_4 = lStack_38 + 0x60;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x000108a027e0(param_2);
  }
  FUN_10899b004(&uStack_60);
  return;
}



/* Entry: 10899b004; end: 10899b033;  */

long FUN_10899b004(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10899b034(param_1);
  }
  return param_1;
}



/* Entry: 10899b034; end: 10899b053;  */

void FUN_10899b034(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x000108a027e0();
  }
  return;
}



/* Entry: 10899b054; end: 10899b0af;  */

void FUN_10899b054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x60;
    func_0x000108a027e0();
  }
  return;
}



/* Entry: 10899b0b0; end: 10899b0b7;  */

void FUN_10899b0b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010899b91c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x60;
    func_0x000108a027e0();
  }
  return;
}



/* Entry: 10899b0b8; end: 10899b153;  */

void FUN_10899b0b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010899b91c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x60;
    func_0x000108a027e0();
  }
  return;
}



/* Entry: 10899b154; end: 10899b15b;  */

void FUN_10899b154(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010899b91c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x000108a027e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10899b15c; end: 10899b18f;  */

void FUN_10899b15c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010899b91c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x000108a027e0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10899b190; end: 10899b193;  */

void FUN_10899b190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899b194; end: 10899b1a7;  */

void FUN_10899b194(void)

{
  FUN_10899b31c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b1a8; end: 10899b1bb;  */

void FUN_10899b1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010899b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10899b1bc; end: 10899b2b3;  */

void FUN_10899b1bc(long param_1,long *param_2)

{
  long lVar1;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lStack_138 = 0;
  lStack_130 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_130 = lVar1;
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 8);
      lStack_138 = lVar1;
      if (lVar1 != 0) {
        __ZNSt3__15mutex4lockEv(lVar1 + 0x50);
        if ((((*(long *)(lVar1 + 0x18) != 0) && (*(long *)(lVar1 + 0x90) != 0)) &&
            (*(char *)(lVar1 + 0x98) == '\x01')) &&
           (func_0x00010899b8b0(*(undefined8 *)(*param_2 + 0x10)), cStack_38 == '\x01')) {
          func_0x00010899ef30(auStack_128,param_2);
          uStack_118 = uStack_48;
          uStack_110 = uStack_40;
          (**(code **)(**(long **)(lVar1 + 0x90) + 0x10))(*(long **)(lVar1 + 0x90),auStack_128);
          func_0x000108a00f74(auStack_128);
        }
        func_0x00010899b8fc();
      }
    }
  }
  FUN_10899b2cc(&lStack_138);
  return;
}



/* Entry: 10899b2b4; end: 10899b2b7;  */

undefined8 * FUN_10899b2b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa3d30;
  func_0x00010899b350(param_1 + 1);
  return param_1;
}



/* Entry: 10899b2b8; end: 10899b2cb;  */

void FUN_10899b2b8(void)

{
  func_0x00010899b2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b2cc; end: 10899b31b;  */

void FUN_10899b2cc(long param_1)

{
  func_0x00010899b934();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10899b31c; end: 10899b32b;  */

void FUN_10899b31c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa3ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899b32c; end: 10899b397;  */

void FUN_10899b32c(long param_1)

{
  func_0x00010899b934();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10899b398; end: 10899b39f;  */

void FUN_10899b398(void)

{
  return;
}



/* Entry: 10899b3a0; end: 10899b3cf;  */

void FUN_10899b3a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110aa3d78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10899b3d0; end: 10899b3ff;  */

void FUN_10899b3d0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110aa3d78;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 10899b400; end: 10899b4c3;  */

void FUN_10899b400(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_128 [16];
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  __ZNSt3__15mutex4lockEv(lVar1 + 0x50);
  if ((((*(long *)(lVar1 + 0x18) != 0) && (*(long *)(lVar1 + 0x90) != 0)) &&
      (*(char *)(lVar1 + 0x98) == '\x01')) &&
     (func_0x00010899b8b0(*(undefined8 *)(*param_2 + 0x88)), cStack_38 == '\x01')) {
    *(undefined8 *)(*param_2 + 0x88) = 0;
    func_0x00010899fbe0(auStack_128,param_2,lVar1 + 0x40);
    uStack_118 = uStack_48;
    uStack_110 = uStack_40;
    (**(code **)(**(long **)(lVar1 + 0x90) + 0x10))(*(long **)(lVar1 + 0x90),auStack_128);
    func_0x000108a00f74(auStack_128);
  }
  func_0x00010899b8fc();
  return;
}



/* Entry: 10899b4c4; end: 10899b4f7;  */

long FUN_10899b4c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010899b960(param_2,param_1,&PTR_DAT_110aa3de8);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10899b4f8; end: 10899b593;  */

undefined ** FUN_10899b4f8(void)

{
  return &PTR_DAT_110aa3de8;
}



/* Entry: 10899b594; end: 10899b637;  */

undefined8 * FUN_10899b594(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010899b5e4(param_1,param_2,*puVar1,puVar1);
  if ((puVar1 == param_1) ||
     (func_0x000107c27bd4(param_2,param_1 + 4), ((uint)param_2 >> 7 & 1) != 0)) {
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 10899b638; end: 10899b663;  */

long * FUN_10899b638(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10899b664();
  }
  return param_1;
}



/* Entry: 10899b664; end: 10899b71f;  */

void FUN_10899b664(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    plStack_30 = (long *)0x0;
    uStack_28 = 0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x50);
    puVar1 = (undefined8 *)(param_1 + 0x18);
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    plVar2 = (long *)*puVar1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plStack_30 = plVar2;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    func_0x00010899b374(&plStack_30);
    FUN_10899ac28(param_1 + 0xa0);
    __ZNSt3__15mutexD1Ev(param_1 + 0x50);
    FUN_10898e350(param_1 + 0x40);
    func_0x00010899b32c(param_1 + 0x30);
    func_0x00010899b374(puVar1);
    func_0x00010899b350(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10899b720; end: 10899b723;  */

void FUN_10899b720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899b724; end: 10899b737;  */

void FUN_10899b724(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b738; end: 10899b73f;  */

void FUN_10899b738(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    plStack_30 = (long *)0x0;
    uStack_28 = 0;
    __ZNSt3__15mutex4lockEv(lVar1 + 0x50);
    puVar2 = (undefined8 *)(lVar1 + 0x18);
    uStack_28 = *(undefined8 *)(lVar1 + 0x20);
    plVar3 = (long *)*puVar2;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *puVar2 = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    plStack_30 = plVar3;
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
    func_0x00010899b374(&plStack_30);
    FUN_10899ac28(lVar1 + 0xa0);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x50);
    FUN_10898e350(lVar1 + 0x40);
    func_0x00010899b32c(lVar1 + 0x30);
    func_0x00010899b374(puVar2);
    func_0x00010899b350(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10899b740; end: 10899b773;  */

long FUN_10899b740(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010899b960(param_2,param_1,&PTR_DAT_110aa3e48);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10899b774; end: 10899b777;  */

void FUN_10899b774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b778; end: 10899b79b;  */

undefined8 FUN_10899b778(undefined8 param_1)

{
  FUN_10899b79c(param_1,0);
  return param_1;
}



/* Entry: 10899b79c; end: 10899b7b3;  */

void FUN_10899b79c(long *param_1,long param_2)

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



/* Entry: 10899b7b4; end: 10899b80b;  */

long * FUN_10899b7b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110aa3e68;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  param_1[1] = (long)puVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 10899b80c; end: 10899b80f;  */

void FUN_10899b80c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10899b810; end: 10899b823;  */

void FUN_10899b810(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b824; end: 10899b82b;  */

void FUN_10899b824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10899b82c; end: 10899b85f;  */

long FUN_10899b82c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010899b960(param_2,param_1,&PTR_DAT_110aa3ea8);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10899b860; end: 10899b863;  */

void FUN_10899b860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899b864; end: 10899b887;  */

void FUN_10899b864(long param_1)

{
  func_0x00010899b934();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10899b888; end: 10899b98b;  */

void FUN_10899b888(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10899b98c; end: 10899bab3;  */

long * FUN_10899b98c(long *param_1,long param_2,undefined8 param_3,long *param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined4 uVar16;
  undefined8 extraout_x8;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  int *piVar21;
  undefined1 auStack_201 [9];
  code *pcStack_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [16];
  int *piStack_1d8;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [21];
  undefined1 uStack_133;
  undefined1 auStack_130 [24];
  undefined2 uStack_118;
  undefined8 uStack_48;
  
  plVar9 = param_1;
  uVar10 = param_3;
  func_0x00010899c6bc();
  *plVar9 = (long)&PTR_FUN_110aa3ef0;
  *(int *)(plVar9 + 1) = (int)uVar10;
  *(undefined4 *)((long)plVar9 + 0xc) = param_5;
  uStack_48 = extraout_x8;
  func_0x000108ad5620(plVar9 + 2);
  param_1[0x103] = 0;
  param_1[0x104] = param_2;
  plVar9 = param_1 + 0x105;
  param_1[0x106] = 0;
  *plVar9 = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  func_0x000108a03478(auStack_148);
  uVar10 = param_3;
  FUN_108b81558(param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(auStack_130,uVar10);
  uStack_133 = 1;
  uStack_118 = 0x101;
  uVar10 = param_3;
  FUN_10899bab4(param_1[0x104],auStack_148,param_4,param_3);
  func_0x00010899c6fc();
  puVar12 = auStack_158;
  plVar11 = plVar9;
  FUN_10899bca0();
  func_0x00010899c71c();
  uVar16 = 5;
  if ((int)param_3 != 4) {
    uVar16 = 0;
  }
  uVar8 = (int)param_3 == 1;
  uVar2 = 4;
  if (!(bool)uVar8) {
    uVar2 = uVar16;
  }
  *(undefined4 *)(param_1 + 2) = uVar2;
  func_0x00010899c6e4();
  func_0x00010899c680(uStack_48);
  if ((bool)uVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010899c6e4();
  func_0x00010899c458(plVar9);
  func_0x000108ad56c4(param_1 + 2);
  __Unwind_Resume(plVar11);
  pcStack_168 = FUN_10899bab4;
  plVar9 = param_4;
  uVar14 = uVar10;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010899c724();
  plVar19 = (long *)(puVar12 + 0xb0);
  *(long *)(puVar12 + 0xb8) = *plVar19;
  FUN_108994bf8(plVar9,uVar14);
  if ((int)plVar9 == 0) {
    bVar15 = 0;
    *(undefined2 *)(plVar11 + 0x1e) = 0x100;
    *(undefined1 *)plVar11 = 0;
    *(undefined1 *)(plVar11 + 1) = 0;
    *(undefined4 *)((long)plVar11 + 0xc) = 0xe100;
  }
  else {
    *(undefined2 *)(plVar11 + 0x1e) = 0x101;
    plVar9 = param_4;
    plStack_1f0 = param_1;
    FUN_1089910ac(param_4,uVar10);
    iVar3 = *(int *)(*plVar9 + 0x1c);
    iVar4 = *(int *)(*plVar9 + 0x20);
    *plVar11 = *(long *)((long)param_4 + 0x24);
    *(undefined1 *)(plVar11 + 1) = 1;
    *(int *)((long)plVar11 + 0xc) = iVar4 * iVar3;
    plVar20 = (long *)*plVar9;
    while (plVar20 != plVar9 + 1) {
      iVar3 = (int)plVar20[4] * *(int *)((long)plVar20 + 0x1c);
      iVar4 = *(int *)((long)plVar20 + 0x24) * 1000;
      iVar6 = *(int *)((long)param_4 + 0xc) * 1000;
      iVar7 = (int)plVar20[5] * 1000;
      piVar5 = (int *)plVar11[0x17];
      if (piVar5 < (int *)plVar11[0x18]) {
        *piVar5 = iVar3;
        piVar5[1] = iVar4;
        piVar21 = piVar5 + 4;
        piVar5[2] = iVar6;
        piVar5[3] = iVar7;
      }
      else {
        lVar13 = (long)piVar5 - *plVar19 >> 4;
        uVar1 = lVar13 + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10899c26c();
          puVar12 = auStack_1e8;
          FUN_10899c2e0(puVar12);
          func_0x00010899c6a8();
          pcStack_1f8 = FUN_10899bc7c;
          plVar9 = (long *)auStack_201;
          auStack_201._1_8_ = &puStack_170;
          FUN_10899c480(plVar9,puVar12);
          return plVar9;
        }
        uVar17 = plVar11[0x18] - *plVar19;
        uVar18 = (long)uVar17 >> 3;
        if (uVar18 <= uVar1) {
          uVar18 = uVar1;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar18 = 0xfffffffffffffff;
        }
        FUN_10899c280(auStack_1e8,uVar18,lVar13,plVar11 + 0x18);
        *piStack_1d8 = iVar3;
        piStack_1d8[1] = iVar4;
        piStack_1d8[2] = iVar6;
        piStack_1d8[3] = iVar7;
        piStack_1d8 = piStack_1d8 + 4;
        FUN_10899c1ec(plVar19,auStack_1e8);
        piVar21 = (int *)plVar11[0x17];
        FUN_10899c2e0(auStack_1e8);
      }
      plVar11[0x17] = (long)piVar21;
      func_0x000107c27be0();
    }
    bVar15 = *(byte *)((long)plVar11 + 0xf1) ^ 1;
    param_1 = plStack_1f0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,bVar15 & 1);
  return param_1;
}



/* Entry: 10899bab4; end: 10899bc7b;  */

void FUN_10899bab4(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  undefined1 uStack_a1;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [16];
  int *piStack_78;
  
  plVar7 = param_3;
  uVar10 = param_4;
  func_0x00010899c724();
  plVar14 = (long *)(param_2 + 0xb0);
  *(long *)(param_2 + 0xb8) = *plVar14;
  FUN_108994bf8(plVar7,uVar10);
  if ((int)plVar7 == 0) {
    bVar11 = 0;
    *(undefined2 *)(unaff_x20 + 0x1e) = 0x100;
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 1) = 0;
    *(undefined4 *)((long)unaff_x20 + 0xc) = 0xe100;
  }
  else {
    *(undefined2 *)(unaff_x20 + 0x1e) = 0x101;
    plVar7 = param_3;
    FUN_1089910ac(param_3,param_4);
    iVar2 = *(int *)(*plVar7 + 0x1c);
    iVar3 = *(int *)(*plVar7 + 0x20);
    *unaff_x20 = *(undefined8 *)((long)param_3 + 0x24);
    *(undefined1 *)(unaff_x20 + 1) = 1;
    *(int *)((long)unaff_x20 + 0xc) = iVar3 * iVar2;
    plVar15 = (long *)*plVar7;
    while (plVar15 != plVar7 + 1) {
      iVar2 = (int)plVar15[4] * *(int *)((long)plVar15 + 0x1c);
      iVar3 = *(int *)((long)plVar15 + 0x24) * 1000;
      iVar5 = *(int *)((long)param_3 + 0xc) * 1000;
      iVar6 = (int)plVar15[5] * 1000;
      piVar4 = (int *)unaff_x20[0x17];
      if (piVar4 < (int *)unaff_x20[0x18]) {
        *piVar4 = iVar2;
        piVar4[1] = iVar3;
        piVar16 = piVar4 + 4;
        piVar4[2] = iVar5;
        piVar4[3] = iVar6;
      }
      else {
        lVar9 = (long)piVar4 - *plVar14 >> 4;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10899c26c();
          puVar8 = auStack_88;
          FUN_10899c2e0(puVar8);
          func_0x00010899c6a8();
          pcStack_98 = FUN_10899bc7c;
          puStack_a0 = &stack0xfffffffffffffff0;
          FUN_10899c480(&uStack_a1,puVar8);
          return;
        }
        uVar12 = (long)unaff_x20[0x18] - *plVar14;
        uVar13 = (long)uVar12 >> 3;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar13 = 0xfffffffffffffff;
        }
        FUN_10899c280(auStack_88,uVar13,lVar9,unaff_x20 + 0x18);
        *piStack_78 = iVar2;
        piStack_78[1] = iVar3;
        piStack_78[2] = iVar5;
        piStack_78[3] = iVar6;
        piStack_78 = piStack_78 + 4;
        FUN_10899c1ec(plVar14,auStack_88);
        piVar16 = (int *)unaff_x20[0x17];
        FUN_10899c2e0(auStack_88);
      }
      unaff_x20[0x17] = piVar16;
      func_0x000107c27be0();
    }
    bVar11 = *(byte *)((long)unaff_x20 + 0xf1) ^ 1;
  }
  (**(code **)(*unaff_x19 + 0x40))(unaff_x19,bVar11 & 1);
  return;
}



/* Entry: 10899bc7c; end: 10899bc9f;  */

void FUN_10899bc7c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10899c480(&uStack_11,param_1);
  return;
}



/* Entry: 10899bca0; end: 10899bd0b;  */

undefined8 * FUN_10899bca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010899c6dc();
  return param_1;
}



/* Entry: 10899bd0c; end: 10899bd0f;  */

long FUN_10899bd0c(long param_1)

{
  func_0x00010899c458(param_1 + 0x828);
  func_0x000108ad56c4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10899bd10; end: 10899bd23;  */

void FUN_10899bd10(void)

{
  func_0x00010899bce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10899bd24; end: 10899bdbf;  */

void FUN_10899bd24(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 auStack_180 [2];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [256];
  undefined8 uStack_38;
  
  func_0x00010899c724();
  func_0x00010899c6bc();
  uStack_38 = extraout_x8;
  FUN_10899bdc0(auStack_138);
  FUN_10899bab4(*(undefined8 *)(unaff_x19 + 0x820),auStack_138);
  func_0x00010899c6fc();
  lVar1 = unaff_x19 + 0x828;
  FUN_10899bdf8(lVar1,auStack_148,3);
  func_0x00010899c71c();
  func_0x00010899c6e4();
  func_0x00010899c680(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010899c71c();
  func_0x00010899c6e4();
  func_0x00010899c6a8();
  func_0x00010899c624(auStack_180,lVar1 + 0x828);
  func_0x000108a0352c(extraout_x8_00,auStack_180[0]);
  func_0x00010899c6dc();
  return;
}



/* Entry: 10899bdc0; end: 10899bdf7;  */

void FUN_10899bdc0(undefined8 param_1,long param_2)

{
  undefined8 auStack_30 [2];
  
  func_0x00010899c624(auStack_30,param_2 + 0x828);
  func_0x000108a0352c(param_1,auStack_30[0]);
  func_0x00010899c6dc();
  return;
}



/* Entry: 10899bdf8; end: 10899be43;  */

void FUN_10899bdf8(undefined8 param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010899c6ec();
    } while (extraout_w10 != 0);
  }
  FUN_10899c5d4(param_1,&uStack_30);
  func_0x00010899c6dc();
  return;
}



/* Entry: 10899be44; end: 10899be47;  */

undefined8 FUN_10899be44(void)

{
  return 0;
}



/* Entry: 10899be48; end: 10899bf73;  */

int FUN_10899be48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  undefined **ppuVar3;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [24];
  int iStack_190;
  
  pppuVar1 = &ppuStack_1d0;
  func_0x00010899c724();
  if (param_3 != (undefined8 *)0x0) {
    if (*(int *)*param_3 == 0) {
      return 0;
    }
    if (*(int *)*param_3 == 3) {
      (**(code **)(**(long **)(unaff_x19 + 0x820) + 0x28))();
    }
  }
  ppuVar3 = *(undefined ***)(unaff_x20 + 8);
  ppuStack_1d0 = ppuVar3;
  if (ppuVar3 != (undefined **)0x0) {
    (**(code **)*ppuVar3)(ppuVar3);
  }
  func_0x0001089fdfb4(auStack_1a8,ppuVar3 + 1);
  FUN_10894c5cc();
  if (iStack_190 == 3) {
    FUN_1089a3c0c();
    uStack_1b0 = 0x30;
    if (*(int *)(unaff_x19 + 0xc) != 1) {
      uStack_1b0 = 0x31;
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    ppuStack_1d0 = &PTR_DAT_1107eac58;
    uStack_1c8 = 0;
    (**(code **)((long)**pppuVar1 + 8))(*pppuVar1,&ppuStack_1d0,1);
    func_0x000104c03ee4(&ppuStack_1d0);
  }
  plVar2 = *(long **)(unaff_x19 + 0x818);
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_1a8,unaff_x19 + 0x10);
  func_0x0001089fe02c(auStack_1a8);
  return -(uint)((int)plVar2 == 1);
}



/* Entry: 10899bf74; end: 10899bfb7;  */

undefined8 FUN_10899bf74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x818) = param_2;
  return 0;
}


