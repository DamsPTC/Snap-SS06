/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00489924; end: 004899fb;  */

void FUN_00489924(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar5;
  
  iVar2 = (int)unaff_x20;
  lVar3 = param_1;
  func_0x0048c034();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar3 = *unaff_x21;
    FUN_004899fc();
    unaff_x20 = lVar3 + unaff_x20;
    iVar2 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0048bf9c(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048bf00();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00489480(*(undefined8 *)(param_1 + 0x38));
      func_0x0048bfd4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00489480(*(undefined8 *)(param_1 + 0x40));
      func_0x0048bfd4();
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  iVar2 = ((ushort)((ushort)(byte)uVar5 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar5 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar5 >> 0x18) * '\x02') + iVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 004899fc; end: 00489a13;  */

void FUN_004899fc(void)

{
  FUN_004895e4();
  FUN_0048bdf0();
  return;
}



/* Entry: 00489a14; end: 00489a33;  */

void FUN_00489a14(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00489a14();
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4a) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4b) = 1;
  }
  func_0x0048c2d4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0048bf4c();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00489a34; end: 00489a83;  */

long FUN_00489a34(long param_1)

{
  func_0x0048bf94();
  func_0x0048c230();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  FUN_0048b344(param_1 + 0x18);
  return param_1;
}



/* Entry: 00489a84; end: 00489a97;  */

void FUN_00489a84(void)

