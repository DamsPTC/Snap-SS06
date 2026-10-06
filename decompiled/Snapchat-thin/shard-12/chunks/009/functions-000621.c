/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ca6304; end: 109ca632f;  */

void FUN_109ca6304(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca6330; end: 109ca634f;  */

undefined ** FUN_109ca6330(void)

{
  return &PTR_DAT_110b37e88;
}



/* Entry: 109ca6350; end: 109ca648f;  */

long * FUN_109ca6350(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca6490; end: 109ca64ff;  */

ulong FUN_109ca6490(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca6500; end: 109ca652b;  */

void FUN_109ca6500(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca652c; end: 109ca654f;  */

undefined ** FUN_109ca652c(void)

{
  return &PTR_DAT_110b37ed0;
}



/* Entry: 109ca6550; end: 109ca6717;  */

byte * FUN_109ca6550(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar8 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar8 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    pbVar4 = pbVar8 + 1;
    *pbVar8 = 0x10;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar8 = pbVar4;
    if (0x7f < uVar3) {
      do {
        pbVar4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar8 = pbVar4;
      } while (uVar7 != 0);
    }
    pbVar8 = pbVar4 + 1;
    *pbVar4 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(pbVar8,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = *(byte **)param_3;
          pbVar1 = pbVar8 + iVar9;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar8 + ((int)pbVar1 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar8 = pbVar1;
          } while (pbVar4 <= pbVar1);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar8);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar2,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar2,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109ca6718; end: 109ca6783;  */

ulong FUN_109ca6718(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca6784; end: 109ca67af;  */

void FUN_109ca6784(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca67b0; end: 109ca67cb;  */

undefined ** FUN_109ca67b0(void)

{
  return &PTR_DAT_110b37f18;
}



/* Entry: 109ca67cc; end: 109ca68f7;  */

long * FUN_109ca67cc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca68f8; end: 109ca693f;  */

long FUN_109ca68f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca6940; end: 109ca696b;  */

void FUN_109ca6940(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca696c; end: 109ca698b;  */

undefined ** FUN_109ca696c(void)

{
  return &PTR_DAT_110b37f68;
}



/* Entry: 109ca698c; end: 109ca6b3b;  */

byte * FUN_109ca698c(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109ca6b3c; end: 109ca6baf;  */

long FUN_109ca6b3c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca6bb0; end: 109ca6bdb;  */

void FUN_109ca6bb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca6bdc; end: 109ca6bfb;  */

undefined ** FUN_109ca6bdc(void)

{
  return &PTR_DAT_110b37fb8;
}



/* Entry: 109ca6bfc; end: 109ca6d3b;  */

long * FUN_109ca6bfc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca6d3c; end: 109ca6dab;  */

ulong FUN_109ca6d3c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca6dac; end: 109ca6dd7;  */

void FUN_109ca6dac(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca6dd8; end: 109ca6dfb;  */

undefined ** FUN_109ca6dd8(void)

{
  return &PTR_DAT_110b38008;
}



/* Entry: 109ca6dfc; end: 109ca6fc3;  */

byte * FUN_109ca6dfc(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar8 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar8 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar8) {
      do {
        if (param_3[0x38] == 1) {
          pbVar8 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = pbVar1 + ((int)pbVar8 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar8);
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    pbVar4 = pbVar8 + 1;
    *pbVar8 = 0x10;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar8 = pbVar4;
    if (0x7f < uVar3) {
      do {
        pbVar4 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar8 = pbVar4;
      } while (uVar7 != 0);
    }
    pbVar8 = pbVar4 + 1;
    *pbVar4 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(pbVar8,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = *(byte **)param_3;
          pbVar1 = pbVar8 + iVar9;
          do {
            pbVar8 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar8 + ((int)pbVar1 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar8 = pbVar1;
          } while (pbVar4 <= pbVar1);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar8);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar2,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar2,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109ca6fc4; end: 109ca702f;  */

ulong FUN_109ca6fc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca7030; end: 109ca705b;  */

void FUN_109ca7030(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca705c; end: 109ca707b;  */

undefined ** FUN_109ca705c(void)

{
  return &PTR_DAT_110b38060;
}



/* Entry: 109ca707c; end: 109ca71bb;  */

long * FUN_109ca707c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca71bc; end: 109ca722b;  */

ulong FUN_109ca71bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca722c; end: 109ca7273;  */

long FUN_109ca722c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca7274; end: 109ca7287;  */

void FUN_109ca7274(void)

{
  FUN_109ca722c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca7288; end: 109ca72a7;  */

undefined ** FUN_109ca7288(void)

{
  return &PTR_DAT_110b380a8;
}



/* Entry: 109ca72a8; end: 109ca7577;  */

byte * FUN_109ca72a8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca7368:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca7400:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109ca7400;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca7368;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109ca7578; end: 109ca761f;  */

long FUN_109ca7578(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca7620; end: 109ca7667;  */

long FUN_109ca7620(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca7668; end: 109ca767b;  */

void FUN_109ca7668(void)

{
  FUN_109ca7620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca767c; end: 109ca76a3;  */

undefined ** FUN_109ca767c(void)

{
  return &PTR_DAT_110b38100;
}



/* Entry: 109ca76a4; end: 109ca7a3b;  */

byte * FUN_109ca76a4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar17 = *(int *)(param_1 + 0x24);
  if (iVar17 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      iVar17 = *(int *)(param_1 + 0x24);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar17;
    param_2 = param_2 + 5;
  }
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca7790:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca7828:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109ca7828;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca7790;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x28);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109ca7a3c; end: 109ca7afb;  */

long FUN_109ca7a3c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar2;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar4 + lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar4 + lVar2 + 5;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca7afc; end: 109ca7b27;  */

void FUN_109ca7afc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca7b28; end: 109ca7b47;  */

undefined ** FUN_109ca7b28(void)

{
  return &PTR_DAT_110b38150;
}



/* Entry: 109ca7b48; end: 109ca7d53;  */

long * FUN_109ca7b48(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca7d54; end: 109ca7dbb;  */

ulong FUN_109ca7d54(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca7dbc; end: 109ca7e03;  */

long FUN_109ca7dbc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca7e04; end: 109ca7e17;  */

void FUN_109ca7e04(void)

{
  FUN_109ca7dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca7e18; end: 109ca7e3b;  */

undefined ** FUN_109ca7e18(void)

{
  return &PTR_DAT_110b381a8;
}



/* Entry: 109ca7e3c; end: 109ca81eb;  */

byte * FUN_109ca7e3c(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar9 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x28),param_2);
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
      iVar17 = *(int *)(param_1 + 0x30);
    }
    *pbVar9 = 0x15;
    *(int *)(pbVar9 + 1) = iVar17;
    pbVar9 = pbVar9 + 5;
  }
  iVar17 = *(int *)(param_1 + 0x34);
  if (iVar17 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
      iVar17 = *(int *)(param_1 + 0x34);
    }
    *pbVar9 = 0x1d;
    *(int *)(pbVar9 + 1) = iVar17;
    pbVar9 = pbVar9 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x22;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar16 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109ca7f6c:
            param_3[0x38] = 1;
LAB_109ca8004:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar16;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar16 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar16;
              goto LAB_109ca8004;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar16 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca7f6c;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar16);
          pbVar10 = pbVar9;
          pbVar16 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar17 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar17);
          uVar12 = (int)uVar4 - iVar17;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar17;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar17;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109ca81ec; end: 109ca82cb;  */

long FUN_109ca81ec(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = lVar4 + 5;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar4 = lVar4 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  return lVar4;
}



/* Entry: 109ca82cc; end: 109ca82f7;  */

void FUN_109ca82cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca82f8; end: 109ca8317;  */

undefined ** FUN_109ca82f8(void)

{
  return &PTR_DAT_110b38200;
}



/* Entry: 109ca8318; end: 109ca8523;  */

long * FUN_109ca8318(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca8524; end: 109ca858b;  */

ulong FUN_109ca8524(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca858c; end: 109ca85b7;  */

void FUN_109ca858c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca85b8; end: 109ca85d7;  */

undefined ** FUN_109ca85b8(void)

{
  return &PTR_DAT_110b38258;
}



/* Entry: 109ca85d8; end: 109ca87e3;  */

long * FUN_109ca85d8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca87e4; end: 109ca884b;  */

ulong FUN_109ca87e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca884c; end: 109ca8893;  */

long FUN_109ca884c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca8894; end: 109ca88a7;  */

void FUN_109ca8894(void)

{
  FUN_109ca884c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca88a8; end: 109ca88cb;  */

undefined ** FUN_109ca88a8(void)

{
  return &PTR_DAT_110b382b0;
}



/* Entry: 109ca88cc; end: 109ca8c7b;  */

byte * FUN_109ca88cc(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar9 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x28),param_2);
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
      iVar17 = *(int *)(param_1 + 0x30);
    }
    *pbVar9 = 0x15;
    *(int *)(pbVar9 + 1) = iVar17;
    pbVar9 = pbVar9 + 5;
  }
  iVar17 = *(int *)(param_1 + 0x34);
  if (iVar17 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
      iVar17 = *(int *)(param_1 + 0x34);
    }
    *pbVar9 = 0x1d;
    *(int *)(pbVar9 + 1) = iVar17;
    pbVar9 = pbVar9 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x22;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar16 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109ca89fc:
            param_3[0x38] = 1;
LAB_109ca8a94:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar16;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar16 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar16;
              goto LAB_109ca8a94;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar16 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca89fc;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar16);
          pbVar10 = pbVar9;
          pbVar16 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar17 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar17);
          uVar12 = (int)uVar4 - iVar17;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar17;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar17;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109ca8c7c; end: 109ca8d5b;  */

long FUN_109ca8c7c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = lVar4 + 5;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar4 = lVar4 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  return lVar4;
}



/* Entry: 109ca8d5c; end: 109ca8d87;  */

void FUN_109ca8d5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca8d88; end: 109ca8da7;  */

undefined ** FUN_109ca8d88(void)

{
  return &PTR_DAT_110b38308;
}



/* Entry: 109ca8da8; end: 109ca8fb3;  */

long * FUN_109ca8da8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(undefined1 *)plVar1 = 0x1d;
    *(int *)((long)plVar1 + 1) = iVar8;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(plVar1,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar6,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar6,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca8fb4; end: 109ca901b;  */

ulong FUN_109ca8fb4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca901c; end: 109ca9047;  */

void FUN_109ca901c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca9048; end: 109ca906b;  */

undefined ** FUN_109ca9048(void)

{
  return &PTR_DAT_110b38360;
}



/* Entry: 109ca906c; end: 109ca920f;  */

long * FUN_109ca906c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar7 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar7;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar6 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca9210; end: 109ca926b;  */

ulong FUN_109ca9210(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca926c; end: 109ca92b3;  */

long FUN_109ca926c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca92b4; end: 109ca92c7;  */

void FUN_109ca92b4(void)

{
  FUN_109ca926c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca92c8; end: 109ca92ef;  */

undefined ** FUN_109ca92c8(void)

{
  return &PTR_DAT_110b383b8;
}



/* Entry: 109ca92f0; end: 109ca963b;  */

byte * FUN_109ca92f0(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  pbVar9 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar9 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x28),param_2);
  }
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 != 0) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
      iVar17 = *(int *)(param_1 + 0x30);
    }
    *pbVar9 = 0x15;
    *(int *)(pbVar9 + 1) = iVar17;
    pbVar9 = pbVar9 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = *(byte **)param_3;
    if (pbVar3 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= pbVar9);
    }
    pbVar3 = pbVar9 + 1;
    *pbVar9 = 0x1a;
    if (0x7f < uVar12) {
      do {
        pbVar9 = pbVar3;
        pbVar3 = pbVar9 + 1;
        *pbVar9 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    pbVar9 = pbVar9 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar3 = param_3 + 0x10;
    puVar14 = puVar13;
    do {
      pbVar10 = pbVar9;
      pbVar16 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar9) {
        do {
          pbVar10 = pbVar3;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109ca93f4:
            param_3[0x38] = 1;
LAB_109ca948c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar6 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar16;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar16 + 8);
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)(param_3 + 8) = pbVar16;
              goto LAB_109ca948c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar3,(long)pbVar16 - (long)pbVar3);
            do {
              plVar2 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca93f4;
            } while (uStack_64 == 0);
            puVar8 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar8;
              *(undefined8 *)(param_3 + 0x18) = puVar8[1];
              *(undefined8 *)pbVar3 = uVar18;
              *(byte **)param_3 = pbVar3 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar9 = pbVar10 + ((int)pbVar9 - (int)pbVar16);
          pbVar10 = pbVar9;
          pbVar16 = pbVar6;
        } while (pbVar6 <= pbVar9);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      pbVar9 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar17);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar17 = (int)pbVar3;
          _memcpy(pbVar9,lVar11,(long)iVar17);
          uVar12 = (int)uVar4 - iVar17;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar17;
          pbVar3 = *(byte **)param_3;
          pbVar10 = pbVar9 + iVar17;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar10 = pbVar9 + ((int)pbVar10 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
            pbVar9 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)pbVar9);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(pbVar9,lVar11,(long)(int)uVar12);
      pbVar9 = pbVar9 + (int)uVar12;
    }
    else {
      _memcpy(pbVar9,lVar11,uVar4 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar12;
    }
  }
  return pbVar9;
}



/* Entry: 109ca963c; end: 109ca970f;  */

long FUN_109ca963c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar4 = lVar4 + lVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = lVar4 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x34) = (int)lVar4;
  return lVar4;
}



/* Entry: 109ca9710; end: 109ca973b;  */

void FUN_109ca9710(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca973c; end: 109ca975f;  */

undefined ** FUN_109ca973c(void)

{
  return &PTR_DAT_110b38410;
}



/* Entry: 109ca9760; end: 109ca9903;  */

long * FUN_109ca9760(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar7 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x15;
    *(int *)((long)plVar1 + 1) = iVar7;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar6 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca9904; end: 109ca995f;  */

ulong FUN_109ca9904(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca9960; end: 109ca998b;  */

void FUN_109ca9960(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca998c; end: 109ca99b3;  */

undefined ** FUN_109ca998c(void)

{
  return &PTR_DAT_110b38468;
}



/* Entry: 109ca99b4; end: 109ca9c3b;  */

long * FUN_109ca99b4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uStack_48;
  
  plVar4 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar4 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar1 = plVar4;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),plVar4);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x20);
    }
    *(undefined1 *)plVar1 = 0x18;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      iVar9 = *(int *)(param_1 + 0x24);
    }
    *(undefined1 *)plVar1 = 0x25;
    *(int *)((long)plVar1 + 1) = iVar9;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      iVar9 = *(int *)(param_1 + 0x28);
    }
    *(undefined1 *)plVar1 = 0x2d;
    *(int *)((long)plVar1 + 1) = iVar9;
    plVar1 = (long *)((long)plVar1 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar9 = (int)puVar8;
          _memcpy(plVar1,lVar7,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar9;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar9);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lVar7,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar7,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109ca9c3c; end: 109ca9cc7;  */

long FUN_109ca9c3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca9cc8; end: 109ca9d0f;  */

long FUN_109ca9cc8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca9d10; end: 109ca9d23;  */

void FUN_109ca9d10(void)

{
  FUN_109ca9cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca9d24; end: 109ca9d47;  */

undefined ** FUN_109ca9d24(void)

{
  return &PTR_DAT_110b384c0;
}



/* Entry: 109ca9d48; end: 109caa0df;  */

byte * FUN_109ca9d48(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca9e08:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca9ea0:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109ca9ea0;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca9e08;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109caa0e0; end: 109caa197;  */

long FUN_109caa0e0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109caa198; end: 109caa1df;  */

long FUN_109caa198(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109caa1e0; end: 109caa1f3;  */

void FUN_109caa1e0(void)

{
  FUN_109caa198();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109caa1f4; end: 109caa217;  */

undefined ** FUN_109caa1f4(void)

{
  return &PTR_DAT_110b38510;
}



/* Entry: 109caa218; end: 109caa5af;  */

byte * FUN_109caa218(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caa2d8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109caa370:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109caa370;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caa2d8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109caa5b0; end: 109caa667;  */

long FUN_109caa5b0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109caa668; end: 109caa6af;  */

long FUN_109caa668(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109caa6b0; end: 109caa6c3;  */

void FUN_109caa6b0(void)

{
  FUN_109caa668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109caa6c4; end: 109caa6e7;  */

undefined ** FUN_109caa6c4(void)

{
  return &PTR_DAT_110b38560;
}



/* Entry: 109caa6e8; end: 109caaa7f;  */

byte * FUN_109caa6e8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caa7a8:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109caa840:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109caa840;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caa7a8;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}



/* Entry: 109caaa80; end: 109caab37;  */

long FUN_109caaa80(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 +
          (ulong)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109caab38; end: 109caab7f;  */

long FUN_109caab38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109caab80; end: 109caab93;  */

void FUN_109caab80(void)

{
  FUN_109caab38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109caab94; end: 109caabb7;  */

undefined ** FUN_109caab94(void)

{
  return &PTR_DAT_110b385b0;
}



/* Entry: 109caabb8; end: 109caaf4f;  */

byte * FUN_109caabb8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar13) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar1 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar13;
    puVar14 = *(ulong **)(param_1 + 0x18);
    iVar17 = *(int *)(param_1 + 0x10);
    pbVar4 = (byte *)(param_3 + 2);
    puVar15 = puVar14;
    do {
      pbVar11 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar11 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109caac78:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109caad10:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar18;
              param_3[1] = (long)pbVar10;
              goto LAB_109caad10;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109caac78;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar18;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar11 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar11 + ((int)param_2 - (int)pbVar10);
          pbVar11 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar16 = puVar15 + 1;
      uVar5 = *puVar15;
      uVar6 = uVar5;
      pbVar10 = pbVar11;
      if (0x7f < uVar5) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar11;
        } while (uVar8 != 0);
      }
      param_2 = pbVar11 + 1;
      *pbVar11 = (byte)uVar5;
      puVar15 = puVar16;
    } while (puVar16 < puVar14 + iVar17);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x24);
    }
    *param_2 = 0x10;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar3 = *(byte *)(param_1 + 0x25);
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar12 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar12 = uVar6 + 8;
    }
    uVar13 = (uint)uVar5;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar13) {
        do {
          iVar17 = (int)pbVar4;
          _memcpy(param_2,lVar12,(long)iVar17);
          uVar13 = (int)uVar5 - iVar17;
          uVar5 = (ulong)uVar13;
          lVar12 = lVar12 + iVar17;
          pbVar4 = (byte *)*param_3;
          pbVar11 = param_2 + iVar17;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar11 = (byte *)((long)plVar2 + (long)((int)pbVar11 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar11;
          } while (pbVar4 <= pbVar11);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar13);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar13);
      param_2 = param_2 + (int)uVar13;
    }
    else {
      _memcpy(param_2,lVar12,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar13;
    }
  }
  return param_2;
}


