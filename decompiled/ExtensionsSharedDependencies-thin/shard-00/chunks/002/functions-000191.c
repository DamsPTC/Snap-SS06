/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004609ec; end: 00460a0b;  */

void FUN_004609ec(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_00487550();
  }
  return;
}



/* Entry: 00460a0c; end: 00460a5b;  */

undefined8 * FUN_00460a0c(undefined8 *param_1)

{
  (*(code *)*param_1)();
  (**(code **)param_1[1])();
  return param_1;
}



/* Entry: 00460a5c; end: 00460a8b;  */

void FUN_00460a5c(long param_1)

{
  FUN_004609ec(param_1 + 0x130);
  FUN_00460a8c(param_1 + 0x100);
  FUN_00457530(param_1 + 0xe0);
  FUN_00457530(param_1 + 0xc0);
  FUN_00457530(param_1 + 0x48);
  func_0x00458818();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00460a8c; end: 00460acb;  */

void FUN_00460a8c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0071e360();
  }
  return;
}



/* Entry: 00460acc; end: 00460b33;  */

void FUN_00460acc(long param_1)

{
  FUN_00457530(param_1 + 0x150);
  FUN_00457530(param_1 + 0x130);
  FUN_00457530(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  FUN_00457530(param_1 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
  FUN_00457530(param_1 + 0x88);
  FUN_00457530(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00460b34; end: 00460bd3;  */

undefined8 FUN_00460b34(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    pcVar2 = (&PTR_s_notifrecvresult_00b04d18)[param_2 >> 0x10 & 0xffff];
  }
  else {
    pcVar2 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_38,pcVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    pcVar2 = (&PTR_s_ready_00b04d78)[uVar1];
  }
  else {
    pcVar2 = "invalid_dimension_value";
  }
  FUN_0045a3ec(param_1,auStack_38,pcVar2);
  func_0x00460ff8();
  return param_1;
}



/* Entry: 00460bd4; end: 00460c77;  */

void FUN_00460bd4(undefined8 *param_1,long param_2)

{
  func_0x00460c08();
  *param_1 = &PTR_FUN_009e5290;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 00460c78; end: 00460cab;  */

void FUN_00460c78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_00460cac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00460cac; end: 00460cbf;  */

void FUN_00460cac(void)

{
  FUN_00427a04();
  return;
}



/* Entry: 00460cc0; end: 00460cf3;  */

undefined8 * FUN_00460cc0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = param_2;
  _strlen();
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar4 < 0) {
    uVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar1 <= uVar2) {
      uVar4 = (ulong)param_1[2] >> 0x38;
      puVar5 = (undefined8 *)*param_1;
      goto LAB_00460d68;
    }
    uVar4 = param_1[1];
  }
  else {
    puVar5 = param_1;
    if (uVar1 < 0x17) {
LAB_00460d68:
      uVar3 = (uint)uVar4;
      if (uVar1 != 0) {
        _memmove(puVar5,param_2,uVar1);
        uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar3 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)uVar1 & 0x7f;
      }
      else {
        param_1[1] = uVar1;
      }
      *(undefined1 *)((long)puVar5 + uVar1) = 0;
      return param_1;
    }
    uVar2 = 0x16;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
            (param_1,uVar2,uVar1 - uVar2,uVar4,0,uVar4,uVar1);
  return param_1;
}



/* Entry: 00460cf4; end: 00460da3;  */

undefined8 * FUN_00460cf4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulong)*(char *)((long)param_1 + 0x17);
  if ((long)uVar3 < 0) {
    uVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (param_3 <= uVar1) {
      uVar3 = (ulong)param_1[2] >> 0x38;
      puVar4 = (undefined8 *)*param_1;
      goto LAB_00460d68;
    }
    uVar3 = param_1[1];
  }
  else {
    puVar4 = param_1;
    if (param_3 < 0x17) {
LAB_00460d68:
      uVar2 = (uint)uVar3;
      if (param_3 != 0) {
        _memmove(puVar4,param_2,param_3);
        uVar2 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar2 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (byte)param_3 & 0x7f;
      }
      else {
        param_1[1] = param_3;
      }
      *(undefined1 *)((long)puVar4 + param_3) = 0;
      return param_1;
    }
    uVar1 = 0x16;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
            (param_1,uVar1,param_3 - uVar1,uVar3,0,uVar3,param_3);
  return param_1;
}



/* Entry: 00460da4; end: 00460dd7;  */

void FUN_00460da4(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined **)pdVar1 = PTR___ZTVSt19bad_optional_access_00998e18 + 0x10;
  ___cxa_throw();
  func_0x0045e73c(pdVar1 + 0x40);
  FUN_00457530(pdVar1 + 0x38);
  FUN_00457530(pdVar1 + 0x30);
  FUN_00457530(pdVar1 + 0x12);
  func_0x00458818();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (pdVar1);
  return;
}



/* Entry: 00460dd8; end: 00460e73;  */

void FUN_00460dd8(long param_1)