{
  FUN_00489a34();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00489a98; end: 00489aa3;  */

undefined ** FUN_00489a98(void)

{
  return &PTR_DAT_009e8f88;
}



/* Entry: 00489aa4; end: 00489b07;  */

void FUN_00489aa4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_0048b788(param_1 + 0x18);
  func_0x0048c244();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00652e04(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00652e04(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00489b08; end: 00489c37;  */

dword * FUN_00489b08(dword *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  dword *pdVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  dword *unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x0048c0c0();
  if (*(char *)(param_1 + 0x12) == '\x01') {
    func_0x0048be90();
    func_0x0048c180();
    func_0x0048bee8();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_00489b7c;
  }
  else if ((int)param_2 == 0) goto LAB_00489b7c;
  param_4 = "snapchat.notification.Snap.message_tracking_id";
  func_0x0048bf8c();
  func_0x0048be58();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_00489b7c:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x0048bf18();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = &MACH_HEADER.cputype;
    func_0x0048bf18();
    unaff_x21 = param_1;
  }
  pdVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    func_0x0048be90();
    pdVar3 = (dword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,param_1);
    func_0x0048bee8();
    unaff_x21 = pdVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  for (iVar4 = 0; iVar5 != iVar4; iVar4 = iVar4 + 1) {
    func_0x0048c124();
    pdVar3 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x0048bf18();
    unaff_x21 = pdVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048c064();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0048c2c8();
    if (*(long *)pdVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)pdVar3 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        pcVar1 = (char *)((long)param_4 + (long)iVar5);
        param_4 = (char *)pdVar3;
        func_0x0054ed58(pdVar3,pcVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 00489c38; end: 00489ceb;  */

void FUN_00489c38(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar2 = (int)unaff_x20;
  lVar3 = param_1;
  func_0x0048c034();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar3 = *unaff_x21;
    FUN_004899fc();
    unaff_x20 = lVar3 + unaff_x20;
    iVar2 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0048bf9c(*(undefined8 *)(param_1 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048bf00();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00489480(*(undefined8 *)(param_1 + 0x38));
      func_0x0048bfd4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_00489480(*(undefined8 *)(param_1 + 0x40));
      func_0x0048bfd4();
    }
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x48) * 2 + (uint)*(byte *)(param_1 + 0x49) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 00489cec; end: 00489cfb;  */

void FUN_00489cec(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00489a14();
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  func_0x0048c2d4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0048bf4c();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00489cfc; end: 00489d1f;  */

undefined8 FUN_00489cfc(undefined8 param_1)

{
  func_0x0048bf94();
  return param_1;
}



/* Entry: 00489d20; end: 00489d23;  */

undefined8 FUN_00489d20(undefined8 param_1)

{
  func_0x0048bf94();
  return param_1;
}



/* Entry: 00489d24; end: 00489d37;  */

void FUN_00489d24(void)

{
  FUN_00489cfc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00489d38; end: 00489db7;  */

undefined ** FUN_00489d38(void)

{
  return &PTR_DAT_009e8fc8;
}



/* Entry: 00489db8; end: 00489e03;  */

void FUN_00489db8(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x0048c1b0();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0048c058();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_00489cfc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 00489e04; end: 00489e3b;  */

long FUN_00489e04(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00489db8(param_1);
  }
  return param_1;
}



/* Entry: 00489e3c; end: 00489e4f;  */

void FUN_00489e3c(void)

{
  FUN_00489e04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00489e50; end: 00489e5b;  */

undefined ** FUN_00489e50(void)

{
  return &PTR_DAT_009e9010;
}



/* Entry: 00489e5c; end: 00489e8f;  */

void FUN_00489e5c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  FUN_00489db8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00489e90; end: 00489f2f;  */

long * FUN_00489e90(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0048c014();
  func_0x0048c1b0();
  if ((bool)in_ZR) {
    param_2 = *(long *)(unaff_x21 + 0x18);
    param_3 = (ulong)*(uint *)(param_2 + 0x10);
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0048c00c();
    param_4 = (char *)unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00489efc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00489efc;
  param_4 = "snapchat.notification.FriendStory.composite_story_id";
  func_0x0048bf8c();
  func_0x0048be30();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_00489efc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c1bc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar3);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00489f30; end: 00489fa7;  */

void FUN_00489f30(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0048be44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048c328();
  }
  if (*(int *)(unaff_x19 + 0x24) == 1) {
    func_0x00489d88(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x0048be0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
  }
  func_0x0048c2f4();
  return;
}



/* Entry: 00489fa8; end: 00489fb7;  */

void FUN_00489fa8(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0048bf3c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c254();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_00489cec();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_00489db8();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 1) {
        FUN_0048bd30();
        unaff_x21[3] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00489fb8; end: 00489fdb;  */

undefined8 FUN_00489fb8(undefined8 param_1)

{
  func_0x0048bf94();
  return param_1;
}



/* Entry: 00489fdc; end: 00489fdf;  */

undefined8 FUN_00489fdc(undefined8 param_1)

{
  func_0x0048bf94();
  return param_1;
}



/* Entry: 00489fe0; end: 00489ff3;  */

void FUN_00489fe0(void)

{
  FUN_00489fb8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00489ff4; end: 0048a073;  */

undefined ** FUN_00489ff4(void)

{
  return &PTR_DAT_009e9058;
}



/* Entry: 0048a074; end: 0048a0bf;  */

void FUN_0048a074(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x0048c1b0();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0048c058();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_00489fb8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 0048a0c0; end: 0048a0f7;  */

long FUN_0048a0c0(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0048a074(param_1);
  }
  return param_1;
}



/* Entry: 0048a0f8; end: 0048a10b;  */

void FUN_0048a0f8(void)

{
  FUN_0048a0c0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048a10c; end: 0048a117;  */

undefined ** FUN_0048a10c(void)

{
  return &PTR_DAT_009e90a8;
}



/* Entry: 0048a118; end: 0048a14b;  */

void FUN_0048a118(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  FUN_0048a074();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048a14c; end: 0048a1eb;  */

long * FUN_0048a14c(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0048c014();
  func_0x0048c1b0();
  if ((bool)in_ZR) {
    param_2 = *(long *)(unaff_x21 + 0x18);
    param_3 = (ulong)*(uint *)(param_2 + 0x10);
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0048c00c();
    param_4 = (char *)unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0048a1b8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_0048a1b8;
  param_4 = "snapchat.notification.DiscoverStory.composite_story_id";
  func_0x0048bf8c();
  func_0x0048be30();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_0048a1b8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c1bc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar3);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0048a1ec; end: 0048a263;  */

void FUN_0048a1ec(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0048be44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048c328();
  }
  if (*(int *)(unaff_x19 + 0x24) == 1) {
    func_0x0048a044(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x0048be0c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
  }
  func_0x0048c2f4();
  return;
}



/* Entry: 0048a264; end: 0048a267;  */

void FUN_0048a264(ulong *param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0048bf3c();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c254();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_00489fa8();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_0048a074();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 1) {
        FUN_0048bd90();
        unaff_x21[3] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048a268; end: 0048a2cf;  */

long FUN_0048a268(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  func_0x0048c178();
  func_0x00532f74(param_1 + 0x20);
  func_0x00532f74(param_1 + 0x28);
  func_0x0048c230();
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  return param_1;
}



/* Entry: 0048a2d0; end: 0048a2d3;  */

long FUN_0048a2d0(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  func_0x0048c178();
  func_0x00532f74(param_1 + 0x20);
  func_0x00532f74(param_1 + 0x28);
  func_0x0048c230();
  func_0x00532f74(param_1 + 0x38);
  func_0x00532f74(param_1 + 0x40);
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  return param_1;
}



/* Entry: 0048a2d4; end: 0048a2e7;  */

void FUN_0048a2d4(void)

{
  FUN_0048a268();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048a2e8; end: 0048a2f3;  */

undefined ** FUN_0048a2e8(void)

{
  return &PTR_DAT_009e90f0;
}



/* Entry: 0048a2f4; end: 0048a363;  */

void FUN_0048a2f4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  func_0x0048c264();
  FUN_00532fa8(unaff_x19 + 0x20);
  FUN_00532fa8(unaff_x19 + 0x28);
  func_0x0048c244();
  FUN_00532fa8(unaff_x19 + 0x38);
  FUN_00532fa8(unaff_x19 + 0x40);
  FUN_00532fa8(unaff_x19 + 0x48);
  FUN_00532fa8(unaff_x19 + 0x50);
  FUN_00532fa8(unaff_x19 + 0x58);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048a364; end: 0048a69f;  */

qword * FUN_0048a364(qword *param_1,qword *param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  qword *pqVar2;
  undefined8 uVar3;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  qword *unaff_x21;
  qword *pqVar4;
  int iVar5;
  qword *unaff_x22;
  int iVar6;
  
  func_0x0048c0c0();
  func_0x0048bfc0(param_1[2]);
  if ((long)param_2 < 0) {
    param_2 = (qword *)unaff_x22[1];
    if (param_2 != (qword *)0x0) {
      pqVar4 = (qword *)*unaff_x22;
      goto LAB_0048a39c;
    }
  }
  else {
    pqVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_0048a39c:
      param_4 = "snapchat.notification.FriendingSuggestion.userId";
      func_0x0048bf8c();
      func_0x0048c164();
      func_0x0048be58();
      param_1 = pqVar4;
      unaff_x21 = pqVar4;
    }
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a3d8;
  }
  else if ((int)param_2 != 0) {
LAB_0048a3d8:
    param_4 = "snapchat.notification.FriendingSuggestion.mutableName";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.magic + 2);
    param_1 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (qword *)unaff_x22[1];
    if (param_2 != (qword *)0x0) {
      pqVar4 = (qword *)*unaff_x22;
      goto LAB_0048a418;
    }
  }
  else {
    pqVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_0048a418:
      param_4 = "snapchat.notification.FriendingSuggestion.displayName";
      func_0x0048bf8c();
      func_0x0048c2bc();
      func_0x0048be58();
      param_1 = pqVar4;
      unaff_x21 = pqVar4;
    }
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a454;
  }
  else if ((int)param_2 != 0) {
LAB_0048a454:
    param_4 = "snapchat.notification.FriendingSuggestion.bitmojiAvatarId";
    func_0x0048bf8c();
    param_2 = (qword *)&MACH_HEADER.cputype;
    param_1 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a494;
  }
  else if ((int)param_2 != 0) {
LAB_0048a494:
    param_4 = "snapchat.notification.FriendingSuggestion.bitmojiSelfieId";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.cputype + 1);
    param_1 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a4d4;
  }
  else if ((int)param_2 != 0) {
LAB_0048a4d4:
    param_4 = "snapchat.notification.FriendingSuggestion.bitmojiSceneId";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.cputype + 2);
    param_1 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a514;
  }
  else if ((int)param_2 != 0) {
LAB_0048a514:
    param_4 = "snapchat.notification.FriendingSuggestion.bitmojiBackgroundId";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.cputype + 3);
    param_1 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = param_1;
  }
  pqVar4 = param_1;
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    func_0x0048be90();
    pqVar4 = &segment_command_00000020.vmsize;
    func_0x00487cbc();
    func_0x0048bee8();
    param_2 = param_1;
    unaff_x21 = pqVar4;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a57c;
  }
  else if ((int)param_2 != 0) {
LAB_0048a57c:
    param_4 = "snapchat.notification.FriendingSuggestion.suggestReason";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.cpusubtype + 1);
    pqVar4 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = pqVar4;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (qword *)0x0;
    if (unaff_x22[1] != 0) goto LAB_0048a5bc;
  }
  else if ((int)param_2 != 0) {
LAB_0048a5bc:
    param_4 = "snapchat.notification.FriendingSuggestion.abbreviatedSuggestReason";
    func_0x0048bf8c();
    param_2 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
    pqVar4 = unaff_x19;
    func_0x0048be58();
    unaff_x21 = pqVar4;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0048a618;
  }
  else if ((int)param_2 == 0) goto LAB_0048a618;
  param_4 = "snapchat.notification.FriendingSuggestion.suggestedToken";
  func_0x0048bf8c();
  func_0x0048be58();
  pqVar4 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_0048a618:
  pqVar2 = pqVar4;
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    func_0x0048be90();
    pqVar2 = (qword *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,pqVar4);
    func_0x0048bee8();
    unaff_x21 = pqVar2;
  }
  pqVar4 = pqVar2;
  if (*(int *)(unaff_x20 + 100) != 0) {
    func_0x0048be90();
    pqVar4 = (qword *)(ulong)*(uint *)(unaff_x20 + 100);
    uVar3 = 0x68;
    func_0x00487cbc(0x68,pqVar2);
    func_0x00487ce8(pqVar4,uVar3);
    unaff_x21 = pqVar4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c2c8();
  if ((long)(*pqVar4 - (long)param_4) < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*pqVar4 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar6);
      param_4 = (char *)pqVar4;
      func_0x0054ed58(pqVar4,pcVar1);
    }
    func_0x0054f690();
    return (qword *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (qword *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0048a6a0; end: 0048a9c7;  */

void FUN_0048a6a0(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  
  func_0x0048be44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    unaff_w20 = 0;
  }
  else {
    FUN_0048c328();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x48));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x50));
  lVar2 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x58));
  lVar2 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048bf00();
  }
  iVar1 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x60) * 2 + (uint)*(byte *)(unaff_x19 + 0x61) * 2;
  if (*(int *)(unaff_x19 + 100) != 0) {
    func_0x0048c1d4();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar2 = extraout_x8_09;
    if (extraout_x8_09 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x68) = iVar1;
  return;
}



/* Entry: 0048a9c8; end: 0048a9d3;  */

undefined1  [16] FUN_0048a9c8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 8;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 0048a9d4; end: 0048aa0b;  */

long FUN_0048a9d4(long param_1)

{
  func_0x0048bf94();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 0048aa0c; end: 0048aa1f;  */

void FUN_0048aa0c(void)

{
  FUN_0048a9d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048aa20; end: 0048aa2b;  */

undefined ** FUN_0048aa20(void)

{
  return &PTR_DAT_009e9140;
}



/* Entry: 0048aa2c; end: 0048aa6b;  */

void FUN_0048aa2c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048aa6c; end: 0048aafb;  */

long * FUN_0048aa6c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0048c024();
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x68);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0048c00c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048c064();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0048aafc; end: 0048ab5f;  */

long FUN_0048aafc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0048c034();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_0048ab60();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 0048ab60; end: 0048ab77;  */

void FUN_0048ab60(void)

{
  FUN_0048a6a0();
  FUN_0048bdf0();
  return;
}



/* Entry: 0048ab78; end: 0048ab8b;  */

void FUN_0048ab78(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0048c04c();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0048ab78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048ab8c; end: 0048abbf;  */

long FUN_0048ab8c(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  func_0x0048c178();
  func_0x00532f74(param_1 + 0x20);
  return param_1;
}



/* Entry: 0048abc0; end: 0048abd3;  */

void FUN_0048abc0(void)

{
  FUN_0048ab8c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048abd4; end: 0048abdf;  */

undefined ** FUN_0048abd4(void)

{
  return &PTR_DAT_009e9190;
}



/* Entry: 0048abe0; end: 0048ac1b;  */

void FUN_0048abe0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  func_0x0048c264();
  FUN_00532fa8(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048ac1c; end: 0048ad47;  */

long * FUN_0048ac1c(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x0048c014();
  func_0x0048bfc0(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_0048ac54;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_0048ac54:
      param_4 = "snapchat.notification.FriendAdd.user_id";
      func_0x0048bf8c();
      func_0x0048c164();
      func_0x0048bedc();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_0048ac90;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_0048ac90:
      param_4 = "snapchat.notification.FriendAdd.username";
      func_0x0048bf8c();
      func_0x0048be30();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0048ace0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_0048ace0;
  param_4 = "snapchat.notification.FriendAdd.display_name";
  func_0x0048bf8c();
  func_0x0048c2bc();
  func_0x0048bedc();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_0048ace0:
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x00487c24();
    param_1 = (long *)(ulong)*(uint *)(unaff_x21 + 0x28);
    uVar3 = 0x20;
    func_0x00487cbc(0x20,unaff_x19);
    func_0x00487ce8(param_1,uVar3);
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c1bc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar5);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0048ad48; end: 0048ade3;  */

long FUN_0048ad48(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048be44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_0048c328();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048bf00();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048bf00();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0048c1d4();
    unaff_x20 = unaff_x20 + extraout_x8_02 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar1 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 0048ade4; end: 0048ade7;  */

void FUN_0048ade4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048be9c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c11c();
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c25c();
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048ade8; end: 0048ae0f;  */

undefined8 FUN_0048ade8(undefined8 param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  return param_1;
}



/* Entry: 0048ae10; end: 0048ae23;  */

void FUN_0048ae10(void)

{
  FUN_0048ade8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048ae24; end: 0048ae2f;  */

undefined ** FUN_0048ae24(void)

{
  return &PTR_DAT_009e91d0;
}



/* Entry: 0048ae30; end: 0048af1b;  */

void FUN_0048ae30(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048af1c; end: 0048afb7;  */

void FUN_0048af1c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048be9c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c11c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048afb8; end: 0048b00b;  */

int * FUN_0048afb8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_0048b00c(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_0048b2a4(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 0048b00c; end: 0048b00f;  */

void FUN_0048b00c(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar6 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_0048b080;
  }
  else {
    plVar6 = (long *)plVar6[-1];
    if ((int)param_3 < 1) {
LAB_0048b080:
      uVar7 = 1;
      goto LAB_0048b084;
    }
    if (0x3ffffffb < iVar1) {
      uVar7 = 0x7fffffff;
      goto LAB_0048b084;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar7 = (ulong)param_3;
LAB_0048b084:
  plVar4 = (long *)(uVar7 * 8 + 8);
  if (plVar6 == (long *)0x0) {
    uVar7 = param_2;
    FUN_0048b180();
    uVar7 = uVar7 - 8 >> 3;
    if (0x7ffffffe < uVar7) {
      uVar7 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar2 = aplStack_58;
    aplStack_58[0] = plVar4;
    func_0x0048b1cc(pplVar2,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar2 != (long **)0x0) {
      plVar6 = (long *)(long)*(char *)((long)pplVar2 + 0x17);
      pplVar5 = pplVar2;
      if ((long)plVar6 < 0) {
        pplVar5 = (long **)*pplVar2;
        plVar6 = pplVar2[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar5,plVar6);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      FUN_005558a0(aplStack_58);
      __Znwm();
      return;
    }
    plVar3 = plVar6;
    func_0x0048b21c(plVar6,plVar4,1);
    plVar4 = plVar3;
  }
  *plVar4 = (long)plVar6;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar4 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    func_0x0048b1a4(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar7;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 0048b010; end: 0048b17f;  */

void FUN_0048b010(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar6 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_0048b080;
  }
  else {
    plVar6 = (long *)plVar6[-1];
    if ((int)param_3 < 1) {
LAB_0048b080:
      uVar7 = 1;
      goto LAB_0048b084;
    }
    if (0x3ffffffb < iVar1) {
      uVar7 = 0x7fffffff;
      goto LAB_0048b084;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar7 = (ulong)param_3;
LAB_0048b084:
  plVar4 = (long *)(uVar7 * 8 + 8);
  if (plVar6 == (long *)0x0) {
    uVar7 = param_2;
    FUN_0048b180();
    uVar7 = uVar7 - 8 >> 3;
    if (0x7ffffffe < uVar7) {
      uVar7 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar2 = aplStack_58;
    aplStack_58[0] = plVar4;
    func_0x0048b1cc(pplVar2,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar2 != (long **)0x0) {
      plVar6 = (long *)(long)*(char *)((long)pplVar2 + 0x17);
      pplVar5 = pplVar2;
      if ((long)plVar6 < 0) {
        pplVar5 = (long **)*pplVar2;
        plVar6 = pplVar2[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar5,plVar6);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      FUN_005558a0(aplStack_58);
      __Znwm();
      return;
    }
    plVar3 = plVar6;
    func_0x0048b21c(plVar6,plVar4,1);
    plVar4 = plVar3;
  }
  *plVar4 = (long)plVar6;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar4 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    func_0x0048b1a4(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar7;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 0048b180; end: 0048b1a3;  */

void FUN_0048b180(void)

{
  __Znwm();
  return;
}



/* Entry: 0048b1a4; end: 0048b1e7;  */

void FUN_0048b1a4(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 8 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 0048b1e8; end: 0048b263;  */

void FUN_0048b1e8(undefined8 param_1,undefined8 param_2)

{
  func_0x0048c1c8();
  _strlen(param_2);
  FUN_00554ab4();
  return;
}



/* Entry: 0048b264; end: 0048b2a3;  */

void FUN_0048b264(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  long lVar5;
  
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(param_1);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar4 = 0x3b - LZCOUNT(param_3);
    bVar1 = puVar3[0x50];
    if (uVar4 < bVar1) {
      lVar5 = *(long *)(puVar3 + 0x58);
      *param_2 = *(undefined8 *)(lVar5 + uVar4 * 8);
      *(undefined8 **)(lVar5 + uVar4 * 8) = param_2;
    }
    else {
      if (bVar1 == 0) {
        lVar5 = 0;
      }
      else {
        _memmove(param_2,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar5 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar4 = param_3 >> 3;
      if (0 < (long)((param_3 & 0xfffffffffffffff8) - lVar5)) {
        _bzero((long)param_2 + lVar5);
      }
      *(undefined8 **)(puVar3 + 0x58) = param_2;
      if (0x3f < uVar4) {
        uVar4 = 0x40;
      }
      puVar3[0x50] = (char)uVar4;
    }
    return;
  }
  return;
}



/* Entry: 0048b2a4; end: 0048b2cf;  */

undefined1  [16] FUN_0048b2a4(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (0 < param_2) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 0048b2d0; end: 0048b303;  */

long FUN_0048b2d0(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_0048b304(param_1);
  }
  return param_1;
}



/* Entry: 0048b304; end: 0048b317;  */

void FUN_0048b304(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048b318; end: 0048b343;  */

undefined8 * FUN_0048b318(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_00489a14(param_1,param_3);
  return param_1;
}



/* Entry: 0048b344; end: 0048b373;  */

long * FUN_0048b344(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0048b374; end: 0048b787;  */

void FUN_0048b374(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x0048c0d0();
  }
  else {
    func_0x0048bf6c();
  }
  func_0x0048bf2c(&PTR_DAT_009e88b8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 0048b788; end: 0048b79b;  */

void FUN_0048b788(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0048b79c; end: 0048b8c7;  */

void FUN_0048b79c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0048c04c();
  if (param_1 == 0) {
    func_0x0048c07c();
  }
  else {
    func_0x0048bed0();
  }
  func_0x0048c144();
  func_0x0048c150(&PTR_FUN_009e8908);
  if ((extraout_x8 & 1) != 0) {
    func_0x0048be84();
  }
  func_0x0048bf78();
  *(long *)(unaff_x21 + 0x10) = param_1;
  func_0x0048c21c();
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  return;
}



/* Entry: 0048b8c8; end: 0048b96b;  */

undefined8 * FUN_0048b8c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0048c2e8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c10c();
  }
  else {
    param_1 = unaff_x21;
    func_0x0048c114();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x21;
  *param_1 = &PTR_DAT_009e8d18;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048be84();
  }
  func_0x0048c0e4();
  func_0x0048c238();
  param_1[6] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0048c170();
  }
  param_1[7] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0048c170();
  }
  param_1[8] = puVar2;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  return param_1;
}



/* Entry: 0048b96c; end: 0048baa3;  */

void FUN_0048b96c(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x21;
  
  func_0x0048c04c();
  if (param_1 == 0) {
    func_0x0048c07c();
  }
  else {
    func_0x0048bed0();
  }
  func_0x0048c144();
  func_0x0048c150(&PTR_DAT_009e8c78);
  if ((extraout_x8 & 1) != 0) {
    func_0x0048be84();
  }
  func_0x0048bf78();
  func_0x0048c0ac();
  if (extraout_w8 == 1) {
    FUN_0048bd30();
    *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  }
  return;
}



/* Entry: 0048baa4; end: 0048bb47;  */

undefined8 * FUN_0048baa4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x0048c2e8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c10c();
  }
  else {
    param_1 = unaff_x21;
    func_0x0048c114();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x21;
  *param_1 = &PTR_DAT_009e8bd8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048be84();
  }
  func_0x0048c0e4();
  func_0x0048c238();
  param_1[6] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0048c170();
  }
  param_1[7] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x0048c170();
  }
  param_1[8] = puVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(unaff_x19 + 0x48);
  return param_1;
}



/* Entry: 0048bb48; end: 0048bb9b;  */

void FUN_0048bb48(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0048c04c();
  if (param_1 == 0) {
    func_0x0048c0d0();
  }
  else {
    func_0x0048bf6c();
  }
  func_0x0048c144();
  func_0x0048c150(&PTR_DAT_009e88b8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0048be84();
  }
  func_0x0048bf78();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 0048bb9c; end: 0048bc1f;  */

void FUN_0048bb9c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0048c04c();
  if (param_1 == 0) {
    __Znwm(0x40);
  }
  else {
    func_0x0048c204();
  }
  func_0x0048c144();
  func_0x0048c150(&PTR_DAT_009e89a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0048be84();
  }
  FUN_0048afb8(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  FUN_0048afb8(unaff_x21 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  return;
}



/* Entry: 0048bc20; end: 0048bc9f;  */

undefined8 * FUN_0048bc20(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0048c1c8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c0fc();
  }
  else {
    func_0x0048c210();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_009e8ae8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048be84();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x0048c24c();
  param_1[2] = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x0048c24c();
  param_1[3] = lVar1;
  lVar1 = unaff_x19 + 0x20;
  func_0x0048c24c();
  param_1[4] = lVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 0048bca0; end: 0048bcd7;  */

undefined8 * FUN_0048bca0(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0048c1c8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c10c();
  }
  else {
    param_1 = unaff_x20;
    func_0x0048c114();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009e93a0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_0048c8ec(param_1 + 3);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_0048c9b0();
  }
  param_1[6] = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 0048bcd8; end: 0048bcf3;  */

void FUN_0048bcd8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  ulong uVar8;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar7 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 1) goto LAB_0048b080;
  }
  else {
    plVar7 = (long *)plVar7[-1];
    if ((int)param_2 < 1) {
LAB_0048b080:
      uVar8 = 1;
      goto LAB_0048b084;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar8 = 0x7fffffff;
      goto LAB_0048b084;
    }
  }
  if ((int)param_2 < (int)(uVar1 << 1 | 1)) {
    param_2 = uVar1 * 2 + 1;
  }
  uVar8 = (ulong)param_2;
LAB_0048b084:
  plVar5 = (long *)(uVar8 * 8 + 8);
  if (plVar7 == (long *)0x0) {
    uVar8 = (ulong)uVar2;
    FUN_0048b180();
    uVar8 = uVar8 - 8 >> 3;
    if (0x7ffffffe < uVar8) {
      uVar8 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar3 = aplStack_58;
    aplStack_58[0] = plVar5;
    func_0x0048b1cc(pplVar3,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar3 != (long **)0x0) {
      plVar7 = (long *)(long)*(char *)((long)pplVar3 + 0x17);
      pplVar6 = pplVar3;
      if ((long)plVar7 < 0) {
        pplVar6 = (long **)*pplVar3;
        plVar7 = pplVar3[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar6,plVar7);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      FUN_005558a0(aplStack_58);
      __Znwm();
      return;
    }
    plVar4 = plVar7;
    func_0x0048b21c(plVar7,plVar5,1);
    plVar5 = plVar4;
  }
  *plVar5 = (long)plVar7;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar5 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 3);
    }
    func_0x0048b1a4(param_1);
  }
  param_1[1] = (uint)uVar8;
  *(long **)(param_1 + 2) = plVar5 + 1;
  return;
}



/* Entry: 0048bcf4; end: 0048bd2f;  */

undefined8 * FUN_0048bcf4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0048c1c8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c0d0();
  }
  else {
    param_1 = unaff_x20;
    func_0x005510c4();
  }
  *param_1 = &PTR_FUN_00a0d518;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00652de8();
  return param_1;
}



/* Entry: 0048bd30; end: 0048bd8f;  */

undefined8 * FUN_0048bd30(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0048c2e8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c190();
  }
  else {
    param_1 = unaff_x21;
    func_0x0048c198();
  }
  *param_1 = &PTR_FUN_009e8a98;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_00489cec();
  return param_1;
}



/* Entry: 0048bd90; end: 0048bdef;  */

undefined8 * FUN_0048bd90(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0048c2e8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0048c190();
  }
  else {
    param_1 = unaff_x21;
    func_0x0048c198();
  }
  *param_1 = &PTR_FUN_009e8b38;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_00489fa8();
  return param_1;
}



/* Entry: 0048bdf0; end: 0048beff;  */

long FUN_0048bdf0(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 0048bf00; end: 0048bf17;  */

void FUN_0048bf00(void)

{
  FUN_0048910c();
  return;
}



/* Entry: 0048bf18; end: 0048c327;  */

void FUN_0048bf18(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x00487c24();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x00487cbc(uVar1,unaff_x19);
  func_0x00487cbc(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 0048c328; end: 0048c33b;  */

void FUN_0048c328(void)

{
  FUN_0048910c();
  return;
}



/* Entry: 0048c33c; end: 0048c3cf;  */

undefined8 * FUN_0048c33c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e93a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_0048c8ec(param_1 + 3,param_2,param_3 + 0x18);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0048c9b0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 0048c3d0; end: 0048c3ff;  */

long FUN_0048c3d0(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0048c400(param_1);
  return param_1;
}



/* Entry: 0048c400; end: 0048c42f;  */

long * FUN_0048c400(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0049ad04();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 0048c430; end: 0048c433;  */

long FUN_0048c430(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_0048c400(param_1);
  return param_1;
}



/* Entry: 0048c434; end: 0048c447;  */

void FUN_0048c434(void)

{
  FUN_0048c3d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048c448; end: 0048c453;  */

undefined ** FUN_0048c448(void)

{
  return &PTR_DAT_009e93e0;
}



/* Entry: 0048c454; end: 0048c4ab;  */

void FUN_0048c454(long param_1)

{
  ulong *puVar1;
  
  FUN_0048c99c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0049ad58(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048c4ac; end: 0048c627;  */

dword * FUN_0048c4ac(dword *param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  dword *pdVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  dword *pdVar7;
  int iVar8;
  int iVar9;
  
  pdVar2 = param_1;
  if ((param_1[4] & 1) != 0) {
    pdVar2 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0(1,*(long *)(param_1 + 0xc),*(undefined4 *)(*(long *)(param_1 + 0xc) + 0x18),
                    param_2,param_3);
    param_2 = pdVar2;
  }
  if (param_1[0xe] != 0) {
    pdVar2 = param_3;
    FUN_0048c628(param_3,param_1[0xe],param_2);
    param_2 = pdVar2;
  }
  if (param_1[0xf] != 0) {
    pdVar2 = param_3;
    func_0x0048c654(param_3,param_1[0xf],param_2);
    param_2 = pdVar2;
  }
  iVar9 = param_1[8];
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    uVar5 = *(ulong *)(param_1 + 6);
    pdVar7 = param_1 + 6;
    if ((uVar5 & 1) != 0) {
      pdVar7 = (dword *)(uVar5 + (long)iVar8 * 8 + 7);
    }
    pdVar2 = &MACH_HEADER.cputype;
    func_0x0054dae0(4,*(long *)pdVar7,*(undefined4 *)(*(long *)pdVar7 + 0x18),param_2,param_3);
    param_2 = pdVar2;
  }
  pdVar7 = pdVar2;
  if (param_1[0x10] != 0) {
    func_0x0048ca14();
    pdVar7 = (dword *)(ulong)param_1[0x10];
    uVar3 = 0x28;
    func_0x00487cbc(0x28,pdVar2);
    func_0x00487ce8(pdVar7,uVar3);
    param_2 = pdVar7;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    func_0x0048ca14();
    param_2 = (dword *)(ulong)*(byte *)(param_1 + 0x11);
    uVar3 = 0x30;
    func_0x00487cbc(0x30,pdVar7);
    func_0x00487cbc(param_2,uVar3);
  }
  pdVar2 = param_2;
  if (param_1[0x12] != 0) {
    pdVar2 = param_3;
    func_0x0048c680(param_3,param_1[0x12],param_2);
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)pdVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)param_3 - (int)pdVar2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)pdVar2 + (long)iVar9);
        pdVar2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (dword *)((long)pdVar2 + (long)iVar8);
    }
    _memcpy(pdVar2,lVar4,uVar5 & 0xffffffff);
    return (dword *)((long)pdVar2 + (long)(int)uVar5);
  }
  return pdVar2;
}


