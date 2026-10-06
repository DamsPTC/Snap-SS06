/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00478914; end: 00478943;  */

void FUN_00478914(long param_1)

{
  func_0x00459128(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00478944; end: 0047894b;  */

ulong * FUN_00478944(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong *unaff_x20;
  
  puVar5 = param_2;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    unaff_x20[1] = (ulong)puVar5;
    unaff_x20[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *unaff_x20 = (ulong)puVar6;
  }
  else {
    *(char *)((long)unaff_x20 + 0x17) = (char)puVar5;
    puVar6 = unaff_x20;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,param_2,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return unaff_x20;
}



/* Entry: 0047894c; end: 00478a83;  */

void FUN_0047894c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [64];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  FUN_006ad024(auStack_48,"scn_notifications::RedriveUtil::reportAndDeleteOldNotifications");
  FUN_00478a84(auStack_60,param_1,param_3);
  FUN_00478ae4(&lStack_78,auStack_60);
  uVar1 = *param_1;
  FUN_00425cb4(auStack_d0,"reportAndDeleteOldNotifications");
  FUN_00461390(auStack_b8,uVar1,auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  if (lStack_78 != lStack_70) {
    FUN_00461838(*param_1,&lStack_78);
  }
  FUN_00461594(*param_1,*param_3);
  FUN_006495bc(auStack_b8);
  FUN_00478b58(auStack_60,param_2,param_3);
  FUN_00649518(auStack_b8);
  func_0x00459128(&lStack_78);
  FUN_00479638(auStack_60);
  FUN_006ad0cc(auStack_48);
  return;
}



/* Entry: 00478a84; end: 00478ae3;  */

void FUN_00478a84(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_128 [264];
  
  func_0x004617f0(auStack_128,*param_2,param_3[1],param_3[2],*param_3);
  FUN_00478d40(param_1,auStack_128);
  FUN_0047944c(auStack_128);
  return;
}



/* Entry: 00478ae4; end: 00478b57;  */

void FUN_00478ae4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00426a0c(param_1,(param_2[1] - *param_2) / 0xf0);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xf0) {
    FUN_00479520(param_1,lVar2);
  }
  return;
}



/* Entry: 00478b58; end: 00478d3f;  */

void FUN_00478b58(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar4; lVar6 = lVar6 + 0xf0) {
    plVar8 = (long *)*param_2;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a8 = &PTR_FUN_009e5290;
    uStack_88 = 0x13;
    FUN_00425cb4(auStack_c0,"NotifType");
    uVar1 = *(ulong *)(lVar6 + 0x20);
    if (-1 < (char)*(byte *)(lVar6 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(lVar6 + 0x2f);
    }
    puVar2 = &UNK_00803f20;
    if (uVar1 != 0) {
      puVar2 = (undefined *)(lVar6 + 0x18);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,puVar2);
    pppuVar5 = &ppuStack_a8;
    FUN_00470964(pppuVar5,auStack_c0,auStack_d8);
    lVar9 = *(long *)(param_3 + 0x10);
    lVar7 = *(long *)(lVar6 + 0x78);
    FUN_00425cb4(auStack_80,PTR_s_unfinishedreason_00b04d40);
    lVar3 = 0x98;
    if (lVar7 != lVar9) {
      lVar3 = 0xa0;
    }
    FUN_0045a3ec(pppuVar5,auStack_80,*(undefined8 *)((long)&PTR_s_ready_00b04d78 + lVar3));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    FUN_00425cb4(auStack_f0,"RedrvAttmptCount");
    func_0x00477308(auStack_108,*(undefined8 *)(lVar6 + 0x78));
    FUN_00470964(pppuVar5,auStack_f0,auStack_108);
    (**(code **)(*plVar8 + 0x18))(plVar8,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    FUN_004590f8(&ppuStack_a8);
  }
  return;
}



/* Entry: 00478d40; end: 00478deb;  */

void FUN_00478d40(undefined8 param_1)

{
  undefined1 auStack_430 [256];
  undefined1 auStack_330 [256];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  
  FUN_00478e38(auStack_230);
  FUN_00478dec(auStack_130,auStack_230);
  func_0x004796b0();
  FUN_00478dec(auStack_330,auStack_430);
  FUN_00478f98(param_1,auStack_130,auStack_330);
  func_0x00479694();
  func_0x0047967c(auStack_430);
  func_0x00479684();
  func_0x0047967c(auStack_230);
  return;
}



/* Entry: 00478dec; end: 00478e37;  */

void FUN_00478dec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_130 [256];
  
  FUN_00478e50(auStack_130,param_2);
  FUN_00478e50(param_1,auStack_130);
  func_0x00479684();
  return;
}



/* Entry: 00478e38; end: 00478e4f;  */

void FUN_00478e38(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_00478ee8(param_1 + 1,param_2 + 0x10);
  uVar1 = *param_1;
  *param_1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



/* Entry: 00478e50; end: 00478e6f;  */

void FUN_00478e50(void)

{
  func_0x004796bc();
  FUN_00478e70();
  return;
}



/* Entry: 00478e70; end: 00478e9b;  */

undefined1 * FUN_00478e70(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xf0] = 0;
  FUN_00478e9c();
  return param_1;
}



/* Entry: 00478e9c; end: 00478eaf;  */

void FUN_00478e9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_00457c38();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  return;
}



/* Entry: 00478eb0; end: 00478ee7;  */

void FUN_00478eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00478ee8(param_1 + 1,param_2 + 1);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* Entry: 00478ee8; end: 00478f97;  */

void FUN_00478ee8(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_120 [240];
  
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 == *(char *)(param_2 + 0xf0)) {
    if (cVar1 != '\0') {
      FUN_00457c38(auStack_120,param_1);
      FUN_00457bd0(param_1,param_2);
      FUN_00457bd0(param_2,auStack_120);
      func_0x00457cf4(auStack_120);
    }
    return;
  }
  if (cVar1 == '\0') {
    FUN_00457c1c(param_1,param_2);
  }
  else {
    FUN_00457c1c(param_2,param_1);
    param_2 = param_1;
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    func_0x00457cf4();
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



/* Entry: 00478f98; end: 00479023;  */

undefined8 * FUN_00478f98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00479310(auStack_130);
  func_0x00479310(auStack_230,param_3);
  FUN_00479024(param_1,auStack_130,auStack_230);
  func_0x00479684();
  func_0x00479694();
  return param_1;
}



/* Entry: 00479024; end: 00479253;  */

void FUN_00479024(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uStack_98 = 0;
  plStack_a0 = param_1;
  do {
    if ((((*(byte *)(param_2 + 0x1f) & 1) == 0) && ((*(byte *)(param_3 + 0x1f) & 1) == 0)) ||
       (lVar7 = *param_2, lVar7 == *param_3)) {
      uStack_98 = 1;
      FUN_00479268(&plStack_a0);
      return;
    }
    if ((*(byte *)(param_2 + 0x1f) & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar7 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_90,lVar7 + 0x58);
      FUN_00461b38(auStack_78,"expected row but query reported done. sql:",auStack_90);
      FUN_00641f40(uVar9,0x65,auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    }
    uVar4 = param_1[1];
    if (uVar4 < (ulong)param_1[2]) {
      FUN_00457c38(uVar4,param_2 + 1);
      lVar7 = uVar4 + 0xf0;
    }
    else {
      lVar7 = uVar4 - *param_1;
      uVar4 = lVar7 / 0xf0 + 1;
      if (0x111111111111111 < uVar4) {
        FUN_00479254();
LAB_0047921c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x479220);
        (*pcVar3)();
      }
      uVar2 = (param_1[2] - *param_1) / 0xf0;
      uVar8 = uVar2 * 2;
      if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
        uVar8 = uVar4;
      }
      if (0x88888888888887 < uVar2) {
        uVar8 = 0x111111111111111;
      }
      if (uVar8 == 0) {
        lVar10 = 0;
      }
      else {
        if (0x111111111111111 < uVar8) {
          FUN_0040cee8();
          goto LAB_0047921c;
        }
        lVar10 = uVar8 * 0xf0;
        __Znwm();
      }
      lVar7 = lVar10 + lVar7;
      FUN_00457c38(lVar7,param_2 + 1);
      lVar11 = *param_1;
      lVar1 = param_1[1];
      lVar12 = lVar7 + ((lVar1 - lVar11) / -0xf0) * 0xf0;
      lVar5 = lVar12;
      for (lVar6 = lVar11; lVar6 != lVar1; lVar6 = lVar6 + 0xf0) {
        FUN_00457c38(lVar5,lVar6);
        lVar5 = lVar5 + 0xf0;
      }
      for (; lVar11 != lVar1; lVar11 = lVar11 + 0xf0) {
        func_0x00457cf4(lVar11);
      }
      lVar7 = lVar7 + 0xf0;
      lVar6 = *param_1;
      *param_1 = lVar12;
      param_1[1] = lVar7;
      param_1[2] = lVar10 + uVar8 * 0xf0;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    param_1[1] = lVar7;
    FUN_004579d0(param_2);
  } while( true );
}