{
  func_0x0045e73c(param_1 + 0x100);
  FUN_00457530(param_1 + 0xe0);
  FUN_00457530(param_1 + 0xc0);
  FUN_00457530(param_1 + 0x48);
  func_0x00458818();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00460e74; end: 00460ec3;  */

void FUN_00460e74(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  func_0x004772e0(auStack_80,*puVar2);
  plVar7 = (long *)*puVar1;
  func_0x00477f28();
  uStack_88 = 4;
  FUN_00425cb4(auStack_c0,"NotifSource");
  func_0x00477f38(auStack_d8);
  puVar5 = auStack_a8;
  FUN_00470964(puVar5,auStack_c0,auStack_d8);
  FUN_00425cb4(auStack_f0,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108,puVar2 + 1);
  FUN_00470964(puVar5,auStack_f0,auStack_108);
  uVar3 = *(uint *)(puVar2 + 6);
  if (uVar3 >> 0x12 < 3) {
    pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar3 >> 0x10];
  }
  else {
    pcVar6 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_68,pcVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    pcVar6 = (&PTR_s_ready_00b04d78)[uVar3 & 0xffff];
  }
  else {
    pcVar6 = "invalid_dimension_value";
  }
  FUN_0045a3ec(puVar5,auStack_68,pcVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00477f20();
  if (*(int *)(puVar2 + 6) == 2) {
    plVar7 = (long *)*puVar1;
    func_0x00477f28();
    uStack_88 = 5;
    FUN_00425cb4(auStack_120,"NotifSource");
    func_0x00477f38(auStack_138);
    puVar5 = auStack_a8;
    FUN_00470964(puVar5,auStack_120,auStack_138);
    FUN_0047487c();
    FUN_00425cb4(auStack_150,"ErrorCode");
    if (*(char *)((long)puVar2 + 0x3c) == '\x01') {
      uVar4 = *(undefined4 *)(puVar2 + 7);
    }
    else {
      uVar4 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(auStack_168,uVar4);
    FUN_00470964(puVar5,auStack_150,auStack_168);
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00477f20();
  }
  if (*(char *)(puVar2 + 5) == '\x01') {
    plVar7 = (long *)*puVar1;
    func_0x00477f28();
    uStack_88 = 0xc;
    FUN_00425cb4(auStack_180,"NotifSource");
    func_0x00477f38(auStack_198);
    puVar5 = auStack_a8;
    FUN_00470964(puVar5,auStack_180,auStack_198);
    FUN_00425cb4(auStack_1b0,"NotifType");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8,puVar2 + 1)
    ;
    FUN_00470964(puVar5,auStack_1b0,auStack_1c8);
    (**(code **)(*plVar7 + 0x28))(plVar7,puVar5,puVar2[4]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    func_0x00477f20();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 00460ec4; end: 00460f0f;  */

void FUN_00460ec4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = (int)*(undefined8 *)(lVar4 + 0x88);
  func_0x00460f7c();
  (*extraout_x8)();
  if ((iVar2 != 0) && (plVar3 = *(long **)(lVar4 + 0x28), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00460f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
    return;
  }
  return;
}



/* Entry: 00460f10; end: 00460f1f;  */

void FUN_00460f10(void)

{
  return;
}



/* Entry: 00460f20; end: 00460f2f;  */

void FUN_00460f20(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined ***pppuVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x00427780();
  piVar2 = *(int **)(param_2 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x58);
  func_0x004772e0(auStack_a0,*(undefined8 *)(piVar2 + 1));
  plVar7 = (long *)*puVar1;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c8 = &PTR_FUN_009e5290;
  uStack_c0 = 0;
  uStack_a8 = 8;
  FUN_00425cb4(auStack_e0,"NotifSource");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8,auStack_a0);
  pppuVar5 = &ppuStack_c8;
  FUN_00470964(pppuVar5,auStack_e0,auStack_f8);
  FUN_00425cb4(auStack_110,"NotifState");
  FUN_0045a3ec(pppuVar5,auStack_110,(&PTR_s_Received_009e7da8)[*piVar2]);
  FUN_00425cb4(auStack_128,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_140,piVar2 + 4);
  FUN_00470964(pppuVar5,auStack_128,auStack_140);
  uVar3 = piVar2[10];
  if (uVar3 >> 0x12 < 3) {
    pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar3 >> 0x10];
  }
  else {
    pcVar6 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_88,pcVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    pcVar6 = (&PTR_s_ready_00b04d78)[uVar3 & 0xffff];
  }
  else {
    pcVar6 = "invalid_dimension_value";
  }
  FUN_0045a3ec(pppuVar5,auStack_88,pcVar6);
  FUN_00478384();
  (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x0047838c();
  if (piVar2[10] == 0x2000b) {
    plVar7 = (long *)*puVar1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_c8 = &PTR_FUN_009e5290;
    uStack_c0 = 0;
    uStack_a8 = 0xb;
    FUN_00425cb4(auStack_158,"NotifSource");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_a0)
    ;
    pppuVar5 = &ppuStack_c8;
    FUN_00470964(pppuVar5,auStack_158,auStack_170);
    FUN_00425cb4(auStack_188,"NotifState");
    FUN_0045a3ec(pppuVar5,auStack_188,(&PTR_s_Received_009e7da8)[*piVar2]);
    uVar3 = piVar2[0xb];
    if (uVar3 < 0xc0000) {
      pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar3 >> 0x10];
    }
    else {
      pcVar6 = "invalid_dim_name";
    }
    FUN_00425cb4(auStack_88,pcVar6);
    if ((uVar3 & 0xffff) < 0x24) {
      pcVar6 = (&PTR_s_ready_00b04d78)[uVar3 & 0xffff];
    }
    else {
      pcVar6 = "invalid_dimension_value";
    }
    FUN_0045a3ec(pppuVar5,auStack_88,pcVar6);
    FUN_00478384();
    FUN_00425cb4(auStack_1a0,"ErrorCode");
    if ((char)piVar2[0xd] == '\x01') {
      iVar4 = piVar2[0xc];
    }
    else {
      iVar4 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1b8,iVar4);
    FUN_00470964(pppuVar5,auStack_1a0,auStack_1b8);
    (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    func_0x0047838c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  return;
}



/* Entry: 00460f30; end: 0046107f;  */

void FUN_00460f30(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined ***pppuVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  piVar2 = *(int **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  func_0x004772e0(auStack_90,*(undefined8 *)(piVar2 + 1));
  plVar7 = (long *)*puVar1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_FUN_009e5290;
  uStack_b0 = 0;
  uStack_98 = 8;
  FUN_00425cb4(auStack_d0,"NotifSource");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_90);
  pppuVar5 = &ppuStack_b8;
  FUN_00470964(pppuVar5,auStack_d0,auStack_e8);
  FUN_00425cb4(auStack_100,"NotifState");
  FUN_0045a3ec(pppuVar5,auStack_100,(&PTR_s_Received_009e7da8)[*piVar2]);
  FUN_00425cb4(auStack_118,"NotifType");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,piVar2 + 4);
  FUN_00470964(pppuVar5,auStack_118,auStack_130);
  uVar3 = piVar2[10];
  if (uVar3 >> 0x12 < 3) {
    pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar3 >> 0x10];
  }
  else {
    pcVar6 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_78,pcVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    pcVar6 = (&PTR_s_ready_00b04d78)[uVar3 & 0xffff];
  }
  else {
    pcVar6 = "invalid_dimension_value";
  }
  FUN_0045a3ec(pppuVar5,auStack_78,pcVar6);
  FUN_00478384();
  (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x0047838c();
  if (piVar2[10] == 0x2000b) {
    plVar7 = (long *)*puVar1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_FUN_009e5290;
    uStack_b0 = 0;
    uStack_98 = 0xb;
    FUN_00425cb4(auStack_148,"NotifSource");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,auStack_90)
    ;
    pppuVar5 = &ppuStack_b8;
    FUN_00470964(pppuVar5,auStack_148,auStack_160);
    FUN_00425cb4(auStack_178,"NotifState");
    FUN_0045a3ec(pppuVar5,auStack_178,(&PTR_s_Received_009e7da8)[*piVar2]);
    uVar3 = piVar2[0xb];
    if (uVar3 < 0xc0000) {
      pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar3 >> 0x10];
    }
    else {
      pcVar6 = "invalid_dim_name";
    }
    FUN_00425cb4(auStack_78,pcVar6);
    if ((uVar3 & 0xffff) < 0x24) {
      pcVar6 = (&PTR_s_ready_00b04d78)[uVar3 & 0xffff];
    }
    else {
      pcVar6 = "invalid_dimension_value";
    }
    FUN_0045a3ec(pppuVar5,auStack_78,pcVar6);
    FUN_00478384();
    FUN_00425cb4(auStack_190,"ErrorCode");
    if ((char)piVar2[0xd] == '\x01') {
      iVar4 = piVar2[0xc];
    }
    else {
      iVar4 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1a8,iVar4);
    FUN_00470964(pppuVar5,auStack_190,auStack_1a8);
    (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x0047838c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 00461080; end: 004610d7;  */

undefined8 * FUN_00461080(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_004610d8(param_1 + 3,param_3);
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



/* Entry: 004610d8; end: 00461153;  */

void FUN_004610d8(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    uVar1 = 0x1e;
  }
  else {
    (**(code **)(*param_2 + 0x10))();
    uVar1 = SUB84(param_2,0);
  }
  *param_1 = 0x1010001;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[5] = 0x1010001;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x26) = 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 7) = 0x2000000000;
  param_1[3] = 2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 00461154; end: 00461163;  */

void FUN_00461154(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
  pcVar5 = acStack_a0;
  FUN_0046133c(&pcStack_70,param_1,param_1 + 0x18);
  pcVar1 = pcStack_70;
  pcStack_70 = (char *)0x0;
  lVar4 = *(long *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar1;
  if (lVar4 != 0) {
    FUN_00462a54();
    pcVar1 = pcStack_70;
    pcStack_70 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      FUN_00462a54();
    }
  }
  FUN_00455d64(&pcStack_70);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = (int)&pcStack_70;
  FUN_006451b8();
  func_0x00461890(&pcStack_70);
  if (iVar3 != -1) {
    uVar6 = 0x18;
    __Znwm();
    FUN_00455fd8();
    lVar4 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    if (lVar4 != 0) {
      FUN_00462a54();
    }
    return;
  }
  pcStack_70 = "external/snap_client+/src/notifications/src/notifications/Storage.cpp";
  uStack_68 = 0;
  uStack_60 = 0x2c;
  uStack_58 = 0;
  func_0x00461914("{}:{}");
  FUN_00721c60(acStack_a0);
  FUN_00457d70();
  pcStack_70 = pcVar5;
  uStack_68 = uVar6;
  func_0x00461914("Failed to create or upgrade database schema: source: {}");
  FUN_00721c60(auStack_88);
  func_0x00462a7c();
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_00998d38,PTR___ZNSt13runtime_errorD1Ev_00998928);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x46132c);
  (*pcVar2)();
}



/* Entry: 00461164; end: 0046133b;  */

void FUN_00461164(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar5 = acStack_a0;
  FUN_0046133c(&pcStack_70,param_1,param_1 + 0x18);
  pcVar1 = pcStack_70;
  pcStack_70 = (char *)0x0;
  lVar4 = *(long *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar1;
  if (lVar4 != 0) {
    FUN_00462a54();
    pcVar1 = pcStack_70;
    pcStack_70 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      FUN_00462a54();
    }
  }
  FUN_00455d64(&pcStack_70);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = (int)&pcStack_70;
  FUN_006451b8();
  func_0x00461890(&pcStack_70);
  if (iVar3 != -1) {
    uVar6 = 0x18;
    __Znwm();
    FUN_00455fd8();
    lVar4 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    if (lVar4 != 0) {
      FUN_00462a54();
    }
    return;
  }
  pcStack_70 = "external/snap_client+/src/notifications/src/notifications/Storage.cpp";
  uStack_68 = 0;
  uStack_60 = 0x2c;
  uStack_58 = 0;
  func_0x00461914("{}:{}");
  FUN_00721c60(acStack_a0);
  FUN_00457d70();
  pcStack_70 = pcVar5;
  uStack_68 = uVar6;
  func_0x00461914("Failed to create or upgrade database schema: source: {}");
  FUN_00721c60(auStack_88);
  func_0x00462a7c();
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_00998d38,PTR___ZNSt13runtime_errorD1Ev_00998928);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x46132c);
  (*pcVar2)();
}



/* Entry: 0046133c; end: 0046138f;  */

void FUN_0046133c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a8;
  __Znwm();
  FUN_0063faf4();
  *param_1 = uVar1;
  return;
}



/* Entry: 00461390; end: 004613fb;  */

void FUN_00461390(void)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00462a8c();
  FUN_00461154();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = unaff_x19[1];
  uStack_50 = *unaff_x19;
  uStack_40 = unaff_x19[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  FUN_0064942c(extraout_x8,uVar1,&uStack_50);
  func_0x00462a7c();
  return;
}



/* Entry: 004613fc; end: 004614eb;  */

undefined8 FUN_004613fc(long param_1)

{
  FUN_00461154();
  return *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
}



/* Entry: 004614ec; end: 00461543;  */

uint FUN_004614ec(void)

{
  uint unaff_w19;
  undefined1 auStack_40 [32];
  
  func_0x00462b30();
  FUN_004568c4(auStack_40);
  FUN_00461544(auStack_40);
  FUN_004619f8(auStack_40);
  return unaff_w19 & 1;
}



/* Entry: 00461544; end: 00461593;  */