/* Entry: 00479254; end: 00479267;  */

char * FUN_00479254(void)

{
  char *pcVar1;
  
  pcVar1 = "vector";
  FUN_0040d774();
  if ((pcVar1[8] & 1U) == 0) {
    func_0x00479294(pcVar1);
  }
  return pcVar1;
}



/* Entry: 00479268; end: 004792cf;  */

long FUN_00479268(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00479294(param_1);
  }
  return param_1;
}



/* Entry: 004792d0; end: 004792d7;  */

void FUN_004792d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xf0;
    func_0x00457cf4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 004792d8; end: 0047932f;  */

void FUN_004792d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xf0;
    func_0x00457cf4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 00479330; end: 00479367;  */

undefined1 * FUN_00479330(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xf0] = 0;
  FUN_00479368();
  return param_1;
}



/* Entry: 00479368; end: 0047937b;  */

void FUN_00479368(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_00479398();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  return;
}



/* Entry: 0047937c; end: 00479397;  */

void FUN_0047937c(long param_1)

{
  FUN_00479398();
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}



/* Entry: 00479398; end: 0047944b;  */

long FUN_00479398(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x60,param_2 + 0x60,0x50);
  FUN_00459e04(param_1 + 0xb0,param_2 + 0xb0);
  FUN_00459e04(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



/* Entry: 0047944c; end: 004794ab;  */

undefined8 * FUN_0047944c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_130 [256];
  
  func_0x004796b0();
  FUN_004794ac(param_1 + 1,auStack_130);
  func_0x00479684();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_00457d28(param_1 + 2);
  return param_1;
}



/* Entry: 004794ac; end: 004794d3;  */

undefined8 * FUN_004794ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_004794d4(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 004794d4; end: 004794f7;  */

undefined8 FUN_004794d4(undefined8 param_1)

{
  FUN_004794f8();
  return param_1;
}



/* Entry: 004794f8; end: 0047951f;  */

void FUN_004794f8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != *(char *)(param_2 + 0xf0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xf0) == '\x01') {
        func_0x00457cf4();
        *(undefined1 *)(param_1 + 0xf0) = 0;
      }
      return;
    }
    func_0x00457c38();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00458708();
    func_0x004588e8();
    func_0x00458828();
    FUN_004575b8();
    func_0x004588b4(unaff_x20 + 0x60,unaff_x19 + 0x60);
    FUN_004575fc(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
    FUN_004575fc(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
    return;
  }
  return;
}



/* Entry: 00479520; end: 0047955b;  */

long FUN_00479520(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0047955c();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_00479590();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 0047955c; end: 0047958f;  */

void FUN_0047955c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 00479590; end: 00479637;  */

long FUN_00479590(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_0045a5ac(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_0045a67c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x18;
  FUN_0045a5fc(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00427834(auStack_58);
  return lVar2;
}



/* Entry: 00479638; end: 0047966b;  */

undefined8 FUN_00479638(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00479294(&uStack_28);
  return param_1;
}



/* Entry: 0047966c; end: 004796cf;  */

void FUN_0047966c(void)

{
  return;
}



/* Entry: 004796d0; end: 004797a7;  */

void FUN_004796d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_0071f128(&lStack_48);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 0x18) {
    lVar1 = param_2;
    FUN_0071f080(param_2,lVar2);
    if (*(char *)(lVar1 + 8) == '\x04') {
      FUN_0071e480(auStack_60);
      FUN_00476f08(param_1,lVar2);
      FUN_004575b8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    }
  }
  func_0x00459128(&lStack_48);
  return;
}



/* Entry: 004797a8; end: 0047982f;  */

void FUN_004797a8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [40];
  
  if ((bRam0000000000b65f08 & 1) == 0) {
    iVar1 = 0xb65f08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_00479854(0xb65dd0,0x1000);
      ___cxa_guard_release(0xb65f08);
    }
  }
  FUN_0071ebb0(0xb65dd8);
  FUN_00425cb4(auStack_58,"");
  func_0x00479cb0(0xb65e08,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__18ios_base5clearEj(*(long *)(lRam0000000000b65e00 + -0x18) + 0xb65e00,0);
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    FUN_0071e134(auStack_58,plVar3 + 5);
    uVar2 = 0xb65dd8;
    FUN_0071f0dc(0xb65dd8,plVar3 + 2);
    func_0x0071e318(auStack_58,uVar2);
    func_0x0071e360(auStack_58);
  }
  (**(code **)(*plRam0000000000b65dd0 + 0x10))(plRam0000000000b65dd0,0xb65dd8,0xb65e00);
  FUN_0046296c(param_1,0xb65e08);
  return;
}



/* Entry: 00479830; end: 00479853;  */

void FUN_00479830(long *param_1)

{
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = (long)(PTR___ZTVSt16invalid_argument_00998e08 + 0x10);
  return;
}



/* Entry: 00479854; end: 004799f3;  */

long * FUN_00479854(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [48];
  
  puVar1 = auStack_a0;
  puVar2 = auStack_a0;
  *param_1 = 0;
  FUN_0071de14(param_1 + 1,0);
  FUN_004799f4(param_1 + 6);
  FUN_00720e20(auStack_60);
  FUN_0071dfbc(&uStack_88,"");
  FUN_00425cb4(auStack_a0,"indentation");
  func_0x00479cec();
  func_0x0071e318(&uStack_88,puVar1);
  func_0x00479cf8();
  func_0x00479cd8();
  FUN_0071dfbc(&uStack_88,"None");
  FUN_00425cb4(auStack_a0,"commentStyle");
  func_0x00479cec();
  func_0x0071e318(&uStack_88,puVar2);
  func_0x00479cf8();
  func_0x00479cd8();
  puVar1 = auStack_60;
  FUN_00720ff4();
  lVar3 = *param_1;
  *param_1 = (long)puVar1;
  if (lVar3 != 0) {
    func_0x00479ce0();
  }
  if (param_2 != 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_88,param_2);
    func_0x00479c88(param_1 + 7,&uStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  }
  FUN_00720fb0(auStack_60);
  return param_1;
}



/* Entry: 004799f4; end: 00479a97;  */

undefined8 * FUN_004799f4(undefined8 *param_1)

{
  param_1[0xe] = &PTR_FUN_009e7e18;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_009e7df0;
  FUN_00479c40(param_1,&PTR_PTR_009e7e30,param_1 + 1);
  *param_1 = &PTR_FUN_009e7df0;
  param_1[0xe] = &PTR_FUN_009e7e18;
  FUN_0046218c(param_1 + 1,0x10);
  return param_1;
}



/* Entry: 00479a98; end: 00479acb;  */

long FUN_00479a98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00479bc8(param_1,&PTR_PTR_009e7e28);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x70);
  return param_1;
}



/* Entry: 00479acc; end: 00479bc7;  */

void FUN_00479acc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_58 [40];
  
  FUN_0071ebb0(param_2 + 1);
  FUN_00425cb4(auStack_58,"");
  func_0x00479cb0(param_2 + 7,auStack_58);
  plVar1 = param_2 + 6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  __ZNSt3__18ios_base5clearEj((long)plVar1 + *(long *)(*plVar1 + -0x18),0);
  plVar3 = (long *)(param_3 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    FUN_0071e134(auStack_58,plVar3 + 5);
    puVar2 = param_2 + 1;
    FUN_0071f0dc(puVar2,plVar3 + 2);
    func_0x0071e318(auStack_58,puVar2);
    func_0x0071e360(auStack_58);
  }
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_2 + 1,plVar1);
  FUN_0046296c(param_1,param_2 + 7);
  return;
}



/* Entry: 00479bc8; end: 00479c0b;  */