undefined1  [16] FUN_00461544(void)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long alStack_28 [2];
  char cStack_18;
  
  FUN_00461a2c(alStack_28);
  bVar1 = cStack_18 == '\x01' && alStack_28[0] != 0;
  if (bVar1) {
    plVar3 = alStack_28;
    FUN_00461a44();
    lVar2 = *plVar3;
  }
  else {
    lVar2 = 0;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 00461594; end: 004615b3;  */

void FUN_00461594(long param_1)

{
  func_0x00462b30();
  FUN_00456b70(param_1 + 0x468,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 004615b4; end: 00461613;  */

void FUN_004615b4(long param_1)

{
  undefined1 auStack_148 [280];
  
  func_0x00462b24();
  func_0x004568f0(auStack_148,param_1 + 0x78);
  FUN_00461614(auStack_148);
  FUN_00461b8c(auStack_148);
  return;
}



/* Entry: 00461614; end: 0046169b;  */

void FUN_00461614(undefined1 *param_1)

{
  long *plVar1;
  long lStack_140;
  undefined1 auStack_138 [256];
  char cStack_38;
  
  func_0x00461c5c(&lStack_140);
  func_0x00462af8();
  if (cStack_38 == '\x01') {
    func_0x00462af0();
    if (lStack_140 != 0) {
      plVar1 = &lStack_140;
      FUN_00461c74(plVar1);
      FUN_00461db8(param_1,plVar1);
      goto LAB_00461678;
    }
  }
  else {
    func_0x00462af0();
  }
  *param_1 = 0;
  param_1[0x100] = 0;
LAB_00461678:
  FUN_0045779c(auStack_138);
  return;
}



/* Entry: 0046169c; end: 0046175f;  */

void FUN_0046169c(undefined8 param_1,undefined8 param_2,int param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  code *pcStack_a8;
  long alStack_68 [3];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50);
  func_0x004618e0(alStack_68,auStack_50,1);
  plVar3 = alStack_68;
  FUN_00461760(param_1);
  func_0x00459128(alStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x00459128(alStack_68);
  puVar2 = auStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x00462a60();
  if ((param_3 != 3) && (((ulong)param_4 >> 0x20 & 1) != 0)) {
    pcStack_a8 = FUN_00461dd4;
    uStack_b0 = plVar3;
    func_0x00461914(
                   "Failed to update notification state because it has a suppression reason but its state is not suppressed: {}"
                   );
    FUN_00721c60(auStack_c8);
    func_0x00462ab0();
    return;
  }
  FUN_004613fc();
  uStack_b0 = (long *)CONCAT44(param_3,(undefined4)uStack_b0);
  puVar2 = puVar2 + 0x4f0;
  pcStack_a8 = param_4;
  FUN_00456c4c(puVar2,(plVar3[1] - *plVar3) / 0x18);
  FUN_00456c70();
  func_0x00456c90(puVar2,2,&pcStack_a8);
  lVar1 = plVar3[1];
  for (lVar4 = *plVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x00458844();
  }
  FUN_00456cd0(puVar2);
  return;
}



/* Entry: 00461760; end: 00461837;  */

void FUN_00461760(long param_1,long *param_2,int param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  code *pcStack_38;
  
  if ((param_3 != 3) && (((ulong)param_4 >> 0x20 & 1) != 0)) {
    pcStack_38 = FUN_00461dd4;
    uStack_40 = param_2;
    func_0x00461914(
                   "Failed to update notification state because it has a suppression reason but its state is not suppressed: {}"
                   );
    FUN_00721c60(auStack_58);
    func_0x00462ab0();
    return;
  }
  FUN_004613fc();
  uStack_40 = (long *)CONCAT44(param_3,(undefined4)uStack_40);
  param_1 = param_1 + 0x4f0;
  pcStack_38 = param_4;
  FUN_00456c4c(param_1,(param_2[1] - *param_2) / 0x18);
  FUN_00456c70();
  func_0x00456c90(param_1,2,&pcStack_38);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00458844();
  }
  FUN_00456cd0(param_1);
  return;
}



/* Entry: 00461838; end: 0046193b;  */

void FUN_00461838(long param_1,long *param_2)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  
  if (*param_2 == param_2[1]) {
    return;
  }
  func_0x00462b30();
  FUN_00456c4c(param_1 + 0x620,(unaff_x19[1] - *unaff_x19) / 0x18);
  lVar1 = unaff_x19[1];
  for (lVar2 = *unaff_x19; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00458844();
  }
  func_0x00458904();
  func_0x004588fc();
  func_0x0045871c();
  func_0x004586e4();
  return;
}



/* Entry: 0046193c; end: 00461997;  */

void FUN_0046193c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_00462b64(auStack_38);
  FUN_00461998(uVar1,"{}",auStack_38);
  func_0x00462ab0();
  *param_3 = uVar1;
  return;
}



/* Entry: 00461998; end: 004619f7;  */

void FUN_00461998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00462a8c();
  FUN_00457d70(param_3);
  func_0x00462b38();
  func_0x00462a98();
  return;
}



/* Entry: 004619f8; end: 00461a2b;  */

undefined8 * FUN_004619f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00648ea0(uVar1);
  return param_1;
}



/* Entry: 00461a2c; end: 00461a43;  */

void FUN_00461a2c(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_2 = param_2 + 8;
  func_0x00462a8c(param_1,param_2);
  FUN_00461ac4(param_1 + 1,param_2 + 8);
  func_0x00462b44();
  return;
}



/* Entry: 00461a44; end: 00461a9b;  */

long FUN_00461a44(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00462acc();
    func_0x00462ab8();
    func_0x00462ae0();
    func_0x00462b08();
    func_0x00462a7c();
  }
  return param_1 + 8;
}



/* Entry: 00461a9c; end: 00461ac3;  */

void FUN_00461a9c(long param_1,long param_2)

{
  func_0x00462a8c();
  FUN_00461ac4(param_1 + 8,param_2 + 8);
  func_0x00462b44();
  return;
}



/* Entry: 00461ac4; end: 00461b37;  */

void FUN_00461ac4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 00461b38; end: 00461b77;  */

void FUN_00461b38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(param_3,0,param_2);
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 00461b78; end: 00461b8b;  */

char * FUN_00461b78(void)

{
  char *pcVar1;
  undefined1 auStack_150 [272];
  
  pcVar1 = "basic_string";
  FUN_00435534();
  func_0x00462af8();
  FUN_00461be8(pcVar1 + 8,auStack_150);
  func_0x00462af0();
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  FUN_00648ea0(*(undefined8 *)pcVar1);
  FUN_0045779c(pcVar1 + 0x10);
  return pcVar1;
}



/* Entry: 00461b8c; end: 00461be7;  */

undefined8 * FUN_00461b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_140 [272];
  
  func_0x00462af8();
  FUN_00461be8(param_1 + 1,auStack_140);
  func_0x00462af0();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_00648ea0(uVar1);
  FUN_0045779c(param_1 + 2);
  return param_1;
}



/* Entry: 00461be8; end: 00461c0f;  */

undefined8 * FUN_00461be8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_00461c10(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 00461c10; end: 00461c33;  */

undefined8 FUN_00461c10(undefined8 param_1)

{
  FUN_00461c34();
  return param_1;
}



/* Entry: 00461c34; end: 00461c73;  */

void FUN_00461c34(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 != *(char *)(param_2 + 0x100)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x100) == '\x01') {
        func_0x00457764();
        *(undefined1 *)(param_1 + 0x100) = 0;
      }
      return;
    }
    func_0x00457688();
    *(undefined1 *)(param_1 + 0x100) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x00458708();
    func_0x004588e8();
    func_0x00458828();
    FUN_004575fc();
    func_0x004588cc(unaff_x20 + 0x68,unaff_x19 + 0x68);
    FUN_004575fc(unaff_x20 + 0xc0,unaff_x19 + 0xc0);
    FUN_004575fc(unaff_x20 + 0xe0,unaff_x19 + 0xe0);
    return;
  }
  return;
}



/* Entry: 00461c74; end: 00461ccb;  */

long FUN_00461c74(long param_1)

{
  if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
    func_0x00462acc();
    func_0x00462ab8();
    func_0x00462ae0();
    func_0x00462b08();
    func_0x00462a7c();
  }
  return param_1 + 8;
}



/* Entry: 00461ccc; end: 00461cf3;  */

void FUN_00461ccc(long param_1,long param_2)

{
  func_0x00462a8c();
  FUN_00461cf4(param_1 + 8,param_2 + 8);
  func_0x00462b44();
  return;
}



/* Entry: 00461cf4; end: 00461d63;  */

void FUN_00461cf4(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_130 [256];
  
  func_0x00462a8c();
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 != *(char *)(param_2 + 0x100)) {
    if (cVar1 == '\0') {
      func_0x00462b58();
      FUN_0045759c();
    }
    else {
      FUN_0045759c();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x100) == '\x01') {
      func_0x00457764();
      *(undefined1 *)(unaff_x19 + 0x100) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00462b58();
    func_0x00462a8c();
    FUN_00457688(auStack_130,unaff_x20);
    func_0x00462b58();
    FUN_00457550();
    FUN_00457550(unaff_x19,auStack_130);
    func_0x00457764(auStack_130);
    return;
  }
  return;
}