void FUN_00479bc8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_00462628(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00779cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev_00998a90)(param_1,param_2 + 1);
  return;
}



/* Entry: 00479c0c; end: 00479c1b;  */

long FUN_00479c0c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  FUN_00479bc8(lVar1,&PTR_PTR_009e7e28);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar2 + 0x70);
  return lVar1;
}



/* Entry: 00479c1c; end: 00479c2f;  */

void FUN_00479c1c(void)

{
  FUN_00479a98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00479c30; end: 00479c3f;  */

void FUN_00479c30(long *param_1)

{
  FUN_00479a98((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00479c40; end: 00479cd7;  */

long * FUN_00479c40(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  func_0x00462164((long)param_1 + *(long *)(*param_1 + -0x18),param_3);
  return param_1;
}



/* Entry: 00479cd8; end: 00479cff;  */

undefined8 * FUN_00479cd8(void)

{
  undefined8 in_stack_00000018;
  
  FUN_0071e38c();
  in_stack_00000018 = 0;
  func_0x0071f558(&stack0x00000028);
  return &stack0x00000018;
}



/* Entry: 00479d00; end: 00479d57;  */

void FUN_00479d00(long *param_1)

{
  undefined8 *puVar1;
  long *extraout_x8;
  long *plVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_28 = ((undefined8 *)*param_1)[1];
  uStack_30 = *(undefined8 *)*param_1;
  FUN_00479d58(&uStack_30);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(extraout_x8,0x24,0);
  plVar2 = (long *)*extraout_x8;
  if (-1 < *(char *)((long)extraout_x8 + 0x17)) {
    plVar2 = extraout_x8;
  }
  func_0x00479eac(puVar1,plVar2);
  return;
}



/* Entry: 00479d58; end: 00479db3;  */

void FUN_00479d58(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(param_1,0x24,0);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  func_0x00479eac(param_2,plVar1);
  return;
}



/* Entry: 00479db4; end: 00479de3;  */

void FUN_00479db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,param_3,param_4,&uStack_11);
  return;
}



/* Entry: 00479de4; end: 00479e77;  */

ulong ***** FUN_00479de4(ulong *****param_1,long param_2)

{
  ulong ****ppppuVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  ulong *****pppppuVar6;
  ulong ***pppuVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (0 < param_2) {
    FUN_007216b0(&ppppuStack_58);
    FUN_00457d70();
    func_0x00461914("{} ({})");
    FUN_00721c60(param_1);
    pppppuVar6 = &ppppuStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar6);
    return pppppuVar6;
  }
  pcVar5 = "n/a";
  _strlen();
  if ((ulong *****)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
    pcStack_48 = FUN_00425d5c;
    ppppuVar8 = *(ulong *****)((long)pcVar5 + 8);
    if (ppppuVar8 != (ulong ****)0x0) {
      ppppuVar1 = ppppuVar8 + 1;
      do {
        pppuVar7 = *ppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar3) {
          *ppppuVar1 = (ulong ***)((long)pppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppuVar7 == (ulong ***)0x0) {
        ppppuStack_58 = (ulong ****)param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        (*(code *)(*ppppuVar8)[2])(ppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar8);
      }
    }
    return (ulong *****)pcVar5;
  }
  if ((ulong *****)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar5 | 7);
    }
    pppppuVar6 = (ulong *****)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong ****)pcVar5;
    param_1[2] = (ulong ****)((ulong)((long)pdVar4 + 1) | 0x8000000000000000);
    *param_1 = (ulong ****)pppppuVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar5;
    pppppuVar6 = param_1;
    if ((ulong *****)pcVar5 == (ulong *****)0x0) goto LAB_00425d3c;
  }
  _memmove(pppppuVar6,"n/a",pcVar5);
LAB_00425d3c:
  *(char *)((long)pppppuVar6 + (long)pcVar5) = '\0';
  return param_1;
}



/* Entry: 00479e78; end: 00479e9f;  */

void FUN_00479e78(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  FUN_00462690(param_1,&uStack_11,1);
  return;
}



/* Entry: 00479ea0; end: 00479f33;  */

ulong ***** FUN_00479ea0(ulong *****param_1,long param_2,ulong param_3)

{
  ulong ****ppppuVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  ulong *****pppppuVar6;
  ulong ***pppuVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((param_3 & 1) == 0) {
    param_2 = 0;
  }
  if (0 < param_2) {
    FUN_007216b0(&ppppuStack_58);
    FUN_00457d70();
    func_0x00461914("{} ({})");
    FUN_00721c60(param_1);
    pppppuVar6 = &ppppuStack_58;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar6);
    return pppppuVar6;
  }
  pcVar5 = "n/a";
  _strlen();
  if ((ulong *****)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
    pcStack_48 = FUN_00425d5c;
    ppppuVar8 = *(ulong *****)((long)pcVar5 + 8);
    if (ppppuVar8 != (ulong ****)0x0) {
      ppppuVar1 = ppppuVar8 + 1;
      do {
        pppuVar7 = *ppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
        if (bVar3) {
          *ppppuVar1 = (ulong ***)((long)pppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppuVar7 == (ulong ***)0x0) {
        ppppuStack_58 = (ulong ****)param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        (*(code *)(*ppppuVar8)[2])(ppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar8);
      }
    }
    return (ulong *****)pcVar5;
  }
  if ((ulong *****)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar5 | 7);
    }
    pppppuVar6 = (ulong *****)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong ****)pcVar5;
    param_1[2] = (ulong ****)((ulong)((long)pdVar4 + 1) | 0x8000000000000000);
    *param_1 = (ulong ****)pppppuVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar5;
    pppppuVar6 = param_1;
    if ((ulong *****)pcVar5 == (ulong *****)0x0) goto LAB_00425d3c;
  }
  _memmove(pppppuVar6,"n/a",pcVar5);
LAB_00425d3c:
  *(char *)((long)pppppuVar6 + (long)pcVar5) = '\0';
  return param_1;
}



/* Entry: 00479f34; end: 00479f67;  */

void FUN_00479f34(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_00479f68(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 00479f68; end: 00479fbf;  */

undefined8 FUN_00479f68(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_00479d00(auStack_38,param_2);
  FUN_00461998(uVar1,"{}",auStack_38);
  FUN_00479fc0();
  return uVar1;
}



/* Entry: 00479fc0; end: 00479fef;  */

void FUN_00479fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (&stack0x00000008);
  return;
}



/* Entry: 00479ff0; end: 0047a053;  */

undefined1 * FUN_00479ff0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  FUN_0047a054();
  return param_1;
}



/* Entry: 0047a054; end: 0047a27f;  */

/* WARNING: Removing unreachable block (ram,0x0047a124) */