/* Entry: 00461d64; end: 00461db7;  */

void FUN_00461d64(void)

{
  undefined1 auStack_130 [256];
  
  func_0x00462a8c();
  FUN_00457688(auStack_130);
  func_0x00462b58();
  FUN_00457550();
  FUN_00457550();
  func_0x00457764(auStack_130);
  return;
}



/* Entry: 00461db8; end: 00461dd3;  */

void FUN_00461db8(long param_1)

{
  FUN_00457688();
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* Entry: 00461dd4; end: 00461e07;  */

void FUN_00461dd4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_00461e08(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 00461e08; end: 00461f2f;  */

undefined8 FUN_00461e08(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [256];
  long lStack_60;
  long *plStack_58;
  
  plVar2 = param_2;
  FUN_00461f30(auStack_178);
  for (lVar4 = *param_2; lVar4 != param_2[1]; lVar4 = lVar4 + 0x18) {
    lVar1 = lVar4;
    FUN_00457d70();
    lStack_60 = lVar1;
    plStack_58 = plVar2;
    func_0x00461914("{}");
    FUN_00721c60(alStack_190);
    plVar2 = alStack_190;
    FUN_00461fe0(auStack_168);
    func_0x00462a7c();
    if (lVar4 != param_2[1] + -0x18) {
      plVar2 = (long *)",";
      FUN_00461ffc(auStack_168);
    }
  }
  uVar3 = *param_3;
  FUN_0046296c(alStack_190,auStack_160);
  func_0x00462028(uVar3,"[{}]",alStack_190);
  func_0x00462a7c();
  func_0x00462054(auStack_178);
  return uVar3;
}



/* Entry: 00461f30; end: 00461fdf;  */

undefined8 * FUN_00461f30(undefined8 *param_1)

{
  param_1[0x10] = &PTR_DAT_009e5c40;
  param_1[0x16] = 0;
  *param_1 = &PTR_SUB_009e5bf0;
  param_1[2] = &PTR_FUN_009e5c18;
  func_0x00462084(param_1,&PTR_PTR_009e5c58,param_1 + 3);
  *param_1 = &PTR_SUB_009e5bf0;
  param_1[0x10] = &PTR_DAT_009e5c40;
  param_1[2] = &PTR_FUN_009e5c18;
  FUN_0046218c(param_1 + 3,0x18);
  return param_1;
}



/* Entry: 00461fe0; end: 00461ffb;  */

long * FUN_00461fe0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char acStack_50 [16];
  
  uVar2 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,param_1);
  if (acStack_50[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar7 = *(long *)(lVar1 + 0x28);
    uVar4 = *(uint *)(lVar1 + 8);
    lVar6 = lVar1;
    FUN_004628b4(lVar1);
    puVar3 = (undefined8 *)((long)puVar5 + uVar2);
    if ((uVar4 & 0xb0) != 0x20) {
      puVar3 = puVar5;
    }
    FUN_00462790(lVar7,puVar5,puVar3,(undefined8 *)((long)puVar5 + uVar2),lVar1,lVar6);
    if (lVar7 == 0) {
      func_0x00462960((long)param_1 + *(long *)(*param_1 + -0x18),5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
  return param_1;
}



/* Entry: 00461ffc; end: 004620d7;  */

long * FUN_00461ffc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char acStack_50 [16];
  
  func_0x00462a8c();
  plVar5 = param_2;
  _strlen();
  plVar6 = param_2;
  func_0x00462b58();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,param_2);
  if (acStack_50[0] == '\x01') {
    lVar1 = (long)param_2 + *(long *)(*param_2 + -0x18);
    lVar7 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    lVar4 = lVar1;
    FUN_004628b4(lVar1);
    plVar2 = (long *)((long)plVar5 + (long)plVar6);
    if ((uVar3 & 0xb0) != 0x20) {
      plVar2 = plVar5;
    }
    FUN_00462790(lVar7,plVar5,plVar2,(long *)((long)plVar5 + (long)plVar6),lVar1,lVar4);
    if (lVar7 == 0) {
      func_0x00462960((long)param_2 + *(long *)(*param_2 + -0x18),5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
  return param_2;
}



/* Entry: 004620d8; end: 004620eb;  */

void FUN_004620d8(void)

{
  func_0x00462054();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004620ec; end: 0046211b;  */

long FUN_004620ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + -0x10;
  lVar1 = param_1;
  FUN_00462a0c(param_1,&PTR_PTR_009e5c50);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x80);
  return param_1;
}



/* Entry: 0046211c; end: 0046218b;  */

long * FUN_0046211c(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  param_1[1] = 0;
  func_0x00462164((long)param_1 + *(long *)(*param_1 + -0x18),param_3);
  return param_1;
}



/* Entry: 0046218c; end: 004621ff;  */

undefined8 * FUN_0046218c(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  __ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev();
  *puVar1 = &PTR_FUN_009e5de0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_2;
  FUN_00462200();
  return param_1;
}



/* Entry: 00462200; end: 004622cb;  */

void FUN_00462200(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = (ulong)*(char *)(param_1 + 0x57);
  lVar3 = param_1 + 0x40;
  if ((long)uVar2 < 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(ulong *)(param_1 + 0x20) = lVar3 + uVar2;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    *(ulong *)(param_1 + 0x58) = lVar3 + uVar2;
    if (*(char *)(param_1 + 0x57) < '\0') {
      lVar1 = (*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) - 1;
    }
    else {
      lVar1 = 0x16;
    }
    FUN_004625e8(param_1 + 0x40,lVar1);
    lVar1 = (long)*(char *)(param_1 + 0x57);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(long *)(param_1 + 0x38) = lVar3 + lVar1;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      for (; uVar2 >> 0x1f != 0; uVar2 = uVar2 - 0x7fffffff) {
        lVar3 = lVar3 + 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar2 != 0) {
        *(ulong *)(param_1 + 0x30) = lVar3 + uVar2;
      }
    }
  }
  return;
}



/* Entry: 004622cc; end: 004622cf;  */

void FUN_004622cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5de0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00779d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_00998b10)(param_1);
  return;
}



/* Entry: 004622d0; end: 004622e3;  */

void FUN_004622d0(void)

{
  FUN_00462628();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004622e4; end: 004624b3;  */

void FUN_004622e4(undefined8 *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x30);
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (*(ulong *)(param_2 + 0x58) < uVar2) {
    *(ulong *)(param_2 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  if (((param_5 & 0x18) == 0) || (param_4 == 1 && (param_5 & 0x18) == 0x18)) {
LAB_0046234c:
    lVar5 = -1;
  }
  else {
    if (uVar1 == 0) {
      uVar4 = 0;
      if (param_4 == 0) goto LAB_00462374;
LAB_0046232c:
      uVar6 = uVar4;
      if (param_4 != 2) {
        if (param_4 != 1) goto LAB_0046234c;
        if ((param_5 >> 3 & 1) == 0) {
          uVar6 = uVar2 - *(long *)(param_2 + 0x28);
        }
        else {
          uVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        }
      }
    }
    else {
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (*(char *)(param_2 + 0x57) < '\0') {
        puVar3 = (undefined8 *)*puVar3;
      }
      uVar4 = uVar1 - (long)puVar3;
      if (param_4 != 0) goto LAB_0046232c;
LAB_00462374:
      uVar6 = (ulong)param_4;
    }
    lVar5 = -1;
    param_3 = uVar6 + param_3;
    if (((-1 < param_3) && (param_3 <= (long)uVar4)) &&
       ((param_3 == 0 ||
        ((((param_5 >> 3 & 1) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
         (((param_5 >> 4 & 1) == 0 || (uVar2 != 0)))))))) {
      if ((param_5 >> 3 & 1) != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + param_3;
        *(ulong *)(param_2 + 0x20) = uVar1;
      }
      lVar5 = param_3;
      if ((param_5 >> 4 & 1) != 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28) + param_3;
      }
    }
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = lVar5;
  return;
}



/* Entry: 004624b4; end: 004625e7;  */

long * FUN_004624b4(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0xffffffff) {
    return (long *)0x0;
  }
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  lVar6 = param_1[6];
  if (lVar6 == param_1[7]) {
    if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
      return (long *)0xffffffff;
    }
    lVar7 = param_1[5];
    lVar8 = param_1[0xb];
    plVar5 = param_1 + 8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar5,0);
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      lVar3 = (param_1[10] & 0x7fffffffffffffffU) - 1;
    }
    else {
      lVar3 = 0x16;
    }
    FUN_004625e8(plVar5,lVar3);
    lVar3 = (long)*(char *)((long)param_1 + 0x57);
    if (lVar3 < 0) {
      plVar5 = (long *)param_1[8];
      lVar3 = param_1[9];
    }
    lVar6 = (long)plVar5 + (lVar6 - lVar7);
    param_1[5] = (long)plVar5;
    param_1[6] = lVar6;
    param_1[7] = (long)plVar5 + lVar3;
    uVar4 = (long)plVar5 + (lVar8 - lVar7);
  }
  else {
    uVar4 = param_1[0xb];
  }
  if (uVar4 <= lVar6 + 1U) {
    uVar4 = lVar6 + 1;
  }
  param_1[0xb] = uVar4;
  if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
    plVar5 = param_1 + 8;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    param_1[2] = (long)plVar5;
    param_1[3] = (long)plVar5 + (lVar2 - lVar1);
    param_1[4] = uVar4;
  }
  if ((undefined1 *)param_1[6] == (undefined1 *)param_1[7]) {
                    /* WARNING: Could not recover jumptable at 0x0046268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
    return param_1;
  }
  *(undefined1 *)param_1[6] = (char)param_2;
  param_1[6] = param_1[6] + 1;
  return (long *)(ulong)(param_2 & 0xff);
}



/* Entry: 004625e8; end: 004625ef;  */

void FUN_004625e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_009989e0)
            (param_1,param_2,0);
  return;
}