void FUN_0047a054(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [8];
  char cStack_a0;
  byte bStack_80;
  undefined1 auStack_78 [40];
  byte bStack_50;
  ulong auStack_48 [3];
  
  if (*(char *)(param_2 + 0x18) != '\x01') {
    return;
  }
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  FUN_0064b608(auStack_78,param_2,auStack_48);
  if ((bStack_50 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  else {
    puVar1 = auStack_78;
    FUN_0064b6ec(puVar1,"dt_data",7);
    if (puVar1 == (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
      func_0x0047a404();
    }
    else {
      if (puVar1[8] == '\x04') {
        FUN_0071e480(auStack_a8);
        FUN_00473a54(param_1,auStack_a8);
        func_0x0047a420();
        auStack_48[0] = auStack_48[0] & 0xffffffffffffff00;
        auStack_48[2] = auStack_48[2] & 0xffffffffffffff;
        FUN_0064b608(auStack_a8,param_1,auStack_48);
        if ((bStack_80 & 1) == 0) {
          func_0x0047a3f4(3);
        }
        else if (cStack_a0 == '\a') {
          FUN_004796d0(auStack_d0,auStack_a8);
          FUN_0047a280(param_1 + 0x20,auStack_d0);
          func_0x00459d84(auStack_d0);
        }
        else {
          func_0x0047a3f4(4);
          FUN_00425cb4(auStack_d0,"");
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
        }
        FUN_00460a8c(auStack_a8);
        goto LAB_0047a1ac;
      }
      func_0x0047a3f4(2);
      func_0x0047a404();
    }
    func_0x0047a420();
  }
LAB_0047a1ac:
  FUN_00460a8c(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 0047a280; end: 0047a303;  */

long FUN_0047a280(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x004680ac();
  }
  else {
    FUN_00463b94();
  }
  return param_1;
}



/* Entry: 0047a304; end: 0047a31f;  */

void FUN_0047a304(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 0047a320; end: 0047a3f3;  */

long FUN_0047a320(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_004597c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00459c38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 0047a3f4; end: 0047a43b;  */

void FUN_0047a3f4(void)

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x50) = in_w8;
  *(undefined1 *)(unaff_x19 + 0x54) = 1;
  return;
}



/* Entry: 0047a43c; end: 0047a70b;  */

void FUN_0047a43c(undefined8 param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined1 auStack_248 [24];
  undefined *apuStack_230 [3];
  undefined *puStack_218;
  undefined8 *puStack_210;
  byte bStack_201;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *apuStack_1e8 [5];
  byte bStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined **ppuStack_78;
  
  func_0x0047ab0c();
  FUN_004799f4(auStack_1a0);
  puStack_1b8 = (undefined *)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  ppuVar3 = &puStack_1b8;
  FUN_0064b608(apuStack_1e8,param_1);
  if ((bStack_1c0 & 1) == 0) {
    ppuVar5 = &puStack_1b8;
    FUN_00457d70();
    ppuStack_90 = ppuVar5;
    ppuStack_88 = ppuVar3;
    func_0x00461914("<invalid payload: error: {}>");
    FUN_00721c60(auStack_248);
  }
  else {
    FUN_0071f128(&ppuStack_200,apuStack_1e8);
    bVar9 = true;
    for (ppuVar5 = ppuStack_200; ppuVar5 != ppuStack_1f8; ppuVar5 = ppuVar5 + 3) {
      ppuVar3 = apuStack_1e8;
      FUN_0071f080(ppuVar3,ppuVar5);
      if (!bVar9) {
        FUN_00461ffc(auStack_1a0,", ");
      }
      ppuVar4 = ppuVar5;
      FUN_0047a8c0();
      if (ppuVar4 == &PTR_FUN_009e7f08) {
        FUN_0047a90c(&puStack_218);
        bVar2 = bStack_201;
        puVar1 = puStack_210;
        ppuVar8 = (undefined **)(ulong)bStack_201;
        ppuVar4 = ppuVar5;
        FUN_00457d70();
        puStack_80 = puVar1;
        if (-1 < (char)bVar2) {
          puStack_80 = ppuVar8;
        }
        ppuStack_78 = (undefined **)0x0;
        ppuStack_90 = ppuVar4;
        ppuStack_88 = ppuVar3;
        func_0x00461914("{}: <redacted, size: {}>");
        FUN_00721c60(apuStack_230);
        ppuVar3 = apuStack_230;
        FUN_00461fe0(auStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_230);
        ppuVar4 = &puStack_218;
      }
      else {
        FUN_0047a90c(apuStack_230);
        ppuVar8 = ppuVar5;
        FUN_00457d70();
        ppuVar4 = apuStack_230;
        ppuVar7 = ppuVar3;
        FUN_00457d70();
        ppuStack_90 = ppuVar8;
        ppuStack_88 = ppuVar3;
        puStack_80 = ppuVar4;
        ppuStack_78 = ppuVar7;
        func_0x00461914("{}: {}");
        FUN_00721c60(&puStack_218);
        ppuVar3 = &puStack_218;
        FUN_00461fe0(auStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_218);
        ppuVar4 = apuStack_230;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
      bVar9 = false;
    }
    func_0x00459128(&ppuStack_200);
    FUN_0046296c(auStack_248,&uStack_198);
  }
  FUN_00460a8c(apuStack_1e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1b8);
  FUN_00479a98(auStack_1a0);
  puVar6 = auStack_248;
  FUN_00457d70();
  uStack_198 = 0;
  puStack_190 = puVar6;
  ppuStack_188 = ppuVar3;
  func_0x00461914("JSON[size: {}, payload: [{}]]");
  func_0x0047aadc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
  return;
}



/* Entry: 0047a70c; end: 0047a71f;  */

ulong * FUN_0047a70c(ulong *param_1,long param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  dword *pdVar3;
  char *pcVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong *puVar8;
  bool bVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  char *pcStack_178;
  long lStack_80;
  char *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar5 = auStack_1c0;
    puVar8 = auStack_1c0;
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    FUN_004799f4(&uStack_190);
    plVar11 = (long *)(param_2 + 0x10);
    bVar9 = true;
    while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
      if (!bVar9) {
        param_3 = ", ";
        FUN_00461ffc(&uStack_190);
      }
      ppuVar6 = (undefined **)(plVar11 + 2);
      FUN_0047a8c0();
      if (ppuVar6 == &PTR_FUN_009e7f08) {
        lVar12 = (long)*(char *)((long)plVar11 + 0x3f);
        if (lVar12 < 0) {
          lVar12 = plVar11[6];
        }
        lVar7 = (long)(plVar11 + 2);
        FUN_00457d70();
        uStack_68 = 0;
        lStack_80 = lVar7;
        pcStack_78 = param_3;
        lStack_70 = lVar12;
        func_0x00461914("{}: <redacted, size: {}>");
        FUN_00721c60(auStack_1a8);
        func_0x0047aaf8();
      }
      else {
        param_3 = (char *)(plVar11 + 2);
        FUN_0047aa60(&lStack_80,param_3,plVar11 + 5);
        func_0x00461914("{}: {}");
        FUN_00721c60(auStack_1a8);
        func_0x0047aaf8();
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
      bVar9 = false;
    }
    FUN_0046296c(auStack_1c0,&uStack_188);
    FUN_00479a98(&uStack_190);
    FUN_00457d70();
    uStack_188 = 0;
    uStack_190 = uVar10;
    puStack_180 = (undefined1 *)puVar5;
    pcStack_178 = param_3;
    func_0x00461914("Map[size: {}, payload: [{}]]");
    func_0x0047aadc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    return puVar8;
  }
  pcVar4 = "<unset>";
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < pcVar4) {
    FUN_0040d740();
    plVar11 = *(long **)((long)pcVar4 + 8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return (ulong *)pcVar4;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar4) {
    pdVar3 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar4 | 7) != (dword *)0x17) {
      pdVar3 = (dword *)((ulong)pcVar4 | 7);
    }
    puVar5 = (ulong *)((long)pdVar3 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar4;
    param_1[2] = (ulong)((long)pdVar3 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar5;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar4;
    puVar5 = param_1;
    if ((ulong *)pcVar4 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar5,"<unset>",pcVar4);
LAB_00425d3c:
  *(char *)((long)puVar5 + (long)pcVar4) = '\0';
  return param_1;
}



/* Entry: 0047a720; end: 0047a8bf;  */

void FUN_0047a720(long param_1,char *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  char *pcStack_178;
  long lStack_80;
  char *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar3 = auStack_1c0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_004799f4(&uStack_190);
  plVar6 = (long *)(param_1 + 0x10);
  bVar4 = true;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    if (!bVar4) {
      param_2 = ", ";
      FUN_00461ffc(&uStack_190);
    }
    ppuVar1 = (undefined **)(plVar6 + 2);
    FUN_0047a8c0();
    if (ppuVar1 == &PTR_FUN_009e7f08) {
      lVar7 = (long)*(char *)((long)plVar6 + 0x3f);
      if (lVar7 < 0) {
        lVar7 = plVar6[6];
      }
      lVar2 = (long)(plVar6 + 2);
      FUN_00457d70();
      uStack_68 = 0;
      lStack_80 = lVar2;
      pcStack_78 = param_2;
      lStack_70 = lVar7;
      func_0x00461914("{}: <redacted, size: {}>");
      FUN_00721c60(auStack_1a8);
      func_0x0047aaf8();
    }
    else {
      param_2 = (char *)(plVar6 + 2);
      FUN_0047aa60(&lStack_80,param_2,plVar6 + 5);
      func_0x00461914("{}: {}");
      FUN_00721c60(auStack_1a8);
      func_0x0047aaf8();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    bVar4 = false;
  }
  FUN_0046296c(auStack_1c0,&uStack_188);
  FUN_00479a98(&uStack_190);
  FUN_00457d70();
  uStack_188 = 0;
  uStack_190 = uVar5;
  puStack_180 = puVar3;
  pcStack_178 = param_2;
  func_0x00461914("Map[size: {}, payload: [{}]]");
  func_0x0047aadc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  return;
}



/* Entry: 0047a8c0; end: 0047a90b;  */

undefined ** FUN_0047a8c0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  
  lVar3 = 0x28;
  ppuVar1 = &PTR_s_n_id_009e7ee0;
  do {
    ppuVar4 = ppuVar1;
    if (lVar3 == 0) {
      return ppuVar4;
    }
    uVar2 = param_1;
    FUN_004636dc(param_1,*ppuVar4);
    lVar3 = lVar3 + -8;
    ppuVar1 = ppuVar4 + 1;
  } while ((int)uVar2 == 0);
  return ppuVar4;
}



/* Entry: 0047a90c; end: 0047aa5f;  */

void FUN_0047a90c(undefined8 param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [256];
  undefined1 auStack_88 [24];
  long alStack_70 [6];
  
  FUN_00720e20(alStack_70);
  FUN_0071dfbc(auStack_190,"");
  puVar1 = auStack_88;
  FUN_00425cb4(puVar1,"indentation");
  func_0x0047aad0();
  func_0x0071e318(auStack_190,puVar1);
  func_0x0047aae8();
  func_0x0047aaf0();
  FUN_0071dfbc(auStack_190,"None");
  puVar1 = auStack_88;
  FUN_00425cb4(puVar1,"commentStyle");
  func_0x0047aad0();
  func_0x0071e318(auStack_190,puVar1);
  func_0x0047aae8();
  func_0x0047aaf0();
  FUN_004799f4(auStack_190);
  plVar2 = alStack_70;
  FUN_00720ff4();
  (**(code **)(*plVar2 + 0x10))();
  FUN_0046296c(param_1,auStack_188);
  func_0x0047aab4();
  FUN_00479a98(auStack_190);
  FUN_00720fb0(alStack_70);
  return;
}



/* Entry: 0047aa60; end: 0047aaa3;  */

undefined8 * FUN_0047aa60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  FUN_00457d70();
  uVar2 = uVar1;
  FUN_00457d70();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 0047aaa4; end: 0047ab1f;  */

ulong * FUN_0047aaa4(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  char *pcVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  pcVar5 = "<unset>";
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < pcVar5) {
    FUN_0040d740();
    plVar8 = *(long **)((long)pcVar5 + 8);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return (ulong *)pcVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)pcVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)pcVar5;
    puVar6 = param_1;
    if ((ulong *)pcVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,"<unset>",pcVar5);
LAB_00425d3c:
  *(char *)((long)puVar6 + (long)pcVar5) = '\0';
  return param_1;
}



/* Entry: 0047ab20; end: 0047abff;  */

void FUN_0047ab20(undefined1 *param_1,long *param_2)

{
  bool bVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined8 uStack_70;
  int iStack_68;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      param_2 = (long *)*param_2;
      goto LAB_0047ab50;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_0047ab50:
    FUN_00652118(&uStack_70,param_2,lVar3);
    ppuStack_58 = &PTR_FUN_009e8808;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    pppuVar2 = &ppuStack_58;
    FUN_00549e84(pppuVar2,uStack_70,iStack_68 - (int)uStack_70);
    bVar1 = ((ulong)pppuVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_00460978(param_1,&ppuStack_58);
    }
    param_1[0x38] = !bVar1;
    FUN_00487550(&ppuStack_58);
    FUN_0040d974(&uStack_70);
    return;
  }
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 0047ac00; end: 0047ad93;  */

void FUN_0047ac00(long param_1,undefined8 *param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    plVar2 = (long *)*param_2;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_009e5290;
    uStack_60 = 0;
    uStack_48 = 9;
    pppuVar1 = &ppuStack_68;
    FUN_0047487c(pppuVar1,*(undefined4 *)(param_1 + 0x40));
    FUN_00425cb4(auStack_80,"NotifType");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_98,param_1 + 0x58);
    FUN_00470964(pppuVar1,auStack_80,auStack_98);
    (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    func_0x0047af8c();
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    plVar2 = (long *)*param_2;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_009e5290;
    uStack_60 = 0;
    uStack_48 = 10;
    FUN_00425cb4(auStack_b0,"NotifType");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c8,param_1 + 0x58);
    pppuVar1 = &ppuStack_68;
    FUN_00470964(pppuVar1,auStack_b0,auStack_c8);
    (**(code **)(*plVar2 + 0x20))(plVar2,pppuVar1,param_1 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x0047af8c();
  }
  return;
}



/* Entry: 0047ad94; end: 0047af7b;  */

void FUN_0047ad94(undefined1 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uStack_48 = 0;
  lVar1 = param_2;
  FUN_0045a1e8();
  uStack_38 = 1;
  lStack_40 = lVar1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_00425cb4(auStack_88,"sdn_data");
    FUN_00473c20(param_2,auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    if (param_2 == 0) goto LAB_0047aeb0;
    FUN_0047ab20(auStack_88,param_2 + 0x28);
    func_0x0047af94();
    FUN_004609ec(auStack_88);
  }
  else {
    if (*(char *)(param_3 + 0x128) != '\x01') goto LAB_0047aeb0;
    lVar1 = param_3 + 0x100;
    FUN_0064b6ec(lVar1,"sdn_data",8);
    if ((lVar1 == 0) || (*(char *)(lVar1 + 8) != '\x04')) goto LAB_0047aeb0;
    FUN_0071e480(auStack_a0);
    FUN_0047ab20(auStack_88,auStack_a0);
    func_0x0047af94();
    FUN_004609ec(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  }
  if ((param_1[0x38] & 1) == 0) {
    func_0x0047af7c(0x10005);
  }
LAB_0047aeb0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x58,param_3 + 0x18);
  puVar2 = &uStack_48;
  FUN_0045a3bc();
  if ((param_1[0x50] & 1) == 0) {
    param_1[0x50] = 1;
  }
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  return;
}



/* Entry: 0047af7c; end: 0047af9f;  */

void FUN_0047af7c(void)

{
  undefined4 in_w8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x40) = in_w8;
  *(undefined1 *)(unaff_x19 + 0x44) = 1;
  return;
}



/* Entry: 0047afa0; end: 0047b73b;  */

void FUN_0047afa0(long param_1,char ***param_2,char ***param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char ***pppcVar3;
  char ***pppcVar4;
  char ***pppcVar5;
  char *pcVar6;
  char ***pppcVar7;
  char ***pppcVar8;
  char ***pppcVar9;
  char **ppcVar10;
  undefined1 auStack_e0 [24];
  char *apcStack_c8 [3];
  char **ppcStack_b0;
  char **ppcStack_a8;
  char **ppcStack_a0;
  char **ppcStack_98;
  char **ppcStack_90;
  char **ppcStack_88;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char **ppcStack_60;
  char **ppcStack_58;
  char **ppcStack_50;
  char **ppcStack_48;
  
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 10);
  if (param_3[0xb] != (char **)0x0) {
    param_2[0xd] = param_3[0xb];
    *(undefined1 *)(param_2 + 0xe) = 1;
  }
  pppcVar5 = param_3 + 6;
  uVar2 = *(char *)(param_3 + 5) == '\x01';
  if ((bool)uVar2) {
    if (*(char *)(param_3 + 9) == '\0') {
      pppcVar5 = param_2;
      pppcVar3 = param_3;
      func_0x0047baa8();
      func_0x0047ba58();
      pppcVar4 = pppcVar5;
      func_0x0047baa0();
      if (pppcVar5 == (char ***)0x0) {
        func_0x0047ba90();
        func_0x0047ba3c();
        ppcStack_a8 = (char **)0x0;
        ppcStack_a0 = (char **)0x58;
        ppcStack_98 = (char **)0x0;
        func_0x0047ba04();
        func_0x0047ba2c();
        func_0x0047bab4();
        ppcStack_b0 = (char **)0x8db426;
        ppcStack_a8 = (char **)0x0;
        ppcStack_a0 = (char **)pppcVar4;
        ppcStack_98 = (char **)pppcVar3;
        func_0x0047ba10();
        func_0x0047ba80();
        func_0x0047ba4c();
        func_0x0047b9e8();
      }
      else {
        pppcVar5 = pppcVar5 + 5;
        pppcVar4 = param_2;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        func_0x0047baa8();
        func_0x0047ba58();
        pppcVar3 = pppcVar4;
        func_0x0047baa0();
        if (pppcVar4 == (char ***)0x0) {
          func_0x0047ba90();
          func_0x0047ba3c();
          ppcStack_a8 = (char **)0x0;
          ppcStack_a0 = (char **)0x60;
          ppcStack_98 = (char **)0x0;
          func_0x0047ba04();
          func_0x0047ba2c();
          func_0x0047bab4();
          ppcStack_b0 = (char **)0x8cf5fc;
          ppcStack_a8 = (char **)0x0;
          ppcStack_a0 = (char **)pppcVar3;
          ppcStack_98 = (char **)pppcVar5;
          func_0x0047ba10();
          func_0x0047ba80();
          func_0x0047ba4c();
          func_0x0047b9e8();
        }
        else {
          pppcVar5 = param_2 + 3;
          pppcVar4 = pppcVar4 + 5;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
          func_0x0047baa8();
          func_0x0047ba58();
          pppcVar3 = pppcVar5;
          func_0x0047baa0();
          if (pppcVar5 != (char ***)0x0) {
            pppcVar5 = pppcVar5 + 5;
            func_0x0047bb04();
            param_2[6] = (char **)pppcVar5;
            *(undefined4 *)(param_2 + 7) = 1;
            pppcVar5 = &ppcStack_b0;
            FUN_00425cb4(pppcVar5,"is_redrivable");
            func_0x0047ba58();
            func_0x0047baa0();
            if (pppcVar5 == (char ***)0x0) {
              ppcVar10 = (char **)0x1;
            }
            else {
              pppcVar5 = pppcVar5 + 5;
              FUN_0047bbf4();
              ppcVar10 = (char **)((ulong)pppcVar5 & 0xffffffff);
            }
            param_2[0x12] = ppcVar10;
            pppcVar5 = &ppcStack_b0;
            FUN_00425cb4(pppcVar5,"skip_dedupe");
            func_0x0047ba58();
            func_0x0047baa0();
            if (pppcVar5 == (char ***)0x0) {
              ppcVar10 = (char **)0x0;
            }
            else {
              pppcVar5 = pppcVar5 + 5;
              FUN_0047bbf4();
              ppcVar10 = (char **)((ulong)pppcVar5 & 0xffffffff);
            }
            param_2[0x14] = ppcVar10;
            FUN_004797a8(&ppcStack_b0,param_3);
            FUN_00473a54(param_2 + 9,&ppcStack_b0);
            func_0x0047baa0();
            if (*(char *)(param_2 + 0x20) == '\x01') {
              FUN_0047383c(param_2,param_3);
            }
            func_0x0047bb1c();
            *(undefined1 *)(param_1 + 0x100) = 0;
            *(undefined1 *)(param_1 + 0x128) = 0;
            *(undefined1 *)(param_1 + 0x130) = 0;
            *(undefined1 *)(param_1 + 0x168) = 0;
            return;
          }
          func_0x0047ba90();
          func_0x0047ba3c();
          ppcStack_a8 = (char **)0x0;
          ppcStack_a0 = (char **)0x69;
          ppcStack_98 = (char **)0x0;
          func_0x0047ba04();
          func_0x0047ba2c();
          func_0x0047bab4();
          ppcStack_b0 = (char **)0x8db42b;
          ppcStack_a8 = (char **)0x0;
          ppcStack_a0 = (char **)pppcVar3;
          ppcStack_98 = (char **)pppcVar4;
          func_0x0047ba10();
          func_0x0047ba80();
          func_0x0047ba4c();
          func_0x0047b9e8();
        }
      }
    }
    else {
      pppcVar9 = param_3;
      func_0x0047ba90();
      FUN_0047a70c(&pcStack_78,param_3);
      func_0x0047a428(apcStack_c8);
      ppcStack_b0 = (char **)0x8db4cc;
      ppcStack_a8 = (char **)0x0;
      ppcStack_a0 = (char **)0x29;
      ppcStack_98 = (char **)0x0;
      func_0x0047ba04();
      FUN_00721c60(auStack_e0);
      func_0x0047bab4();
      pppcVar4 = (char ***)apcStack_c8;
      pppcVar7 = pppcVar9;
      FUN_00457d70();
      pppcVar3 = pppcVar4;
      pppcVar8 = pppcVar7;
      func_0x0047bac4();
      ppcStack_b0 = (char **)pppcVar5;
      ppcStack_a8 = (char **)pppcVar9;
      ppcStack_a0 = (char **)pppcVar4;
      ppcStack_98 = (char **)pppcVar7;
      ppcStack_90 = (char **)pppcVar3;
      ppcStack_88 = (char **)pppcVar8;
      func_0x00461914(
                     "Invalid notification: both property map and json payloads are set: properties map: {}, json: {}, source: {}"
                     );
      FUN_00721c60(&ppcStack_60);
      func_0x0047ba4c();
      func_0x0047b9e8();
    }
  }
  else if (*(char *)(param_3 + 9) == '\0') {
    pppcVar4 = param_3;
    func_0x0047ba90();
    func_0x0047ba3c();
    ppcStack_a8 = (char **)0x0;
    ppcStack_a0 = (char **)0x34;
    ppcStack_98 = (char **)0x0;
    func_0x0047ba04();
    func_0x0047ba2c();
    func_0x0047bab4();
    ppcStack_a8 = (char **)FUN_0047b7f8;
    ppcStack_98 = (char **)0x462fcc;
    ppcStack_b0 = (char **)param_3;
    ppcStack_a0 = (char **)pppcVar5;
    ppcStack_90 = (char **)param_2;
    ppcStack_88 = (char **)pppcVar4;
    func_0x00461914(
                   "Invalid notification: missing payload data: properties map: {}, json: {}, source: {}"
                   );
    FUN_00721c60(&ppcStack_60);
    func_0x0047ba4c();
    func_0x0047b9e8();
  }
  else {
    pcStack_78 = (char *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    pppcVar4 = (char ***)&pcStack_78;
    pppcVar3 = pppcVar5;
    FUN_0064b608(&ppcStack_b0);
    if (((ulong)ppcStack_88 & 1) == 0) {
      func_0x0047ba90();
      func_0x0047ba3c();
      ppcStack_58 = (char **)0x0;
      ppcStack_50 = (char **)0x96;
      ppcStack_48 = (char **)0x0;
      func_0x0047ba04();
      func_0x0047ba1c();
      func_0x0047bab4();
      pppcVar5 = pppcVar3;
      pppcVar9 = pppcVar4;
      func_0x0047bac4();
      ppcStack_60 = (char **)pppcVar3;
      ppcStack_58 = (char **)pppcVar4;
      ppcStack_50 = (char **)pppcVar5;
      ppcStack_48 = (char **)pppcVar9;
      func_0x00461914(
                     "Invalid notification: failed to parse JSON payload data: error: {}, source: {}"
                     );
      FUN_00721c60(apcStack_c8);
      func_0x0047ba64();
      func_0x0047b9e8();
    }
    else {
      func_0x0047bad4();
      if ((pppcVar3 == (char ***)0x0) || (func_0x0047baf0(), !(bool)uVar2)) {
        func_0x0047ba90();
        func_0x0047ba3c();
        ppcStack_58 = (char **)0x0;
        ppcStack_50 = (char **)0x9e;
        ppcStack_48 = (char **)0x0;
        func_0x0047ba04();
        func_0x0047ba1c();
        func_0x0047bac4();
        ppcStack_60 = (char **)0x8db426;
        ppcStack_58 = (char **)0x0;
        ppcStack_50 = (char **)pppcVar3;
        ppcStack_48 = (char **)pppcVar4;
        func_0x0047ba10();
        func_0x0047ba70();
        func_0x0047ba64();
        func_0x0047b9e8();
      }
      else {
        func_0x0047bacc();
        pppcVar3 = &ppcStack_60;
        pppcVar4 = param_2;
        FUN_004575b8();
        func_0x0047ba98();
        func_0x0047bad4();
        if ((pppcVar4 == (char ***)0x0) || (func_0x0047baf0(), !(bool)uVar2)) {
          func_0x0047ba90();
          func_0x0047ba3c();
          ppcStack_58 = (char **)0x0;
          ppcStack_50 = (char **)0xa6;
          ppcStack_48 = (char **)0x0;
          func_0x0047ba04();
          func_0x0047ba1c();
          func_0x0047bac4();
          ppcStack_60 = (char **)0x8cf5fc;
          ppcStack_58 = (char **)0x0;
          ppcStack_50 = (char **)pppcVar4;
          ppcStack_48 = (char **)pppcVar3;
          func_0x0047ba10();
          func_0x0047ba70();
          func_0x0047ba64();
          func_0x0047b9e8();
        }
        else {
          func_0x0047bacc();
          FUN_004575b8(param_2 + 3,&ppcStack_60);
          func_0x0047ba98();
          pcVar6 = "sent_ts";
          pppcVar4 = &ppcStack_b0;
          FUN_0064b6ec(pppcVar4,"sent_ts",7);
          if ((pppcVar4 != (char ***)0x0) && (func_0x0047baf0(), (bool)uVar2)) {
            func_0x0047bacc();
            pppcVar4 = &ppcStack_60;
            func_0x0047bb04();
            param_2[6] = (char **)pppcVar4;
            func_0x0047ba98();
            *(undefined4 *)(param_2 + 7) = 1;
            FUN_0046083c(param_2 + 9,pppcVar5);
            pppcVar5 = &ppcStack_b0;
            FUN_0064b6ec(pppcVar5,"is_redrivable",0xd);
            if ((pppcVar5 == (char ***)0x0) || (func_0x0047baf0(), !(bool)uVar2)) {
              ppcVar10 = (char **)0x1;
            }
            else {
              func_0x0047bacc();
              pppcVar5 = &ppcStack_60;
              FUN_0047bbf4();
              func_0x0047ba98();
              ppcVar10 = (char **)((ulong)pppcVar5 & 0xffffffff);
            }
            param_2[0x12] = ppcVar10;
            pppcVar5 = &ppcStack_b0;
            FUN_0064b6ec(pppcVar5,"skip_dedupe",0xb);
            if ((pppcVar5 == (char ***)0x0) || (func_0x0047baf0(), !(bool)uVar2)) {
              ppcVar10 = (char **)0x0;
            }
            else {
              func_0x0047bacc();
              pppcVar5 = &ppcStack_60;
              FUN_0047bbf4();
              func_0x0047ba98();
              ppcVar10 = (char **)((ulong)pppcVar5 & 0xffffffff);
            }
            param_2[0x14] = ppcVar10;
            if (*(char *)(param_2 + 0x20) == '\x01') {
              FUN_0047361c(param_2,&ppcStack_b0);
            }
            func_0x0047bb1c();
            FUN_0071e1bc(param_1 + 0x100,&ppcStack_b0);
            *(undefined1 *)(param_1 + 0x128) = 1;
            *(undefined1 *)(param_1 + 0x130) = 0;
            *(undefined1 *)(param_1 + 0x168) = 0;
            FUN_00460a8c(&ppcStack_b0);
            func_0x0047bafc();
            return;
          }
          func_0x0047ba90();
          func_0x0047ba3c();
          ppcStack_58 = (char **)0x0;
          ppcStack_50 = (char **)0xb0;
          ppcStack_48 = (char **)0x0;
          func_0x0047ba04();
          func_0x0047ba1c();
          func_0x0047bac4();
          ppcStack_60 = (char **)0x8db42b;
          ppcStack_58 = (char **)0x0;
          ppcStack_50 = (char **)pppcVar4;
          ppcStack_48 = (char **)pcVar6;
          func_0x0047ba10();
          func_0x0047ba70();
          func_0x0047ba64();
          func_0x0047b9e8();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x47b5c8);
  (*pcVar1)();
}



/* Entry: 0047b73c; end: 0047b7f7;  */

long FUN_0047b73c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_00459e04(param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x68,param_2 + 0x68,0x58);
  FUN_00459e04(param_1 + 0xc0,param_2 + 0xc0);
  FUN_00459e04(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



/* Entry: 0047b7f8; end: 0047b897;  */

void FUN_0047b7f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  uVar1 = *param_3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pcStack_28 = FUN_0047b898;
    lStack_30 = param_1;
    func_0x00461914("{}");
    FUN_00721c60(auStack_48);
  }
  else {
    FUN_00425cb4(auStack_48,"<unset>");
  }
  FUN_00461998(uVar1,"{}",auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_3 = uVar1;
  return;
}



/* Entry: 0047b898; end: 0047b98f;  */

void FUN_0047b898(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  long lStack_50;
  code *pcStack_48;
  
  FUN_00461f30(auStack_168);
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lStack_50 = (long)(plVar2 + 2);
    pcStack_48 = FUN_0047b990;
    func_0x00461914("{},");
    FUN_00721c60(auStack_180);
    FUN_00461fe0(auStack_158,auStack_180);
    func_0x0047babc();
  }
  uVar1 = *param_3;
  FUN_0046296c(auStack_180,auStack_150);
  func_0x00462028(uVar1,"[{}]",auStack_180);
  func_0x0047babc();
  func_0x00462054(auStack_168);
  *param_3 = uVar1;
  return;
}



/* Entry: 0047b990; end: 0047b9e7;  */

void FUN_0047b990(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcStack_50;
  long lStack_48;
  undefined1 auStack_40 [32];
  
  uVar2 = *param_3;
  FUN_0047aa60(auStack_40,param_1,param_1 + 0x18);
  pcVar1 = "{{{}, {}}}";
  func_0x00461914();
  pcStack_50 = pcVar1;
  lStack_48 = param_1;
  func_0x004619c4(uVar2,&pcStack_50,0xdd,auStack_40);
  *param_3 = uVar2;
  return;
}



/* Entry: 0047b9e8; end: 0047bb27;  */

void FUN_0047b9e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_00998e78)();
  return;
}