/* Entry: 004625f0; end: 00462627;  */

void FUN_004625f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,long param_7)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm();
  *(long *)(param_1 + 8) = (param_4 - param_6) + param_7;
  return;
}



/* Entry: 00462628; end: 0046265b;  */

void FUN_00462628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5de0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00779d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev_00998b10)(param_1);
  return;
}



/* Entry: 0046265c; end: 0046268f;  */

long * FUN_0046265c(long *param_1,byte param_2)

{
  if ((byte *)param_1[6] != (byte *)param_1[7]) {
    *(byte *)param_1[6] = param_2;
    param_1[6] = param_1[6] + 1;
    return (long *)(ulong)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0046268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  return param_1;
}



/* Entry: 00462690; end: 0046278f;  */

long * FUN_00462690(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char acStack_50 [16];
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,param_1);
  if (acStack_50[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    lVar4 = lVar1;
    FUN_004628b4(lVar1);
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_00462790(lVar5,param_2,lVar2,param_2 + param_3,lVar1,lVar4);
    if (lVar5 == 0) {
      func_0x00462960((long)param_1 + *(long *)(*param_1 + -0x18),5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
  return param_1;
}



/* Entry: 00462790; end: 004628b3;  */

long * FUN_00462790(long *param_1,long param_2,long param_3,long param_4,long param_5,
                   undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = *(long *)(param_5 + 0x18);
  plVar2 = (long *)(param_3 - param_2);
  if (((long)plVar2 < 1) ||
     (plVar1 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_2,plVar2), plVar1 == plVar2)) {
    if (param_4 - param_2 < lVar3) {
      plVar2 = (long *)(lVar3 - (param_4 - param_2));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
                (appuStack_68,plVar2,param_6);
      if (-1 < cStack_51) {
        appuStack_68[0] = appuStack_68;
      }
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x60))(param_1,appuStack_68[0],plVar2);
      func_0x00462ab0();
      if (plVar1 != plVar2) {
        return (long *)0x0;
      }
    }
    plVar2 = (long *)(param_4 - param_3);
    if (((long)plVar2 < 1) ||
       (plVar1 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_3,plVar2), plVar1 == plVar2))
    {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 004628b4; end: 004628ef;  */

int FUN_004628b4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == -1) {
    lVar2 = param_1;
    FUN_004628f0(param_1,0x20);
    iVar1 = (int)lVar2;
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return (int)(char)iVar1;
}



/* Entry: 004628f0; end: 00462953;  */

long * FUN_004628f0(void)

{
  long *plVar1;
  long lStack_28;
  
  __ZNKSt3__18ios_base6getlocEv(&lStack_28);
  plVar1 = &lStack_28;
  FUN_00462954();
  (**(code **)(*plVar1 + 0x38))();
  __ZNSt3__16localeD1Ev(&lStack_28);
  return plVar1;
}



/* Entry: 00462954; end: 0046296b;  */

void FUN_00462954(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_009988b8)
            (param_1,PTR___ZNSt3__15ctypeIcE2idE_00998bc8);
  return;
}



/* Entry: 0046296c; end: 0046298b;  */

void FUN_0046296c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0046298c(param_1,&uStack_11);
  return;
}



/* Entry: 0046298c; end: 004629bf;  */

void FUN_0046298c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004629c0();
                    /* WARNING: Could not recover jumptable at 0x00779b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_00998990)
            (param_1,param_2,param_3);
  return;
}



/* Entry: 004629c0; end: 00462a0b;  */

undefined1  [16] FUN_004629c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x60) >> 3 & 1) == 0) {
      lVar2 = 0;
      lVar1 = 0;
      goto LAB_00462a04;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x58);
    if (*(ulong *)(param_1 + 0x58) < uVar3) {
      *(ulong *)(param_1 + 0x58) = uVar3;
      uVar4 = uVar3;
    }
    lVar2 = *(long *)(param_1 + 0x28);
  }
  lVar1 = uVar4 - lVar2;
LAB_00462a04:
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 00462a0c; end: 00462a53;  */

void FUN_00462a0c(long *param_1,long *param_2)