/* Entry: 0047bb28; end: 0047bbf3;  */

/* WARNING: Possible PIC construction at 0x0047bb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bbc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0047bbac) */
/* WARNING: Removing unreachable block (ram,0x0047bbb0) */
/* WARNING: Removing unreachable block (ram,0x0047bb94) */
/* WARNING: Removing unreachable block (ram,0x0047bb98) */
/* WARNING: Removing unreachable block (ram,0x0047bb7c) */
/* WARNING: Removing unreachable block (ram,0x0047bb80) */
/* WARNING: Removing unreachable block (ram,0x0047bb64) */
/* WARNING: Removing unreachable block (ram,0x0047bb68) */
/* WARNING: Removing unreachable block (ram,0x0047bb4c) */
/* WARNING: Removing unreachable block (ram,0x0047bb50) */
/* WARNING: Removing unreachable block (ram,0x0047bbc4) */
/* WARNING: Removing unreachable block (ram,0x0047bbd8) */
/* WARNING: Removing unreachable block (ram,0x0047bbc8) */

bool FUN_0047bb28(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if (param_2 == 4) {
    func_0x0046d038(param_1,4,"true");
    bVar1 = (int)param_1 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0047bbf4; end: 0047bc3b;  */

/* WARNING: Possible PIC construction at 0x0047bb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0047bbc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0047bbac) */
/* WARNING: Removing unreachable block (ram,0x0047bbb0) */
/* WARNING: Removing unreachable block (ram,0x0047bb94) */
/* WARNING: Removing unreachable block (ram,0x0047bb98) */
/* WARNING: Removing unreachable block (ram,0x0047bb7c) */
/* WARNING: Removing unreachable block (ram,0x0047bb80) */
/* WARNING: Removing unreachable block (ram,0x0047bb64) */
/* WARNING: Removing unreachable block (ram,0x0047bb68) */
/* WARNING: Removing unreachable block (ram,0x0047bb4c) */
/* WARNING: Removing unreachable block (ram,0x0047bb50) */
/* WARNING: Removing unreachable block (ram,0x0047bbc4) */
/* WARNING: Removing unreachable block (ram,0x0047bbd8) */
/* WARNING: Removing unreachable block (ram,0x0047bbc8) */

bool FUN_0047bbf4(undefined8 *param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  if (uVar1 == 4) {
    func_0x0046d038(puVar3,4,"true");
    bVar2 = (int)puVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0047bc3c; end: 0047bccf;  */

undefined8 * FUN_0047bc3c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_4 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
    }
    else {
      uVar2 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar2 = (param_4 | 7) + 1;
      }
      FUN_0040d754();
      param_1[1] = param_4;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
      param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)param_1 = *param_2;
      param_1 = (undefined8 *)((long)param_1 + 1);
    }
    *(undefined1 *)param_1 = 0;
    return puVar1;
  }
  FUN_0040d740();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0047bd00();
  return param_1;
}



/* Entry: 0047bcd0; end: 0047bcff;  */

undefined8 * FUN_0047bcd0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0047bd00();
  return param_1;
}



/* Entry: 0047bd00; end: 0047bd83;  */

void FUN_0047bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_0040d8a0(param_1,param_4);
    FUN_0047bd84(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0040d92c(&uStack_40);
  return;
}



/* Entry: 0047bd84; end: 0047bdaf;  */

void FUN_0047bd84(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 0047bdb0; end: 0047beb3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_0047bdb0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *plVar8;
  long *plStack_f8;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    FUN_0047bf20(alStack_b0);
    FUN_0047beb4(auStack_b8,alStack_b0);
    alStack_b0[1] = 0x47c2bc;
    ppuStack_a0 = &PTR_FUN_009e7f08;
    puStack_98 = param_1;
    plStack_90 = alStack_b0;
    (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,alStack_b0 + 1);
    func_0x0047c4c8();
    puVar4 = auStack_b8;
    FUN_0047bed4();
    FUN_0047c274(auStack_b8);
    plVar5 = alStack_b0;
    FUN_0047bff0();
  } while ((int)puVar4 != 1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar8 = plVar5;
  func_0x0047c4d8();
  lVar6 = *plVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lVar6 == 0) {
    pcStack_c8 = FUN_0047beb4;
    puVar7 = (undefined8 *)((long)&MACH_HEADER.magic + 3);
    FUN_0047c1a0();
    pcStack_d8 = FUN_0047bed4;
    plVar8 = (long *)*puVar7;
    *puVar7 = 0;
    plStack_f8 = plVar8;
    puStack_f0 = puVar4;
    plStack_e8 = plVar5;
    puStack_e0 = (undefined1 *)&puStack_d0;
    FUN_0047c3b8(plVar8);
    FUN_0047c464(&plStack_f8);
    return plVar8;
  }
  *extraout_x8 = lVar6;
  pcStack_c8 = FUN_0047beb4;
  puStack_e0 = puVar4;
  pcStack_d8 = (code *)plVar5;
  __ZNSt3__15mutex4lockEv(lVar6 + 0x18);
  if ((*(uint *)(lVar6 + 0x88) >> 1 & 1) == 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(uint *)(lVar6 + 0x88) = *(uint *)(lVar6 + 0x88) | 2;
    plVar5 = (long *)(lVar6 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(plVar5);
    return plVar5;
  }
  FUN_0047c1a0(1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x47c260);
  (*pcVar3)();
}