{
  long lVar1;
  
  func_0x00462a8c();
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_00462628(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00779d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev_00998af0)();
  return;
}



/* Entry: 00462a54; end: 00462b63;  */

void FUN_00462a54(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00462a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 00462b64; end: 00462e1b;  */

void FUN_00462b64(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  long lStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  long lStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_230;
  undefined4 uStack_220;
  long lStack_210;
  code *pcStack_208;
  undefined4 uStack_200;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined4 uStack_160;
  uint uStack_150;
  undefined4 uStack_140;
  long lStack_130;
  code *pcStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined4 uStack_100;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  FUN_00479de4(auStack_2a8,*(undefined8 *)(param_2 + 0x30));
  func_0x0047a428(auStack_2c0,param_2 + 0x48);
  FUN_00479ea0(auStack_2d8,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  FUN_00479ea0(auStack_2f0,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  lVar17 = *(long *)(param_2 + 0x90);
  uVar9 = *(undefined8 *)(param_2 + 0xb0);
  FUN_00479ea0(auStack_308,*(undefined8 *)(param_2 + 0xa8));
  lVar2 = param_2;
  func_0x00457d54();
  lVar3 = param_2 + 0x18;
  uVar10 = uVar9;
  func_0x00457d54();
  puVar4 = auStack_2a8;
  uVar11 = uVar10;
  func_0x00457d54();
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  puVar5 = auStack_2c0;
  uVar12 = uVar11;
  func_0x00457d54();
  puVar6 = auStack_2d8;
  uVar13 = uVar12;
  func_0x00457d54();
  puVar7 = auStack_2f0;
  uVar14 = uVar13;
  func_0x00457d54();
  uVar18 = *(undefined8 *)(param_2 + 0x88);
  uVar16 = *(undefined8 *)(param_2 + 0xa0);
  puVar8 = auStack_308;
  uVar15 = uVar14;
  func_0x00457d54();
  uStack_d0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_280 = 0xd;
  uStack_260 = 0xd;
  uStack_240 = 0xd;
  uStack_220 = 1;
  pcStack_208 = FUN_00462e38;
  uStack_200 = 0xf;
  uStack_1e8 = 0x462ebc;
  uStack_1e0 = 0xf;
  uStack_1c0 = 0xd;
  uStack_1a0 = 0xd;
  uStack_180 = 0xd;
  uStack_160 = 3;
  uStack_140 = 7;
  pcStack_128 = FUN_00462f14;
  uStack_120 = 0xf;
  uStack_100 = 3;
  uStack_e0 = 0xd;
  uStack_c0 = 3;
  uStack_a8 = 0x462fcc;
  uStack_a0 = 0xf;
  uStack_88 = 0x462fcc;
  uStack_80 = 0xf;
  lStack_290 = lVar2;
  uStack_288 = uVar9;
  lStack_270 = lVar3;
  uStack_268 = uVar10;
  puStack_250 = puVar4;
  uStack_248 = uVar11;
  uStack_230 = uVar1;
  lStack_210 = param_2 + 0x3c;
  lStack_1f0 = param_2 + 0x40;
  puStack_1d0 = puVar5;
  uStack_1c8 = uVar12;
  puStack_1b0 = puVar6;
  uStack_1a8 = uVar13;
  puStack_190 = puVar7;
  uStack_188 = uVar14;
  uStack_170 = uVar18;
  uStack_150 = (uint)(lVar17 != 0);
  lStack_130 = param_2 + 0x98;
  uStack_110 = uVar16;
  puStack_f0 = puVar8;
  uStack_e8 = uVar15;
  lStack_b0 = param_2 + 0xc0;
  lStack_90 = param_2 + 0xe0;
  func_0x00461914(
                 "StorageNotification[id: {}, type: {}, timestamp: {}, category: {}, state: {}, source: {}, json: {}, receiveTimestampMs: {}, latestAnnounceTimestampMs: {}, redriveAttemptCount: {}, isRedrivable: {}, suppressionReason: {}, skipDedupe: {}, latestRedriveReminderTimestampMs: {}, hasGroupingData: {}, groupingConversationId: {}, groupingBundleId: {}]"
                 );
  FUN_00721c60(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_308);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
  return;
}



/* Entry: 00462e1c; end: 00462e37;  */

void FUN_00462e1c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 00462e38; end: 00462ee7;  */

void FUN_00462e38(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  FUN_00463074((&PTR_s_Received_009e5e68)[*param_1]);
  *param_3 = uVar1;
  return;
}



/* Entry: 00462ee8; end: 00462f13;  */

void FUN_00462ee8(undefined8 param_1,int param_2,undefined8 *param_3)

{
  FUN_00463074((&PTR_s_MainAppProvider_009e5e98)[param_2],*param_3);
  return;
}



/* Entry: 00462f14; end: 00462f9b;  */

void FUN_00462f14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  uVar1 = *param_3;
  if (*(char *)(param_1 + 4) == '\x01') {
    pcStack_28 = FUN_00462f9c;
    lStack_30 = param_1;
    func_0x004630b8();
    FUN_00721c60(auStack_48);
  }
  else {
    func_0x004630a0();
  }
  FUN_00461998(uVar1,"{}",auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_3 = uVar1;
  return;
}



/* Entry: 00462f9c; end: 00462ff7;  */

void FUN_00462f9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  FUN_00463074("OsPermissionsDisabled");
  *param_3 = uVar1;
  return;
}



/* Entry: 00462ff8; end: 00463073;  */

undefined8 FUN_00462ff8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  long lStack_30;
  long lStack_28;
  
  uVar2 = *param_3;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar1 = param_2;
    FUN_00457d70();
    lStack_30 = param_2;
    lStack_28 = lVar1;
    func_0x004630b8();
    FUN_00721c60(auStack_48);
  }
  else {
    func_0x004630a0();
  }
  FUN_00461998(uVar2,"{}",auStack_48);
  func_0x00463094();
  return uVar2;
}



/* Entry: 00463074; end: 004630c7;  */

void FUN_00463074(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uStack0000000000000008;
  char *pcStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar1 = "{}";
  uStack_28 = 0;
  pcVar2 = pcVar1;
  uStack0000000000000008 = param_1;
  uStack_30 = param_1;
  func_0x00461914();
  pcStack_40 = pcVar1;
  pcStack_38 = pcVar2;
  func_0x004619c4(param_2,&pcStack_40,0xc,&uStack_30);
  return;
}



/* Entry: 004630c8; end: 004631ab;  */

undefined1 * FUN_004630c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  long alStack_c0 [5];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_c8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(alStack_c0,param_3 + 1);
  uStack_98 = 0x463218;
  ppuStack_90 = &PTR_DAT_009e5f28;
  uStack_88 = uStack_c8;
  (**(code **)(alStack_c0[0] + 0x10))(auStack_80,alStack_c0);
  FUN_0064c418(auStack_d8,uVar2,&uStack_98,param_2);
  func_0x00463260();
  puVar1 = auStack_d8;
  func_0x004631ec();
  func_0x00463250();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00463260();
  func_0x00463250();
  __Unwind_Resume(puVar1);
  func_0x00463270();
  return puVar1;
}



/* Entry: 004631ac; end: 00463217;  */

void FUN_004631ac(void)

{
  func_0x00463270();
  return;
}



/* Entry: 00463218; end: 00463347;  */

void FUN_00463218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0046321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 00463348; end: 004635ff;  */

void FUN_00463348(undefined8 *param_1,long param_2,uint param_3,int param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 auStack_118 [80];
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((long)param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 6,param_2 + 0x18);
  param_1[3] = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x70);
  *(short *)((long)param_1 + 0xb2) = (short)*(undefined8 *)(param_2 + 0x88);
  *(bool *)(param_1 + 9) = param_4 == 1;
  *(bool *)((long)param_1 + 0x4a) = param_3 == 1;
  if (param_3 == 1) {
    *(undefined1 *)((long)param_1 + 0x49) = 1;
    uVar2 = 2;
  }
  else if (param_3 < 7) {
    uVar2 = *(undefined4 *)(&UNK_00801e00 + (ulong)param_3 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar2;
  *(bool *)(param_1 + 0x16) = param_3 == 3;
  param_1[5] = param_5;
  FUN_00479ff0(auStack_118,param_2 + 0x48);
  FUN_00463600(param_1 + 0x11,auStack_118);
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_128 = 0;
    goto LAB_00463568;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_0064b608(auStack_a8,param_2 + 0x48,&uStack_78);
  if ((bStack_80 & 1) == 0) {
LAB_00463550:
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_128 = 0;
  }
  else {
    puVar1 = auStack_a8;
    FUN_0064b6ec(puVar1,"sender_username",0xf);
    if ((puVar1 == (undefined1 *)0x0) || (puVar1[8] != '\x04')) goto LAB_00463550;
    FUN_0071e480(&uStack_c0);
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_130 = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_128 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  }
  FUN_00460a8c(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
LAB_00463568:
  FUN_004575fc(param_1 + 0xd,&uStack_140);
  FUN_00457530(&uStack_140);
  *(undefined4 *)(param_1 + 0x15) = uStack_c8;
  *(undefined1 *)((long)param_1 + 0xac) = uStack_c4;
  FUN_00463628(auStack_118);
  return;
}



/* Entry: 00463600; end: 00463627;  */

void FUN_00463600(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != *(char *)(param_2 + 0x18)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
              ();
    return;
  }
  return;
}



/* Entry: 00463628; end: 0046364f;  */

void FUN_00463628(long param_1)

{
  FUN_00459de4(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00463650; end: 00463677;  */

char * FUN_00463650(int param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_s_MainAppProvider_009e5f68)[param_1 - 1U];
  }
  return "Unknown";
}



/* Entry: 00463678; end: 004636db;  */

undefined8 FUN_00463678(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  FUN_004732d8(auStack_40,param_1,0x18);
  if (cStack_28 == '\x01') {
    FUN_004637b0();
    if ((param_1 & 1) != 0) {
      uVar1 = 1;
      goto LAB_004636c8;
    }
    FUN_004637b0();
  }
  uVar1 = 0;
LAB_004636c8:
  FUN_00457530(auStack_40);
  return uVar1;
}



/* Entry: 004636dc; end: 0046374b;  */

bool FUN_004636dc(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = param_2;
  _strlen();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar3 == uVar1) {
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm
              (param_1,0,0xffffffffffffffff,param_2,uVar3);
    bVar2 = (int)param_1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 0046374c; end: 004637af;  */

undefined8 FUN_0046374c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  FUN_004732d8(auStack_40,param_1,0x19);
  if (cStack_28 == '\x01') {
    FUN_004637b0();
    if ((param_1 & 1) != 0) {
      uVar1 = 1;
      goto LAB_0046379c;
    }
    FUN_004637b0();
  }
  uVar1 = 0;
LAB_0046379c:
  FUN_00457530(auStack_40);
  return uVar1;
}



/* Entry: 004637b0; end: 004637c3;  */

bool FUN_004637b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  ulong in_stack_00000008;
  undefined4 in_stack_00000014;
  
  iVar2 = (int)&stack0x00000000;
  _strlen();
  uVar1 = in_stack_00000008;
  if (-1 < (char)in_stack_00000014._3_1_) {
    uVar1 = (ulong)in_stack_00000014._3_1_;
  }
  if (param_2 == uVar1) {
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm();
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 004637c4; end: 00463803;  */

undefined8 * FUN_004637c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_009e5fa0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00463a14(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 00463804; end: 004639d3;  */

undefined1 *
FUN_00463804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puStack_1b0;
  dword *pdStack_1a8;
  undefined8 *puStack_1a0;
  dword *pdStack_198;
  undefined1 auStack_190 [216];
  undefined8 uStack_b8;
  undefined8 *apuStack_b0 [5];
  undefined8 uStack_88;
  undefined8 *apuStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_004654b4(auStack_190,param_2,param_3);
  pdVar3 = &section_00000068.reserved2;
  __Znwm();
  plVar7 = (long *)(pdVar3 + 2);
  *plVar7 = 0;
  *(undefined8 *)(pdVar3 + 4) = 0;
  *(undefined ***)pdVar3 = &PTR_FUN_009e5ff0;
  uStack_88 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_80,param_4 + 1);
  uStack_b8 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_b0,param_5 + 1);
  puVar6 = (undefined8 *)(pdVar3 + 6);
  *puVar6 = &PTR_FUN_009e6040;
  *(undefined8 *)(pdVar3 + 8) = uStack_88;
  (*(code *)apuStack_80[0][2])(pdVar3 + 10,apuStack_80);
  *(undefined8 *)(pdVar3 + 0x14) = uStack_b8;
  (*(code *)apuStack_b0[0][2])(pdVar3 + 0x16,apuStack_b0);
  pdVar3[0x20] = 0;
  *(undefined8 *)(pdVar3 + 0x24) = 0;
  *(undefined8 *)(pdVar3 + 0x22) = 0;
  *(undefined8 *)(pdVar3 + 0x28) = 0;
  *(undefined8 *)(pdVar3 + 0x26) = 0;
  pdVar3[0x2a] = 0x3f800000;
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  (*(code *)*apuStack_80[0])(apuStack_80);
  uVar4 = *(undefined8 *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_1b0 = puVar6;
  pdStack_1a8 = pdVar3;
  puStack_1a0 = puVar6;
  pdStack_198 = pdVar3;
  FUN_00480f84(uVar4,auStack_190,param_1 + 0x18,&puStack_1b0);
  func_0x00464a3c(&puStack_1b0);
  FUN_004639d4(&puStack_1a0);
  puVar5 = auStack_190;
  FUN_0048de4c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00464a3c(&puStack_1b0);
  FUN_004639d4(&puStack_1a0);
  puVar5 = auStack_190;
  FUN_0048de4c();
  func_0x00464a74();
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x0040ce94();
  }
  return puVar5;
}