/* Entry: 0047beb4; end: 0047bed3;  */

long FUN_0047beb4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lStack_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    plVar5 = (long *)((long)&MACH_HEADER.magic + 3);
    FUN_0047c1a0();
    lVar4 = *plVar5;
    *plVar5 = 0;
    lStack_38 = lVar4;
    FUN_0047c3b8(lVar4);
    FUN_0047c464(&lStack_38);
    return lVar4;
  }
  *param_1 = lVar4;
  __ZNSt3__15mutex4lockEv(lVar4 + 0x18);
  if ((*(uint *)(lVar4 + 0x88) >> 1 & 1) == 0) {
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(uint *)(lVar4 + 0x88) = *(uint *)(lVar4 + 0x88) | 2;
    lVar4 = lVar4 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(lVar4);
    return lVar4;
  }
  FUN_0047c1a0(1);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x47c260);
  (*pcVar3)();
}



/* Entry: 0047bed4; end: 0047bf1f;  */

undefined8 FUN_0047bed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_28 = uVar1;
  FUN_0047c3b8(uVar1);
  FUN_0047c464(&uStack_28);
  return uVar1;
}



/* Entry: 0047bf20; end: 0047bf7f;  */

undefined8 * FUN_0047bf20(undefined8 *param_1)

{
  qword *pqVar1;
  
  pqVar1 = &section_00000068.size;
  __Znwm();
  pqVar1[2] = 0;
  pqVar1[3] = 0x32aaaba7;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  pqVar1[7] = 0;
  pqVar1[6] = 0;
  pqVar1[9] = 0;
  pqVar1[8] = 0;
  pqVar1[10] = 0;
  pqVar1[0xb] = 0x3cb0b1bb;
  pqVar1[0xd] = 0;
  pqVar1[0xc] = 0;
  pqVar1[0xf] = 0;
  pqVar1[0xe] = 0;
  *(undefined8 *)((long)pqVar1 + 0x84) = 0;
  *(undefined8 *)((long)pqVar1 + 0x7c) = 0;
  *pqVar1 = (qword)&PTR_FUN_009e7f30;
  pqVar1[1] = 0;
  *param_1 = pqVar1;
  return param_1;
}



/* Entry: 0047bf80; end: 0047bf83;  */

void FUN_0047bf80(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_00998df0 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00779d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_00998ae8)(param_1);
  return;
}



/* Entry: 0047bf84; end: 0047bf97;  */

void FUN_0047bf84(void)

{
  FUN_0047bfa4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0047bf98; end: 0047bfa3;  */

void FUN_0047bf98(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0047bfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 0047bfa4; end: 0047bfef;  */

void FUN_0047bfa4(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_00998df0 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00779d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_00998ae8)(param_1);
  return;
}



/* Entry: 0047bff0; end: 0047c0a3;  */

ulong * FUN_0047bff0(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    FUN_0047c0a4();
    plVar6 = (long *)*param_1;
    if (((uVar4 & 1) == 0) && (0 < plVar6[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar4);
      FUN_0047c110(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar6,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar6 = (long *)*param_1;
    }
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



/* Entry: 0047c0a4; end: 0047c10f;  */

bool FUN_0047c0a4(long param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(param_1 + 0x10) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 0047c110; end: 0047c16b;  */

void FUN_0047c110(void)

{
  code *pcVar1;
  
  ___cxa_allocate_exception(0x20);
  FUN_0047c16c();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x47c14c);
  (*pcVar1)();
}



/* Entry: 0047c16c; end: 0047c19f;  */

void FUN_0047c16c(long *param_1,long param_2)

{
  long lVar1;
  
  __ZNSt11logic_errorC2ERKS_();
  *param_1 = (long)(PTR___ZTVNSt3__112future_errorE_00998dd8 + 0x10);
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[2] = lVar1;
  return;
}



/* Entry: 0047c1a0; end: 0047c207;  */

void FUN_0047c1a0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0x20;
  ___cxa_allocate_exception();
  func_0x0047c0e8(param_1);
  __ZNSt3__112future_errorC1ENS_10error_codeE(lVar5,param_1,param_2);
  lVar6 = lVar5;
  ___cxa_throw(lVar5,PTR___ZTINSt3__112future_errorE_00998d28,
               PTR___ZNSt3__112future_errorD1Ev_00998a48);
  ___cxa_free_exception(lVar5);
  __Unwind_Resume();
  __ZNSt3__15mutex4lockEv(lVar6 + 0x18);
  if ((*(uint *)(lVar6 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(lVar6 + 0x88) = *(uint *)(lVar6 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(lVar6 + 0x18);
    return;
  }
  FUN_0047c1a0(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x47c260);
  (*pcVar4)();
}



/* Entry: 0047c208; end: 0047c273;  */

void FUN_0047c208(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x88) >> 1 & 1) == 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(param_1 + 0x18);
    return;
  }
  FUN_0047c1a0(1);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x47c260);
  (*pcVar4)();
}



/* Entry: 0047c274; end: 0047c2ff;  */

long * FUN_0047c274(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 0047c300; end: 0047c31b;  */

void FUN_0047c300(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_38 [40];
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar3 = 3;
    unaff_x30 = FUN_0047c31c;
    FUN_0047c1a0();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x30) = lVar3 + 0x18;
  *(undefined1 *)((long)register0x00000008 + -0x28) = 1;
  __ZNSt3__15mutex4lockEv();
  lVar4 = lVar3;
  FUN_0047c0a4();
  if ((int)lVar4 != 0) {
    FUN_0047c1a0(2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x47c38c);
    (*pcVar2)();
  }
  uVar1 = *param_2;
  *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) | 5;
  *(undefined4 *)(lVar3 + 0x8c) = uVar1;
  __ZNSt3__118condition_variable10notify_allEv(lVar3 + 0x58);
  FUN_0040d514((undefined1 *)((long)register0x00000008 + -0x30));
  return;
}


